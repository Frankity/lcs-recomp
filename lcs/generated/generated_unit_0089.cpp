#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0089[4096] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 9,
    0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0,
    17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 21, 0, 0, 22, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 23, 0, 0, 24, 0, 0, 25, 0, 0, 26, 0, 0, 0, 27, 0, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0,
    0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36,
    0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0, 0,
    43, 0, 0, 44, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 51, 0, 0, 0,
    52, 0, 0, 0, 0, 0, 53, 54, 0, 0, 55, 0, 56, 0, 0, 0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0,
    61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0,
    68, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0,
    0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 83,
    0, 84, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 90, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 0, 0,
    99, 0, 0, 0, 100, 0, 0, 0, 0, 101, 102, 0, 0, 0, 0, 103, 0, 104, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 108, 0, 0, 0, 109,
    0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 123, 0, 0, 124, 0, 125,
    0, 126, 0, 127, 0, 128, 0, 0, 129, 0, 130, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    134, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0, 0, 0,
    0, 137, 138, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 141, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147,
    0, 0, 0, 0, 148, 0, 149, 0, 150, 151, 0, 152, 0, 153, 0, 154, 0, 155, 0, 0, 156, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 159,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 0, 0,
    0, 164, 0, 0, 165, 0, 0, 0, 0, 166, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169,
    0, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 176,
    0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 184,
    0, 0, 185, 0, 0, 186, 0, 0, 187, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    194, 0, 0, 0, 195, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 0, 204, 0,
    205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 207,
    0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 215, 0, 0, 216, 0, 0, 0, 0, 217,
    0, 0, 218, 0, 0, 0, 219, 0, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 226, 0, 0, 227,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0,
    0, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 0, 234, 0, 235, 0, 0, 236, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0,
    0, 240, 0, 0, 241, 0, 242, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 246, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 256, 0, 257, 0, 258,
    0, 0, 0, 0, 0, 0, 0, 259, 260, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 0, 0, 271, 0,
    272, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0, 280, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 284, 0,
    0, 0, 0, 0, 0, 0, 285, 286, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 288, 289, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 295, 296, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0,
    0, 0, 0, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 307, 0, 0, 308, 0, 0, 0, 309, 0, 0, 0, 0, 0,
    310, 0, 311, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316, 0,
    0, 0, 0, 317, 0, 0, 0, 318, 0, 319, 0, 320, 321, 0, 322, 0, 323, 324, 0, 0, 325, 0, 0, 326, 0, 0, 0, 0, 327, 0, 0, 0,
    328, 0, 0, 329, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0,
    0, 0, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0,
    0, 0, 0, 0, 341, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0,
    347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0, 0,
    350, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 358,
    0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 364, 0, 365, 0,
    366, 367, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0,
    0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 379, 0, 0, 0, 380, 381,
    0, 382, 0, 0, 0, 0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390, 391, 0, 392, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 395, 396, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0,
    0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 407, 0,
    0, 0, 408, 0, 0, 0, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 418, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 422,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 424, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0,
    429, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    433, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 440,
    0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0,
    456, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 462, 0,
    0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 466, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 0, 0, 473, 0, 474, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 481, 0, 482, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 487, 0, 0, 488, 0, 489,
    490, 0, 0, 491, 0, 0, 0, 492, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 497, 498, 0, 0, 499, 0, 0, 0, 500, 0, 501,
    0, 0, 0, 502, 0, 0, 503, 0, 0, 504, 0, 505, 506, 0, 0, 507, 0, 0, 0, 508, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 0, 512,
    0, 513, 514, 0, 0, 515, 0, 0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 522, 0, 0, 523, 0, 0, 0, 524,
    0, 525, 0, 0, 0, 526, 0, 0, 527, 0, 0, 528, 0, 529, 530, 0, 0, 531, 0, 0, 0, 532, 0, 533, 0, 0, 0, 534, 0, 0, 535, 0,
    0, 536, 0, 537, 538, 0, 0, 539, 0, 0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 0, 543, 0, 0, 544, 0, 545, 546, 0, 0, 547, 0, 0,
    0, 548, 0, 549, 0, 0, 0, 550, 0, 0, 551, 0, 0, 552, 0, 553, 554, 0, 0, 555, 0, 0, 0, 556, 0, 557, 0, 0, 0, 558, 0, 0,
    559, 0, 0, 560, 0, 561, 562, 0, 0, 563, 0, 0, 0, 564, 0, 565, 0, 0, 0, 566, 0, 0, 567, 0, 0, 568, 0, 569, 570, 0, 0, 571,
    0, 0, 0, 572, 0, 573, 0, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 577, 578, 0, 0, 579, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582,
    0, 0, 583, 0, 0, 584, 0, 585, 586, 0, 0, 587, 0, 0, 0, 588, 0, 589, 0, 0, 0, 590, 0, 0, 591, 0, 0, 592, 0, 593, 594, 0,
    0, 595, 0, 0, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 0, 600, 0, 601, 602, 0, 0, 603, 0, 0, 0, 604, 0, 605, 0, 0,
    0, 606, 0, 0, 607, 0, 0, 608, 0, 609, 610, 0, 0, 611, 0, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 617,
    618, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 0, 0, 622, 0, 0, 623, 0, 0, 624, 0, 625, 626, 0, 0, 627, 0, 0, 0, 628, 0, 629,
    0, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 633, 634, 0, 0, 635, 0, 0, 0, 636, 0, 637, 0, 0, 0, 638, 0, 0, 639, 0, 0, 640,
    0, 641, 642, 0, 0, 643, 0, 0, 0, 644, 0, 645, 0, 0, 0, 646, 0, 0, 647, 0, 0, 648, 0, 649, 650, 0, 0, 651, 0, 0, 0, 652,
    0, 653, 0, 0, 0, 654, 0, 0, 655, 0, 0, 656, 0, 657, 658, 0, 0, 659, 0, 0, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0,
    0, 664, 0, 665, 666, 0, 0, 667, 0, 0, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 671, 0, 0, 672, 0, 673, 674, 0, 0, 675, 0, 0,
    0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 682, 0, 0, 683, 0, 0, 0, 684, 0, 685, 0, 0, 0, 686, 0, 0,
    687, 0, 0, 688, 0, 689, 690, 0, 0, 691, 0, 0, 0, 692, 0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 0, 696, 0, 697, 698, 0, 0, 699,
    0, 0, 0, 700, 0, 701, 0, 0, 0, 702, 0, 0, 703, 0, 0, 704, 0, 705, 706, 0, 0, 707, 0, 0, 0, 708, 0, 709, 0, 0, 0, 710,
    0, 0, 711, 0, 0, 712, 0, 713, 714, 0, 0, 715, 0, 0, 0, 716, 0, 717, 0, 0, 0, 718, 0, 0, 719, 0, 0, 720, 0, 721, 722, 0,
    0, 723, 0, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 0, 727, 0, 0, 728, 0, 729, 730, 0, 0, 731, 0, 0, 0, 732, 0, 733, 0, 0,
    0, 734, 0, 0, 735, 0, 0, 736, 0, 737, 738, 0, 0, 739, 0, 0, 0, 740, 0, 741, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 745,
    746, 0, 0, 747, 0, 0, 0, 748, 0, 749, 0, 0, 0, 750, 0, 0, 751, 0, 0, 752, 0, 753, 754, 0, 0, 755, 0, 0, 0, 756, 0, 757,
    0, 0, 0, 758, 0, 0, 759, 0, 0, 760, 0, 761, 762, 0, 0, 763, 0, 0, 0, 764, 0, 0, 0, 765, 0, 0, 766, 0, 0, 0, 767, 0,
    0, 768, 0, 0, 769, 0, 770, 771, 0, 0, 772, 0, 0, 0, 773, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 776, 0, 0, 777, 0, 0, 778,
    0, 779, 780, 0, 0, 781, 0, 0, 0, 782, 0, 0, 0, 0, 0, 0, 0, 783, 0, 0, 0, 784, 0, 0, 0, 785, 0, 0, 786, 0, 0, 787,
    0, 788, 789, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 0, 797,
    0, 798, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 804, 0, 0, 805, 0, 0, 806, 0, 807, 808, 0, 0,
    809, 0, 0, 0, 810, 0, 811, 0, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 815, 816, 0, 0, 817, 0, 0, 0, 818, 0, 819, 0, 0, 0,
    820, 0, 0, 821, 0, 0, 822, 0, 823, 824, 0, 0, 825, 0, 0, 0, 826, 0, 827, 0, 0, 0, 828, 0, 0, 829, 0, 0, 830, 0, 831, 832,
    0, 0, 833, 0, 0, 0, 834, 0, 835, 0, 0, 0, 836, 0, 0, 837, 0, 0, 838, 0, 839, 840, 0, 0, 841, 0, 0, 0, 842, 0, 843, 0,
    0, 0, 844, 0, 0, 845, 0, 0, 846, 0, 847, 848, 0, 0, 849, 0, 0, 0, 850, 0, 851, 0, 0, 0, 852, 0, 0, 853, 0, 0, 854, 0,
    855, 856, 0, 0, 857, 0, 0, 0, 858, 0, 859, 0, 0, 0, 860, 0, 0, 861, 0, 0, 862, 0, 863, 864, 0, 0, 865, 0, 0, 0, 866, 0,
    867, 0, 0, 0, 868, 0, 0, 869, 0, 0, 870, 0, 871, 872, 0, 0, 873, 0, 0, 0, 874, 0, 875, 0, 0, 0, 876, 0, 0, 877, 0, 0,
    878, 0, 879, 880, 0, 0, 881, 0, 0, 0, 882, 0, 883, 0, 0, 0, 884, 0, 0, 885, 0, 0, 886, 0, 887, 888, 0, 0, 889, 0, 0, 0,
    890, 0, 891, 0, 0, 0, 892, 0, 0, 893, 0, 0, 894, 0, 895, 896, 0, 0, 897, 0, 0, 0, 898, 0, 899, 0, 0, 0, 900, 0, 0, 901,
};
void recomp_unit_0089_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08968000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0089[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08968000;
    case 2u: goto L_08968008;
    case 3u: goto L_08968014;
    case 4u: goto L_089680B4;
    case 5u: goto L_089680BC;
    case 6u: goto L_089680C0;
    case 7u: goto L_089680CC;
    case 8u: goto L_089680EC;
    case 9u: goto L_089680FC;
    case 10u: goto L_08968104;
    case 11u: goto L_0896810C;
    case 12u: goto L_08968130;
    case 13u: goto L_08968140;
    case 14u: goto L_0896815C;
    case 15u: goto L_08968164;
    case 16u: goto L_0896816C;
    case 17u: goto L_08968180;
    case 18u: goto L_08968188;
    case 19u: goto L_089681CC;
    case 20u: goto L_089681D4;
    case 21u: goto L_089681D8;
    case 22u: goto L_089681E4;
    case 23u: goto L_08968210;
    case 24u: goto L_0896821C;
    case 25u: goto L_08968228;
    case 26u: goto L_08968234;
    case 27u: goto L_08968244;
    case 28u: goto L_08968254;
    case 29u: goto L_08968270;
    case 30u: goto L_08968284;
    case 31u: goto L_08968294;
    case 32u: goto L_0896829C;
    case 33u: goto L_089682A8;
    case 34u: goto L_089682D0;
    case 35u: goto L_089682E0;
    case 36u: goto L_089682FC;
    case 37u: goto L_08968308;
    case 38u: goto L_08968328;
    case 39u: goto L_0896833C;
    case 40u: goto L_0896834C;
    case 41u: goto L_0896835C;
    case 42u: goto L_08968364;
    case 43u: goto L_08968380;
    case 44u: goto L_0896838C;
    case 45u: goto L_0896839C;
    case 46u: goto L_089683AC;
    case 47u: goto L_089683CC;
    case 48u: goto L_089683D4;
    case 49u: goto L_089683DC;
    case 50u: goto L_089683E4;
    case 51u: goto L_089683F0;
    case 52u: goto L_08968400;
    case 53u: goto L_08968418;
    case 54u: goto L_0896841C;
    case 55u: goto L_08968428;
    case 56u: goto L_08968430;
    case 57u: goto L_0896844C;
    case 58u: goto L_08968458;
    case 59u: goto L_08968468;
    case 60u: goto L_08968478;
    case 61u: goto L_08968480;
    case 62u: goto L_0896849C;
    case 63u: goto L_089684A8;
    case 64u: goto L_089684E0;
    case 65u: goto L_089684E8;
    case 66u: goto L_089684F0;
    case 67u: goto L_089684F8;
    case 68u: goto L_08968500;
    case 69u: goto L_08968508;
    case 70u: goto L_08968518;
    case 71u: goto L_08968524;
    case 72u: goto L_08968544;
    case 73u: goto L_0896854C;
    case 74u: goto L_0896855C;
    case 75u: goto L_08968568;
    case 76u: goto L_08968588;
    case 77u: goto L_08968590;
    case 78u: goto L_089685A0;
    case 79u: goto L_089685AC;
    case 80u: goto L_089685CC;
    case 81u: goto L_089685DC;
    case 82u: goto L_089685EC;
    case 83u: goto L_089685FC;
    case 84u: goto L_08968604;
    case 85u: goto L_08968620;
    case 86u: goto L_0896862C;
    case 87u: goto L_08968640;
    case 88u: goto L_08968650;
    case 89u: goto L_0896866C;
    case 90u: goto L_08968678;
    case 91u: goto L_089686F4;
    case 92u: goto L_089687B4;
    case 93u: goto L_089687FC;
    case 94u: goto L_08968828;
    case 95u: goto L_08968850;
    case 96u: goto L_089688C0;
    case 97u: goto L_089688DC;
    case 98u: goto L_089688EC;
    case 99u: goto L_08968900;
    case 100u: goto L_08968910;
    case 101u: goto L_08968924;
    case 102u: goto L_08968928;
    case 103u: goto L_0896893C;
    case 104u: goto L_08968944;
    case 105u: goto L_0896895C;
    case 106u: goto L_08968984;
    case 107u: goto L_089689E0;
    case 108u: goto L_089689EC;
    case 109u: goto L_089689FC;
    case 110u: goto L_08968A08;
    case 111u: goto L_08968A14;
    case 112u: goto L_08968A28;
    case 113u: goto L_08968A40;
    case 114u: goto L_08968A50;
    case 115u: goto L_08968A80;
    case 116u: goto L_08968ADC;
    case 117u: goto L_08968AF8;
    case 118u: goto L_08968B08;
    case 119u: goto L_08968B24;
    case 120u: goto L_08968B40;
    case 121u: goto L_08968B50;
    case 122u: goto L_08968BAC;
    case 123u: goto L_08968BE8;
    case 124u: goto L_08968BF4;
    case 125u: goto L_08968BFC;
    case 126u: goto L_08968C04;
    case 127u: goto L_08968C0C;
    case 128u: goto L_08968C14;
    case 129u: goto L_08968C20;
    case 130u: goto L_08968C28;
    case 131u: goto L_08968C34;
    case 132u: goto L_08968C44;
    case 133u: goto L_08968C54;
    case 134u: goto L_08968C80;
    case 135u: goto L_08968CE4;
    case 136u: goto L_08968CF0;
    case 137u: goto L_08968D04;
    case 138u: goto L_08968D08;
    case 139u: goto L_08968D14;
    case 140u: goto L_08968D24;
    case 141u: goto L_08968D34;
    case 142u: goto L_08968D48;
    case 143u: goto L_08968D90;
    case 144u: goto L_08968D9C;
    case 145u: goto L_08968DAC;
    case 146u: goto L_08968DF0;
    case 147u: goto L_08968DFC;
    case 148u: goto L_08968E10;
    case 149u: goto L_08968E18;
    case 150u: goto L_08968E20;
    case 151u: goto L_08968E24;
    case 152u: goto L_08968E2C;
    case 153u: goto L_08968E34;
    case 154u: goto L_08968E3C;
    case 155u: goto L_08968E44;
    case 156u: goto L_08968E50;
    case 157u: goto L_08968E5C;
    case 158u: goto L_08968E70;
    case 159u: goto L_08968E7C;
    case 160u: goto L_08968E88;
    case 161u: goto L_08968EE0;
    case 162u: goto L_08968EE8;
    case 163u: goto L_08968EF0;
    case 164u: goto L_08968F04;
    case 165u: goto L_08968F10;
    case 166u: goto L_08968F24;
    case 167u: goto L_08968F30;
    case 168u: goto L_08968F68;
    case 169u: goto L_08968F7C;
    case 170u: goto L_08968F8C;
    case 171u: goto L_08968FA4;
    case 172u: goto L_08968FB8;
    case 173u: goto L_08968FC0;
    case 174u: goto L_08968FD0;
    case 175u: goto L_08968FE8;
    case 176u: goto L_08968FFC;
    case 177u: goto L_08969008;
    case 178u: goto L_0896901C;
    case 179u: goto L_08969054;
    case 180u: goto L_089690CC;
    case 181u: goto L_089690D8;
    case 182u: goto L_089690E4;
    case 183u: goto L_089690F0;
    case 184u: goto L_089690FC;
    case 185u: goto L_08969108;
    case 186u: goto L_08969114;
    case 187u: goto L_08969120;
    case 188u: goto L_0896912C;
    case 189u: goto L_0896919C;
    case 190u: goto L_089691B8;
    case 191u: goto L_089691DC;
    case 192u: goto L_08969248;
    case 193u: goto L_08969274;
    case 194u: goto L_08969280;
    case 195u: goto L_08969290;
    case 196u: goto L_089692A4;
    case 197u: goto L_089692E4;
    case 198u: goto L_08969338;
    case 199u: goto L_08969340;
    case 200u: goto L_08969348;
    case 201u: goto L_08969350;
    case 202u: goto L_08969358;
    case 203u: goto L_08969360;
    case 204u: goto L_08969378;
    case 205u: goto L_08969380;
    case 206u: goto L_089693F0;
    case 207u: goto L_089693FC;
    case 208u: goto L_08969408;
    case 209u: goto L_08969414;
    case 210u: goto L_08969420;
    case 211u: goto L_0896942C;
    case 212u: goto L_08969438;
    case 213u: goto L_08969444;
    case 214u: goto L_08969450;
    case 215u: goto L_0896945C;
    case 216u: goto L_08969468;
    case 217u: goto L_0896947C;
    case 218u: goto L_08969488;
    case 219u: goto L_08969498;
    case 220u: goto L_089694A4;
    case 221u: goto L_089694B0;
    case 222u: goto L_089694BC;
    case 223u: goto L_089694CC;
    case 224u: goto L_089694D8;
    case 225u: goto L_089694E4;
    case 226u: goto L_089694F0;
    case 227u: goto L_089694FC;
    case 228u: goto L_08969548;
    case 229u: goto L_08969574;
    case 230u: goto L_08969588;
    case 231u: goto L_08969594;
    case 232u: goto L_0896959C;
    case 233u: goto L_089695A4;
    case 234u: goto L_089695B0;
    case 235u: goto L_089695B8;
    case 236u: goto L_089695C4;
    case 237u: goto L_089695CC;
    case 238u: goto L_089695D4;
    case 239u: goto L_089695F4;
    case 240u: goto L_08969604;
    case 241u: goto L_08969610;
    case 242u: goto L_08969618;
    case 243u: goto L_08969624;
    case 244u: goto L_08969640;
    case 245u: goto L_0896964C;
    case 246u: goto L_08969650;
    case 247u: goto L_08969664;
    case 248u: goto L_089696A0;
    case 249u: goto L_089696AC;
    case 250u: goto L_089696B4;
    case 251u: goto L_089696E4;
    case 252u: goto L_08969708;
    case 253u: goto L_08969714;
    case 254u: goto L_08969734;
    case 255u: goto L_08969750;
    case 256u: goto L_0896976C;
    case 257u: goto L_08969774;
    case 258u: goto L_0896977C;
    case 259u: goto L_0896979C;
    case 260u: goto L_089697A0;
    case 261u: goto L_089697A4;
    case 262u: goto L_089697C0;
    case 263u: goto L_089697E8;
    case 264u: goto L_08969834;
    case 265u: goto L_08969850;
    case 266u: goto L_08969880;
    case 267u: goto L_08969888;
    case 268u: goto L_08969890;
    case 269u: goto L_089698D0;
    case 270u: goto L_089698EC;
    case 271u: goto L_089698F8;
    case 272u: goto L_08969900;
    case 273u: goto L_0896990C;
    case 274u: goto L_0896991C;
    case 275u: goto L_08969968;
    case 276u: goto L_08969980;
    case 277u: goto L_0896999C;
    case 278u: goto L_089699A4;
    case 279u: goto L_089699AC;
    case 280u: goto L_089699B4;
    case 281u: goto L_089699C0;
    case 282u: goto L_089699D0;
    case 283u: goto L_089699E0;
    case 284u: goto L_089699F8;
    case 285u: goto L_08969A18;
    case 286u: goto L_08969A1C;
    case 287u: goto L_08969A24;
    case 288u: goto L_08969A64;
    case 289u: goto L_08969A68;
    case 290u: goto L_08969A94;
    case 291u: goto L_08969AD4;
    case 292u: goto L_08969B08;
    case 293u: goto L_08969B14;
    case 294u: goto L_08969B3C;
    case 295u: goto L_08969B44;
    case 296u: goto L_08969B48;
    case 297u: goto L_08969B50;
    case 298u: goto L_08969BA4;
    case 299u: goto L_08969BAC;
    case 300u: goto L_08969BB4;
    case 301u: goto L_08969BC0;
    case 302u: goto L_08969BD0;
    case 303u: goto L_08969BE0;
    case 304u: goto L_08969BF0;
    case 305u: goto L_08969C10;
    case 306u: goto L_08969C40;
    case 307u: goto L_08969C4C;
    case 308u: goto L_08969C58;
    case 309u: goto L_08969C68;
    case 310u: goto L_08969C80;
    case 311u: goto L_08969C88;
    case 312u: goto L_08969C90;
    case 313u: goto L_08969C98;
    case 314u: goto L_08969CA0;
    case 315u: goto L_08969CDC;
    case 316u: goto L_08969CF8;
    case 317u: goto L_08969D0C;
    case 318u: goto L_08969D1C;
    case 319u: goto L_08969D24;
    case 320u: goto L_08969D2C;
    case 321u: goto L_08969D30;
    case 322u: goto L_08969D38;
    case 323u: goto L_08969D40;
    case 324u: goto L_08969D44;
    case 325u: goto L_08969D50;
    case 326u: goto L_08969D5C;
    case 327u: goto L_08969D70;
    case 328u: goto L_08969D80;
    case 329u: goto L_08969D8C;
    case 330u: goto L_08969D9C;
    case 331u: goto L_08969DE0;
    case 332u: goto L_08969DEC;
    case 333u: goto L_08969DF8;
    case 334u: goto L_08969E14;
    case 335u: goto L_08969E20;
    case 336u: goto L_08969E2C;
    case 337u: goto L_08969E38;
    case 338u: goto L_08969E40;
    case 339u: goto L_08969E64;
    case 340u: goto L_08969E78;
    case 341u: goto L_08969E90;
    case 342u: goto L_08969EA4;
    case 343u: goto L_08969EC8;
    case 344u: goto L_08969ECC;
    case 345u: goto L_08969EE0;
    case 346u: goto L_08969EE8;
    case 347u: goto L_08969F00;
    case 348u: goto L_08969F6C;
    case 349u: goto L_08969F74;
    case 350u: goto L_08969F80;
    case 351u: goto L_08969F90;
    case 352u: goto L_08969FC0;
    case 353u: goto L_08969FC8;
    case 354u: goto L_08969FEC;
    case 355u: goto L_0896A01C;
    case 356u: goto L_0896A068;
    case 357u: goto L_0896A074;
    case 358u: goto L_0896A07C;
    case 359u: goto L_0896A084;
    case 360u: goto L_0896A0A8;
    case 361u: goto L_0896A0B0;
    case 362u: goto L_0896A0D8;
    case 363u: goto L_0896A0E4;
    case 364u: goto L_0896A0F0;
    case 365u: goto L_0896A0F8;
    case 366u: goto L_0896A100;
    case 367u: goto L_0896A104;
    case 368u: goto L_0896A10C;
    case 369u: goto L_0896A134;
    case 370u: goto L_0896A13C;
    case 371u: goto L_0896A16C;
    case 372u: goto L_0896A178;
    case 373u: goto L_0896A198;
    case 374u: goto L_0896A1A0;
    case 375u: goto L_0896A1A8;
    case 376u: goto L_0896A1BC;
    case 377u: goto L_0896A1C8;
    case 378u: goto L_0896A1D8;
    case 379u: goto L_0896A1E8;
    case 380u: goto L_0896A1F8;
    case 381u: goto L_0896A1FC;
    case 382u: goto L_0896A204;
    case 383u: goto L_0896A218;
    case 384u: goto L_0896A220;
    case 385u: goto L_0896A248;
    case 386u: goto L_0896A268;
    case 387u: goto L_0896A298;
    case 388u: goto L_0896A2A4;
    case 389u: goto L_0896A2B8;
    case 390u: goto L_0896A2E4;
    case 391u: goto L_0896A2E8;
    case 392u: goto L_0896A2F0;
    case 393u: goto L_0896A31C;
    case 394u: goto L_0896A348;
    case 395u: goto L_0896A36C;
    case 396u: goto L_0896A370;
    case 397u: goto L_0896A398;
    case 398u: goto L_0896A3BC;
    case 399u: goto L_0896A3CC;
    case 400u: goto L_0896A400;
    case 401u: goto L_0896A430;
    case 402u: goto L_0896A450;
    case 403u: goto L_0896A478;
    case 404u: goto L_0896A49C;
    case 405u: goto L_0896A4E4;
    case 406u: goto L_0896A4EC;
    case 407u: goto L_0896A4F8;
    case 408u: goto L_0896A508;
    case 409u: goto L_0896A52C;
    case 410u: goto L_0896A540;
    case 411u: goto L_0896A550;
    case 412u: goto L_0896A574;
    case 413u: goto L_0896A590;
    case 414u: goto L_0896A5BC;
    case 415u: goto L_0896A5C4;
    case 416u: goto L_0896A5E0;
    case 417u: goto L_0896A5E8;
    case 418u: goto L_0896A5EC;
    case 419u: goto L_0896A638;
    case 420u: goto L_0896A64C;
    case 421u: goto L_0896A65C;
    case 422u: goto L_0896A67C;
    case 423u: goto L_0896A6B4;
    case 424u: goto L_0896A6B8;
    case 425u: goto L_0896A6CC;
    case 426u: goto L_0896A6D4;
    case 427u: goto L_0896A6FC;
    case 428u: goto L_0896A778;
    case 429u: goto L_0896A780;
    case 430u: goto L_0896A790;
    case 431u: goto L_0896A7B8;
    case 432u: goto L_0896A7BC;
    case 433u: goto L_0896A800;
    case 434u: goto L_0896A808;
    case 435u: goto L_0896A840;
    case 436u: goto L_0896A860;
    case 437u: goto L_0896A8AC;
    case 438u: goto L_0896A8BC;
    case 439u: goto L_0896A8D8;
    case 440u: goto L_0896A8FC;
    case 441u: goto L_0896A918;
    case 442u: goto L_0896A938;
    case 443u: goto L_0896A980;
    case 444u: goto L_0896A990;
    case 445u: goto L_0896A998;
    case 446u: goto L_0896A9F4;
    case 447u: goto L_0896AA08;
    case 448u: goto L_0896AA14;
    case 449u: goto L_0896AA1C;
    case 450u: goto L_0896AA2C;
    case 451u: goto L_0896AA38;
    case 452u: goto L_0896AA44;
    case 453u: goto L_0896AA50;
    case 454u: goto L_0896AA60;
    case 455u: goto L_0896AA70;
    case 456u: goto L_0896AA80;
    case 457u: goto L_0896AA90;
    case 458u: goto L_0896AA9C;
    case 459u: goto L_0896AAA8;
    case 460u: goto L_0896AAC8;
    case 461u: goto L_0896AAEC;
    case 462u: goto L_0896AAF8;
    case 463u: goto L_0896AB08;
    case 464u: goto L_0896AB18;
    case 465u: goto L_0896AB20;
    case 466u: goto L_0896AB28;
    case 467u: goto L_0896AB34;
    case 468u: goto L_0896AB3C;
    case 469u: goto L_0896AB78;
    case 470u: goto L_0896AB98;
    case 471u: goto L_0896ABA8;
    case 472u: goto L_0896ABE0;
    case 473u: goto L_0896ABF0;
    case 474u: goto L_0896ABF8;
    case 475u: goto L_0896AC4C;
    case 476u: goto L_0896AC74;
    case 477u: goto L_0896ACBC;
    case 478u: goto L_0896ACC4;
    case 479u: goto L_0896AD1C;
    case 480u: goto L_0896AD44;
    case 481u: goto L_0896AD8C;
    case 482u: goto L_0896AD94;
    case 483u: goto L_0896AD9C;
    case 484u: goto L_0896ADB0;
    case 485u: goto L_0896ADCC;
    case 486u: goto L_0896ADDC;
    case 487u: goto L_0896ADE8;
    case 488u: goto L_0896ADF4;
    case 489u: goto L_0896ADFC;
    case 490u: goto L_0896AE00;
    case 491u: goto L_0896AE0C;
    case 492u: goto L_0896AE1C;
    case 493u: goto L_0896AE24;
    case 494u: goto L_0896AE34;
    case 495u: goto L_0896AE40;
    case 496u: goto L_0896AE4C;
    case 497u: goto L_0896AE54;
    case 498u: goto L_0896AE58;
    case 499u: goto L_0896AE64;
    case 500u: goto L_0896AE74;
    case 501u: goto L_0896AE7C;
    case 502u: goto L_0896AE8C;
    case 503u: goto L_0896AE98;
    case 504u: goto L_0896AEA4;
    case 505u: goto L_0896AEAC;
    case 506u: goto L_0896AEB0;
    case 507u: goto L_0896AEBC;
    case 508u: goto L_0896AECC;
    case 509u: goto L_0896AED4;
    case 510u: goto L_0896AEE4;
    case 511u: goto L_0896AEF0;
    case 512u: goto L_0896AEFC;
    case 513u: goto L_0896AF04;
    case 514u: goto L_0896AF08;
    case 515u: goto L_0896AF14;
    case 516u: goto L_0896AF24;
    case 517u: goto L_0896AF2C;
    case 518u: goto L_0896AF3C;
    case 519u: goto L_0896AF48;
    case 520u: goto L_0896AF54;
    case 521u: goto L_0896AF5C;
    case 522u: goto L_0896AF60;
    case 523u: goto L_0896AF6C;
    case 524u: goto L_0896AF7C;
    case 525u: goto L_0896AF84;
    case 526u: goto L_0896AF94;
    case 527u: goto L_0896AFA0;
    case 528u: goto L_0896AFAC;
    case 529u: goto L_0896AFB4;
    case 530u: goto L_0896AFB8;
    case 531u: goto L_0896AFC4;
    case 532u: goto L_0896AFD4;
    case 533u: goto L_0896AFDC;
    case 534u: goto L_0896AFEC;
    case 535u: goto L_0896AFF8;
    case 536u: goto L_0896B004;
    case 537u: goto L_0896B00C;
    case 538u: goto L_0896B010;
    case 539u: goto L_0896B01C;
    case 540u: goto L_0896B02C;
    case 541u: goto L_0896B034;
    case 542u: goto L_0896B044;
    case 543u: goto L_0896B050;
    case 544u: goto L_0896B05C;
    case 545u: goto L_0896B064;
    case 546u: goto L_0896B068;
    case 547u: goto L_0896B074;
    case 548u: goto L_0896B084;
    case 549u: goto L_0896B08C;
    case 550u: goto L_0896B09C;
    case 551u: goto L_0896B0A8;
    case 552u: goto L_0896B0B4;
    case 553u: goto L_0896B0BC;
    case 554u: goto L_0896B0C0;
    case 555u: goto L_0896B0CC;
    case 556u: goto L_0896B0DC;
    case 557u: goto L_0896B0E4;
    case 558u: goto L_0896B0F4;
    case 559u: goto L_0896B100;
    case 560u: goto L_0896B10C;
    case 561u: goto L_0896B114;
    case 562u: goto L_0896B118;
    case 563u: goto L_0896B124;
    case 564u: goto L_0896B134;
    case 565u: goto L_0896B13C;
    case 566u: goto L_0896B14C;
    case 567u: goto L_0896B158;
    case 568u: goto L_0896B164;
    case 569u: goto L_0896B16C;
    case 570u: goto L_0896B170;
    case 571u: goto L_0896B17C;
    case 572u: goto L_0896B18C;
    case 573u: goto L_0896B194;
    case 574u: goto L_0896B1A4;
    case 575u: goto L_0896B1B0;
    case 576u: goto L_0896B1BC;
    case 577u: goto L_0896B1C4;
    case 578u: goto L_0896B1C8;
    case 579u: goto L_0896B1D4;
    case 580u: goto L_0896B1E4;
    case 581u: goto L_0896B1EC;
    case 582u: goto L_0896B1FC;
    case 583u: goto L_0896B208;
    case 584u: goto L_0896B214;
    case 585u: goto L_0896B21C;
    case 586u: goto L_0896B220;
    case 587u: goto L_0896B22C;
    case 588u: goto L_0896B23C;
    case 589u: goto L_0896B244;
    case 590u: goto L_0896B254;
    case 591u: goto L_0896B260;
    case 592u: goto L_0896B26C;
    case 593u: goto L_0896B274;
    case 594u: goto L_0896B278;
    case 595u: goto L_0896B284;
    case 596u: goto L_0896B294;
    case 597u: goto L_0896B29C;
    case 598u: goto L_0896B2AC;
    case 599u: goto L_0896B2B8;
    case 600u: goto L_0896B2C4;
    case 601u: goto L_0896B2CC;
    case 602u: goto L_0896B2D0;
    case 603u: goto L_0896B2DC;
    case 604u: goto L_0896B2EC;
    case 605u: goto L_0896B2F4;
    case 606u: goto L_0896B304;
    case 607u: goto L_0896B310;
    case 608u: goto L_0896B31C;
    case 609u: goto L_0896B324;
    case 610u: goto L_0896B328;
    case 611u: goto L_0896B334;
    case 612u: goto L_0896B344;
    case 613u: goto L_0896B34C;
    case 614u: goto L_0896B35C;
    case 615u: goto L_0896B368;
    case 616u: goto L_0896B374;
    case 617u: goto L_0896B37C;
    case 618u: goto L_0896B380;
    case 619u: goto L_0896B38C;
    case 620u: goto L_0896B39C;
    case 621u: goto L_0896B3A4;
    case 622u: goto L_0896B3B4;
    case 623u: goto L_0896B3C0;
    case 624u: goto L_0896B3CC;
    case 625u: goto L_0896B3D4;
    case 626u: goto L_0896B3D8;
    case 627u: goto L_0896B3E4;
    case 628u: goto L_0896B3F4;
    case 629u: goto L_0896B3FC;
    case 630u: goto L_0896B40C;
    case 631u: goto L_0896B418;
    case 632u: goto L_0896B424;
    case 633u: goto L_0896B42C;
    case 634u: goto L_0896B430;
    case 635u: goto L_0896B43C;
    case 636u: goto L_0896B44C;
    case 637u: goto L_0896B454;
    case 638u: goto L_0896B464;
    case 639u: goto L_0896B470;
    case 640u: goto L_0896B47C;
    case 641u: goto L_0896B484;
    case 642u: goto L_0896B488;
    case 643u: goto L_0896B494;
    case 644u: goto L_0896B4A4;
    case 645u: goto L_0896B4AC;
    case 646u: goto L_0896B4BC;
    case 647u: goto L_0896B4C8;
    case 648u: goto L_0896B4D4;
    case 649u: goto L_0896B4DC;
    case 650u: goto L_0896B4E0;
    case 651u: goto L_0896B4EC;
    case 652u: goto L_0896B4FC;
    case 653u: goto L_0896B504;
    case 654u: goto L_0896B514;
    case 655u: goto L_0896B520;
    case 656u: goto L_0896B52C;
    case 657u: goto L_0896B534;
    case 658u: goto L_0896B538;
    case 659u: goto L_0896B544;
    case 660u: goto L_0896B554;
    case 661u: goto L_0896B55C;
    case 662u: goto L_0896B56C;
    case 663u: goto L_0896B578;
    case 664u: goto L_0896B584;
    case 665u: goto L_0896B58C;
    case 666u: goto L_0896B590;
    case 667u: goto L_0896B59C;
    case 668u: goto L_0896B5AC;
    case 669u: goto L_0896B5B4;
    case 670u: goto L_0896B5C4;
    case 671u: goto L_0896B5D0;
    case 672u: goto L_0896B5DC;
    case 673u: goto L_0896B5E4;
    case 674u: goto L_0896B5E8;
    case 675u: goto L_0896B5F4;
    case 676u: goto L_0896B604;
    case 677u: goto L_0896B60C;
    case 678u: goto L_0896B61C;
    case 679u: goto L_0896B628;
    case 680u: goto L_0896B634;
    case 681u: goto L_0896B63C;
    case 682u: goto L_0896B640;
    case 683u: goto L_0896B64C;
    case 684u: goto L_0896B65C;
    case 685u: goto L_0896B664;
    case 686u: goto L_0896B674;
    case 687u: goto L_0896B680;
    case 688u: goto L_0896B68C;
    case 689u: goto L_0896B694;
    case 690u: goto L_0896B698;
    case 691u: goto L_0896B6A4;
    case 692u: goto L_0896B6B4;
    case 693u: goto L_0896B6BC;
    case 694u: goto L_0896B6CC;
    case 695u: goto L_0896B6D8;
    case 696u: goto L_0896B6E4;
    case 697u: goto L_0896B6EC;
    case 698u: goto L_0896B6F0;
    case 699u: goto L_0896B6FC;
    case 700u: goto L_0896B70C;
    case 701u: goto L_0896B714;
    case 702u: goto L_0896B724;
    case 703u: goto L_0896B730;
    case 704u: goto L_0896B73C;
    case 705u: goto L_0896B744;
    case 706u: goto L_0896B748;
    case 707u: goto L_0896B754;
    case 708u: goto L_0896B764;
    case 709u: goto L_0896B76C;
    case 710u: goto L_0896B77C;
    case 711u: goto L_0896B788;
    case 712u: goto L_0896B794;
    case 713u: goto L_0896B79C;
    case 714u: goto L_0896B7A0;
    case 715u: goto L_0896B7AC;
    case 716u: goto L_0896B7BC;
    case 717u: goto L_0896B7C4;
    case 718u: goto L_0896B7D4;
    case 719u: goto L_0896B7E0;
    case 720u: goto L_0896B7EC;
    case 721u: goto L_0896B7F4;
    case 722u: goto L_0896B7F8;
    case 723u: goto L_0896B804;
    case 724u: goto L_0896B814;
    case 725u: goto L_0896B81C;
    case 726u: goto L_0896B82C;
    case 727u: goto L_0896B838;
    case 728u: goto L_0896B844;
    case 729u: goto L_0896B84C;
    case 730u: goto L_0896B850;
    case 731u: goto L_0896B85C;
    case 732u: goto L_0896B86C;
    case 733u: goto L_0896B874;
    case 734u: goto L_0896B884;
    case 735u: goto L_0896B890;
    case 736u: goto L_0896B89C;
    case 737u: goto L_0896B8A4;
    case 738u: goto L_0896B8A8;
    case 739u: goto L_0896B8B4;
    case 740u: goto L_0896B8C4;
    case 741u: goto L_0896B8CC;
    case 742u: goto L_0896B8DC;
    case 743u: goto L_0896B8E8;
    case 744u: goto L_0896B8F4;
    case 745u: goto L_0896B8FC;
    case 746u: goto L_0896B900;
    case 747u: goto L_0896B90C;
    case 748u: goto L_0896B91C;
    case 749u: goto L_0896B924;
    case 750u: goto L_0896B934;
    case 751u: goto L_0896B940;
    case 752u: goto L_0896B94C;
    case 753u: goto L_0896B954;
    case 754u: goto L_0896B958;
    case 755u: goto L_0896B964;
    case 756u: goto L_0896B974;
    case 757u: goto L_0896B97C;
    case 758u: goto L_0896B98C;
    case 759u: goto L_0896B998;
    case 760u: goto L_0896B9A4;
    case 761u: goto L_0896B9AC;
    case 762u: goto L_0896B9B0;
    case 763u: goto L_0896B9BC;
    case 764u: goto L_0896B9CC;
    case 765u: goto L_0896B9DC;
    case 766u: goto L_0896B9E8;
    case 767u: goto L_0896B9F8;
    case 768u: goto L_0896BA04;
    case 769u: goto L_0896BA10;
    case 770u: goto L_0896BA18;
    case 771u: goto L_0896BA1C;
    case 772u: goto L_0896BA28;
    case 773u: goto L_0896BA38;
    case 774u: goto L_0896BA4C;
    case 775u: goto L_0896BA54;
    case 776u: goto L_0896BA64;
    case 777u: goto L_0896BA70;
    case 778u: goto L_0896BA7C;
    case 779u: goto L_0896BA84;
    case 780u: goto L_0896BA88;
    case 781u: goto L_0896BA94;
    case 782u: goto L_0896BAA4;
    case 783u: goto L_0896BAC4;
    case 784u: goto L_0896BAD4;
    case 785u: goto L_0896BAE4;
    case 786u: goto L_0896BAF0;
    case 787u: goto L_0896BAFC;
    case 788u: goto L_0896BB04;
    case 789u: goto L_0896BB08;
    case 790u: goto L_0896BB14;
    case 791u: goto L_0896BB24;
    case 792u: goto L_0896BB38;
    case 793u: goto L_0896BB48;
    case 794u: goto L_0896BB54;
    case 795u: goto L_0896BB64;
    case 796u: goto L_0896BB70;
    case 797u: goto L_0896BB7C;
    case 798u: goto L_0896BB84;
    case 799u: goto L_0896BB88;
    case 800u: goto L_0896BB94;
    case 801u: goto L_0896BBA4;
    case 802u: goto L_0896BBB8;
    case 803u: goto L_0896BBC0;
    case 804u: goto L_0896BBD0;
    case 805u: goto L_0896BBDC;
    case 806u: goto L_0896BBE8;
    case 807u: goto L_0896BBF0;
    case 808u: goto L_0896BBF4;
    case 809u: goto L_0896BC00;
    case 810u: goto L_0896BC10;
    case 811u: goto L_0896BC18;
    case 812u: goto L_0896BC28;
    case 813u: goto L_0896BC34;
    case 814u: goto L_0896BC40;
    case 815u: goto L_0896BC48;
    case 816u: goto L_0896BC4C;
    case 817u: goto L_0896BC58;
    case 818u: goto L_0896BC68;
    case 819u: goto L_0896BC70;
    case 820u: goto L_0896BC80;
    case 821u: goto L_0896BC8C;
    case 822u: goto L_0896BC98;
    case 823u: goto L_0896BCA0;
    case 824u: goto L_0896BCA4;
    case 825u: goto L_0896BCB0;
    case 826u: goto L_0896BCC0;
    case 827u: goto L_0896BCC8;
    case 828u: goto L_0896BCD8;
    case 829u: goto L_0896BCE4;
    case 830u: goto L_0896BCF0;
    case 831u: goto L_0896BCF8;
    case 832u: goto L_0896BCFC;
    case 833u: goto L_0896BD08;
    case 834u: goto L_0896BD18;
    case 835u: goto L_0896BD20;
    case 836u: goto L_0896BD30;
    case 837u: goto L_0896BD3C;
    case 838u: goto L_0896BD48;
    case 839u: goto L_0896BD50;
    case 840u: goto L_0896BD54;
    case 841u: goto L_0896BD60;
    case 842u: goto L_0896BD70;
    case 843u: goto L_0896BD78;
    case 844u: goto L_0896BD88;
    case 845u: goto L_0896BD94;
    case 846u: goto L_0896BDA0;
    case 847u: goto L_0896BDA8;
    case 848u: goto L_0896BDAC;
    case 849u: goto L_0896BDB8;
    case 850u: goto L_0896BDC8;
    case 851u: goto L_0896BDD0;
    case 852u: goto L_0896BDE0;
    case 853u: goto L_0896BDEC;
    case 854u: goto L_0896BDF8;
    case 855u: goto L_0896BE00;
    case 856u: goto L_0896BE04;
    case 857u: goto L_0896BE10;
    case 858u: goto L_0896BE20;
    case 859u: goto L_0896BE28;
    case 860u: goto L_0896BE38;
    case 861u: goto L_0896BE44;
    case 862u: goto L_0896BE50;
    case 863u: goto L_0896BE58;
    case 864u: goto L_0896BE5C;
    case 865u: goto L_0896BE68;
    case 866u: goto L_0896BE78;
    case 867u: goto L_0896BE80;
    case 868u: goto L_0896BE90;
    case 869u: goto L_0896BE9C;
    case 870u: goto L_0896BEA8;
    case 871u: goto L_0896BEB0;
    case 872u: goto L_0896BEB4;
    case 873u: goto L_0896BEC0;
    case 874u: goto L_0896BED0;
    case 875u: goto L_0896BED8;
    case 876u: goto L_0896BEE8;
    case 877u: goto L_0896BEF4;
    case 878u: goto L_0896BF00;
    case 879u: goto L_0896BF08;
    case 880u: goto L_0896BF0C;
    case 881u: goto L_0896BF18;
    case 882u: goto L_0896BF28;
    case 883u: goto L_0896BF30;
    case 884u: goto L_0896BF40;
    case 885u: goto L_0896BF4C;
    case 886u: goto L_0896BF58;
    case 887u: goto L_0896BF60;
    case 888u: goto L_0896BF64;
    case 889u: goto L_0896BF70;
    case 890u: goto L_0896BF80;
    case 891u: goto L_0896BF88;
    case 892u: goto L_0896BF98;
    case 893u: goto L_0896BFA4;
    case 894u: goto L_0896BFB0;
    case 895u: goto L_0896BFB8;
    case 896u: goto L_0896BFBC;
    case 897u: goto L_0896BFC8;
    case 898u: goto L_0896BFD8;
    case 899u: goto L_0896BFE0;
    case 900u: goto L_0896BFF0;
    case 901u: goto L_0896BFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08968000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 838u, 0x08967FD4u>(ctx, &aot_mem); return;
      }
      goto L_08968008;
    }
L_08968008:
    ctx.gpr[5] = (ctx.gpr[2] < static_cast<std::uint32_t>(75) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089680BC;
      }
      goto L_08968014;
    }
L_08968014:
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[2] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
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
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 49u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089680B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 694u, 0x08967138u>(ctx, &aot_mem) && ctx.pc == 0x089680B4u) goto L_089680B4;
    return;
L_089680B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089680C0;
      }
      goto L_089680BC;
    }
L_089680BC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089680C0;
L_089680C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089680CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089680ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x089680ECu) goto L_089680EC;
    return;
L_089680EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08968104;
      }
      goto L_089680FC;
    }
L_089680FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968130;
      }
      goto L_08968104;
    }
L_08968104:
    ctx.gpr[31] = (0x0896810Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x0896810Cu) goto L_0896810C;
    return;
L_0896810C:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08968130;
L_08968130:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[10] = (2277u << 16u);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(51)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    goto L_0896815C;
L_0896815C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968180;
      }
      goto L_08968164;
    }
L_08968164:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968180;
      }
      goto L_0896816C;
    }
L_0896816C:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(80));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[11] < static_cast<std::uint32_t>(75) ? 1u : 0u);
      if (branch_taken) {
          goto L_0896815C;
      }
      goto L_08968180;
    }
L_08968180:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_089681D4;
      }
      goto L_08968188;
    }
L_08968188:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x089681CCu);
    ctx.gpr[4] = (ctx.gpr[11] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 694u, 0x08967138u>(ctx, &aot_mem) && ctx.pc == 0x089681CCu) goto L_089681CC;
    return;
L_089681CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089681D8;
      }
      goto L_089681D4;
    }
L_089681D4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089681D8;
L_089681D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089681E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-22240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    goto L_08968210;
L_08968210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08968244;
      }
      goto L_0896821C;
    }
L_0896821C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08968244;
      }
      goto L_08968228;
    }
L_08968228:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08968234u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089684A8;
L_08968234:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    goto L_08968244;
L_08968244:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(75) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08968210;
      }
      goto L_08968254;
    }
L_08968254:
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
L_08968270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08968284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08968284u) goto L_08968284;
    return;
L_08968284:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896829C;
      }
      goto L_08968294;
    }
L_08968294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089682D0;
      }
      goto L_0896829C;
    }
L_0896829C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089682A8u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089684A8;
L_089682A8:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    goto L_089682D0;
L_089682D0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089682E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-22240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_089682FC;
L_089682FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08968308u);
    ctx.gpr[5] = (0u | 0u);
    goto L_089684A8;
L_08968308:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089682FC;
      }
      goto L_08968328;
    }
L_08968328:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896833C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896834Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x0896834Cu) goto L_0896834C;
    return;
L_0896834C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08968364;
      }
      goto L_0896835C;
    }
L_0896835C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968380;
      }
      goto L_08968364;
    }
L_08968364:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08968380;
L_08968380:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896838C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0896839Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x0896839Cu) goto L_0896839C;
    return;
L_0896839C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089683D4;
      }
      goto L_089683AC;
    }
L_089683AC:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
      if (branch_taken) {
          goto L_089683DC;
      }
      goto L_089683CC;
    }
L_089683CC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089683E4;
      }
      goto L_089683D4;
    }
L_089683D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089683E4;
      }
      goto L_089683DC;
    }
L_089683DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089683E4;
L_089683E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089683F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08968400u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08968400u) goto L_08968400;
    return;
L_08968400:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0896841C;
      }
      goto L_08968418;
    }
L_08968418:
    ctx.gpr[4] = (0u | 1u);
    goto L_0896841C;
L_0896841C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08968430;
      }
      goto L_08968428;
    }
L_08968428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896844C;
      }
      goto L_08968430;
    }
L_08968430:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0896844C;
L_0896844C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968458:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08968468u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08968468u) goto L_08968468;
    return;
L_08968468:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08968480;
      }
      goto L_08968478;
    }
L_08968478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896849C;
      }
      goto L_08968480;
    }
L_08968480:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0896849C;
L_0896849C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089684A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089684F0;
      }
      goto L_089684E0;
    }
L_089684E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089685CC;
      }
      goto L_089684E8;
    }
L_089684E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968508;
      }
      goto L_089684F0;
    }
L_089684F0:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896854C;
      }
      goto L_089684F8;
    }
L_089684F8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968590;
      }
      goto L_08968500;
    }
L_08968500:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089685CC;
      }
      goto L_08968508;
    }
L_08968508:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08968518u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08968518u) goto L_08968518;
    return;
L_08968518:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968544;
      }
      goto L_08968524;
    }
L_08968524:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[16] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 22u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08968544;
L_08968544:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089685CC;
      }
      goto L_0896854C;
    }
L_0896854C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896855Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0896855Cu) goto L_0896855C;
    return;
L_0896855C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968588;
      }
      goto L_08968568;
    }
L_08968568:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[16] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 22u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_08968588;
L_08968588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089685CC;
      }
      goto L_08968590;
    }
L_08968590:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089685A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089685A0u) goto L_089685A0;
    return;
L_089685A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089685CC;
      }
      goto L_089685AC;
    }
L_089685AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (65472u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[16] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] << 22u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_089685CC;
L_089685CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089685DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089685ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x089685ECu) goto L_089685EC;
    return;
L_089685EC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08968604;
      }
      goto L_089685FC;
    }
L_089685FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968620;
      }
      goto L_08968604;
    }
L_08968604:
    ctx.gpr[6] = (ctx.gpr[5] << 6u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08968620;
L_08968620:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896862C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08968640u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08968640u) goto L_08968640;
    return;
L_08968640:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_0896866C;
      }
      goto L_08968650;
    }
L_08968650:
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0896866C;
L_0896866C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968678:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[8] = (16329u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[8] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (16201u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.gpr[8] = (ctx.gpr[8] | 4059u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[16];
    ctx.gpr[8] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[9] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[29] | 0u);
    goto L_089686F4;
L_089686F4:
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[19] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[19])));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[16] + ctx.fpr[19];
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[2];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[10]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[10] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[0] - ctx.fpr[19];
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.fpr[19] = ctx.fpr[13] + ctx.fpr[19];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089686F4;
      }
      goto L_089687B4;
    }
L_089687B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x089687FCu);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089687FCu) goto L_089687FC;
    return;
L_089687FC:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08968828u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 928u, 0x08AD3C80u>(ctx, &aot_mem) && ctx.pc == 0x08968828u) goto L_08968828;
    return;
L_08968828:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968850:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[6] = (16576u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[12] + ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[16] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28740));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[19] = (ctx.gpr[7] & 255u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x089688C0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x089688C0u) goto L_089688C0;
    return;
L_089688C0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089688DCu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x089688DCu) goto L_089688DC;
    return;
L_089688DC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089688ECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x089688ECu) goto L_089688EC;
    return;
L_089688EC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896895C;
      }
      goto L_08968900;
    }
L_08968900:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16128));
    goto L_08968910;
L_08968910:
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08968928;
      }
      goto L_08968924;
    }
L_08968924:
    ctx.gpr[6] = (0u | 1u);
    goto L_08968928;
L_08968928:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968910;
      }
      goto L_0896893C;
    }
L_0896893C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_0896895C;
      }
      goto L_08968944;
    }
L_08968944:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[7] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-28236), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0896895C;
L_0896895C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968984:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28208)));
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-28204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_089689FC;
      }
      goto L_089689E0;
    }
L_089689E0:
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(501) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968A14;
      }
      goto L_089689EC;
    }
L_089689EC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28208), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28204), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08968A14;
      }
      goto L_089689FC;
    }
L_089689FC:
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(201) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968A14;
      }
      goto L_08968A08;
    }
L_08968A08:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-28208), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-28204), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08968A14;
L_08968A14:
    ctx.gpr[4] = (16278u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52196u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08968A28u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 260u, 0x08A1D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08968A28u) goto L_08968A28;
    return;
L_08968A28:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-28204)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08968A50;
      }
      goto L_08968A40;
    }
L_08968A40:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08968A50;
L_08968A50:
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16608u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_08968B50;
      }
      goto L_08968A80;
    }
L_08968A80:
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28740));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[20];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.fpr[16] = ctx.fpr[22] + ctx.fpr[20];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[20] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x08968ADCu);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08968ADCu) goto L_08968ADC;
    return;
L_08968ADC:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08968AF8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08968AF8u) goto L_08968AF8;
    return;
L_08968AF8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08968B08u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x08968B08u) goto L_08968B08;
    return;
L_08968B08:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(216)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[20];
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[20];
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[20];
    ctx.gpr[31] = (0x08968B24u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08968B24u) goto L_08968B24;
    return;
L_08968B24:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08968B40u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08968B40u) goto L_08968B40;
    return;
L_08968B40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08968B50u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x08968B50u) goto L_08968B50;
    return;
L_08968B50:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-16128));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(54));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-28236), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08968BE8;
L_08968BE8:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[18] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    goto L_08968BF4;
L_08968BF4:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968C14;
      }
      goto L_08968BFC;
    }
L_08968BFC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08968C14;
      }
      goto L_08968C04;
    }
L_08968C04:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08968C14;
      }
      goto L_08968C0C;
    }
L_08968C0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968C28;
      }
      goto L_08968C14;
    }
L_08968C14:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08968C20u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 567u, 0x089666B4u>(ctx, &aot_mem) && ctx.pc == 0x08968C20u) goto L_08968C20;
    return;
L_08968C20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968C34;
      }
      goto L_08968C28;
    }
L_08968C28:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08968C34u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 562u, 0x0896663Cu>(ctx, &aot_mem) && ctx.pc == 0x08968C34u) goto L_08968C34;
    return;
L_08968C34:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968BF4;
      }
      goto L_08968C44;
    }
L_08968C44:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968BE8;
      }
      goto L_08968C54;
    }
L_08968C54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968C80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[13]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08968CE4u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08968BAC;
L_08968CE4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968CF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (0u | 0u);
    goto L_08968D04;
L_08968D04:
    ctx.gpr[16] = (0u | 0u);
    goto L_08968D08;
L_08968D08:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08968D14u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 567u, 0x089666B4u>(ctx, &aot_mem) && ctx.pc == 0x08968D14u) goto L_08968D14;
    return;
L_08968D14:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968D08;
      }
      goto L_08968D24;
    }
L_08968D24:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968D04;
      }
      goto L_08968D34;
    }
L_08968D34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08968D48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[31]);
    ctx.gpr[31] = (0x08968D90u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 595u, 0x08966858u>(ctx, &aot_mem) && ctx.pc == 0x08968D90u) goto L_08968D90;
    return;
L_08968D90:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08968D9Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 553u, 0x089665E4u>(ctx, &aot_mem) && ctx.pc == 0x08968D9Cu) goto L_08968D9C;
    return;
L_08968D9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6816)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08968E44;
      }
      goto L_08968DAC;
    }
L_08968DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28200));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27840)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08968DFC;
      }
      goto L_08968DF0;
    }
L_08968DF0:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08968E10;
      }
      goto L_08968DFC;
    }
L_08968DFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08968E10;
L_08968E10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968E24;
      }
      goto L_08968E18;
    }
L_08968E18:
    ctx.gpr[31] = (0x08968E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 239u, 0x08A4CFDCu>(ctx, &aot_mem) && ctx.pc == 0x08968E20u) goto L_08968E20;
    return;
L_08968E20:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08968E24;
L_08968E24:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968E3C;
      }
      goto L_08968E2C;
    }
L_08968E2C:
    ctx.gpr[31] = (0x08968E34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 636u, 0x08AB38A8u>(ctx, &aot_mem) && ctx.pc == 0x08968E34u) goto L_08968E34;
    return;
L_08968E34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968E44;
      }
      goto L_08968E3C;
    }
L_08968E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896901C;
      }
      goto L_08968E44;
    }
L_08968E44:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    goto L_08968E50;
L_08968E50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08968E5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08968E5Cu) goto L_08968E5C;
    return;
L_08968E5C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08968E50;
      }
      goto L_08968E70;
    }
L_08968E70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(232));
    ctx.gpr[31] = (0x08968E7Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(296));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 449u, 0x0896E2CCu>(ctx, &aot_mem) && ctx.pc == 0x08968E7Cu) goto L_08968E7C;
    return;
L_08968E7C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08968EE8;
      }
      goto L_08968E88;
    }
L_08968E88:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[19]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15112u << 16u);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 34953u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[21] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(104));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 61681u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
      if (branch_taken) {
          goto L_08968EF0;
      }
      goto L_08968EE0;
    }
L_08968EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968F68;
      }
      goto L_08968EE8;
    }
L_08968EE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896901C;
      }
      goto L_08968EF0;
    }
L_08968EF0:
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(232));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(168));
    goto L_08968F04;
L_08968F04:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08968F10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 796u, 0x08967C70u>(ctx, &aot_mem) && ctx.pc == 0x08968F10u) goto L_08968F10;
    return;
L_08968F10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08968F24u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 801u, 0x08967D38u>(ctx, &aot_mem) && ctx.pc == 0x08968F24u) goto L_08968F24;
    return;
L_08968F24:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08968F30u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08968F30u) goto L_08968F30;
    return;
L_08968F30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08968F04;
      }
      goto L_08968F68;
    }
L_08968F68:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6816)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(168));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_08968FC0;
      }
      goto L_08968F7C;
    }
L_08968F7C:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08968F8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08968F8Cu) goto L_08968F8C;
    return;
L_08968F8C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(328));
    ctx.gpr[5] = (0u | 204u);
    ctx.gpr[6] = (0u | 204u);
    ctx.gpr[31] = (0x08968FA4u);
    ctx.gpr[7] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08968FA4u) goto L_08968FA4;
    return;
L_08968FA4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08968FB8u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 936u, 0x08AD3D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08968FB8u) goto L_08968FB8;
    return;
L_08968FB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08968FFC;
      }
      goto L_08968FC0;
    }
L_08968FC0:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08968FD0u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08968FD0u) goto L_08968FD0;
    return;
L_08968FD0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(332));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x08968FE8u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08968FE8u) goto L_08968FE8;
    return;
L_08968FE8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08968FFCu);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 936u, 0x08AD3D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08968FFCu) goto L_08968FFC;
    return;
L_08968FFC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896901C;
      }
      goto L_08969008;
    }
L_08969008:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0896901Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x0896901Cu) goto L_0896901C;
    return;
L_0896901C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969054:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49024u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    ctx.gpr[31] = (0x089690CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089690CCu) goto L_089690CC;
    return;
L_089690CC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x089690D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089690D8u) goto L_089690D8;
    return;
L_089690D8:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x089690E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089690E4u) goto L_089690E4;
    return;
L_089690E4:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x089690F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089690F0u) goto L_089690F0;
    return;
L_089690F0:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x089690FCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089690FCu) goto L_089690FC;
    return;
L_089690FC:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08969108u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969108u) goto L_08969108;
    return;
L_08969108:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08969114u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969114u) goto L_08969114;
    return;
L_08969114:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08969120u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969120u) goto L_08969120;
    return;
L_08969120:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0896912Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896912Cu) goto L_0896912C;
    return;
L_0896912C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (15112u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 34953u);
    ctx.gpr[4] = (15216u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 61681u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 4059u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[29] | 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.gpr[16] = (2277u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[30] = (0u | 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[23] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-15520));
    goto L_0896919C;
L_0896919C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089691B8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x089691B8u) goto L_089691B8;
    return;
L_089691B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_089691DC;
L_089691DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::cos(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3F22F983u);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08969248u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08969248u) goto L_08969248;
    return;
L_08969248:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089691DC;
      }
      goto L_08969274;
    }
L_08969274:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08969280u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 940u, 0x08AD3E28u>(ctx, &aot_mem) && ctx.pc == 0x08969280u) goto L_08969280;
    return;
L_08969280:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08969290u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08969290u) goto L_08969290;
    return;
L_08969290:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0896919C;
      }
      goto L_089692A4;
    }
L_089692A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089692E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (50944u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(257));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    ctx.gpr[31] = (0x08969338u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x08969338u) goto L_08969338;
    return;
L_08969338:
    ctx.gpr[31] = (0x08969340u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x089870BCu>(ctx, &aot_mem) && ctx.pc == 0x08969340u) goto L_08969340;
    return;
L_08969340:
    ctx.gpr[31] = (0x08969348u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x08969348u) goto L_08969348;
    return;
L_08969348:
    ctx.gpr[31] = (0x08969350u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x08969350u) goto L_08969350;
    return;
L_08969350:
    ctx.gpr[31] = (0x08969358u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x089870BCu>(ctx, &aot_mem) && ctx.pc == 0x08969358u) goto L_08969358;
    return;
L_08969358:
    ctx.gpr[31] = (0x08969360u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 501u, 0x08987068u>(ctx, &aot_mem) && ctx.pc == 0x08969360u) goto L_08969360;
    return;
L_08969360:
    ctx.fpr[15] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08969378u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08969378u) goto L_08969378;
    return;
L_08969378:
    ctx.gpr[31] = (0x08969380u);
    // nop
    goto L_08969054;
L_08969380:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7912));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[15]));
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (16608u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<2u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089693F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968BAC;
L_089693F0:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x089693FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089693FCu) goto L_089693FC;
    return;
L_089693FC:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x08969408u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969408u) goto L_08969408;
    return;
L_08969408:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x08969414u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969414u) goto L_08969414;
    return;
L_08969414:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x08969420u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969420u) goto L_08969420;
    return;
L_08969420:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x0896942Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896942Cu) goto L_0896942C;
    return;
L_0896942C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08969438u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969438u) goto L_08969438;
    return;
L_08969438:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08969444u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969444u) goto L_08969444;
    return;
L_08969444:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08969450u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969450u) goto L_08969450;
    return;
L_08969450:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0896945Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0896945Cu) goto L_0896945C;
    return;
L_0896945C:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08969468u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08969468u) goto L_08969468;
    return;
L_08969468:
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896947Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08968D48;
L_0896947C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08969488u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08968D48;
L_08969488:
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08969498u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08968D48;
L_08969498:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089694A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968D48;
L_089694A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089694B0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968D48;
L_089694B0:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089694BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968D48;
L_089694BC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089694CCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968D48;
L_089694CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089694D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968D48;
L_089694D8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089694E4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968D48;
L_089694E4:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x089694F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089694F0u) goto L_089694F0;
    return;
L_089694F0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x089694FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x089694FCu) goto L_089694FC;
    return;
L_089694FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08969574u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28040));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 552u, 0x089665B8u>(ctx, &aot_mem) && ctx.pc == 0x08969574u) goto L_08969574;
    return;
L_08969574:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08969588u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08969588u) goto L_08969588;
    return;
L_08969588:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089695A4;
      }
      goto L_08969594;
    }
L_08969594:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089695B8;
      }
      goto L_0896959C;
    }
L_0896959C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896964C;
      }
      goto L_089695A4;
    }
L_089695A4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089695B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28016));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 552u, 0x089665B8u>(ctx, &aot_mem) && ctx.pc == 0x089695B0u) goto L_089695B0;
    return;
L_089695B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08969650;
      }
      goto L_089695B8;
    }
L_089695B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896964C;
      }
      goto L_089695C4;
    }
L_089695C4:
    ctx.gpr[31] = (0x089695CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08969AD4;
L_089695CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969640;
      }
      goto L_089695D4;
    }
L_089695D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6480)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x089695F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x089695F4u) goto L_089695F4;
    return;
L_089695F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08969618;
      }
      goto L_08969604;
    }
L_08969604:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[31] = (0x08969610u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08969610u) goto L_08969610;
    return;
L_08969610:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08969618;
L_08969618:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
        goto L_08969624;
    }
    goto L_08969624;
L_08969624:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08969640;
L_08969640:
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(327), static_cast<std::uint8_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08969650;
      }
      goto L_0896964C;
    }
L_0896964C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08969650;
L_08969650:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969664:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x089696A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x089696A0u) goto L_089696A0;
    return;
L_089696A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_089696B4;
      }
      goto L_089696AC;
    }
L_089696AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(327), static_cast<std::uint8_t>(0u));
    goto L_089696B4;
L_089696B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6480)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] ^ ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
      if (branch_taken) {
          goto L_089697C0;
      }
      goto L_089696E4;
    }
L_089696E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3))))));
    if (ctx.gpr[16] != ctx.gpr[6]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_089697A4;
    }
    goto L_08969708;
L_08969708:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[17] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
        goto L_089697A4;
    }
    goto L_08969714;
L_08969714:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[21] ^ ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089697A0;
      }
      goto L_08969734;
    }
L_08969734:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
        goto L_0896977C;
    }
    goto L_08969750;
L_08969750:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08969774;
      }
      goto L_0896976C;
    }
L_0896976C:
    ctx.gpr[31] = (0x08969774u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08969774u) goto L_08969774;
    return;
L_08969774:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_0896977C;
L_0896977C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[21] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969734;
      }
      goto L_0896979C;
    }
L_0896979C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-6480)));
    goto L_089697A0;
L_089697A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_089697A4;
L_089697A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] ^ ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089696E4;
      }
      goto L_089697C0;
    }
L_089697C0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089697E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08969A94;
      }
      goto L_08969834;
    }
L_08969834:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6480)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969888;
      }
      goto L_08969850;
    }
L_08969850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6480)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2224u << 16u);
      if (branch_taken) {
          goto L_08969890;
      }
      goto L_08969880;
    }
L_08969880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A94;
      }
      goto L_08969888;
    }
L_08969888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A94;
      }
      goto L_08969890;
    }
L_08969890:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23884));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 5u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
    ctx.gpr[23] = (2230u << 16u);
    goto L_089698D0;
L_089698D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089698ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x089698ECu) goto L_089698EC;
    return;
L_089698EC:
    ctx.gpr[4] = (0u | 2u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_0896991C;
    }
    goto L_089698F8;
L_089698F8:
    ctx.gpr[31] = (0x08969900u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x08969900u) goto L_08969900;
    return;
L_08969900:
    ctx.gpr[4] = (0u | 1u);
    if (ctx.gpr[2] != ctx.gpr[4]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_0896991C;
    }
    goto L_0896990C;
L_0896990C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08969968;
      }
      goto L_0896991C;
    }
L_0896991C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08969968;
L_08969968:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28768)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089699A4;
      }
      goto L_08969980;
    }
L_08969980:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0896999Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896999Cu) goto L_0896999C;
    return;
L_0896999C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089699AC;
      }
      goto L_089699A4;
    }
L_089699A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_089699AC;
      }
      goto L_089699AC;
    }
L_089699AC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A1C;
      }
      goto L_089699B4;
    }
L_089699B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        goto L_089699E0;
    }
    goto L_089699C0;
L_089699C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089699D0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089699D0u) goto L_089699D0;
    return;
L_089699D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    goto L_089699E0;
L_089699E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A1C;
      }
      goto L_089699F8;
    }
L_089699F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969A1C;
      }
      goto L_08969A18;
    }
L_08969A18:
    ctx.gpr[18] = (0u | 0u);
    goto L_08969A1C;
L_08969A1C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08969A68;
    }
    goto L_08969A24;
L_08969A24:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(97)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(98)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(-6484)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[11] = (0u | 1024u);
    ctx.gpr[31] = (0x08969A64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x08969A64u) goto L_08969A64;
    return;
L_08969A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08969A68;
L_08969A68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-6480)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089698D0;
      }
      goto L_08969A94;
    }
L_08969A94:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969AD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6480)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08969B3C;
      }
      goto L_08969B08;
    }
L_08969B08:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08969B44;
      }
      goto L_08969B14;
    }
L_08969B14:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969B08;
      }
      goto L_08969B3C;
    }
L_08969B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08969B48;
      }
      goto L_08969B44;
    }
L_08969B44:
    ctx.gpr[2] = (0u | 1u);
    goto L_08969B48;
L_08969B48:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08969B50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] << 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-22240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[18] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969BB4;
      }
      goto L_08969BA4;
    }
L_08969BA4:
    ctx.gpr[31] = (0x08969BACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x08969BACu) goto L_08969BAC;
    return;
L_08969BAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969FEC;
      }
      goto L_08969BB4;
    }
L_08969BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08969BC0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 802u, 0x08967DB0u>(ctx, &aot_mem) && ctx.pc == 0x08969BC0u) goto L_08969BC0;
    return;
L_08969BC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[20] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08969BE0;
      }
      goto L_08969BD0;
    }
L_08969BD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969C4C;
      }
      goto L_08969BE0;
    }
L_08969BE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969C4C;
      }
      goto L_08969BF0;
    }
L_08969BF0:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08969C10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 448u, 0x0896E118u>(ctx, &aot_mem) && ctx.pc == 0x08969C10u) goto L_08969C10;
    return;
L_08969C10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08969C4C;
      }
      goto L_08969C40;
    }
L_08969C40:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08969C4C;
L_08969C4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08969C68;
      }
      goto L_08969C58;
    }
L_08969C58:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969FEC;
      }
      goto L_08969C68;
    }
L_08969C68:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(12));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08969C80u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x08969C80u) goto L_08969C80;
    return;
L_08969C80:
    ctx.gpr[31] = (0x08969C88u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 734u, 0x0896755Cu>(ctx, &aot_mem) && ctx.pc == 0x08969C88u) goto L_08969C88;
    return;
L_08969C88:
    ctx.gpr[31] = (0x08969C90u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08969C90u) goto L_08969C90;
    return;
L_08969C90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969D38;
      }
      goto L_08969C98;
    }
L_08969C98:
    ctx.gpr[31] = (0x08969CA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08969CA0u) goto L_08969CA0;
    return;
L_08969CA0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.gpr[31] = (0x08969CDCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 241u, 0x08A1D350u>(ctx, &aot_mem) && ctx.pc == 0x08969CDCu) goto L_08969CDC;
    return;
L_08969CDC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (49962u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17194u << 16u);
      if (branch_taken) {
          goto L_08969D1C;
      }
      goto L_08969CF8;
    }
L_08969CF8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08969D1C;
      }
      goto L_08969D0C;
    }
L_08969D0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969D24;
      }
      goto L_08969D1C;
    }
L_08969D1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 255u);
      if (branch_taken) {
          goto L_08969D30;
      }
      goto L_08969D24;
    }
L_08969D24:
    ctx.gpr[31] = (0x08969D2Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 740u, 0x089675ECu>(ctx, &aot_mem) && ctx.pc == 0x08969D2Cu) goto L_08969D2C;
    return;
L_08969D2C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08969D30;
L_08969D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969D44;
      }
      goto L_08969D38;
    }
L_08969D38:
    ctx.gpr[31] = (0x08969D40u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 740u, 0x089675ECu>(ctx, &aot_mem) && ctx.pc == 0x08969D40u) goto L_08969D40;
    return;
L_08969D40:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_08969D44;
L_08969D44:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08969D50u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x08969D50u) goto L_08969D50;
    return;
L_08969D50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08969D80;
      }
      goto L_08969D5C;
    }
L_08969D5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08969D80;
      }
      goto L_08969D70;
    }
L_08969D70:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969FEC;
      }
      goto L_08969D80;
    }
L_08969D80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08969F74;
      }
      goto L_08969D8C;
    }
L_08969D8C:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08969D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 209u, 0x089D5A30u>(ctx, &aot_mem) && ctx.pc == 0x08969D9Cu) goto L_08969D9C;
    return;
L_08969D9C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[20] >> 24u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[19] = (ctx.gpr[20] >> 16u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[20] = (ctx.gpr[20] >> 8u);
    ctx.gpr[21] = (ctx.gpr[20] & 255u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08969DF8;
      }
      goto L_08969DE0;
    }
L_08969DE0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08969E40;
      }
      goto L_08969DEC;
    }
L_08969DEC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08969E40;
      }
      goto L_08969DF8;
    }
L_08969DF8:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08969E2C;
      }
      goto L_08969E14;
    }
L_08969E14:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08969E40;
      }
      goto L_08969E20;
    }
L_08969E20:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08969E40;
      }
      goto L_08969E2C;
    }
L_08969E2C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08969E40;
      }
      goto L_08969E38;
    }
L_08969E38:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08969E40;
L_08969E40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08969E64u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 350u, 0x0896D93Cu>(ctx, &aot_mem) && ctx.pc == 0x08969E64u) goto L_08969E64;
    return;
L_08969E64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08969F6C;
      }
      goto L_08969E78;
    }
L_08969E78:
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-16128));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    goto L_08969E90;
L_08969E90:
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[16]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[18];
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[23]);
      if (branch_taken) {
          goto L_08969ECC;
      }
      goto L_08969EA4;
    }
L_08969EA4:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[7] = (ctx.gpr[7] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08969ECC;
      }
      goto L_08969EC8;
    }
L_08969EC8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08969ECC;
L_08969ECC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969E90;
      }
      goto L_08969EE0;
    }
L_08969EE0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969F6C;
      }
      goto L_08969EE8;
    }
L_08969EE8:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08969F00u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08969F00u) goto L_08969F00;
    return;
L_08969F00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6496), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6496));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-28236)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[8] << 3u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[16]);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6496)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-28236), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08969F6C;
L_08969F6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969FEC;
      }
      goto L_08969F74;
    }
L_08969F74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08969F90;
      }
      goto L_08969F80;
    }
L_08969F80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08969FC8;
      }
      goto L_08969F90;
    }
L_08969F90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[17] >> 24u);
    ctx.gpr[7] = (ctx.gpr[17] >> 16u);
    ctx.gpr[8] = (ctx.gpr[17] >> 8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x08969FC0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08968850;
L_08969FC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08969FEC;
      }
      goto L_08969FC8;
    }
L_08969FC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08969FECu);
    ctx.gpr[8] = (0u | 255u);
    goto L_08968850;
L_08969FEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A01C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0896A13C;
      }
      goto L_0896A068;
    }
L_0896A068:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_0896A10C;
      }
      goto L_0896A074;
    }
L_0896A074:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0896A0B0;
      }
      goto L_0896A07C;
    }
L_0896A07C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A1FC;
      }
      goto L_0896A084;
    }
L_0896A084:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896A0A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0896A0A8u) goto L_0896A0A8;
    return;
L_0896A0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896A1FC;
      }
      goto L_0896A0B0;
    }
L_0896A0B0:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896A0D8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0896A0D8u) goto L_0896A0D8;
    return;
L_0896A0D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A100;
      }
      goto L_0896A0E4;
    }
L_0896A0E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A0F8;
      }
      goto L_0896A0F0;
    }
L_0896A0F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0896A104;
      }
      goto L_0896A0F8;
    }
L_0896A0F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A104;
      }
      goto L_0896A100;
    }
L_0896A100:
    ctx.gpr[17] = (0u | 0u);
    goto L_0896A104;
L_0896A104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A1FC;
      }
      goto L_0896A10C;
    }
L_0896A10C:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0896A134u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0896A134u) goto L_0896A134;
    return;
L_0896A134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896A1FC;
      }
      goto L_0896A13C;
    }
L_0896A13C:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x0896A16Cu);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0896A16Cu) goto L_0896A16C;
    return;
L_0896A16C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A1FC;
      }
      goto L_0896A178;
    }
L_0896A178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.gpr[5] = (2224u << 16u);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896A198u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11584));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896A198u) goto L_0896A198;
    return;
L_0896A198:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A1BC;
      }
      goto L_0896A1A0;
    }
L_0896A1A0:
    ctx.gpr[31] = (0x0896A1A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 123u, 0x08A34C08u>(ctx, &aot_mem) && ctx.pc == 0x0896A1A8u) goto L_0896A1A8;
    return;
L_0896A1A8:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A1F8;
      }
      goto L_0896A1BC;
    }
L_0896A1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
        goto L_0896A1E8;
    }
    goto L_0896A1C8;
L_0896A1C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[31] = (0x0896A1D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0896A1D8u) goto L_0896A1D8;
    return;
L_0896A1D8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    goto L_0896A1E8;
L_0896A1E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
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
    goto L_0896A1F8;
L_0896A1F8:
    ctx.gpr[18] = (0u | 1u);
    goto L_0896A1FC;
L_0896A1FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A218;
      }
      goto L_0896A204;
    }
L_0896A204:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    goto L_0896A218;
L_0896A218:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A840;
      }
      goto L_0896A220;
    }
L_0896A220:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A348;
      }
      goto L_0896A248;
    }
L_0896A248:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A2F0;
      }
      goto L_0896A268;
    }
L_0896A268:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x0896A298u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0896A298u) goto L_0896A298;
    return;
L_0896A298:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A2E4;
      }
      goto L_0896A2A4;
    }
L_0896A2A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x0896A2B8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 105u, 0x088A8570u>(ctx, &aot_mem) && ctx.pc == 0x0896A2B8u) goto L_0896A2B8;
    return;
L_0896A2B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0896A2E8;
      }
      goto L_0896A2E4;
    }
L_0896A2E4:
    ctx.gpr[17] = (0u | 0u);
    goto L_0896A2E8;
L_0896A2E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A370;
      }
      goto L_0896A2F0;
    }
L_0896A2F0:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[31] = (0x0896A31Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 116u, 0x088A8618u>(ctx, &aot_mem) && ctx.pc == 0x0896A31Cu) goto L_0896A31C;
    return;
L_0896A31C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_0896A370;
      }
      goto L_0896A348;
    }
L_0896A348:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(50)));
    ctx.gpr[31] = (0x0896A36Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 802u, 0x08967DB0u>(ctx, &aot_mem) && ctx.pc == 0x0896A36Cu) goto L_0896A36C;
    return;
L_0896A36C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_0896A370;
L_0896A370:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A3BC;
      }
      goto L_0896A398;
    }
L_0896A398:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A450;
      }
      goto L_0896A3BC;
    }
L_0896A3BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A450;
      }
      goto L_0896A3CC;
    }
L_0896A3CC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x0896A400u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 448u, 0x0896E118u>(ctx, &aot_mem) && ctx.pc == 0x0896A400u) goto L_0896A400;
    return;
L_0896A400:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A450;
      }
      goto L_0896A430;
    }
L_0896A430:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0896A450;
L_0896A450:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A49C;
      }
      goto L_0896A478;
    }
L_0896A478:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(62))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A840;
      }
      goto L_0896A49C;
    }
L_0896A49C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    ctx.gpr[31] = (0x0896A4E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 791u, 0x08967BB0u>(ctx, &aot_mem) && ctx.pc == 0x0896A4E4u) goto L_0896A4E4;
    return;
L_0896A4E4:
    ctx.gpr[31] = (0x0896A4ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 734u, 0x0896755Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A4ECu) goto L_0896A4EC;
    return;
L_0896A4EC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0896A4F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 740u, 0x089675ECu>(ctx, &aot_mem) && ctx.pc == 0x0896A4F8u) goto L_0896A4F8;
    return;
L_0896A4F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x0896A508u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 768u, 0x089678F0u>(ctx, &aot_mem) && ctx.pc == 0x0896A508u) goto L_0896A508;
    return;
L_0896A508:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_0896A550;
      }
      goto L_0896A52C;
    }
L_0896A52C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0896A550;
      }
      goto L_0896A540;
    }
L_0896A540:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A840;
      }
      goto L_0896A550;
    }
L_0896A550:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A780;
      }
      goto L_0896A574;
    }
L_0896A574:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0896A590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 209u, 0x089D5A30u>(ctx, &aot_mem) && ctx.pc == 0x0896A590u) goto L_0896A590;
    return;
L_0896A590:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A5C4;
      }
      goto L_0896A5BC;
    }
L_0896A5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0896A5EC;
      }
      goto L_0896A5C4;
    }
L_0896A5C4:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0896A5E8;
      }
      goto L_0896A5E0;
    }
L_0896A5E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0896A5EC;
      }
      goto L_0896A5E8;
    }
L_0896A5E8:
    ctx.gpr[4] = (0u | 2u);
    goto L_0896A5EC;
L_0896A5EC:
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(60))))));
    ctx.gpr[5] = (ctx.gpr[17] >> 24u);
    ctx.gpr[6] = (ctx.gpr[17] >> 16u);
    ctx.gpr[7] = (ctx.gpr[17] >> 8u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x0896A638u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-6484)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 350u, 0x0896D93Cu>(ctx, &aot_mem) && ctx.pc == 0x0896A638u) goto L_0896A638;
    return;
L_0896A638:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A778;
      }
      goto L_0896A64C;
    }
L_0896A64C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0896A6CC;
      }
      goto L_0896A65C;
    }
L_0896A65C:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-16128));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (2277u << 16u);
      if (branch_taken) {
          goto L_0896A6B8;
      }
      goto L_0896A67C;
    }
L_0896A67C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-16128));
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[9] = (ctx.gpr[9] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[17] >> 8u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0896A6B8;
      }
      goto L_0896A6B4;
    }
L_0896A6B4:
    ctx.gpr[4] = (0u | 1u);
    goto L_0896A6B8;
L_0896A6B8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A65C;
      }
      goto L_0896A6CC;
    }
L_0896A6CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896A778;
      }
      goto L_0896A6D4;
    }
L_0896A6D4:
    ctx.gpr[5] = (ctx.gpr[17] >> 24u);
    ctx.gpr[6] = (ctx.gpr[17] >> 16u);
    ctx.gpr[7] = (ctx.gpr[17] >> 8u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[31] = (0x0896A6FCu);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896A6FCu) goto L_0896A6FC;
    return;
L_0896A6FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6492), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6492));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-28236)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[9] << 3u);
    ctx.gpr[9] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-16128));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[10] = (ctx.gpr[4] + ctx.gpr[9]);
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6492)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-28236)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-28236), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0896A778;
L_0896A778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A840;
      }
      goto L_0896A780;
    }
L_0896A780:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A7BC;
      }
      goto L_0896A790;
    }
L_0896A790:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
      if (branch_taken) {
          goto L_0896A808;
      }
      goto L_0896A7B8;
    }
L_0896A7B8:
    ctx.gpr[4] = (ctx.gpr[16] << 6u);
    goto L_0896A7BC;
L_0896A7BC:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[6] = (ctx.gpr[17] >> 24u);
    ctx.gpr[7] = (ctx.gpr[17] >> 16u);
    ctx.gpr[8] = (ctx.gpr[17] >> 8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x0896A800u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08968850;
L_0896A800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896A840;
      }
      goto L_0896A808;
    }
L_0896A808:
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(64))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0896A840u);
    ctx.gpr[8] = (0u | 255u);
    goto L_08968850;
L_0896A840:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896A860:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0896A998;
      }
      goto L_0896A8AC;
    }
L_0896A8AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896A8FC;
      }
      goto L_0896A8BC;
    }
L_0896A8BC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896A8D8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896A8D8u) goto L_0896A8D8;
    return;
L_0896A8D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896A938;
      }
      goto L_0896A8FC;
    }
L_0896A8FC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[31] = (0x0896A918u);
    ctx.gpr[7] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896A918u) goto L_0896A918;
    return;
L_0896A918:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896A938;
L_0896A938:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-28740));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0896A980u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0896A980u) goto L_0896A980;
    return;
L_0896A980:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0896A990u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x0896A990u) goto L_0896A990;
    return;
L_0896A990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD9C;
      }
      goto L_0896A998;
    }
L_0896A998:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] << 24u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (ctx.gpr[18] | 255u);
      if (branch_taken) {
          goto L_0896AA1C;
      }
      goto L_0896A9F4;
    }
L_0896A9F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6500));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (18510u << 16u);
      if (branch_taken) {
          goto L_0896AA1C;
      }
      goto L_0896AA08;
    }
L_0896AA08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 32767u);
      if (branch_taken) {
          goto L_0896AD94;
      }
      goto L_0896AA14;
    }
L_0896AA14:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896AD94;
      }
      goto L_0896AA1C;
    }
L_0896AA1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896AA50;
      }
      goto L_0896AA2C;
    }
L_0896AA2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6500)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (65352u << 16u);
      if (branch_taken) {
          goto L_0896AA50;
      }
      goto L_0896AA38;
    }
L_0896AA38:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19967));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (32512u << 16u);
      if (branch_taken) {
          goto L_0896AD94;
      }
      goto L_0896AA44;
    }
L_0896AA44:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896AD94;
      }
      goto L_0896AA50;
    }
L_0896AA50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896AA70;
      }
      goto L_0896AA60;
    }
L_0896AA60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6500));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AD94;
      }
      goto L_0896AA70;
    }
L_0896AA70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0896AAA8;
      }
      goto L_0896AA80;
    }
L_0896AA80:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6500));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (24480u << 16u);
      if (branch_taken) {
          goto L_0896AAA8;
      }
      goto L_0896AA90;
    }
L_0896AA90:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(27391));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (127u << 16u);
      if (branch_taken) {
          goto L_0896AD94;
      }
      goto L_0896AA9C;
    }
L_0896AA9C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896AD94;
      }
      goto L_0896AAA8;
    }
L_0896AAA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28200)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(601) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB08;
      }
      goto L_0896AAC8;
    }
L_0896AAC8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-28200), ctx.gpr[5]);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-28196)));
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896AAF8;
      }
      goto L_0896AAEC;
    }
L_0896AAEC:
    ctx.gpr[4] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28196), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0896AB08;
      }
      goto L_0896AAF8;
    }
L_0896AAF8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28196)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-28196), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0896AB08;
L_0896AB08:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-28196)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0896AB28;
      }
      goto L_0896AB18;
    }
L_0896AB18:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
      if (branch_taken) {
          goto L_0896ABF8;
      }
      goto L_0896AB20;
    }
L_0896AB20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_0896AD9C;
      }
      goto L_0896AB28;
    }
L_0896AB28:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0896ACC4;
      }
      goto L_0896AB34;
    }
L_0896AB34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB20;
      }
      goto L_0896AB3C;
    }
L_0896AB3C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x0896AB78u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0896AB78u) goto L_0896AB78;
    return;
L_0896AB78:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0896AB98u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896AB98u) goto L_0896AB98;
    return;
L_0896AB98:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896ABA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0896ABA8u) goto L_0896ABA8;
    return;
L_0896ABA8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(5));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(11));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(5));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(11));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[31] = (0x0896ABE0u);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0896ABE0u) goto L_0896ABE0;
    return;
L_0896ABE0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0896ABF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0896ABF0u) goto L_0896ABF0;
    return;
L_0896ABF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB20;
      }
      goto L_0896ABF8;
    }
L_0896ABF8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(13));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6484)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x0896AC4Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896AC4Cu) goto L_0896AC4C;
    return;
L_0896AC4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0896AC74u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x0896AC74u) goto L_0896AC74;
    return;
L_0896AC74:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0896ACBCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x0896ACBCu) goto L_0896ACBC;
    return;
L_0896ACBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB20;
      }
      goto L_0896ACC4;
    }
L_0896ACC4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(14));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(3));
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6484)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[31] = (0x0896AD1Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0896AD1Cu) goto L_0896AD1C;
    return;
L_0896AD1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0896AD44u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x0896AD44u) goto L_0896AD44;
    return;
L_0896AD44:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(12));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.fpr[17] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[17])));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0896AD8Cu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 963u, 0x08AD3FB4u>(ctx, &aot_mem) && ctx.pc == 0x0896AD8Cu) goto L_0896AD8C;
    return;
L_0896AD8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AB20;
      }
      goto L_0896AD94;
    }
L_0896AD94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 42u, 0x0896C1BCu>(ctx, &aot_mem); return;
      }
      goto L_0896AD9C;
    }
L_0896AD9C:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896ADB0;
    }
L_0896ADB0:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896ADCC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AE0C;
      }
      goto L_0896ADDC;
    }
L_0896ADDC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896ADE8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896ADE8u) goto L_0896ADE8;
    return;
L_0896ADE8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE00;
      }
      goto L_0896ADF4;
    }
L_0896ADF4:
    ctx.gpr[31] = (0x0896ADFCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896ADFCu) goto L_0896ADFC;
    return;
L_0896ADFC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AE00;
L_0896AE00:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AE0C;
L_0896AE0C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896AE1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896AE1Cu) goto L_0896AE1C;
    return;
L_0896AE1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896AE24;
    }
L_0896AE24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AE64;
      }
      goto L_0896AE34;
    }
L_0896AE34:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AE40u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896AE40u) goto L_0896AE40;
    return;
L_0896AE40:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AE58;
      }
      goto L_0896AE4C;
    }
L_0896AE4C:
    ctx.gpr[31] = (0x0896AE54u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896AE54u) goto L_0896AE54;
    return;
L_0896AE54:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AE58;
L_0896AE58:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AE64;
L_0896AE64:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896AE74u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896AE74u) goto L_0896AE74;
    return;
L_0896AE74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896AE7C;
    }
L_0896AE7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AEBC;
      }
      goto L_0896AE8C;
    }
L_0896AE8C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AE98u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896AE98u) goto L_0896AE98;
    return;
L_0896AE98:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AEB0;
      }
      goto L_0896AEA4;
    }
L_0896AEA4:
    ctx.gpr[31] = (0x0896AEACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896AEACu) goto L_0896AEAC;
    return;
L_0896AEAC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AEB0;
L_0896AEB0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AEBC;
L_0896AEBC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896AECCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896AECCu) goto L_0896AECC;
    return;
L_0896AECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896AED4;
    }
L_0896AED4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AF14;
      }
      goto L_0896AEE4;
    }
L_0896AEE4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AEF0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896AEF0u) goto L_0896AEF0;
    return;
L_0896AEF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF08;
      }
      goto L_0896AEFC;
    }
L_0896AEFC:
    ctx.gpr[31] = (0x0896AF04u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896AF04u) goto L_0896AF04;
    return;
L_0896AF04:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AF08;
L_0896AF08:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AF14;
L_0896AF14:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896AF24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896AF24u) goto L_0896AF24;
    return;
L_0896AF24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896AF2C;
    }
L_0896AF2C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AF6C;
      }
      goto L_0896AF3C;
    }
L_0896AF3C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AF48u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896AF48u) goto L_0896AF48;
    return;
L_0896AF48:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AF60;
      }
      goto L_0896AF54;
    }
L_0896AF54:
    ctx.gpr[31] = (0x0896AF5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896AF5Cu) goto L_0896AF5C;
    return;
L_0896AF5C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AF60;
L_0896AF60:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AF6C;
L_0896AF6C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896AF7Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896AF7Cu) goto L_0896AF7C;
    return;
L_0896AF7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896AF84;
    }
L_0896AF84:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896AFC4;
      }
      goto L_0896AF94;
    }
L_0896AF94:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AFA0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896AFA0u) goto L_0896AFA0;
    return;
L_0896AFA0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896AFB8;
      }
      goto L_0896AFAC;
    }
L_0896AFAC:
    ctx.gpr[31] = (0x0896AFB4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896AFB4u) goto L_0896AFB4;
    return;
L_0896AFB4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896AFB8;
L_0896AFB8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896AFC4;
L_0896AFC4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896AFD4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896AFD4u) goto L_0896AFD4;
    return;
L_0896AFD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896AFDC;
    }
L_0896AFDC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B01C;
      }
      goto L_0896AFEC;
    }
L_0896AFEC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896AFF8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896AFF8u) goto L_0896AFF8;
    return;
L_0896AFF8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B010;
      }
      goto L_0896B004;
    }
L_0896B004:
    ctx.gpr[31] = (0x0896B00Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B00Cu) goto L_0896B00C;
    return;
L_0896B00C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B010;
L_0896B010:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B01C;
L_0896B01C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B02Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B02Cu) goto L_0896B02C;
    return;
L_0896B02C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B034;
    }
L_0896B034:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B074;
      }
      goto L_0896B044;
    }
L_0896B044:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B050u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B050u) goto L_0896B050;
    return;
L_0896B050:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B068;
      }
      goto L_0896B05C;
    }
L_0896B05C:
    ctx.gpr[31] = (0x0896B064u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B064u) goto L_0896B064;
    return;
L_0896B064:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B068;
L_0896B068:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B074;
L_0896B074:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B084u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B084u) goto L_0896B084;
    return;
L_0896B084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B08C;
    }
L_0896B08C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B0CC;
      }
      goto L_0896B09C;
    }
L_0896B09C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B0A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B0A8u) goto L_0896B0A8;
    return;
L_0896B0A8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B0C0;
      }
      goto L_0896B0B4;
    }
L_0896B0B4:
    ctx.gpr[31] = (0x0896B0BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B0BCu) goto L_0896B0BC;
    return;
L_0896B0BC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B0C0;
L_0896B0C0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B0CC;
L_0896B0CC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B0DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27952));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B0DCu) goto L_0896B0DC;
    return;
L_0896B0DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B0E4;
    }
L_0896B0E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B124;
      }
      goto L_0896B0F4;
    }
L_0896B0F4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B100u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B100u) goto L_0896B100;
    return;
L_0896B100:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B118;
      }
      goto L_0896B10C;
    }
L_0896B10C:
    ctx.gpr[31] = (0x0896B114u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B114u) goto L_0896B114;
    return;
L_0896B114:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B118;
L_0896B118:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B124;
L_0896B124:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B134u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27944));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B134u) goto L_0896B134;
    return;
L_0896B134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B13C;
    }
L_0896B13C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B17C;
      }
      goto L_0896B14C;
    }
L_0896B14C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B158u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B158u) goto L_0896B158;
    return;
L_0896B158:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B170;
      }
      goto L_0896B164;
    }
L_0896B164:
    ctx.gpr[31] = (0x0896B16Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B16Cu) goto L_0896B16C;
    return;
L_0896B16C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B170;
L_0896B170:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B17C;
L_0896B17C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B18Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27936));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B18Cu) goto L_0896B18C;
    return;
L_0896B18C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B194;
    }
L_0896B194:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B1D4;
      }
      goto L_0896B1A4;
    }
L_0896B1A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B1B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B1B0u) goto L_0896B1B0;
    return;
L_0896B1B0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B1C8;
      }
      goto L_0896B1BC;
    }
L_0896B1BC:
    ctx.gpr[31] = (0x0896B1C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B1C4u) goto L_0896B1C4;
    return;
L_0896B1C4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B1C8;
L_0896B1C8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B1D4;
L_0896B1D4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B1E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27936));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B1E4u) goto L_0896B1E4;
    return;
L_0896B1E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B1EC;
    }
L_0896B1EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B22C;
      }
      goto L_0896B1FC;
    }
L_0896B1FC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B208u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B208u) goto L_0896B208;
    return;
L_0896B208:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B220;
      }
      goto L_0896B214;
    }
L_0896B214:
    ctx.gpr[31] = (0x0896B21Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B21Cu) goto L_0896B21C;
    return;
L_0896B21C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B220;
L_0896B220:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B22C;
L_0896B22C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B23Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27928));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B23Cu) goto L_0896B23C;
    return;
L_0896B23C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B244;
    }
L_0896B244:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B284;
      }
      goto L_0896B254;
    }
L_0896B254:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B260u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B260u) goto L_0896B260;
    return;
L_0896B260:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B278;
      }
      goto L_0896B26C;
    }
L_0896B26C:
    ctx.gpr[31] = (0x0896B274u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B274u) goto L_0896B274;
    return;
L_0896B274:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B278;
L_0896B278:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B284;
L_0896B284:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B294u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27920));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B294u) goto L_0896B294;
    return;
L_0896B294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B29C;
    }
L_0896B29C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B2DC;
      }
      goto L_0896B2AC;
    }
L_0896B2AC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B2B8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B2B8u) goto L_0896B2B8;
    return;
L_0896B2B8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B2D0;
      }
      goto L_0896B2C4;
    }
L_0896B2C4:
    ctx.gpr[31] = (0x0896B2CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B2CCu) goto L_0896B2CC;
    return;
L_0896B2CC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B2D0;
L_0896B2D0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B2DC;
L_0896B2DC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B2ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27912));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B2ECu) goto L_0896B2EC;
    return;
L_0896B2EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B2F4;
    }
L_0896B2F4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B334;
      }
      goto L_0896B304;
    }
L_0896B304:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B310u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B310u) goto L_0896B310;
    return;
L_0896B310:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B328;
      }
      goto L_0896B31C;
    }
L_0896B31C:
    ctx.gpr[31] = (0x0896B324u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B324u) goto L_0896B324;
    return;
L_0896B324:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B328;
L_0896B328:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B334;
L_0896B334:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B344u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27904));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B344u) goto L_0896B344;
    return;
L_0896B344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B34C;
    }
L_0896B34C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B38C;
      }
      goto L_0896B35C;
    }
L_0896B35C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B368u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B368u) goto L_0896B368;
    return;
L_0896B368:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B380;
      }
      goto L_0896B374;
    }
L_0896B374:
    ctx.gpr[31] = (0x0896B37Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B37Cu) goto L_0896B37C;
    return;
L_0896B37C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B380;
L_0896B380:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B38C;
L_0896B38C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B39Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27896));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B39Cu) goto L_0896B39C;
    return;
L_0896B39C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B3A4;
    }
L_0896B3A4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B3E4;
      }
      goto L_0896B3B4;
    }
L_0896B3B4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B3C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B3C0u) goto L_0896B3C0;
    return;
L_0896B3C0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B3D8;
      }
      goto L_0896B3CC;
    }
L_0896B3CC:
    ctx.gpr[31] = (0x0896B3D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B3D4u) goto L_0896B3D4;
    return;
L_0896B3D4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B3D8;
L_0896B3D8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B3E4;
L_0896B3E4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B3F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27888));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B3F4u) goto L_0896B3F4;
    return;
L_0896B3F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B3FC;
    }
L_0896B3FC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B43C;
      }
      goto L_0896B40C;
    }
L_0896B40C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B418u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B418u) goto L_0896B418;
    return;
L_0896B418:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B430;
      }
      goto L_0896B424;
    }
L_0896B424:
    ctx.gpr[31] = (0x0896B42Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B42Cu) goto L_0896B42C;
    return;
L_0896B42C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B430;
L_0896B430:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B43C;
L_0896B43C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B44Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27880));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B44Cu) goto L_0896B44C;
    return;
L_0896B44C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B454;
    }
L_0896B454:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B494;
      }
      goto L_0896B464;
    }
L_0896B464:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B470u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B470u) goto L_0896B470;
    return;
L_0896B470:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B488;
      }
      goto L_0896B47C;
    }
L_0896B47C:
    ctx.gpr[31] = (0x0896B484u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B484u) goto L_0896B484;
    return;
L_0896B484:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B488;
L_0896B488:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B494;
L_0896B494:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B4A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27872));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B4A4u) goto L_0896B4A4;
    return;
L_0896B4A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B4AC;
    }
L_0896B4AC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B4EC;
      }
      goto L_0896B4BC;
    }
L_0896B4BC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B4C8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B4C8u) goto L_0896B4C8;
    return;
L_0896B4C8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B4E0;
      }
      goto L_0896B4D4;
    }
L_0896B4D4:
    ctx.gpr[31] = (0x0896B4DCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B4DCu) goto L_0896B4DC;
    return;
L_0896B4DC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B4E0;
L_0896B4E0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B4EC;
L_0896B4EC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B4FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27864));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B4FCu) goto L_0896B4FC;
    return;
L_0896B4FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B504;
    }
L_0896B504:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B544;
      }
      goto L_0896B514;
    }
L_0896B514:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B520u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B520u) goto L_0896B520;
    return;
L_0896B520:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B538;
      }
      goto L_0896B52C;
    }
L_0896B52C:
    ctx.gpr[31] = (0x0896B534u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B534u) goto L_0896B534;
    return;
L_0896B534:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B538;
L_0896B538:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B544;
L_0896B544:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B554u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27856));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B554u) goto L_0896B554;
    return;
L_0896B554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B55C;
    }
L_0896B55C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B59C;
      }
      goto L_0896B56C;
    }
L_0896B56C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B578u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B578u) goto L_0896B578;
    return;
L_0896B578:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B590;
      }
      goto L_0896B584;
    }
L_0896B584:
    ctx.gpr[31] = (0x0896B58Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B58Cu) goto L_0896B58C;
    return;
L_0896B58C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B590;
L_0896B590:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B59C;
L_0896B59C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B5ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27848));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B5ACu) goto L_0896B5AC;
    return;
L_0896B5AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B5B4;
    }
L_0896B5B4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B5F4;
      }
      goto L_0896B5C4;
    }
L_0896B5C4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B5D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B5D0u) goto L_0896B5D0;
    return;
L_0896B5D0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B5E8;
      }
      goto L_0896B5DC;
    }
L_0896B5DC:
    ctx.gpr[31] = (0x0896B5E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B5E4u) goto L_0896B5E4;
    return;
L_0896B5E4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B5E8;
L_0896B5E8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B5F4;
L_0896B5F4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B604u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27840));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B604u) goto L_0896B604;
    return;
L_0896B604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B60C;
    }
L_0896B60C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B64C;
      }
      goto L_0896B61C;
    }
L_0896B61C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B628u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B628u) goto L_0896B628;
    return;
L_0896B628:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B640;
      }
      goto L_0896B634;
    }
L_0896B634:
    ctx.gpr[31] = (0x0896B63Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B63Cu) goto L_0896B63C;
    return;
L_0896B63C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B640;
L_0896B640:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B64C;
L_0896B64C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B65Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27832));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B65Cu) goto L_0896B65C;
    return;
L_0896B65C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B664;
    }
L_0896B664:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B6A4;
      }
      goto L_0896B674;
    }
L_0896B674:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B680u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B680u) goto L_0896B680;
    return;
L_0896B680:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B698;
      }
      goto L_0896B68C;
    }
L_0896B68C:
    ctx.gpr[31] = (0x0896B694u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B694u) goto L_0896B694;
    return;
L_0896B694:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B698;
L_0896B698:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B6A4;
L_0896B6A4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B6B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27824));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B6B4u) goto L_0896B6B4;
    return;
L_0896B6B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B6BC;
    }
L_0896B6BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B6FC;
      }
      goto L_0896B6CC;
    }
L_0896B6CC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B6D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B6D8u) goto L_0896B6D8;
    return;
L_0896B6D8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B6F0;
      }
      goto L_0896B6E4;
    }
L_0896B6E4:
    ctx.gpr[31] = (0x0896B6ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B6ECu) goto L_0896B6EC;
    return;
L_0896B6EC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B6F0;
L_0896B6F0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B6FC;
L_0896B6FC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B70Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27816));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B70Cu) goto L_0896B70C;
    return;
L_0896B70C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B714;
    }
L_0896B714:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B754;
      }
      goto L_0896B724;
    }
L_0896B724:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B730u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B730u) goto L_0896B730;
    return;
L_0896B730:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B748;
      }
      goto L_0896B73C;
    }
L_0896B73C:
    ctx.gpr[31] = (0x0896B744u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B744u) goto L_0896B744;
    return;
L_0896B744:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B748;
L_0896B748:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B754;
L_0896B754:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B764u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27808));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B764u) goto L_0896B764;
    return;
L_0896B764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B76C;
    }
L_0896B76C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B7AC;
      }
      goto L_0896B77C;
    }
L_0896B77C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B788u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B788u) goto L_0896B788;
    return;
L_0896B788:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7A0;
      }
      goto L_0896B794;
    }
L_0896B794:
    ctx.gpr[31] = (0x0896B79Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B79Cu) goto L_0896B79C;
    return;
L_0896B79C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B7A0;
L_0896B7A0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B7AC;
L_0896B7AC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B7BCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27800));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B7BCu) goto L_0896B7BC;
    return;
L_0896B7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B7C4;
    }
L_0896B7C4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B804;
      }
      goto L_0896B7D4;
    }
L_0896B7D4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B7E0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B7E0u) goto L_0896B7E0;
    return;
L_0896B7E0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B7F8;
      }
      goto L_0896B7EC;
    }
L_0896B7EC:
    ctx.gpr[31] = (0x0896B7F4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B7F4u) goto L_0896B7F4;
    return;
L_0896B7F4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B7F8;
L_0896B7F8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B804;
L_0896B804:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B814u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27792));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B814u) goto L_0896B814;
    return;
L_0896B814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B81C;
    }
L_0896B81C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B85C;
      }
      goto L_0896B82C;
    }
L_0896B82C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B838u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B838u) goto L_0896B838;
    return;
L_0896B838:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B850;
      }
      goto L_0896B844;
    }
L_0896B844:
    ctx.gpr[31] = (0x0896B84Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B84Cu) goto L_0896B84C;
    return;
L_0896B84C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B850;
L_0896B850:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B85C;
L_0896B85C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B86Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27784));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B86Cu) goto L_0896B86C;
    return;
L_0896B86C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B874;
    }
L_0896B874:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B8B4;
      }
      goto L_0896B884;
    }
L_0896B884:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B890u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B890u) goto L_0896B890;
    return;
L_0896B890:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B8A8;
      }
      goto L_0896B89C;
    }
L_0896B89C:
    ctx.gpr[31] = (0x0896B8A4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B8A4u) goto L_0896B8A4;
    return;
L_0896B8A4:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B8A8;
L_0896B8A8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B8B4;
L_0896B8B4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B8C4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27776));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B8C4u) goto L_0896B8C4;
    return;
L_0896B8C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B8CC;
    }
L_0896B8CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B90C;
      }
      goto L_0896B8DC;
    }
L_0896B8DC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B8E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B8E8u) goto L_0896B8E8;
    return;
L_0896B8E8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B900;
      }
      goto L_0896B8F4;
    }
L_0896B8F4:
    ctx.gpr[31] = (0x0896B8FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B8FCu) goto L_0896B8FC;
    return;
L_0896B8FC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B900;
L_0896B900:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B90C;
L_0896B90C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B91Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27768));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B91Cu) goto L_0896B91C;
    return;
L_0896B91C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B924;
    }
L_0896B924:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B964;
      }
      goto L_0896B934;
    }
L_0896B934:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896B940u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B940u) goto L_0896B940;
    return;
L_0896B940:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B958;
      }
      goto L_0896B94C;
    }
L_0896B94C:
    ctx.gpr[31] = (0x0896B954u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B954u) goto L_0896B954;
    return;
L_0896B954:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896B958;
L_0896B958:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B964;
L_0896B964:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B974u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27760));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B974u) goto L_0896B974;
    return;
L_0896B974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896B97C;
    }
L_0896B97C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896B9BC;
      }
      goto L_0896B98C;
    }
L_0896B98C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0896B998u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896B998u) goto L_0896B998;
    return;
L_0896B998:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896B9B0;
      }
      goto L_0896B9A4;
    }
L_0896B9A4:
    ctx.gpr[31] = (0x0896B9ACu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896B9ACu) goto L_0896B9AC;
    return;
L_0896B9AC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0896B9B0;
L_0896B9B0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896B9BC;
L_0896B9BC:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896B9CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27752));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896B9CCu) goto L_0896B9CC;
    return;
L_0896B9CC:
    ctx.gpr[5] = (18510u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896B9E8;
      }
      goto L_0896B9DC;
    }
L_0896B9DC:
    ctx.gpr[5] = (0u | 32767u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896BA4C;
      }
      goto L_0896B9E8;
    }
L_0896B9E8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BA28;
      }
      goto L_0896B9F8;
    }
L_0896B9F8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BA04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BA04u) goto L_0896BA04;
    return;
L_0896BA04:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BA1C;
      }
      goto L_0896BA10;
    }
L_0896BA10:
    ctx.gpr[31] = (0x0896BA18u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BA18u) goto L_0896BA18;
    return;
L_0896BA18:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BA1C;
L_0896BA1C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BA28;
L_0896BA28:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BA38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27744));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BA38u) goto L_0896BA38;
    return;
L_0896BA38:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6500));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0896BA4C;
L_0896BA4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BA54;
    }
L_0896BA54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BA94;
      }
      goto L_0896BA64;
    }
L_0896BA64:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0896BA70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BA70u) goto L_0896BA70;
    return;
L_0896BA70:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BA88;
      }
      goto L_0896BA7C;
    }
L_0896BA7C:
    ctx.gpr[31] = (0x0896BA84u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BA84u) goto L_0896BA84;
    return;
L_0896BA84:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0896BA88;
L_0896BA88:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BA94;
L_0896BA94:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BAA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27744));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BAA4u) goto L_0896BAA4;
    return;
L_0896BAA4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6500));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (65352u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19967));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0896BAD4;
      }
      goto L_0896BAC4;
    }
L_0896BAC4:
    ctx.gpr[5] = (32512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896BB38;
      }
      goto L_0896BAD4;
    }
L_0896BAD4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BB14;
      }
      goto L_0896BAE4;
    }
L_0896BAE4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BAF0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BAF0u) goto L_0896BAF0;
    return;
L_0896BAF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BB08;
      }
      goto L_0896BAFC;
    }
L_0896BAFC:
    ctx.gpr[31] = (0x0896BB04u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BB04u) goto L_0896BB04;
    return;
L_0896BB04:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BB08;
L_0896BB08:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BB14;
L_0896BB14:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BB24u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27736));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BB24u) goto L_0896BB24;
    return;
L_0896BB24:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-6500), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0896BBB8;
      }
      goto L_0896BB38;
    }
L_0896BB38:
    ctx.gpr[5] = (24480u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(27391));
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[5] = (127u << 16u);
      if (branch_taken) {
          goto L_0896BB54;
      }
      goto L_0896BB48;
    }
L_0896BB48:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896BBB8;
      }
      goto L_0896BB54;
    }
L_0896BB54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BB94;
      }
      goto L_0896BB64;
    }
L_0896BB64:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BB70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BB70u) goto L_0896BB70;
    return;
L_0896BB70:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BB88;
      }
      goto L_0896BB7C;
    }
L_0896BB7C:
    ctx.gpr[31] = (0x0896BB84u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BB84u) goto L_0896BB84;
    return;
L_0896BB84:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BB88;
L_0896BB88:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BB94;
L_0896BB94:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BBA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27728));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BBA4u) goto L_0896BBA4;
    return;
L_0896BBA4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-6500));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0896BBB8;
L_0896BBB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BBC0;
    }
L_0896BBC0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BC00;
      }
      goto L_0896BBD0;
    }
L_0896BBD0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BBDCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BBDCu) goto L_0896BBDC;
    return;
L_0896BBDC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BBF4;
      }
      goto L_0896BBE8;
    }
L_0896BBE8:
    ctx.gpr[31] = (0x0896BBF0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BBF0u) goto L_0896BBF0;
    return;
L_0896BBF0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BBF4;
L_0896BBF4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BC00;
L_0896BC00:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BC10u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27720));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BC10u) goto L_0896BC10;
    return;
L_0896BC10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BC18;
    }
L_0896BC18:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BC58;
      }
      goto L_0896BC28;
    }
L_0896BC28:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BC34u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BC34u) goto L_0896BC34;
    return;
L_0896BC34:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BC4C;
      }
      goto L_0896BC40;
    }
L_0896BC40:
    ctx.gpr[31] = (0x0896BC48u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BC48u) goto L_0896BC48;
    return;
L_0896BC48:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BC4C;
L_0896BC4C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BC58;
L_0896BC58:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BC68u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27712));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BC68u) goto L_0896BC68;
    return;
L_0896BC68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BC70;
    }
L_0896BC70:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BCB0;
      }
      goto L_0896BC80;
    }
L_0896BC80:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BC8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BC8Cu) goto L_0896BC8C;
    return;
L_0896BC8C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BCA4;
      }
      goto L_0896BC98;
    }
L_0896BC98:
    ctx.gpr[31] = (0x0896BCA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BCA0u) goto L_0896BCA0;
    return;
L_0896BCA0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BCA4;
L_0896BCA4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BCB0;
L_0896BCB0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BCC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27704));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BCC0u) goto L_0896BCC0;
    return;
L_0896BCC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BCC8;
    }
L_0896BCC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BD08;
      }
      goto L_0896BCD8;
    }
L_0896BCD8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BCE4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BCE4u) goto L_0896BCE4;
    return;
L_0896BCE4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BCFC;
      }
      goto L_0896BCF0;
    }
L_0896BCF0:
    ctx.gpr[31] = (0x0896BCF8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BCF8u) goto L_0896BCF8;
    return;
L_0896BCF8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BCFC;
L_0896BCFC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BD08;
L_0896BD08:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BD18u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27696));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BD18u) goto L_0896BD18;
    return;
L_0896BD18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BD20;
    }
L_0896BD20:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BD60;
      }
      goto L_0896BD30;
    }
L_0896BD30:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BD3Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BD3Cu) goto L_0896BD3C;
    return;
L_0896BD3C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BD54;
      }
      goto L_0896BD48;
    }
L_0896BD48:
    ctx.gpr[31] = (0x0896BD50u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BD50u) goto L_0896BD50;
    return;
L_0896BD50:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BD54;
L_0896BD54:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BD60;
L_0896BD60:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BD70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27688));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BD70u) goto L_0896BD70;
    return;
L_0896BD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BD78;
    }
L_0896BD78:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BDB8;
      }
      goto L_0896BD88;
    }
L_0896BD88:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BD94u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BD94u) goto L_0896BD94;
    return;
L_0896BD94:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BDAC;
      }
      goto L_0896BDA0;
    }
L_0896BDA0:
    ctx.gpr[31] = (0x0896BDA8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BDA8u) goto L_0896BDA8;
    return;
L_0896BDA8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BDAC;
L_0896BDAC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BDB8;
L_0896BDB8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BDC8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27680));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BDC8u) goto L_0896BDC8;
    return;
L_0896BDC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BDD0;
    }
L_0896BDD0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BE10;
      }
      goto L_0896BDE0;
    }
L_0896BDE0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BDECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BDECu) goto L_0896BDEC;
    return;
L_0896BDEC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BE04;
      }
      goto L_0896BDF8;
    }
L_0896BDF8:
    ctx.gpr[31] = (0x0896BE00u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BE00u) goto L_0896BE00;
    return;
L_0896BE00:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BE04;
L_0896BE04:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BE10;
L_0896BE10:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BE20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27672));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BE20u) goto L_0896BE20;
    return;
L_0896BE20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BE28;
    }
L_0896BE28:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BE68;
      }
      goto L_0896BE38;
    }
L_0896BE38:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BE44u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BE44u) goto L_0896BE44;
    return;
L_0896BE44:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BE5C;
      }
      goto L_0896BE50;
    }
L_0896BE50:
    ctx.gpr[31] = (0x0896BE58u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BE58u) goto L_0896BE58;
    return;
L_0896BE58:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BE5C;
L_0896BE5C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BE68;
L_0896BE68:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BE78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27664));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BE78u) goto L_0896BE78;
    return;
L_0896BE78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BE80;
    }
L_0896BE80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BEC0;
      }
      goto L_0896BE90;
    }
L_0896BE90:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BE9Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BE9Cu) goto L_0896BE9C;
    return;
L_0896BE9C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BEB4;
      }
      goto L_0896BEA8;
    }
L_0896BEA8:
    ctx.gpr[31] = (0x0896BEB0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BEB0u) goto L_0896BEB0;
    return;
L_0896BEB0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BEB4;
L_0896BEB4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BEC0;
L_0896BEC0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BED0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27656));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BED0u) goto L_0896BED0;
    return;
L_0896BED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BED8;
    }
L_0896BED8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BF18;
      }
      goto L_0896BEE8;
    }
L_0896BEE8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BEF4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BEF4u) goto L_0896BEF4;
    return;
L_0896BEF4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF0C;
      }
      goto L_0896BF00;
    }
L_0896BF00:
    ctx.gpr[31] = (0x0896BF08u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BF08u) goto L_0896BF08;
    return;
L_0896BF08:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BF0C;
L_0896BF0C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BF18;
L_0896BF18:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BF28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27648));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BF28u) goto L_0896BF28;
    return;
L_0896BF28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BF30;
    }
L_0896BF30:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BF70;
      }
      goto L_0896BF40;
    }
L_0896BF40:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BF4Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BF4Cu) goto L_0896BF4C;
    return;
L_0896BF4C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BF64;
      }
      goto L_0896BF58;
    }
L_0896BF58:
    ctx.gpr[31] = (0x0896BF60u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BF60u) goto L_0896BF60;
    return;
L_0896BF60:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BF64;
L_0896BF64:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BF70;
L_0896BF70:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BF80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27640));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BF80u) goto L_0896BF80;
    return;
L_0896BF80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BF88;
    }
L_0896BF88:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0896BFC8;
      }
      goto L_0896BF98;
    }
L_0896BF98:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BFA4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BFA4u) goto L_0896BFA4;
    return;
L_0896BFA4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896BFBC;
      }
      goto L_0896BFB0;
    }
L_0896BFB0:
    ctx.gpr[31] = (0x0896BFB8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0896BFB8u) goto L_0896BFB8;
    return;
L_0896BFB8:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0896BFBC;
L_0896BFBC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0896BFC8;
L_0896BFC8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0896BFD8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27632));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0896BFD8u) goto L_0896BFD8;
    return;
L_0896BFD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 39u, 0x0896C194u>(ctx, &aot_mem); return;
      }
      goto L_0896BFE0;
    }
L_0896BFE0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 5u, 0x0896C020u>(ctx, &aot_mem); return;
      }
      goto L_0896BFF0;
    }
L_0896BFF0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0896BFFCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0896BFFCu) goto L_0896BFFC;
    return;
L_0896BFFC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x0896C000u; return;
}

void recomp_unit_0089(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0089_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_89(Runtime &runtime) {
    runtime.register_generated_unit(89u, 0x08968000u, 16384u, &recomp_unit_0089, &recomp_unit_0089_entry);
    runtime.register_function(0x08968000u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968008u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968014u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089680FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968104u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896810Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968130u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968140u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896815Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968164u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896816Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968180u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968188u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089681E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968210u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896821Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968228u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968234u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968244u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968254u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968270u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968284u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968294u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896829Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089682FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968308u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968328u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896833Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896834Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896835Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968364u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968380u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896838Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896839Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089683F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968400u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968418u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896841Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968428u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968430u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896844Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968458u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968468u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968478u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968480u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896849Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089684F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968500u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968508u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968518u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968524u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968544u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896854Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896855Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968568u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968588u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968590u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089685FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968604u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968620u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896862Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968640u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968650u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896866Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968678u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089686F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089687FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968828u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968850u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089688ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968900u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968910u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968924u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968928u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896893Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968944u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896895Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968984u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089689FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968A80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968ADCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968AF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968B50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968BFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968C80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968CE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968CF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968D9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968DFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968E88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968EF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968F8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08968FFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969008u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896901Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969054u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089690FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969108u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969114u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969120u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896912Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896919Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089691DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969248u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969274u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969280u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969290u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089692E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969338u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969340u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969348u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969350u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969358u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969360u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969378u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969380u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089693FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969408u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969414u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969420u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896942Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969438u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969444u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969450u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896945Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969468u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896947Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969488u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969498u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089694FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969548u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969574u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969588u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969594u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896959Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089695F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969604u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969610u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969618u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969624u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969640u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896964Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969650u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969664u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089696E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969708u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969714u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969734u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969750u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896976Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969774u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896977Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896979Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089697A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089697A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089697C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089697E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969834u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969850u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969880u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969888u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969890u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089698D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089698ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089698F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969900u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896990Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896991Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969968u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969980u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896999Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x089699F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969A94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969AD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969B50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969BF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969C98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969CF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969D9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969DF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969E90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969ECCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969EE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969F90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x08969FECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A01Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A068u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A074u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A07Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A084u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A0F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A100u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A104u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A10Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A134u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A13Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A16Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A178u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A198u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A1FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A204u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A218u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A220u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A248u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A268u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A298u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A2F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A31Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A348u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A36Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A370u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A398u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A3CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A400u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A430u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A450u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A478u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A49Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A4F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A508u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A52Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A540u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A550u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A574u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A590u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A5ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A638u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A64Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A65Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A67Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A6FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A778u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A780u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A790u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A7BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A800u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A808u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A840u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A860u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A8FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A918u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A938u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A980u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A990u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A998u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896A9F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AA9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AAF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AB98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ABF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AC74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ACC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AD9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADCCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896ADFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE74u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AE98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AECCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AED4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AEFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF2Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF6Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AF94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896AFF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B004u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B00Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B010u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B01Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B02Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B034u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B044u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B050u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B05Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B064u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B068u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B074u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B084u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B08Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B09Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B0F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B100u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B10Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B114u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B118u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B124u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B134u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B13Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B14Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B158u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B164u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B16Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B170u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B17Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B18Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B194u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B1FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B208u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B214u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B21Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B220u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B22Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B23Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B244u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B254u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B260u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B26Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B274u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B278u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B284u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B294u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B29Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2B8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B2F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B304u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B310u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B31Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B324u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B328u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B334u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B344u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B34Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B35Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B368u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B374u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B37Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B380u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B38Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B39Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3C0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B3FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B40Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B418u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B424u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B42Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B430u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B43Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B44Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B454u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B464u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B470u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B47Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B484u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B488u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B494u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4C8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B4FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B504u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B514u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B520u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B52Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B534u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B538u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B544u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B554u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B55Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B56Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B578u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B584u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B58Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B590u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B59Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5D0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B5F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B604u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B60Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B61Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B628u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B634u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B63Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B640u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B64Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B65Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B664u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B674u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B680u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B68Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B694u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B698u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6D8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6E4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6F0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B6FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B70Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B714u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B724u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B730u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B73Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B744u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B748u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B754u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B764u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B76Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B77Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B788u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B794u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B79Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7A0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7D4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7E0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7ECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B7F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B804u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B814u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B81Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B82Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B838u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B844u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B84Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B850u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B85Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B86Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B874u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B884u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B890u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B89Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8A8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8B4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8C4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8F4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B8FCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B900u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B90Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B91Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B924u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B934u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B940u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B94Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B954u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B958u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B964u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B974u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B97Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B98Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B998u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9A4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9ACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9B0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9BCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9CCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9DCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9E8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896B9F8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA1Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BA94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAC4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAD4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BAFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB14u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB24u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB7Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB84u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BB94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBDCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BBF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC34u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC8Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BC98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCE4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BCFCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD3Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD48u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD54u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BD94u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDA0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDACu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDD0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDECu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BDF8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE04u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE10u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE20u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE38u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE44u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE50u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE5Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE68u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE78u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE90u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BE9Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEA8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEB4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEC0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BED0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BED8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEE8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BEF4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF00u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF08u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF0Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF18u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF28u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF30u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF40u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF4Cu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF58u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF60u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF64u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF70u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF80u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF88u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BF98u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFA4u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFB0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFB8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFBCu, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFC8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFD8u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFE0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFF0u, &recomp_unit_0089, "recomp_unit_0089");
    runtime.register_function(0x0896BFFCu, &recomp_unit_0089, "recomp_unit_0089");
}
} // namespace psprecomp
