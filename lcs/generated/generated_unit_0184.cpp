#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0184[4095] = {
    1, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0,
    0, 10, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 19, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 24, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0,
    27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0,
    0, 0, 0, 0, 30, 0, 0, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 35, 0, 36, 0, 37,
    0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40, 0, 41, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0,
    0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 50,
    51, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 58,
    0, 0, 0, 0, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0,
    0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 0,
    0, 0, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 83, 0, 0,
    0, 84, 0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 93, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 95,
    0, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 0, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 101, 0, 0, 0, 102, 0,
    103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122,
    0, 0, 0, 123, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0,
    0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0,
    0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 138, 0, 0, 139, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0,
    0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 149, 0, 0, 0, 0, 0, 150, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 154,
    0, 0, 0, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0,
    0, 162, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 171,
    0, 0, 0, 0, 0, 172, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 182,
    0, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 190, 0, 0, 191, 0, 192, 0,
    193, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 198, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 204,
    0, 0, 0, 0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 213,
    0, 214, 0, 215, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0,
    227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0,
    0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 240, 241, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 248, 0, 249, 0, 250, 0,
    251, 0, 0, 252, 0, 0, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 259, 260, 0, 0, 0, 0, 261, 0,
    262, 0, 0, 0, 0, 0, 0, 263, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 0, 268, 269, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0,
    277, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 0, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289,
    0, 290, 0, 0, 291, 0, 0, 0, 292, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0,
    0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0,
    304, 0, 305, 0, 0, 306, 0, 0, 307, 0, 0, 0, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 0, 311, 0, 0,
    0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 0, 319, 0,
    0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0, 323, 324, 0, 325, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 329, 0, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 334, 335, 0, 336, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0,
    0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 359, 0, 0, 360, 0, 0, 361, 0, 0, 0, 0, 362, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 368, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0, 0,
    371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 374, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383,
    0, 0, 384, 385, 0, 0, 0, 0, 386, 387, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 391, 0, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0,
    396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 400,
    0, 0, 401, 0, 0, 402, 403, 0, 0, 0, 0, 404, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 406, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 419, 0, 0, 420, 0, 0,
    421, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 424, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 429, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 434, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 440, 0, 0, 441,
    0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0,
    0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 458, 0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467,
    0, 0, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0,
    0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 480, 0, 0, 0, 0, 481, 0, 0, 0,
    482, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 488, 0, 489, 0, 490, 0, 0, 0, 491, 0, 0, 492, 0,
    493, 0, 0, 494, 495, 0, 0, 0, 0, 496, 0, 0, 497, 0, 498, 0, 499, 0, 0, 500, 0, 501, 0, 502, 0, 503, 0, 504, 0, 505, 0, 506,
    0, 0, 0, 0, 507, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 516, 517, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 520, 521, 0, 0, 0, 0, 522, 0, 0, 0, 523,
    0, 0, 0, 524, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0,
    0, 0, 527, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532,
    0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 536, 0, 0, 537, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0,
    540, 0, 0, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 545, 0, 546, 0, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 551, 0, 0,
    0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0,
    556, 0, 0, 557, 0, 558, 0, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0,
    0, 0, 0, 0, 567, 0, 0, 568, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 570, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0,
    576, 0, 577, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0,
    0, 580, 0, 0, 0, 581, 0, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 0, 0,
    0, 0, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 0, 594, 0, 595, 596, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0,
    0, 599, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 606, 0,
    607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 609, 0, 0, 0, 0, 0, 0,
    610, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0,
    619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0,
    627, 0, 0, 0, 628, 0, 629, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0,
    0, 642, 0, 0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 649,
    0, 0, 650, 651, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 656, 0, 657, 0, 0, 0, 0, 0, 658,
    0, 0, 0, 659, 0, 660, 0, 0, 661, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 669, 0, 670, 0, 0, 0, 671, 0, 672, 0, 673, 0, 0, 0, 674,
};
void recomp_unit_0184_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AE4000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0184[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AE4000;
    case 2u: goto L_08AE4014;
    case 3u: goto L_08AE4020;
    case 4u: goto L_08AE4064;
    case 5u: goto L_08AE408C;
    case 6u: goto L_08AE40A8;
    case 7u: goto L_08AE40B4;
    case 8u: goto L_08AE40E0;
    case 9u: goto L_08AE40EC;
    case 10u: goto L_08AE4104;
    case 11u: goto L_08AE4110;
    case 12u: goto L_08AE4124;
    case 13u: goto L_08AE4130;
    case 14u: goto L_08AE4170;
    case 15u: goto L_08AE4198;
    case 16u: goto L_08AE41AC;
    case 17u: goto L_08AE41C8;
    case 18u: goto L_08AE41D4;
    case 19u: goto L_08AE4204;
    case 20u: goto L_08AE4210;
    case 21u: goto L_08AE4228;
    case 22u: goto L_08AE4244;
    case 23u: goto L_08AE4254;
    case 24u: goto L_08AE4264;
    case 25u: goto L_08AE4270;
    case 26u: goto L_08AE42E0;
    case 27u: goto L_08AE4300;
    case 28u: goto L_08AE4310;
    case 29u: goto L_08AE4374;
    case 30u: goto L_08AE4390;
    case 31u: goto L_08AE43A0;
    case 32u: goto L_08AE43A4;
    case 33u: goto L_08AE43D4;
    case 34u: goto L_08AE43DC;
    case 35u: goto L_08AE43EC;
    case 36u: goto L_08AE43F4;
    case 37u: goto L_08AE43FC;
    case 38u: goto L_08AE4404;
    case 39u: goto L_08AE4414;
    case 40u: goto L_08AE442C;
    case 41u: goto L_08AE4434;
    case 42u: goto L_08AE443C;
    case 43u: goto L_08AE4448;
    case 44u: goto L_08AE4460;
    case 45u: goto L_08AE4468;
    case 46u: goto L_08AE4470;
    case 47u: goto L_08AE4494;
    case 48u: goto L_08AE44E4;
    case 49u: goto L_08AE44EC;
    case 50u: goto L_08AE44FC;
    case 51u: goto L_08AE4500;
    case 52u: goto L_08AE4524;
    case 53u: goto L_08AE4534;
    case 54u: goto L_08AE454C;
    case 55u: goto L_08AE455C;
    case 56u: goto L_08AE4564;
    case 57u: goto L_08AE4570;
    case 58u: goto L_08AE457C;
    case 59u: goto L_08AE4594;
    case 60u: goto L_08AE459C;
    case 61u: goto L_08AE45A4;
    case 62u: goto L_08AE45AC;
    case 63u: goto L_08AE45C8;
    case 64u: goto L_08AE45E4;
    case 65u: goto L_08AE4604;
    case 66u: goto L_08AE460C;
    case 67u: goto L_08AE4624;
    case 68u: goto L_08AE4634;
    case 69u: goto L_08AE463C;
    case 70u: goto L_08AE4644;
    case 71u: goto L_08AE464C;
    case 72u: goto L_08AE4660;
    case 73u: goto L_08AE4674;
    case 74u: goto L_08AE4694;
    case 75u: goto L_08AE46A0;
    case 76u: goto L_08AE4700;
    case 77u: goto L_08AE4748;
    case 78u: goto L_08AE4754;
    case 79u: goto L_08AE4784;
    case 80u: goto L_08AE479C;
    case 81u: goto L_08AE47B8;
    case 82u: goto L_08AE47EC;
    case 83u: goto L_08AE47F4;
    case 84u: goto L_08AE4804;
    case 85u: goto L_08AE480C;
    case 86u: goto L_08AE4814;
    case 87u: goto L_08AE481C;
    case 88u: goto L_08AE4824;
    case 89u: goto L_08AE482C;
    case 90u: goto L_08AE4834;
    case 91u: goto L_08AE483C;
    case 92u: goto L_08AE4844;
    case 93u: goto L_08AE4848;
    case 94u: goto L_08AE4864;
    case 95u: goto L_08AE487C;
    case 96u: goto L_08AE4898;
    case 97u: goto L_08AE48A4;
    case 98u: goto L_08AE48BC;
    case 99u: goto L_08AE48D8;
    case 100u: goto L_08AE48E0;
    case 101u: goto L_08AE48E8;
    case 102u: goto L_08AE48F8;
    case 103u: goto L_08AE4900;
    case 104u: goto L_08AE4908;
    case 105u: goto L_08AE4910;
    case 106u: goto L_08AE4918;
    case 107u: goto L_08AE4920;
    case 108u: goto L_08AE4928;
    case 109u: goto L_08AE4930;
    case 110u: goto L_08AE4938;
    case 111u: goto L_08AE493C;
    case 112u: goto L_08AE4958;
    case 113u: goto L_08AE4970;
    case 114u: goto L_08AE498C;
    case 115u: goto L_08AE4998;
    case 116u: goto L_08AE49B0;
    case 117u: goto L_08AE49CC;
    case 118u: goto L_08AE49D4;
    case 119u: goto L_08AE49E8;
    case 120u: goto L_08AE49F4;
    case 121u: goto L_08AE4A24;
    case 122u: goto L_08AE4A7C;
    case 123u: goto L_08AE4A8C;
    case 124u: goto L_08AE4AA0;
    case 125u: goto L_08AE4AA8;
    case 126u: goto L_08AE4AB0;
    case 127u: goto L_08AE4ACC;
    case 128u: goto L_08AE4AF8;
    case 129u: goto L_08AE4B04;
    case 130u: goto L_08AE4B24;
    case 131u: goto L_08AE4B30;
    case 132u: goto L_08AE4B38;
    case 133u: goto L_08AE4B48;
    case 134u: goto L_08AE4B58;
    case 135u: goto L_08AE4B6C;
    case 136u: goto L_08AE4B84;
    case 137u: goto L_08AE4B9C;
    case 138u: goto L_08AE4BAC;
    case 139u: goto L_08AE4BB8;
    case 140u: goto L_08AE4BBC;
    case 141u: goto L_08AE4C10;
    case 142u: goto L_08AE4C1C;
    case 143u: goto L_08AE4C28;
    case 144u: goto L_08AE4C78;
    case 145u: goto L_08AE4C8C;
    case 146u: goto L_08AE4CA0;
    case 147u: goto L_08AE4CB4;
    case 148u: goto L_08AE4CD4;
    case 149u: goto L_08AE4D0C;
    case 150u: goto L_08AE4D24;
    case 151u: goto L_08AE4D3C;
    case 152u: goto L_08AE4D4C;
    case 153u: goto L_08AE4D64;
    case 154u: goto L_08AE4D7C;
    case 155u: goto L_08AE4D94;
    case 156u: goto L_08AE4DA4;
    case 157u: goto L_08AE4DBC;
    case 158u: goto L_08AE4DCC;
    case 159u: goto L_08AE4DD0;
    case 160u: goto L_08AE4DD8;
    case 161u: goto L_08AE4DF8;
    case 162u: goto L_08AE4E04;
    case 163u: goto L_08AE4E0C;
    case 164u: goto L_08AE4E20;
    case 165u: goto L_08AE4E38;
    case 166u: goto L_08AE4E40;
    case 167u: goto L_08AE4E48;
    case 168u: goto L_08AE4E50;
    case 169u: goto L_08AE4E5C;
    case 170u: goto L_08AE4E74;
    case 171u: goto L_08AE4E7C;
    case 172u: goto L_08AE4E94;
    case 173u: goto L_08AE4E9C;
    case 174u: goto L_08AE4EA8;
    case 175u: goto L_08AE4EC0;
    case 176u: goto L_08AE4EC8;
    case 177u: goto L_08AE4ED8;
    case 178u: goto L_08AE4EF0;
    case 179u: goto L_08AE4EFC;
    case 180u: goto L_08AE4F44;
    case 181u: goto L_08AE4F70;
    case 182u: goto L_08AE4F7C;
    case 183u: goto L_08AE4F8C;
    case 184u: goto L_08AE4F9C;
    case 185u: goto L_08AE4FA4;
    case 186u: goto L_08AE4FAC;
    case 187u: goto L_08AE4FBC;
    case 188u: goto L_08AE4FD8;
    case 189u: goto L_08AE4FE0;
    case 190u: goto L_08AE4FE4;
    case 191u: goto L_08AE4FF0;
    case 192u: goto L_08AE4FF8;
    case 193u: goto L_08AE5000;
    case 194u: goto L_08AE5018;
    case 195u: goto L_08AE5028;
    case 196u: goto L_08AE5030;
    case 197u: goto L_08AE5038;
    case 198u: goto L_08AE5044;
    case 199u: goto L_08AE5050;
    case 200u: goto L_08AE5080;
    case 201u: goto L_08AE5090;
    case 202u: goto L_08AE50A0;
    case 203u: goto L_08AE50CC;
    case 204u: goto L_08AE50FC;
    case 205u: goto L_08AE5110;
    case 206u: goto L_08AE511C;
    case 207u: goto L_08AE512C;
    case 208u: goto L_08AE513C;
    case 209u: goto L_08AE5148;
    case 210u: goto L_08AE515C;
    case 211u: goto L_08AE5164;
    case 212u: goto L_08AE516C;
    case 213u: goto L_08AE517C;
    case 214u: goto L_08AE5184;
    case 215u: goto L_08AE518C;
    case 216u: goto L_08AE519C;
    case 217u: goto L_08AE51A4;
    case 218u: goto L_08AE51AC;
    case 219u: goto L_08AE51B4;
    case 220u: goto L_08AE51BC;
    case 221u: goto L_08AE51C8;
    case 222u: goto L_08AE51D0;
    case 223u: goto L_08AE51E0;
    case 224u: goto L_08AE51E8;
    case 225u: goto L_08AE51F0;
    case 226u: goto L_08AE51F8;
    case 227u: goto L_08AE5200;
    case 228u: goto L_08AE5224;
    case 229u: goto L_08AE5234;
    case 230u: goto L_08AE523C;
    case 231u: goto L_08AE5248;
    case 232u: goto L_08AE5378;
    case 233u: goto L_08AE5384;
    case 234u: goto L_08AE53B0;
    case 235u: goto L_08AE53D4;
    case 236u: goto L_08AE53FC;
    case 237u: goto L_08AE5408;
    case 238u: goto L_08AE5410;
    case 239u: goto L_08AE5420;
    case 240u: goto L_08AE542C;
    case 241u: goto L_08AE5430;
    case 242u: goto L_08AE5448;
    case 243u: goto L_08AE545C;
    case 244u: goto L_08AE5494;
    case 245u: goto L_08AE54A8;
    case 246u: goto L_08AE54D0;
    case 247u: goto L_08AE54E0;
    case 248u: goto L_08AE54E8;
    case 249u: goto L_08AE54F0;
    case 250u: goto L_08AE54F8;
    case 251u: goto L_08AE5500;
    case 252u: goto L_08AE550C;
    case 253u: goto L_08AE551C;
    case 254u: goto L_08AE5528;
    case 255u: goto L_08AE5534;
    case 256u: goto L_08AE5540;
    case 257u: goto L_08AE5548;
    case 258u: goto L_08AE5550;
    case 259u: goto L_08AE5560;
    case 260u: goto L_08AE5564;
    case 261u: goto L_08AE5578;
    case 262u: goto L_08AE5580;
    case 263u: goto L_08AE559C;
    case 264u: goto L_08AE55A8;
    case 265u: goto L_08AE55B4;
    case 266u: goto L_08AE55C0;
    case 267u: goto L_08AE55D4;
    case 268u: goto L_08AE55E4;
    case 269u: goto L_08AE55E8;
    case 270u: goto L_08AE5610;
    case 271u: goto L_08AE561C;
    case 272u: goto L_08AE5644;
    case 273u: goto L_08AE564C;
    case 274u: goto L_08AE5654;
    case 275u: goto L_08AE566C;
    case 276u: goto L_08AE5678;
    case 277u: goto L_08AE5680;
    case 278u: goto L_08AE5688;
    case 279u: goto L_08AE56A0;
    case 280u: goto L_08AE56AC;
    case 281u: goto L_08AE56C4;
    case 282u: goto L_08AE56D0;
    case 283u: goto L_08AE56E8;
    case 284u: goto L_08AE56F0;
    case 285u: goto L_08AE5700;
    case 286u: goto L_08AE5734;
    case 287u: goto L_08AE573C;
    case 288u: goto L_08AE5768;
    case 289u: goto L_08AE577C;
    case 290u: goto L_08AE5784;
    case 291u: goto L_08AE5790;
    case 292u: goto L_08AE57A0;
    case 293u: goto L_08AE57A4;
    case 294u: goto L_08AE594C;
    case 295u: goto L_08AE596C;
    case 296u: goto L_08AE5974;
    case 297u: goto L_08AE5994;
    case 298u: goto L_08AE599C;
    case 299u: goto L_08AE59AC;
    case 300u: goto L_08AE59B8;
    case 301u: goto L_08AE59C4;
    case 302u: goto L_08AE59D0;
    case 303u: goto L_08AE59E4;
    case 304u: goto L_08AE5A00;
    case 305u: goto L_08AE5A08;
    case 306u: goto L_08AE5A14;
    case 307u: goto L_08AE5A20;
    case 308u: goto L_08AE5A34;
    case 309u: goto L_08AE5A3C;
    case 310u: goto L_08AE5A54;
    case 311u: goto L_08AE5A74;
    case 312u: goto L_08AE5A94;
    case 313u: goto L_08AE5AAC;
    case 314u: goto L_08AE5B20;
    case 315u: goto L_08AE5B28;
    case 316u: goto L_08AE5B34;
    case 317u: goto L_08AE5B54;
    case 318u: goto L_08AE5B64;
    case 319u: goto L_08AE5B78;
    case 320u: goto L_08AE5B8C;
    case 321u: goto L_08AE5BC4;
    case 322u: goto L_08AE5BD4;
    case 323u: goto L_08AE5BE4;
    case 324u: goto L_08AE5BE8;
    case 325u: goto L_08AE5BF0;
    case 326u: goto L_08AE5C18;
    case 327u: goto L_08AE5C38;
    case 328u: goto L_08AE5C40;
    case 329u: goto L_08AE5C48;
    case 330u: goto L_08AE5C54;
    case 331u: goto L_08AE5C64;
    case 332u: goto L_08AE5C6C;
    case 333u: goto L_08AE5CB0;
    case 334u: goto L_08AE5CBC;
    case 335u: goto L_08AE5CC0;
    case 336u: goto L_08AE5CC8;
    case 337u: goto L_08AE5CCC;
    case 338u: goto L_08AE5CD4;
    case 339u: goto L_08AE5DE4;
    case 340u: goto L_08AE5DFC;
    case 341u: goto L_08AE5E34;
    case 342u: goto L_08AE5E54;
    case 343u: goto L_08AE5E5C;
    case 344u: goto L_08AE5E9C;
    case 345u: goto L_08AE5EB4;
    case 346u: goto L_08AE5ED0;
    case 347u: goto L_08AE5EE0;
    case 348u: goto L_08AE5EF4;
    case 349u: goto L_08AE5F28;
    case 350u: goto L_08AE5F90;
    case 351u: goto L_08AE5FAC;
    case 352u: goto L_08AE5FF8;
    case 353u: goto L_08AE6004;
    case 354u: goto L_08AE600C;
    case 355u: goto L_08AE6070;
    case 356u: goto L_08AE60A4;
    case 357u: goto L_08AE60BC;
    case 358u: goto L_08AE60C8;
    case 359u: goto L_08AE6104;
    case 360u: goto L_08AE6110;
    case 361u: goto L_08AE611C;
    case 362u: goto L_08AE6130;
    case 363u: goto L_08AE6138;
    case 364u: goto L_08AE6140;
    case 365u: goto L_08AE6150;
    case 366u: goto L_08AE6174;
    case 367u: goto L_08AE61A8;
    case 368u: goto L_08AE61AC;
    case 369u: goto L_08AE61BC;
    case 370u: goto L_08AE61E4;
    case 371u: goto L_08AE6200;
    case 372u: goto L_08AE6248;
    case 373u: goto L_08AE625C;
    case 374u: goto L_08AE6268;
    case 375u: goto L_08AE62A8;
    case 376u: goto L_08AE62B4;
    case 377u: goto L_08AE62BC;
    case 378u: goto L_08AE62CC;
    case 379u: goto L_08AE62D4;
    case 380u: goto L_08AE62F4;
    case 381u: goto L_08AE6334;
    case 382u: goto L_08AE633C;
    case 383u: goto L_08AE637C;
    case 384u: goto L_08AE6388;
    case 385u: goto L_08AE638C;
    case 386u: goto L_08AE63A0;
    case 387u: goto L_08AE63A4;
    case 388u: goto L_08AE63C8;
    case 389u: goto L_08AE641C;
    case 390u: goto L_08AE6428;
    case 391u: goto L_08AE6434;
    case 392u: goto L_08AE6440;
    case 393u: goto L_08AE644C;
    case 394u: goto L_08AE645C;
    case 395u: goto L_08AE6478;
    case 396u: goto L_08AE6480;
    case 397u: goto L_08AE6488;
    case 398u: goto L_08AE64C8;
    case 399u: goto L_08AE64EC;
    case 400u: goto L_08AE64FC;
    case 401u: goto L_08AE6508;
    case 402u: goto L_08AE6514;
    case 403u: goto L_08AE6518;
    case 404u: goto L_08AE652C;
    case 405u: goto L_08AE6538;
    case 406u: goto L_08AE6590;
    case 407u: goto L_08AE65A4;
    case 408u: goto L_08AE65B4;
    case 409u: goto L_08AE65CC;
    case 410u: goto L_08AE65E0;
    case 411u: goto L_08AE65F0;
    case 412u: goto L_08AE6624;
    case 413u: goto L_08AE6640;
    case 414u: goto L_08AE6650;
    case 415u: goto L_08AE6660;
    case 416u: goto L_08AE66B8;
    case 417u: goto L_08AE66C4;
    case 418u: goto L_08AE66D8;
    case 419u: goto L_08AE66E8;
    case 420u: goto L_08AE66F4;
    case 421u: goto L_08AE6700;
    case 422u: goto L_08AE6718;
    case 423u: goto L_08AE6760;
    case 424u: goto L_08AE6770;
    case 425u: goto L_08AE679C;
    case 426u: goto L_08AE67F4;
    case 427u: goto L_08AE67FC;
    case 428u: goto L_08AE685C;
    case 429u: goto L_08AE686C;
    case 430u: goto L_08AE68A0;
    case 431u: goto L_08AE690C;
    case 432u: goto L_08AE6914;
    case 433u: goto L_08AE69BC;
    case 434u: goto L_08AE69D4;
    case 435u: goto L_08AE69E0;
    case 436u: goto L_08AE6A14;
    case 437u: goto L_08AE6A34;
    case 438u: goto L_08AE6A4C;
    case 439u: goto L_08AE6A68;
    case 440u: goto L_08AE6A70;
    case 441u: goto L_08AE6A7C;
    case 442u: goto L_08AE6A8C;
    case 443u: goto L_08AE6A9C;
    case 444u: goto L_08AE6AB0;
    case 445u: goto L_08AE6AB8;
    case 446u: goto L_08AE6B10;
    case 447u: goto L_08AE6B24;
    case 448u: goto L_08AE6B30;
    case 449u: goto L_08AE6B40;
    case 450u: goto L_08AE6B98;
    case 451u: goto L_08AE6BA4;
    case 452u: goto L_08AE6BB8;
    case 453u: goto L_08AE6BC8;
    case 454u: goto L_08AE6BD4;
    case 455u: goto L_08AE6BE8;
    case 456u: goto L_08AE6C0C;
    case 457u: goto L_08AE6C50;
    case 458u: goto L_08AE6C88;
    case 459u: goto L_08AE6C98;
    case 460u: goto L_08AE6CA0;
    case 461u: goto L_08AE6CA8;
    case 462u: goto L_08AE6CF4;
    case 463u: goto L_08AE6CFC;
    case 464u: goto L_08AE6DA4;
    case 465u: goto L_08AE6DBC;
    case 466u: goto L_08AE6DC8;
    case 467u: goto L_08AE6DFC;
    case 468u: goto L_08AE6E1C;
    case 469u: goto L_08AE6E24;
    case 470u: goto L_08AE6E3C;
    case 471u: goto L_08AE6E58;
    case 472u: goto L_08AE6E60;
    case 473u: goto L_08AE6E84;
    case 474u: goto L_08AE6ECC;
    case 475u: goto L_08AE6F60;
    case 476u: goto L_08AE6F8C;
    case 477u: goto L_08AE6FAC;
    case 478u: goto L_08AE6FC0;
    case 479u: goto L_08AE6FC8;
    case 480u: goto L_08AE6FDC;
    case 481u: goto L_08AE6FF0;
    case 482u: goto L_08AE7000;
    case 483u: goto L_08AE7014;
    case 484u: goto L_08AE7024;
    case 485u: goto L_08AE702C;
    case 486u: goto L_08AE7034;
    case 487u: goto L_08AE7044;
    case 488u: goto L_08AE704C;
    case 489u: goto L_08AE7054;
    case 490u: goto L_08AE705C;
    case 491u: goto L_08AE706C;
    case 492u: goto L_08AE7078;
    case 493u: goto L_08AE7080;
    case 494u: goto L_08AE708C;
    case 495u: goto L_08AE7090;
    case 496u: goto L_08AE70A4;
    case 497u: goto L_08AE70B0;
    case 498u: goto L_08AE70B8;
    case 499u: goto L_08AE70C0;
    case 500u: goto L_08AE70CC;
    case 501u: goto L_08AE70D4;
    case 502u: goto L_08AE70DC;
    case 503u: goto L_08AE70E4;
    case 504u: goto L_08AE70EC;
    case 505u: goto L_08AE70F4;
    case 506u: goto L_08AE70FC;
    case 507u: goto L_08AE7110;
    case 508u: goto L_08AE7118;
    case 509u: goto L_08AE7120;
    case 510u: goto L_08AE7148;
    case 511u: goto L_08AE7154;
    case 512u: goto L_08AE7188;
    case 513u: goto L_08AE719C;
    case 514u: goto L_08AE71AC;
    case 515u: goto L_08AE71B4;
    case 516u: goto L_08AE71CC;
    case 517u: goto L_08AE71D0;
    case 518u: goto L_08AE71F4;
    case 519u: goto L_08AE723C;
    case 520u: goto L_08AE7254;
    case 521u: goto L_08AE7258;
    case 522u: goto L_08AE726C;
    case 523u: goto L_08AE727C;
    case 524u: goto L_08AE728C;
    case 525u: goto L_08AE7290;
    case 526u: goto L_08AE72EC;
    case 527u: goto L_08AE7308;
    case 528u: goto L_08AE7314;
    case 529u: goto L_08AE731C;
    case 530u: goto L_08AE734C;
    case 531u: goto L_08AE7360;
    case 532u: goto L_08AE737C;
    case 533u: goto L_08AE7390;
    case 534u: goto L_08AE73A8;
    case 535u: goto L_08AE73BC;
    case 536u: goto L_08AE73C8;
    case 537u: goto L_08AE73D4;
    case 538u: goto L_08AE73DC;
    case 539u: goto L_08AE73E4;
    case 540u: goto L_08AE7400;
    case 541u: goto L_08AE7410;
    case 542u: goto L_08AE7418;
    case 543u: goto L_08AE7440;
    case 544u: goto L_08AE745C;
    case 545u: goto L_08AE7484;
    case 546u: goto L_08AE748C;
    case 547u: goto L_08AE749C;
    case 548u: goto L_08AE74A4;
    case 549u: goto L_08AE74B0;
    case 550u: goto L_08AE74E8;
    case 551u: goto L_08AE74F4;
    case 552u: goto L_08AE7510;
    case 553u: goto L_08AE7528;
    case 554u: goto L_08AE7540;
    case 555u: goto L_08AE7568;
    case 556u: goto L_08AE7580;
    case 557u: goto L_08AE758C;
    case 558u: goto L_08AE7594;
    case 559u: goto L_08AE75A8;
    case 560u: goto L_08AE75B8;
    case 561u: goto L_08AE7614;
    case 562u: goto L_08AE7630;
    case 563u: goto L_08AE763C;
    case 564u: goto L_08AE7648;
    case 565u: goto L_08AE7660;
    case 566u: goto L_08AE7674;
    case 567u: goto L_08AE7690;
    case 568u: goto L_08AE769C;
    case 569u: goto L_08AE76A0;
    case 570u: goto L_08AE770C;
    case 571u: goto L_08AE771C;
    case 572u: goto L_08AE7748;
    case 573u: goto L_08AE7750;
    case 574u: goto L_08AE7764;
    case 575u: goto L_08AE776C;
    case 576u: goto L_08AE7780;
    case 577u: goto L_08AE7788;
    case 578u: goto L_08AE7790;
    case 579u: goto L_08AE77E8;
    case 580u: goto L_08AE7804;
    case 581u: goto L_08AE7814;
    case 582u: goto L_08AE7820;
    case 583u: goto L_08AE782C;
    case 584u: goto L_08AE7848;
    case 585u: goto L_08AE7850;
    case 586u: goto L_08AE7890;
    case 587u: goto L_08AE78A0;
    case 588u: goto L_08AE78CC;
    case 589u: goto L_08AE78D8;
    case 590u: goto L_08AE78E8;
    case 591u: goto L_08AE78F0;
    case 592u: goto L_08AE790C;
    case 593u: goto L_08AE791C;
    case 594u: goto L_08AE7934;
    case 595u: goto L_08AE793C;
    case 596u: goto L_08AE7940;
    case 597u: goto L_08AE7950;
    case 598u: goto L_08AE7978;
    case 599u: goto L_08AE7984;
    case 600u: goto L_08AE79A4;
    case 601u: goto L_08AE79C0;
    case 602u: goto L_08AE79DC;
    case 603u: goto L_08AE79F0;
    case 604u: goto L_08AE7A40;
    case 605u: goto L_08AE7A6C;
    case 606u: goto L_08AE7A78;
    case 607u: goto L_08AE7A80;
    case 608u: goto L_08AE7AD0;
    case 609u: goto L_08AE7AE4;
    case 610u: goto L_08AE7B00;
    case 611u: goto L_08AE7B18;
    case 612u: goto L_08AE7B40;
    case 613u: goto L_08AE7B54;
    case 614u: goto L_08AE7B6C;
    case 615u: goto L_08AE7BA0;
    case 616u: goto L_08AE7BA8;
    case 617u: goto L_08AE7BE4;
    case 618u: goto L_08AE7BF0;
    case 619u: goto L_08AE7C00;
    case 620u: goto L_08AE7C08;
    case 621u: goto L_08AE7C2C;
    case 622u: goto L_08AE7C3C;
    case 623u: goto L_08AE7C44;
    case 624u: goto L_08AE7C4C;
    case 625u: goto L_08AE7C54;
    case 626u: goto L_08AE7C68;
    case 627u: goto L_08AE7C80;
    case 628u: goto L_08AE7C90;
    case 629u: goto L_08AE7C98;
    case 630u: goto L_08AE7C9C;
    case 631u: goto L_08AE7CA8;
    case 632u: goto L_08AE7CB4;
    case 633u: goto L_08AE7CCC;
    case 634u: goto L_08AE7CE0;
    case 635u: goto L_08AE7CEC;
    case 636u: goto L_08AE7D14;
    case 637u: goto L_08AE7D28;
    case 638u: goto L_08AE7D50;
    case 639u: goto L_08AE7D88;
    case 640u: goto L_08AE7DBC;
    case 641u: goto L_08AE7DE4;
    case 642u: goto L_08AE7E04;
    case 643u: goto L_08AE7E10;
    case 644u: goto L_08AE7E20;
    case 645u: goto L_08AE7E28;
    case 646u: goto L_08AE7E3C;
    case 647u: goto L_08AE7E50;
    case 648u: goto L_08AE7E74;
    case 649u: goto L_08AE7E7C;
    case 650u: goto L_08AE7E88;
    case 651u: goto L_08AE7E8C;
    case 652u: goto L_08AE7E98;
    case 653u: goto L_08AE7EA8;
    case 654u: goto L_08AE7EC0;
    case 655u: goto L_08AE7ED4;
    case 656u: goto L_08AE7EDC;
    case 657u: goto L_08AE7EE4;
    case 658u: goto L_08AE7EFC;
    case 659u: goto L_08AE7F0C;
    case 660u: goto L_08AE7F14;
    case 661u: goto L_08AE7F20;
    case 662u: goto L_08AE7F24;
    case 663u: goto L_08AE7F2C;
    case 664u: goto L_08AE7F44;
    case 665u: goto L_08AE7F4C;
    case 666u: goto L_08AE7F80;
    case 667u: goto L_08AE7F94;
    case 668u: goto L_08AE7FB8;
    case 669u: goto L_08AE7FC0;
    case 670u: goto L_08AE7FC8;
    case 671u: goto L_08AE7FD8;
    case 672u: goto L_08AE7FE0;
    case 673u: goto L_08AE7FE8;
    case 674u: goto L_08AE7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AE4000:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE4014u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4014u) goto L_08AE4014;
    return;
L_08AE4014:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[31] = (0x08AE4020u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4020u) goto L_08AE4020;
    return;
L_08AE4020:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4064u);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4064u) goto L_08AE4064;
    return;
L_08AE4064:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AE408Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE408Cu) goto L_08AE408C;
    return;
L_08AE408C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE40A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE40A8u) goto L_08AE40A8;
    return;
L_08AE40A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE40B4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE40B4u) goto L_08AE40B4;
    return;
L_08AE40B4:
    ctx.gpr[4] = (17559u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57917u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (17658u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 21053u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE40E0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE40E0u) goto L_08AE40E0;
    return;
L_08AE40E0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AE40ECu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE40ECu) goto L_08AE40EC;
    return;
L_08AE40EC:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE4104u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4104u) goto L_08AE4104;
    return;
L_08AE4104:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE4110u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4110u) goto L_08AE4110;
    return;
L_08AE4110:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE4124u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4124u) goto L_08AE4124;
    return;
L_08AE4124:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[31] = (0x08AE4130u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4130u) goto L_08AE4130;
    return;
L_08AE4130:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4170u);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4170u) goto L_08AE4170;
    return;
L_08AE4170:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08AE4198u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4198u) goto L_08AE4198;
    return;
L_08AE4198:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
      if (branch_taken) {
          goto L_08AE4254;
      }
      goto L_08AE41AC;
    }
L_08AE41AC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(172));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE41C8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE41C8u) goto L_08AE41C8;
    return;
L_08AE41C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(180));
    ctx.gpr[31] = (0x08AE41D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE41D4u) goto L_08AE41D4;
    return;
L_08AE41D4:
    ctx.gpr[4] = (17447u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63406u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(188));
    ctx.gpr[4] = (17645u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE4204u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4204u) goto L_08AE4204;
    return;
L_08AE4204:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[31] = (0x08AE4210u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4210u) goto L_08AE4210;
    return;
L_08AE4210:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(152));
    ctx.gpr[31] = (0x08AE4228u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AE4228u) goto L_08AE4228;
    return;
L_08AE4228:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4244u);
    ctx.gpr[8] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4244u) goto L_08AE4244;
    return;
L_08AE4244:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE4254u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4254u) goto L_08AE4254;
    return;
L_08AE4254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE43A4;
      }
      goto L_08AE4264;
    }
L_08AE4264:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(1424)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE43A4;
      }
      goto L_08AE4270;
    }
L_08AE4270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1152)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(204));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[22];
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AE42E0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AE42E0u) goto L_08AE42E0;
    return;
L_08AE42E0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(220));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 252u);
    ctx.gpr[6] = (0u | 178u);
    ctx.gpr[7] = (0u | 54u);
    ctx.gpr[31] = (0x08AE4300u);
    ctx.gpr[8] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4300u) goto L_08AE4300;
    return;
L_08AE4300:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE4310u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4310u) goto L_08AE4310;
    return;
L_08AE4310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] >> 31u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(1148)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-47));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[31] = (0x08AE4374u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AE4374u) goto L_08AE4374;
    return;
L_08AE4374:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 252u);
    ctx.gpr[6] = (0u | 178u);
    ctx.gpr[7] = (0u | 54u);
    ctx.gpr[31] = (0x08AE4390u);
    ctx.gpr[8] = (0u | 150u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4390u) goto L_08AE4390;
    return;
L_08AE4390:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE43A0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE43A0u) goto L_08AE43A0;
    return;
L_08AE43A0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AE43A4;
L_08AE43A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4674;
      }
      goto L_08AE43D4;
    }
L_08AE43D4:
    ctx.gpr[31] = (0x08AE43DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 43u, 0x0896C1F4u>(ctx, &aot_mem) && ctx.pc == 0x08AE43DCu) goto L_08AE43DC;
    return;
L_08AE43DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25811)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4674;
      }
      goto L_08AE43EC;
    }
L_08AE43EC:
    ctx.gpr[31] = (0x08AE43F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x08AE43F4u) goto L_08AE43F4;
    return;
L_08AE43F4:
    ctx.gpr[31] = (0x08AE43FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE43FCu) goto L_08AE43FC;
    return;
L_08AE43FC:
    ctx.gpr[31] = (0x08AE4404u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x08AE4404u) goto L_08AE4404;
    return;
L_08AE4404:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE4414u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4414u) goto L_08AE4414;
    return;
L_08AE4414:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE442Cu);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE442Cu) goto L_08AE442C;
    return;
L_08AE442C:
    ctx.gpr[31] = (0x08AE4434u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE4434u) goto L_08AE4434;
    return;
L_08AE4434:
    ctx.gpr[31] = (0x08AE443Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE443Cu) goto L_08AE443C;
    return;
L_08AE443C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE4448u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4448u) goto L_08AE4448;
    return;
L_08AE4448:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4460u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4460u) goto L_08AE4460;
    return;
L_08AE4460:
    ctx.gpr[31] = (0x08AE4468u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4468u) goto L_08AE4468;
    return;
L_08AE4468:
    ctx.gpr[31] = (0x08AE4470u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE4470u) goto L_08AE4470;
    return;
L_08AE4470:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE4494u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE4494u) goto L_08AE4494;
    return;
L_08AE4494:
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16900u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[13]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (16948u << 16u);
      if (branch_taken) {
          goto L_08AE4500;
      }
      goto L_08AE44E4;
    }
L_08AE44E4:
    ctx.gpr[5] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08AE44EC;
L_08AE44EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08AE44EC;
      }
      goto L_08AE44FC;
    }
L_08AE44FC:
    ctx.gpr[5] = (16948u << 16u);
    goto L_08AE4500;
L_08AE4500:
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[5] = (16720u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(228));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17385u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.gpr[31] = (0x08AE4524u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AE4524u) goto L_08AE4524;
    return;
L_08AE4524:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE4534u);
    ctx.gpr[5] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4534u) goto L_08AE4534;
    return;
L_08AE4534:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE454Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE454Cu) goto L_08AE454C;
    return;
L_08AE454C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE455Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE455Cu) goto L_08AE455C;
    return;
L_08AE455C:
    ctx.gpr[31] = (0x08AE4564u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE4564u) goto L_08AE4564;
    return;
L_08AE4564:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AE4570u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE4570u) goto L_08AE4570;
    return;
L_08AE4570:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08AE457Cu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE457Cu) goto L_08AE457C;
    return;
L_08AE457C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AE4594u);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4594u) goto L_08AE4594;
    return;
L_08AE4594:
    ctx.gpr[31] = (0x08AE459Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE459Cu) goto L_08AE459C;
    return;
L_08AE459C:
    ctx.gpr[31] = (0x08AE45A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE45A4u) goto L_08AE45A4;
    return;
L_08AE45A4:
    ctx.gpr[31] = (0x08AE45ACu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE45ACu) goto L_08AE45AC;
    return;
L_08AE45AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[21] = (0u | 43u);
    ctx.gpr[18] = (0u | 70u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE4660;
      }
      goto L_08AE45C8;
    }
L_08AE45C8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[19] = (0u | 8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16128));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(244));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08AE45E4;
L_08AE45E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AE4604u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 436u, 0x0896A860u>(ctx, &aot_mem) && ctx.pc == 0x08AE4604u) goto L_08AE4604;
    return;
L_08AE4604:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4624;
      }
      goto L_08AE460C;
    }
L_08AE460C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE463C;
      }
      goto L_08AE4624;
    }
L_08AE4624:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE463C;
      }
      goto L_08AE4634;
    }
L_08AE4634:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (0u | 0u);
    goto L_08AE463C;
L_08AE463C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AE464C;
      }
      goto L_08AE4644;
    }
L_08AE4644:
    ctx.gpr[21] = (0u | 240u);
    ctx.gpr[18] = (0u | 70u);
    goto L_08AE464C;
L_08AE464C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AE45E4;
      }
      goto L_08AE4660;
    }
L_08AE4660:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AE4674u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6500));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4674u) goto L_08AE4674;
    return;
L_08AE4674:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE4694u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4694u) goto L_08AE4694;
    return;
L_08AE4694:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08AE46A0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE46A0u) goto L_08AE46A0;
    return;
L_08AE46A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE4700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE4748u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4748u) goto L_08AE4748;
    return;
L_08AE4748:
    ctx.gpr[4] = (17064u << 16u);
    ctx.gpr[31] = (0x08AE4754u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4754u) goto L_08AE4754;
    return;
L_08AE4754:
    ctx.gpr[6] = (17164u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17098u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17224u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1216));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (17096u << 16u);
    ctx.gpr[31] = (0x08AE4784u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4784u) goto L_08AE4784;
    return;
L_08AE4784:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE479Cu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE479Cu) goto L_08AE479C;
    return;
L_08AE479C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08AE47B8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE47B8u) goto L_08AE47B8;
    return;
L_08AE47B8:
    ctx.gpr[5] = (17120u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17078u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (17152u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25840)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (17264u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1252));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE48E0;
      }
      goto L_08AE47EC;
    }
L_08AE47EC:
    ctx.gpr[31] = (0x08AE47F4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE47F4u) goto L_08AE47F4;
    return;
L_08AE47F4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE481C;
      }
      goto L_08AE4804;
    }
L_08AE4804:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE4848;
      }
      goto L_08AE480C;
    }
L_08AE480C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AE4834;
      }
      goto L_08AE4814;
    }
L_08AE4814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 13u);
      if (branch_taken) {
          goto L_08AE4848;
      }
      goto L_08AE481C;
    }
L_08AE481C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE483C;
      }
      goto L_08AE4824;
    }
L_08AE4824:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4844;
      }
      goto L_08AE482C;
    }
L_08AE482C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4848;
      }
      goto L_08AE4834;
    }
L_08AE4834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 16u);
      if (branch_taken) {
          goto L_08AE4848;
      }
      goto L_08AE483C;
    }
L_08AE483C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 13u);
      if (branch_taken) {
          goto L_08AE4848;
      }
      goto L_08AE4844;
    }
L_08AE4844:
    ctx.gpr[18] = (0u | 16u);
    goto L_08AE4848;
L_08AE4848:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1168));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE4864u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4864u) goto L_08AE4864;
    return;
L_08AE4864:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE487Cu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE487Cu) goto L_08AE487C;
    return;
L_08AE487C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE4898u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE4898u) goto L_08AE4898;
    return;
L_08AE4898:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE48A4u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE48A4u) goto L_08AE48A4;
    return;
L_08AE48A4:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE48BCu);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE48BCu) goto L_08AE48BC;
    return;
L_08AE48BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE48D8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE48D8u) goto L_08AE48D8;
    return;
L_08AE48D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE49CC;
      }
      goto L_08AE48E0;
    }
L_08AE48E0:
    ctx.gpr[31] = (0x08AE48E8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE48E8u) goto L_08AE48E8;
    return;
L_08AE48E8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE4910;
      }
      goto L_08AE48F8;
    }
L_08AE48F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE493C;
      }
      goto L_08AE4900;
    }
L_08AE4900:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AE4928;
      }
      goto L_08AE4908;
    }
L_08AE4908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 14u);
      if (branch_taken) {
          goto L_08AE493C;
      }
      goto L_08AE4910;
    }
L_08AE4910:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE4930;
      }
      goto L_08AE4918;
    }
L_08AE4918:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4938;
      }
      goto L_08AE4920;
    }
L_08AE4920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE493C;
      }
      goto L_08AE4928;
    }
L_08AE4928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 16u);
      if (branch_taken) {
          goto L_08AE493C;
      }
      goto L_08AE4930;
    }
L_08AE4930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 14u);
      if (branch_taken) {
          goto L_08AE493C;
      }
      goto L_08AE4938;
    }
L_08AE4938:
    ctx.gpr[18] = (0u | 16u);
    goto L_08AE493C;
L_08AE493C:
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1168));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE4958u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4958u) goto L_08AE4958;
    return;
L_08AE4958:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE4970u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4970u) goto L_08AE4970;
    return;
L_08AE4970:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE498Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE498Cu) goto L_08AE498C;
    return;
L_08AE498C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE4998u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4998u) goto L_08AE4998;
    return;
L_08AE4998:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE49B0u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE49B0u) goto L_08AE49B0;
    return;
L_08AE49B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AE49CCu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE49CCu) goto L_08AE49CC;
    return;
L_08AE49CC:
    ctx.gpr[31] = (0x08AE49D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x08AE49D4u) goto L_08AE49D4;
    return;
L_08AE49D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE49E8u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE49E8u) goto L_08AE49E8;
    return;
L_08AE49E8:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08AE49F4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE49F4u) goto L_08AE49F4;
    return;
L_08AE49F4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE4A24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE4A7Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4A7Cu) goto L_08AE4A7C;
    return;
L_08AE4A7C:
    ctx.gpr[4] = (16720u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE4A8Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4A8Cu) goto L_08AE4A8C;
    return;
L_08AE4A8C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4AA0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AE4AA0u) goto L_08AE4AA0;
    return;
L_08AE4AA0:
    ctx.gpr[31] = (0x08AE4AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08AE4AA8u) goto L_08AE4AA8;
    return;
L_08AE4AA8:
    ctx.gpr[31] = (0x08AE4AB0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4AB0u) goto L_08AE4AB0;
    return;
L_08AE4AB0:
    ctx.gpr[4] = (16058u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34854u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16202u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49283u);
    ctx.gpr[31] = (0x08AE4ACCu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AE4ACCu) goto L_08AE4ACC;
    return;
L_08AE4ACC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(3984));
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[4] = (17234u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5392));
    ctx.gpr[30] = (2230u << 16u);
    goto L_08AE4AF8;
L_08AE4AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4B58;
      }
      goto L_08AE4B04;
    }
L_08AE4B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AE4B24u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B24u) goto L_08AE4B24;
    return;
L_08AE4B24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AE4B30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 306u, 0x08879CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B30u) goto L_08AE4B30;
    return;
L_08AE4B30:
    ctx.gpr[31] = (0x08AE4B38u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 348u, 0x08879F84u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B38u) goto L_08AE4B38;
    return;
L_08AE4B38:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE4B48u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 637u, 0x08A57550u>(ctx, &aot_mem) && ctx.pc == 0x08AE4B48u) goto L_08AE4B48;
    return;
L_08AE4B48:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08AE4B58;
L_08AE4B58:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE4AF8;
      }
      goto L_08AE4B6C;
    }
L_08AE4B6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25860)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AE4BBC;
      }
      goto L_08AE4B84;
    }
L_08AE4B84:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25864)));
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-25856)));
      if (branch_taken) {
          goto L_08AE4BAC;
      }
      goto L_08AE4B9C;
    }
L_08AE4B9C:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-25856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE4BB8;
      }
      goto L_08AE4BAC;
    }
L_08AE4BAC:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(-25856), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE4BB8;
L_08AE4BB8:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    goto L_08AE4BBC;
L_08AE4BBC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16688u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (17250u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[5] = (17279u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08AE4C10;
L_08AE4C10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE4C28;
      }
      goto L_08AE4C1C;
    }
L_08AE4C1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    goto L_08AE4C28;
L_08AE4C28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[22]);
    ctx.gpr[5] = (17230u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16688u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-25856)));
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4C8C;
      }
      goto L_08AE4C78;
    }
L_08AE4C78:
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4C78;
      }
      goto L_08AE4C8C;
    }
L_08AE4C8C:
    ctx.gpr[5] = (16800u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE4CB4;
      }
      goto L_08AE4CA0;
    }
L_08AE4CA0:
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4CA0;
      }
      goto L_08AE4CB4;
    }
L_08AE4CB4:
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE4EC8;
      }
      goto L_08AE4CD4;
    }
L_08AE4CD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (16688u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (17230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4EC8;
      }
      goto L_08AE4D0C;
    }
L_08AE4D0C:
    ctx.gpr[5] = (16976u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_08AE4D64;
      }
      goto L_08AE4D24;
    }
L_08AE4D24:
    ctx.fpr[24] = ctx.fpr[20] - ctx.fpr[17];
    ctx.fpr[13] = ctx.fpr[24] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4D4C;
      }
      goto L_08AE4D3C;
    }
L_08AE4D3C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4D4C;
      }
      goto L_08AE4D4C;
    }
L_08AE4D4C:
    ctx.fpr[13] = ctx.fpr[24] / ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    goto L_08AE4D64;
L_08AE4D64:
    ctx.gpr[5] = (17210u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4DBC;
      }
      goto L_08AE4D7C;
    }
L_08AE4D7C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4DBC;
      }
      goto L_08AE4D94;
    }
L_08AE4D94:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4DBC;
      }
      goto L_08AE4DA4;
    }
L_08AE4DA4:
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    goto L_08AE4DBC;
L_08AE4DBC:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE4DD0;
      }
      goto L_08AE4DCC;
    }
L_08AE4DCC:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_08AE4DD0;
L_08AE4DD0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4EC8;
      }
      goto L_08AE4DD8;
    }
L_08AE4DD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AE4DF8u);
    ctx.gpr[11] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1D0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4DF8u) goto L_08AE4DF8;
    return;
L_08AE4DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08AE4E04u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 306u, 0x08879CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E04u) goto L_08AE4E04;
    return;
L_08AE4E04:
    ctx.gpr[31] = (0x08AE4E0Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 348u, 0x08879F84u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E0Cu) goto L_08AE4E0C;
    return;
L_08AE4E0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE4E20u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E20u) goto L_08AE4E20;
    return;
L_08AE4E20:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE4E38u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E38u) goto L_08AE4E38;
    return;
L_08AE4E38:
    ctx.gpr[31] = (0x08AE4E40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E40u) goto L_08AE4E40;
    return;
L_08AE4E40:
    ctx.gpr[31] = (0x08AE4E48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E48u) goto L_08AE4E48;
    return;
L_08AE4E48:
    ctx.gpr[31] = (0x08AE4E50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E50u) goto L_08AE4E50;
    return;
L_08AE4E50:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE4E5Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E5Cu) goto L_08AE4E5C;
    return;
L_08AE4E5C:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE4E74u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E74u) goto L_08AE4E74;
    return;
L_08AE4E74:
    ctx.gpr[31] = (0x08AE4E7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E7Cu) goto L_08AE4E7C;
    return;
L_08AE4E7C:
    ctx.gpr[6] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE4E94u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AE4E94u) goto L_08AE4E94;
    return;
L_08AE4E94:
    ctx.gpr[31] = (0x08AE4E9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4E9Cu) goto L_08AE4E9C;
    return;
L_08AE4E9C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AE4EA8u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4EA8u) goto L_08AE4EA8;
    return;
L_08AE4EA8:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08AE4EC0u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE4EC0u) goto L_08AE4EC0;
    return;
L_08AE4EC0:
    ctx.gpr[31] = (0x08AE4EC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AE4EC8u) goto L_08AE4EC8;
    return;
L_08AE4EC8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE4C10;
      }
      goto L_08AE4ED8;
    }
L_08AE4ED8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE4EF0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4EF0u) goto L_08AE4EF0;
    return;
L_08AE4EF0:
    ctx.gpr[4] = (16672u << 16u);
    ctx.gpr[31] = (0x08AE4EFCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4EFCu) goto L_08AE4EFC;
    return;
L_08AE4EFC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE4F44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1164)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE5200;
      }
      goto L_08AE4F70;
    }
L_08AE4F70:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE4F7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8408));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 559u, 0x08AD69ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE4F7Cu) goto L_08AE4F7C;
    return;
L_08AE4F7C:
    ctx.gpr[5] = (17066u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE4F8Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 427u, 0x08AD9C74u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F8Cu) goto L_08AE4F8C;
    return;
L_08AE4F8C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE4F9Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1352), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 718u, 0x0891B398u>(ctx, &aot_mem) && ctx.pc == 0x08AE4F9Cu) goto L_08AE4F9C;
    return;
L_08AE4F9C:
    ctx.gpr[31] = (0x08AE4FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 776u, 0x089C7330u>(ctx, &aot_mem) && ctx.pc == 0x08AE4FA4u) goto L_08AE4FA4;
    return;
L_08AE4FA4:
    ctx.gpr[31] = (0x08AE4FACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4FACu) goto L_08AE4FAC;
    return;
L_08AE4FAC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8728));
    ctx.gpr[31] = (0x08AE4FBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE4FBCu) goto L_08AE4FBC;
    return;
L_08AE4FBC:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-29204));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[18];
    ctx.gpr[19] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE4FE4;
      }
      goto L_08AE4FD8;
    }
L_08AE4FD8:
    ctx.gpr[31] = (0x08AE4FE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 578u, 0x0892F988u>(ctx, &aot_mem) && ctx.pc == 0x08AE4FE0u) goto L_08AE4FE0;
    return;
L_08AE4FE0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08AE4FE4;
L_08AE4FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE4FF8;
      }
      goto L_08AE4FF0;
    }
L_08AE4FF0:
    ctx.gpr[31] = (0x08AE4FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE4FF8u) goto L_08AE4FF8;
    return;
L_08AE4FF8:
    ctx.gpr[31] = (0x08AE5000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-20436)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 119u, 0x08950A70u>(ctx, &aot_mem) && ctx.pc == 0x08AE5000u) goto L_08AE5000;
    return;
L_08AE5000:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25752)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE5018u);
    ctx.gpr[6] = (16u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 560u, 0x08AD6A18u>(ctx, &aot_mem) && ctx.pc == 0x08AE5018u) goto L_08AE5018;
    return;
L_08AE5018:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE5028u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 415u, 0x089C9D98u>(ctx, &aot_mem) && ctx.pc == 0x08AE5028u) goto L_08AE5028;
    return;
L_08AE5028:
    ctx.gpr[31] = (0x08AE5030u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 633u, 0x0892FD10u>(ctx, &aot_mem) && ctx.pc == 0x08AE5030u) goto L_08AE5030;
    return;
L_08AE5030:
    ctx.gpr[31] = (0x08AE5038u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5038u) goto L_08AE5038;
    return;
L_08AE5038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1168)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE511C;
      }
      goto L_08AE5044;
    }
L_08AE5044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-29204)));
    ctx.gpr[31] = (0x08AE5050u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5050u) goto L_08AE5050;
    return;
L_08AE5050:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[5] & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.gpr[31] = (0x08AE5080u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE5080u) goto L_08AE5080;
    return;
L_08AE5080:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE5090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8380));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 559u, 0x08AD69ECu>(ctx, &aot_mem) && ctx.pc == 0x08AE5090u) goto L_08AE5090;
    return;
L_08AE5090:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE50A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08AE50A0u) goto L_08AE50A0;
    return;
L_08AE50A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[5] & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[31] = (0x08AE50CCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AE50CCu) goto L_08AE50CC;
    return;
L_08AE50CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[19] << (ctx.gpr[5] & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 84u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08AE50FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AE50FCu) goto L_08AE50FC;
    return;
L_08AE50FC:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(84));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE5110u);
    ctx.gpr[6] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08AE5110u) goto L_08AE5110;
    return;
L_08AE5110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1168), ctx.gpr[19]);
    goto L_08AE511C;
L_08AE511C:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1168));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    goto L_08AE512C;
L_08AE512C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AE513Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 901u, 0x08AD3A74u>(ctx, &aot_mem) && ctx.pc == 0x08AE513Cu) goto L_08AE513C;
    return;
L_08AE513C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE5148u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 906u, 0x08AD3AB8u>(ctx, &aot_mem) && ctx.pc == 0x08AE5148u) goto L_08AE5148;
    return;
L_08AE5148:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AE512C;
      }
      goto L_08AE515C;
    }
L_08AE515C:
    ctx.gpr[31] = (0x08AE5164u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE5164u) goto L_08AE5164;
    return;
L_08AE5164:
    ctx.gpr[31] = (0x08AE516Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 778u, 0x089C7354u>(ctx, &aot_mem) && ctx.pc == 0x08AE516Cu) goto L_08AE516C;
    return;
L_08AE516C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE51F0;
      }
      goto L_08AE517C;
    }
L_08AE517C:
    ctx.gpr[31] = (0x08AE5184u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 776u, 0x089C7330u>(ctx, &aot_mem) && ctx.pc == 0x08AE5184u) goto L_08AE5184;
    return;
L_08AE5184:
    ctx.gpr[31] = (0x08AE518Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE518Cu) goto L_08AE518C;
    return;
L_08AE518C:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-8716));
    ctx.gpr[31] = (0x08AE519Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE519Cu) goto L_08AE519C;
    return;
L_08AE519C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AE51AC;
      }
      goto L_08AE51A4;
    }
L_08AE51A4:
    ctx.gpr[31] = (0x08AE51ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 578u, 0x0892F988u>(ctx, &aot_mem) && ctx.pc == 0x08AE51ACu) goto L_08AE51AC;
    return;
L_08AE51AC:
    ctx.gpr[31] = (0x08AE51B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE51B4u) goto L_08AE51B4;
    return;
L_08AE51B4:
    ctx.gpr[31] = (0x08AE51BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE51BCu) goto L_08AE51BC;
    return;
L_08AE51BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE51C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8344));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE51C8u) goto L_08AE51C8;
    return;
L_08AE51C8:
    ctx.gpr[31] = (0x08AE51D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE51D0u) goto L_08AE51D0;
    return;
L_08AE51D0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1160));
    ctx.gpr[31] = (0x08AE51E0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8340));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 896u, 0x08AD3A2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE51E0u) goto L_08AE51E0;
    return;
L_08AE51E0:
    ctx.gpr[31] = (0x08AE51E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE51E8u) goto L_08AE51E8;
    return;
L_08AE51E8:
    ctx.gpr[31] = (0x08AE51F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 778u, 0x089C7354u>(ctx, &aot_mem) && ctx.pc == 0x08AE51F0u) goto L_08AE51F0;
    return;
L_08AE51F0:
    ctx.gpr[31] = (0x08AE51F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE51F8u) goto L_08AE51F8;
    return;
L_08AE51F8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1164), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AE5200;
L_08AE5200:
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
L_08AE5224:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE5234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0182_entry, 182u, 818u, 0x08ADF1D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE5234u) goto L_08AE5234;
    return;
L_08AE5234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE523C;
      }
      goto L_08AE523C;
    }
L_08AE523C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29276)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29280)));
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29272), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29248)));
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-29252)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29244), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[16] = (2230u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29236), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[12] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-29264), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(26512)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-5912), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[17] / ctx.fpr[12];
    ctx.gpr[14] = (2230u << 16u);
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-29268), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (16281u << 16u);
    ctx.gpr[6] = (ctx.gpr[7] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[8] = (16268u << 16u);
    ctx.gpr[15] = (2230u << 16u);
    ctx.gpr[24] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[8] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-29260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[25] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-29256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[11] = (15744u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-29240), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[2] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[13] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29232), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[19] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-7176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (ctx.gpr[13] + static_cast<std::uint32_t>(-7176));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4832));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-29224), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE5378u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 610u, 0x08AD6E08u>(ctx, &aot_mem) && ctx.pc == 0x08AE5378u) goto L_08AE5378;
    return;
L_08AE5378:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE5384u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25736));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08AE5384u) goto L_08AE5384;
    return;
L_08AE5384:
    ctx.gpr[4] = (2278u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6496));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AE53B0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 718u, 0x08ADAD94u>(ctx, &aot_mem) && ctx.pc == 0x08AE53B0u) goto L_08AE53B0;
    return;
L_08AE53B0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE53D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (2278u << 16u);
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6368));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-7116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE53FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08AE53FCu) goto L_08AE53FC;
    return;
L_08AE53FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE5408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7000));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5408u) goto L_08AE5408;
    return;
L_08AE5408:
    ctx.gpr[31] = (0x08AE5410u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5410u) goto L_08AE5410;
    return;
L_08AE5410:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AE5420u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6988));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 109u, 0x08A0D19Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5420u) goto L_08AE5420;
    return;
L_08AE5420:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE542Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25660), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x08AE542Cu) goto L_08AE542C;
    return;
L_08AE542C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08AE5430;
L_08AE5430:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(407), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08AE5430;
      }
      goto L_08AE5448;
    }
L_08AE5448:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08AE545C;
L_08AE545C:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08AE545C;
      }
      goto L_08AE5494;
    }
L_08AE5494:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE54A8:
    ctx.gpr[10] = (2278u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-6368));
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(2500));
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(5000));
    ctx.gpr[5] = (ctx.gpr[8] + static_cast<std::uint32_t>(10000));
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(20000));
    goto L_08AE54D0;
L_08AE54D0:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(406)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 3 ? 1u : 0u);
        goto L_08AE54F0;
    }
    goto L_08AE54E0;
L_08AE54E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE5564;
      }
      goto L_08AE54E8;
    }
L_08AE54E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5500;
      }
      goto L_08AE54F0;
    }
L_08AE54F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5550;
      }
      goto L_08AE54F8;
    }
L_08AE54F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5564;
      }
      goto L_08AE5500;
    }
L_08AE5500:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(407)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5548;
      }
      goto L_08AE550C;
    }
L_08AE550C:
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(ctx.gpr[9]));
      if (branch_taken) {
          goto L_08AE5528;
      }
      goto L_08AE551C;
    }
L_08AE551C:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AE5548;
      }
      goto L_08AE5528;
    }
L_08AE5528:
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[2]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5540;
      }
      goto L_08AE5534;
    }
L_08AE5534:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE5548;
      }
      goto L_08AE5540;
    }
L_08AE5540:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    goto L_08AE5548;
L_08AE5548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5564;
      }
      goto L_08AE5550;
    }
L_08AE5550:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(396)));
    ctx.gpr[2] = (ctx.gpr[2] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5564;
      }
      goto L_08AE5560;
    }
L_08AE5560:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(0u));
    goto L_08AE5564;
L_08AE5564:
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(407), static_cast<std::uint8_t>(0u));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[11]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(416));
      if (branch_taken) {
          goto L_08AE54D0;
      }
      goto L_08AE5578;
    }
L_08AE5578:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5580:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AE559Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE559Cu) goto L_08AE559C;
    return;
L_08AE559C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AE55A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE55A8u) goto L_08AE55A8;
    return;
L_08AE55A8:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08AE55B4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE55B4u) goto L_08AE55B4;
    return;
L_08AE55B4:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08AE55C0u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE55C0u) goto L_08AE55C0;
    return;
L_08AE55C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25660)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AE55D4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE55D4u) goto L_08AE55D4;
    return;
L_08AE55D4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE59AC;
      }
      goto L_08AE55E4;
    }
L_08AE55E4:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    goto L_08AE55E8;
L_08AE55E8:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6368));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(406)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE599C;
      }
      goto L_08AE5610;
    }
L_08AE5610:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AE599C;
      }
      goto L_08AE561C;
    }
L_08AE561C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE5678;
      }
      goto L_08AE5644;
    }
L_08AE5644:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AE56F0;
      }
      goto L_08AE564C;
    }
L_08AE564C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AE56AC;
      }
      goto L_08AE5654;
    }
L_08AE5654:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AE566Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE566Cu) goto L_08AE566C;
    return;
L_08AE566C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE56F0;
      }
      goto L_08AE5678;
    }
L_08AE5678:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE56D0;
      }
      goto L_08AE5680;
    }
L_08AE5680:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE56F0;
      }
      goto L_08AE5688;
    }
L_08AE5688:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 132u);
    ctx.gpr[6] = (0u | 34u);
    ctx.gpr[7] = (0u | 11u);
    ctx.gpr[31] = (0x08AE56A0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE56A0u) goto L_08AE56A0;
    return;
L_08AE56A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE56F0;
      }
      goto L_08AE56AC;
    }
L_08AE56AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 90u);
    ctx.gpr[6] = (0u | 62u);
    ctx.gpr[7] = (0u | 9u);
    ctx.gpr[31] = (0x08AE56C4u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE56C4u) goto L_08AE56C4;
    return;
L_08AE56C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE56F0;
      }
      goto L_08AE56D0;
    }
L_08AE56D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 108u);
    ctx.gpr[6] = (0u | 108u);
    ctx.gpr[7] = (0u | 96u);
    ctx.gpr[31] = (0x08AE56E8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AE56E8u) goto L_08AE56E8;
    return;
L_08AE56E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08AE56F0;
L_08AE56F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(406)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AE5734;
      }
      goto L_08AE5700;
    }
L_08AE5700:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] << 9u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6368));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(392)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(396)));
        goto L_08AE573C;
    }
    goto L_08AE5734;
L_08AE5734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 255u);
      if (branch_taken) {
          goto L_08AE5768;
      }
      goto L_08AE573C;
    }
L_08AE573C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(392)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[5] << 8u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    goto L_08AE5768;
L_08AE5768:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE594C;
      }
      goto L_08AE577C;
    }
L_08AE577C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 128u);
      if (branch_taken) {
          goto L_08AE57A0;
      }
      goto L_08AE5784;
    }
L_08AE5784:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE57A4;
      }
      goto L_08AE5790;
    }
L_08AE5790:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(406)));
    ctx.gpr[9] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AE57A4;
      }
      goto L_08AE57A0;
    }
L_08AE57A0:
    ctx.gpr[5] = (0u | 0u);
    goto L_08AE57A4;
L_08AE57A4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20144));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[6] << 4u);
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.gpr[10] = (ctx.gpr[6] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[16] + ctx.gpr[10]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (15820u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[11] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.gpr[10] = (16544u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] | 20972u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.gpr[9] = (2232u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(20144));
    ctx.gpr[10] = (ctx.gpr[6] << 6u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(59), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[9] = (ctx.gpr[6] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[16] + ctx.gpr[9]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(256)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(320)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[17];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[9]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[9] = (16544u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[9] = (ctx.gpr[9] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE577C;
      }
      goto L_08AE594C;
    }
L_08AE594C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x08AE596Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20144));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868570u>(ctx, &aot_mem) && ctx.pc == 0x08AE596Cu) goto L_08AE596C;
    return;
L_08AE596C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE599C;
      }
      goto L_08AE5974;
    }
L_08AE5974:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7116));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08AE5994u);
    ctx.gpr[4] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886886Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE5994u) goto L_08AE5994;
    return;
L_08AE5994:
    ctx.gpr[31] = (0x08AE599Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868854u>(ctx, &aot_mem) && ctx.pc == 0x08AE599Cu) goto L_08AE599C;
    return;
L_08AE599C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AE55E8;
      }
      goto L_08AE59AC;
    }
L_08AE59AC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AE59B8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE59B8u) goto L_08AE59B8;
    return;
L_08AE59B8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AE59C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE59C4u) goto L_08AE59C4;
    return;
L_08AE59C4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AE59D0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE59D0u) goto L_08AE59D0;
    return;
L_08AE59D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE59E4:
    ctx.gpr[8] = (2278u << 16u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-6368));
    ctx.gpr[3] = (0u | 0u);
    ctx.gpr[2] = (ctx.gpr[9] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    goto L_08AE5A00;
L_08AE5A00:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5A34;
      }
      goto L_08AE5A08;
    }
L_08AE5A08:
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(406)));
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08AE5A20;
      }
      goto L_08AE5A14;
    }
L_08AE5A14:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(384)));
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AE5A34;
      }
      goto L_08AE5A20;
    }
L_08AE5A20:
    ctx.gpr[3] = (ctx.gpr[3] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(416));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(416));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[3]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE5A00;
      }
      goto L_08AE5A34;
    }
L_08AE5A34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5C38;
      }
      goto L_08AE5A3C;
    }
L_08AE5A3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(400)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 3u);
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE5A74;
      }
      goto L_08AE5A54;
    }
L_08AE5A54:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE5CCC;
      }
      goto L_08AE5A74;
    }
L_08AE5A74:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(388)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(407), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[3] - ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(101) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5C18;
      }
      goto L_08AE5A94;
    }
L_08AE5A94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(388), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[2]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5BF0;
      }
      goto L_08AE5AAC;
    }
L_08AE5AAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(404), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
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
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-12)));
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[15];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[17] = std::sqrt(ctx.fpr[17]);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE5B28;
      }
      goto L_08AE5B20;
    }
L_08AE5B20:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08AE5B34;
      }
      goto L_08AE5B28;
    }
L_08AE5B28:
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = ctx.fpr[18] / ctx.fpr[19];
    ctx.fpr[16] = ctx.fpr[16] / ctx.fpr[19];
    goto L_08AE5B34;
L_08AE5B34:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[19];
    ctx.fpr[18] = std::sqrt(ctx.fpr[18]);
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE5B64;
      }
      goto L_08AE5B54;
    }
L_08AE5B54:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08AE5B78;
      }
      goto L_08AE5B64;
    }
L_08AE5B64:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[18];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AE5B78;
L_08AE5B78:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08AE5B8C;
    }
    goto L_08AE5B8C;
L_08AE5B8C:
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[5] = (15872u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[11] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE5BD4;
      }
      goto L_08AE5BC4;
    }
L_08AE5BC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(260)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08AE5BD4;
L_08AE5BD4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5BE8;
      }
      goto L_08AE5BE4;
    }
L_08AE5BE4:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AE5BE8;
L_08AE5BE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CCC;
      }
      goto L_08AE5BF0;
    }
L_08AE5BF0:
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(392), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(396), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08AE5CCC;
      }
      goto L_08AE5C18;
    }
L_08AE5C18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(404))))));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[8]);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CCC;
      }
      goto L_08AE5C38;
    }
L_08AE5C38:
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AE5C40;
L_08AE5C40:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5C64;
      }
      goto L_08AE5C48;
    }
L_08AE5C48:
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(406)));
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5C64;
      }
      goto L_08AE5C54;
    }
L_08AE5C54:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(416));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[10]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE5C40;
      }
      goto L_08AE5C64;
    }
L_08AE5C64:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CC8;
      }
      goto L_08AE5C6C;
    }
L_08AE5C6C:
    ctx.gpr[9] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(406), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(407), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(404), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1000));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(388), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CBC;
      }
      goto L_08AE5CB0;
    }
L_08AE5CB0:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE5CC0;
      }
      goto L_08AE5CBC;
    }
L_08AE5CBC:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(400), ctx.gpr[6]);
    goto L_08AE5CC0;
L_08AE5CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE5CCC;
      }
      goto L_08AE5CC8;
    }
L_08AE5CC8:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    goto L_08AE5CCC;
L_08AE5CCC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5CD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25716)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25720)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[8] = (ctx.gpr[5] | 14571u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25712), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25692)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[3] = (2230u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25680)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-25684)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25676), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-25668), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2230u << 16u);
    ctx.gpr[12] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-25704), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-25708), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (15744u << 16u);
    ctx.gpr[14] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[7] = (16281u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[15] = (2230u << 16u);
    ctx.gpr[3] = (ctx.gpr[7] | 39322u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-25700), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-25696), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[24] = (2230u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-25688), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[25] = (2230u << 16u);
    ctx.gpr[17] = (2278u << 16u);
    ctx.gpr[18] = (2225u << 16u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6368));
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-18788));
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 416u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-25672), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE5DE4u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25664), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08AE5DE4u) goto L_08AE5DE4;
    return;
L_08AE5DE4:
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
L_08AE5DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25588), 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(6944));
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7456));
    goto L_08AE5E34;
L_08AE5E34:
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE5E34;
      }
      goto L_08AE5E54;
    }
L_08AE5E54:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE5E5C:
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12960));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[10] = (ctx.gpr[8] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.fpr[18] = ctx.fpr[18] - ctx.fpr[16];
    ctx.gpr[6] = (ctx.gpr[10] & 255u);
    ctx.gpr[10] = (16816u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08AE6004;
      }
      goto L_08AE5E9C;
    }
L_08AE5E9C:
    ctx.gpr[10] = (49584u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[10]);
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6004;
      }
      goto L_08AE5EB4;
    }
L_08AE5EB4:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[0];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6004;
      }
      goto L_08AE5ED0;
    }
L_08AE5ED0:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6004;
      }
      goto L_08AE5EE0;
    }
L_08AE5EE0:
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[11]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6004;
      }
      goto L_08AE5EF4;
    }
L_08AE5EF4:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[19] - ctx.fpr[0];
    ctx.fpr[16] = ctx.fpr[18] + ctx.fpr[16];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[19];
    ctx.fpr[18] = std::sqrt(ctx.fpr[18]);
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AE6004;
      }
      goto L_08AE5F28;
    }
L_08AE5F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[11] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30384));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[9] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (16772u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE5FAC;
      }
      goto L_08AE5F90;
    }
L_08AE5F90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_08AE5FF8;
      }
      goto L_08AE5FAC;
    }
L_08AE5FAC:
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[17];
    ctx.gpr[5] = (16192u << 16u);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[8] = (ctx.gpr[8] << 6u);
    ctx.gpr[4] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE5FF8;
L_08AE5FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-8056), ctx.gpr[4]);
    goto L_08AE6004;
L_08AE6004:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE600C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE6200;
      }
      goto L_08AE6070;
    }
L_08AE6070:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (2275u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(30384));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[30] = (0u | 4u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[23] = (0u | 2u);
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[20] = (2230u << 16u);
    goto L_08AE60A4;
L_08AE60A4:
    ctx.gpr[4] = (ctx.gpr[17] << 6u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE61E4;
      }
      goto L_08AE60BC;
    }
L_08AE60BC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08AE61E4;
      }
      goto L_08AE60C8;
    }
L_08AE60C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE61E4;
      }
      goto L_08AE6104;
    }
L_08AE6104:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08AE611C;
      }
      goto L_08AE6110;
    }
L_08AE6110:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08AE61E4;
      }
      goto L_08AE611C;
    }
L_08AE611C:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
        goto L_08AE6138;
    }
    goto L_08AE6130;
L_08AE6130:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08AE6140;
      }
      goto L_08AE6138;
    }
L_08AE6138:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    goto L_08AE6140;
L_08AE6140:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[28])) && ctx.fpr[13] == ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE61E4;
      }
      goto L_08AE6150;
    }
L_08AE6150:
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08AE61AC;
      }
      goto L_08AE6174;
    }
L_08AE6174:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_08AE61A8;
    }
    goto L_08AE61A8;
L_08AE61A8:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08AE61AC;
L_08AE61AC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE61E4;
      }
      goto L_08AE61BC;
    }
L_08AE61BC:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7960)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE61E4u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 447u, 0x088CF5B4u>(ctx, &aot_mem) && ctx.pc == 0x08AE61E4u) goto L_08AE61E4;
    return;
L_08AE61E4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE60A4;
      }
      goto L_08AE6200;
    }
L_08AE6200:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
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
L_08AE6248:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE625Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7960)));
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 464u, 0x088CF74Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE625Cu) goto L_08AE625C;
    return;
L_08AE625C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6268:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[18] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(6944));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[18]);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    goto L_08AE62A8;
L_08AE62A8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE62B4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x089274C8u>(ctx, &aot_mem) && ctx.pc == 0x08AE62B4u) goto L_08AE62B4;
    return;
L_08AE62B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE62D4;
      }
      goto L_08AE62BC;
    }
L_08AE62BC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AE62A8;
      }
      goto L_08AE62CC;
    }
L_08AE62CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE62F4;
      }
      goto L_08AE62D4;
    }
L_08AE62D4:
    ctx.gpr[5] = (2278u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7456));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE63A4;
      }
      goto L_08AE62F4;
    }
L_08AE62F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16800u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AE6334u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6334u) goto L_08AE6334;
    return;
L_08AE6334:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE63A0;
      }
      goto L_08AE633C;
    }
L_08AE633C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25588)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25588)));
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7456));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.gpr[5] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AE6388;
      }
      goto L_08AE637C;
    }
L_08AE637C:
    ctx.gpr[19] = (ctx.gpr[5] & 31u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u - ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AE638C;
      }
      goto L_08AE6388;
    }
L_08AE6388:
    ctx.gpr[19] = (ctx.gpr[19] & 31u);
    goto L_08AE638C;
L_08AE638C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25588), ctx.gpr[19]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE63A4;
      }
      goto L_08AE63A0;
    }
L_08AE63A0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AE63A4;
L_08AE63A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE63C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(679)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6480;
      }
      goto L_08AE641C;
    }
L_08AE641C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AE6428u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6428u) goto L_08AE6428;
    return;
L_08AE6428:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AE6434u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6434u) goto L_08AE6434;
    return;
L_08AE6434:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08AE6440u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6440u) goto L_08AE6440;
    return;
L_08AE6440:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08AE644Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE644Cu) goto L_08AE644C;
    return;
L_08AE644C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6316)));
    ctx.gpr[31] = (0x08AE645Cu);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE645Cu) goto L_08AE645C;
    return;
L_08AE645C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8056)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(332), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2275u << 16u);
      if (branch_taken) {
          goto L_08AE6488;
      }
      goto L_08AE6478;
    }
L_08AE6478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6E84;
      }
      goto L_08AE6480;
    }
L_08AE6480:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6E84;
      }
      goto L_08AE6488;
    }
L_08AE6488:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16704u << 16u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-25620));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2230u << 16u);
    goto L_08AE64C8;
L_08AE64C8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(332))))));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[6] = (ctx.gpr[6] << 6u);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    ctx.gpr[5] = (16544u << 16u);
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[7];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE64FC;
      }
      goto L_08AE64EC;
    }
L_08AE64EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE6E60;
      }
      goto L_08AE64FC;
    }
L_08AE64FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE6514;
      }
      goto L_08AE6508;
    }
L_08AE6508:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8084)));
      if (branch_taken) {
          goto L_08AE6518;
      }
      goto L_08AE6514;
    }
L_08AE6514:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AE6518;
L_08AE6518:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[12])) && ctx.fpr[26] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6E58;
      }
      goto L_08AE652C;
    }
L_08AE652C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE6A70;
      }
      goto L_08AE6538;
    }
L_08AE6538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE65A4;
      }
      goto L_08AE6590;
    }
L_08AE6590:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08AE65B4;
      }
      goto L_08AE65A4;
    }
L_08AE65A4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[16];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[16];
    goto L_08AE65B4;
L_08AE65B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE65E0;
      }
      goto L_08AE65CC;
    }
L_08AE65CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08AE65F0;
      }
      goto L_08AE65E0;
    }
L_08AE65E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[16];
    goto L_08AE65F0;
L_08AE65F0:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AE6640;
      }
      goto L_08AE6624;
    }
L_08AE6624:
    ctx.gpr[4] = (0u - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
      if (branch_taken) {
          goto L_08AE6650;
      }
      goto L_08AE6640;
    }
L_08AE6640:
    ctx.gpr[4] = (ctx.gpr[6] & 3u);
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_08AE6650;
L_08AE6650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6A68;
      }
      goto L_08AE6660;
    }
L_08AE6660:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (17182u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (0u - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (0u - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[5]);
    goto L_08AE66B8;
L_08AE66B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08AE66D8;
      }
      goto L_08AE66C4;
    }
L_08AE66C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_08AE66E8;
      }
      goto L_08AE66D8;
    }
L_08AE66D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_08AE66E8;
L_08AE66E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6A4C;
      }
      goto L_08AE66F4;
    }
L_08AE66F4:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    goto L_08AE6700;
L_08AE6700:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6A34;
      }
      goto L_08AE6718;
    }
L_08AE6718:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08AE6A34;
      }
      goto L_08AE6760;
    }
L_08AE6760:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6A34;
      }
      goto L_08AE6770;
    }
L_08AE6770:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16840u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6A34;
      }
      goto L_08AE679C;
    }
L_08AE679C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08AE67F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 95u, 0x088C075Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE67F4u) goto L_08AE67F4;
    return;
L_08AE67F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16294u << 16u);
      if (branch_taken) {
          goto L_08AE6A34;
      }
      goto L_08AE67FC;
    }
L_08AE67FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[19] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[18];
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6A34;
      }
      goto L_08AE685C;
    }
L_08AE685C:
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6A34;
      }
      goto L_08AE686C;
    }
L_08AE686C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (16840u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6A34;
      }
      goto L_08AE68A0;
    }
L_08AE68A0:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[16] / ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[17] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[16];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[16];
    ctx.gpr[8] = (0u | 1u);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[31] = (0x08AE690Cu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE690Cu) goto L_08AE690C;
    return;
L_08AE690C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6A34;
      }
      goto L_08AE6914;
    }
L_08AE6914:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(370), static_cast<std::uint16_t>(ctx.gpr[16]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(368), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = ctx.fpr[24] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[21] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 8191u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08AE69BCu);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 587u, 0x08AEA89Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE69BCu) goto L_08AE69BC;
    return;
L_08AE69BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25584)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE69D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE69D4u) goto L_08AE69D4;
    return;
L_08AE69D4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE69E0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE69E0u) goto L_08AE69E0;
    return;
L_08AE69E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x08AE6A14u);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 417u, 0x08A275A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6A14u) goto L_08AE6A14;
    return;
L_08AE6A14:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(368))))));
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(370))))));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    goto L_08AE6A34;
L_08AE6A34:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6700;
      }
      goto L_08AE6A4C;
    }
L_08AE6A4C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE66B8;
      }
      goto L_08AE6A68;
    }
L_08AE6A68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6E58;
      }
      goto L_08AE6A70;
    }
L_08AE6A70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6A9C;
      }
      goto L_08AE6A7C;
    }
L_08AE6A7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE6A9C;
      }
      goto L_08AE6A8C;
    }
L_08AE6A8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AE6E58;
      }
      goto L_08AE6A9C;
    }
L_08AE6A9C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08AE6AB0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    goto L_08AE6268;
L_08AE6AB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6E58;
      }
      goto L_08AE6AB8;
    }
L_08AE6AB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[13];
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[21] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AE6B24;
      }
      goto L_08AE6B10;
    }
L_08AE6B10:
    ctx.gpr[4] = (0u - ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
      if (branch_taken) {
          goto L_08AE6B30;
      }
      goto L_08AE6B24;
    }
L_08AE6B24:
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    goto L_08AE6B30;
L_08AE6B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6E58;
      }
      goto L_08AE6B40;
    }
L_08AE6B40:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (17156u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (16656u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[6] << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[6]);
    ctx.gpr[6] = (0u - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[6]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[5]);
    goto L_08AE6B98;
L_08AE6B98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
      if (branch_taken) {
          goto L_08AE6BB8;
      }
      goto L_08AE6BA4;
    }
L_08AE6BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_08AE6BC8;
      }
      goto L_08AE6BB8;
    }
L_08AE6BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    goto L_08AE6BC8;
L_08AE6BC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
      if (branch_taken) {
          goto L_08AE6E3C;
      }
      goto L_08AE6BD4;
    }
L_08AE6BD4:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[19] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
    goto L_08AE6BE8;
L_08AE6BE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[19] ^ ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[4] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6E24;
      }
      goto L_08AE6C0C;
    }
L_08AE6C0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 1u));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.fpr[15] = ctx.fpr[12] - ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6E24;
      }
      goto L_08AE6C50;
    }
L_08AE6C50:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[15] + ctx.fpr[16];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[4] = (16816u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE6E24;
      }
      goto L_08AE6C88;
    }
L_08AE6C88:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[15] = ctx.fpr[20] - ctx.fpr[30];
        goto L_08AE6CA0;
    }
    goto L_08AE6C98;
L_08AE6C98:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08AE6CA8;
      }
      goto L_08AE6CA0;
    }
L_08AE6CA0:
    ctx.fpr[20] = ctx.fpr[15] / ctx.fpr[30];
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
    goto L_08AE6CA8;
L_08AE6CA8:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (16332u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[9] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[8] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[13];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08AE6CF4u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 292u, 0x08A25A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6CF4u) goto L_08AE6CF4;
    return;
L_08AE6CF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6E1C;
      }
      goto L_08AE6CFC;
    }
L_08AE6CFC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = ctx.fpr[24] / ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[30]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[22] = (ctx.gpr[5] & 255u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[4] = (ctx.gpr[4] & 16383u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08AE6DA4u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 587u, 0x08AEA89Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE6DA4u) goto L_08AE6DA4;
    return;
L_08AE6DA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25576)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE6DBCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6DBCu) goto L_08AE6DBC;
    return;
L_08AE6DBC:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08AE6DC8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6DC8u) goto L_08AE6DC8;
    return;
L_08AE6DC8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[31] = (0x08AE6DFCu);
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 417u, 0x08A275A8u>(ctx, &aot_mem) && ctx.pc == 0x08AE6DFCu) goto L_08AE6DFC;
    return;
L_08AE6DFC:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    goto L_08AE6E1C;
L_08AE6E1C:
    ctx.gpr[4] = (16656u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08AE6E24;
L_08AE6E24:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6BE8;
      }
      goto L_08AE6E3C;
    }
L_08AE6E3C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6B98;
      }
      goto L_08AE6E58;
    }
L_08AE6E58:
    ctx.gpr[31] = (0x08AE6E60u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 317u, 0x08A26060u>(ctx, &aot_mem) && ctx.pc == 0x08AE6E60u) goto L_08AE6E60;
    return;
L_08AE6E60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(332))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8056)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(332), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE64C8;
      }
      goto L_08AE6E84;
    }
L_08AE6E84:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6ECC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25652)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25656)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-25628)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2230u << 16u);
    ctx.gpr[3] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-25648), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-25640), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-25644), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-25636), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-25632), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-25624), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE6F60:
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
L_08AE6F8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE6FACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6736));
    goto L_08AE6F60;
L_08AE6FAC:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25528));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE706C;
      }
      goto L_08AE6FC0;
    }
L_08AE6FC0:
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08AE6FC8;
L_08AE6FC8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE7044;
      }
      goto L_08AE6FDC;
    }
L_08AE6FDC:
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7000;
      }
      goto L_08AE6FF0;
    }
L_08AE6FF0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[6] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
      if (branch_taken) {
          goto L_08AE7000;
      }
      goto L_08AE7000;
    }
L_08AE7000:
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7024;
      }
      goto L_08AE7014;
    }
L_08AE7014:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[8] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 24u));
      if (branch_taken) {
          goto L_08AE7024;
      }
      goto L_08AE7024;
    }
L_08AE7024:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[8];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AE7034;
      }
      goto L_08AE702C;
    }
L_08AE702C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE7054;
      }
      goto L_08AE7034;
    }
L_08AE7034:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE6FDC;
      }
      goto L_08AE7044;
    }
L_08AE7044:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE7054;
      }
      goto L_08AE704C;
    }
L_08AE704C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AE7054;
      }
      goto L_08AE7054;
    }
L_08AE7054:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7080;
      }
      goto L_08AE705C;
    }
L_08AE705C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE6FC8;
      }
      goto L_08AE706C;
    }
L_08AE706C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE7078u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6664));
    goto L_08AE6F60;
L_08AE7078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AE7090;
      }
      goto L_08AE7080;
    }
L_08AE7080:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AE708Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6700));
    goto L_08AE6F60;
L_08AE708C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    goto L_08AE7090;
L_08AE7090:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE70A4:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[6] = (0u | 13u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    goto L_08AE70B0;
L_08AE70B0:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE70C0;
      }
      goto L_08AE70B8;
    }
L_08AE70B8:
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE70CC;
      }
      goto L_08AE70C0;
    }
L_08AE70C0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE70B0;
      }
      goto L_08AE70CC;
    }
L_08AE70CC:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE70DC;
      }
      goto L_08AE70D4;
    }
L_08AE70D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE70E4;
      }
      goto L_08AE70DC;
    }
L_08AE70DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE7118;
      }
      goto L_08AE70E4;
    }
L_08AE70E4:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AE7110;
      }
      goto L_08AE70EC;
    }
L_08AE70EC:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AE7110;
      }
      goto L_08AE70F4;
    }
L_08AE70F4:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7110;
      }
      goto L_08AE70FC;
    }
L_08AE70FC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08AE70E4;
      }
      goto L_08AE7110;
    }
L_08AE7110:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    goto L_08AE7118;
L_08AE7118:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7120:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7148u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 201u, 0x08AC900Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7148u) goto L_08AE7148;
    return;
L_08AE7148:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AE7154u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 201u, 0x08AC900Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7154u) goto L_08AE7154;
    return;
L_08AE7154:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08AE71AC;
      }
      goto L_08AE7188;
    }
L_08AE7188:
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE719Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 639u, 0x088B7EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE719Cu) goto L_08AE719C;
    return;
L_08AE719C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7188;
      }
      goto L_08AE71AC;
    }
L_08AE71AC:
    ctx.gpr[31] = (0x08AE71B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 617u, 0x088B7CACu>(ctx, &aot_mem) && ctx.pc == 0x08AE71B4u) goto L_08AE71B4;
    return;
L_08AE71B4:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE71D0;
      }
      goto L_08AE71CC;
    }
L_08AE71CC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AE71D0;
L_08AE71D0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08AE71F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17376));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11520));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2222u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE723Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 212u, 0x08AA5084u>(ctx, &aot_mem) && ctx.pc == 0x08AE723Cu) goto L_08AE723C;
    return;
L_08AE723C:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE7258;
      }
      goto L_08AE7254;
    }
L_08AE7254:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AE7258;
L_08AE7258:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AE7290;
      }
      goto L_08AE726C;
    }
L_08AE726C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x08AE727Cu);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6632));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08AE727Cu) goto L_08AE727C;
    return;
L_08AE727C:
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE728Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    goto L_08AE6F60;
L_08AE728C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08AE7290;
L_08AE7290:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE72EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7308u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 776u, 0x089C7330u>(ctx, &aot_mem) && ctx.pc == 0x08AE7308u) goto L_08AE7308;
    return;
L_08AE7308:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 120 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 130 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE73BC;
      }
      goto L_08AE7314;
    }
L_08AE7314:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE73BC;
      }
      goto L_08AE731C;
    }
L_08AE731C:
    ctx.gpr[7] = (ctx.gpr[16] << 5u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (2274u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17376));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-11520));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08AE7360;
      }
      goto L_08AE734C;
    }
L_08AE734C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AE7360;
L_08AE7360:
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AE7390;
      }
      goto L_08AE737C;
    }
L_08AE737C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AE7390;
L_08AE7390:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AE73A8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE73A8u) goto L_08AE73A8;
    return;
L_08AE73A8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AE73BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AE71F4;
L_08AE73BC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AE73C8u);
    ctx.gpr[4] = (0u | 544u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE73C8u) goto L_08AE73C8;
    return;
L_08AE73C8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AE73E4;
      }
      goto L_08AE73D4;
    }
L_08AE73D4:
    ctx.gpr[31] = (0x08AE73DCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 404u, 0x08AB6B60u>(ctx, &aot_mem) && ctx.pc == 0x08AE73DCu) goto L_08AE73DC;
    return;
L_08AE73DC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08AE73E4;
L_08AE73E4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AE7400u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AE7400u) goto L_08AE7400;
    return;
L_08AE7400:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(682)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7418;
      }
      goto L_08AE7410;
    }
L_08AE7410:
    ctx.gpr[31] = (0x08AE7418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 416u, 0x08AB6CC4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7418u) goto L_08AE7418;
    return;
L_08AE7418:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25296)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-18952));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08AE7440u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25296), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 778u, 0x089C7354u>(ctx, &aot_mem) && ctx.pc == 0x08AE7440u) goto L_08AE7440;
    return;
L_08AE7440:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08AE745C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7484u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6596));
    goto L_08AE6F60;
L_08AE7484:
    ctx.gpr[31] = (0x08AE748Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 776u, 0x089C7330u>(ctx, &aot_mem) && ctx.pc == 0x08AE748Cu) goto L_08AE748C;
    return;
L_08AE748C:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE749Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7584));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 506u, 0x0883A3B8u>(ctx, &aot_mem) && ctx.pc == 0x08AE749Cu) goto L_08AE749C;
    return;
L_08AE749C:
    ctx.gpr[31] = (0x08AE74A4u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 778u, 0x089C7354u>(ctx, &aot_mem) && ctx.pc == 0x08AE74A4u) goto L_08AE74A4;
    return;
L_08AE74A4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08AE74B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 33u, 0x088B4324u>(ctx, &aot_mem) && ctx.pc == 0x08AE74B0u) goto L_08AE74B0;
    return;
L_08AE74B0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27512)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
        goto L_08AE74F4;
    }
    goto L_08AE74E8;
L_08AE74E8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AE74F4;
L_08AE74F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7528u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7584));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 487u, 0x0883A2B0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7528u) goto L_08AE7528;
    return;
L_08AE7528:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25320), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25531)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE75A8;
      }
      goto L_08AE7568;
    }
L_08AE7568:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7580u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18752));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 348u, 0x088EE47Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7580u) goto L_08AE7580;
    return;
L_08AE7580:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE758Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 372u, 0x088EE634u>(ctx, &aot_mem) && ctx.pc == 0x08AE758Cu) goto L_08AE758C;
    return;
L_08AE758C:
    ctx.gpr[31] = (0x08AE7594u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 281u, 0x088EDFD4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7594u) goto L_08AE7594;
    return;
L_08AE7594:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AE75A8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08AE75A8u) goto L_08AE75A8;
    return;
L_08AE75A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE75B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[23]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(-18752));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[22]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE7780;
      }
      goto L_08AE7614;
    }
L_08AE7614:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18952));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (0u | 2u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    goto L_08AE7630;
L_08AE7630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE763Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 347u, 0x0897235Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE763Cu) goto L_08AE763C;
    return;
L_08AE763C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE771C;
      }
      goto L_08AE7648;
    }
L_08AE7648:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08AE7674;
    }
    goto L_08AE7660;
L_08AE7660:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE770C;
      }
      goto L_08AE7674;
    }
L_08AE7674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
        goto L_08AE769C;
    }
    goto L_08AE7690;
L_08AE7690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AE76A0;
      }
      goto L_08AE769C;
    }
L_08AE769C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    goto L_08AE76A0;
L_08AE76A0:
    ctx.gpr[17] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]));
    ctx.gpr[17] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[17]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08AE770C;
L_08AE770C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08AE7748;
      }
      goto L_08AE771C;
    }
L_08AE771C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-18752)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08AE7748;
L_08AE7748:
    ctx.gpr[31] = (0x08AE7750u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7750u) goto L_08AE7750;
    return;
L_08AE7750:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08AE776C;
      }
      goto L_08AE7764;
    }
L_08AE7764:
    ctx.gpr[31] = (0x08AE776Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F8E8u>(ctx, &aot_mem) && ctx.pc == 0x08AE776Cu) goto L_08AE776C;
    return;
L_08AE776C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AE7630;
      }
      goto L_08AE7780;
    }
L_08AE7780:
    ctx.gpr[31] = (0x08AE7788u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE7788u) goto L_08AE7788;
    return;
L_08AE7788:
    ctx.gpr[31] = (0x08AE7790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 719u, 0x0891B3ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE7790u) goto L_08AE7790;
    return;
L_08AE7790:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(679), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25280), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-25276), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE77E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25531)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7848;
      }
      goto L_08AE7804;
    }
L_08AE7804:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08AE7814u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 162u, 0x088ED294u>(ctx, &aot_mem) && ctx.pc == 0x08AE7814u) goto L_08AE7814;
    return;
L_08AE7814:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08AE782C;
      }
      goto L_08AE7820;
    }
L_08AE7820:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08AE782C;
L_08AE782C:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7848u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5896), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 216u, 0x088EDA48u>(ctx, &aot_mem) && ctx.pc == 0x08AE7848u) goto L_08AE7848;
    return;
L_08AE7848:
    ctx.gpr[31] = (0x08AE7850u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7850u) goto L_08AE7850;
    return;
L_08AE7850:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE7890u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 267u, 0x089D9220u>(ctx, &aot_mem) && ctx.pc == 0x08AE7890u) goto L_08AE7890;
    return;
L_08AE7890:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE78A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5896)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08AE78D8;
    }
    goto L_08AE78CC;
L_08AE78CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AE78E8;
      }
      goto L_08AE78D8;
    }
L_08AE78D8:
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08AE78E8;
L_08AE78E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE78F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25531)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE793C;
      }
      goto L_08AE790C;
    }
L_08AE790C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AE791Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 174u, 0x088ED390u>(ctx, &aot_mem) && ctx.pc == 0x08AE791Cu) goto L_08AE791C;
    return;
L_08AE791C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[0]) || std::isnan(ctx.fpr[12])) && ctx.fpr[0] == ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08AE7934;
    }
    goto L_08AE7934;
L_08AE7934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08AE7940;
      }
      goto L_08AE793C;
    }
L_08AE793C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AE7940;
L_08AE7940:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7950:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7978u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7978u) goto L_08AE7978;
    return;
L_08AE7978:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AE7984u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 179u, 0x0890D00Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7984u) goto L_08AE7984;
    return;
L_08AE7984:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(500), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(496), ctx.gpr[2]);
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
L_08AE79A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE79C0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 234u, 0x0886505Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE79C0u) goto L_08AE79C0;
    return;
L_08AE79C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(500), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(496), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE79DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(500), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(496), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE79F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE7B6C;
      }
      goto L_08AE7A40;
    }
L_08AE7A40:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(12088));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[19] = (2278u << 16u);
    ctx.gpr[20] = (65528u << 16u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14288));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (8u << 16u);
    goto L_08AE7A6C;
L_08AE7A6C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AE7A78u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7A78u) goto L_08AE7A78;
    return;
L_08AE7A78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7B54;
      }
      goto L_08AE7A80;
    }
L_08AE7A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08AE7AD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 226u, 0x088C165Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7AD0u) goto L_08AE7AD0;
    return;
L_08AE7AD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AE7B54;
      }
      goto L_08AE7AE4;
    }
L_08AE7AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7B40;
      }
      goto L_08AE7B00;
    }
L_08AE7B00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AE7B18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7B18u) goto L_08AE7B18;
    return;
L_08AE7B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-25304), ctx.gpr[4]);
    goto L_08AE7B40;
L_08AE7B40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE7AE4;
      }
      goto L_08AE7B54;
    }
L_08AE7B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_08AE7A6C;
      }
      goto L_08AE7B6C;
    }
L_08AE7B6C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7BA0:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7BA8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE7C4C;
      }
      goto L_08AE7BE4;
    }
L_08AE7BE4:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10864));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-28284)));
    goto L_08AE7BF0;
L_08AE7BF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 120 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 130 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AE7C2C;
      }
      goto L_08AE7C00;
    }
L_08AE7C00:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[9] = (ctx.gpr[5] << 4u);
      if (branch_taken) {
          goto L_08AE7C2C;
      }
      goto L_08AE7C08;
    }
L_08AE7C08:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7C44;
      }
      goto L_08AE7C2C;
    }
L_08AE7C2C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AE7BF0;
      }
      goto L_08AE7C3C;
    }
L_08AE7C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7C4C;
      }
      goto L_08AE7C44;
    }
L_08AE7C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7D28;
      }
      goto L_08AE7C4C;
    }
L_08AE7C4C:
    ctx.gpr[31] = (0x08AE7C54u);
    // nop
    goto L_08AE7D50;
L_08AE7C54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE7CCC;
      }
      goto L_08AE7C68;
    }
L_08AE7C68:
    ctx.gpr[18] = (2278u << 16u);
    ctx.gpr[17] = (2278u << 16u);
    ctx.gpr[20] = (2278u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(7608));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10864));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(9264));
    goto L_08AE7C80;
L_08AE7C80:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7C9C;
      }
      goto L_08AE7C90;
    }
L_08AE7C90:
    ctx.gpr[31] = (0x08AE7C98u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AE72EC;
L_08AE7C98:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08AE7C9C;
L_08AE7C9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7CB4;
      }
      goto L_08AE7CA8;
    }
L_08AE7CA8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AE7CB4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AE745C;
L_08AE7CB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-25316)));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AE7C80;
      }
      goto L_08AE7CCC;
    }
L_08AE7CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-5892)));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2278u << 16u);
      if (branch_taken) {
          goto L_08AE7D28;
      }
      goto L_08AE7CE0;
    }
L_08AE7CE0:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(15352));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-18952));
    goto L_08AE7CEC;
L_08AE7CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AE7D14u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    goto L_08AE7950;
L_08AE7D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-5892)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AE7CEC;
      }
      goto L_08AE7D28;
    }
L_08AE7D28:
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
L_08AE7D50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7D88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 480u, 0x0887AEE8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7D88u) goto L_08AE7D88;
    return;
L_08AE7D88:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(25808), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17460), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[16] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8068), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-6572));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AE7DBCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 515u, 0x08872F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7DBCu) goto L_08AE7DBC;
    return;
L_08AE7DBC:
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(9176));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-5904));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE7DE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6556));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7DE4u) goto L_08AE7DE4;
    return;
L_08AE7DE4:
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8040)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE7E04u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 8u, 0x088B8108u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E04u) goto L_08AE7E04;
    return;
L_08AE7E04:
    ctx.gpr[23] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[30] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AE7E88;
      }
      goto L_08AE7E10;
    }
L_08AE7E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 10u);
    ctx.gpr[31] = (0x08AE7E20u);
    ctx.gpr[4] = (0u + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08AE7E20u) goto L_08AE7E20;
    return;
L_08AE7E20:
    ctx.gpr[31] = (0x08AE7E28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 776u, 0x089C7330u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E28u) goto L_08AE7E28;
    return;
L_08AE7E28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[31] = (0x08AE7E3Cu);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 543u, 0x08873088u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E3Cu) goto L_08AE7E3C;
    return;
L_08AE7E3C:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AE7E50u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-19208));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 571u, 0x08A8B598u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E50u) goto L_08AE7E50;
    return;
L_08AE7E50:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[6] = (2278u << 16u);
    ctx.gpr[7] = (2278u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 32u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7584));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(9264));
    ctx.gpr[31] = (0x08AE7E74u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(7664));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 440u, 0x08839EA0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E74u) goto L_08AE7E74;
    return;
L_08AE7E74:
    ctx.gpr[31] = (0x08AE7E7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 778u, 0x089C7354u>(ctx, &aot_mem) && ctx.pc == 0x08AE7E7Cu) goto L_08AE7E7C;
    return;
L_08AE7E7C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(678), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE7E8C;
      }
      goto L_08AE7E88;
    }
L_08AE7E88:
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(678), static_cast<std::uint8_t>(0u));
    goto L_08AE7E8C;
L_08AE7E8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AE7E98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 532u, 0x0887300Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7E98u) goto L_08AE7E98;
    return;
L_08AE7E98:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7EA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6548));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 209u, 0x088B91A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7EA8u) goto L_08AE7EA8;
    return;
L_08AE7EA8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AE7EC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6544));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7EC0u) goto L_08AE7EC0;
    return;
L_08AE7EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8040)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AE7ED4u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 8u, 0x088B8108u>(ctx, &aot_mem) && ctx.pc == 0x08AE7ED4u) goto L_08AE7ED4;
    return;
L_08AE7ED4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7F20;
      }
      goto L_08AE7EDC;
    }
L_08AE7EDC:
    ctx.gpr[31] = (0x08AE7EE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 776u, 0x089C7330u>(ctx, &aot_mem) && ctx.pc == 0x08AE7EE4u) goto L_08AE7EE4;
    return;
L_08AE7EE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] << 11u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AE7EFCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 215u, 0x088B9234u>(ctx, &aot_mem) && ctx.pc == 0x08AE7EFCu) goto L_08AE7EFC;
    return;
L_08AE7EFC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7F0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 218u, 0x088EDA88u>(ctx, &aot_mem) && ctx.pc == 0x08AE7F0Cu) goto L_08AE7F0C;
    return;
L_08AE7F0C:
    ctx.gpr[31] = (0x08AE7F14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 778u, 0x089C7354u>(ctx, &aot_mem) && ctx.pc == 0x08AE7F14u) goto L_08AE7F14;
    return;
L_08AE7F14:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-25531), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AE7F24;
      }
      goto L_08AE7F20;
    }
L_08AE7F20:
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-25531), static_cast<std::uint8_t>(0u));
    goto L_08AE7F24;
L_08AE7F24:
    ctx.gpr[31] = (0x08AE7F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 218u, 0x088B9288u>(ctx, &aot_mem) && ctx.pc == 0x08AE7F2Cu) goto L_08AE7F2C;
    return;
L_08AE7F2C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(684), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08AE7F44u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5896), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7F44u) goto L_08AE7F44;
    return;
L_08AE7F44:
    ctx.gpr[31] = (0x08AE7F4Cu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 407u, 0x08ACD9C4u>(ctx, &aot_mem) && ctx.pc == 0x08AE7F4Cu) goto L_08AE7F4C;
    return;
L_08AE7F4C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
L_08AE7F80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AE7F94u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 754u, 0x0891B6F8u>(ctx, &aot_mem) && ctx.pc == 0x08AE7F94u) goto L_08AE7F94;
    return;
L_08AE7F94:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(680), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(683), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AE7FC0;
      }
      goto L_08AE7FB8;
    }
L_08AE7FB8:
    ctx.gpr[31] = (0x08AE7FC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 893u, 0x089C7A60u>(ctx, &aot_mem) && ctx.pc == 0x08AE7FC0u) goto L_08AE7FC0;
    return;
L_08AE7FC0:
    ctx.gpr[31] = (0x08AE7FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 533u, 0x089C648Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7FC8u) goto L_08AE7FC8;
    return;
L_08AE7FC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AE7FD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5904));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AE7FD8u) goto L_08AE7FD8;
    return;
L_08AE7FD8:
    ctx.gpr[31] = (0x08AE7FE0u);
    // nop
    goto L_08AE7FF8;
L_08AE7FE0:
    ctx.gpr[31] = (0x08AE7FE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 756u, 0x0891B71Cu>(ctx, &aot_mem) && ctx.pc == 0x08AE7FE8u) goto L_08AE7FE8;
    return;
L_08AE7FE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AE7FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1536));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1500), ctx.gpr[17]);
    ctx.pc = 0x08AE8000u; return;
}

void recomp_unit_0184(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0184_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_184(Runtime &runtime) {
    runtime.register_generated_unit(184u, 0x08AE4000u, 16384u, &recomp_unit_0184, &recomp_unit_0184_entry);
    runtime.register_function(0x08AE4000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4014u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4020u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4064u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE408Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE40ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4104u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4110u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4124u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4130u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4170u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4198u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE41D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4204u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4210u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4228u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4244u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4254u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4264u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4270u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE42E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4300u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4310u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4374u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4390u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE43FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4404u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4414u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE442Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4434u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE443Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4448u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4460u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4468u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4470u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4494u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE44FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4500u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4524u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4534u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE454Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE455Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4564u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4570u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE457Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4594u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE459Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE45E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4604u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE460Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4624u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4634u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE463Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4644u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE464Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4660u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4674u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4694u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE46A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4700u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4748u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4754u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4784u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE479Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE47F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4804u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE480Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4814u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE481Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4824u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE482Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4834u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE483Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4844u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4848u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4864u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE487Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4898u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE48F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4900u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4908u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4910u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4918u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4920u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4928u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4930u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4938u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE493Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4958u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4970u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE498Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4998u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE49F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4A8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4ACCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4AF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4B9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4BBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4C8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4CD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4D94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4DF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4E9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4ED8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4EFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4F9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE4FF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5018u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5028u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5030u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5038u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5044u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5050u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5080u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5090u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE50FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5110u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE511Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE512Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE513Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5148u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE515Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5164u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE516Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE517Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5184u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE518Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE519Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE51F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5200u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5224u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5234u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE523Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5248u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5378u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5384u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE53FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5408u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5410u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5420u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE542Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5430u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5448u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE545Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5494u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE54F8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5500u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE550Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE551Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5528u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5534u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5540u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5548u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5550u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5560u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5564u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5578u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5580u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE559Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE55E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5610u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE561Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5644u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE564Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5654u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE566Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5678u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5680u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5688u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE56F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5700u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5734u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE573Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5768u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE577Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5784u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5790u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE57A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE594Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE596Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5974u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5994u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE599Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE59E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5A94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5AACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5B8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BC4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5BF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C38u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C48u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C64u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5C6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5CD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5DFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E5Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5E9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5ED0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5EF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5F90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE5FF8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6004u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE600Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6070u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE60C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6104u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6110u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE611Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6130u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6138u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6140u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6150u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6174u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE61E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6200u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6248u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE625Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6268u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE62F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6334u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE633Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE637Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6388u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE638Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE63C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE641Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6428u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6434u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6440u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE644Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE645Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6478u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6480u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6488u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE64FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6508u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6514u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6518u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE652Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6538u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6590u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE65F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6624u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6640u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6650u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6660u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66C4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE66F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6700u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6718u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6760u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6770u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE679Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE67FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE685Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE686Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE68A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE690Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6914u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE69E0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A34u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A70u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6A9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AB0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6AB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B30u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6B98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BD4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6BE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6C98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CF4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6CFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DA4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6DFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E1Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E58u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6E84u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6ECCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F60u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6F8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE6FF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7000u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7014u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7024u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE702Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7034u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7044u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE704Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7054u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE705Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE706Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7078u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7080u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE708Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7090u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE70FCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7110u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7118u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7120u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7148u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7154u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7188u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE719Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71ACu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71B4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71D0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE71F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE723Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7254u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7258u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE726Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE727Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE728Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7290u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE72ECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7308u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7314u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE731Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE734Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7360u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE737Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7390u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73BCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73C8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73D4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE73E4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7400u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7410u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7418u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7440u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE745Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7484u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE748Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE749Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74B0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE74F4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7510u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7528u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7540u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7568u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7580u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE758Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7594u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75A8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE75B8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7614u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7630u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE763Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7648u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7660u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7674u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7690u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE769Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE76A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE770Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE771Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7748u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7750u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7764u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE776Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7780u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7788u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7790u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE77E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7804u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7814u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7820u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE782Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7848u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7850u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7890u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78A0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78CCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78D8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78E8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE78F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE790Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE791Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7934u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE793Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7940u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7950u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7978u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7984u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79A4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79C0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79DCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE79F0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A78u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7A80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AD0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7AE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B18u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B40u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7B6Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BA0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7BF0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C00u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C08u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C54u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C68u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C90u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7C9Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CB4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CCCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7CECu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7D88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DBCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7DE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E04u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E10u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E28u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E3Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E50u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E74u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E7Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E88u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E8Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7E98u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EA8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7ED4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EDCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EE4u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7EFCu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F0Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F14u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F20u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F24u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F2Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F44u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F4Cu, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F80u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7F94u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FB8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FC0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FC8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FD8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FE0u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FE8u, &recomp_unit_0184, "recomp_unit_0184");
    runtime.register_function(0x08AE7FF8u, &recomp_unit_0184, "recomp_unit_0184");
}
} // namespace psprecomp
