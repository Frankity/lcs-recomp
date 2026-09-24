#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0204[3951] = {
    1, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0,
    0, 0, 0, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 32, 0,
    33, 0, 34, 0, 35, 0, 36, 0, 37, 38, 39, 0, 40, 0, 41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0,
    50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57, 0, 58, 0, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0,
    64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68,
    0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84,
    0, 85, 0, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 99, 0, 100,
    0, 101, 0, 102, 0, 103, 0, 104, 0, 105, 0, 106, 0, 107, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 113, 0, 114, 0, 115, 0, 116,
    0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 122, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133,
    0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 149,
    0, 150, 151, 152, 0, 153, 0, 154, 155, 156, 0, 157, 158, 159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    167, 0, 0, 168, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 173, 0, 0, 174, 175, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 0,
    180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0,
    192, 0, 193, 0, 194, 0, 195, 0, 196, 0, 197, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 207, 0,
    208, 0, 209, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 0, 218, 0, 219, 0, 220, 0, 221, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225,
    0, 0, 0, 0, 226, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 241, 0, 242, 0, 243, 0, 244, 0,
    245, 0, 246, 247, 248, 0, 249, 0, 250, 251, 252, 253, 254, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 264, 265, 0, 266, 0, 267, 0, 268, 0, 269,
    0, 270, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 283, 284, 0, 0, 285, 0, 0, 0, 286, 0, 0, 287, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 290, 0, 291, 0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 303, 0, 0, 304, 0, 305,
    0, 306, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 0, 0,
    314, 0, 315, 0, 0, 0, 0, 0, 0, 0, 316, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 320, 0,
    321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0,
    0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 0, 339, 0, 0,
    0, 0, 340, 0, 341, 0, 0, 0, 0, 342, 0, 343, 344, 345, 346, 347, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 359, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0,
    0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0,
    0, 0, 0, 373, 374, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0,
    0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 0, 0, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0,
    0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 404, 0, 405, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0,
    410, 0, 411, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 415, 0, 416, 0, 417, 0,
    418, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0,
    434, 0, 435, 0, 436, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 445, 446, 0, 447, 0, 448, 0, 449, 0, 450, 0,
    451, 0, 452, 0, 453, 0, 454, 0, 455, 0, 456, 0, 457, 0, 458, 0, 459, 0, 460, 0, 461, 0, 462, 0, 463, 0, 464, 0, 465, 0, 466, 0,
    467, 0, 468, 0, 469, 0, 470, 0, 471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 479, 480, 0, 481, 482, 483, 0, 484, 0,
    485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 487, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 492,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 494, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 503, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 0, 509, 0, 0, 0,
    510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0,
    517, 0, 0, 0, 518, 0, 519, 0, 520, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 524, 0, 525, 0, 526, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0,
    0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 0, 546, 0, 0, 0, 547, 0, 0,
    0, 548, 0, 0, 0, 549, 0, 0, 550, 0, 0, 551, 0, 0, 552, 553, 0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0,
    0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 561, 562, 0, 0, 0, 0, 0, 0, 0, 563, 564, 0,
    565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 570, 0, 571, 572, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 578, 0,
    579, 580, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586, 0, 587, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 0,
    591, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 597, 0,
    0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 604, 605, 0,
    606, 607, 0, 608, 0, 609, 610, 0, 0, 0, 611, 0, 0, 612, 613, 0, 614, 0, 0, 615, 0, 616, 0, 617, 618, 619, 0, 620, 0, 0, 621, 622,
    0, 0, 623, 624, 625, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 629, 0, 0, 0, 630, 0,
    0, 0, 631, 0, 0, 0, 632, 0, 633, 0, 634, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0,
    0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 643,
};
void recomp_unit_0204_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08B3407Cu;
        entry_id = (entry_delta < 15804u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0204[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08B3407C;
    case 2u: goto L_08B34088;
    case 3u: goto L_08B34090;
    case 4u: goto L_08B34108;
    case 5u: goto L_08B34178;
    case 6u: goto L_08B341D0;
    case 7u: goto L_08B341E8;
    case 8u: goto L_08B341F4;
    case 9u: goto L_08B34218;
    case 10u: goto L_08B34220;
    case 11u: goto L_08B34234;
    case 12u: goto L_08B34268;
    case 13u: goto L_08B34278;
    case 14u: goto L_08B343E0;
    case 15u: goto L_08B343E8;
    case 16u: goto L_08B343F0;
    case 17u: goto L_08B3442C;
    case 18u: goto L_08B34504;
    case 19u: goto L_08B3450C;
    case 20u: goto L_08B34514;
    case 21u: goto L_08B3451C;
    case 22u: goto L_08B34524;
    case 23u: goto L_08B3452C;
    case 24u: goto L_08B34534;
    case 25u: goto L_08B3453C;
    case 26u: goto L_08B34544;
    case 27u: goto L_08B3454C;
    case 28u: goto L_08B34554;
    case 29u: goto L_08B3455C;
    case 30u: goto L_08B34564;
    case 31u: goto L_08B3456C;
    case 32u: goto L_08B34574;
    case 33u: goto L_08B3457C;
    case 34u: goto L_08B34584;
    case 35u: goto L_08B3458C;
    case 36u: goto L_08B34594;
    case 37u: goto L_08B3459C;
    case 38u: goto L_08B345A0;
    case 39u: goto L_08B345A4;
    case 40u: goto L_08B345AC;
    case 41u: goto L_08B345B4;
    case 42u: goto L_08B345BC;
    case 43u: goto L_08B345C4;
    case 44u: goto L_08B345CC;
    case 45u: goto L_08B345D4;
    case 46u: goto L_08B345DC;
    case 47u: goto L_08B345E4;
    case 48u: goto L_08B345EC;
    case 49u: goto L_08B345F4;
    case 50u: goto L_08B345FC;
    case 51u: goto L_08B34604;
    case 52u: goto L_08B3460C;
    case 53u: goto L_08B34614;
    case 54u: goto L_08B3461C;
    case 55u: goto L_08B34624;
    case 56u: goto L_08B3462C;
    case 57u: goto L_08B34634;
    case 58u: goto L_08B3463C;
    case 59u: goto L_08B34644;
    case 60u: goto L_08B34668;
    case 61u: goto L_08B34758;
    case 62u: goto L_08B34888;
    case 63u: goto L_08B348EC;
    case 64u: goto L_08B348FC;
    case 65u: goto L_08B349CC;
    case 66u: goto L_08B34C68;
    case 67u: goto L_08B34C70;
    case 68u: goto L_08B34C78;
    case 69u: goto L_08B34C80;
    case 70u: goto L_08B34C88;
    case 71u: goto L_08B34C90;
    case 72u: goto L_08B34C98;
    case 73u: goto L_08B34CA0;
    case 74u: goto L_08B34CA8;
    case 75u: goto L_08B34CB0;
    case 76u: goto L_08B34CB8;
    case 77u: goto L_08B34CC0;
    case 78u: goto L_08B34CC8;
    case 79u: goto L_08B34CD0;
    case 80u: goto L_08B34CD8;
    case 81u: goto L_08B34CE0;
    case 82u: goto L_08B34CE8;
    case 83u: goto L_08B34CF0;
    case 84u: goto L_08B34CF8;
    case 85u: goto L_08B34D00;
    case 86u: goto L_08B34D08;
    case 87u: goto L_08B34D10;
    case 88u: goto L_08B34D18;
    case 89u: goto L_08B34D20;
    case 90u: goto L_08B34D28;
    case 91u: goto L_08B34D30;
    case 92u: goto L_08B34D38;
    case 93u: goto L_08B34D40;
    case 94u: goto L_08B34D48;
    case 95u: goto L_08B34D50;
    case 96u: goto L_08B34D58;
    case 97u: goto L_08B34D60;
    case 98u: goto L_08B34D68;
    case 99u: goto L_08B34D70;
    case 100u: goto L_08B34D78;
    case 101u: goto L_08B34D80;
    case 102u: goto L_08B34D88;
    case 103u: goto L_08B34D90;
    case 104u: goto L_08B34D98;
    case 105u: goto L_08B34DA0;
    case 106u: goto L_08B34DA8;
    case 107u: goto L_08B34DB0;
    case 108u: goto L_08B34DB8;
    case 109u: goto L_08B34DC0;
    case 110u: goto L_08B34DC8;
    case 111u: goto L_08B34DD0;
    case 112u: goto L_08B34DD8;
    case 113u: goto L_08B34DE0;
    case 114u: goto L_08B34DE8;
    case 115u: goto L_08B34DF0;
    case 116u: goto L_08B34DF8;
    case 117u: goto L_08B34E00;
    case 118u: goto L_08B34E08;
    case 119u: goto L_08B34E10;
    case 120u: goto L_08B34E18;
    case 121u: goto L_08B34E20;
    case 122u: goto L_08B34E24;
    case 123u: goto L_08B34E28;
    case 124u: goto L_08B34E30;
    case 125u: goto L_08B34E38;
    case 126u: goto L_08B34E40;
    case 127u: goto L_08B34E48;
    case 128u: goto L_08B34E50;
    case 129u: goto L_08B34E58;
    case 130u: goto L_08B34E60;
    case 131u: goto L_08B34E68;
    case 132u: goto L_08B34E70;
    case 133u: goto L_08B34E78;
    case 134u: goto L_08B34E80;
    case 135u: goto L_08B34E88;
    case 136u: goto L_08B34E90;
    case 137u: goto L_08B34E98;
    case 138u: goto L_08B34EA0;
    case 139u: goto L_08B34EA8;
    case 140u: goto L_08B34EB0;
    case 141u: goto L_08B34EB8;
    case 142u: goto L_08B34EC0;
    case 143u: goto L_08B34EC8;
    case 144u: goto L_08B34ED0;
    case 145u: goto L_08B34ED8;
    case 146u: goto L_08B34EE0;
    case 147u: goto L_08B34EE8;
    case 148u: goto L_08B34EF0;
    case 149u: goto L_08B34EF8;
    case 150u: goto L_08B34F00;
    case 151u: goto L_08B34F04;
    case 152u: goto L_08B34F08;
    case 153u: goto L_08B34F10;
    case 154u: goto L_08B34F18;
    case 155u: goto L_08B34F1C;
    case 156u: goto L_08B34F20;
    case 157u: goto L_08B34F28;
    case 158u: goto L_08B34F2C;
    case 159u: goto L_08B34F30;
    case 160u: goto L_08B34F38;
    case 161u: goto L_08B34F40;
    case 162u: goto L_08B34F48;
    case 163u: goto L_08B34FD4;
    case 164u: goto L_08B34FF4;
    case 165u: goto L_08B35050;
    case 166u: goto L_08B350B0;
    case 167u: goto L_08B350FC;
    case 168u: goto L_08B35108;
    case 169u: goto L_08B35110;
    case 170u: goto L_08B3511C;
    case 171u: goto L_08B35128;
    case 172u: goto L_08B35134;
    case 173u: goto L_08B35180;
    case 174u: goto L_08B3518C;
    case 175u: goto L_08B35190;
    case 176u: goto L_08B351A4;
    case 177u: goto L_08B351D8;
    case 178u: goto L_08B351E4;
    case 179u: goto L_08B351F0;
    case 180u: goto L_08B351FC;
    case 181u: goto L_08B35208;
    case 182u: goto L_08B35214;
    case 183u: goto L_08B35220;
    case 184u: goto L_08B3522C;
    case 185u: goto L_08B35238;
    case 186u: goto L_08B35244;
    case 187u: goto L_08B35250;
    case 188u: goto L_08B3525C;
    case 189u: goto L_08B3526C;
    case 190u: goto L_08B35324;
    case 191u: goto L_08B35374;
    case 192u: goto L_08B3537C;
    case 193u: goto L_08B35384;
    case 194u: goto L_08B3538C;
    case 195u: goto L_08B35394;
    case 196u: goto L_08B3539C;
    case 197u: goto L_08B353A4;
    case 198u: goto L_08B353AC;
    case 199u: goto L_08B353B4;
    case 200u: goto L_08B353BC;
    case 201u: goto L_08B353C4;
    case 202u: goto L_08B353CC;
    case 203u: goto L_08B353D4;
    case 204u: goto L_08B353DC;
    case 205u: goto L_08B353E4;
    case 206u: goto L_08B353EC;
    case 207u: goto L_08B353F4;
    case 208u: goto L_08B353FC;
    case 209u: goto L_08B35404;
    case 210u: goto L_08B3540C;
    case 211u: goto L_08B35414;
    case 212u: goto L_08B3541C;
    case 213u: goto L_08B35424;
    case 214u: goto L_08B3542C;
    case 215u: goto L_08B35434;
    case 216u: goto L_08B3543C;
    case 217u: goto L_08B35444;
    case 218u: goto L_08B3544C;
    case 219u: goto L_08B35454;
    case 220u: goto L_08B3545C;
    case 221u: goto L_08B35464;
    case 222u: goto L_08B354A8;
    case 223u: goto L_08B354DC;
    case 224u: goto L_08B3552C;
    case 225u: goto L_08B35678;
    case 226u: goto L_08B3568C;
    case 227u: goto L_08B356A0;
    case 228u: goto L_08B356B4;
    case 229u: goto L_08B356C8;
    case 230u: goto L_08B356DC;
    case 231u: goto L_08B35728;
    case 232u: goto L_08B3572C;
    case 233u: goto L_08B35750;
    case 234u: goto L_08B357F8;
    case 235u: goto L_08B35838;
    case 236u: goto L_08B358BC;
    case 237u: goto L_08B35914;
    case 238u: goto L_08B35974;
    case 239u: goto L_08B35B4C;
    case 240u: goto L_08B35B54;
    case 241u: goto L_08B35B5C;
    case 242u: goto L_08B35B64;
    case 243u: goto L_08B35B6C;
    case 244u: goto L_08B35B74;
    case 245u: goto L_08B35B7C;
    case 246u: goto L_08B35B84;
    case 247u: goto L_08B35B88;
    case 248u: goto L_08B35B8C;
    case 249u: goto L_08B35B94;
    case 250u: goto L_08B35B9C;
    case 251u: goto L_08B35BA0;
    case 252u: goto L_08B35BA4;
    case 253u: goto L_08B35BA8;
    case 254u: goto L_08B35BAC;
    case 255u: goto L_08B35BB4;
    case 256u: goto L_08B35BBC;
    case 257u: goto L_08B35BF4;
    case 258u: goto L_08B35C50;
    case 259u: goto L_08B35D74;
    case 260u: goto L_08B35D9C;
    case 261u: goto L_08B35DBC;
    case 262u: goto L_08B35E48;
    case 263u: goto L_08B35E50;
    case 264u: goto L_08B35E54;
    case 265u: goto L_08B35E58;
    case 266u: goto L_08B35E60;
    case 267u: goto L_08B35E68;
    case 268u: goto L_08B35E70;
    case 269u: goto L_08B35E78;
    case 270u: goto L_08B35E80;
    case 271u: goto L_08B35E88;
    case 272u: goto L_08B35E90;
    case 273u: goto L_08B35E98;
    case 274u: goto L_08B35EA0;
    case 275u: goto L_08B35EA8;
    case 276u: goto L_08B35EB0;
    case 277u: goto L_08B35EB8;
    case 278u: goto L_08B35EC0;
    case 279u: goto L_08B35EC8;
    case 280u: goto L_08B35EEC;
    case 281u: goto L_08B35F20;
    case 282u: goto L_08B35FBC;
    case 283u: goto L_08B35FC8;
    case 284u: goto L_08B35FCC;
    case 285u: goto L_08B35FD8;
    case 286u: goto L_08B35FE8;
    case 287u: goto L_08B35FF4;
    case 288u: goto L_08B3601C;
    case 289u: goto L_08B36040;
    case 290u: goto L_08B36044;
    case 291u: goto L_08B3604C;
    case 292u: goto L_08B3606C;
    case 293u: goto L_08B36094;
    case 294u: goto L_08B3609C;
    case 295u: goto L_08B360BC;
    case 296u: goto L_08B360C8;
    case 297u: goto L_08B360DC;
    case 298u: goto L_08B360E4;
    case 299u: goto L_08B3610C;
    case 300u: goto L_08B36114;
    case 301u: goto L_08B36134;
    case 302u: goto L_08B3615C;
    case 303u: goto L_08B36164;
    case 304u: goto L_08B36170;
    case 305u: goto L_08B36178;
    case 306u: goto L_08B36180;
    case 307u: goto L_08B36184;
    case 308u: goto L_08B3618C;
    case 309u: goto L_08B361AC;
    case 310u: goto L_08B361B8;
    case 311u: goto L_08B361D4;
    case 312u: goto L_08B361E0;
    case 313u: goto L_08B361E8;
    case 314u: goto L_08B361FC;
    case 315u: goto L_08B36204;
    case 316u: goto L_08B36224;
    case 317u: goto L_08B36230;
    case 318u: goto L_08B3624C;
    case 319u: goto L_08B36258;
    case 320u: goto L_08B36274;
    case 321u: goto L_08B3627C;
    case 322u: goto L_08B3629C;
    case 323u: goto L_08B362A4;
    case 324u: goto L_08B362B0;
    case 325u: goto L_08B362C4;
    case 326u: goto L_08B362CC;
    case 327u: goto L_08B362EC;
    case 328u: goto L_08B362F4;
    case 329u: goto L_08B36314;
    case 330u: goto L_08B3631C;
    case 331u: goto L_08B3633C;
    case 332u: goto L_08B36344;
    case 333u: goto L_08B36364;
    case 334u: goto L_08B3636C;
    case 335u: goto L_08B3638C;
    case 336u: goto L_08B363B4;
    case 337u: goto L_08B363DC;
    case 338u: goto L_08B363E4;
    case 339u: goto L_08B363F0;
    case 340u: goto L_08B36404;
    case 341u: goto L_08B3640C;
    case 342u: goto L_08B36420;
    case 343u: goto L_08B36428;
    case 344u: goto L_08B3642C;
    case 345u: goto L_08B36430;
    case 346u: goto L_08B36434;
    case 347u: goto L_08B36438;
    case 348u: goto L_08B36454;
    case 349u: goto L_08B3645C;
    case 350u: goto L_08B3647C;
    case 351u: goto L_08B36484;
    case 352u: goto L_08B364A4;
    case 353u: goto L_08B364AC;
    case 354u: goto L_08B364B4;
    case 355u: goto L_08B364BC;
    case 356u: goto L_08B364C4;
    case 357u: goto L_08B364CC;
    case 358u: goto L_08B364D4;
    case 359u: goto L_08B364F4;
    case 360u: goto L_08B364FC;
    case 361u: goto L_08B3651C;
    case 362u: goto L_08B36524;
    case 363u: goto L_08B36544;
    case 364u: goto L_08B3654C;
    case 365u: goto L_08B3656C;
    case 366u: goto L_08B36574;
    case 367u: goto L_08B36594;
    case 368u: goto L_08B3659C;
    case 369u: goto L_08B365BC;
    case 370u: goto L_08B365C4;
    case 371u: goto L_08B365E4;
    case 372u: goto L_08B365EC;
    case 373u: goto L_08B36608;
    case 374u: goto L_08B3660C;
    case 375u: goto L_08B36618;
    case 376u: goto L_08B36634;
    case 377u: goto L_08B36640;
    case 378u: goto L_08B3665C;
    case 379u: goto L_08B3666C;
    case 380u: goto L_08B36684;
    case 381u: goto L_08B366AC;
    case 382u: goto L_08B366D4;
    case 383u: goto L_08B366E0;
    case 384u: goto L_08B366FC;
    case 385u: goto L_08B36724;
    case 386u: goto L_08B36734;
    case 387u: goto L_08B3674C;
    case 388u: goto L_08B36758;
    case 389u: goto L_08B36774;
    case 390u: goto L_08B3679C;
    case 391u: goto L_08B367A8;
    case 392u: goto L_08B367C4;
    case 393u: goto L_08B367EC;
    case 394u: goto L_08B36814;
    case 395u: goto L_08B36820;
    case 396u: goto L_08B3683C;
    case 397u: goto L_08B36844;
    case 398u: goto L_08B36864;
    case 399u: goto L_08B36870;
    case 400u: goto L_08B3688C;
    case 401u: goto L_08B368B4;
    case 402u: goto L_08B368C0;
    case 403u: goto L_08B368DC;
    case 404u: goto L_08B36904;
    case 405u: goto L_08B3690C;
    case 406u: goto L_08B3692C;
    case 407u: goto L_08B36934;
    case 408u: goto L_08B36954;
    case 409u: goto L_08B3695C;
    case 410u: goto L_08B3697C;
    case 411u: goto L_08B36984;
    case 412u: goto L_08B369A4;
    case 413u: goto L_08B369CC;
    case 414u: goto L_08B369DC;
    case 415u: goto L_08B369E4;
    case 416u: goto L_08B369EC;
    case 417u: goto L_08B369F4;
    case 418u: goto L_08B369FC;
    case 419u: goto L_08B36A04;
    case 420u: goto L_08B36A0C;
    case 421u: goto L_08B36A14;
    case 422u: goto L_08B36A1C;
    case 423u: goto L_08B36A24;
    case 424u: goto L_08B36A2C;
    case 425u: goto L_08B36A34;
    case 426u: goto L_08B36A3C;
    case 427u: goto L_08B36A44;
    case 428u: goto L_08B36A4C;
    case 429u: goto L_08B36A54;
    case 430u: goto L_08B36A5C;
    case 431u: goto L_08B36A64;
    case 432u: goto L_08B36A6C;
    case 433u: goto L_08B36A74;
    case 434u: goto L_08B36A7C;
    case 435u: goto L_08B36A84;
    case 436u: goto L_08B36A8C;
    case 437u: goto L_08B36A94;
    case 438u: goto L_08B36A9C;
    case 439u: goto L_08B36AA4;
    case 440u: goto L_08B36AAC;
    case 441u: goto L_08B36AB4;
    case 442u: goto L_08B36ABC;
    case 443u: goto L_08B36AC4;
    case 444u: goto L_08B36ACC;
    case 445u: goto L_08B36AD0;
    case 446u: goto L_08B36AD4;
    case 447u: goto L_08B36ADC;
    case 448u: goto L_08B36AE4;
    case 449u: goto L_08B36AEC;
    case 450u: goto L_08B36AF4;
    case 451u: goto L_08B36AFC;
    case 452u: goto L_08B36B04;
    case 453u: goto L_08B36B0C;
    case 454u: goto L_08B36B14;
    case 455u: goto L_08B36B1C;
    case 456u: goto L_08B36B24;
    case 457u: goto L_08B36B2C;
    case 458u: goto L_08B36B34;
    case 459u: goto L_08B36B3C;
    case 460u: goto L_08B36B44;
    case 461u: goto L_08B36B4C;
    case 462u: goto L_08B36B54;
    case 463u: goto L_08B36B5C;
    case 464u: goto L_08B36B64;
    case 465u: goto L_08B36B6C;
    case 466u: goto L_08B36B74;
    case 467u: goto L_08B36B7C;
    case 468u: goto L_08B36B84;
    case 469u: goto L_08B36B8C;
    case 470u: goto L_08B36B94;
    case 471u: goto L_08B36B9C;
    case 472u: goto L_08B36BA4;
    case 473u: goto L_08B36BAC;
    case 474u: goto L_08B36BB4;
    case 475u: goto L_08B36BBC;
    case 476u: goto L_08B36BC4;
    case 477u: goto L_08B36BCC;
    case 478u: goto L_08B36BD4;
    case 479u: goto L_08B36BD8;
    case 480u: goto L_08B36BDC;
    case 481u: goto L_08B36BE4;
    case 482u: goto L_08B36BE8;
    case 483u: goto L_08B36BEC;
    case 484u: goto L_08B36BF4;
    case 485u: goto L_08B36BFC;
    case 486u: goto L_08B36C64;
    case 487u: goto L_08B36C6C;
    case 488u: goto L_08B36C9C;
    case 489u: goto L_08B36CA8;
    case 490u: goto L_08B36CB4;
    case 491u: goto L_08B36CEC;
    case 492u: goto L_08B36CF8;
    case 493u: goto L_08B36E58;
    case 494u: goto L_08B36F9C;
    case 495u: goto L_08B36FA0;
    case 496u: goto L_08B370B8;
    case 497u: goto L_08B370C0;
    case 498u: goto L_08B370C8;
    case 499u: goto L_08B370D0;
    case 500u: goto L_08B37274;
    case 501u: goto L_08B372E0;
    case 502u: goto L_08B374E4;
    case 503u: goto L_08B374F4;
    case 504u: goto L_08B37534;
    case 505u: goto L_08B3753C;
    case 506u: goto L_08B37544;
    case 507u: goto L_08B37554;
    case 508u: goto L_08B3755C;
    case 509u: goto L_08B3756C;
    case 510u: goto L_08B3757C;
    case 511u: goto L_08B37584;
    case 512u: goto L_08B375A4;
    case 513u: goto L_08B375BC;
    case 514u: goto L_08B375C4;
    case 515u: goto L_08B375D4;
    case 516u: goto L_08B375EC;
    case 517u: goto L_08B375FC;
    case 518u: goto L_08B3760C;
    case 519u: goto L_08B37614;
    case 520u: goto L_08B3761C;
    case 521u: goto L_08B3762C;
    case 522u: goto L_08B37644;
    case 523u: goto L_08B3764C;
    case 524u: goto L_08B37664;
    case 525u: goto L_08B3766C;
    case 526u: goto L_08B37674;
    case 527u: goto L_08B37688;
    case 528u: goto L_08B376B0;
    case 529u: goto L_08B376D0;
    case 530u: goto L_08B37710;
    case 531u: goto L_08B37758;
    case 532u: goto L_08B377A0;
    case 533u: goto L_08B377E8;
    case 534u: goto L_08B377F4;
    case 535u: goto L_08B37830;
    case 536u: goto L_08B378C0;
    case 537u: goto L_08B378CC;
    case 538u: goto L_08B378E0;
    case 539u: goto L_08B378F4;
    case 540u: goto L_08B37908;
    case 541u: goto L_08B3791C;
    case 542u: goto L_08B37928;
    case 543u: goto L_08B37938;
    case 544u: goto L_08B3794C;
    case 545u: goto L_08B37954;
    case 546u: goto L_08B37960;
    case 547u: goto L_08B37970;
    case 548u: goto L_08B37980;
    case 549u: goto L_08B37990;
    case 550u: goto L_08B3799C;
    case 551u: goto L_08B379A8;
    case 552u: goto L_08B379B4;
    case 553u: goto L_08B379B8;
    case 554u: goto L_08B379C4;
    case 555u: goto L_08B379CC;
    case 556u: goto L_08B379EC;
    case 557u: goto L_08B379F4;
    case 558u: goto L_08B37A14;
    case 559u: goto L_08B37A1C;
    case 560u: goto L_08B37A3C;
    case 561u: goto L_08B37A4C;
    case 562u: goto L_08B37A50;
    case 563u: goto L_08B37A70;
    case 564u: goto L_08B37A74;
    case 565u: goto L_08B37A7C;
    case 566u: goto L_08B37A8C;
    case 567u: goto L_08B37AA4;
    case 568u: goto L_08B37AAC;
    case 569u: goto L_08B37AB4;
    case 570u: goto L_08B37ABC;
    case 571u: goto L_08B37AC4;
    case 572u: goto L_08B37AC8;
    case 573u: goto L_08B37ACC;
    case 574u: goto L_08B37AD4;
    case 575u: goto L_08B37ADC;
    case 576u: goto L_08B37AE4;
    case 577u: goto L_08B37AEC;
    case 578u: goto L_08B37AF4;
    case 579u: goto L_08B37AFC;
    case 580u: goto L_08B37B00;
    case 581u: goto L_08B37B04;
    case 582u: goto L_08B37B0C;
    case 583u: goto L_08B37B14;
    case 584u: goto L_08B37B1C;
    case 585u: goto L_08B37B24;
    case 586u: goto L_08B37B2C;
    case 587u: goto L_08B37B34;
    case 588u: goto L_08B37B3C;
    case 589u: goto L_08B37B54;
    case 590u: goto L_08B37B68;
    case 591u: goto L_08B37B7C;
    case 592u: goto L_08B37B90;
    case 593u: goto L_08B37BA4;
    case 594u: goto L_08B37BB8;
    case 595u: goto L_08B37BCC;
    case 596u: goto L_08B37BE0;
    case 597u: goto L_08B37BF4;
    case 598u: goto L_08B37C08;
    case 599u: goto L_08B37C1C;
    case 600u: goto L_08B37C30;
    case 601u: goto L_08B37C44;
    case 602u: goto L_08B37C4C;
    case 603u: goto L_08B37C6C;
    case 604u: goto L_08B37C70;
    case 605u: goto L_08B37C74;
    case 606u: goto L_08B37C7C;
    case 607u: goto L_08B37C80;
    case 608u: goto L_08B37C88;
    case 609u: goto L_08B37C90;
    case 610u: goto L_08B37C94;
    case 611u: goto L_08B37CA4;
    case 612u: goto L_08B37CB0;
    case 613u: goto L_08B37CB4;
    case 614u: goto L_08B37CBC;
    case 615u: goto L_08B37CC8;
    case 616u: goto L_08B37CD0;
    case 617u: goto L_08B37CD8;
    case 618u: goto L_08B37CDC;
    case 619u: goto L_08B37CE0;
    case 620u: goto L_08B37CE8;
    case 621u: goto L_08B37CF4;
    case 622u: goto L_08B37CF8;
    case 623u: goto L_08B37D04;
    case 624u: goto L_08B37D08;
    case 625u: goto L_08B37D0C;
    case 626u: goto L_08B37D34;
    case 627u: goto L_08B37D44;
    case 628u: goto L_08B37D54;
    case 629u: goto L_08B37D64;
    case 630u: goto L_08B37D74;
    case 631u: goto L_08B37D84;
    case 632u: goto L_08B37D94;
    case 633u: goto L_08B37D9C;
    case 634u: goto L_08B37DA4;
    case 635u: goto L_08B37DB4;
    case 636u: goto L_08B37DC4;
    case 637u: goto L_08B37DD4;
    case 638u: goto L_08B37DE4;
    case 639u: goto L_08B37DF4;
    case 640u: goto L_08B37E04;
    case 641u: goto L_08B37E14;
    case 642u: goto L_08B37E24;
    case 643u: goto L_08B37E34;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08B3407C:
    ctx.fpr[10] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[12] + static_cast<std::uint32_t>(21872)));
    ctx.gpr[31] = (0x08B34088u);
    rt.unsupported(0x08B34084u, 0x71C2E0B0u, "unknown not lowered yet"); return;
    ctx.pc = 0x011EDECCu;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B34088u) goto L_08B34088;
    return;
L_08B34088:
    if (ctx.gpr[21] != ctx.gpr[26]) {
    // nop
        (void)rt.invoke_chained_direct<&recomp_unit_0203_entry, 203u, 221u, 0x08B317CCu>(ctx, &aot_mem); return;
    }
    goto L_08B34090;
L_08B34090:
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[16] << 12u);
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[17] << 12u);
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[18] << 12u);
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[19] << 12u);
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[20] << 12u);
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[21] << 12u);
    // nop
    goto L_08B34108;
L_08B34108:
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[22] << 12u);
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[10] = (ctx.gpr[23] << 12u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B34150u, 0x4F4C5300u, "unknown not lowered yet"); return;
L_08B34178:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B34190u, 0x46415300u, "cop1? not lowered yet"); return;
L_08B341D0:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    goto L_08B341E8;
L_08B341E8:
    (void)(0u << 3u);
    rt.unsupported(0x08B341ECu, 0x000000C1u, "special? not lowered yet"); return;
L_08B341F4:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 3u));
    (void)(ctx.gpr[4] << 0u);
    rt.unsupported(0x08B34200u, 0x000000C5u, "special? not lowered yet"); return;
L_08B34218:
    if (ctx.gpr[11] == 0u) (void)(ctx.gpr[6]);
    (void)(ctx.gpr[12] << 0u);
    goto L_08B34220;
L_08B34220:
    rt.unsupported(0x08B34220u, 0x000000CDu, "special? not lowered yet"); return;
L_08B34234:
    rt.unsupported(0x08B34234u, 0x00D500D4u, "special? not lowered yet"); return;
L_08B34268:
    // nop
    // nop
    // nop
    // nop
    goto L_08B34278;
L_08B34278:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    (void)(0u << 0u);
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B342B8u, 0x000000B1u, "special? not lowered yet"); return;
L_08B343E0:
    (void)(0u << 16u);
    rt.unsupported(0x08B343E4u, 0x00000001u, "special? not lowered yet"); return;
L_08B343E8:
    // nop
    ctx.gpr[16] = (0u << 16u);
    goto L_08B343F0;
L_08B343F0:
    // nop
    rt.unsupported(0x08B343F8u, 0x088B5870u, "control flow in delay slot"); return;
L_08B3442C:
    rt.unsupported(0x08B3442Cu, 0x000001F4u, "special? not lowered yet"); return;
L_08B34504:
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    jump_target = 0u;
    rt.unsupported(0x08B3450Cu, 0x000001F4u, "special? not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3450C:
    rt.unsupported(0x08B3450Cu, 0x000001F4u, "special? not lowered yet"); return;
L_08B34514:
    ctx.gpr[1] = (ctx.hi);
    // nop
    goto L_08B3451C;
L_08B3451C:
    rt.unsupported(0x08B3451Cu, 0x00000BB8u, "special? not lowered yet"); return;
L_08B34524:
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B34524u, 0x00000FA0u); return; } }
    rt.unsupported(0x08B34528u, 0x000003E8u, "special? not lowered yet"); return;
L_08B3452C:
    rt.unsupported(0x08B3452Cu, 0x00000A28u, "special? not lowered yet"); return;
L_08B34534:
    rt.unsupported(0x08B34534u, 0x00001770u, "special? not lowered yet"); return;
L_08B3453C:
    rt.unsupported(0x08B3453Cu, 0x00001770u, "special? not lowered yet"); return;
L_08B34544:
    rt.unsupported(0x08B34544u, 0x00000AF0u, "special? not lowered yet"); return;
L_08B3454C:
    rt.unsupported(0x08B3454Cu, 0x00001770u, "special? not lowered yet"); return;
L_08B34554:
    rt.unsupported(0x08B34554u, 0x00001770u, "special? not lowered yet"); return;
L_08B3455C:
    rt.unsupported(0x08B3455Cu, 0x00000AF0u, "special? not lowered yet"); return;
L_08B34564:
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B34564u, 0x00000FA0u); return; } }
    rt.unsupported(0x08B34568u, 0x000003E8u, "special? not lowered yet"); return;
L_08B3456C:
    jump_target = 0u;
    rt.unsupported(0x08B34570u, 0x000003E8u, "special? not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B34574:
    ctx.gpr[1] = (0u << 18u);
    // nop
    goto L_08B3457C;
L_08B3457C:
    rt.unsupported(0x08B3457Cu, 0x00000BB8u, "special? not lowered yet"); return;
L_08B34584:
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B34584u, 0x00000FA0u); return; } }
    rt.unsupported(0x08B34588u, 0x000003E8u, "special? not lowered yet"); return;
L_08B3458C:
    (void)(ctx.hi);
    // nop
    goto L_08B34594;
L_08B34594:
    rt.unsupported(0x08B34594u, 0x000003E8u, "special? not lowered yet"); return;
L_08B3459C:
    (void)(ctx.hi);
    goto L_08B345A0;
L_08B345A0:
    (void)(ctx.hi);
    goto L_08B345A4;
L_08B345A4:
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B345AC:
    rt.unsupported(0x08B345ACu, 0x000003E8u, "special? not lowered yet"); return;
L_08B345B4:
    (void)(ctx.hi);
    rt.unsupported(0x08B345B8u, 0x000005DCu, "special? not lowered yet"); return;
L_08B345BC:
    rt.unsupported(0x08B345BCu, 0x00000C1Cu, "special? not lowered yet"); return;
L_08B345C4:
    (void)(0u & 0u);
    rt.unsupported(0x08B345C8u, 0x000003E8u, "special? not lowered yet"); return;
L_08B345CC:
    rt.unsupported(0x08B345CCu, 0x00000BB8u, "special? not lowered yet"); return;
L_08B345D4:
    rt.unsupported(0x08B345D4u, 0x00000BB8u, "special? not lowered yet"); return;
L_08B345DC:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B345DCu, 0x00000320u); return; } }
    jump_target = 0u;
    rt.unsupported(0x08B345E4u, 0x000003E8u, "special? not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B345E4:
    rt.unsupported(0x08B345E4u, 0x000003E8u, "special? not lowered yet"); return;
L_08B345EC:
    (void)(ctx.hi);
    // nop
    goto L_08B345F4;
L_08B345F4:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B345F4u, 0x00000320u); return; } }
    jump_target = 0u;
    rt.unsupported(0x08B345FCu, 0x000003E8u, "special? not lowered yet"); return;
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B345FC:
    rt.unsupported(0x08B345FCu, 0x000003E8u, "special? not lowered yet"); return;
L_08B34604:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    // nop
    goto L_08B3460C;
L_08B3460C:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B3460Cu, 0x00000320u); return; } }
    (void)(ctx.hi);
    goto L_08B34614;
L_08B34614:
    (void)(ctx.hi);
    rt.unsupported(0x08B34618u, 0x000003E8u, "special? not lowered yet"); return;
L_08B3461C:
    rt.unsupported(0x08B3461Cu, 0x00000A28u, "special? not lowered yet"); return;
L_08B34624:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B34624u, 0x00000320u); return; } }
    (void)(ctx.hi);
    goto L_08B3462C;
L_08B3462C:
    (void)(ctx.hi);
    rt.unsupported(0x08B34630u, 0x000003E8u, "special? not lowered yet"); return;
L_08B34634:
    ctx.gpr[1] = (0u << 18u);
    // nop
    goto L_08B3463C;
L_08B3463C:
    (void)(ctx.hi);
    (void)(ctx.hi);
    goto L_08B34644;
L_08B34644:
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B34644u, 0x00000FA0u); return; } }
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B34648u, 0x00000FA0u); return; } }
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B34668:
    // nop
    { const bool signed_ok = ctx.execute_signed_add(1u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B3466Cu, 0x00000FA0u); return; } }
    rt.unsupported(0x08B34670u, 0x000003E8u, "special? not lowered yet"); return;
L_08B34758:
    // nop
    rt.unsupported(0x08B3475Cu, 0x000003E8u, "special? not lowered yet"); return;
L_08B34888:
    (void)(ctx.hi);
    rt.unsupported(0x08B3488Cu, 0x00000BB8u, "special? not lowered yet"); return;
L_08B348EC:
    rt.unsupported(0x08B348ECu, 0x00000AF0u, "special? not lowered yet"); return;
L_08B348FC:
    rt.unsupported(0x08B348FCu, 0x00000BB8u, "special? not lowered yet"); return;
L_08B349CC:
    rt.unsupported(0x08B349D0u, 0x08B1260Cu, "control flow in delay slot"); return;
L_08B34C68:
    // nop
    rt.unsupported(0x08B34C6Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B34C70:
    // nop
    rt.unsupported(0x08B34C78u, 0x08B1282Cu, "control flow in delay slot"); return;
L_08B34C78:
    // nop
    ctx.pc = 0x02C4A0B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34C80:
    // nop
    // nop
    goto L_08B34C88;
L_08B34C88:
    rt.unsupported(0x08B34C8Cu, 0x08B12838u, "control flow in delay slot"); return;
L_08B34C90:
    // nop
    if (0u != 0u) (void)(0u);
    goto L_08B34C98;
L_08B34C98:
    // nop
    rt.unsupported(0x08B34CA0u, 0x08B12848u, "control flow in delay slot"); return;
L_08B34CA0:
    (void)(0u >> 0u);
    ctx.pc = 0x02C4A120u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34CA8:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34CB0;
L_08B34CB0:
    rt.unsupported(0x08B34CB4u, 0x08B12854u, "control flow in delay slot"); return;
L_08B34CB8:
    (void)(0u >> 0u);
    if (0u != 0u) (void)(0u);
    goto L_08B34CC0;
L_08B34CC0:
    // nop
    rt.unsupported(0x08B34CC8u, 0x08B12864u, "control flow in delay slot"); return;
L_08B34CC8:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A190u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34CD0:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34CD8;
L_08B34CD8:
    rt.unsupported(0x08B34CDCu, 0x08B12874u, "control flow in delay slot"); return;
L_08B34CE0:
    (void)(0u >> 0u);
    if (0u != 0u) (void)(0u);
    goto L_08B34CE8;
L_08B34CE8:
    // nop
    rt.unsupported(0x08B34CF0u, 0x08B12884u, "control flow in delay slot"); return;
L_08B34CF0:
    // nop
    ctx.pc = 0x02C4A210u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34CF8:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34D00;
L_08B34D00:
    rt.unsupported(0x08B34D04u, 0x08B12898u, "control flow in delay slot"); return;
L_08B34D08:
    (void)(0u << (0u & 31u));
    if (0u != 0u) (void)(0u);
    goto L_08B34D10;
L_08B34D10:
    rt.unsupported(0x08B34D10u, 0x00000001u, "special? not lowered yet"); return;
L_08B34D18:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A2A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34D20:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34D28;
L_08B34D28:
    rt.unsupported(0x08B34D2Cu, 0x08B128B8u, "control flow in delay slot"); return;
L_08B34D30:
    rt.unsupported(0x08B34D30u, 0x00000001u, "special? not lowered yet"); return;
L_08B34D38:
    // nop
    rt.unsupported(0x08B34D40u, 0x08B128C8u, "control flow in delay slot"); return;
L_08B34D40:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C4A320u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34D48:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34D50;
L_08B34D50:
    rt.unsupported(0x08B34D54u, 0x08B128D8u, "control flow in delay slot"); return;
L_08B34D58:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    if (0u != 0u) (void)(0u);
    goto L_08B34D60;
L_08B34D60:
    // nop
    rt.unsupported(0x08B34D68u, 0x08B128E8u, "control flow in delay slot"); return;
L_08B34D68:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C4A3A0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34D70:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B34D74u, 0x00000001u, "special? not lowered yet"); return;
L_08B34D78:
    rt.unsupported(0x08B34D7Cu, 0x08B128F8u, "control flow in delay slot"); return;
L_08B34D80:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    if (0u != 0u) (void)(0u);
    goto L_08B34D88;
L_08B34D88:
    rt.unsupported(0x08B34D88u, 0x00000001u, "special? not lowered yet"); return;
L_08B34D90:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A430u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34D98:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B34D9Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B34DA0:
    rt.unsupported(0x08B34DA4u, 0x08B1291Cu, "control flow in delay slot"); return;
L_08B34DA8:
    (void)(0u >> 0u);
    if (0u != 0u) (void)(0u);
    goto L_08B34DB0;
L_08B34DB0:
    // nop
    rt.unsupported(0x08B34DB8u, 0x08B1292Cu, "control flow in delay slot"); return;
L_08B34DB8:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A4B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34DC0:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34DC8;
L_08B34DC8:
    rt.unsupported(0x08B34DCCu, 0x08B1293Cu, "control flow in delay slot"); return;
L_08B34DD0:
    // nop
    if (0u != 0u) (void)(0u);
    goto L_08B34DD8;
L_08B34DD8:
    rt.unsupported(0x08B34DD8u, 0x00000001u, "special? not lowered yet"); return;
L_08B34DE0:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A530u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34DE8:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34DF0;
L_08B34DF0:
    rt.unsupported(0x08B34DF4u, 0x08B1295Cu, "control flow in delay slot"); return;
L_08B34DF8:
    rt.unsupported(0x08B34DF8u, 0x00000001u, "special? not lowered yet"); return;
L_08B34E00:
    // nop
    rt.unsupported(0x08B34E08u, 0x08B1296Cu, "control flow in delay slot"); return;
L_08B34E08:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    ctx.pc = 0x02C4A5B0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34E10:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34E18;
L_08B34E18:
    rt.unsupported(0x08B34E1Cu, 0x08B12980u, "control flow in delay slot"); return;
L_08B34E20:
    (void)(0u << (0u & 31u));
    goto L_08B34E24;
L_08B34E24:
    if (0u != 0u) (void)(0u);
    goto L_08B34E28;
L_08B34E28:
    rt.unsupported(0x08B34E28u, 0x00000001u, "special? not lowered yet"); return;
L_08B34E30:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A640u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34E38:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34E40;
L_08B34E40:
    rt.unsupported(0x08B34E44u, 0x08B129A4u, "control flow in delay slot"); return;
L_08B34E48:
    (void)(0u << (0u & 31u));
    if (0u != 0u) (void)(0u);
    goto L_08B34E50;
L_08B34E50:
    // nop
    rt.unsupported(0x08B34E58u, 0x08B129B4u, "control flow in delay slot"); return;
L_08B34E58:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A6D0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34E60:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34E68;
L_08B34E68:
    rt.unsupported(0x08B34E6Cu, 0x08B129C4u, "control flow in delay slot"); return;
L_08B34E70:
    rt.unsupported(0x08B34E70u, 0x00000001u, "special? not lowered yet"); return;
L_08B34E78:
    // nop
    rt.unsupported(0x08B34E80u, 0x08B129D8u, "control flow in delay slot"); return;
L_08B34E80:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A760u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34E88:
    if (0u != 0u) (void)(0u);
    // nop
    goto L_08B34E90;
L_08B34E90:
    rt.unsupported(0x08B34E94u, 0x08B129E8u, "control flow in delay slot"); return;
L_08B34E98:
    (void)(0u << (0u & 31u));
    if (0u != 0u) (void)(0u);
    goto L_08B34EA0;
L_08B34EA0:
    // nop
    rt.unsupported(0x08B34EA8u, 0x08B129F8u, "control flow in delay slot"); return;
L_08B34EA8:
    (void)(0u << (0u & 31u));
    ctx.pc = 0x02C4A7E0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34EB0:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B34EB4u, 0x00000001u, "special? not lowered yet"); return;
L_08B34EB8:
    rt.unsupported(0x08B34EBCu, 0x08B12A08u, "control flow in delay slot"); return;
L_08B34EC0:
    (void)(0u >> 0u);
    if (0u != 0u) (void)(0u);
    goto L_08B34EC8;
L_08B34EC8:
    rt.unsupported(0x08B34EC8u, 0x00000001u, "special? not lowered yet"); return;
L_08B34ED0:
    // nop
    ctx.pc = 0x02C4A870u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B34ED8:
    if (0u != 0u) (void)(0u);
    rt.unsupported(0x08B34EDCu, 0x00000001u, "special? not lowered yet"); return;
L_08B34EE0:
    rt.unsupported(0x08B34EE0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B34EE8:
    // nop
    // nop
    goto L_08B34EF0;
L_08B34EF0:
    // nop
    // nop
    goto L_08B34EF8;
L_08B34EF8:
    // nop
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    goto L_08B34F00;
L_08B34F00:
    // nop
    goto L_08B34F04;
L_08B34F04:
    // nop
    goto L_08B34F08;
L_08B34F08:
    rt.unsupported(0x08B34F0Cu, 0x08B00D94u, "control flow in delay slot"); return;
L_08B34F10:
    rt.unsupported(0x08B34F10u, 0x43534944u, "unknown not lowered yet"); return;
L_08B34F18:
    rt.unsupported(0x08B34F18u, 0x475F5053u, "cop1? not lowered yet"); return;
L_08B34F1C:
    ctx.gpr[5] = (ctx.gpr[26] < static_cast<std::uint32_t>(19777) ? 1u : 0u);
    goto L_08B34F20;
L_08B34F20:
    rt.unsupported(0x08B34F20u, 0x44525355u, "unsupported CFC1 control register"); return;
    jump_target = ctx.gpr[1];
    ctx.gpr[10] = (0x08B34F2Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B34F2Cu) goto L_08B34F2C;
    return;
L_08B34F28:
    // nop
    goto L_08B34F2C;
L_08B34F2C:
    // nop
    goto L_08B34F30;
L_08B34F30:
    // nop
    // nop
    goto L_08B34F38;
L_08B34F38:
    // nop
    // nop
    goto L_08B34F40;
L_08B34F40:
    // nop
    // nop
    goto L_08B34F48;
L_08B34F48:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B34F90u, 0x40666666u, "unknown not lowered yet"); return;
L_08B34FD4:
    ctx.gpr[8] = (ctx.gpr[15] << 9u);
    ctx.gpr[28] = (ctx.gpr[4] << 7u);
    ctx.gpr[22] = (ctx.gpr[15] << 6u);
    ctx.gpr[17] = (ctx.gpr[27] << 22u);
    ctx.gpr[29] = (ctx.gpr[1] << 11u);
    ctx.gpr[17] = (ctx.gpr[23] << 9u);
    ctx.gpr[21] = (ctx.gpr[18] << 2u);
    ctx.gpr[23] = (ctx.gpr[12] << 10u);
    goto L_08B34FF4;
L_08B34FF4:
    ctx.gpr[16] = (ctx.gpr[30] << 18u);
    ctx.gpr[19] = (ctx.gpr[21] << 30u);
    ctx.gpr[16] = (ctx.gpr[26] << 5u);
    ctx.gpr[18] = (ctx.gpr[24] << 26u);
    ctx.gpr[5] = (ctx.gpr[17] << 20u);
    ctx.gpr[25] = (ctx.gpr[6] << 18u);
    ctx.gpr[1] = (ctx.gpr[29] << 4u);
    ctx.gpr[12] = (ctx.gpr[3] << 25u);
    ctx.gpr[15] = (ctx.gpr[29] << 1u);
    (void)(ctx.gpr[25] << 23u);
    ctx.gpr[2] = (ctx.gpr[26] << 8u);
    ctx.gpr[4] = (ctx.gpr[20] << 16u);
    ctx.gpr[9] = (ctx.gpr[12] << 13u);
    ctx.gpr[6] = (ctx.gpr[14] << 24u);
    ctx.gpr[24] = (ctx.gpr[9] << 14u);
    ctx.gpr[25] = (ctx.gpr[10] << 31u);
    ctx.gpr[27] = (ctx.gpr[7] << 3u);
    ctx.gpr[13] = (0u << 29u);
    ctx.gpr[3] = (ctx.gpr[23] << 12u);
    ctx.gpr[24] = (ctx.gpr[13] << 27u);
    ctx.gpr[30] = (ctx.gpr[30] << 15u);
    // nop
    // nop
    goto L_08B35050;
L_08B35050:
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[16] = (0u << 0u);
    // nop
    rt.unsupported(0x08B35070u, 0x0000FFFFu, "special? not lowered yet"); return;
L_08B350B0:
    // nop
    rt.unsupported(0x08B350B8u, 0x088BA794u, "control flow in delay slot"); return;
L_08B350FC:
    // nop
    rt.unsupported(0x08B35104u, 0x08806498u, "control flow in delay slot"); return;
L_08B35108:
    // nop
    (void)(0u << 16u);
    goto L_08B35110;
L_08B35110:
    // nop
    // nop
    // nop
    ctx.pc = 0x02316BD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B3511C:
    // nop
    rt.unsupported(0x08B35124u, 0x08B00DECu, "control flow in delay slot"); return;
L_08B35128:
    // nop
    rt.unsupported(0x08B35130u, 0x088CAC2Cu, "control flow in delay slot"); return;
L_08B35134:
    // nop
    rt.unsupported(0x08B3513Cu, 0x088CAC2Cu, "control flow in delay slot"); return;
L_08B35180:
    // nop
    // nop
    // nop
    goto L_08B3518C;
L_08B3518C:
    // nop
    goto L_08B35190;
L_08B35190:
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    (void)(0u << 16u);
    goto L_08B351A4;
L_08B351A4:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B351B8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B351D8:
    // nop
    // nop
    // nop
    ctx.pc = 0x023415C0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B351E4:
    // nop
    rt.unsupported(0x08B351ECu, 0x08806498u, "control flow in delay slot"); return;
L_08B351F0:
    // nop
    rt.unsupported(0x08B351F8u, 0x08806498u, "control flow in delay slot"); return;
L_08B351FC:
    // nop
    rt.unsupported(0x08B35204u, 0x08806498u, "control flow in delay slot"); return;
L_08B35208:
    // nop
    rt.unsupported(0x08B35210u, 0x08806498u, "control flow in delay slot"); return;
L_08B35214:
    // nop
    rt.unsupported(0x08B3521Cu, 0x08806498u, "control flow in delay slot"); return;
L_08B35220:
    // nop
    rt.unsupported(0x08B35228u, 0x08806498u, "control flow in delay slot"); return;
L_08B3522C:
    // nop
    rt.unsupported(0x08B35234u, 0x08806498u, "control flow in delay slot"); return;
L_08B35238:
    // nop
    rt.unsupported(0x08B35240u, 0x08806498u, "control flow in delay slot"); return;
L_08B35244:
    // nop
    rt.unsupported(0x08B3524Cu, 0x08806498u, "control flow in delay slot"); return;
L_08B35250:
    // nop
    rt.unsupported(0x08B35258u, 0x08806498u, "control flow in delay slot"); return;
L_08B3525C:
    // nop
    rt.unsupported(0x08B35264u, 0x08806498u, "control flow in delay slot"); return;
L_08B3526C:
    rt.unsupported(0x08B3526Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B35324:
    rt.unsupported(0x08B35324u, 0x0028002Eu, "special? not lowered yet"); return;
L_08B35374:
    rt.unsupported(0x08B35374u, 0x0028002Eu, "special? not lowered yet"); return;
L_08B3537C:
    (void)(ctx.gpr[1] | ctx.gpr[14]);
    (void)(ctx.gpr[1] | ctx.gpr[14]);
    goto L_08B35384;
L_08B35384:
    rt.unsupported(0x08B35384u, 0x0026002Eu, "special? not lowered yet"); return;
L_08B3538C:
    (void)(ctx.gpr[1] ^ ctx.gpr[11]);
    rt.unsupported(0x08B35390u, 0x0025002Eu, "special? not lowered yet"); return;
L_08B35394:
    (void)(ctx.gpr[1] | ctx.gpr[14]);
    rt.unsupported(0x08B35398u, 0x0026002Eu, "special? not lowered yet"); return;
L_08B3539C:
    rt.unsupported(0x08B3539Cu, 0x0030002Fu, "special? not lowered yet"); return;
L_08B353A4:
    (void)(ctx.gpr[1] | ctx.gpr[14]);
    rt.unsupported(0x08B353A8u, 0x002E002Eu, "special? not lowered yet"); return;
L_08B353AC:
    rt.unsupported(0x08B353ACu, 0x0025002Eu, "special? not lowered yet"); return;
L_08B353B4:
    (void)(ctx.gpr[1] ^ ctx.gpr[11]);
    rt.unsupported(0x08B353B8u, 0x002E002Eu, "special? not lowered yet"); return;
L_08B353BC:
    rt.unsupported(0x08B353BCu, 0x002E002Eu, "special? not lowered yet"); return;
L_08B353C4:
    rt.unsupported(0x08B353C4u, 0x0028002Eu, "special? not lowered yet"); return;
L_08B353CC:
    rt.unsupported(0x08B353CCu, 0x0025002Eu, "special? not lowered yet"); return;
L_08B353D4:
    rt.unsupported(0x08B353D4u, 0x0025002Eu, "special? not lowered yet"); return;
L_08B353DC:
    (void)(ctx.gpr[1] | ctx.gpr[11]);
    rt.unsupported(0x08B353E0u, 0x002B002Eu, "special? not lowered yet"); return;
L_08B353E4:
    (void)(ctx.gpr[1] < ctx.gpr[11] ? 1u : 0u);
    (void)(ctx.gpr[1] < ctx.gpr[11] ? 1u : 0u);
    goto L_08B353EC;
L_08B353EC:
    (void)(ctx.gpr[1] < ctx.gpr[11] ? 1u : 0u);
    (void)(ctx.gpr[1] < ctx.gpr[11] ? 1u : 0u);
    goto L_08B353F4;
L_08B353F4:
    (void)(0u < 0u ? 1u : 0u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B353FC;
L_08B353FC:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (ctx.gpr[25] & 13107u);
    goto L_08B35404;
L_08B35404:
    ctx.gpr[3] = (13107u << 16u);
    ctx.gpr[1] = (0u << (0u & 31u));
    goto L_08B3540C;
L_08B3540C:
    // nop
    rt.unsupported(0x08B35410u, 0x000005DCu, "special? not lowered yet"); return;
L_08B35414:
    // nop
    rt.unsupported(0x08B35418u, 0x000003E8u, "special? not lowered yet"); return;
L_08B3541C:
    // nop
    rt.unsupported(0x08B35420u, 0x00000BB8u, "special? not lowered yet"); return;
L_08B35424:
    // nop
    (void)(ctx.hi);
    goto L_08B3542C;
L_08B3542C:
    // nop
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B35434;
L_08B35434:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    goto L_08B3543C;
L_08B3543C:
    // nop
    // nop
    goto L_08B35444;
L_08B35444:
    ctx.gpr[16] = (0u << 16u);
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3544C:
    // nop
    rt.unsupported(0x08B35450u, 0x000000FAu, "special? not lowered yet"); return;
L_08B35454:
    // nop
    rt.unsupported(0x08B35458u, 0xD2F1A9FCu, "vfpu4 not lowered yet"); return;
L_08B3545C:
    (void)(25165u << 16u);
    // nop
    goto L_08B35464;
L_08B35464:
    ctx.gpr[24] = (0u << 16u);
    rt.unsupported(0x08B35468u, 0x40666666u, "unknown not lowered yet"); return;
L_08B354A8:
    rt.unsupported(0x08B354ACu, 0x088E8D20u, "control flow in delay slot"); return;
L_08B354DC:
    rt.unsupported(0x08B354E0u, 0x088E8E24u, "control flow in delay slot"); return;
L_08B3552C:
    rt.unsupported(0x08B35530u, 0x088E9718u, "control flow in delay slot"); return;
L_08B35678:
    // PSP CACHE is a no-op in coherent host memory.
    // PSP CACHE is a no-op in coherent host memory.
    rt.unsupported(0x08B35680u, 0xC04CCCCDu, "unknown not lowered yet"); return;
L_08B3568C:
    rt.unsupported(0x08B3568Cu, 0x40000000u, "unknown not lowered yet"); return;
L_08B356A0:
    rt.unsupported(0x08B356A0u, 0x40C00000u, "unknown not lowered yet"); return;
L_08B356B4:
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B356C8;
L_08B356C8:
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    goto L_08B356DC;
L_08B356DC:
    ctx.gpr[5] = (7864u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    ctx.gpr[3] = (55050u << 16u);
    rt.unsupported(0x08B356F0u, 0x40C00000u, "unknown not lowered yet"); return;
L_08B35728:
    // nop
    goto L_08B3572C;
L_08B3572C:
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[19] = (13107u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B3573Cu, 0x00000001u, "special? not lowered yet"); return;
L_08B35750:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B35760u, 0x41700000u, "unknown not lowered yet"); return;
L_08B357F8:
    // nop
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B35808u, 0x40A00000u, "unknown not lowered yet"); return;
L_08B35838:
    rt.unsupported(0x08B35838u, 0x40200000u, "unknown not lowered yet"); return;
L_08B358BC:
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B358C0u, 0x40000000u, "unknown not lowered yet"); return;
L_08B35914:
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    ctx.gpr[9] = (4059u << 16u);
    ctx.gpr[25] = (39322u << 16u);
    rt.unsupported(0x08B35938u, 0x40000000u, "unknown not lowered yet"); return;
L_08B35974:
    ctx.gpr[6] = (26214u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B35980u, 0x41200000u, "unknown not lowered yet"); return;
L_08B35B4C:
    // nop
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    goto L_08B35B54;
L_08B35B54:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    rt.unsupported(0x08B35B58u, 0x00000001u, "special? not lowered yet"); return;
L_08B35B5C:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    jump_target = 0u;
    (void)(0u >> 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B35B64:
    (void)(0u >> 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    goto L_08B35B6C;
L_08B35B6C:
    jump_target = 0u;
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B35B74:
    (void)(0u >> 0u);
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 0u));
    goto L_08B35B7C;
L_08B35B7C:
    rt.unsupported(0x08B35B7Cu, 0x00000005u, "special? not lowered yet"); return;
L_08B35B84:
    (void)(0u >> (0u & 31u));
    goto L_08B35B88;
L_08B35B88:
    rt.unsupported(0x08B35B88u, 0x0000000Eu, "special? not lowered yet"); return;
L_08B35B8C:
    rt.memory().memory_barrier();
    (void)(ctx.hi);
    goto L_08B35B94;
L_08B35B94:
    ctx.hi = 0u;
    (void)(ctx.lo);
    goto L_08B35B9C;
L_08B35B9C:
    ctx.lo = 0u;
    goto L_08B35BA0;
L_08B35BA0:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B35BA8u);
    if (0u == 0u) (void)(0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B35BA8u) goto L_08B35BA8;
    return;
L_08B35BA4:
    if (0u == 0u) (void)(0u);
    goto L_08B35BA8;
L_08B35BA8:
    if (0u != 0u) (void)(0u);
    goto L_08B35BAC;
L_08B35BAC:
    rt.unsupported(0x08B35BACu, 0x0000000Cu, "syscall not lowered yet"); return;
L_08B35BB4:
    (void)(0u << 16u);
    (void)(0u << 16u);
    goto L_08B35BBC;
L_08B35BBC:
    // nop
    rt.unsupported(0x08B35BC0u, 0x41C00000u, "unknown not lowered yet"); return;
L_08B35BF4:
    rt.unsupported(0x08B35BF4u, 0x40200000u, "unknown not lowered yet"); return;
L_08B35C50:
    // vflush: architectural no-op that retains VFPU prefixes
    // nop
    rt.unsupported(0x08B35C58u, 0x0000000Eu, "special? not lowered yet"); return;
L_08B35D74:
    // nop
    rt.unsupported(0x08B35D7Cu, 0x08B00F5Cu, "control flow in delay slot"); return;
L_08B35D9C:
    rt.unsupported(0x08B35DA0u, 0x0890AEBCu, "control flow in delay slot"); return;
L_08B35DBC:
    rt.unsupported(0x08B35DC0u, 0x0890AB50u, "control flow in delay slot"); return;
L_08B35E48:
    rt.unsupported(0x08B35E48u, 0x40800000u, "unknown not lowered yet"); return;
L_08B35E50:
    (void)(0u << 16u);
    goto L_08B35E54;
L_08B35E54:
    // nop
    goto L_08B35E58;
L_08B35E58:
    // nop
    // nop
    goto L_08B35E60;
L_08B35E60:
    // nop
    // nop
    goto L_08B35E68;
L_08B35E68:
    // nop
    (void)(0u ^ 0u);
    goto L_08B35E70;
L_08B35E70:
    rt.unsupported(0x08B35E70u, 0x43340000u, "unknown not lowered yet"); return;
L_08B35E78:
    ctx.gpr[25] = (39322u << 16u);
    (void)(0u << 16u);
    goto L_08B35E80;
L_08B35E80:
    ctx.gpr[19] = (13107u << 16u);
    rt.unsupported(0x08B35E84u, 0x43FA0000u, "unknown not lowered yet"); return;
L_08B35E88:
    rt.unsupported(0x08B35E88u, 0x41F00000u, "unknown not lowered yet"); return;
L_08B35E90:
    ctx.gpr[29] = (28836u << 16u);
    (void)(0u << 16u);
    goto L_08B35E98;
L_08B35E98:
    ctx.gpr[21] = (49807u << 16u);
    (void)(0u << 16u);
    goto L_08B35EA0;
L_08B35EA0:
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B35EA4u, 0x40000000u, "unknown not lowered yet"); return;
L_08B35EA8:
    (void)(0u << 16u);
    (void)(0u << 16u);
    goto L_08B35EB0;
L_08B35EB0:
    rt.unsupported(0x08B35EB0u, 0x40000000u, "unknown not lowered yet"); return;
L_08B35EB8:
    (void)(0u << 16u);
    rt.unsupported(0x08B35EBCu, 0x00000001u, "special? not lowered yet"); return;
L_08B35EC0:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    goto L_08B35EC8;
L_08B35EC8:
    ctx.gpr[12] = (52429u << 16u);
    (void)(0u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    ctx.gpr[12] = (52429u << 16u);
    rt.unsupported(0x08B35ED8u, 0x42800000u, "unknown not lowered yet"); return;
L_08B35EEC:
    // nop
    // nop
    // nop
    // nop
    // nop
    ctx.gpr[21] = (ctx.gpr[2] & 12897u);
    ctx.gpr[19] = (43306u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B35F10u, 0xC083126Fu, "unknown not lowered yet"); return;
L_08B35F20:
    (void)(ctx.gpr[1] + static_cast<std::uint32_t>(24868));
    rt.unsupported(0x08B35F24u, 0x41346120u, "unknown not lowered yet"); return;
L_08B35FBC:
    rt.unsupported(0x08B35FBCu, 0x445A4000u, "unsupported CFC1 control register"); return;
    rt.unsupported(0x08B35FC0u, 0x44BE4000u, "cop1? not lowered yet"); return;
L_08B35FC8:
    rt.unsupported(0x08B35FC8u, 0x42640000u, "unknown not lowered yet"); return;
L_08B35FCC:
    rt.unsupported(0x08B35FCCu, 0x44ADB000u, "cop1? not lowered yet"); return;
L_08B35FD8:
    // nop
    // nop
    rt.unsupported(0x08B35FE0u, 0x00000001u, "special? not lowered yet"); return;
L_08B35FE8:
    rt.unsupported(0x08B35FE8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B35FF4:
    rt.unsupported(0x08B35FF4u, 0x44414548u, "unsupported CFC1 control register"); return;
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36010u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3601C:
    rt.unsupported(0x08B3601Cu, 0x42554F44u, "unknown not lowered yet"); return;
L_08B36040:
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
    goto L_08B36044;
L_08B36044:
    rt.unsupported(0x08B36044u, 0x48414A4Bu, "cop2/vfpu not lowered yet"); return;
L_08B3604C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36060u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3606C:
    rt.unsupported(0x08B3606Cu, 0x45534952u, "cop1? not lowered yet"); return;
L_08B36094:
    if (ctx.gpr[26] == ctx.gpr[16]) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 4u, 0x08B485C8u>(ctx, &aot_mem); return;
    }
    goto L_08B3609C;
L_08B3609C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B360B0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B360BC:
    rt.unsupported(0x08B360BCu, 0x444E554Du, "unsupported CFC1 control register"); return;
    if (ctx.gpr[2] != ctx.gpr[1]) {
    rt.unsupported(0x08B360C4u, 0x00000033u, "special? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 14u, 0x08B41A00u>(ctx, &aot_mem); return;
    }
    goto L_08B360C8;
L_08B360C8:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B360D8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B360DC:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 30u, 0x08B41E1Cu>(ctx, &aot_mem); return;
    }
    goto L_08B360E4;
L_08B360E4:
    ctx.gpr[24] = (ctx.gpr[18] < static_cast<std::uint32_t>(21325) ? 1u : 0u);
    rt.unsupported(0x08B360E8u, 0x00335441u, "special? not lowered yet"); return;
L_08B3610C:
    rt.unsupported(0x08B36110u, 0x54412E48u, "control flow in delay slot"); return;
L_08B36114:
    rt.unsupported(0x08B36114u, 0x00000033u, "special? not lowered yet"); return;
L_08B36134:
    ctx.gpr[10] = (ctx.gpr[18] < static_cast<std::uint32_t>(17228) ? 1u : 0u);
    rt.unsupported(0x08B36138u, 0x00335441u, "special? not lowered yet"); return;
L_08B3615C:
    if (ctx.gpr[18] == ctx.gpr[6]) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 30u, 0x08B46E90u>(ctx, &aot_mem); return;
    }
    goto L_08B36164;
L_08B36164:
    // nop
    // nop
    // nop
    goto L_08B36170;
L_08B36170:
    // nop
    // nop
    goto L_08B36178;
L_08B36178:
    rt.unsupported(0x08B36178u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36180:
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
    goto L_08B36184;
L_08B36184:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 5u, 0x08B48694u>(ctx, &aot_mem); return;
    }
    goto L_08B3618C;
L_08B3618C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B361A0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B361AC:
    rt.unsupported(0x08B361ACu, 0x45544157u, "cop1? not lowered yet"); return;
L_08B361B8:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B361C8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B361D4:
    rt.unsupported(0x08B361D4u, 0x4D574153u, "unknown not lowered yet"); return;
L_08B361E0:
    rt.unsupported(0x08B361E4u, 0x504F4F4Cu, "control flow in delay slot"); return;
L_08B361E8:
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
    // nop
    rt.unsupported(0x08B361F0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B361FC:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 8u, 0x08B4870Cu>(ctx, &aot_mem); return;
    }
    goto L_08B36204;
L_08B36204:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36218u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36224:
    rt.unsupported(0x08B36224u, 0x45544157u, "cop1? not lowered yet"); return;
L_08B36230:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36240u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3624C:
    rt.unsupported(0x08B3624Cu, 0x45544157u, "cop1? not lowered yet"); return;
L_08B36258:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36268u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36274:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 11u, 0x08B48784u>(ctx, &aot_mem); return;
    }
    goto L_08B3627C;
L_08B3627C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36290u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3629C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 12u, 0x08B487ACu>(ctx, &aot_mem); return;
    }
    goto L_08B362A4;
L_08B362A4:
    // nop
    // nop
    // nop
    goto L_08B362B0;
L_08B362B0:
    // nop
    // nop
    rt.unsupported(0x08B362B8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B362C4:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 14u, 0x08B487D4u>(ctx, &aot_mem); return;
    }
    goto L_08B362CC;
L_08B362CC:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B362E0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B362EC:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 15u, 0x08B487FCu>(ctx, &aot_mem); return;
    }
    goto L_08B362F4;
L_08B362F4:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36308u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36314:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 16u, 0x08B48824u>(ctx, &aot_mem); return;
    }
    goto L_08B3631C;
L_08B3631C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36330u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3633C:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 17u, 0x08B4884Cu>(ctx, &aot_mem); return;
    }
    goto L_08B36344;
L_08B36344:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36358u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36364:
    if (static_cast<std::int32_t>(ctx.gpr[10]) <= 0) {
    ctx.gpr[20] = (ctx.gpr[26] & 16686u);
        (void)rt.invoke_chained_direct<&recomp_unit_0209_entry, 209u, 18u, 0x08B48874u>(ctx, &aot_mem); return;
    }
    goto L_08B3636C;
L_08B3636C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36380u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3638C:
    rt.unsupported(0x08B3638Cu, 0x494C4F50u, "cop2/vfpu not lowered yet"); return;
L_08B363B4:
    rt.unsupported(0x08B363B4u, 0x49584154u, "cop2/vfpu not lowered yet"); return;
L_08B363DC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B363E0u, 0x412E415Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 42u, 0x08B47918u>(ctx, &aot_mem); return;
    }
    goto L_08B363E4;
L_08B363E4:
    rt.unsupported(0x08B363E4u, 0x00003354u, "special? not lowered yet"); return;
L_08B363F0:
    // nop
    // nop
    rt.unsupported(0x08B363F8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36404:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36408u, 0x412E425Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 43u, 0x08B47940u>(ctx, &aot_mem); return;
    }
    goto L_08B3640C;
L_08B3640C:
    rt.unsupported(0x08B3640Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B36420:
    rt.unsupported(0x08B36420u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36428:
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
    goto L_08B3642C;
L_08B3642C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36430u, 0x412E435Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 44u, 0x08B47968u>(ctx, &aot_mem); return;
    }
    goto L_08B36434;
L_08B36430:
    rt.unsupported(0x08B36430u, 0x412E435Fu, "unknown not lowered yet"); return;
L_08B36434:
    rt.unsupported(0x08B36434u, 0x00003354u, "special? not lowered yet"); return;
L_08B36438:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36448u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36454:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36458u, 0x412E445Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 45u, 0x08B47990u>(ctx, &aot_mem); return;
    }
    goto L_08B3645C;
L_08B3645C:
    rt.unsupported(0x08B3645Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B3647C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36480u, 0x412E455Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 46u, 0x08B479B8u>(ctx, &aot_mem); return;
    }
    goto L_08B36484;
L_08B36484:
    rt.unsupported(0x08B36484u, 0x00003354u, "special? not lowered yet"); return;
L_08B364A4:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B364A8u, 0x412E465Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 47u, 0x08B479E0u>(ctx, &aot_mem); return;
    }
    goto L_08B364AC;
L_08B364AC:
    rt.unsupported(0x08B364ACu, 0x00003354u, "special? not lowered yet"); return;
L_08B364B4:
    // nop
    // nop
    goto L_08B364BC;
L_08B364BC:
    // nop
    rt.unsupported(0x08B364C0u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B364C4:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 58u, 0x08B42204u>(ctx, &aot_mem); return;
    }
    goto L_08B364CC;
L_08B364CC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B364D0u, 0x412E475Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 48u, 0x08B47A08u>(ctx, &aot_mem); return;
    }
    goto L_08B364D4;
L_08B364D4:
    rt.unsupported(0x08B364D4u, 0x00003354u, "special? not lowered yet"); return;
L_08B364F4:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B364F8u, 0x412E485Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 49u, 0x08B47A30u>(ctx, &aot_mem); return;
    }
    goto L_08B364FC;
L_08B364FC:
    rt.unsupported(0x08B364FCu, 0x00003354u, "special? not lowered yet"); return;
L_08B3651C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36520u, 0x412E495Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 50u, 0x08B47A58u>(ctx, &aot_mem); return;
    }
    goto L_08B36524;
L_08B36524:
    rt.unsupported(0x08B36524u, 0x00003354u, "special? not lowered yet"); return;
L_08B36544:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36548u, 0x412E4A5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 51u, 0x08B47A80u>(ctx, &aot_mem); return;
    }
    goto L_08B3654C;
L_08B3654C:
    rt.unsupported(0x08B3654Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B3656C:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36570u, 0x412E4B5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 52u, 0x08B47AA8u>(ctx, &aot_mem); return;
    }
    goto L_08B36574;
L_08B36574:
    rt.unsupported(0x08B36574u, 0x00003354u, "special? not lowered yet"); return;
L_08B36594:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B36598u, 0x412E4C5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 53u, 0x08B47AD0u>(ctx, &aot_mem); return;
    }
    goto L_08B3659C;
L_08B3659C:
    rt.unsupported(0x08B3659Cu, 0x00003354u, "special? not lowered yet"); return;
L_08B365BC:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B365C0u, 0x412E4D5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 54u, 0x08B47AF8u>(ctx, &aot_mem); return;
    }
    goto L_08B365C4;
L_08B365C4:
    rt.unsupported(0x08B365C4u, 0x00003354u, "special? not lowered yet"); return;
L_08B365E4:
    if (ctx.gpr[26] == ctx.gpr[23]) {
    rt.unsupported(0x08B365E8u, 0x412E4E5Fu, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 55u, 0x08B47B20u>(ctx, &aot_mem); return;
    }
    goto L_08B365EC;
L_08B365EC:
    rt.unsupported(0x08B365ECu, 0x00003354u, "special? not lowered yet"); return;
L_08B36608:
    rt.unsupported(0x08B36608u, 0x45435354u, "cop1? not lowered yet"); return;
L_08B3660C:
    rt.unsupported(0x08B3660Cu, 0x422F454Eu, "unknown not lowered yet"); return;
L_08B36618:
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36628u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36634:
    rt.unsupported(0x08B36634u, 0x422F454Eu, "unknown not lowered yet"); return;
L_08B36640:
    rt.unsupported(0x08B36640u, 0x00003354u, "special? not lowered yet"); return;
L_08B3665C:
    rt.unsupported(0x08B3665Cu, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B3666C:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36678u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36684:
    rt.unsupported(0x08B36684u, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B366AC:
    rt.unsupported(0x08B366ACu, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B366D4:
    rt.unsupported(0x08B366D4u, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B366E0:
    rt.unsupported(0x08B366E0u, 0x00003354u, "special? not lowered yet"); return;
L_08B366FC:
    rt.unsupported(0x08B366FCu, 0x432F454Eu, "unknown not lowered yet"); return;
L_08B36724:
    rt.unsupported(0x08B36724u, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B36734:
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36740u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B3674C:
    rt.unsupported(0x08B3674Cu, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B36758:
    rt.unsupported(0x08B36758u, 0x00003354u, "special? not lowered yet"); return;
L_08B36774:
    rt.unsupported(0x08B36774u, 0x442F454Eu, "cop1? not lowered yet"); return;
L_08B3679C:
    rt.unsupported(0x08B3679Cu, 0x452F454Eu, "cop1? not lowered yet"); return;
L_08B367A8:
    rt.unsupported(0x08B367A8u, 0x00003354u, "special? not lowered yet"); return;
L_08B367C4:
    rt.unsupported(0x08B367C4u, 0x462F454Eu, "cop1? not lowered yet"); return;
L_08B367EC:
    rt.unsupported(0x08B367ECu, 0x462F454Eu, "cop1? not lowered yet"); return;
L_08B36814:
    rt.unsupported(0x08B36814u, 0x482F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B36820:
    rt.unsupported(0x08B36820u, 0x00003354u, "special? not lowered yet"); return;
L_08B3683C:
    rt.unsupported(0x08B3683Cu, 0x482F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B36844:
    rt.unsupported(0x08B36844u, 0x412E4C45u, "unknown not lowered yet"); return;
L_08B36864:
    rt.unsupported(0x08B36864u, 0x4B2F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B36870:
    rt.unsupported(0x08B36870u, 0x00003354u, "special? not lowered yet"); return;
L_08B3688C:
    rt.unsupported(0x08B3688Cu, 0x4C2F454Eu, "unknown not lowered yet"); return;
L_08B368B4:
    rt.unsupported(0x08B368B4u, 0x4D2F454Eu, "unknown not lowered yet"); return;
L_08B368C0:
    rt.unsupported(0x08B368C0u, 0x00000033u, "special? not lowered yet"); return;
L_08B368DC:
    rt.unsupported(0x08B368DCu, 0x4F2F454Eu, "unknown not lowered yet"); return;
L_08B36904:
    rt.unsupported(0x08B36908u, 0x554A4655u, "control flow in delay slot"); return;
L_08B3690C:
    rt.unsupported(0x08B3690Cu, 0x412E5453u, "unknown not lowered yet"); return;
L_08B3692C:
    if (ctx.gpr[25] == ctx.gpr[15]) {
    rt.unsupported(0x08B36930u, 0x4E4F5941u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 58u, 0x08B47E68u>(ctx, &aot_mem); return;
    }
    goto L_08B36934;
L_08B36934:
    rt.unsupported(0x08B36934u, 0x412E5241u, "unknown not lowered yet"); return;
L_08B36954:
    if (ctx.gpr[25] == ctx.gpr[15]) {
    rt.unsupported(0x08B36958u, 0x4C494349u, "unknown not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 59u, 0x08B47E90u>(ctx, &aot_mem); return;
    }
    goto L_08B3695C;
L_08B3695C:
    rt.unsupported(0x08B3695Cu, 0x412E4E41u, "unknown not lowered yet"); return;
L_08B3697C:
    if (ctx.gpr[1] != ctx.gpr[15]) {
    rt.unsupported(0x08B36980u, 0x464F4548u, "cop1? not lowered yet"); return;
        (void)rt.invoke_chained_direct<&recomp_unit_0208_entry, 208u, 60u, 0x08B47EB8u>(ctx, &aot_mem); return;
    }
    goto L_08B36984;
L_08B36984:
    rt.unsupported(0x08B36984u, 0x412E5245u, "unknown not lowered yet"); return;
L_08B369A4:
    rt.unsupported(0x08B369A4u, 0x492F454Eu, "cop2/vfpu not lowered yet"); return;
L_08B369CC:
    rt.unsupported(0x08B369CCu, 0x414E4946u, "unknown not lowered yet"); return;
L_08B369DC:
    // nop
    // nop
    goto L_08B369E4;
L_08B369E4:
    // nop
    rt.unsupported(0x08B369E8u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B369EC:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 95u, 0x08B4272Cu>(ctx, &aot_mem); return;
    }
    goto L_08B369F4;
L_08B369F4:
    rt.unsupported(0x08B369F4u, 0x4353494Du, "unknown not lowered yet"); return;
L_08B369FC:
    rt.unsupported(0x08B369FCu, 0x00335441u, "special? not lowered yet"); return;
L_08B36A04:
    // nop
    // nop
    goto L_08B36A0C;
L_08B36A0C:
    // nop
    rt.unsupported(0x08B36A10u, 0x49445541u, "cop2/vfpu not lowered yet"); return;
L_08B36A14:
    if (ctx.gpr[10] != ctx.gpr[13]) {
    ctx.gpr[3] = (ctx.gpr[26] < static_cast<std::uint32_t>(18771) ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0207_entry, 207u, 96u, 0x08B42754u>(ctx, &aot_mem); return;
    }
    goto L_08B36A1C;
L_08B36A1C:
    rt.unsupported(0x08B36A1Cu, 0x4353494Du, "unknown not lowered yet"); return;
L_08B36A24:
    rt.unsupported(0x08B36A24u, 0x00335441u, "special? not lowered yet"); return;
L_08B36A2C:
    // nop
    // nop
    goto L_08B36A34;
L_08B36A34:
    // nop
    rt.unsupported(0x08B36A38u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36A3C:
    rt.unsupported(0x08B36A3Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B36A44:
    // nop
    // nop
    goto L_08B36A4C;
L_08B36A4C:
    // nop
    // nop
    goto L_08B36A54;
L_08B36A54:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B36A5C;
L_08B36A5C:
    // nop
    rt.unsupported(0x08B36A60u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36A64:
    rt.unsupported(0x08B36A64u, 0x42480000u, "unknown not lowered yet"); return;
L_08B36A6C:
    // nop
    // nop
    goto L_08B36A74;
L_08B36A74:
    // nop
    // nop
    goto L_08B36A7C;
L_08B36A7C:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B36A84;
L_08B36A84:
    // nop
    rt.unsupported(0x08B36A88u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36A8C:
    rt.unsupported(0x08B36A8Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B36A94:
    // nop
    // nop
    goto L_08B36A9C;
L_08B36A9C:
    // nop
    // nop
    goto L_08B36AA4;
L_08B36AA4:
    (void)(0u << 16u);
    ctx.gpr[18] = (18725u << 16u);
    goto L_08B36AAC;
L_08B36AAC:
    // nop
    // nop
    goto L_08B36AB4;
L_08B36AB4:
    // nop
    // nop
    goto L_08B36ABC;
L_08B36ABC:
    rt.unsupported(0x08B36ABCu, 0x00000001u, "special? not lowered yet"); return;
L_08B36AC4:
    // nop
    // nop
    goto L_08B36ACC;
L_08B36ACC:
    // nop
    goto L_08B36AD0;
L_08B36AD0:
    // nop
    goto L_08B36AD4;
L_08B36AD4:
    rt.unsupported(0x08B36AD8u, 0x089D99ACu, "control flow in delay slot"); return;
L_08B36ADC:
    // nop
    rt.unsupported(0x08B36AE0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36AE4:
    rt.unsupported(0x08B36AE4u, 0x42480000u, "unknown not lowered yet"); return;
L_08B36AEC:
    // nop
    // nop
    goto L_08B36AF4;
L_08B36AF4:
    // nop
    // nop
    goto L_08B36AFC;
L_08B36AFC:
    // nop
    rt.unsupported(0x08B36B04u, 0x0891CF34u, "control flow in delay slot"); return;
L_08B36B04:
    rt.unsupported(0x08B36B08u, 0x40666666u, "unknown not lowered yet"); return;
    ctx.pc = 0x02473CD0u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B36B0C:
    rt.unsupported(0x08B36B0Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B36B14:
    // nop
    // nop
    goto L_08B36B1C;
L_08B36B1C:
    // nop
    // nop
    goto L_08B36B24;
L_08B36B24:
    // nop
    jump_target = 0u;
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B36B2C:
    // nop
    rt.unsupported(0x08B36B30u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36B34:
    rt.unsupported(0x08B36B34u, 0x42480000u, "unknown not lowered yet"); return;
L_08B36B3C:
    // nop
    // nop
    goto L_08B36B44;
L_08B36B44:
    // nop
    // nop
    goto L_08B36B4C;
L_08B36B4C:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B36B54;
L_08B36B54:
    // nop
    rt.unsupported(0x08B36B58u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36B5C:
    rt.unsupported(0x08B36B5Cu, 0x42480000u, "unknown not lowered yet"); return;
L_08B36B64:
    // nop
    // nop
    goto L_08B36B6C;
L_08B36B6C:
    // nop
    // nop
    goto L_08B36B74;
L_08B36B74:
    // nop
    // nop
    goto L_08B36B7C;
L_08B36B7C:
    // nop
    rt.unsupported(0x08B36B80u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36B84:
    rt.unsupported(0x08B36B84u, 0x42480000u, "unknown not lowered yet"); return;
L_08B36B8C:
    // nop
    // nop
    goto L_08B36B94;
L_08B36B94:
    // nop
    // nop
    goto L_08B36B9C;
L_08B36B9C:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B36BA4;
L_08B36BA4:
    // nop
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B36BAC;
L_08B36BAC:
    // vflush: architectural no-op that retains VFPU prefixes
    // vflush: architectural no-op that retains VFPU prefixes
    goto L_08B36BB4;
L_08B36BB4:
    // nop
    // nop
    goto L_08B36BBC;
L_08B36BBC:
    // nop
    rt.unsupported(0x08B36BC0u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36BC4:
    rt.unsupported(0x08B36BC4u, 0x42480000u, "unknown not lowered yet"); return;
L_08B36BCC:
    // nop
    // nop
    goto L_08B36BD4;
L_08B36BD4:
    // nop
    goto L_08B36BD8;
L_08B36BD8:
    // nop
    goto L_08B36BDC;
L_08B36BDC:
    ctx.gpr[3] = (ctx.gpr[29] ^ 55050u);
    // nop
    goto L_08B36BE4;
L_08B36BE4:
    (void)(0u << 16u);
    goto L_08B36BE8;
L_08B36BE8:
    ctx.gpr[18] = (18725u << 16u);
    goto L_08B36BEC;
L_08B36BEC:
    // nop
    // nop
    goto L_08B36BF4;
L_08B36BF4:
    // nop
    // nop
    goto L_08B36BFC;
L_08B36BFC:
    ctx.eat_vfpu_prefixes(); // VFPU sync/no-op consumes prefixes
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36C40u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36C64:
    rt.unsupported(0x08B36C64u, 0x42480000u, "unknown not lowered yet"); return;
L_08B36C6C:
    // nop
    // nop
    // nop
    // nop
    // nop
    rt.unsupported(0x08B36C80u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36C9C:
    (void)(0u << 16u);
    // nop
    // nop
    goto L_08B36CA8;
L_08B36CA8:
    // nop
    (void)(0u << 16u);
    // nop
    goto L_08B36CB4;
L_08B36CB4:
    // nop
    // nop
    (void)(0u << 16u);
    // nop
    // nop
    rt.unsupported(0x08B36CC8u, 0x40666666u, "unknown not lowered yet"); return;
L_08B36CEC:
    // nop
    rt.unsupported(0x08B36CF4u, 0x08930298u, "control flow in delay slot"); return;
L_08B36CF8:
    rt.unsupported(0x08B36CFCu, 0x08B155C4u, "control flow in delay slot"); return;
L_08B36E58:
    rt.unsupported(0x08B36E5Cu, 0x08B15A30u, "control flow in delay slot"); return;
L_08B36F9C:
    // nop
    goto L_08B36FA0;
L_08B36FA0:
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B36FA0u, 0x00000162u); return; } }
    rt.unsupported(0x08B36FA4u, 0x00000001u, "special? not lowered yet"); return;
L_08B370B8:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(0u & 0u);
    goto L_08B370C0;
L_08B370C0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(0u | 0u);
    goto L_08B370C8;
L_08B370C8:
    rt.unsupported(0x08B370C8u, 0x00000014u, "special? not lowered yet"); return;
L_08B370D0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(~(0u | 0u));
    rt.unsupported(0x08B370D8u, 0x00001014u, "special? not lowered yet"); return;
L_08B37274:
    { const std::uint32_t dividend = 0u; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B3727Cu, 0x0000005Cu, "special? not lowered yet"); return;
L_08B372E0:
    rt.unsupported(0x08B372E0u, 0x00002014u, "special? not lowered yet"); return;
L_08B374E4:
    (void)(0u | 0u);
    (void)(ctx.hi);
    (void)(0u ^ 0u);
    (void)(ctx.lo);
    goto L_08B374F4;
L_08B374F4:
    (void)(~(0u | 0u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B374FCu, 0x000000E8u, "special? not lowered yet"); return;
L_08B37534:
    rt.unsupported(0x08B37534u, 0x000000EFu, "special? not lowered yet"); return;
L_08B3753C:
    rt.unsupported(0x08B3753Cu, 0x000000F0u, "special? not lowered yet"); return;
L_08B37544:
    rt.unsupported(0x08B37544u, 0x000000F1u, "special? not lowered yet"); return;
L_08B37554:
    rt.unsupported(0x08B37554u, 0x000000F3u, "special? not lowered yet"); return;
L_08B3755C:
    rt.unsupported(0x08B3755Cu, 0x000000F4u, "special? not lowered yet"); return;
L_08B3756C:
    rt.unsupported(0x08B3756Cu, 0x000000F6u, "special? not lowered yet"); return;
L_08B3757C:
    rt.unsupported(0x08B3757Cu, 0x000000F8u, "special? not lowered yet"); return;
L_08B37584:
    rt.unsupported(0x08B37584u, 0x000000F9u, "special? not lowered yet"); return;
L_08B375A4:
    rt.unsupported(0x08B375A4u, 0x000000FDu, "special? not lowered yet"); return;
L_08B375BC:
    (void)(0u << 4u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B375C4;
L_08B375C4:
    rt.unsupported(0x08B375C4u, 0x00000101u, "special? not lowered yet"); return;
L_08B375D4:
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> 4u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(0u << (0u & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B375E4u, 0x00000105u, "special? not lowered yet"); return;
L_08B375EC:
    (void)(0u >> (0u & 31u));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(static_cast<std::uint32_t>(static_cast<std::int32_t>(0u) >> (0u & 31u)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B375FC;
L_08B375FC:
    jump_target = 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08B3760C:
    if (0u == 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37614;
L_08B37614:
    if (0u != 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B3761C;
L_08B3761C:
    rt.unsupported(0x08B3761Cu, 0x0000010Cu, "syscall not lowered yet"); return;
L_08B3762C:
    rt.unsupported(0x08B3762Cu, 0x0000010Eu, "special? not lowered yet"); return;
L_08B37644:
    ctx.hi = 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B3764C;
L_08B3764C:
    (void)(ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.lo = 0u;
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B3765Cu, 0x00000114u, "special? not lowered yet"); return;
L_08B37664:
    rt.unsupported(0x08B37664u, 0x00000115u, "special? not lowered yet"); return;
L_08B3766C:
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37674;
L_08B37674:
    rt.unsupported(0x08B37678u, 0x08B15E08u, "control flow in delay slot"); return;
L_08B37688:
    rt.unsupported(0x08B37688u, 0x000000B2u, "special? not lowered yet"); return;
L_08B376B0:
    rt.unsupported(0x08B376B4u, 0x08B15E44u, "control flow in delay slot"); return;
L_08B376D0:
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 1u : 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(0u < 0u ? 1u : 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(static_cast<std::int32_t>(0u) > static_cast<std::int32_t>(0u) ? 0u : 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(static_cast<std::int32_t>(0u) < static_cast<std::int32_t>(0u) ? 0u : 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B376F0u, 0x000000AEu, "special? not lowered yet"); return;
L_08B37710:
    rt.unsupported(0x08B37714u, 0x08B15EA4u, "control flow in delay slot"); return;
L_08B37758:
    rt.unsupported(0x08B3775Cu, 0x08B15FB0u, "control flow in delay slot"); return;
L_08B377A0:
    rt.unsupported(0x08B377A4u, 0x08B160BCu, "control flow in delay slot"); return;
L_08B377E8:
    rt.unsupported(0x08B377ECu, 0x08B161C8u, "control flow in delay slot"); return;
L_08B377F4:
    rt.unsupported(0x08B377F8u, 0x08B161ECu, "control flow in delay slot"); return;
L_08B37830:
    rt.unsupported(0x08B37830u, 0x000000B7u, "special? not lowered yet"); return;
L_08B378C0:
    rt.unsupported(0x08B378C4u, 0x08B15858u, "control flow in delay slot"); return;
L_08B378CC:
    rt.unsupported(0x08B378D0u, 0x08B157BCu, "control flow in delay slot"); return;
L_08B378E0:
    rt.unsupported(0x08B378E4u, 0x08B162D8u, "control flow in delay slot"); return;
L_08B378F4:
    rt.unsupported(0x08B378F8u, 0x08B16328u, "control flow in delay slot"); return;
L_08B37908:
    rt.unsupported(0x08B3790Cu, 0x08B16344u, "control flow in delay slot"); return;
L_08B3791C:
    rt.unsupported(0x08B37920u, 0x08B16360u, "control flow in delay slot"); return;
L_08B37928:
    rt.unsupported(0x08B3792Cu, 0x08B16388u, "control flow in delay slot"); return;
L_08B37938:
    rt.unsupported(0x08B3793Cu, 0x08B163CCu, "control flow in delay slot"); return;
L_08B3794C:
    rt.unsupported(0x08B37950u, 0x08B16420u, "control flow in delay slot"); return;
L_08B37954:
    rt.unsupported(0x08B37958u, 0x08B16440u, "control flow in delay slot"); return;
L_08B37960:
    rt.unsupported(0x08B37964u, 0x08B16470u, "control flow in delay slot"); return;
L_08B37970:
    rt.unsupported(0x08B37974u, 0x08B164ACu, "control flow in delay slot"); return;
L_08B37980:
    rt.unsupported(0x08B37984u, 0x08B164E8u, "control flow in delay slot"); return;
L_08B37990:
    rt.unsupported(0x08B37994u, 0x08B1651Cu, "control flow in delay slot"); return;
L_08B3799C:
    rt.unsupported(0x08B379A0u, 0x08B16534u, "control flow in delay slot"); return;
L_08B379A8:
    rt.unsupported(0x08B379ACu, 0x08B15864u, "control flow in delay slot"); return;
L_08B379B4:
    rt.unsupported(0x08B379B8u, 0x08B16580u, "control flow in delay slot"); return;
L_08B379B8:
    rt.unsupported(0x08B379BCu, 0x08B16580u, "control flow in delay slot"); return;
L_08B379C4:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B379CCu);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B379CCu) goto L_08B379CC;
    return;
L_08B379CC:
    if (0u == 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    if (0u != 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B379DCu, 0x000000CCu, "syscall not lowered yet"); return;
L_08B379EC:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B379F4u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B379F4u) goto L_08B379F4;
    return;
L_08B379F4:
    if (0u == 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    if (0u != 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B37A04u, 0x000000CCu, "syscall not lowered yet"); return;
L_08B37A14:
    jump_target = 0u;
    ctx.gpr[31] = (0x08B37A1Cu);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08B37A1Cu) goto L_08B37A1C;
    return;
L_08B37A1C:
    if (0u == 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    if (0u != 0u) (void)(0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B37A2Cu, 0x000000CCu, "syscall not lowered yet"); return;
L_08B37A3C:
    rt.unsupported(0x08B37A40u, 0x08B165A4u, "control flow in delay slot"); return;
L_08B37A4C:
    rt.unsupported(0x08B37A50u, 0x000000CEu, "special? not lowered yet"); return;
    ctx.pc = 0x02C59720u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B37A50:
    rt.unsupported(0x08B37A50u, 0x000000CEu, "special? not lowered yet"); return;
L_08B37A70:
    (void)(ctx.lo);
    ctx.pc = 0x02C59740u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B37A74:
    (void)(ctx.lo);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37A7C;
L_08B37A7C:
    rt.unsupported(0x08B37A80u, 0x08B165DCu, "control flow in delay slot"); return;
L_08B37A8C:
    ctx.lo = 0u;
    rt.unsupported(0x08B37A90u, 0x0000001Cu, "special? not lowered yet"); return;
L_08B37AA4:
    (void)(static_cast<std::uint32_t>(std::countl_zero(0u)));
    rt.unsupported(0x08B37AA8u, 0x0000001Cu, "special? not lowered yet"); return;
L_08B37AAC:
    rt.unsupported(0x08B37AB0u, 0x08B16600u, "control flow in delay slot"); return;
L_08B37AB4:
    rt.unsupported(0x08B37AB8u, 0x08B1661Cu, "control flow in delay slot"); return;
L_08B37ABC:
    rt.unsupported(0x08B37AC0u, 0x08B16638u, "control flow in delay slot"); return;
L_08B37AC4:
    (void)(static_cast<std::uint32_t>(std::countl_one(0u)));
    ctx.pc = 0x02C59920u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B37AC8:
    (void)(static_cast<std::uint32_t>(std::countl_one(0u)));
    goto L_08B37ACC;
L_08B37ACC:
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37AD4;
L_08B37AD4:
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::uint64_t product = static_cast<std::uint64_t>(0u) * static_cast<std::uint64_t>(0u); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(product >> 32u); }
    goto L_08B37ADC;
L_08B37ADC:
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    goto L_08B37AE4;
L_08B37AE4:
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    { const std::uint32_t dividend = 0u; ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; }
    goto L_08B37AEC;
L_08B37AEC:
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    rt.unsupported(0x08B37AF0u, 0x000000DCu, "special? not lowered yet"); return;
L_08B37AF4:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    rt.unsupported(0x08B37AF8u, 0x000000DDu, "special? not lowered yet"); return;
L_08B37AFC:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37B00;
L_08B37B00:
    rt.unsupported(0x08B37B04u, 0x08B1665Cu, "control flow in delay slot"); return;
L_08B37B04:
    rt.unsupported(0x08B37B08u, 0x08B16664u, "control flow in delay slot"); return;
L_08B37B0C:
    rt.unsupported(0x08B37B10u, 0x08B16674u, "control flow in delay slot"); return;
L_08B37B14:
    rt.unsupported(0x08B37B18u, 0x08B16684u, "control flow in delay slot"); return;
L_08B37B1C:
    rt.unsupported(0x08B37B1Cu, 0x000000DEu, "special? not lowered yet"); return;
L_08B37B24:
    rt.unsupported(0x08B37B24u, 0x000000DFu, "special? not lowered yet"); return;
L_08B37B2C:
    { const bool signed_ok = ctx.execute_signed_add(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B37B2Cu, 0x000000E0u); return; } }
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    goto L_08B37B34;
L_08B37B34:
    (void)(0u + 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    goto L_08B37B3C;
L_08B37B3C:
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B37B3Cu, 0x000000E2u); return; } }
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    (void)(0u - 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(0u); ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); }
    (void)(0u & 0u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(0u)) * static_cast<std::int64_t>(static_cast<std::int32_t>(0u)); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    goto L_08B37B54;
L_08B37B54:
    rt.unsupported(0x08B37B58u, 0x08B16698u, "control flow in delay slot"); return;
L_08B37B68:
    rt.unsupported(0x08B37B6Cu, 0x08B166C8u, "control flow in delay slot"); return;
L_08B37B7C:
    rt.unsupported(0x08B37B80u, 0x08B16704u, "control flow in delay slot"); return;
L_08B37B90:
    rt.unsupported(0x08B37B94u, 0x08B1671Cu, "control flow in delay slot"); return;
L_08B37BA4:
    rt.unsupported(0x08B37BA8u, 0x08B1675Cu, "control flow in delay slot"); return;
L_08B37BB8:
    rt.unsupported(0x08B37BBCu, 0x08B1679Cu, "control flow in delay slot"); return;
L_08B37BCC:
    rt.unsupported(0x08B37BD0u, 0x08B167C8u, "control flow in delay slot"); return;
L_08B37BE0:
    rt.unsupported(0x08B37BE4u, 0x08B167F0u, "control flow in delay slot"); return;
L_08B37BF4:
    rt.unsupported(0x08B37BF8u, 0x08B16818u, "control flow in delay slot"); return;
L_08B37C08:
    rt.unsupported(0x08B37C0Cu, 0x08B1684Cu, "control flow in delay slot"); return;
L_08B37C1C:
    rt.unsupported(0x08B37C20u, 0x08B16884u, "control flow in delay slot"); return;
L_08B37C30:
    rt.unsupported(0x08B37C34u, 0x08B168BCu, "control flow in delay slot"); return;
L_08B37C44:
    rt.unsupported(0x08B37C48u, 0x08B168ECu, "control flow in delay slot"); return;
L_08B37C4C:
    rt.unsupported(0x08B37C50u, 0x08B16904u, "control flow in delay slot"); return;
L_08B37C6C:
    rt.unsupported(0x08B37C70u, 0x08B16974u, "control flow in delay slot"); return;
L_08B37C70:
    rt.unsupported(0x08B37C74u, 0x08B16980u, "control flow in delay slot"); return;
L_08B37C74:
    rt.unsupported(0x08B37C78u, 0x08B16994u, "control flow in delay slot"); return;
L_08B37C7C:
    rt.unsupported(0x08B37C80u, 0x08B169B0u, "control flow in delay slot"); return;
L_08B37C80:
    rt.unsupported(0x08B37C84u, 0x08B169C0u, "control flow in delay slot"); return;
L_08B37C88:
    rt.unsupported(0x08B37C8Cu, 0x08B169D8u, "control flow in delay slot"); return;
L_08B37C90:
    rt.unsupported(0x08B37C94u, 0x08B169F4u, "control flow in delay slot"); return;
L_08B37C94:
    rt.unsupported(0x08B37C98u, 0x08B16A08u, "control flow in delay slot"); return;
L_08B37CA4:
    rt.unsupported(0x08B37CA8u, 0x08B16A44u, "control flow in delay slot"); return;
L_08B37CB0:
    rt.unsupported(0x08B37CB4u, 0x08B16A78u, "control flow in delay slot"); return;
L_08B37CB4:
    rt.unsupported(0x08B37CB8u, 0x08B16A8Cu, "control flow in delay slot"); return;
L_08B37CBC:
    rt.unsupported(0x08B37CC0u, 0x08B16AB4u, "control flow in delay slot"); return;
L_08B37CC8:
    rt.unsupported(0x08B37CCCu, 0x08B16AE8u, "control flow in delay slot"); return;
L_08B37CD0:
    rt.unsupported(0x08B37CD4u, 0x08B16B0Cu, "control flow in delay slot"); return;
L_08B37CD8:
    rt.unsupported(0x08B37CDCu, 0x08B16B30u, "control flow in delay slot"); return;
L_08B37CDC:
    rt.unsupported(0x08B37CE0u, 0x08B16B44u, "control flow in delay slot"); return;
L_08B37CE0:
    rt.unsupported(0x08B37CE4u, 0x08B16B50u, "control flow in delay slot"); return;
L_08B37CE8:
    rt.unsupported(0x08B37CECu, 0x08B16B74u, "control flow in delay slot"); return;
L_08B37CF4:
    rt.unsupported(0x08B37CF8u, 0x08B16BA4u, "control flow in delay slot"); return;
L_08B37CF8:
    rt.unsupported(0x08B37CFCu, 0x08B16BB0u, "control flow in delay slot"); return;
L_08B37D04:
    rt.unsupported(0x08B37D08u, 0x08B16BD4u, "control flow in delay slot"); return;
L_08B37D08:
    // nop
    ctx.pc = 0x02C5AF50u; (void)rt.invoke_chained_call(ctx, &aot_mem); return;
L_08B37D0C:
    // nop
    { const bool signed_ok = ctx.execute_signed_sub(0u, 0u, 0u);
      if (!signed_ok) { rt.arithmetic_overflow(0x08B37D10u, 0x000001E2u); return; } }
    rt.unsupported(0x08B37D14u, 0x00000001u, "special? not lowered yet"); return;
L_08B37D34:
    rt.unsupported(0x08B37D38u, 0x08B16BF8u, "control flow in delay slot"); return;
L_08B37D44:
    rt.unsupported(0x08B37D48u, 0x08B155C4u, "control flow in delay slot"); return;
L_08B37D54:
    rt.unsupported(0x08B37D58u, 0x08B16C28u, "control flow in delay slot"); return;
L_08B37D64:
    rt.unsupported(0x08B37D68u, 0x08B16C28u, "control flow in delay slot"); return;
L_08B37D74:
    rt.unsupported(0x08B37D78u, 0x08B155C4u, "control flow in delay slot"); return;
L_08B37D84:
    rt.unsupported(0x08B37D88u, 0x08B16C68u, "control flow in delay slot"); return;
L_08B37D94:
    rt.unsupported(0x08B37D98u, 0x08B155C4u, "control flow in delay slot"); return;
L_08B37D9C:
    rt.unsupported(0x08B37DA0u, 0x08B155E0u, "control flow in delay slot"); return;
L_08B37DA4:
    rt.unsupported(0x08B37DA8u, 0x08B16C90u, "control flow in delay slot"); return;
L_08B37DB4:
    rt.unsupported(0x08B37DB8u, 0x08B16C90u, "control flow in delay slot"); return;
L_08B37DC4:
    rt.unsupported(0x08B37DC8u, 0x08B16C90u, "control flow in delay slot"); return;
L_08B37DD4:
    rt.unsupported(0x08B37DD8u, 0x08B16C90u, "control flow in delay slot"); return;
L_08B37DE4:
    rt.unsupported(0x08B37DE8u, 0x08B16C90u, "control flow in delay slot"); return;
L_08B37DF4:
    rt.unsupported(0x08B37DF8u, 0x08B16C90u, "control flow in delay slot"); return;
L_08B37E04:
    rt.unsupported(0x08B37E08u, 0x08B16C90u, "control flow in delay slot"); return;
L_08B37E14:
    rt.unsupported(0x08B37E18u, 0x08B16C4Cu, "control flow in delay slot"); return;
L_08B37E24:
    rt.unsupported(0x08B37E28u, 0x08B16D08u, "control flow in delay slot"); return;
L_08B37E34:
    rt.unsupported(0x08B37E38u, 0x08B16D28u, "control flow in delay slot"); return;
}

void recomp_unit_0204(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0204_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_204(Runtime &runtime) {
    runtime.register_generated_unit(204u, 0x08B34000u, 16384u, &recomp_unit_0204, &recomp_unit_0204_entry);
    runtime.register_function(0x08B3407Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34088u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34090u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34108u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34178u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B341D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B341E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B341F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34218u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34220u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34234u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34268u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34278u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B343F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3442Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34504u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3450Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34514u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3451Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34524u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3452Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34534u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3453Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34544u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3454Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34554u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3455Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34564u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3456Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34574u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3457Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34584u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3458Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34594u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3459Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B345FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34604u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3460Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34614u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3461Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34624u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3462Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34634u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3463Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34644u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34668u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34758u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34888u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B348FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B349CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34C98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34CF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34D98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34DF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34E98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34ED0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34ED8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EF0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34EF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F10u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F18u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F28u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F38u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F40u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34F48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34FD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B34FF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35050u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B350B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B350FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35108u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35110u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3511Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35128u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35134u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35180u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3518Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35190u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351D8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B351FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35208u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35214u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35220u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3522Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35238u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35244u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35250u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3525Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3526Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35324u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35374u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3537Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35384u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3538Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35394u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3539Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B353FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35404u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3540Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35414u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3541Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35424u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3542Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35434u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3543Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35444u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3544Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35454u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3545Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35464u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B354A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B354DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3552Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35678u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3568Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B356DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35728u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3572Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35750u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B357F8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35838u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B358BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35914u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35974u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35B9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35BF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35C50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35D9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35DBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E48u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E60u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E78u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35E98u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EC0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35EECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35F20u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FCCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B35FF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3601Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36040u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36044u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3604Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3606Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36094u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3609Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B360E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3610Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36114u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36134u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3615Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36164u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36170u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36178u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36180u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36184u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3618Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B361FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36204u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36224u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36230u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3624Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36258u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36274u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3627Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3629Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B362F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36314u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3631Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3633Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36344u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36364u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3636Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3638Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B363F0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36404u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3640Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36420u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36428u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3642Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36430u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36434u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36438u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36454u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3645Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3647Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36484u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B364FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3651Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36524u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36544u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3654Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3656Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36574u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36594u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3659Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B365ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36608u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3660Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36618u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36634u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36640u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3665Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3666Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36684u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366ACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B366FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36724u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36734u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3674Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36758u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36774u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3679Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B367ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36814u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36820u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3683Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36844u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36864u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36870u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3688Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B368B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B368C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B368DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36904u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3690Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3692Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36934u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36954u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3695Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3697Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36984u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369DCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B369FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36A9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36ABCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36ACCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36ADCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36AFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B5Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36B9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BCCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BDCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36BFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36C9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CA8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36CF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36E58u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36F9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B36FA0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370C8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B370D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37274u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B372E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B374E4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B374F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37534u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3753Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37544u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37554u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3755Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3756Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3757Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37584u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375A4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375BCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375D4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B375FCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3760Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37614u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3761Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3762Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37644u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3764Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37664u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3766Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37674u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37688u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376B0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B376D0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37710u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37758u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B377A0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B377E8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B377F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37830u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B378C0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B378CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B378E0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B378F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37908u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3791Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37928u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37938u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3794Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37954u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37960u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37970u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37980u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37990u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B3799Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379A8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379B4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379B8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379C4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379CCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379ECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B379F4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A50u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37A8Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AACu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37ABCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37ACCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37ADCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AECu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37AFCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B00u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B2Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B3Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B68u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37B90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37BA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37BB8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37BCCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37BE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37BF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C1Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C30u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C4Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C6Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C70u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C7Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C80u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C88u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C90u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37C94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CB0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CBCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CC8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CD0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CD8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CDCu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CE0u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CE8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37CF8u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D08u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D0Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D34u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D44u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D54u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D64u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D74u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D84u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D94u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37D9Cu, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DA4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DB4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DC4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DD4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DE4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37DF4u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E04u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E14u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E24u, &recomp_unit_0204, "recomp_unit_0204");
    runtime.register_function(0x08B37E34u, &recomp_unit_0204, "recomp_unit_0204");
}
} // namespace psprecomp
