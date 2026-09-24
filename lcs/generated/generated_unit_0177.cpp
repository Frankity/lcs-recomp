#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0177[4091] = {
    1, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 9, 0, 0, 10, 0, 0,
    0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16, 0,
    0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 30, 31, 0, 0, 0, 32, 0, 0, 0,
    33, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 43, 0,
    0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 46, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 0, 0, 50, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 61,
    0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 66,
    0, 0, 67, 0, 68, 0, 69, 0, 0, 70, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 75, 0, 0, 76, 0,
    77, 0, 0, 0, 78, 0, 0, 79, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87,
    0, 88, 0, 0, 89, 90, 0, 0, 0, 91, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0,
    96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0,
    105, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0,
    0, 0, 114, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0,
    0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 131, 0, 132, 0,
    0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0,
    149, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 0, 155, 156, 0, 0, 0, 0, 0, 0, 157, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0,
    0, 0, 161, 0, 162, 163, 0, 0, 0, 0, 0, 0, 0, 164, 0, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 178,
    179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 183, 0, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 0, 186, 0, 187, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 191, 192, 0, 0, 0, 0, 193, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 0, 0, 196, 0, 197, 0, 198, 0, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 0, 0, 0, 0, 0, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 207, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0,
    0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 223, 0, 224,
    0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 234, 0, 0, 235, 0, 236,
    0, 0, 0, 237, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 0,
    248, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 254, 0, 0, 255, 0, 0, 0, 256, 0,
    0, 0, 257, 0, 0, 0, 258, 0, 259, 260, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 264, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 266,
    0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0,
    270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0,
    0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0,
    0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 289, 0, 0, 290, 0, 291, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 294, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0,
    0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 300, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 0, 311, 0, 0, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 0,
    0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 321, 0, 322, 0, 323, 0, 324, 325, 0, 326, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0,
    332, 0, 0, 0, 0, 333, 0, 334, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 0, 338, 0, 339, 0, 0, 340, 0, 341, 0, 342, 0,
    343, 0, 344, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 348, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0,
    0, 350, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 354, 355, 0, 0, 0, 0, 356, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0,
    0, 0, 363, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 366, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 370, 0, 0, 0, 0, 0, 371,
    0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 380, 0, 381, 382, 0, 0, 383, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 388, 0, 389, 0, 0, 0, 390,
    0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 395, 0, 396, 397, 0, 398, 0,
    0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 0, 0, 404, 0, 405, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0,
    414, 415, 0, 416, 0, 0, 0, 0, 417, 0, 418, 419, 0, 420, 0, 0, 0, 0, 421, 0, 422, 423, 0, 424, 0, 0, 0, 0, 425, 0, 426, 427,
    0, 428, 0, 0, 0, 0, 429, 0, 430, 431, 0, 432, 0, 0, 0, 0, 433, 0, 434, 435, 0, 436, 0, 0, 0, 0, 437, 0, 438, 439, 0, 440,
    0, 0, 0, 0, 441, 0, 442, 443, 0, 444, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0,
    0, 0, 450, 0, 0, 451, 0, 452, 0, 0, 0, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0,
    0, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 462, 463, 0, 0, 464, 465, 0, 0, 466, 0, 0, 0,
    0, 0, 467, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0,
    0, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 476, 477, 0, 0, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0,
    0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 488, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0,
    0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0,
    496, 0, 0, 0, 0, 0, 497, 0, 0, 498, 0, 0, 0, 499, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 0, 0, 505, 0, 0, 506, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0,
    0, 509, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 515, 0,
    0, 516, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 528,
    0, 529, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0,
    536, 0, 537, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 543, 0, 544, 0, 0, 545, 0,
    0, 0, 0, 0, 546, 0, 0, 547, 0, 0, 548, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 553, 0, 0, 0, 0, 554, 555, 0, 556,
    0, 0, 557, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 563, 0, 0, 564,
    0, 565, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0,
    0, 0, 572, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0,
    578, 0, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584,
    0, 585, 0, 0, 0, 586, 587, 0, 0, 588, 0, 0, 0, 589, 0, 590, 0, 0, 0, 591, 0, 592, 0, 593, 0, 0, 594, 0, 0, 595, 0, 0,
    0, 0, 0, 596, 0, 0, 0, 0, 597, 0, 598, 0, 0, 599, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602,
    0, 0, 603, 0, 604, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 612, 0, 0, 613,
    0, 0, 0, 0, 0, 0, 614, 0, 0, 0, 615, 0, 0, 616, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 0, 620, 0, 0, 621,
    0, 622, 0, 623, 0, 624, 0, 625, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 0,
    0, 630, 0, 631, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 637, 638, 0, 0, 0, 0, 0, 0, 0, 639, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 645, 0, 646, 0, 647,
    0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 652,
    0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0,
    0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 667, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670,
    0, 0, 671, 0, 672, 0, 673, 0, 674, 0, 675, 0, 0, 0, 676, 0, 0, 677, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 680, 0, 681, 0,
    682, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687,
    0, 0, 0, 0, 0, 0, 688, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 693, 0,
    694, 0, 0, 0, 695, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 706, 0, 707, 0,
    0, 0, 708, 709, 0, 0, 710, 0, 711, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0,
    0, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 721, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 726,
    0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 731, 0, 732, 0, 733, 734, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739,
    0, 0, 0, 0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0, 745, 0, 746, 747,
    0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 752, 753, 0, 0, 0, 0, 0, 0, 0, 754,
};
void recomp_unit_0177_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AC8004u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0177[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AC8004;
    case 2u: goto L_08AC800C;
    case 3u: goto L_08AC8018;
    case 4u: goto L_08AC8038;
    case 5u: goto L_08AC8040;
    case 6u: goto L_08AC8050;
    case 7u: goto L_08AC8058;
    case 8u: goto L_08AC8060;
    case 9u: goto L_08AC806C;
    case 10u: goto L_08AC8078;
    case 11u: goto L_08AC808C;
    case 12u: goto L_08AC8098;
    case 13u: goto L_08AC80C4;
    case 14u: goto L_08AC80D0;
    case 15u: goto L_08AC80F0;
    case 16u: goto L_08AC80FC;
    case 17u: goto L_08AC811C;
    case 18u: goto L_08AC8128;
    case 19u: goto L_08AC8138;
    case 20u: goto L_08AC8140;
    case 21u: goto L_08AC8184;
    case 22u: goto L_08AC81A0;
    case 23u: goto L_08AC81CC;
    case 24u: goto L_08AC81E4;
    case 25u: goto L_08AC81F4;
    case 26u: goto L_08AC821C;
    case 27u: goto L_08AC8224;
    case 28u: goto L_08AC823C;
    case 29u: goto L_08AC8240;
    case 30u: goto L_08AC8260;
    case 31u: goto L_08AC8264;
    case 32u: goto L_08AC8274;
    case 33u: goto L_08AC8284;
    case 34u: goto L_08AC829C;
    case 35u: goto L_08AC82B0;
    case 36u: goto L_08AC82CC;
    case 37u: goto L_08AC82EC;
    case 38u: goto L_08AC8314;
    case 39u: goto L_08AC8324;
    case 40u: goto L_08AC8350;
    case 41u: goto L_08AC836C;
    case 42u: goto L_08AC83F8;
    case 43u: goto L_08AC83FC;
    case 44u: goto L_08AC8420;
    case 45u: goto L_08AC8430;
    case 46u: goto L_08AC8438;
    case 47u: goto L_08AC8444;
    case 48u: goto L_08AC844C;
    case 49u: goto L_08AC8470;
    case 50u: goto L_08AC8490;
    case 51u: goto L_08AC8498;
    case 52u: goto L_08AC84D0;
    case 53u: goto L_08AC84E0;
    case 54u: goto L_08AC8510;
    case 55u: goto L_08AC8528;
    case 56u: goto L_08AC8534;
    case 57u: goto L_08AC8544;
    case 58u: goto L_08AC8550;
    case 59u: goto L_08AC8564;
    case 60u: goto L_08AC8570;
    case 61u: goto L_08AC8580;
    case 62u: goto L_08AC858C;
    case 63u: goto L_08AC85B8;
    case 64u: goto L_08AC85D4;
    case 65u: goto L_08AC85EC;
    case 66u: goto L_08AC8600;
    case 67u: goto L_08AC860C;
    case 68u: goto L_08AC8614;
    case 69u: goto L_08AC861C;
    case 70u: goto L_08AC8628;
    case 71u: goto L_08AC8634;
    case 72u: goto L_08AC863C;
    case 73u: goto L_08AC865C;
    case 74u: goto L_08AC8668;
    case 75u: goto L_08AC8670;
    case 76u: goto L_08AC867C;
    case 77u: goto L_08AC8684;
    case 78u: goto L_08AC8694;
    case 79u: goto L_08AC86A0;
    case 80u: goto L_08AC86A4;
    case 81u: goto L_08AC86AC;
    case 82u: goto L_08AC86B8;
    case 83u: goto L_08AC86D8;
    case 84u: goto L_08AC86E0;
    case 85u: goto L_08AC86EC;
    case 86u: goto L_08AC86F4;
    case 87u: goto L_08AC8700;
    case 88u: goto L_08AC8708;
    case 89u: goto L_08AC8714;
    case 90u: goto L_08AC8718;
    case 91u: goto L_08AC8728;
    case 92u: goto L_08AC8734;
    case 93u: goto L_08AC8768;
    case 94u: goto L_08AC8770;
    case 95u: goto L_08AC8778;
    case 96u: goto L_08AC8784;
    case 97u: goto L_08AC8794;
    case 98u: goto L_08AC879C;
    case 99u: goto L_08AC87B8;
    case 100u: goto L_08AC87C0;
    case 101u: goto L_08AC87E4;
    case 102u: goto L_08AC87EC;
    case 103u: goto L_08AC87F4;
    case 104u: goto L_08AC87FC;
    case 105u: goto L_08AC8804;
    case 106u: goto L_08AC8828;
    case 107u: goto L_08AC8850;
    case 108u: goto L_08AC8858;
    case 109u: goto L_08AC88A0;
    case 110u: goto L_08AC88B4;
    case 111u: goto L_08AC88D0;
    case 112u: goto L_08AC88E4;
    case 113u: goto L_08AC88F8;
    case 114u: goto L_08AC890C;
    case 115u: goto L_08AC8914;
    case 116u: goto L_08AC897C;
    case 117u: goto L_08AC8990;
    case 118u: goto L_08AC89A4;
    case 119u: goto L_08AC89B8;
    case 120u: goto L_08AC89C0;
    case 121u: goto L_08AC89D4;
    case 122u: goto L_08AC89DC;
    case 123u: goto L_08AC89E4;
    case 124u: goto L_08AC89EC;
    case 125u: goto L_08AC8A20;
    case 126u: goto L_08AC8A28;
    case 127u: goto L_08AC8A3C;
    case 128u: goto L_08AC8A44;
    case 129u: goto L_08AC8A58;
    case 130u: goto L_08AC8A60;
    case 131u: goto L_08AC8A74;
    case 132u: goto L_08AC8A7C;
    case 133u: goto L_08AC8A90;
    case 134u: goto L_08AC8A98;
    case 135u: goto L_08AC8AAC;
    case 136u: goto L_08AC8AB4;
    case 137u: goto L_08AC8AC8;
    case 138u: goto L_08AC8AD0;
    case 139u: goto L_08AC8AE4;
    case 140u: goto L_08AC8AEC;
    case 141u: goto L_08AC8B18;
    case 142u: goto L_08AC8B20;
    case 143u: goto L_08AC8B28;
    case 144u: goto L_08AC8B30;
    case 145u: goto L_08AC8B38;
    case 146u: goto L_08AC8B50;
    case 147u: goto L_08AC8B58;
    case 148u: goto L_08AC8B70;
    case 149u: goto L_08AC8B84;
    case 150u: goto L_08AC8B90;
    case 151u: goto L_08AC8BA0;
    case 152u: goto L_08AC8BA8;
    case 153u: goto L_08AC8BB4;
    case 154u: goto L_08AC8BC4;
    case 155u: goto L_08AC8BD8;
    case 156u: goto L_08AC8BDC;
    case 157u: goto L_08AC8BF8;
    case 158u: goto L_08AC8CBC;
    case 159u: goto L_08AC8CF4;
    case 160u: goto L_08AC8CFC;
    case 161u: goto L_08AC8D0C;
    case 162u: goto L_08AC8D14;
    case 163u: goto L_08AC8D18;
    case 164u: goto L_08AC8D38;
    case 165u: goto L_08AC8D44;
    case 166u: goto L_08AC8D4C;
    case 167u: goto L_08AC8D58;
    case 168u: goto L_08AC8D60;
    case 169u: goto L_08AC8D8C;
    case 170u: goto L_08AC8DA0;
    case 171u: goto L_08AC8DC0;
    case 172u: goto L_08AC8DF4;
    case 173u: goto L_08AC8E0C;
    case 174u: goto L_08AC8E34;
    case 175u: goto L_08AC8E50;
    case 176u: goto L_08AC8E70;
    case 177u: goto L_08AC8E78;
    case 178u: goto L_08AC8E80;
    case 179u: goto L_08AC8E84;
    case 180u: goto L_08AC8E8C;
    case 181u: goto L_08AC8EA8;
    case 182u: goto L_08AC8EB0;
    case 183u: goto L_08AC8EB4;
    case 184u: goto L_08AC8ECC;
    case 185u: goto L_08AC8EE4;
    case 186u: goto L_08AC8EF0;
    case 187u: goto L_08AC8EF8;
    case 188u: goto L_08AC8F2C;
    case 189u: goto L_08AC8F3C;
    case 190u: goto L_08AC8F48;
    case 191u: goto L_08AC8F64;
    case 192u: goto L_08AC8F68;
    case 193u: goto L_08AC8F7C;
    case 194u: goto L_08AC8F94;
    case 195u: goto L_08AC8FA4;
    case 196u: goto L_08AC8FB4;
    case 197u: goto L_08AC8FBC;
    case 198u: goto L_08AC8FC4;
    case 199u: goto L_08AC8FD8;
    case 200u: goto L_08AC8FEC;
    case 201u: goto L_08AC900C;
    case 202u: goto L_08AC9030;
    case 203u: goto L_08AC9058;
    case 204u: goto L_08AC9064;
    case 205u: goto L_08AC9108;
    case 206u: goto L_08AC9208;
    case 207u: goto L_08AC928C;
    case 208u: goto L_08AC92A4;
    case 209u: goto L_08AC92B0;
    case 210u: goto L_08AC92CC;
    case 211u: goto L_08AC92D8;
    case 212u: goto L_08AC92FC;
    case 213u: goto L_08AC930C;
    case 214u: goto L_08AC9370;
    case 215u: goto L_08AC9398;
    case 216u: goto L_08AC93A4;
    case 217u: goto L_08AC93B4;
    case 218u: goto L_08AC93BC;
    case 219u: goto L_08AC93C8;
    case 220u: goto L_08AC93D0;
    case 221u: goto L_08AC93E0;
    case 222u: goto L_08AC93F0;
    case 223u: goto L_08AC93F8;
    case 224u: goto L_08AC9400;
    case 225u: goto L_08AC9408;
    case 226u: goto L_08AC9418;
    case 227u: goto L_08AC9448;
    case 228u: goto L_08AC9450;
    case 229u: goto L_08AC9498;
    case 230u: goto L_08AC94A0;
    case 231u: goto L_08AC94AC;
    case 232u: goto L_08AC94BC;
    case 233u: goto L_08AC94D4;
    case 234u: goto L_08AC94EC;
    case 235u: goto L_08AC94F8;
    case 236u: goto L_08AC9500;
    case 237u: goto L_08AC9510;
    case 238u: goto L_08AC9518;
    case 239u: goto L_08AC9540;
    case 240u: goto L_08AC9558;
    case 241u: goto L_08AC9564;
    case 242u: goto L_08AC956C;
    case 243u: goto L_08AC9594;
    case 244u: goto L_08AC95AC;
    case 245u: goto L_08AC95BC;
    case 246u: goto L_08AC95C4;
    case 247u: goto L_08AC95E4;
    case 248u: goto L_08AC9604;
    case 249u: goto L_08AC9610;
    case 250u: goto L_08AC9644;
    case 251u: goto L_08AC96A4;
    case 252u: goto L_08AC96CC;
    case 253u: goto L_08AC96D4;
    case 254u: goto L_08AC96E0;
    case 255u: goto L_08AC96EC;
    case 256u: goto L_08AC96FC;
    case 257u: goto L_08AC970C;
    case 258u: goto L_08AC971C;
    case 259u: goto L_08AC9724;
    case 260u: goto L_08AC9728;
    case 261u: goto L_08AC9798;
    case 262u: goto L_08AC9834;
    case 263u: goto L_08AC983C;
    case 264u: goto L_08AC9848;
    case 265u: goto L_08AC984C;
    case 266u: goto L_08AC9880;
    case 267u: goto L_08AC9890;
    case 268u: goto L_08AC98B0;
    case 269u: goto L_08AC98FC;
    case 270u: goto L_08AC9904;
    case 271u: goto L_08AC9954;
    case 272u: goto L_08AC9970;
    case 273u: goto L_08AC998C;
    case 274u: goto L_08AC9994;
    case 275u: goto L_08AC99E4;
    case 276u: goto L_08AC99F0;
    case 277u: goto L_08AC9A18;
    case 278u: goto L_08AC9C30;
    case 279u: goto L_08AC9C48;
    case 280u: goto L_08AC9C54;
    case 281u: goto L_08AC9D24;
    case 282u: goto L_08AC9D3C;
    case 283u: goto L_08AC9D78;
    case 284u: goto L_08AC9D9C;
    case 285u: goto L_08AC9DA8;
    case 286u: goto L_08AC9DC8;
    case 287u: goto L_08AC9DD0;
    case 288u: goto L_08AC9DDC;
    case 289u: goto L_08AC9DE4;
    case 290u: goto L_08AC9DF0;
    case 291u: goto L_08AC9DF8;
    case 292u: goto L_08AC9E20;
    case 293u: goto L_08AC9E34;
    case 294u: goto L_08AC9E50;
    case 295u: goto L_08AC9E54;
    case 296u: goto L_08AC9EF8;
    case 297u: goto L_08AC9F08;
    case 298u: goto L_08AC9F28;
    case 299u: goto L_08AC9F68;
    case 300u: goto L_08AC9F70;
    case 301u: goto L_08AC9FB4;
    case 302u: goto L_08AC9FCC;
    case 303u: goto L_08AC9FE4;
    case 304u: goto L_08AC9FF0;
    case 305u: goto L_08AC9FF8;
    case 306u: goto L_08ACA030;
    case 307u: goto L_08ACA088;
    case 308u: goto L_08ACA0A4;
    case 309u: goto L_08ACA0E8;
    case 310u: goto L_08ACA17C;
    case 311u: goto L_08ACA190;
    case 312u: goto L_08ACA19C;
    case 313u: goto L_08ACA1AC;
    case 314u: goto L_08ACA1C4;
    case 315u: goto L_08ACA1F0;
    case 316u: goto L_08ACA20C;
    case 317u: goto L_08ACA240;
    case 318u: goto L_08ACA26C;
    case 319u: goto L_08ACA298;
    case 320u: goto L_08ACA2C4;
    case 321u: goto L_08ACA2CC;
    case 322u: goto L_08ACA2D4;
    case 323u: goto L_08ACA2DC;
    case 324u: goto L_08ACA2E4;
    case 325u: goto L_08ACA2E8;
    case 326u: goto L_08ACA2F0;
    case 327u: goto L_08ACA324;
    case 328u: goto L_08ACA348;
    case 329u: goto L_08ACA350;
    case 330u: goto L_08ACA358;
    case 331u: goto L_08ACA364;
    case 332u: goto L_08ACA384;
    case 333u: goto L_08ACA398;
    case 334u: goto L_08ACA3A0;
    case 335u: goto L_08ACA3A4;
    case 336u: goto L_08ACA3B4;
    case 337u: goto L_08ACA3D0;
    case 338u: goto L_08ACA3D8;
    case 339u: goto L_08ACA3E0;
    case 340u: goto L_08ACA3EC;
    case 341u: goto L_08ACA3F4;
    case 342u: goto L_08ACA3FC;
    case 343u: goto L_08ACA404;
    case 344u: goto L_08ACA40C;
    case 345u: goto L_08ACA418;
    case 346u: goto L_08ACA43C;
    case 347u: goto L_08ACA444;
    case 348u: goto L_08ACA458;
    case 349u: goto L_08ACA464;
    case 350u: goto L_08ACA488;
    case 351u: goto L_08ACA490;
    case 352u: goto L_08ACA4A0;
    case 353u: goto L_08ACA4A8;
    case 354u: goto L_08ACA4B4;
    case 355u: goto L_08ACA4B8;
    case 356u: goto L_08ACA4CC;
    case 357u: goto L_08ACA4D0;
    case 358u: goto L_08ACA4F8;
    case 359u: goto L_08ACA514;
    case 360u: goto L_08ACA534;
    case 361u: goto L_08ACA550;
    case 362u: goto L_08ACA570;
    case 363u: goto L_08ACA58C;
    case 364u: goto L_08ACA598;
    case 365u: goto L_08ACA5B0;
    case 366u: goto L_08ACA5B8;
    case 367u: goto L_08ACA5BC;
    case 368u: goto L_08ACA5D0;
    case 369u: goto L_08ACA5D8;
    case 370u: goto L_08ACA5E8;
    case 371u: goto L_08ACA600;
    case 372u: goto L_08ACA618;
    case 373u: goto L_08ACA628;
    case 374u: goto L_08ACA644;
    case 375u: goto L_08ACA660;
    case 376u: goto L_08ACA67C;
    case 377u: goto L_08ACA698;
    case 378u: goto L_08ACA6B4;
    case 379u: goto L_08ACA6D0;
    case 380u: goto L_08ACA6E4;
    case 381u: goto L_08ACA6EC;
    case 382u: goto L_08ACA6F0;
    case 383u: goto L_08ACA6FC;
    case 384u: goto L_08ACA728;
    case 385u: goto L_08ACA744;
    case 386u: goto L_08ACA75C;
    case 387u: goto L_08ACA764;
    case 388u: goto L_08ACA768;
    case 389u: goto L_08ACA770;
    case 390u: goto L_08ACA780;
    case 391u: goto L_08ACA790;
    case 392u: goto L_08ACA7A4;
    case 393u: goto L_08ACA7B4;
    case 394u: goto L_08ACA7D0;
    case 395u: goto L_08ACA7E8;
    case 396u: goto L_08ACA7F0;
    case 397u: goto L_08ACA7F4;
    case 398u: goto L_08ACA7FC;
    case 399u: goto L_08ACA80C;
    case 400u: goto L_08ACA81C;
    case 401u: goto L_08ACA830;
    case 402u: goto L_08ACA840;
    case 403u: goto L_08ACA878;
    case 404u: goto L_08ACA890;
    case 405u: goto L_08ACA898;
    case 406u: goto L_08ACA89C;
    case 407u: goto L_08ACA8A4;
    case 408u: goto L_08ACA8B0;
    case 409u: goto L_08ACA8BC;
    case 410u: goto L_08ACA8CC;
    case 411u: goto L_08ACA8E0;
    case 412u: goto L_08ACA8E8;
    case 413u: goto L_08ACA8FC;
    case 414u: goto L_08ACA904;
    case 415u: goto L_08ACA908;
    case 416u: goto L_08ACA910;
    case 417u: goto L_08ACA924;
    case 418u: goto L_08ACA92C;
    case 419u: goto L_08ACA930;
    case 420u: goto L_08ACA938;
    case 421u: goto L_08ACA94C;
    case 422u: goto L_08ACA954;
    case 423u: goto L_08ACA958;
    case 424u: goto L_08ACA960;
    case 425u: goto L_08ACA974;
    case 426u: goto L_08ACA97C;
    case 427u: goto L_08ACA980;
    case 428u: goto L_08ACA988;
    case 429u: goto L_08ACA99C;
    case 430u: goto L_08ACA9A4;
    case 431u: goto L_08ACA9A8;
    case 432u: goto L_08ACA9B0;
    case 433u: goto L_08ACA9C4;
    case 434u: goto L_08ACA9CC;
    case 435u: goto L_08ACA9D0;
    case 436u: goto L_08ACA9D8;
    case 437u: goto L_08ACA9EC;
    case 438u: goto L_08ACA9F4;
    case 439u: goto L_08ACA9F8;
    case 440u: goto L_08ACAA00;
    case 441u: goto L_08ACAA14;
    case 442u: goto L_08ACAA1C;
    case 443u: goto L_08ACAA20;
    case 444u: goto L_08ACAA28;
    case 445u: goto L_08ACAA34;
    case 446u: goto L_08ACAAB0;
    case 447u: goto L_08ACAAC4;
    case 448u: goto L_08ACAB58;
    case 449u: goto L_08ACAB7C;
    case 450u: goto L_08ACAB8C;
    case 451u: goto L_08ACAB98;
    case 452u: goto L_08ACABA0;
    case 453u: goto L_08ACABB8;
    case 454u: goto L_08ACABC0;
    case 455u: goto L_08ACABC8;
    case 456u: goto L_08ACABD0;
    case 457u: goto L_08ACABFC;
    case 458u: goto L_08ACAC0C;
    case 459u: goto L_08ACAC1C;
    case 460u: goto L_08ACAC34;
    case 461u: goto L_08ACAC44;
    case 462u: goto L_08ACAC54;
    case 463u: goto L_08ACAC58;
    case 464u: goto L_08ACAC64;
    case 465u: goto L_08ACAC68;
    case 466u: goto L_08ACAC74;
    case 467u: goto L_08ACAC8C;
    case 468u: goto L_08ACAC94;
    case 469u: goto L_08ACACA8;
    case 470u: goto L_08ACACC8;
    case 471u: goto L_08ACACFC;
    case 472u: goto L_08ACAD10;
    case 473u: goto L_08ACAD24;
    case 474u: goto L_08ACAD30;
    case 475u: goto L_08ACAD40;
    case 476u: goto L_08ACAD48;
    case 477u: goto L_08ACAD4C;
    case 478u: goto L_08ACAD68;
    case 479u: goto L_08ACAD70;
    case 480u: goto L_08ACAD94;
    case 481u: goto L_08ACAD9C;
    case 482u: goto L_08ACADC4;
    case 483u: goto L_08ACADF8;
    case 484u: goto L_08ACAE0C;
    case 485u: goto L_08ACAE20;
    case 486u: goto L_08ACAE2C;
    case 487u: goto L_08ACAE3C;
    case 488u: goto L_08ACAE44;
    case 489u: goto L_08ACAE48;
    case 490u: goto L_08ACAE64;
    case 491u: goto L_08ACAE6C;
    case 492u: goto L_08ACAE90;
    case 493u: goto L_08ACAE98;
    case 494u: goto L_08ACAEC0;
    case 495u: goto L_08ACAEF4;
    case 496u: goto L_08ACAF04;
    case 497u: goto L_08ACAF1C;
    case 498u: goto L_08ACAF28;
    case 499u: goto L_08ACAF38;
    case 500u: goto L_08ACAF48;
    case 501u: goto L_08ACAF50;
    case 502u: goto L_08ACAF78;
    case 503u: goto L_08ACAFA0;
    case 504u: goto L_08ACAFB8;
    case 505u: goto L_08ACAFC8;
    case 506u: goto L_08ACAFD4;
    case 507u: goto L_08ACAFE4;
    case 508u: goto L_08ACAFEC;
    case 509u: goto L_08ACB008;
    case 510u: goto L_08ACB00C;
    case 511u: goto L_08ACB024;
    case 512u: goto L_08ACB050;
    case 513u: goto L_08ACB064;
    case 514u: goto L_08ACB070;
    case 515u: goto L_08ACB07C;
    case 516u: goto L_08ACB088;
    case 517u: goto L_08ACB09C;
    case 518u: goto L_08ACB0A8;
    case 519u: goto L_08ACB0B8;
    case 520u: goto L_08ACB0C0;
    case 521u: goto L_08ACB0E0;
    case 522u: goto L_08ACB0E8;
    case 523u: goto L_08ACB114;
    case 524u: goto L_08ACB124;
    case 525u: goto L_08ACB134;
    case 526u: goto L_08ACB15C;
    case 527u: goto L_08ACB16C;
    case 528u: goto L_08ACB180;
    case 529u: goto L_08ACB188;
    case 530u: goto L_08ACB198;
    case 531u: goto L_08ACB1A0;
    case 532u: goto L_08ACB1BC;
    case 533u: goto L_08ACB1D0;
    case 534u: goto L_08ACB1E0;
    case 535u: goto L_08ACB1F4;
    case 536u: goto L_08ACB204;
    case 537u: goto L_08ACB20C;
    case 538u: goto L_08ACB218;
    case 539u: goto L_08ACB234;
    case 540u: goto L_08ACB23C;
    case 541u: goto L_08ACB248;
    case 542u: goto L_08ACB258;
    case 543u: goto L_08ACB268;
    case 544u: goto L_08ACB270;
    case 545u: goto L_08ACB27C;
    case 546u: goto L_08ACB294;
    case 547u: goto L_08ACB2A0;
    case 548u: goto L_08ACB2AC;
    case 549u: goto L_08ACB2B4;
    case 550u: goto L_08ACB2C0;
    case 551u: goto L_08ACB2D0;
    case 552u: goto L_08ACB2D8;
    case 553u: goto L_08ACB2E0;
    case 554u: goto L_08ACB2F4;
    case 555u: goto L_08ACB2F8;
    case 556u: goto L_08ACB300;
    case 557u: goto L_08ACB30C;
    case 558u: goto L_08ACB31C;
    case 559u: goto L_08ACB324;
    case 560u: goto L_08ACB340;
    case 561u: goto L_08ACB358;
    case 562u: goto L_08ACB36C;
    case 563u: goto L_08ACB374;
    case 564u: goto L_08ACB380;
    case 565u: goto L_08ACB388;
    case 566u: goto L_08ACB394;
    case 567u: goto L_08ACB3B4;
    case 568u: goto L_08ACB3BC;
    case 569u: goto L_08ACB3CC;
    case 570u: goto L_08ACB3E4;
    case 571u: goto L_08ACB3F8;
    case 572u: goto L_08ACB40C;
    case 573u: goto L_08ACB420;
    case 574u: goto L_08ACB434;
    case 575u: goto L_08ACB448;
    case 576u: goto L_08ACB45C;
    case 577u: goto L_08ACB470;
    case 578u: goto L_08ACB484;
    case 579u: goto L_08ACB498;
    case 580u: goto L_08ACB4A4;
    case 581u: goto L_08ACB4B0;
    case 582u: goto L_08ACB4BC;
    case 583u: goto L_08ACB4C4;
    case 584u: goto L_08ACB500;
    case 585u: goto L_08ACB508;
    case 586u: goto L_08ACB518;
    case 587u: goto L_08ACB51C;
    case 588u: goto L_08ACB528;
    case 589u: goto L_08ACB538;
    case 590u: goto L_08ACB540;
    case 591u: goto L_08ACB550;
    case 592u: goto L_08ACB558;
    case 593u: goto L_08ACB560;
    case 594u: goto L_08ACB56C;
    case 595u: goto L_08ACB578;
    case 596u: goto L_08ACB590;
    case 597u: goto L_08ACB5A4;
    case 598u: goto L_08ACB5AC;
    case 599u: goto L_08ACB5B8;
    case 600u: goto L_08ACB5BC;
    case 601u: goto L_08ACB5E0;
    case 602u: goto L_08ACB600;
    case 603u: goto L_08ACB60C;
    case 604u: goto L_08ACB614;
    case 605u: goto L_08ACB620;
    case 606u: goto L_08ACB628;
    case 607u: goto L_08ACB630;
    case 608u: goto L_08ACB640;
    case 609u: goto L_08ACB648;
    case 610u: goto L_08ACB654;
    case 611u: goto L_08ACB660;
    case 612u: goto L_08ACB674;
    case 613u: goto L_08ACB680;
    case 614u: goto L_08ACB69C;
    case 615u: goto L_08ACB6AC;
    case 616u: goto L_08ACB6B8;
    case 617u: goto L_08ACB6C0;
    case 618u: goto L_08ACB6D8;
    case 619u: goto L_08ACB6E8;
    case 620u: goto L_08ACB6F4;
    case 621u: goto L_08ACB700;
    case 622u: goto L_08ACB708;
    case 623u: goto L_08ACB710;
    case 624u: goto L_08ACB718;
    case 625u: goto L_08ACB720;
    case 626u: goto L_08ACB724;
    case 627u: goto L_08ACB730;
    case 628u: goto L_08ACB76C;
    case 629u: goto L_08ACB774;
    case 630u: goto L_08ACB788;
    case 631u: goto L_08ACB790;
    case 632u: goto L_08ACB7A4;
    case 633u: goto L_08ACB7AC;
    case 634u: goto L_08ACB7BC;
    case 635u: goto L_08ACB7C4;
    case 636u: goto L_08ACB7CC;
    case 637u: goto L_08ACB7D8;
    case 638u: goto L_08ACB7DC;
    case 639u: goto L_08ACB7FC;
    case 640u: goto L_08ACB82C;
    case 641u: goto L_08ACB83C;
    case 642u: goto L_08ACB844;
    case 643u: goto L_08ACB854;
    case 644u: goto L_08ACB868;
    case 645u: goto L_08ACB870;
    case 646u: goto L_08ACB878;
    case 647u: goto L_08ACB880;
    case 648u: goto L_08ACB888;
    case 649u: goto L_08ACB890;
    case 650u: goto L_08ACB8B0;
    case 651u: goto L_08ACB8E0;
    case 652u: goto L_08ACB900;
    case 653u: goto L_08ACB910;
    case 654u: goto L_08ACB93C;
    case 655u: goto L_08ACB944;
    case 656u: goto L_08ACB950;
    case 657u: goto L_08ACB960;
    case 658u: goto L_08ACB988;
    case 659u: goto L_08ACB9AC;
    case 660u: goto L_08ACB9B4;
    case 661u: goto L_08ACB9BC;
    case 662u: goto L_08ACB9D8;
    case 663u: goto L_08ACB9F8;
    case 664u: goto L_08ACBA18;
    case 665u: goto L_08ACBA28;
    case 666u: goto L_08ACBA30;
    case 667u: goto L_08ACBA38;
    case 668u: goto L_08ACBA3C;
    case 669u: goto L_08ACBA50;
    case 670u: goto L_08ACBA80;
    case 671u: goto L_08ACBA8C;
    case 672u: goto L_08ACBA94;
    case 673u: goto L_08ACBA9C;
    case 674u: goto L_08ACBAA4;
    case 675u: goto L_08ACBAAC;
    case 676u: goto L_08ACBABC;
    case 677u: goto L_08ACBAC8;
    case 678u: goto L_08ACBADC;
    case 679u: goto L_08ACBAE4;
    case 680u: goto L_08ACBAF4;
    case 681u: goto L_08ACBAFC;
    case 682u: goto L_08ACBB04;
    case 683u: goto L_08ACBB24;
    case 684u: goto L_08ACBB44;
    case 685u: goto L_08ACBB64;
    case 686u: goto L_08ACBB74;
    case 687u: goto L_08ACBB80;
    case 688u: goto L_08ACBB9C;
    case 689u: goto L_08ACBBA4;
    case 690u: goto L_08ACBBB0;
    case 691u: goto L_08ACBBBC;
    case 692u: goto L_08ACBBF0;
    case 693u: goto L_08ACBBFC;
    case 694u: goto L_08ACBC04;
    case 695u: goto L_08ACBC14;
    case 696u: goto L_08ACBC1C;
    case 697u: goto L_08ACBC2C;
    case 698u: goto L_08ACBC34;
    case 699u: goto L_08ACBC40;
    case 700u: goto L_08ACBC54;
    case 701u: goto L_08ACBC6C;
    case 702u: goto L_08ACBCA8;
    case 703u: goto L_08ACBCC0;
    case 704u: goto L_08ACBCD8;
    case 705u: goto L_08ACBCE8;
    case 706u: goto L_08ACBCF4;
    case 707u: goto L_08ACBCFC;
    case 708u: goto L_08ACBD0C;
    case 709u: goto L_08ACBD10;
    case 710u: goto L_08ACBD1C;
    case 711u: goto L_08ACBD24;
    case 712u: goto L_08ACBD34;
    case 713u: goto L_08ACBD3C;
    case 714u: goto L_08ACBD54;
    case 715u: goto L_08ACBD60;
    case 716u: goto L_08ACBD78;
    case 717u: goto L_08ACBD8C;
    case 718u: goto L_08ACBD98;
    case 719u: goto L_08ACBDA0;
    case 720u: goto L_08ACBDA8;
    case 721u: goto L_08ACBDB0;
    case 722u: goto L_08ACBDC8;
    case 723u: goto L_08ACBDD0;
    case 724u: goto L_08ACBDE0;
    case 725u: goto L_08ACBDF4;
    case 726u: goto L_08ACBE00;
    case 727u: goto L_08ACBE18;
    case 728u: goto L_08ACBE2C;
    case 729u: goto L_08ACBE3C;
    case 730u: goto L_08ACBE44;
    case 731u: goto L_08ACBE58;
    case 732u: goto L_08ACBE60;
    case 733u: goto L_08ACBE68;
    case 734u: goto L_08ACBE6C;
    case 735u: goto L_08ACBE98;
    case 736u: goto L_08ACBEC0;
    case 737u: goto L_08ACBED0;
    case 738u: goto L_08ACBEE0;
    case 739u: goto L_08ACBF00;
    case 740u: goto L_08ACBF1C;
    case 741u: goto L_08ACBF28;
    case 742u: goto L_08ACBF40;
    case 743u: goto L_08ACBF54;
    case 744u: goto L_08ACBF68;
    case 745u: goto L_08ACBF74;
    case 746u: goto L_08ACBF7C;
    case 747u: goto L_08ACBF80;
    case 748u: goto L_08ACBF90;
    case 749u: goto L_08ACBF9C;
    case 750u: goto L_08ACBFAC;
    case 751u: goto L_08ACBFB4;
    case 752u: goto L_08ACBFC8;
    case 753u: goto L_08ACBFCC;
    case 754u: goto L_08ACBFEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AC8004:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AC8058;
      }
      goto L_08AC800C;
    }
L_08AC800C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8040;
      }
      goto L_08AC8018;
    }
L_08AC8018:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 150u);
      if (branch_taken) {
          goto L_08AC8060;
      }
      goto L_08AC8038;
    }
L_08AC8038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 200u);
      if (branch_taken) {
          goto L_08AC806C;
      }
      goto L_08AC8040;
    }
L_08AC8040:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AC8050u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AC8078;
L_08AC8050:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC806C;
      }
      goto L_08AC8058;
    }
L_08AC8058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC806C;
      }
      goto L_08AC8060;
    }
L_08AC8060:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(300));
    goto L_08AC806C;
L_08AC806C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8078:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AC8098;
      }
      goto L_08AC808C;
    }
L_08AC808C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08AC8098;
L_08AC8098:
    ctx.gpr[4] = (13747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52830u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16295u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3293u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
      if (branch_taken) {
          goto L_08AC80D0;
      }
      goto L_08AC80C4;
    }
L_08AC80C4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    goto L_08AC80D0;
L_08AC80D0:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (18749u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 29536u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08AC80FC;
      }
      goto L_08AC80F0;
    }
L_08AC80F0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    goto L_08AC80FC;
L_08AC80FC:
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (14976u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
        goto L_08AC8128;
    }
    goto L_08AC811C;
L_08AC811C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AC8138;
      }
      goto L_08AC8128;
    }
L_08AC8128:
    ctx.gpr[2] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[2]);
    goto L_08AC8138;
L_08AC8138:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(3316));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] - 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8204));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[7] = (2225u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[6] = (0u | 48u);
    ctx.gpr[31] = (0x08AC8184u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-19824));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08AC8184u) goto L_08AC8184;
    return;
L_08AC8184:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3324));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3320), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3316), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] - 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3328), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC81A0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3324), ctx.gpr[4]);
    ctx.pc = 0x08B0BBDCu;
    return;
L_08AC81A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3312), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_08AC81CC;
L_08AC81CC:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC81CC;
      }
      goto L_08AC81E4;
    }
L_08AC81E4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(228));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    goto L_08AC81F4;
L_08AC81F4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AC81F4;
      }
      goto L_08AC821C;
    }
L_08AC821C:
    ctx.gpr[31] = (0x08AC8224u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 131u, 0x08A58BA0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8224u) goto L_08AC8224;
    return;
L_08AC8224:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8274;
      }
      goto L_08AC823C;
    }
L_08AC823C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    goto L_08AC8240;
L_08AC8240:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2047));
    ctx.gpr[7] = (ctx.gpr[7] >> 11u);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8264;
      }
      goto L_08AC8260;
    }
L_08AC8260:
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    goto L_08AC8264;
L_08AC8264:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC8240;
      }
      goto L_08AC8274;
    }
L_08AC8274:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8284u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15860));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 434u, 0x08AC7030u>(ctx, &aot_mem) && ctx.pc == 0x08AC8284u) goto L_08AC8284;
    return;
L_08AC8284:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC829Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15844));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC829Cu) goto L_08AC829C;
    return;
L_08AC829C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3332), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AC82B0u);
    ctx.gpr[6] = (0u | 511u);
    ctx.pc = 0x08B0BDFCu;
    return;
L_08AC82B0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC82CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15812));
    ctx.pc = 0x08B0BC54u;
    return;
L_08AC82CC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08AC82ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15792));
    ctx.pc = 0x08B0BC24u;
    return;
L_08AC82EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2220u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[7] = (0u | 32768u);
    ctx.gpr[6] = (0u | 32u);
    ctx.gpr[8] = (0u | 16384u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15776));
    ctx.gpr[31] = (0x08AC8314u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28764));
    ctx.pc = 0x08B0BBA4u;
    return;
L_08AC8314:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AC8324u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_08AC8324:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30580)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30584)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08AC8350u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B0BBACu;
    return;
L_08AC8350:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC836C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(3324));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    ctx.gpr[23] = (ctx.gpr[23] - 0u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(3324)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[20] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AC84D0;
      }
      goto L_08AC83F8;
    }
L_08AC83F8:
    ctx.gpr[22] = (2227u << 16u);
    goto L_08AC83FC;
L_08AC83FC:
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] >> 11u);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AC8420u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 652u, 0x08AC7F74u>(ctx, &aot_mem) && ctx.pc == 0x08AC8420u) goto L_08AC8420;
    return;
L_08AC8420:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8438;
      }
      goto L_08AC8430;
    }
L_08AC8430:
    ctx.gpr[30] = (ctx.gpr[16] | 0u);
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    goto L_08AC8438;
L_08AC8438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
        goto L_08AC844C;
    }
    goto L_08AC8444;
L_08AC8444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AC8498;
      }
      goto L_08AC844C;
    }
L_08AC844C:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[5] = (ctx.gpr[5] >> 21u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 11u));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AC8470u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08AC8078;
L_08AC8470:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27324)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08AC8498;
      }
      goto L_08AC8490;
    }
L_08AC8490:
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    goto L_08AC8498;
L_08AC8498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC83FC;
      }
      goto L_08AC84D0;
    }
L_08AC84D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
        goto L_08AC84E0;
    }
    goto L_08AC84E0;
L_08AC84E0:
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
L_08AC8510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8528u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC3Cu;
    return;
L_08AC8528:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AC8544;
      }
      goto L_08AC8534;
    }
L_08AC8534:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AC8544u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15760));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 434u, 0x08AC7030u>(ctx, &aot_mem) && ctx.pc == 0x08AC8544u) goto L_08AC8544;
    return;
L_08AC8544:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8564u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BC34u;
    return;
L_08AC8564:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AC8580;
      }
      goto L_08AC8570;
    }
L_08AC8570:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AC8580u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15724));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 434u, 0x08AC7030u>(ctx, &aot_mem) && ctx.pc == 0x08AC8580u) goto L_08AC8580;
    return;
L_08AC8580:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC858C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    goto L_08AC85B8;
L_08AC85B8:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30596)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-30596), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC85D4u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.pc = 0x08B0BB94u;
    return;
L_08AC85D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AC85ECu);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BC6Cu;
    return;
L_08AC85EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30596)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-30596), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC8600u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.pc = 0x08B0BB94u;
    return;
L_08AC8600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8628;
      }
      goto L_08AC860C;
    }
L_08AC860C:
    ctx.gpr[31] = (0x08AC8614u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8510;
L_08AC8614:
    ctx.gpr[31] = (0x08AC861Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC836C;
L_08AC861C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3332), ctx.gpr[2]);
    ctx.gpr[31] = (0x08AC8628u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8550;
L_08AC8628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8684;
      }
      goto L_08AC8634;
    }
L_08AC8634:
    ctx.gpr[31] = (0x08AC863Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8510;
L_08AC863C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(3324));
    ctx.gpr[5] = (ctx.gpr[5] - 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8668;
      }
      goto L_08AC865C;
    }
L_08AC865C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC8668u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B0BC64u;
    return;
L_08AC8668:
    ctx.gpr[31] = (0x08AC8670u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8550;
L_08AC8670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC867Cu);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_08AC867C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8D58;
      }
      goto L_08AC8684;
    }
L_08AC8684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3336)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC86A4;
      }
      goto L_08AC8694;
    }
L_08AC8694:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AC86A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15688));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 434u, 0x08AC7030u>(ctx, &aot_mem) && ctx.pc == 0x08AC86A0u) goto L_08AC86A0;
    return;
L_08AC86A0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3336), 0u);
    goto L_08AC86A4;
L_08AC86A4:
    ctx.gpr[31] = (0x08AC86ACu);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_08AC86AC:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC87FC;
      }
      goto L_08AC86B8;
    }
L_08AC86B8:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3332), 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 776u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15648));
    ctx.gpr[31] = (0x08AC86D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30576));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 434u, 0x08AC7030u>(ctx, &aot_mem) && ctx.pc == 0x08AC86D8u) goto L_08AC86D8;
    return;
L_08AC86D8:
    ctx.gpr[31] = (0x08AC86E0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.pc = 0x08B0B8A4u;
    return;
L_08AC86E0:
    ctx.gpr[4] = (ctx.gpr[2] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08AC8718;
    }
    goto L_08AC86EC;
L_08AC86EC:
    ctx.gpr[31] = (0x08AC86F4u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_08AC86F4:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[16] = (0u | 1u);
        goto L_08AC8718;
    }
    goto L_08AC8700;
L_08AC8700:
    ctx.gpr[31] = (0x08AC8708u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_08AC8708:
    ctx.gpr[4] = (ctx.gpr[2] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8718;
      }
      goto L_08AC8714;
    }
L_08AC8714:
    ctx.gpr[16] = (0u | 1u);
    goto L_08AC8718;
L_08AC8718:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[31] = (0x08AC8728u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_08AC8728:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08AC8734u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.pc = 0x08B0B89Cu;
    return;
L_08AC8734:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30580)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30584)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] ^ ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[8] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8770;
      }
      goto L_08AC8768;
    }
L_08AC8768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC87F4;
      }
      goto L_08AC8770;
    }
L_08AC8770:
    ctx.gpr[31] = (0x08AC8778u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_08AC8778:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC87F4;
      }
      goto L_08AC8784;
    }
L_08AC8784:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08AC8794u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15628));
    ctx.pc = 0x08B0BDC4u;
    return;
L_08AC8794:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC87EC;
      }
      goto L_08AC879C;
    }
L_08AC879C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30556)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30560)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AC87EC;
      }
      goto L_08AC87B8;
    }
L_08AC87B8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AC87EC;
      }
      goto L_08AC87C0;
    }
L_08AC87C0:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (0u | 806u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15576));
    ctx.gpr[31] = (0x08AC87E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30576));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 434u, 0x08AC7030u>(ctx, &aot_mem) && ctx.pc == 0x08AC87E4u) goto L_08AC87E4;
    return;
L_08AC87E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8D58;
      }
      goto L_08AC87EC;
    }
L_08AC87EC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AC87F4;
L_08AC87F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC86D8;
      }
      goto L_08AC87FC;
    }
L_08AC87FC:
    ctx.gpr[31] = (0x08AC8804u);
    // nop
    ctx.pc = 0x08B0BCC4u;
    return;
L_08AC8804:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30548)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30552)));
    ctx.gpr[31] = (0x08AC8828u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08AC8828u) goto L_08AC8828;
    return;
L_08AC8828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[3]);
    ctx.gpr[17] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8858;
      }
      goto L_08AC8850;
    }
L_08AC8850:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC88D0;
      }
      goto L_08AC8858;
    }
L_08AC8858:
    ctx.gpr[1] = (ctx.gpr[17] << 21u);
    ctx.gpr[4] = (ctx.gpr[16] >> 11u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 11u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] >> 21u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[1] = (ctx.gpr[5] << 21u);
    ctx.gpr[4] = (ctx.gpr[4] >> 11u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AC88A0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 652u, 0x08AC7F74u>(ctx, &aot_mem) && ctx.pc == 0x08AC88A0u) goto L_08AC88A0;
    return;
L_08AC88A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC88B4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.pc = 0x08B0BD8Cu;
    return;
L_08AC88B4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AC89B8;
      }
      goto L_08AC88D0;
    }
L_08AC88D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (1u << 16u);
      if (branch_taken) {
          goto L_08AC88F8;
      }
      goto L_08AC88E4;
    }
L_08AC88E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[16] = (0u | 2048u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] & 2047u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    goto L_08AC88F8;
L_08AC88F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8914;
      }
      goto L_08AC890C;
    }
L_08AC890C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08AC8914;
L_08AC8914:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[1] = (ctx.gpr[5] << 21u);
    ctx.gpr[6] = (ctx.gpr[4] >> 11u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] >> 21u);
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2047));
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 11u));
    ctx.gpr[1] = (ctx.gpr[7] << 21u);
    ctx.gpr[6] = (ctx.gpr[6] >> 11u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 11u));
    ctx.gpr[6] = (ctx.gpr[1] | ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] >> 21u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2047));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 11u));
    ctx.gpr[31] = (0x08AC897Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8078;
L_08AC897C:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 31u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC8990u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.pc = 0x08B0BC64u;
    return;
L_08AC8990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AC89A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BD74u;
    return;
L_08AC89A4:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 31u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC89B8u);
    ctx.gpr[5] = (0u | 4u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_08AC89B8:
    ctx.gpr[31] = (0x08AC89C0u);
    // nop
    ctx.pc = 0x08B0BCC4u;
    return;
L_08AC89C0:
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[23]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08AC89D4u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.pc = 0x08B0BCACu;
    return;
L_08AC89D4:
    ctx.gpr[31] = (0x08AC89DCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8510;
L_08AC89DC:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AC89EC;
      }
      goto L_08AC89E4;
    }
L_08AC89E4:
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AC8BA8;
      }
      goto L_08AC89EC;
    }
L_08AC89EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30540)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30544)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30532)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30536)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8A28;
      }
      goto L_08AC8A20;
    }
L_08AC8A20:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8AEC;
      }
      goto L_08AC8A28;
    }
L_08AC8A28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30524)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30528)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8A44;
      }
      goto L_08AC8A3C;
    }
L_08AC8A3C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8AEC;
      }
      goto L_08AC8A44;
    }
L_08AC8A44:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30516)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30520)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8A60;
      }
      goto L_08AC8A58;
    }
L_08AC8A58:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8AEC;
      }
      goto L_08AC8A60;
    }
L_08AC8A60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30508)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30512)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8A7C;
      }
      goto L_08AC8A74;
    }
L_08AC8A74:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8AEC;
      }
      goto L_08AC8A7C;
    }
L_08AC8A7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30500)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30504)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8A98;
      }
      goto L_08AC8A90;
    }
L_08AC8A90:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8AEC;
      }
      goto L_08AC8A98;
    }
L_08AC8A98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30492)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30496)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8AB4;
      }
      goto L_08AC8AAC;
    }
L_08AC8AAC:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8AEC;
      }
      goto L_08AC8AB4;
    }
L_08AC8AB4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30484)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30488)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8AD0;
      }
      goto L_08AC8AC8;
    }
L_08AC8AC8:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8AEC;
      }
      goto L_08AC8AD0;
    }
L_08AC8AD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30476)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30480)));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AC8B38;
      }
      goto L_08AC8AE4;
    }
L_08AC8AE4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AC8B38;
      }
      goto L_08AC8AEC;
    }
L_08AC8AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B30;
      }
      goto L_08AC8B18;
    }
L_08AC8B18:
    ctx.gpr[31] = (0x08AC8B20u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8550;
L_08AC8B20:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08AC8B28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC8B28u) goto L_08AC8B28;
    return;
L_08AC8B28:
    ctx.gpr[31] = (0x08AC8B30u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8510;
L_08AC8B30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8BA0;
      }
      goto L_08AC8B38;
    }
L_08AC8B38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30596)));
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30596), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC8B50u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.pc = 0x08B0BB94u;
    return;
L_08AC8B50:
    ctx.gpr[31] = (0x08AC8B58u);
    ctx.gpr[4] = (0u | 5000u);
    ctx.pc = 0x08B0BC14u;
    return;
L_08AC8B58:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AC8B70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15552));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 434u, 0x08AC7030u>(ctx, &aot_mem) && ctx.pc == 0x08AC8B70u) goto L_08AC8B70;
    return;
L_08AC8B70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8B90;
      }
      goto L_08AC8B84;
    }
L_08AC8B84:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC8BA0;
      }
      goto L_08AC8B90;
    }
L_08AC8B90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    goto L_08AC8BA0;
L_08AC8BA0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3332), 0u);
      if (branch_taken) {
          goto L_08AC8D18;
      }
      goto L_08AC8BA8;
    }
L_08AC8BA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8BC4;
      }
      goto L_08AC8BB4;
    }
L_08AC8BB4:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AC8D18;
      }
      goto L_08AC8BC4;
    }
L_08AC8BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8BDC;
      }
      goto L_08AC8BD8;
    }
L_08AC8BD8:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    goto L_08AC8BDC;
L_08AC8BDC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30596)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30596), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AC8BF8u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.pc = 0x08B0BB94u;
    return;
L_08AC8BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[8] = (ctx.gpr[5] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[5] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[7] - ctx.gpr[19]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[8] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AC8D14;
      }
      goto L_08AC8CBC;
    }
L_08AC8CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8D14;
      }
      goto L_08AC8CF4;
    }
L_08AC8CF4:
    ctx.gpr[31] = (0x08AC8CFCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8550;
L_08AC8CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AC8D0Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AC8D0Cu) goto L_08AC8D0C;
    return;
L_08AC8D0C:
    ctx.gpr[31] = (0x08AC8D14u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8510;
L_08AC8D14:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(3332), 0u);
    goto L_08AC8D18;
L_08AC8D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(3324)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(3324));
    ctx.gpr[5] = (ctx.gpr[5] - 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8D44;
      }
      goto L_08AC8D38;
    }
L_08AC8D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC8D44u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.pc = 0x08B0BC64u;
    return;
L_08AC8D44:
    ctx.gpr[31] = (0x08AC8D4Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08AC8550;
L_08AC8D4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AC8D58u);
    ctx.gpr[5] = (0u | 2u);
    ctx.pc = 0x08B0BC5Cu;
    return;
L_08AC8D58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC85B8;
      }
      goto L_08AC8D60;
    }
L_08AC8D60:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8D8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8DA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8DC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30428)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DC0u) goto L_08AC8DC0;
    return;
L_08AC8DC0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29300));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8DF4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 295u, 0x08925EC8u>(ctx, &aot_mem) && ctx.pc == 0x08AC8DF4u) goto L_08AC8DF4;
    return;
L_08AC8DF4:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8E0Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AC8FD8;
L_08AC8E0C:
    ctx.gpr[4] = (2221u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28152));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-30428));
    ctx.gpr[31] = (0x08AC8E34u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 326u, 0x08A36068u>(ctx, &aot_mem) && ctx.pc == 0x08AC8E34u) goto L_08AC8E34;
    return;
L_08AC8E34:
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
L_08AC8E50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AC8EB4;
      }
      goto L_08AC8E70;
    }
L_08AC8E70:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8E84;
      }
      goto L_08AC8E78;
    }
L_08AC8E78:
    ctx.gpr[31] = (0x08AC8E80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 337u, 0x089C564Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8E80u) goto L_08AC8E80;
    return;
L_08AC8E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    goto L_08AC8E84;
L_08AC8E84:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC8EB0;
      }
      goto L_08AC8E8C;
    }
L_08AC8E8C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AC8EB0;
      }
      goto L_08AC8EA8;
    }
L_08AC8EA8:
    ctx.gpr[31] = (0x08AC8EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 324u, 0x089C5554u>(ctx, &aot_mem) && ctx.pc == 0x08AC8EB0u) goto L_08AC8EB0;
    return;
L_08AC8EB0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    goto L_08AC8EB4;
L_08AC8EB4:
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
L_08AC8ECC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8EE4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AC8DA0;
L_08AC8EE4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
        goto L_08AC8EF8;
    }
    goto L_08AC8EF0;
L_08AC8EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AC8F68;
      }
      goto L_08AC8EF8;
    }
L_08AC8EF8:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08AC8F2Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AC8FD8;
L_08AC8F2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8F3Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AC8E50;
L_08AC8F3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC8F48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 99u, 0x089C8844u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F48u) goto L_08AC8F48;
    return;
L_08AC8F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC8F64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30428));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 340u, 0x08A36164u>(ctx, &aot_mem) && ctx.pc == 0x08AC8F64u) goto L_08AC8F64;
    return;
L_08AC8F64:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08AC8F68;
L_08AC8F68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8F7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8F94u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 103u, 0x089C889Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8F94u) goto L_08AC8F94;
    return;
L_08AC8F94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AC8FA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30428));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36104u>(ctx, &aot_mem) && ctx.pc == 0x08AC8FA4u) goto L_08AC8FA4;
    return;
L_08AC8FA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AC8FB4u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08AC8E50;
L_08AC8FB4:
    ctx.gpr[31] = (0x08AC8FBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 187u, 0x08A5D504u>(ctx, &aot_mem) && ctx.pc == 0x08AC8FBCu) goto L_08AC8FBC;
    return;
L_08AC8FBC:
    ctx.gpr[31] = (0x08AC8FC4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC8FC4u) goto L_08AC8FC4;
    return;
L_08AC8FC4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC8FD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC8FECu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 182u, 0x08A5D49Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC8FECu) goto L_08AC8FEC;
    return;
L_08AC8FEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC900C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28536)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9030:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AC9058u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30428));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 296u, 0x08A35E54u>(ctx, &aot_mem) && ctx.pc == 0x08AC9058u) goto L_08AC9058;
    return;
L_08AC9058:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9064:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(1), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(5), ctx.gpr[9]));
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(9), ctx.gpr[10]));
    ctx.gpr[11] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(17), ctx.gpr[11]));
    ctx.gpr[12] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(21), ctx.gpr[12]));
    ctx.gpr[13] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(25), ctx.gpr[13]));
    ctx.gpr[14] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(33), ctx.gpr[14]));
    ctx.gpr[15] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(37), ctx.gpr[15]));
    ctx.gpr[24] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(41), ctx.gpr[24]));
    ctx.gpr[25] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(49), ctx.gpr[25]));
    ctx.gpr[2] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(53), ctx.gpr[2]));
    ctx.gpr[3] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(57), ctx.gpr[3]));
    ctx.gpr[8] = ((ctx.gpr[8] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[9] = ((ctx.gpr[9] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[11] = ((ctx.gpr[11] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[15] = ((ctx.gpr[15] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[24] = ((ctx.gpr[24] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[25] = ((ctx.gpr[25] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[2] = ((ctx.gpr[2] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    ctx.gpr[3] = ((ctx.gpr[3] & ~0xFF000000u) | ((ctx.gpr[5] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(12), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(16), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(20), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(24), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(28), ctx.gpr[15]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(32), ctx.gpr[24]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[25]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(40), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(44), ctx.gpr[3]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9108:
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<15u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<24u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<25u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<26u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<27u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<27u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<15u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 56u, 3u);
      ctx.read_vfpu_vector_ct<4u, 3u>(vfpu_target_raw);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 5u, vfpu_side); }
    ctx.execute_vfpu_vscl_ct<0u, 24u, 8u, 3u>();
    ctx.execute_vfpu_vscl_ct<1u, 25u, 40u, 3u>();
    ctx.execute_vfpu_vscl_ct<2u, 26u, 72u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<3u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<3u, 3u>(vfpu_d); }
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<64u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<1u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<33u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<65u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[14]);
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<2u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<34u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<66u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[14]);
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<3u>());
    ctx.gpr[13] = (ctx.vfpu_scalar_bits_ct<35u>());
    ctx.gpr[14] = (ctx.vfpu_scalar_bits_ct<67u>());
    ctx.gpr[12] = (ctx.gpr[12] >> 8u);
    ctx.gpr[13] = (ctx.gpr[13] >> 8u);
    ctx.gpr[14] = (ctx.gpr[14] >> 8u);
    ctx.gpr[12] = ((ctx.gpr[12] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[13] = ((ctx.gpr[13] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    ctx.gpr[14] = ((ctx.gpr[14] & ~0xFF000000u) | ((ctx.gpr[8] & 0x000000FFu) << 24u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[14]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AC9208:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[31]);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2784));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[8]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC92A4;
      }
      goto L_08AC928C;
    }
L_08AC928C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC928C;
      }
      goto L_08AC92A4;
    }
L_08AC92A4:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-13616)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC92CC;
      }
      goto L_08AC92B0;
    }
L_08AC92B0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13616), ctx.gpr[8]);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13600), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13600));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AC92CC;
L_08AC92CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-13612)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AC92FC;
      }
      goto L_08AC92D8;
    }
L_08AC92D8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-13612), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-13584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13584));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AC92FC;
L_08AC92FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-13568)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8100)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_08AC9370;
    }
    goto L_08AC930C;
L_08AC930C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8100)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-13568), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13584));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-13600));
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
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08AC9370;
L_08AC9370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28536)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(15));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08AC9398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 136u, 0x0890CBD0u>(ctx, &aot_mem) && ctx.pc == 0x08AC9398u) goto L_08AC9398;
    return;
L_08AC9398:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AC93A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 303u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x08AC93A4u) goto L_08AC93A4;
    return;
L_08AC93A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08AC93BC;
      }
      goto L_08AC93B4;
    }
L_08AC93B4:
    ctx.gpr[31] = (0x08AC93BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 630u, 0x08AB37FCu>(ctx, &aot_mem) && ctx.pc == 0x08AC93BCu) goto L_08AC93BC;
    return;
L_08AC93BC:
    ctx.gpr[30] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC956C;
      }
      goto L_08AC93C8;
    }
L_08AC93C8:
    ctx.gpr[31] = (0x08AC93D0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D08Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC93D0u) goto L_08AC93D0;
    return;
L_08AC93D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08AC93E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 191u, 0x0890D0B4u>(ctx, &aot_mem) && ctx.pc == 0x08AC93E0u) goto L_08AC93E0;
    return;
L_08AC93E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
        goto L_08AC9400;
    }
    goto L_08AC93F0;
L_08AC93F0:
    ctx.gpr[31] = (0x08AC93F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 178u, 0x0890D004u>(ctx, &aot_mem) && ctx.pc == 0x08AC93F8u) goto L_08AC93F8;
    return;
L_08AC93F8:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[18]);
    goto L_08AC9400;
L_08AC9400:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9518;
      }
      goto L_08AC9408;
    }
L_08AC9408:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AC9518;
      }
      goto L_08AC9418;
    }
L_08AC9418:
    ctx.gpr[4] = (14848u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30400));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC9448u);
    ctx.gpr[5] = (0u | 59u);
    goto L_08AC9064;
L_08AC9448:
    ctx.gpr[31] = (0x08AC9450u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 137u, 0x0890CBE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC9450u) goto L_08AC9450;
    return;
L_08AC9450:
    ctx.gpr[4] = (ctx.gpr[2] << 4u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[30] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[30] = (ctx.gpr[30] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[30]);
    ctx.gpr[17] = (ctx.gpr[30] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (2816u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    goto L_08AC9498;
L_08AC9498:
    ctx.gpr[31] = (0x08AC94A0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 137u, 0x0890CBE4u>(ctx, &aot_mem) && ctx.pc == 0x08AC94A0u) goto L_08AC94A0;
    return;
L_08AC94A0:
    ctx.gpr[4] = (ctx.gpr[20] < ctx.gpr[2] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9510;
      }
      goto L_08AC94AC;
    }
L_08AC94AC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC94BCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A06584u>(ctx, &aot_mem) && ctx.pc == 0x08AC94BCu) goto L_08AC94BC;
    return;
L_08AC94BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AC94D4u);
    ctx.gpr[8] = (0u | 43u);
    goto L_08AC9108;
L_08AC94D4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9500;
      }
      goto L_08AC94EC;
    }
L_08AC94EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9500;
      }
      goto L_08AC94F8;
    }
L_08AC94F8:
    ctx.gpr[31] = (0x08AC9500u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08AC9500u) goto L_08AC9500;
    return;
L_08AC9500:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08AC9498;
      }
      goto L_08AC9510;
    }
L_08AC9510:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9564;
      }
      goto L_08AC9518;
    }
L_08AC9518:
    ctx.gpr[4] = (14848u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[18]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AC9540u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08AC9540u) goto L_08AC9540;
    return;
L_08AC9540:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC9558u);
    ctx.gpr[8] = (0u | 59u);
    goto L_08AC9108;
L_08AC9558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08AC9564;
L_08AC9564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_08AC95BC;
      }
      goto L_08AC956C;
    }
L_08AC956C:
    ctx.gpr[4] = (14848u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[18]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AC9594u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 226u, 0x08A5D820u>(ctx, &aot_mem) && ctx.pc == 0x08AC9594u) goto L_08AC9594;
    return;
L_08AC9594:
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AC95ACu);
    ctx.gpr[8] = (0u | 59u);
    goto L_08AC9108;
L_08AC95AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08AC95BC;
L_08AC95BC:
    ctx.gpr[31] = (0x08AC95C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 532u, 0x088CFDECu>(ctx, &aot_mem) && ctx.pc == 0x08AC95C4u) goto L_08AC95C4;
    return;
L_08AC95C4:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC998C;
      }
      goto L_08AC95E4;
    }
L_08AC95E4:
    ctx.gpr[23] = (10752u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[19] = (256u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (2560u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_08AC9604;
L_08AC9604:
    ctx.gpr[21] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (15u << 16u);
      if (branch_taken) {
          goto L_08AC96A4;
      }
      goto L_08AC9610;
    }
L_08AC9610:
    ctx.gpr[5] = (ctx.gpr[30] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[2] = (0u | 0u);
    goto L_08AC9644;
L_08AC9644:
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[2] | ctx.gpr[23]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[30] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AC9644;
      }
      goto L_08AC96A4;
    }
L_08AC96A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
        goto L_08AC96D4;
    }
    goto L_08AC96CC;
L_08AC96CC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    goto L_08AC96D4;
L_08AC96D4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AC96E0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 532u, 0x08AD6774u>(ctx, &aot_mem) && ctx.pc == 0x08AC96E0u) goto L_08AC96E0;
    return;
L_08AC96E0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC96ECu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 544u, 0x08AD688Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC96ECu) goto L_08AC96EC;
    return;
L_08AC96EC:
    ctx.gpr[5] = (ctx.gpr[2] & 2u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
      if (branch_taken) {
          goto L_08AC9724;
      }
      goto L_08AC96FC;
    }
L_08AC96FC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-30331)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (21760u << 16u);
      if (branch_taken) {
          goto L_08AC9728;
      }
      goto L_08AC970C;
    }
L_08AC970C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-30330)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(196), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AC9724;
      }
      goto L_08AC971C;
    }
L_08AC971C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08AC9970;
      }
      goto L_08AC9724;
    }
L_08AC9724:
    ctx.gpr[5] = (21760u << 16u);
    goto L_08AC9728;
L_08AC9728:
    ctx.gpr[6] = (ctx.gpr[17] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (22528u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[17] >> 24u);
    ctx.gpr[7] = (ctx.gpr[8] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (22016u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[7] = (22272u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC983C;
      }
      goto L_08AC9798;
    }
L_08AC9798:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7328)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (53248u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (18432u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (ctx.gpr[7] >> 8u);
    ctx.gpr[6] = (ctx.gpr[7] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (18688u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC9834u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 427u, 0x0894E720u>(ctx, &aot_mem) && ctx.pc == 0x08AC9834u) goto L_08AC9834;
    return;
L_08AC9834:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
      if (branch_taken) {
          goto L_08AC984C;
      }
      goto L_08AC983C;
    }
L_08AC983C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AC9848u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 427u, 0x0894E720u>(ctx, &aot_mem) && ctx.pc == 0x08AC9848u) goto L_08AC9848;
    return;
L_08AC9848:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    goto L_08AC984C;
L_08AC984C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(64)));
    ctx.gpr[7] = (ctx.gpr[9] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 6144u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (4608u << 16u);
      if (branch_taken) {
          goto L_08AC9890;
      }
      goto L_08AC9880;
    }
L_08AC9880:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (4608u << 16u);
    goto L_08AC9890;
L_08AC9890:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC98FC;
      }
      goto L_08AC98B0;
    }
L_08AC98B0:
    ctx.gpr[5] = (15u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[9] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[9]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08AC98FC;
L_08AC98FC:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (1028u << 16u);
      if (branch_taken) {
          goto L_08AC9954;
      }
      goto L_08AC9904;
    }
L_08AC9904:
    ctx.gpr[4] = (15u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[6] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[7] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (1028u << 16u);
    goto L_08AC9954;
L_08AC9954:
    ctx.gpr[4] = (ctx.gpr[8] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    goto L_08AC9970;
L_08AC9970:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AC9604;
      }
      goto L_08AC998C;
    }
L_08AC998C:
    ctx.gpr[31] = (0x08AC9994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 490u, 0x088CFA34u>(ctx, &aot_mem) && ctx.pc == 0x08AC9994u) goto L_08AC9994;
    return;
L_08AC9994:
    ctx.gpr[4] = (18432u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (18688u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA0A4;
      }
      goto L_08AC99E4;
    }
L_08AC99E4:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08AC99F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 569u, 0x088B7938u>(ctx, &aot_mem) && ctx.pc == 0x08AC99F0u) goto L_08AC99F0;
    return;
L_08AC99F0:
    ctx.gpr[17] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (8704u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08AC9A18u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AC9A18u) goto L_08AC9A18;
    return;
L_08AC9A18:
    ctx.gpr[4] = (22016u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(255));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (22272u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (22528u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (24320u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-13600)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (25344u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13600));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (25600u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (25856u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (37120u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (6144u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (24576u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-13584)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (26112u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-13584));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] >> 8u);
    ctx.gpr[7] = (26368u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] >> 8u);
    ctx.gpr[6] = (26624u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (37888u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (6400u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (49408u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30332)));
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(197), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08AC9C48;
      }
      goto L_08AC9C30;
    }
L_08AC9C30:
    ctx.gpr[5] = (8960u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    goto L_08AC9C48;
L_08AC9C48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9D24;
      }
      goto L_08AC9C54;
    }
L_08AC9C54:
    ctx.gpr[5] = (7680u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[6] = (49664u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[6] = (49920u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[6] = (51968u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30336)));
    ctx.gpr[7] = (ctx.gpr[4] >> 8u);
    ctx.gpr[8] = (256u << 16u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[8]);
    ctx.gpr[8] = (40960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (255u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] & ctx.gpr[5]);
    ctx.gpr[7] = (43008u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (47104u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1542));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08AC9D24;
L_08AC9D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9FE4;
      }
      goto L_08AC9D3C;
    }
L_08AC9D3C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (1u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(257));
    ctx.gpr[19] = (256u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (15u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-5168));
    ctx.gpr[23] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_08AC9D78;
L_08AC9D78:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC9D9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 544u, 0x08AD688Cu>(ctx, &aot_mem) && ctx.pc == 0x08AC9D9Cu) goto L_08AC9D9C;
    return;
L_08AC9D9C:
    ctx.gpr[4] = (ctx.gpr[2] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9FCC;
      }
      goto L_08AC9DA8;
    }
L_08AC9DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DF0;
      }
      goto L_08AC9DC8;
    }
L_08AC9DC8:
    ctx.gpr[31] = (0x08AC9DD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 556u, 0x08AD6990u>(ctx, &aot_mem) && ctx.pc == 0x08AC9DD0u) goto L_08AC9DD0;
    return;
L_08AC9DD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9DE4;
      }
      goto L_08AC9DDC;
    }
L_08AC9DDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9FCC;
      }
      goto L_08AC9DE4;
    }
L_08AC9DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AC9DF0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 427u, 0x0894E720u>(ctx, &aot_mem) && ctx.pc == 0x08AC9DF0u) goto L_08AC9DF0;
    return;
L_08AC9DF0:
    ctx.gpr[31] = (0x08AC9DF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 555u, 0x08AD6978u>(ctx, &aot_mem) && ctx.pc == 0x08AC9DF8u) goto L_08AC9DF8;
    return;
L_08AC9DF8:
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8044)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[3] = (0u | 255u);
      if (branch_taken) {
          goto L_08AC9E34;
      }
      goto L_08AC9E20;
    }
L_08AC9E20:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08AC9E34;
    }
    goto L_08AC9E34;
L_08AC9E34:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-30330)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AC9E54;
      }
      goto L_08AC9E50;
    }
L_08AC9E50:
    ctx.gpr[4] = (ctx.gpr[3] | 0u);
    goto L_08AC9E54;
L_08AC9E54:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[3] - ctx.gpr[4]);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[22])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (57088u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(170));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (57344u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (57600u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(64)));
    ctx.gpr[9] = (ctx.gpr[11] + ctx.gpr[9]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 6144u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (4608u << 16u);
      if (branch_taken) {
          goto L_08AC9F08;
      }
      goto L_08AC9EF8;
    }
L_08AC9EF8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (4608u << 16u);
    goto L_08AC9F08;
L_08AC9F08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AC9F68;
      }
      goto L_08AC9F28;
    }
L_08AC9F28:
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[23]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (512u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08AC9F68;
L_08AC9F68:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (1028u << 16u);
      if (branch_taken) {
          goto L_08AC9FB4;
      }
      goto L_08AC9F70;
    }
L_08AC9F70:
    ctx.gpr[4] = (ctx.gpr[9] >> 8u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (256u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[9] & ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (1028u << 16u);
    goto L_08AC9FB4;
L_08AC9FB4:
    ctx.gpr[4] = (ctx.gpr[10] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08AC9FCC;
L_08AC9FCC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AC9D78;
      }
      goto L_08AC9FE4;
    }
L_08AC9FE4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x08AC9FF0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 427u, 0x0894E720u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FF0u) goto L_08AC9FF0;
    return;
L_08AC9FF0:
    ctx.gpr[31] = (0x08AC9FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 590u, 0x088B7A44u>(ctx, &aot_mem) && ctx.pc == 0x08AC9FF8u) goto L_08AC9FF8;
    return;
L_08AC9FF8:
    ctx.gpr[4] = (6144u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (6400u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(197)));
    ctx.gpr[31] = (0x08ACA030u);
    ctx.gpr[4] = (0u | 14u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA030u) goto L_08ACA030;
    return;
L_08ACA030:
    ctx.gpr[4] = (8704u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (49152u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[5] = (49408u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(256));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-30332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA0A4;
      }
      goto L_08ACA088;
    }
L_08ACA088:
    ctx.gpr[4] = (8960u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-5168), ctx.gpr[4]);
    goto L_08ACA0A4;
L_08ACA0A4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA0E8:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30460)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30456), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30464)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30452), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30444), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30436)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-30432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA17C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACA190u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08ACA190u) goto L_08ACA190;
    return;
L_08ACA190:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACA19Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08ACA1AC;
L_08ACA19C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA1AC:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA1F0;
      }
      goto L_08ACA1C4;
    }
L_08ACA1C4:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] << 10u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[6] >> 6u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] ^ ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA1C4;
      }
      goto L_08ACA1F0;
    }
L_08ACA1F0:
    ctx.gpr[4] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] >> 11u);
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] << 15u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA20C:
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[3] = ctx.fpr[17] - ctx.fpr[15];
    ctx.fpr[4] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[5] = ctx.fpr[16] - ctx.fpr[14];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[4]; const float ft = ctx.fpr[5]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[4] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[4] = fs * ft; }
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.fpr[3] = ctx.fpr[3] - ctx.fpr[4];
    ctx.set_fpu_condition((ctx.fpr[3] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08ACA2DC;
      }
      goto L_08ACA240;
    }
L_08ACA240:
    ctx.fpr[3] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[4] = ctx.fpr[19] - ctx.fpr[17];
    ctx.fpr[16] = ctx.fpr[18] - ctx.fpr[16];
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[17];
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[3] - ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA2D4;
      }
      goto L_08ACA26C;
    }
L_08ACA26C:
    ctx.fpr[16] = ctx.fpr[12] - ctx.fpr[18];
    ctx.fpr[17] = ctx.fpr[2] - ctx.fpr[19];
    ctx.fpr[18] = ctx.fpr[1] - ctx.fpr[18];
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[19];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[18];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA2CC;
      }
      goto L_08ACA298;
    }
L_08ACA298:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[1];
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[2];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[2];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[1];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA2E4;
      }
      goto L_08ACA2C4;
    }
L_08ACA2C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA2E8;
      }
      goto L_08ACA2CC;
    }
L_08ACA2CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA2E8;
      }
      goto L_08ACA2D4;
    }
L_08ACA2D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA2E8;
      }
      goto L_08ACA2DC;
    }
L_08ACA2DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA2E8;
      }
      goto L_08ACA2E4;
    }
L_08ACA2E4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08ACA2E8;
L_08ACA2E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA2F0:
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5964), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5948), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5952), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5956), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5960), 0u);
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5966), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA324:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_08ACA40C;
      }
      goto L_08ACA348;
    }
L_08ACA348:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08ACA3FC;
      }
      goto L_08ACA350;
    }
L_08ACA350:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACA444;
      }
      goto L_08ACA358;
    }
L_08ACA358:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08ACA364u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 559u, 0x088EF634u>(ctx, &aot_mem) && ctx.pc == 0x08ACA364u) goto L_08ACA364;
    return;
L_08ACA364:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08ACA384u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08ACA4A8;
L_08ACA384:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5960), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA3A0;
      }
      goto L_08ACA398;
    }
L_08ACA398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA3A4;
      }
      goto L_08ACA3A0;
    }
L_08ACA3A0:
    ctx.gpr[16] = (0u | 0u);
    goto L_08ACA3A4;
L_08ACA3A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5966)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACA3F4;
      }
      goto L_08ACA3B4;
    }
L_08ACA3B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA3E0;
      }
      goto L_08ACA3D0;
    }
L_08ACA3D0:
    ctx.gpr[31] = (0x08ACA3D8u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08ACA6FC;
L_08ACA3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA3EC;
      }
      goto L_08ACA3E0;
    }
L_08ACA3E0:
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08ACA3ECu);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08ACA6FC;
L_08ACA3EC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-5966), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08ACA3F4;
L_08ACA3F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA444;
      }
      goto L_08ACA3FC;
    }
L_08ACA3FC:
    ctx.gpr[31] = (0x08ACA404u);
    // nop
    goto L_08ACAA34;
L_08ACA404:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA444;
      }
      goto L_08ACA40C;
    }
L_08ACA40C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08ACA418u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08ACA418u) goto L_08ACA418;
    return;
L_08ACA418:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5952));
    ctx.gpr[31] = (0x08ACA43Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACA4A8;
L_08ACA43C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5956), ctx.gpr[2]);
    goto L_08ACA444;
L_08ACA444:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA490;
      }
      goto L_08ACA458;
    }
L_08ACA458:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08ACA464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08ACA464u) goto L_08ACA464;
    return;
L_08ACA464:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5952));
    ctx.gpr[31] = (0x08ACA488u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08ACA4A8;
L_08ACA488:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5956), ctx.gpr[2]);
    goto L_08ACA490;
L_08ACA490:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA4A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA4A8:
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[10] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ACA4B8;
      }
      goto L_08ACA4B4;
    }
L_08ACA4B4:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    goto L_08ACA4B8;
L_08ACA4B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-5964)));
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[9] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA5D0;
      }
      goto L_08ACA4CC;
    }
L_08ACA4CC:
    ctx.gpr[8] = (2230u << 16u);
    goto L_08ACA4D0;
L_08ACA4D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-5948)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5BC;
      }
      goto L_08ACA4F8;
    }
L_08ACA4F8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5BC;
      }
      goto L_08ACA514;
    }
L_08ACA514:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5BC;
      }
      goto L_08ACA534;
    }
L_08ACA534:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5BC;
      }
      goto L_08ACA550;
    }
L_08ACA550:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5BC;
      }
      goto L_08ACA570;
    }
L_08ACA570:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(10))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA5BC;
      }
      goto L_08ACA58C;
    }
L_08ACA58C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(12))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[6]);
      if (branch_taken) {
          goto L_08ACA5BC;
      }
      goto L_08ACA598;
    }
L_08ACA598:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA5B8;
      }
      goto L_08ACA5B0;
    }
L_08ACA5B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ACA5B8;
      }
      goto L_08ACA5B8;
    }
L_08ACA5B8:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    goto L_08ACA5BC;
L_08ACA5BC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-5964)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[11]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACA4D0;
      }
      goto L_08ACA5D0;
    }
L_08ACA5D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA5D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACA5E8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08ACA5E8u) goto L_08ACA5E8;
    return;
L_08ACA5E8:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-5964)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ACA6E4;
      }
      goto L_08ACA600;
    }
L_08ACA600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5948)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08ACA618;
L_08ACA618:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(12))))));
    ctx.gpr[9] = (ctx.gpr[9] & 2u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA6D0;
      }
      goto L_08ACA628;
    }
L_08ACA628:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA6D0;
      }
      goto L_08ACA644;
    }
L_08ACA644:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA6D0;
      }
      goto L_08ACA660;
    }
L_08ACA660:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA6D0;
      }
      goto L_08ACA67C;
    }
L_08ACA67C:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA6D0;
      }
      goto L_08ACA698;
    }
L_08ACA698:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA6D0;
      }
      goto L_08ACA6B4;
    }
L_08ACA6B4:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(10))))));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08ACA6EC;
      }
      goto L_08ACA6D0;
    }
L_08ACA6D0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08ACA618;
      }
      goto L_08ACA6E4;
    }
L_08ACA6E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA6F0;
      }
      goto L_08ACA6EC;
    }
L_08ACA6EC:
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08ACA6F0;
L_08ACA6F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA6FC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[9] = (ctx.gpr[4] & 255u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15308)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15304)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA7A4;
      }
      goto L_08ACA728;
    }
L_08ACA728:
    ctx.gpr[11] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[9] & 1u);
    ctx.gpr[8] = (65528u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 19u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08ACA744;
L_08ACA744:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[4]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    ctx.gpr[3] = (ctx.gpr[3] & 128u);
    if (ctx.gpr[3] == 0u) {
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
        goto L_08ACA764;
    }
    goto L_08ACA75C;
L_08ACA75C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA768;
      }
      goto L_08ACA764;
    }
L_08ACA764:
    ctx.gpr[3] = (ctx.gpr[3] + ctx.gpr[11]);
    goto L_08ACA768;
L_08ACA768:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA790;
      }
      goto L_08ACA770;
    }
L_08ACA770:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(72)));
    ctx.gpr[12] = (ctx.gpr[12] & 16u);
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA790;
      }
      goto L_08ACA780;
    }
L_08ACA780:
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(68)));
    ctx.gpr[12] = (ctx.gpr[12] & ctx.gpr[8]);
    ctx.gpr[12] = (ctx.gpr[12] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(68), ctx.gpr[12]);
    goto L_08ACA790;
L_08ACA790:
    ctx.gpr[3] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08ACA744;
      }
      goto L_08ACA7A4;
    }
L_08ACA7A4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA830;
      }
      goto L_08ACA7B4;
    }
L_08ACA7B4:
    ctx.gpr[11] = (ctx.gpr[4] << 5u);
    ctx.gpr[8] = (ctx.gpr[11] + ctx.gpr[11]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[9] & 1u);
    ctx.gpr[8] = (65528u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] << 19u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08ACA7D0;
L_08ACA7D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[2] & 128u);
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
        goto L_08ACA7F0;
    }
    goto L_08ACA7E8;
L_08ACA7E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA7F4;
      }
      goto L_08ACA7F0;
    }
L_08ACA7F0:
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[11]);
    goto L_08ACA7F4;
L_08ACA7F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA81C;
      }
      goto L_08ACA7FC;
    }
L_08ACA7FC:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(72)));
    ctx.gpr[3] = (ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA81C;
      }
      goto L_08ACA80C;
    }
L_08ACA80C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[8]);
    ctx.gpr[3] = (ctx.gpr[3] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[3]);
    goto L_08ACA81C;
L_08ACA81C:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08ACA7D0;
      }
      goto L_08ACA830;
    }
L_08ACA830:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACA8E0;
      }
      goto L_08ACA840;
    }
L_08ACA840:
    ctx.gpr[8] = (ctx.gpr[4] << 5u);
    ctx.gpr[10] = (0u - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 3u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 1u);
    ctx.gpr[10] = (ctx.gpr[10] - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] & 1u);
    ctx.gpr[8] = (65528u << 16u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[7] << 19u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    goto L_08ACA878;
L_08ACA878:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[11] & 128u);
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08ACA898;
    }
    goto L_08ACA890;
L_08ACA890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACA89C;
      }
      goto L_08ACA898;
    }
L_08ACA898:
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    goto L_08ACA89C;
L_08ACA89C:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA8CC;
      }
      goto L_08ACA8A4;
    }
L_08ACA8A4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08ACA8CC;
      }
      goto L_08ACA8B0;
    }
L_08ACA8B0:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA8CC;
      }
      goto L_08ACA8BC;
    }
L_08ACA8BC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(68)));
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[8]);
    ctx.gpr[2] = (ctx.gpr[2] | ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(68), ctx.gpr[2]);
    goto L_08ACA8CC;
L_08ACA8CC:
    ctx.gpr[11] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_08ACA878;
      }
      goto L_08ACA8E0;
    }
L_08ACA8E0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA8E8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5956)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA904;
      }
      goto L_08ACA8FC;
    }
L_08ACA8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA908;
      }
      goto L_08ACA904;
    }
L_08ACA904:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA908;
L_08ACA908:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA910:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5956)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA92C;
      }
      goto L_08ACA924;
    }
L_08ACA924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA930;
      }
      goto L_08ACA92C;
    }
L_08ACA92C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA930;
L_08ACA930:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA938:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5956)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA954;
      }
      goto L_08ACA94C;
    }
L_08ACA94C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA958;
      }
      goto L_08ACA954;
    }
L_08ACA954:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA958;
L_08ACA958:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA960:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5956)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA97C;
      }
      goto L_08ACA974;
    }
L_08ACA974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA980;
      }
      goto L_08ACA97C;
    }
L_08ACA97C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA980;
L_08ACA980:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA988:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5956)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA9A4;
      }
      goto L_08ACA99C;
    }
L_08ACA99C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA9A8;
      }
      goto L_08ACA9A4;
    }
L_08ACA9A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA9A8;
L_08ACA9A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA9B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5960)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA9CC;
      }
      goto L_08ACA9C4;
    }
L_08ACA9C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA9D0;
      }
      goto L_08ACA9CC;
    }
L_08ACA9CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA9D0;
L_08ACA9D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACA9D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5960)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACA9F4;
      }
      goto L_08ACA9EC;
    }
L_08ACA9EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACA9F8;
      }
      goto L_08ACA9F4;
    }
L_08ACA9F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACA9F8;
L_08ACA9F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAA00:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5956)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAA1C;
      }
      goto L_08ACAA14;
    }
L_08ACAA14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACAA20;
      }
      goto L_08ACAA1C;
    }
L_08ACAA1C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACAA20;
L_08ACAA20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAA28:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5952)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAA34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (17490u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (50394u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (50381u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] | 36045u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17467u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63898u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17566u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31130u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17522u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 63898u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17560u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 1638u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[4] = (17352u << 16u);
    ctx.gpr[31] = (0x08ACAAB0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08ACA20C;
L_08ACAAB0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-30280), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAAC4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30316)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30320)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30292)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-30312), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-30304), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-30308), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-30300), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-30296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-30288), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAB58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACAB7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACAB7Cu) goto L_08ACAB7C;
    return;
L_08ACAB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACAB98;
      }
      goto L_08ACAB8C;
    }
L_08ACAB8C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACAB98;
L_08ACAB98:
    ctx.gpr[31] = (0x08ACABA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACABA0u) goto L_08ACABA0;
    return;
L_08ACABA0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACABB8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08ACABC8;
      }
      goto L_08ACABC0;
    }
L_08ACABC0:
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    goto L_08ACABC8;
L_08ACABC8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACABD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACABFCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACABFCu) goto L_08ACABFC;
    return;
L_08ACABFC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAC0Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC0Cu) goto L_08ACAC0C;
    return;
L_08ACAC0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ACAC1Cu);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACABB8;
L_08ACAC1C:
    ctx.gpr[6] = (49024u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAC34u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 460u, 0x08A4B7FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAC34u) goto L_08ACAC34;
    return;
L_08ACAC34:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ACAC44u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08ACABB8;
L_08ACAC44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08ACAC58;
      }
      goto L_08ACAC54;
    }
L_08ACAC54:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08ACAC58;
L_08ACAC58:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAC68;
      }
      goto L_08ACAC64;
    }
L_08ACAC64:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_08ACAC68;
L_08ACAC68:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAC94;
      }
      goto L_08ACAC74;
    }
L_08ACAC74:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08ACAC8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08ACAC8Cu) goto L_08ACAC8C;
    return;
L_08ACAC8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACACA8;
      }
      goto L_08ACAC94;
    }
L_08ACAC94:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08ACACA8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15436));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08ACACA8u) goto L_08ACACA8;
    return;
L_08ACACA8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_08ACACC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACACFCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACACFCu) goto L_08ACACFC;
    return;
L_08ACACFC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAD10u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 17u, 0x08A4C150u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD10u) goto L_08ACAD10;
    return;
L_08ACAD10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ACAD94;
      }
      goto L_08ACAD24;
    }
L_08ACAD24:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08ACAD30;
L_08ACAD30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACAD4C;
      }
      goto L_08ACAD40;
    }
L_08ACAD40:
    ctx.gpr[31] = (0x08ACAD48u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD48u) goto L_08ACAD48;
    return;
L_08ACAD48:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    goto L_08ACAD4C;
L_08ACAD4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD70;
      }
      goto L_08ACAD68;
    }
L_08ACAD68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08ACAD70;
      }
      goto L_08ACAD70;
    }
L_08ACAD70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAD30;
      }
      goto L_08ACAD94;
    }
L_08ACAD94:
    ctx.gpr[31] = (0x08ACAD9Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 3u, 0x08A4C040u>(ctx, &aot_mem) && ctx.pc == 0x08ACAD9Cu) goto L_08ACAD9C;
    return;
L_08ACAD9C:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACADC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACADF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACADF8u) goto L_08ACADF8;
    return;
L_08ACADF8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAE0Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 17u, 0x08A4C150u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE0Cu) goto L_08ACAE0C;
    return;
L_08ACAE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08ACAE90;
      }
      goto L_08ACAE20;
    }
L_08ACAE20:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    goto L_08ACAE2C;
L_08ACAE2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACAE48;
      }
      goto L_08ACAE3C;
    }
L_08ACAE3C:
    ctx.gpr[31] = (0x08ACAE44u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE44u) goto L_08ACAE44;
    return;
L_08ACAE44:
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[18]);
    goto L_08ACAE48;
L_08ACAE48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAE6C;
      }
      goto L_08ACAE64;
    }
L_08ACAE64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
      if (branch_taken) {
          goto L_08ACAE6C;
      }
      goto L_08ACAE6C;
    }
L_08ACAE6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAE2C;
      }
      goto L_08ACAE90;
    }
L_08ACAE90:
    ctx.gpr[31] = (0x08ACAE98u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 3u, 0x08A4C040u>(ctx, &aot_mem) && ctx.pc == 0x08ACAE98u) goto L_08ACAE98;
    return;
L_08ACAE98:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAEC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACAEF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACAEF4u) goto L_08ACAEF4;
    return;
L_08ACAEF4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAF04u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF04u) goto L_08ACAF04;
    return;
L_08ACAF04:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAF1Cu);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 17u, 0x08A4C150u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF1Cu) goto L_08ACAF1C;
    return;
L_08ACAF1C:
    ctx.gpr[16] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACAF48;
      }
      goto L_08ACAF28;
    }
L_08ACAF28:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACAF38u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 593u, 0x08A4BFACu>(ctx, &aot_mem) && ctx.pc == 0x08ACAF38u) goto L_08ACAF38;
    return;
L_08ACAF38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACAF28;
      }
      goto L_08ACAF48;
    }
L_08ACAF48:
    ctx.gpr[31] = (0x08ACAF50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 3u, 0x08A4C040u>(ctx, &aot_mem) && ctx.pc == 0x08ACAF50u) goto L_08ACAF50;
    return;
L_08ACAF50:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACAF78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACAFA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACAFA0u) goto L_08ACAFA0;
    return;
L_08ACAFA0:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACAFB8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 460u, 0x08A4B7FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACAFB8u) goto L_08ACAFB8;
    return;
L_08ACAFB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ACAFC8u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACABB8;
L_08ACAFC8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08ACAFE4;
      }
      goto L_08ACAFD4;
    }
L_08ACAFD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACAFEC;
      }
      goto L_08ACAFE4;
    }
L_08ACAFE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACB00C;
      }
      goto L_08ACAFEC;
    }
L_08ACAFEC:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-1))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACB008u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACB008u) goto L_08ACB008;
    return;
L_08ACB008:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08ACB00C;
L_08ACB00C:
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
L_08ACB024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1088));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1068), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1080), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACB050u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08ACB050u) goto L_08ACB050;
    return;
L_08ACB050:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB064u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 17u, 0x08A4C150u>(ctx, &aot_mem) && ctx.pc == 0x08ACB064u) goto L_08ACB064;
    return;
L_08ACB064:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACB0E0;
      }
      goto L_08ACB070;
    }
L_08ACB070:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-15432));
    goto L_08ACB07C;
L_08ACB07C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB088u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08ACB088u) goto L_08ACB088;
    return;
L_08ACB088:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[19] & 255u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08ACB0A8;
      }
      goto L_08ACB09C;
    }
L_08ACB09C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACB0A8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 361u, 0x08A4B144u>(ctx, &aot_mem) && ctx.pc == 0x08ACB0A8u) goto L_08ACB0A8;
    return;
L_08ACB0A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB0C0;
      }
      goto L_08ACB0B8;
    }
L_08ACB0B8:
    ctx.gpr[31] = (0x08ACB0C0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 589u, 0x08A4BF74u>(ctx, &aot_mem) && ctx.pc == 0x08ACB0C0u) goto L_08ACB0C0;
    return;
L_08ACB0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB07C;
      }
      goto L_08ACB0E0;
    }
L_08ACB0E0:
    ctx.gpr[31] = (0x08ACB0E8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 3u, 0x08A4C040u>(ctx, &aot_mem) && ctx.pc == 0x08ACB0E8u) goto L_08ACB0E8;
    return;
L_08ACB0E8:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACB124u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 593u, 0x08A4BFACu>(ctx, &aot_mem) && ctx.pc == 0x08ACB124u) goto L_08ACB124;
    return;
L_08ACB124:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB134:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1056), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1064), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACB15Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 429u, 0x08A4B5E0u>(ctx, &aot_mem) && ctx.pc == 0x08ACB15Cu) goto L_08ACB15C;
    return;
L_08ACB15C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB16Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 17u, 0x08A4C150u>(ctx, &aot_mem) && ctx.pc == 0x08ACB16Cu) goto L_08ACB16C;
    return;
L_08ACB16C:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB180u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20204));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 65u, 0x0890C5E8u>(ctx, &aot_mem) && ctx.pc == 0x08ACB180u) goto L_08ACB180;
    return;
L_08ACB180:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB198;
      }
      goto L_08ACB188;
    }
L_08ACB188:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB198u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15416));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACB198u) goto L_08ACB198;
    return;
L_08ACB198:
    ctx.gpr[31] = (0x08ACB1A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 3u, 0x08A4C040u>(ctx, &aot_mem) && ctx.pc == 0x08ACB1A0u) goto L_08ACB1A0;
    return;
L_08ACB1A0:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB1BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(-49));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08ACB1F4;
      }
      goto L_08ACB1D0;
    }
L_08ACB1D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[2] << 3u);
      if (branch_taken) {
          goto L_08ACB1F4;
      }
      goto L_08ACB1E0;
    }
L_08ACB1E0:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ACB20C;
      }
      goto L_08ACB1F4;
    }
L_08ACB1F4:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACB204u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15384));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACB204u) goto L_08ACB204;
    return;
L_08ACB204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB20C;
      }
      goto L_08ACB20C;
    }
L_08ACB20C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB218:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    ctx.gpr[6] = (ctx.gpr[2] << 3u);
      if (branch_taken) {
          goto L_08ACB258;
      }
      goto L_08ACB234;
    }
L_08ACB234:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08ACB23C;
L_08ACB23C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08ACB270;
      }
      goto L_08ACB248;
    }
L_08ACB248:
    ctx.gpr[2] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) >= 0;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-8));
      if (branch_taken) {
          goto L_08ACB23C;
      }
      goto L_08ACB258;
    }
L_08ACB258:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACB268u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15360));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACB268u) goto L_08ACB268;
    return;
L_08ACB268:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB270;
      }
      goto L_08ACB270;
    }
L_08ACB270:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB27C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 38 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB2B4;
      }
      goto L_08ACB294;
    }
L_08ACB294:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 37 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB2D8;
      }
      goto L_08ACB2A0;
    }
L_08ACB2A0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB2E0;
      }
      goto L_08ACB2AC;
    }
L_08ACB2AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB2F8;
      }
      goto L_08ACB2B4;
    }
L_08ACB2B4:
    ctx.gpr[7] = (0u | 91u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08ACB2D8;
      }
      goto L_08ACB2C0;
    }
L_08ACB2C0:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 94u);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[6];
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB300;
      }
      goto L_08ACB2D0;
    }
L_08ACB2D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB30C;
      }
      goto L_08ACB2D8;
    }
L_08ACB2D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACB388;
      }
      goto L_08ACB2E0;
    }
L_08ACB2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    ctx.gpr[31] = (0x08ACB2F4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15336));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACB2F4u) goto L_08ACB2F4;
    return;
L_08ACB2F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ACB2F8;
L_08ACB2F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB388;
      }
      goto L_08ACB300;
    }
L_08ACB300:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08ACB30C;
L_08ACB30C:
    ctx.gpr[8] = (2227u << 16u);
    ctx.gpr[7] = (0u | 37u);
    ctx.gpr[6] = (0u | 93u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-15300));
    goto L_08ACB31C;
L_08ACB31C:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB358;
      }
      goto L_08ACB324;
    }
L_08ACB324:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACB340u);
    ctx.gpr[5] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACB340u) goto L_08ACB340;
    return;
L_08ACB340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (0u | 93u);
    ctx.gpr[7] = (0u | 37u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ACB358;
L_08ACB358:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[7];
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
      if (branch_taken) {
          goto L_08ACB380;
      }
      goto L_08ACB36C;
    }
L_08ACB36C:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB380;
      }
      goto L_08ACB374;
    }
L_08ACB374:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    goto L_08ACB380;
L_08ACB380:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08ACB31C;
      }
      goto L_08ACB388;
    }
L_08ACB388:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB394:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25176));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08ACB3BC;
      }
      goto L_08ACB3B4;
    }
L_08ACB3B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08ACB3BC;
      }
      goto L_08ACB3BC;
    }
L_08ACB3BC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-97));
    ctx.gpr[9] = (ctx.gpr[8] < static_cast<std::uint32_t>(26) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB4A4;
      }
      goto L_08ACB3CC;
    }
L_08ACB3CC:
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[8]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-14968)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB3E4:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB3F8;
    }
L_08ACB3F8:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB40C;
    }
L_08ACB40C:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB420;
    }
L_08ACB420:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB434;
    }
L_08ACB434:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB448;
    }
L_08ACB448:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB45C;
    }
L_08ACB45C:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB470;
    }
L_08ACB470:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB484;
    }
L_08ACB484:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 68u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB498;
    }
L_08ACB498:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[6] & 2u);
      if (branch_taken) {
          goto L_08ACB4B0;
      }
      goto L_08ACB4A4;
    }
L_08ACB4A4:
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACB4BC;
      }
      goto L_08ACB4B0;
    }
L_08ACB4B0:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[2] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
        goto L_08ACB4BC;
    }
    goto L_08ACB4BC;
L_08ACB4BC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB4C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[8] = (0u | 94u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08ACB508;
      }
      goto L_08ACB500;
    }
L_08ACB500:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_08ACB508;
L_08ACB508:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (0u | 37u);
      if (branch_taken) {
          goto L_08ACB550;
      }
      goto L_08ACB518;
    }
L_08ACB518:
    ctx.gpr[20] = (0u | 45u);
    goto L_08ACB51C;
L_08ACB51C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08ACB560;
      }
      goto L_08ACB528;
    }
L_08ACB528:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[31] = (0x08ACB538u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08ACB394;
L_08ACB538:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB558;
      }
      goto L_08ACB540;
    }
L_08ACB540:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB51C;
      }
      goto L_08ACB550;
    }
L_08ACB550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACB5BC;
      }
      goto L_08ACB558;
    }
L_08ACB558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACB5BC;
      }
      goto L_08ACB560;
    }
L_08ACB560:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACB5AC;
      }
      goto L_08ACB56C;
    }
L_08ACB56C:
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB5AC;
      }
      goto L_08ACB578;
    }
L_08ACB578:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-2))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB540;
      }
      goto L_08ACB590;
    }
L_08ACB590:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB540;
      }
      goto L_08ACB5A4;
    }
L_08ACB5A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACB5BC;
      }
      goto L_08ACB5AC;
    }
L_08ACB5AC:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08ACB540;
      }
      goto L_08ACB5B8;
    }
L_08ACB5B8:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08ACB5BC;
L_08ACB5BC:
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
L_08ACB5E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (0u | 91u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08ACB630;
      }
      goto L_08ACB600;
    }
L_08ACB600:
    ctx.gpr[4] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_08ACB628;
      }
      goto L_08ACB60C;
    }
L_08ACB60C:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08ACB648;
      }
      goto L_08ACB614;
    }
L_08ACB614:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[31] = (0x08ACB620u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    goto L_08ACB394;
L_08ACB620:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB654;
      }
      goto L_08ACB628;
    }
L_08ACB628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACB654;
      }
      goto L_08ACB630;
    }
L_08ACB630:
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08ACB640u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08ACB4C4;
L_08ACB640:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB654;
      }
      goto L_08ACB648;
    }
L_08ACB648:
    ctx.gpr[4] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (ctx.gpr[4] ^ ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08ACB654;
L_08ACB654:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB680;
      }
      goto L_08ACB674;
    }
L_08ACB674:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB6AC;
      }
      goto L_08ACB680;
    }
L_08ACB680:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08ACB69Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15268));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACB69Cu) goto L_08ACB69C;
    return;
L_08ACB69C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08ACB6AC;
L_08ACB6AC:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACB6C0;
      }
      goto L_08ACB6B8;
    }
L_08ACB6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACB724;
      }
      goto L_08ACB6C0;
    }
L_08ACB6C0:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACB720;
      }
      goto L_08ACB6D8;
    }
L_08ACB6D8:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB710;
      }
      goto L_08ACB6E8;
    }
L_08ACB6E8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB708;
      }
      goto L_08ACB6F4;
    }
L_08ACB6F4:
    ctx.gpr[9] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08ACB6D8;
      }
      goto L_08ACB700;
    }
L_08ACB700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB720;
      }
      goto L_08ACB708;
    }
L_08ACB708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB724;
      }
      goto L_08ACB710;
    }
L_08ACB710:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08ACB6F4;
      }
      goto L_08ACB718;
    }
L_08ACB718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB6F4;
      }
      goto L_08ACB720;
    }
L_08ACB720:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACB724;
L_08ACB724:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB730:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[18] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08ACB76C;
L_08ACB76C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_08ACB7A4;
      }
      goto L_08ACB774;
    }
L_08ACB774:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ACB788u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08ACB5E0;
L_08ACB788:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB7A4;
      }
      goto L_08ACB790;
    }
L_08ACB790:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08ACB76C;
      }
      goto L_08ACB7A4;
    }
L_08ACB7A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB7D8;
      }
      goto L_08ACB7AC;
    }
L_08ACB7AC:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACB7BCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 122u, 0x08ACC818u>(ctx, &aot_mem) && ctx.pc == 0x08ACB7BCu) goto L_08ACB7BC;
    return;
L_08ACB7BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB7CC;
      }
      goto L_08ACB7C4;
    }
L_08ACB7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB7DC;
      }
      goto L_08ACB7CC;
    }
L_08ACB7CC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ACB7AC;
      }
      goto L_08ACB7D8;
    }
L_08ACB7D8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACB7DC;
L_08ACB7DC:
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
L_08ACB7FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_08ACB82C;
L_08ACB82C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08ACB83Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 122u, 0x08ACC818u>(ctx, &aot_mem) && ctx.pc == 0x08ACB83Cu) goto L_08ACB83C;
    return;
L_08ACB83C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB880;
      }
      goto L_08ACB844;
    }
L_08ACB844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB878;
      }
      goto L_08ACB854;
    }
L_08ACB854:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[31] = (0x08ACB868u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08ACB5E0;
L_08ACB868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB878;
      }
      goto L_08ACB870;
    }
L_08ACB870:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACB888;
      }
      goto L_08ACB878;
    }
L_08ACB878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACB890;
      }
      goto L_08ACB880;
    }
L_08ACB880:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB890;
      }
      goto L_08ACB888;
    }
L_08ACB888:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB82C;
      }
      goto L_08ACB890;
    }
L_08ACB890:
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
L_08ACB8B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08ACB910;
      }
      goto L_08ACB8E0;
    }
L_08ACB8E0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[31] = (0x08ACB900u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15248));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACB900u) goto L_08ACB900;
    return;
L_08ACB900:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    goto L_08ACB910;
L_08ACB910:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] << 3u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACB93Cu);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 122u, 0x08ACC818u>(ctx, &aot_mem) && ctx.pc == 0x08ACB93Cu) goto L_08ACB93C;
    return;
L_08ACB93C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB950;
      }
      goto L_08ACB944;
    }
L_08ACB944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_08ACB950;
L_08ACB950:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACB960:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACB988u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    goto L_08ACB218;
L_08ACB988:
    ctx.gpr[16] = (ctx.gpr[2] << 3u);
    ctx.gpr[16] = (ctx.gpr[18] + ctx.gpr[16]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[19] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACB9ACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 122u, 0x08ACC818u>(ctx, &aot_mem) && ctx.pc == 0x08ACB9ACu) goto L_08ACB9AC;
    return;
L_08ACB9AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACB9BC;
      }
      goto L_08ACB9B4;
    }
L_08ACB9B4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    goto L_08ACB9BC;
L_08ACB9BC:
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
L_08ACB9D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACB9F8u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08ACB1BC;
L_08ACB9F8:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA38;
      }
      goto L_08ACBA18;
    }
L_08ACBA18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBA28u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x08ACBA28u) goto L_08ACBA28;
    return;
L_08ACBA28:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA38;
      }
      goto L_08ACBA30;
    }
L_08ACBA30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08ACBA3C;
      }
      goto L_08ACBA38;
    }
L_08ACBA38:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACBA3C;
L_08ACBA3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBA50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08ACBA94;
      }
      goto L_08ACBA80;
    }
L_08ACBA80:
    ctx.gpr[4] = (ctx.gpr[18] < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBA9C;
      }
      goto L_08ACBA8C;
    }
L_08ACBA8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACBB04;
      }
      goto L_08ACBA94;
    }
L_08ACBA94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08ACBB04;
      }
      goto L_08ACBA9C;
    }
L_08ACBA9C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[16]);
    goto L_08ACBAA4;
L_08ACBAA4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBAFC;
      }
      goto L_08ACBAAC;
    }
L_08ACBAAC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACBABCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 380u, 0x08AED540u>(ctx, &aot_mem) && ctx.pc == 0x08ACBABCu) goto L_08ACBABC;
    return;
L_08ACBABC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBAFC;
      }
      goto L_08ACBAC8;
    }
L_08ACBAC8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACBADCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x08ACBADCu) goto L_08ACBADC;
    return;
L_08ACBADC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBAF4;
      }
      goto L_08ACBAE4;
    }
L_08ACBAE4:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[18] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08ACBAA4;
      }
      goto L_08ACBAF4;
    }
L_08ACBAF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08ACBB04;
      }
      goto L_08ACBAFC;
    }
L_08ACBAFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACBB04;
      }
      goto L_08ACBB04;
    }
L_08ACBB04:
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
L_08ACBB24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08ACBB74;
      }
      goto L_08ACBB44;
    }
L_08ACBB44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15228));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ACBB64u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 389u, 0x08A4B374u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB64u) goto L_08ACBB64;
    return;
L_08ACBB64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08ACBB74;
L_08ACBB74:
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08ACBBA4;
      }
      goto L_08ACBB80;
    }
L_08ACBB80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08ACBB9Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACBB9Cu) goto L_08ACBB9C;
    return;
L_08ACBB9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBBB0;
      }
      goto L_08ACBBA4;
    }
L_08ACBBA4:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08ACBBB0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBB0u) goto L_08ACBBB0;
    return;
L_08ACBBB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBBBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACBBF0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15248));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 425u, 0x08A4B594u>(ctx, &aot_mem) && ctx.pc == 0x08ACBBF0u) goto L_08ACBBF0;
    return;
L_08ACBBF0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBC04;
      }
      goto L_08ACBBFC;
    }
L_08ACBBFC:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBC1C;
      }
      goto L_08ACBC04;
    }
L_08ACBC04:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBC34;
      }
      goto L_08ACBC14;
    }
L_08ACBC14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBC54;
      }
      goto L_08ACBC1C;
    }
L_08ACBC1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[31] = (0x08ACBC2Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08ACBC2Cu) goto L_08ACBC2C;
    return;
L_08ACBC2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08ACBC54;
      }
      goto L_08ACBC34;
    }
L_08ACBC34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBC40u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08ACBB24;
L_08ACBC40:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[2]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBC34;
      }
      goto L_08ACBC54;
    }
L_08ACBC54:
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
L_08ACBC6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACBCA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCA8u) goto L_08ACBCA8;
    return;
L_08ACBCA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (0u | 2u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBCC0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08ACBCC0u) goto L_08ACBCC0;
    return;
L_08ACBCC0:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBCD8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 460u, 0x08A4B7FCu>(ctx, &aot_mem) && ctx.pc == 0x08ACBCD8u) goto L_08ACBCD8;
    return;
L_08ACBCD8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08ACBCE8u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08ACABB8;
L_08ACBCE8:
    ctx.gpr[22] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[22]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08ACBCFC;
      }
      goto L_08ACBCF4;
    }
L_08ACBCF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08ACBD10;
      }
      goto L_08ACBCFC;
    }
L_08ACBCFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[22] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBD10;
      }
      goto L_08ACBD0C;
    }
L_08ACBD0C:
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    goto L_08ACBD10;
L_08ACBD10:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBD1Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD1Cu) goto L_08ACBD1C;
    return;
L_08ACBD1C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (ctx.gpr[22] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACBD3C;
      }
      goto L_08ACBD24;
    }
L_08ACBD24:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08ACBD34u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15208));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 570u, 0x08AEE084u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD34u) goto L_08ACBD34;
    return;
L_08ACBD34:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBDB0;
      }
      goto L_08ACBD3C;
    }
L_08ACBD3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACBD54u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08ACBA50;
L_08ACBD54:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBDA8;
      }
      goto L_08ACBD60;
    }
L_08ACBD60:
    ctx.gpr[17] = (ctx.gpr[19] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBD78u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACBD78u) goto L_08ACBD78;
    return;
L_08ACBD78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08ACBD98;
      }
      goto L_08ACBD8C;
    }
L_08ACBD8C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08ACBD98;
L_08ACBD98:
    ctx.gpr[31] = (0x08ACBDA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACBDA0u) goto L_08ACBDA0;
    return;
L_08ACBDA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08ACBE6C;
      }
      goto L_08ACBDA8;
    }
L_08ACBDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBE60;
      }
      goto L_08ACBDB0;
    }
L_08ACBDB0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[6] = (0u | 94u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08ACBDD0;
      }
      goto L_08ACBDC8;
    }
L_08ACBDC8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    goto L_08ACBDD0;
L_08ACBDD0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    goto L_08ACBDE0;
L_08ACBDE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08ACBDF4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 122u, 0x08ACC818u>(ctx, &aot_mem) && ctx.pc == 0x08ACBDF4u) goto L_08ACBDF4;
    return;
L_08ACBDF4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBE44;
      }
      goto L_08ACBE00;
    }
L_08ACBE00:
    ctx.gpr[4] = (ctx.gpr[20] - ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBE18u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE18u) goto L_08ACBE18;
    return;
L_08ACBE18:
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBE2Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE2Cu) goto L_08ACBE2C;
    return;
L_08ACBE2C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08ACBE3Cu);
    ctx.gpr[6] = (0u | 0u);
    goto L_08ACBBBC;
L_08ACBE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08ACBE6C;
      }
      goto L_08ACBE44;
    }
L_08ACBE44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08ACBE60;
      }
      goto L_08ACBE58;
    }
L_08ACBE58:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBDE0;
      }
      goto L_08ACBE60;
    }
L_08ACBE60:
    ctx.gpr[31] = (0x08ACBE68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BBF0u>(ctx, &aot_mem) && ctx.pc == 0x08ACBE68u) goto L_08ACBE68;
    return;
L_08ACBE68:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_08ACBE6C;
L_08ACBE6C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBE98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-320));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[31]);
    ctx.gpr[31] = (0x08ACBEC0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B974u>(ctx, &aot_mem) && ctx.pc == 0x08ACBEC0u) goto L_08ACBEC0;
    return;
L_08ACBEC0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBED0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10002));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 637u, 0x0890BA20u>(ctx, &aot_mem) && ctx.pc == 0x08ACBED0u) goto L_08ACBED0;
    return;
L_08ACBED0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBEE0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10003));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B974u>(ctx, &aot_mem) && ctx.pc == 0x08ACBEE0u) goto L_08ACBEE0;
    return;
L_08ACBEE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBF00u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10004));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF00u) goto L_08ACBF00;
    return;
L_08ACBF00:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (20224u << 16u);
      if (branch_taken) {
          goto L_08ACBF28;
      }
      goto L_08ACBF1C;
    }
L_08ACBF1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08ACBF40;
      }
      goto L_08ACBF28;
    }
L_08ACBF28:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[17] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08ACBF40;
L_08ACBF40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBFC8;
      }
      goto L_08ACBF54;
    }
L_08ACBF54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACBF68u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 122u, 0x08ACC818u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF68u) goto L_08ACBF68;
    return;
L_08ACBF68:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBFB4;
      }
      goto L_08ACBF74;
    }
L_08ACBF74:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[17];
    ctx.gpr[18] = (ctx.gpr[19] - ctx.gpr[18]);
      if (branch_taken) {
          goto L_08ACBF80;
      }
      goto L_08ACBF7C;
    }
L_08ACBF7C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    goto L_08ACBF80;
L_08ACBF80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBF90u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF90u) goto L_08ACBF90;
    return;
L_08ACBF90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08ACBF9Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10004));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 570u, 0x0890B608u>(ctx, &aot_mem) && ctx.pc == 0x08ACBF9Cu) goto L_08ACBF9C;
    return;
L_08ACBF9C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08ACBFACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08ACBBBC;
L_08ACBFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBFCC;
      }
      goto L_08ACBFB4;
    }
L_08ACBFB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08ACBF54;
      }
      goto L_08ACBFC8;
    }
L_08ACBFC8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08ACBFCC;
L_08ACBFCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08ACBFEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    ctx.pc = 0x08ACC000u; return;
}

void recomp_unit_0177(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0177_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_177(Runtime &runtime) {
    runtime.register_generated_unit(177u, 0x08AC8000u, 16384u, &recomp_unit_0177, &recomp_unit_0177_entry);
    runtime.register_function(0x08AC8004u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC800Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8018u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8038u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8040u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8050u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8058u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8060u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC806Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8078u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC808Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8098u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC80FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC811Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8128u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8138u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8140u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8184u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC81F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC821Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8224u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC823Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8240u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8260u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8264u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8274u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8284u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC829Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC82ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8314u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8324u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8350u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC836Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC83FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8420u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8430u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8438u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8444u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC844Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8470u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8490u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8498u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC84E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8510u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8528u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8534u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8544u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8550u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8564u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8570u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8580u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC858Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC85ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8600u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC860Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8614u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC861Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8628u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8634u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC863Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC865Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8668u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8670u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC867Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8684u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8694u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC86F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8700u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8708u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8714u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8718u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8728u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8734u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8768u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8770u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8778u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8784u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8794u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC879Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC87FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8804u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8828u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8850u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8858u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC88F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC890Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8914u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC897Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8990u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC89ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8A98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8AECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8B90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8BF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8CFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8D8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8DF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E84u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8E8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8ECCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8EF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8F94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC8FECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC900Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9030u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9058u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9064u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9108u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9208u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC928Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC92FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC930Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9370u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9398u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93C8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC93F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9400u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9408u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9418u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9448u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9450u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9498u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC94F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9500u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9510u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9518u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9540u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9558u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9564u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC956Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9594u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC95E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9604u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9610u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9644u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC96FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC970Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC971Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9724u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9728u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9798u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9834u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC983Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9848u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC984Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9880u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9890u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC98FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9904u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9954u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9970u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC998Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9994u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC99F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9A18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9C54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9D9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DDCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9DF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9E54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9EF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F08u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9F70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08AC9FF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA030u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA088u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA0E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA17Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA190u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA19Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA1F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA20Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA240u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA26Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA298u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2D4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA2F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA324u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA348u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA350u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA358u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA364u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA384u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA398u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA3FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA404u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA40Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA418u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA43Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA444u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA458u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA464u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA488u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA490u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA4F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA514u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA534u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA550u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA570u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA58Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA598u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA5E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA600u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA618u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA628u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA644u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA660u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA67Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA698u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA6FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA728u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA744u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA75Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA764u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA768u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA770u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA780u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA790u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7F0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA7FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA80Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA81Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA830u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA840u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA878u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA890u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA898u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA89Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA8FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA904u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA908u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA910u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA924u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA92Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA930u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA938u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA94Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA954u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA958u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA960u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA974u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA97Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA980u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA988u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA99Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9ECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACA9F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAA34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAAC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAB98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACABFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAC94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACACFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD4Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD70u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAD9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADC4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACADF8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE20u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAE98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAEF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF48u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAF78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFB8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFD4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACAFECu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB008u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB00Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB024u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB050u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB064u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB070u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB07Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB088u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB09Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0A8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB0E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB114u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB124u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB134u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB15Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB16Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB180u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB188u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB198u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB1F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB204u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB20Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB218u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB234u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB23Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB248u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB258u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB268u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB270u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB27Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB294u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2A0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2D0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB2F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB300u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB30Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB31Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB324u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB340u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB358u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB36Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB374u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB380u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB388u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB394u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3E4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB3F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB40Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB420u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB434u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB448u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB45Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB470u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB484u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB498u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB4C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB500u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB508u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB518u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB51Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB528u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB538u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB540u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB550u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB558u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB560u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB56Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB578u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB590u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB5E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB600u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB60Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB614u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB620u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB628u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB630u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB640u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB648u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB654u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB660u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB674u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB680u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB69Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6B8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6C0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6E8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB6F4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB700u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB708u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB710u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB718u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB720u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB724u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB730u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB76Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB774u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB788u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB790u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7A4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7C4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7CCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7DCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB7FCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB82Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB83Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB844u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB854u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB868u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB870u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB878u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB880u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB888u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB890u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8B0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB8E0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB900u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB910u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB93Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB944u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB950u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB960u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB988u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9ACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9B4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9BCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9D8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACB9F8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA30u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA38u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA50u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA94u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBA9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBABCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBADCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAE4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBAFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB64u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBB9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBA4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBBCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBF0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBBFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC04u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC14u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBC6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCD8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCE8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBCFCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD0Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD10u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD24u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD34u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD78u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD8Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBD98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDA0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDA8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDB0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDD0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBDF4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE18u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE2Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE3Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE44u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE58u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE60u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE6Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBE98u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEC0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBED0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBEE0u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF00u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF1Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF28u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF40u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF54u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF68u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF74u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF7Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF80u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF90u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBF9Cu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFACu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFB4u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFC8u, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFCCu, &recomp_unit_0177, "recomp_unit_0177");
    runtime.register_function(0x08ACBFECu, &recomp_unit_0177, "recomp_unit_0177");
}
} // namespace psprecomp
