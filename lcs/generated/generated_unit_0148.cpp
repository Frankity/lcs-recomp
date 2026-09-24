#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0148[4084] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 3,
    0, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0,
    0, 11, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 15, 0, 0,
    0, 0, 0, 16, 0, 17, 0, 0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0,
    0, 0, 24, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 0, 28, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 0,
    0, 32, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 38,
    0, 39, 0, 40, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0,
    51, 0, 0, 0, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 64, 0, 65, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 0, 72, 73, 0, 74, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0,
    0, 77, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 0, 0, 0, 0, 0, 0, 0, 80, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 83,
    0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 89, 0, 90, 91, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 93, 94, 0, 95, 0, 0, 0, 0, 0, 96,
    0, 97, 0, 98, 0, 99, 0, 100, 0, 101, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0,
    0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 110, 0, 111, 0, 0, 112, 113, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 115, 0, 0, 116, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0,
    0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128,
    0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 130, 0,
    0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0, 138, 0, 139, 0, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 0,
    144, 0, 0, 145, 0, 0, 0, 146, 0, 0, 0, 147, 0, 148, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 156, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    159, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 167, 0, 168, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 180, 0, 0, 0,
    181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 189, 0, 190, 0, 191, 0, 192, 0, 0, 193, 0, 194,
    0, 0, 0, 195, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 0, 0, 0, 205,
    0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 211, 0,
    0, 0, 212, 213, 0, 0, 0, 214, 0, 0, 0, 0, 0, 215, 216, 0, 0, 0, 217, 218, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 0,
    221, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 226, 0, 0,
    0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 244,
    0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 251, 0, 252, 0, 253, 0, 0, 0, 254, 0, 255, 0, 0, 256,
    0, 0, 257, 0, 0, 258, 0, 0, 259, 0, 0, 260, 0, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 268, 0, 269,
    0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 274, 0, 275, 276, 0, 277, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 278, 0, 279, 0, 280, 0, 281, 0, 282, 0, 283, 0, 0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 288, 0, 289, 0, 0, 290, 0,
    291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 0,
    307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0,
    0, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 0,
    320, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0,
    0, 0, 0, 0, 0, 339, 0, 340, 341, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 0, 0, 0, 345, 0, 346, 347, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 350, 0, 351, 0, 0, 0, 0, 352,
    0, 353, 0, 354, 0, 355, 0, 356, 0, 357, 0, 358, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0,
    362, 0, 0, 0, 0, 363, 0, 0, 0, 0, 364, 0, 365, 0, 366, 0, 0, 0, 0, 367, 0, 368, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0, 371, 372, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0,
    376, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 385, 0, 386,
    0, 0, 0, 0, 387, 0, 388, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 390, 0, 0, 391, 392, 0, 393, 0, 0, 0, 0, 394, 0, 395, 0, 396, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0,
    0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 414, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 417, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 431, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433,
    0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    446, 0, 0, 447, 0, 0, 0, 0, 448, 0, 449, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 0, 456, 0, 0, 0, 457, 0, 458, 0, 0, 459, 460, 0,
    0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 463, 464, 0, 465, 466, 0, 0, 0, 467, 0, 468, 0, 0, 469, 0,
    0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 481, 0, 482, 483, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    496, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 503,
    0, 504, 0, 0, 505, 506, 0, 0, 0, 0, 507, 0, 508, 0, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 512, 0, 513, 514, 0,
    515, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 520, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 522, 0, 0, 0, 0, 523, 0, 524,
    525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0,
    0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 536, 0, 537, 0,
    0, 538, 0, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0,
    0, 545, 0, 0, 0, 0, 546, 0, 547, 548, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0,
    0, 552, 553, 0, 0, 0, 0, 554, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 558, 0, 559, 0, 0, 0, 560, 0, 0, 561, 0, 562,
    0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564,
    0, 0, 565, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 568, 0, 569, 0, 570, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0,
    0, 581, 0, 0, 0, 582, 0, 0, 0, 0, 0, 583, 0, 584, 585, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0,
    0, 587, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 595,
    596, 0, 0, 597, 0, 0, 0, 0, 0, 598, 0, 0, 0, 0, 599, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0,
    0, 0, 604, 0, 605, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 611, 0,
    612, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0, 619, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 622, 0, 623, 0, 624,
    0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 632, 0, 633, 0, 0, 634,
    0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 640, 641, 0, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646,
    0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 652, 0, 653, 0, 0, 0, 0, 0,
    654, 0, 0, 0, 0, 655, 0, 656, 657, 658, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 663, 0, 664,
    0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672,
    0, 0, 0, 0, 673, 0, 674, 675, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0,
    681, 0, 682, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 0, 0, 690,
    0, 0, 691, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 694, 0, 0, 695, 696, 0, 0, 0, 0, 0, 697, 0, 0, 0, 0, 698, 0, 699, 0, 700, 0, 701, 0, 702, 0, 703, 0,
    704, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 709, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0,
    0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 714, 0, 0, 715, 0, 716, 0,
    717, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 723, 0, 0,
    0, 0, 724, 0, 725, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 729, 730, 731, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0,
    0, 734, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 738, 0, 0, 0, 739, 0, 740, 0, 0, 0, 0, 741,
    0, 0, 0, 0, 742, 0, 743, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 747, 748, 0, 0, 0, 0, 749, 0, 750, 0, 0,
    0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 755, 0, 756, 0, 0, 0, 757, 0, 0, 0, 758, 0, 0, 759, 0,
    0, 0, 0, 0, 0, 0, 760, 0, 761, 0, 762, 0, 0, 0, 763, 0, 0, 764, 0, 765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 769, 0, 0, 0, 0, 0, 770, 0,
    0, 0, 0, 771, 0, 772, 0, 773, 0, 774, 0, 775, 0, 776, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 784,
};
void recomp_unit_0148_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A54000u;
        entry_id = (entry_delta < 16336u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0148[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A54000;
    case 2u: goto L_08A54168;
    case 3u: goto L_08A5417C;
    case 4u: goto L_08A5418C;
    case 5u: goto L_08A54198;
    case 6u: goto L_08A541A8;
    case 7u: goto L_08A541B8;
    case 8u: goto L_08A541D0;
    case 9u: goto L_08A541E4;
    case 10u: goto L_08A541F8;
    case 11u: goto L_08A54204;
    case 12u: goto L_08A54208;
    case 13u: goto L_08A54234;
    case 14u: goto L_08A542E8;
    case 15u: goto L_08A542F4;
    case 16u: goto L_08A5430C;
    case 17u: goto L_08A54314;
    case 18u: goto L_08A54328;
    case 19u: goto L_08A54338;
    case 20u: goto L_08A54340;
    case 21u: goto L_08A54358;
    case 22u: goto L_08A54364;
    case 23u: goto L_08A54370;
    case 24u: goto L_08A54388;
    case 25u: goto L_08A54394;
    case 26u: goto L_08A543A4;
    case 27u: goto L_08A543B4;
    case 28u: goto L_08A543C0;
    case 29u: goto L_08A543DC;
    case 30u: goto L_08A543F0;
    case 31u: goto L_08A543F8;
    case 32u: goto L_08A54404;
    case 33u: goto L_08A54424;
    case 34u: goto L_08A54434;
    case 35u: goto L_08A54450;
    case 36u: goto L_08A54458;
    case 37u: goto L_08A54474;
    case 38u: goto L_08A5447C;
    case 39u: goto L_08A54484;
    case 40u: goto L_08A5448C;
    case 41u: goto L_08A5449C;
    case 42u: goto L_08A544A4;
    case 43u: goto L_08A544AC;
    case 44u: goto L_08A544C4;
    case 45u: goto L_08A544CC;
    case 46u: goto L_08A544D4;
    case 47u: goto L_08A544DC;
    case 48u: goto L_08A544E4;
    case 49u: goto L_08A544EC;
    case 50u: goto L_08A544F8;
    case 51u: goto L_08A54500;
    case 52u: goto L_08A54518;
    case 53u: goto L_08A54520;
    case 54u: goto L_08A54528;
    case 55u: goto L_08A54530;
    case 56u: goto L_08A54538;
    case 57u: goto L_08A54548;
    case 58u: goto L_08A54554;
    case 59u: goto L_08A54568;
    case 60u: goto L_08A54594;
    case 61u: goto L_08A5459C;
    case 62u: goto L_08A545A8;
    case 63u: goto L_08A545B8;
    case 64u: goto L_08A545C4;
    case 65u: goto L_08A545CC;
    case 66u: goto L_08A545D8;
    case 67u: goto L_08A545E0;
    case 68u: goto L_08A545F0;
    case 69u: goto L_08A54618;
    case 70u: goto L_08A54624;
    case 71u: goto L_08A5462C;
    case 72u: goto L_08A54648;
    case 73u: goto L_08A5464C;
    case 74u: goto L_08A54654;
    case 75u: goto L_08A54664;
    case 76u: goto L_08A5466C;
    case 77u: goto L_08A54684;
    case 78u: goto L_08A546A0;
    case 79u: goto L_08A546D4;
    case 80u: goto L_08A546F8;
    case 81u: goto L_08A54750;
    case 82u: goto L_08A54768;
    case 83u: goto L_08A5477C;
    case 84u: goto L_08A54794;
    case 85u: goto L_08A547A4;
    case 86u: goto L_08A547AC;
    case 87u: goto L_08A547C4;
    case 88u: goto L_08A547CC;
    case 89u: goto L_08A547D4;
    case 90u: goto L_08A547DC;
    case 91u: goto L_08A547E0;
    case 92u: goto L_08A5484C;
    case 93u: goto L_08A54858;
    case 94u: goto L_08A5485C;
    case 95u: goto L_08A54864;
    case 96u: goto L_08A5487C;
    case 97u: goto L_08A54884;
    case 98u: goto L_08A5488C;
    case 99u: goto L_08A54894;
    case 100u: goto L_08A5489C;
    case 101u: goto L_08A548A4;
    case 102u: goto L_08A548AC;
    case 103u: goto L_08A548B4;
    case 104u: goto L_08A54918;
    case 105u: goto L_08A54964;
    case 106u: goto L_08A5496C;
    case 107u: goto L_08A54984;
    case 108u: goto L_08A5498C;
    case 109u: goto L_08A549A0;
    case 110u: goto L_08A549A8;
    case 111u: goto L_08A549B0;
    case 112u: goto L_08A549BC;
    case 113u: goto L_08A549C0;
    case 114u: goto L_08A549D8;
    case 115u: goto L_08A54A44;
    case 116u: goto L_08A54A50;
    case 117u: goto L_08A54A54;
    case 118u: goto L_08A54A6C;
    case 119u: goto L_08A54A84;
    case 120u: goto L_08A54A8C;
    case 121u: goto L_08A54A94;
    case 122u: goto L_08A54A9C;
    case 123u: goto L_08A54AA4;
    case 124u: goto L_08A54AAC;
    case 125u: goto L_08A54AB4;
    case 126u: goto L_08A54ABC;
    case 127u: goto L_08A54B28;
    case 128u: goto L_08A54B7C;
    case 129u: goto L_08A54B88;
    case 130u: goto L_08A54BF8;
    case 131u: goto L_08A54C04;
    case 132u: goto L_08A54C14;
    case 133u: goto L_08A54C1C;
    case 134u: goto L_08A54C24;
    case 135u: goto L_08A54C2C;
    case 136u: goto L_08A54C34;
    case 137u: goto L_08A54C3C;
    case 138u: goto L_08A54C44;
    case 139u: goto L_08A54C4C;
    case 140u: goto L_08A54C58;
    case 141u: goto L_08A54C60;
    case 142u: goto L_08A54C68;
    case 143u: goto L_08A54C70;
    case 144u: goto L_08A54C80;
    case 145u: goto L_08A54C8C;
    case 146u: goto L_08A54C9C;
    case 147u: goto L_08A54CAC;
    case 148u: goto L_08A54CB4;
    case 149u: goto L_08A54CBC;
    case 150u: goto L_08A54CC4;
    case 151u: goto L_08A54CCC;
    case 152u: goto L_08A54CD4;
    case 153u: goto L_08A54CDC;
    case 154u: goto L_08A54CE4;
    case 155u: goto L_08A54CF0;
    case 156u: goto L_08A54CF8;
    case 157u: goto L_08A54D14;
    case 158u: goto L_08A54D48;
    case 159u: goto L_08A54D80;
    case 160u: goto L_08A54D94;
    case 161u: goto L_08A54DA4;
    case 162u: goto L_08A54DB0;
    case 163u: goto L_08A54DC4;
    case 164u: goto L_08A54DCC;
    case 165u: goto L_08A54DD4;
    case 166u: goto L_08A54DDC;
    case 167u: goto L_08A54DE0;
    case 168u: goto L_08A54DE8;
    case 169u: goto L_08A54E10;
    case 170u: goto L_08A54E18;
    case 171u: goto L_08A54E28;
    case 172u: goto L_08A54E30;
    case 173u: goto L_08A54E38;
    case 174u: goto L_08A54E40;
    case 175u: goto L_08A54E48;
    case 176u: goto L_08A54E50;
    case 177u: goto L_08A54E58;
    case 178u: goto L_08A54E60;
    case 179u: goto L_08A54E68;
    case 180u: goto L_08A54E70;
    case 181u: goto L_08A54E80;
    case 182u: goto L_08A54E8C;
    case 183u: goto L_08A54E98;
    case 184u: goto L_08A54EA8;
    case 185u: goto L_08A54EB0;
    case 186u: goto L_08A54EB8;
    case 187u: goto L_08A54EC0;
    case 188u: goto L_08A54EC8;
    case 189u: goto L_08A54ED0;
    case 190u: goto L_08A54ED8;
    case 191u: goto L_08A54EE0;
    case 192u: goto L_08A54EE8;
    case 193u: goto L_08A54EF4;
    case 194u: goto L_08A54EFC;
    case 195u: goto L_08A54F0C;
    case 196u: goto L_08A54F18;
    case 197u: goto L_08A54F28;
    case 198u: goto L_08A54F3C;
    case 199u: goto L_08A54F4C;
    case 200u: goto L_08A54F60;
    case 201u: goto L_08A54FA4;
    case 202u: goto L_08A54FC4;
    case 203u: goto L_08A54FCC;
    case 204u: goto L_08A54FE8;
    case 205u: goto L_08A54FFC;
    case 206u: goto L_08A55018;
    case 207u: goto L_08A55028;
    case 208u: goto L_08A55044;
    case 209u: goto L_08A5505C;
    case 210u: goto L_08A55074;
    case 211u: goto L_08A55078;
    case 212u: goto L_08A55088;
    case 213u: goto L_08A5508C;
    case 214u: goto L_08A5509C;
    case 215u: goto L_08A550B4;
    case 216u: goto L_08A550B8;
    case 217u: goto L_08A550C8;
    case 218u: goto L_08A550CC;
    case 219u: goto L_08A550DC;
    case 220u: goto L_08A550EC;
    case 221u: goto L_08A55100;
    case 222u: goto L_08A55110;
    case 223u: goto L_08A5513C;
    case 224u: goto L_08A55150;
    case 225u: goto L_08A55160;
    case 226u: goto L_08A55174;
    case 227u: goto L_08A55184;
    case 228u: goto L_08A5519C;
    case 229u: goto L_08A551AC;
    case 230u: goto L_08A551B4;
    case 231u: goto L_08A551BC;
    case 232u: goto L_08A551CC;
    case 233u: goto L_08A551DC;
    case 234u: goto L_08A55220;
    case 235u: goto L_08A55240;
    case 236u: goto L_08A55248;
    case 237u: goto L_08A5528C;
    case 238u: goto L_08A552AC;
    case 239u: goto L_08A552B4;
    case 240u: goto L_08A552C4;
    case 241u: goto L_08A552D4;
    case 242u: goto L_08A552E8;
    case 243u: goto L_08A552F0;
    case 244u: goto L_08A552FC;
    case 245u: goto L_08A55304;
    case 246u: goto L_08A55314;
    case 247u: goto L_08A5531C;
    case 248u: goto L_08A55328;
    case 249u: goto L_08A55330;
    case 250u: goto L_08A55340;
    case 251u: goto L_08A55348;
    case 252u: goto L_08A55350;
    case 253u: goto L_08A55358;
    case 254u: goto L_08A55368;
    case 255u: goto L_08A55370;
    case 256u: goto L_08A5537C;
    case 257u: goto L_08A55388;
    case 258u: goto L_08A55394;
    case 259u: goto L_08A553A0;
    case 260u: goto L_08A553AC;
    case 261u: goto L_08A553B8;
    case 262u: goto L_08A553C4;
    case 263u: goto L_08A553CC;
    case 264u: goto L_08A553D4;
    case 265u: goto L_08A553DC;
    case 266u: goto L_08A553E4;
    case 267u: goto L_08A553EC;
    case 268u: goto L_08A553F4;
    case 269u: goto L_08A553FC;
    case 270u: goto L_08A5540C;
    case 271u: goto L_08A55414;
    case 272u: goto L_08A55420;
    case 273u: goto L_08A55428;
    case 274u: goto L_08A55430;
    case 275u: goto L_08A55438;
    case 276u: goto L_08A5543C;
    case 277u: goto L_08A55444;
    case 278u: goto L_08A5548C;
    case 279u: goto L_08A55494;
    case 280u: goto L_08A5549C;
    case 281u: goto L_08A554A4;
    case 282u: goto L_08A554AC;
    case 283u: goto L_08A554B4;
    case 284u: goto L_08A554C0;
    case 285u: goto L_08A554C8;
    case 286u: goto L_08A554D0;
    case 287u: goto L_08A554DC;
    case 288u: goto L_08A554E4;
    case 289u: goto L_08A554EC;
    case 290u: goto L_08A554F8;
    case 291u: goto L_08A55500;
    case 292u: goto L_08A55514;
    case 293u: goto L_08A5552C;
    case 294u: goto L_08A55534;
    case 295u: goto L_08A5553C;
    case 296u: goto L_08A55544;
    case 297u: goto L_08A55550;
    case 298u: goto L_08A55558;
    case 299u: goto L_08A55560;
    case 300u: goto L_08A55578;
    case 301u: goto L_08A555A0;
    case 302u: goto L_08A555BC;
    case 303u: goto L_08A555C8;
    case 304u: goto L_08A555D4;
    case 305u: goto L_08A555E0;
    case 306u: goto L_08A555E8;
    case 307u: goto L_08A55600;
    case 308u: goto L_08A55618;
    case 309u: goto L_08A55628;
    case 310u: goto L_08A55630;
    case 311u: goto L_08A55638;
    case 312u: goto L_08A55658;
    case 313u: goto L_08A55670;
    case 314u: goto L_08A55688;
    case 315u: goto L_08A55690;
    case 316u: goto L_08A556A0;
    case 317u: goto L_08A556D0;
    case 318u: goto L_08A556E0;
    case 319u: goto L_08A556F0;
    case 320u: goto L_08A55700;
    case 321u: goto L_08A55710;
    case 322u: goto L_08A55718;
    case 323u: goto L_08A55730;
    case 324u: goto L_08A55740;
    case 325u: goto L_08A55758;
    case 326u: goto L_08A55764;
    case 327u: goto L_08A55770;
    case 328u: goto L_08A55778;
    case 329u: goto L_08A55798;
    case 330u: goto L_08A557C4;
    case 331u: goto L_08A557D0;
    case 332u: goto L_08A55810;
    case 333u: goto L_08A55818;
    case 334u: goto L_08A55840;
    case 335u: goto L_08A55848;
    case 336u: goto L_08A55850;
    case 337u: goto L_08A55864;
    case 338u: goto L_08A55878;
    case 339u: goto L_08A55894;
    case 340u: goto L_08A5589C;
    case 341u: goto L_08A558A0;
    case 342u: goto L_08A558B4;
    case 343u: goto L_08A558BC;
    case 344u: goto L_08A558C4;
    case 345u: goto L_08A558D8;
    case 346u: goto L_08A558E0;
    case 347u: goto L_08A558E4;
    case 348u: goto L_08A55950;
    case 349u: goto L_08A5595C;
    case 350u: goto L_08A55960;
    case 351u: goto L_08A55968;
    case 352u: goto L_08A5597C;
    case 353u: goto L_08A55984;
    case 354u: goto L_08A5598C;
    case 355u: goto L_08A55994;
    case 356u: goto L_08A5599C;
    case 357u: goto L_08A559A4;
    case 358u: goto L_08A559AC;
    case 359u: goto L_08A559B4;
    case 360u: goto L_08A55A18;
    case 361u: goto L_08A55A64;
    case 362u: goto L_08A55A80;
    case 363u: goto L_08A55A94;
    case 364u: goto L_08A55AA8;
    case 365u: goto L_08A55AB0;
    case 366u: goto L_08A55AB8;
    case 367u: goto L_08A55ACC;
    case 368u: goto L_08A55AD4;
    case 369u: goto L_08A55AD8;
    case 370u: goto L_08A55B44;
    case 371u: goto L_08A55B50;
    case 372u: goto L_08A55B54;
    case 373u: goto L_08A55B5C;
    case 374u: goto L_08A55B70;
    case 375u: goto L_08A55B78;
    case 376u: goto L_08A55B80;
    case 377u: goto L_08A55B88;
    case 378u: goto L_08A55B90;
    case 379u: goto L_08A55B98;
    case 380u: goto L_08A55BA0;
    case 381u: goto L_08A55BA8;
    case 382u: goto L_08A55C0C;
    case 383u: goto L_08A55C58;
    case 384u: goto L_08A55C6C;
    case 385u: goto L_08A55C74;
    case 386u: goto L_08A55C7C;
    case 387u: goto L_08A55C90;
    case 388u: goto L_08A55C98;
    case 389u: goto L_08A55C9C;
    case 390u: goto L_08A55D08;
    case 391u: goto L_08A55D14;
    case 392u: goto L_08A55D18;
    case 393u: goto L_08A55D20;
    case 394u: goto L_08A55D34;
    case 395u: goto L_08A55D3C;
    case 396u: goto L_08A55D44;
    case 397u: goto L_08A55D4C;
    case 398u: goto L_08A55D54;
    case 399u: goto L_08A55D5C;
    case 400u: goto L_08A55D64;
    case 401u: goto L_08A55D6C;
    case 402u: goto L_08A55DD0;
    case 403u: goto L_08A55E1C;
    case 404u: goto L_08A55E34;
    case 405u: goto L_08A55E5C;
    case 406u: goto L_08A55E68;
    case 407u: goto L_08A55E70;
    case 408u: goto L_08A55E88;
    case 409u: goto L_08A55E94;
    case 410u: goto L_08A55EA8;
    case 411u: goto L_08A55EC8;
    case 412u: goto L_08A55ED4;
    case 413u: goto L_08A55F00;
    case 414u: goto L_08A55F2C;
    case 415u: goto L_08A55F30;
    case 416u: goto L_08A55F78;
    case 417u: goto L_08A55F88;
    case 418u: goto L_08A55FA0;
    case 419u: goto L_08A55FB4;
    case 420u: goto L_08A55FC0;
    case 421u: goto L_08A55FCC;
    case 422u: goto L_08A55FF8;
    case 423u: goto L_08A56024;
    case 424u: goto L_08A5603C;
    case 425u: goto L_08A56084;
    case 426u: goto L_08A560D4;
    case 427u: goto L_08A560DC;
    case 428u: goto L_08A56128;
    case 429u: goto L_08A56164;
    case 430u: goto L_08A5616C;
    case 431u: goto L_08A56174;
    case 432u: goto L_08A561C0;
    case 433u: goto L_08A561FC;
    case 434u: goto L_08A56204;
    case 435u: goto L_08A5621C;
    case 436u: goto L_08A56260;
    case 437u: goto L_08A562A0;
    case 438u: goto L_08A562CC;
    case 439u: goto L_08A5632C;
    case 440u: goto L_08A56340;
    case 441u: goto L_08A56364;
    case 442u: goto L_08A56440;
    case 443u: goto L_08A56448;
    case 444u: goto L_08A56450;
    case 445u: goto L_08A56458;
    case 446u: goto L_08A56480;
    case 447u: goto L_08A5648C;
    case 448u: goto L_08A564A0;
    case 449u: goto L_08A564A8;
    case 450u: goto L_08A564B4;
    case 451u: goto L_08A564BC;
    case 452u: goto L_08A56584;
    case 453u: goto L_08A56594;
    case 454u: goto L_08A565A8;
    case 455u: goto L_08A565B4;
    case 456u: goto L_08A565D0;
    case 457u: goto L_08A565E0;
    case 458u: goto L_08A565E8;
    case 459u: goto L_08A565F4;
    case 460u: goto L_08A565F8;
    case 461u: goto L_08A5660C;
    case 462u: goto L_08A5662C;
    case 463u: goto L_08A56644;
    case 464u: goto L_08A56648;
    case 465u: goto L_08A56650;
    case 466u: goto L_08A56654;
    case 467u: goto L_08A56664;
    case 468u: goto L_08A5666C;
    case 469u: goto L_08A56678;
    case 470u: goto L_08A5668C;
    case 471u: goto L_08A566A0;
    case 472u: goto L_08A566B0;
    case 473u: goto L_08A566BC;
    case 474u: goto L_08A566CC;
    case 475u: goto L_08A566E0;
    case 476u: goto L_08A566F0;
    case 477u: goto L_08A566FC;
    case 478u: goto L_08A56710;
    case 479u: goto L_08A56748;
    case 480u: goto L_08A56750;
    case 481u: goto L_08A56760;
    case 482u: goto L_08A56768;
    case 483u: goto L_08A5676C;
    case 484u: goto L_08A567B4;
    case 485u: goto L_08A56820;
    case 486u: goto L_08A56828;
    case 487u: goto L_08A56830;
    case 488u: goto L_08A5683C;
    case 489u: goto L_08A56890;
    case 490u: goto L_08A568B8;
    case 491u: goto L_08A568D4;
    case 492u: goto L_08A56954;
    case 493u: goto L_08A56994;
    case 494u: goto L_08A569B0;
    case 495u: goto L_08A569D8;
    case 496u: goto L_08A56A00;
    case 497u: goto L_08A56A04;
    case 498u: goto L_08A56A3C;
    case 499u: goto L_08A56A44;
    case 500u: goto L_08A56A4C;
    case 501u: goto L_08A56AE4;
    case 502u: goto L_08A56AF0;
    case 503u: goto L_08A56AFC;
    case 504u: goto L_08A56B04;
    case 505u: goto L_08A56B10;
    case 506u: goto L_08A56B14;
    case 507u: goto L_08A56B28;
    case 508u: goto L_08A56B30;
    case 509u: goto L_08A56B3C;
    case 510u: goto L_08A56B54;
    case 511u: goto L_08A56B64;
    case 512u: goto L_08A56B6C;
    case 513u: goto L_08A56B74;
    case 514u: goto L_08A56B78;
    case 515u: goto L_08A56B80;
    case 516u: goto L_08A56B9C;
    case 517u: goto L_08A56BA4;
    case 518u: goto L_08A56BC0;
    case 519u: goto L_08A56BC8;
    case 520u: goto L_08A56C04;
    case 521u: goto L_08A56C4C;
    case 522u: goto L_08A56C60;
    case 523u: goto L_08A56C74;
    case 524u: goto L_08A56C7C;
    case 525u: goto L_08A56C80;
    case 526u: goto L_08A56C98;
    case 527u: goto L_08A56CCC;
    case 528u: goto L_08A56CE0;
    case 529u: goto L_08A56CF0;
    case 530u: goto L_08A56D08;
    case 531u: goto L_08A56D10;
    case 532u: goto L_08A56D28;
    case 533u: goto L_08A56D4C;
    case 534u: goto L_08A56D64;
    case 535u: goto L_08A56D6C;
    case 536u: goto L_08A56D70;
    case 537u: goto L_08A56D78;
    case 538u: goto L_08A56D84;
    case 539u: goto L_08A56D98;
    case 540u: goto L_08A56DA4;
    case 541u: goto L_08A56DBC;
    case 542u: goto L_08A56DCC;
    case 543u: goto L_08A56DE4;
    case 544u: goto L_08A56DF8;
    case 545u: goto L_08A56E04;
    case 546u: goto L_08A56E18;
    case 547u: goto L_08A56E20;
    case 548u: goto L_08A56E24;
    case 549u: goto L_08A56E30;
    case 550u: goto L_08A56E50;
    case 551u: goto L_08A56E60;
    case 552u: goto L_08A56E84;
    case 553u: goto L_08A56E88;
    case 554u: goto L_08A56E9C;
    case 555u: goto L_08A56EB0;
    case 556u: goto L_08A56EB8;
    case 557u: goto L_08A56EC8;
    case 558u: goto L_08A56ED0;
    case 559u: goto L_08A56ED8;
    case 560u: goto L_08A56EE8;
    case 561u: goto L_08A56EF4;
    case 562u: goto L_08A56EFC;
    case 563u: goto L_08A56F10;
    case 564u: goto L_08A56F7C;
    case 565u: goto L_08A56F88;
    case 566u: goto L_08A56F8C;
    case 567u: goto L_08A56FA4;
    case 568u: goto L_08A56FBC;
    case 569u: goto L_08A56FC4;
    case 570u: goto L_08A56FCC;
    case 571u: goto L_08A56FD4;
    case 572u: goto L_08A56FDC;
    case 573u: goto L_08A56FE4;
    case 574u: goto L_08A56FEC;
    case 575u: goto L_08A56FF4;
    case 576u: goto L_08A57060;
    case 577u: goto L_08A570B4;
    case 578u: goto L_08A570C0;
    case 579u: goto L_08A570D0;
    case 580u: goto L_08A570F4;
    case 581u: goto L_08A57104;
    case 582u: goto L_08A57114;
    case 583u: goto L_08A5712C;
    case 584u: goto L_08A57134;
    case 585u: goto L_08A57138;
    case 586u: goto L_08A57178;
    case 587u: goto L_08A57184;
    case 588u: goto L_08A57198;
    case 589u: goto L_08A571A0;
    case 590u: goto L_08A571B4;
    case 591u: goto L_08A571C4;
    case 592u: goto L_08A571D0;
    case 593u: goto L_08A571E0;
    case 594u: goto L_08A571EC;
    case 595u: goto L_08A571FC;
    case 596u: goto L_08A57200;
    case 597u: goto L_08A5720C;
    case 598u: goto L_08A57224;
    case 599u: goto L_08A57238;
    case 600u: goto L_08A57240;
    case 601u: goto L_08A57248;
    case 602u: goto L_08A57258;
    case 603u: goto L_08A57278;
    case 604u: goto L_08A57288;
    case 605u: goto L_08A57290;
    case 606u: goto L_08A57298;
    case 607u: goto L_08A572A4;
    case 608u: goto L_08A572B4;
    case 609u: goto L_08A572C4;
    case 610u: goto L_08A572DC;
    case 611u: goto L_08A572F8;
    case 612u: goto L_08A57300;
    case 613u: goto L_08A57308;
    case 614u: goto L_08A57318;
    case 615u: goto L_08A57324;
    case 616u: goto L_08A5732C;
    case 617u: goto L_08A57340;
    case 618u: goto L_08A573AC;
    case 619u: goto L_08A573B8;
    case 620u: goto L_08A573BC;
    case 621u: goto L_08A573D4;
    case 622u: goto L_08A573EC;
    case 623u: goto L_08A573F4;
    case 624u: goto L_08A573FC;
    case 625u: goto L_08A57404;
    case 626u: goto L_08A5740C;
    case 627u: goto L_08A57414;
    case 628u: goto L_08A5741C;
    case 629u: goto L_08A57424;
    case 630u: goto L_08A57490;
    case 631u: goto L_08A574E4;
    case 632u: goto L_08A574E8;
    case 633u: goto L_08A574F0;
    case 634u: goto L_08A574FC;
    case 635u: goto L_08A57514;
    case 636u: goto L_08A5751C;
    case 637u: goto L_08A57550;
    case 638u: goto L_08A57590;
    case 639u: goto L_08A575A8;
    case 640u: goto L_08A575B0;
    case 641u: goto L_08A575B4;
    case 642u: goto L_08A575C0;
    case 643u: goto L_08A575C8;
    case 644u: goto L_08A575D0;
    case 645u: goto L_08A575E8;
    case 646u: goto L_08A575FC;
    case 647u: goto L_08A57614;
    case 648u: goto L_08A57628;
    case 649u: goto L_08A57630;
    case 650u: goto L_08A57644;
    case 651u: goto L_08A57658;
    case 652u: goto L_08A57660;
    case 653u: goto L_08A57668;
    case 654u: goto L_08A57680;
    case 655u: goto L_08A57694;
    case 656u: goto L_08A5769C;
    case 657u: goto L_08A576A0;
    case 658u: goto L_08A576A4;
    case 659u: goto L_08A576B0;
    case 660u: goto L_08A576C4;
    case 661u: goto L_08A576D4;
    case 662u: goto L_08A576E0;
    case 663u: goto L_08A576F4;
    case 664u: goto L_08A576FC;
    case 665u: goto L_08A57714;
    case 666u: goto L_08A57724;
    case 667u: goto L_08A5772C;
    case 668u: goto L_08A57740;
    case 669u: goto L_08A57754;
    case 670u: goto L_08A5775C;
    case 671u: goto L_08A57764;
    case 672u: goto L_08A5777C;
    case 673u: goto L_08A57790;
    case 674u: goto L_08A57798;
    case 675u: goto L_08A5779C;
    case 676u: goto L_08A577B0;
    case 677u: goto L_08A577B8;
    case 678u: goto L_08A577C8;
    case 679u: goto L_08A577D4;
    case 680u: goto L_08A577EC;
    case 681u: goto L_08A57800;
    case 682u: goto L_08A57808;
    case 683u: goto L_08A57810;
    case 684u: goto L_08A57820;
    case 685u: goto L_08A57830;
    case 686u: goto L_08A5783C;
    case 687u: goto L_08A5785C;
    case 688u: goto L_08A57864;
    case 689u: goto L_08A5786C;
    case 690u: goto L_08A5787C;
    case 691u: goto L_08A57888;
    case 692u: goto L_08A57890;
    case 693u: goto L_08A578A4;
    case 694u: goto L_08A57914;
    case 695u: goto L_08A57920;
    case 696u: goto L_08A57924;
    case 697u: goto L_08A5793C;
    case 698u: goto L_08A57950;
    case 699u: goto L_08A57958;
    case 700u: goto L_08A57960;
    case 701u: goto L_08A57968;
    case 702u: goto L_08A57970;
    case 703u: goto L_08A57978;
    case 704u: goto L_08A57980;
    case 705u: goto L_08A57988;
    case 706u: goto L_08A579F4;
    case 707u: goto L_08A57A48;
    case 708u: goto L_08A57A50;
    case 709u: goto L_08A57A54;
    case 710u: goto L_08A57A60;
    case 711u: goto L_08A57A84;
    case 712u: goto L_08A57AD8;
    case 713u: goto L_08A57AE0;
    case 714u: goto L_08A57AE4;
    case 715u: goto L_08A57AF0;
    case 716u: goto L_08A57AF8;
    case 717u: goto L_08A57B00;
    case 718u: goto L_08A57B18;
    case 719u: goto L_08A57B2C;
    case 720u: goto L_08A57B44;
    case 721u: goto L_08A57B58;
    case 722u: goto L_08A57B60;
    case 723u: goto L_08A57B74;
    case 724u: goto L_08A57B88;
    case 725u: goto L_08A57B90;
    case 726u: goto L_08A57B98;
    case 727u: goto L_08A57BB0;
    case 728u: goto L_08A57BC4;
    case 729u: goto L_08A57BCC;
    case 730u: goto L_08A57BD0;
    case 731u: goto L_08A57BD4;
    case 732u: goto L_08A57BE0;
    case 733u: goto L_08A57BF4;
    case 734u: goto L_08A57C04;
    case 735u: goto L_08A57C10;
    case 736u: goto L_08A57C24;
    case 737u: goto L_08A57C38;
    case 738u: goto L_08A57C50;
    case 739u: goto L_08A57C60;
    case 740u: goto L_08A57C68;
    case 741u: goto L_08A57C7C;
    case 742u: goto L_08A57C90;
    case 743u: goto L_08A57C98;
    case 744u: goto L_08A57CA0;
    case 745u: goto L_08A57CB8;
    case 746u: goto L_08A57CCC;
    case 747u: goto L_08A57CD4;
    case 748u: goto L_08A57CD8;
    case 749u: goto L_08A57CEC;
    case 750u: goto L_08A57CF4;
    case 751u: goto L_08A57D04;
    case 752u: goto L_08A57D10;
    case 753u: goto L_08A57D28;
    case 754u: goto L_08A57D3C;
    case 755u: goto L_08A57D44;
    case 756u: goto L_08A57D4C;
    case 757u: goto L_08A57D5C;
    case 758u: goto L_08A57D6C;
    case 759u: goto L_08A57D78;
    case 760u: goto L_08A57D98;
    case 761u: goto L_08A57DA0;
    case 762u: goto L_08A57DA8;
    case 763u: goto L_08A57DB8;
    case 764u: goto L_08A57DC4;
    case 765u: goto L_08A57DCC;
    case 766u: goto L_08A57DE0;
    case 767u: goto L_08A57E50;
    case 768u: goto L_08A57E5C;
    case 769u: goto L_08A57E60;
    case 770u: goto L_08A57E78;
    case 771u: goto L_08A57E8C;
    case 772u: goto L_08A57E94;
    case 773u: goto L_08A57E9C;
    case 774u: goto L_08A57EA4;
    case 775u: goto L_08A57EAC;
    case 776u: goto L_08A57EB4;
    case 777u: goto L_08A57EBC;
    case 778u: goto L_08A57EC4;
    case 779u: goto L_08A57F30;
    case 780u: goto L_08A57F84;
    case 781u: goto L_08A57F90;
    case 782u: goto L_08A57F9C;
    case 783u: goto L_08A57FB4;
    case 784u: goto L_08A57FCC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A54000:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[7]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::log2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::exp2(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<7u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 3u);
      ctx.read_vfpu_vector_ct<7u, 3u>(vfpu_target_raw);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A54168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 288u, 0x08A0E2E0u>(ctx, &aot_mem) && ctx.pc == 0x08A54168u) goto L_08A54168;
    return;
L_08A54168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5418C;
      }
      goto L_08A5417C;
    }
L_08A5417C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A54208;
      }
      goto L_08A5418C;
    }
L_08A5418C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x08A54198u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A54198u) goto L_08A54198;
    return;
L_08A54198:
    ctx.gpr[19] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A541A8u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A541A8u) goto L_08A541A8;
    return;
L_08A541A8:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A541B8u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A541B8u) goto L_08A541B8;
    return;
L_08A541B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9916)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9920)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A541D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A541D0u) goto L_08A541D0;
    return;
L_08A541D0:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A541E4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61FCu>(ctx, &aot_mem) && ctx.pc == 0x08A541E4u) goto L_08A541E4;
    return;
L_08A541E4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A541F8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A541F8u) goto L_08A541F8;
    return;
L_08A541F8:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A54204u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A54204u) goto L_08A54204;
    return;
L_08A54204:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A54208;
L_08A54208:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54234:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10052)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-10056)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-9984)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (17096u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-10024)));
    ctx.gpr[6] = (16014u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 14571u);
    ctx.gpr[2] = (2229u << 16u);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-10048), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    ctx.gpr[9] = (15744u << 16u);
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[13] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-10040), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-10044), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[16];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-10032), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-10036), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-10020), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-6188), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A542E8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5430C;
      }
      goto L_08A542F4;
    }
L_08A542F4:
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A542F4;
      }
      goto L_08A5430C;
    }
L_08A5430C:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54314:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A54338;
      }
      goto L_08A54328;
    }
L_08A54328:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54328;
      }
      goto L_08A54338;
    }
L_08A54338:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54358;
      }
      goto L_08A54340;
    }
L_08A54340:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54340;
      }
      goto L_08A54358;
    }
L_08A54358:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54364:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A54388;
      }
      goto L_08A54370;
    }
L_08A54370:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54370;
      }
      goto L_08A54388;
    }
L_08A54388:
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54394:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A543F8;
      }
      goto L_08A543A4;
    }
L_08A543A4:
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[5]) < 97 ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A543DC;
      }
      goto L_08A543B4;
    }
L_08A543B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A543DC;
      }
      goto L_08A543C0;
    }
L_08A543C0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A543F0;
      }
      goto L_08A543DC;
    }
L_08A543DC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A543F0;
L_08A543F0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A543A4;
      }
      goto L_08A543F8;
    }
L_08A543F8:
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A54424u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7000));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54424u) goto L_08A54424;
    return;
L_08A54424:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A54434u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A54F28;
L_08A54434:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A54450u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08A54F4C;
L_08A54450:
    ctx.gpr[31] = (0x08A54458u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A54F3C;
L_08A54458:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08A54474u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A54474u) goto L_08A54474;
    return;
L_08A54474:
    ctx.gpr[31] = (0x08A5447Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A54F60;
L_08A5447C:
    ctx.gpr[31] = (0x08A54484u);
    // nop
    goto L_08A54FE8;
L_08A54484:
    ctx.gpr[31] = (0x08A5448Cu);
    // nop
    goto L_08A55018;
L_08A5448C:
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A5449Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A5509C;
L_08A5449C:
    ctx.gpr[31] = (0x08A544A4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A550DC;
L_08A544A4:
    ctx.gpr[31] = (0x08A544ACu);
    // nop
    goto L_08A55100;
L_08A544AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08A544C4u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A544C4u) goto L_08A544C4;
    return;
L_08A544C4:
    ctx.gpr[31] = (0x08A544CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A55110;
L_08A544CC:
    ctx.gpr[31] = (0x08A544D4u);
    // nop
    goto L_08A55150;
L_08A544D4:
    ctx.gpr[31] = (0x08A544DCu);
    // nop
    goto L_08A55160;
L_08A544DC:
    ctx.gpr[31] = (0x08A544E4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A55184;
L_08A544E4:
    ctx.gpr[31] = (0x08A544ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A5505C;
L_08A544EC:
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[31] = (0x08A544F8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A551BC;
L_08A544F8:
    ctx.gpr[31] = (0x08A54500u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A551CC;
L_08A54500:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A54518u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A54518u) goto L_08A54518;
    return;
L_08A54518:
    ctx.gpr[31] = (0x08A54520u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A55248;
L_08A54520:
    ctx.gpr[31] = (0x08A54528u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A552B4;
L_08A54528:
    ctx.gpr[31] = (0x08A54530u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A552C4;
L_08A54530:
    ctx.gpr[31] = (0x08A54538u);
    ctx.gpr[4] = (0u | 2u);
    goto L_08A552C4;
L_08A54538:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7384)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5466C;
      }
      goto L_08A54548;
    }
L_08A54548:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A54554u);
    ctx.gpr[4] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A54554u) goto L_08A54554;
    return;
L_08A54554:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
      if (branch_taken) {
          goto L_08A54594;
      }
      goto L_08A54568;
    }
L_08A54568:
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9756));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9740));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[7] = (2213u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(21920));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    goto L_08A54594;
L_08A54594:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A545A8;
      }
      goto L_08A5459C;
    }
L_08A5459C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    goto L_08A545A8;
L_08A545A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A545F0;
      }
      goto L_08A545B8;
    }
L_08A545B8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A545E0;
      }
      goto L_08A545C4;
    }
L_08A545C4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A545D8;
      }
      goto L_08A545CC;
    }
L_08A545CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A545D8;
L_08A545D8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    goto L_08A545E0;
L_08A545E0:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
      if (branch_taken) {
          goto L_08A54624;
      }
      goto L_08A545F0;
    }
L_08A545F0:
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A54618u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 151u, 0x08B00A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A54618u) goto L_08A54618;
    return;
L_08A54618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    goto L_08A54624;
L_08A54624:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5464C;
      }
      goto L_08A5462C;
    }
L_08A5462C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A54648u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A54648u) goto L_08A54648;
    return;
L_08A54648:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_08A5464C;
L_08A5464C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5466C;
      }
      goto L_08A54654;
    }
L_08A54654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5466C;
      }
      goto L_08A54664;
    }
L_08A54664:
    ctx.gpr[31] = (0x08A5466Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5466Cu) goto L_08A5466C;
    return;
L_08A5466C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A546A0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A551CC;
L_08A546A0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6184), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22656));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25584));
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-24560), ctx.gpr[4]);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A546D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A546F8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A57550;
L_08A546F8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[18])) && ctx.fpr[13] == ctx.fpr[18]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08A54768;
      }
      goto L_08A54750;
    }
L_08A54750:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_08A54768;
L_08A54768:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5477Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A56C04;
L_08A5477C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54794:
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A547CC;
      }
      goto L_08A547A4;
    }
L_08A547A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A547CC;
      }
      goto L_08A547AC;
    }
L_08A547AC:
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22656));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(42)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[6];
    ctx.gpr[6] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A547E0;
      }
      goto L_08A547C4;
    }
L_08A547C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A547D4;
      }
      goto L_08A547CC;
    }
L_08A547CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A54964;
      }
      goto L_08A547D4;
    }
L_08A547D4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54864;
      }
      goto L_08A547DC;
    }
L_08A547DC:
    ctx.gpr[6] = (2277u << 16u);
    goto L_08A547E0;
L_08A547E0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22656));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9912));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A54858;
      }
      goto L_08A5484C;
    }
L_08A5484C:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5485C;
      }
      goto L_08A54858;
    }
L_08A54858:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A5485C;
L_08A5485C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A54964;
      }
      goto L_08A54864;
    }
L_08A54864:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A548A4;
      }
      goto L_08A5487C;
    }
L_08A5487C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A548A4;
      }
      goto L_08A54884;
    }
L_08A54884:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A548A4;
      }
      goto L_08A5488C;
    }
L_08A5488C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A548A4;
      }
      goto L_08A54894;
    }
L_08A54894:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A548A4;
      }
      goto L_08A5489C;
    }
L_08A5489C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A548AC;
      }
      goto L_08A548A4;
    }
L_08A548A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A548AC;
      }
      goto L_08A548AC;
    }
L_08A548AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A54918;
      }
      goto L_08A548B4;
    }
L_08A548B4:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22656));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[6] = (16332u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[7] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A54964;
      }
      goto L_08A54918;
    }
L_08A54918:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22656));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[6] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[0] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[0];
    goto L_08A54964;
L_08A54964:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5496C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549A8;
      }
      goto L_08A54984;
    }
L_08A54984:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A549A8;
      }
      goto L_08A5498C;
    }
L_08A5498C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A549B0;
      }
      goto L_08A549A0;
    }
L_08A549A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A549C0;
      }
      goto L_08A549A8;
    }
L_08A549A8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A54B7C;
      }
      goto L_08A549B0;
    }
L_08A549B0:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08A549BCu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A552D4;
L_08A549BC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    goto L_08A549C0;
L_08A549C0:
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(29)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A54A6C;
      }
      goto L_08A549D8;
    }
L_08A549D8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9912));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A54A50;
      }
      goto L_08A54A44;
    }
L_08A54A44:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A54A54;
      }
      goto L_08A54A50;
    }
L_08A54A50:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A54A54;
L_08A54A54:
    ctx.fpr[0] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08A54B7C;
      }
      goto L_08A54A6C;
    }
L_08A54A6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A54AAC;
      }
      goto L_08A54A84;
    }
L_08A54A84:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A54AAC;
      }
      goto L_08A54A8C;
    }
L_08A54A8C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A54AAC;
      }
      goto L_08A54A94;
    }
L_08A54A94:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A54AAC;
      }
      goto L_08A54A9C;
    }
L_08A54A9C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A54AAC;
      }
      goto L_08A54AA4;
    }
L_08A54AA4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54AB4;
      }
      goto L_08A54AAC;
    }
L_08A54AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54AB4;
      }
      goto L_08A54AB4;
    }
L_08A54AB4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A54B28;
      }
      goto L_08A54ABC;
    }
L_08A54ABC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[0] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08A54B7C;
      }
      goto L_08A54B28;
    }
L_08A54B28:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    goto L_08A54B7C;
L_08A54B7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54B88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (17392u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    ctx.fpr[0] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (0u | 126u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 33u);
    ctx.gpr[23] = (0u | 63u);
    ctx.gpr[22] = (0u | 46u);
    ctx.gpr[21] = (0u | 44u);
    ctx.gpr[20] = (0u | 58u);
    ctx.gpr[19] = (0u | 59u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    goto L_08A54BF8;
L_08A54BF8:
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A54C58;
      }
      goto L_08A54C04;
    }
L_08A54C04:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A54C3C;
      }
      goto L_08A54C14;
    }
L_08A54C14:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A54C3C;
      }
      goto L_08A54C1C;
    }
L_08A54C1C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A54C3C;
      }
      goto L_08A54C24;
    }
L_08A54C24:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A54C3C;
      }
      goto L_08A54C2C;
    }
L_08A54C2C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A54C3C;
      }
      goto L_08A54C34;
    }
L_08A54C34:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54C44;
      }
      goto L_08A54C3C;
    }
L_08A54C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54C44;
      }
      goto L_08A54C44;
    }
L_08A54C44:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54C58;
      }
      goto L_08A54C4C;
    }
L_08A54C4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CF0;
      }
      goto L_08A54C58;
    }
L_08A54C58:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CF0;
      }
      goto L_08A54C60;
    }
L_08A54C60:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54CF0;
      }
      goto L_08A54C68;
    }
L_08A54C68:
    if (ctx.gpr[4] != ctx.gpr[16]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27020)));
        goto L_08A54CF8;
    }
    goto L_08A54C70;
L_08A54C70:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54C8C;
      }
      goto L_08A54C80;
    }
L_08A54C80:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54C80;
      }
      goto L_08A54C8C;
    }
L_08A54C8C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27020)));
        goto L_08A54CF8;
    }
    goto L_08A54C9C;
L_08A54C9C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54CAC;
    }
L_08A54CAC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54CB4;
    }
L_08A54CB4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54CBC;
    }
L_08A54CBC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54CC4;
    }
L_08A54CC4:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A54CD4;
      }
      goto L_08A54CCC;
    }
L_08A54CCC:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54CDC;
      }
      goto L_08A54CD4;
    }
L_08A54CD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54CDC;
      }
      goto L_08A54CDC;
    }
L_08A54CDC:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27020)));
        goto L_08A54CF8;
    }
    goto L_08A54CE4;
L_08A54CE4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27020)));
        goto L_08A54CF8;
    }
    goto L_08A54CF0;
L_08A54CF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54D48;
      }
      goto L_08A54CF8;
    }
L_08A54CF8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[31] = (0x08A54D14u);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A5496C;
L_08A54D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[14]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[20] / ctx.fpr[13];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[0] = ctx.fpr[22] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_08A54BF8;
      }
      goto L_08A54D48;
    }
L_08A54D48:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54D80:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54DA4;
      }
      goto L_08A54D94;
    }
L_08A54D94:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54D94;
      }
      goto L_08A54DA4;
    }
L_08A54DA4:
    ctx.gpr[4] = (0u | 126u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54DDC;
      }
      goto L_08A54DB0;
    }
L_08A54DB0:
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 78u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 110u);
      if (branch_taken) {
          goto L_08A54DCC;
      }
      goto L_08A54DC4;
    }
L_08A54DC4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54DD4;
      }
      goto L_08A54DCC;
    }
L_08A54DCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54DE0;
      }
      goto L_08A54DD4;
    }
L_08A54DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54DE0;
      }
      goto L_08A54DDC;
    }
L_08A54DDC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A54DE0;
L_08A54DE0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54DE8:
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u | 126u);
    ctx.gpr[11] = (0u | 32u);
    ctx.gpr[10] = (0u | 33u);
    ctx.gpr[9] = (0u | 63u);
    ctx.gpr[8] = (0u | 46u);
    ctx.gpr[7] = (0u | 44u);
    ctx.gpr[6] = (0u | 58u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    goto L_08A54E10;
L_08A54E10:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A54E60;
      }
      goto L_08A54E18;
    }
L_08A54E18:
    ctx.gpr[12] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[12] = (ctx.gpr[12] & 65535u);
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A54E50;
      }
      goto L_08A54E28;
    }
L_08A54E28:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A54E50;
      }
      goto L_08A54E30;
    }
L_08A54E30:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A54E50;
      }
      goto L_08A54E38;
    }
L_08A54E38:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A54E50;
      }
      goto L_08A54E40;
    }
L_08A54E40:
    { const bool branch_taken = ctx.gpr[12] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A54E50;
      }
      goto L_08A54E48;
    }
L_08A54E48:
    { const bool branch_taken = ctx.gpr[12] != ctx.gpr[5];
    ctx.gpr[12] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54E58;
      }
      goto L_08A54E50;
    }
L_08A54E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54E58;
      }
      goto L_08A54E58;
    }
L_08A54E58:
    { const bool branch_taken = ctx.gpr[12] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54EE0;
      }
      goto L_08A54E60;
    }
L_08A54E60:
    { const bool branch_taken = ctx.gpr[3] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54EE0;
      }
      goto L_08A54E68;
    }
L_08A54E68:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A54EE8;
      }
      goto L_08A54E70;
    }
L_08A54E70:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[4];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54E8C;
      }
      goto L_08A54E80;
    }
L_08A54E80:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A54E80;
      }
      goto L_08A54E8C;
    }
L_08A54E8C:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A54EE8;
      }
      goto L_08A54E98;
    }
L_08A54E98:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    ctx.gpr[3] = (ctx.gpr[3] & 65535u);
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A54ED0;
      }
      goto L_08A54EA8;
    }
L_08A54EA8:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A54ED0;
      }
      goto L_08A54EB0;
    }
L_08A54EB0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A54ED0;
      }
      goto L_08A54EB8;
    }
L_08A54EB8:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A54ED0;
      }
      goto L_08A54EC0;
    }
L_08A54EC0:
    { const bool branch_taken = ctx.gpr[3] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A54ED0;
      }
      goto L_08A54EC8;
    }
L_08A54EC8:
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[5];
    ctx.gpr[3] = (0u | 0u);
      if (branch_taken) {
          goto L_08A54ED8;
      }
      goto L_08A54ED0;
    }
L_08A54ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (0u | 1u);
      if (branch_taken) {
          goto L_08A54ED8;
      }
      goto L_08A54ED8;
    }
L_08A54ED8:
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A54EE8;
      }
      goto L_08A54EE0;
    }
L_08A54EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A54EF4;
      }
      goto L_08A54EE8;
    }
L_08A54EE8:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A54E10;
      }
      goto L_08A54EF4;
    }
L_08A54EF4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54EFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A54F0Cu);
    // nop
    goto L_08A562CC;
L_08A54F0C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F18:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F28:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F3C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F4C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54F60:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A54FC4;
      }
      goto L_08A54FA4;
    }
L_08A54FA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A54FC4;
L_08A54FC4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54FCC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54FE8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A54FFC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55018:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55028:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55044:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5505C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17392u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A55078;
      }
      goto L_08A55074;
    }
L_08A55074:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A55078;
L_08A55078:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5508C;
      }
      goto L_08A55088;
    }
L_08A55088:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A5508C;
L_08A5508C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5509C:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (17392u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A550B8;
      }
      goto L_08A550B4;
    }
L_08A550B4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A550B8;
L_08A550B8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A550CC;
      }
      goto L_08A550C8;
    }
L_08A550C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A550CC;
L_08A550CC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A550DC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A550EC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55100:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55110:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A5513C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55150:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55160:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55174:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55184:
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
      if (branch_taken) {
          goto L_08A551AC;
      }
      goto L_08A5519C;
    }
L_08A5519C:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A551B4;
      }
      goto L_08A551AC;
    }
L_08A551AC:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint8_t>(0u));
    goto L_08A551B4;
L_08A551B4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A551BC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A551CC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A551DC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A55240;
      }
      goto L_08A55220;
    }
L_08A55220:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A55240;
L_08A55240:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55248:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[6] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A552AC;
      }
      goto L_08A5528C;
    }
L_08A5528C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(91)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A552AC;
L_08A552AC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A552B4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A552C4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A552D4:
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 33 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 59 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A552F0;
      }
      goto L_08A552E8;
    }
L_08A552E8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55304;
      }
      goto L_08A552F0;
    }
L_08A552F0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 91 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A55314;
      }
      goto L_08A552FC;
    }
L_08A552FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5531C;
      }
      goto L_08A55304;
    }
L_08A55304:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-6));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A55314;
    }
L_08A55314:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55330;
      }
      goto L_08A5531C;
    }
L_08A5531C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < 96 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 128 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A55340;
      }
      goto L_08A55328;
    }
L_08A55328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55348;
      }
      goto L_08A55330;
    }
L_08A55330:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-38));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A55340;
    }
L_08A55340:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55358;
      }
      goto L_08A55348;
    }
L_08A55348:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 160 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A55368;
      }
      goto L_08A55350;
    }
L_08A55350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55370;
      }
      goto L_08A55358;
    }
L_08A55358:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-43));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A55368;
    }
L_08A55368:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A553FC;
      }
      goto L_08A55370;
    }
L_08A55370:
    ctx.gpr[4] = (0u | 190u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A553F4;
      }
      goto L_08A5537C;
    }
L_08A5537C:
    ctx.gpr[4] = (0u | 175u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A553EC;
      }
      goto L_08A55388;
    }
L_08A55388:
    ctx.gpr[4] = (0u | 184u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A553E4;
      }
      goto L_08A55394;
    }
L_08A55394:
    ctx.gpr[4] = (0u | 187u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A553DC;
      }
      goto L_08A553A0;
    }
L_08A553A0:
    ctx.gpr[4] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A553D4;
      }
      goto L_08A553AC;
    }
L_08A553AC:
    ctx.gpr[4] = (0u | 87u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A553CC;
      }
      goto L_08A553B8;
    }
L_08A553B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 27 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 31 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A5540C;
      }
      goto L_08A553C4;
    }
L_08A553C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55414;
      }
      goto L_08A553CC;
    }
L_08A553CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A553D4;
    }
L_08A553D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 88u);
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A553DC;
    }
L_08A553DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 89u);
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A553E4;
    }
L_08A553E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 88u);
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A553EC;
    }
L_08A553EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 87u);
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A553F4;
    }
L_08A553F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 90u);
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A553FC;
    }
L_08A553FC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-75));
    ctx.gpr[2] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A5540C;
    }
L_08A5540C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55430;
      }
      goto L_08A55414;
    }
L_08A55414:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 180 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 256 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A55428;
      }
      goto L_08A55420;
    }
L_08A55420:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A55438;
      }
      goto L_08A55428;
    }
L_08A55428:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A55430;
    }
L_08A55430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_08A5543C;
      }
      goto L_08A55438;
    }
L_08A55438:
    ctx.gpr[2] = (0u | 2u);
    goto L_08A5543C;
L_08A5543C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55444:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A5548Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    goto L_08A54F28;
L_08A5548C:
    ctx.gpr[31] = (0x08A55494u);
    // nop
    goto L_08A55160;
L_08A55494:
    ctx.gpr[31] = (0x08A5549Cu);
    // nop
    goto L_08A55100;
L_08A5549C:
    ctx.gpr[31] = (0x08A554A4u);
    // nop
    goto L_08A55018;
L_08A554A4:
    ctx.gpr[31] = (0x08A554ACu);
    // nop
    goto L_08A55044;
L_08A554AC:
    ctx.gpr[31] = (0x08A554B4u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A5505C;
L_08A554B4:
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A554D0;
      }
      goto L_08A554C0;
    }
L_08A554C0:
    ctx.gpr[31] = (0x08A554C8u);
    // nop
    goto L_08A54FFC;
L_08A554C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A554E4;
      }
      goto L_08A554D0;
    }
L_08A554D0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A554E4;
      }
      goto L_08A554DC;
    }
L_08A554DC:
    ctx.gpr[31] = (0x08A554E4u);
    // nop
    goto L_08A55028;
L_08A554E4:
    ctx.gpr[31] = (0x08A554ECu);
    // nop
    goto L_08A55150;
L_08A554EC:
    ctx.gpr[4] = (ctx.gpr[16] << 16u);
    ctx.gpr[31] = (0x08A554F8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A55184;
L_08A554F8:
    ctx.gpr[31] = (0x08A55500u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A5509C;
L_08A55500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A55514u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A54F60;
L_08A55514:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A5552Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A5552Cu) goto L_08A5552C;
    return;
L_08A5552C:
    ctx.gpr[31] = (0x08A55534u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A551DC;
L_08A55534:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A55550;
      }
      goto L_08A5553C;
    }
L_08A5553C:
    ctx.gpr[31] = (0x08A55544u);
    ctx.gpr[4] = (0u | 0u);
    goto L_08A551CC;
L_08A55544:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A55560;
      }
      goto L_08A55550;
    }
L_08A55550:
    ctx.gpr[31] = (0x08A55558u);
    ctx.gpr[4] = (0u | 2u);
    goto L_08A551CC;
L_08A55558:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    goto L_08A55560;
L_08A55560:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A55578u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A56C04;
L_08A55578:
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
L_08A555A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A555BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7000));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 586u, 0x0892FA2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A555BCu) goto L_08A555BC;
    return;
L_08A555BC:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A555D4;
      }
      goto L_08A555C8;
    }
L_08A555C8:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A555E8;
      }
      goto L_08A555D4;
    }
L_08A555D4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A555E0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 608u, 0x0892FB3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A555E0u) goto L_08A555E0;
    return;
L_08A555E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55690;
      }
      goto L_08A555E8;
    }
L_08A555E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7380)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A55600u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08A55600u) goto L_08A55600;
    return;
L_08A55600:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7384)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55618u);
    ctx.gpr[6] = (16u << 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0180_entry, 180u, 560u, 0x08AD6A18u>(ctx, &aot_mem) && ctx.pc == 0x08A55618u) goto L_08A55618;
    return;
L_08A55618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A55628u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 415u, 0x089C9D98u>(ctx, &aot_mem) && ctx.pc == 0x08A55628u) goto L_08A55628;
    return;
L_08A55628:
    ctx.gpr[31] = (0x08A55630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 629u, 0x0892FCC0u>(ctx, &aot_mem) && ctx.pc == 0x08A55630u) goto L_08A55630;
    return;
L_08A55630:
    ctx.gpr[31] = (0x08A55638u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 624u, 0x0892FC6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A55638u) goto L_08A55638;
    return;
L_08A55638:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(22640));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7008));
    ctx.gpr[31] = (0x08A55658u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7016));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 901u, 0x08AD3A74u>(ctx, &aot_mem) && ctx.pc == 0x08A55658u) goto L_08A55658;
    return;
L_08A55658:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7024));
    ctx.gpr[31] = (0x08A55670u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7032));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 901u, 0x08AD3A74u>(ctx, &aot_mem) && ctx.pc == 0x08A55670u) goto L_08A55670;
    return;
L_08A55670:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(7040));
    ctx.gpr[31] = (0x08A55688u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(7048));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 901u, 0x08AD3A74u>(ctx, &aot_mem) && ctx.pc == 0x08A55688u) goto L_08A55688;
    return;
L_08A55688:
    ctx.gpr[31] = (0x08A55690u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 631u, 0x0892FCE4u>(ctx, &aot_mem) && ctx.pc == 0x08A55690u) goto L_08A55690;
    return;
L_08A55690:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A556A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-4144));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4124), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A556E0;
      }
      goto L_08A556D0;
    }
L_08A556D0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A556D0;
      }
      goto L_08A556E0;
    }
L_08A556E0:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55710;
      }
      goto L_08A556F0;
    }
L_08A556F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 159u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A55718;
      }
      goto L_08A55700;
    }
L_08A55700:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A556F0;
      }
      goto L_08A55710;
    }
L_08A55710:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A55778;
      }
      goto L_08A55718;
    }
L_08A55718:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4112));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A55730u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7056));
    goto L_08A542E8;
L_08A55730:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A55740u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A54364;
L_08A55740:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A55758u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A54314;
L_08A55758:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A55764u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A54314;
L_08A55764:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[31] = (0x08A55770u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A54314;
L_08A55770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A55778;
      }
      goto L_08A55778;
    }
L_08A55778:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(4144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A55798:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A557C4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14220));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 366u, 0x08AF5CA4u>(ctx, &aot_mem) && ctx.pc == 0x08A557C4u) goto L_08A557C4;
    return;
L_08A557C4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A557D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 209 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A55848;
      }
      goto L_08A55810;
    }
L_08A55810:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55848;
      }
      goto L_08A55818;
    }
L_08A55818:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55850;
      }
      goto L_08A55840;
    }
L_08A55840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A55848;
    }
L_08A55848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A55850;
    }
L_08A55850:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (49472u << 16u);
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A55864;
    }
L_08A55864:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A55878;
    }
L_08A55878:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A55894;
    }
L_08A55894:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A558A0;
      }
      goto L_08A5589C;
    }
L_08A5589C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A558A0;
L_08A558A0:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A558BC;
      }
      goto L_08A558B4;
    }
L_08A558B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[8] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A558C4;
      }
      goto L_08A558BC;
    }
L_08A558BC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A55A64;
      }
      goto L_08A558C4;
    }
L_08A558C4:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22656));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(42)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[7] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A558E4;
      }
      goto L_08A558D8;
    }
L_08A558D8:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
        goto L_08A55968;
    }
    goto L_08A558E0;
L_08A558E0:
    ctx.gpr[7] = (2277u << 16u);
    goto L_08A558E4;
L_08A558E4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22656));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9912));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
      if (branch_taken) {
          goto L_08A5595C;
      }
      goto L_08A55950;
    }
L_08A55950:
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A55960;
      }
      goto L_08A5595C;
    }
L_08A5595C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A55960;
L_08A55960:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A55A64;
      }
      goto L_08A55968;
    }
L_08A55968:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 63u);
      if (branch_taken) {
          goto L_08A559A4;
      }
      goto L_08A5597C;
    }
L_08A5597C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_08A559A4;
      }
      goto L_08A55984;
    }
L_08A55984:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_08A559A4;
      }
      goto L_08A5598C;
    }
L_08A5598C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_08A559A4;
      }
      goto L_08A55994;
    }
L_08A55994:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 59u);
      if (branch_taken) {
          goto L_08A559A4;
      }
      goto L_08A5599C;
    }
L_08A5599C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A559AC;
      }
      goto L_08A559A4;
    }
L_08A559A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A559AC;
      }
      goto L_08A559AC;
    }
L_08A559AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55A18;
      }
      goto L_08A559B4;
    }
L_08A559B4:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22656));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (16332u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A55A64;
      }
      goto L_08A55A18;
    }
L_08A55A18:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22656));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[20];
    goto L_08A55A64;
L_08A55A64:
    ctx.gpr[5] = (15616u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22656));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A55E34;
      }
      goto L_08A55A80;
    }
L_08A55A80:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22656));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A55E34;
      }
      goto L_08A55A94;
    }
L_08A55A94:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55AB0;
      }
      goto L_08A55AA8;
    }
L_08A55AA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[8] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55AB8;
      }
      goto L_08A55AB0;
    }
L_08A55AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A55C58;
      }
      goto L_08A55AB8;
    }
L_08A55AB8:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22656));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(42)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[7] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55AD8;
      }
      goto L_08A55ACC;
    }
L_08A55ACC:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
        goto L_08A55B5C;
    }
    goto L_08A55AD4;
L_08A55AD4:
    ctx.gpr[7] = (2277u << 16u);
    goto L_08A55AD8;
L_08A55AD8:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22656));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9912));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A55B50;
      }
      goto L_08A55B44;
    }
L_08A55B44:
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A55B54;
      }
      goto L_08A55B50;
    }
L_08A55B50:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    goto L_08A55B54;
L_08A55B54:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08A55C58;
      }
      goto L_08A55B5C;
    }
L_08A55B5C:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 63u);
      if (branch_taken) {
          goto L_08A55B98;
      }
      goto L_08A55B70;
    }
L_08A55B70:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_08A55B98;
      }
      goto L_08A55B78;
    }
L_08A55B78:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_08A55B98;
      }
      goto L_08A55B80;
    }
L_08A55B80:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_08A55B98;
      }
      goto L_08A55B88;
    }
L_08A55B88:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 59u);
      if (branch_taken) {
          goto L_08A55B98;
      }
      goto L_08A55B90;
    }
L_08A55B90:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55BA0;
      }
      goto L_08A55B98;
    }
L_08A55B98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A55BA0;
      }
      goto L_08A55BA0;
    }
L_08A55BA0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55C0C;
      }
      goto L_08A55BA8;
    }
L_08A55BA8:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22656));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (16332u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (ctx.lo);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
      if (branch_taken) {
          goto L_08A55C58;
      }
      goto L_08A55C0C;
    }
L_08A55C0C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22656));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    goto L_08A55C58;
L_08A55C58:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A55C74;
      }
      goto L_08A55C6C;
    }
L_08A55C6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[8] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55C7C;
      }
      goto L_08A55C74;
    }
L_08A55C74:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A55E1C;
      }
      goto L_08A55C7C;
    }
L_08A55C7C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(22656));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(42)));
    ctx.gpr[7] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[7] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55C9C;
      }
      goto L_08A55C90;
    }
L_08A55C90:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
        goto L_08A55D20;
    }
    goto L_08A55C98;
L_08A55C98:
    ctx.gpr[7] = (2277u << 16u);
    goto L_08A55C9C;
L_08A55C9C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22656));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[9] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-9912));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[8]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 192 ? 1u : 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
      if (branch_taken) {
          goto L_08A55D14;
      }
      goto L_08A55D08;
    }
L_08A55D08:
    ctx.gpr[5] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A55D18;
      }
      goto L_08A55D14;
    }
L_08A55D14:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    goto L_08A55D18;
L_08A55D18:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A55E1C;
      }
      goto L_08A55D20;
    }
L_08A55D20:
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 63u);
      if (branch_taken) {
          goto L_08A55D5C;
      }
      goto L_08A55D34;
    }
L_08A55D34:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 46u);
      if (branch_taken) {
          goto L_08A55D5C;
      }
      goto L_08A55D3C;
    }
L_08A55D3C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_08A55D5C;
      }
      goto L_08A55D44;
    }
L_08A55D44:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 58u);
      if (branch_taken) {
          goto L_08A55D5C;
      }
      goto L_08A55D4C;
    }
L_08A55D4C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 59u);
      if (branch_taken) {
          goto L_08A55D5C;
      }
      goto L_08A55D54;
    }
L_08A55D54:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A55D64;
      }
      goto L_08A55D5C;
    }
L_08A55D5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A55D64;
      }
      goto L_08A55D64;
    }
L_08A55D64:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55DD0;
      }
      goto L_08A55D6C;
    }
L_08A55D6C:
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22656));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (16332u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.gpr[8] = (ctx.lo);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A55E1C;
      }
      goto L_08A55DD0;
    }
L_08A55DD0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22656));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    goto L_08A55E1C;
L_08A55E1C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22656));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[30] + ctx.fpr[12];
    goto L_08A55E34;
L_08A55E34:
    ctx.gpr[5] = (ctx.gpr[16] & 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (15744u << 16u);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 4u));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
      if (branch_taken) {
          goto L_08A55E68;
      }
      goto L_08A55E5C;
    }
L_08A55E5C:
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56204;
      }
      goto L_08A55E68;
    }
L_08A55E68:
    ctx.gpr[31] = (0x08A55E70u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A55E70u) goto L_08A55E70;
    return;
L_08A55E70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7372)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7376)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55E88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 491u, 0x08AF6650u>(ctx, &aot_mem) && ctx.pc == 0x08A55E88u) goto L_08A55E88;
    return;
L_08A55E88:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55E94u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A55E94u) goto L_08A55E94;
    return;
L_08A55E94:
    ctx.gpr[4] = (16245u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A5616C;
      }
      goto L_08A55EA8;
    }
L_08A55EA8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5616C;
      }
      goto L_08A55EC8;
    }
L_08A55EC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 192 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A560DC;
      }
      goto L_08A55ED4;
    }
L_08A55ED4:
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16204u << 16u);
      if (branch_taken) {
          goto L_08A55F30;
      }
      goto L_08A55F00;
    }
L_08A55F00:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A55FCC;
      }
      goto L_08A55F2C;
    }
L_08A55F2C:
    ctx.gpr[4] = (16204u << 16u);
    goto L_08A55F30;
L_08A55F30:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (16091u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 8914u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[31] = (0x08A55F78u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A55F78u) goto L_08A55F78;
    return;
L_08A55F78:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A55F88u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A55F88u) goto L_08A55F88;
    return;
L_08A55F88:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7368)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55FA0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 446u, 0x08AF62D8u>(ctx, &aot_mem) && ctx.pc == 0x08A55FA0u) goto L_08A55FA0;
    return;
L_08A55FA0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55FB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 441u, 0x08AF6264u>(ctx, &aot_mem) && ctx.pc == 0x08A55FB4u) goto L_08A55FB4;
    return;
L_08A55FB4:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A55FC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 561u, 0x08AF6AF8u>(ctx, &aot_mem) && ctx.pc == 0x08A55FC0u) goto L_08A55FC0;
    return;
L_08A55FC0:
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_08A5603C;
      }
      goto L_08A55FCC;
    }
L_08A55FCC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A56024;
      }
      goto L_08A55FF8;
    }
L_08A55FF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A5603C;
      }
      goto L_08A56024;
    }
L_08A56024:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A5603C;
L_08A5603C:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[15];
    ctx.gpr[31] = (0x08A56084u);
    ctx.fpr[15] = ctx.fpr[13] + ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08A56084u) goto L_08A56084;
    return;
L_08A56084:
    ctx.gpr[4] = (15776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (15488u << 16u);
    ctx.fpr[17] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A560D4u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 881u, 0x08AD38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A560D4u) goto L_08A560D4;
    return;
L_08A560D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A560DC;
    }
L_08A560DC:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[15];
    ctx.gpr[31] = (0x08A56128u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08A56128u) goto L_08A56128;
    return;
L_08A56128:
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (15776u << 16u);
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[24] + ctx.fpr[17];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A56164u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 881u, 0x08AD38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A56164u) goto L_08A56164;
    return;
L_08A56164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A5616C;
    }
L_08A5616C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A56174;
    }
L_08A56174:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16928u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[15];
    ctx.gpr[31] = (0x08A561C0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08A561C0u) goto L_08A561C0;
    return;
L_08A561C0:
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (15776u << 16u);
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[24] + ctx.fpr[17];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A561FCu);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 881u, 0x08AD38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A561FCu) goto L_08A561FC;
    return;
L_08A561FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A56204;
    }
L_08A56204:
    ctx.gpr[4] = (16588u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A562A0;
      }
      goto L_08A5621C;
    }
L_08A5621C:
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(22656));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[14];
    ctx.gpr[31] = (0x08A56260u);
    ctx.fpr[15] = ctx.fpr[22] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08A56260u) goto L_08A56260;
    return;
L_08A56260:
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (15904u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.fpr[17] = ctx.fpr[24] + ctx.fpr[17];
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A562A0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 881u, 0x08AD38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A562A0u) goto L_08A562A0;
    return;
L_08A562A0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A562CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(297)));
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25584));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A56450;
      }
      goto L_08A5632C;
    }
L_08A5632C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24560)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A56448;
      }
      goto L_08A56340;
    }
L_08A56340:
    ctx.gpr[22] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(22656));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(22640));
    ctx.gpr[31] = (0x08A56364u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 944u, 0x08AD3EA8u>(ctx, &aot_mem) && ctx.pc == 0x08A56364u) goto L_08A56364;
    return;
L_08A56364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(22656), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(44))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24560)));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A56458;
      }
      goto L_08A56440;
    }
L_08A56440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56760;
      }
      goto L_08A56448;
    }
L_08A56448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5676C;
      }
      goto L_08A56450;
    }
L_08A56450:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-24560), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A5676C;
      }
      goto L_08A56458;
    }
L_08A56458:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[30] = (0u | 201u);
    ctx.gpr[5] = (17392u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[21] = (2229u << 16u);
    goto L_08A56480;
L_08A56480:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56584;
      }
      goto L_08A5648C;
    }
L_08A5648C:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] & 3u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A564A8;
      }
      goto L_08A564A0;
    }
L_08A564A0:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08A564A8;
L_08A564A8:
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A564BC;
    }
    goto L_08A564B4;
L_08A564B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56760;
      }
      goto L_08A564BC;
    }
L_08A564BC:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(22656), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(41)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(42)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(44))))));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(21)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(22)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(23)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A56584;
L_08A56584:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 126u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5662C;
      }
      goto L_08A56594;
    }
L_08A56594:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A565A8u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 33u, 0x08A58438u>(ctx, &aot_mem) && ctx.pc == 0x08A565A8u) goto L_08A565A8;
    return;
L_08A565A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A565F8;
      }
      goto L_08A565B4;
    }
L_08A565B4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(301) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A565E0;
      }
      goto L_08A565D0;
    }
L_08A565D0:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    goto L_08A565E0;
L_08A565E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A565F4;
      }
      goto L_08A565E8;
    }
L_08A565E8:
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A565F8;
      }
      goto L_08A565F4;
    }
L_08A565F4:
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08A565F8;
L_08A565F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5662C;
      }
      goto L_08A5660C;
    }
L_08A5660C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A5662C;
L_08A5662C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56648;
      }
      goto L_08A56644;
    }
L_08A56644:
    ctx.gpr[19] = (0u | 94u);
    goto L_08A56648;
L_08A56648:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A56654;
      }
      goto L_08A56650;
    }
L_08A56650:
    ctx.gpr[19] = (0u | 62u);
    goto L_08A56654;
L_08A56654:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(41)));
    ctx.gpr[18] = (ctx.gpr[19] << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A56678;
      }
      goto L_08A56664;
    }
L_08A56664:
    ctx.gpr[31] = (0x08A5666Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A552D4;
L_08A5666C:
    ctx.gpr[19] = (ctx.gpr[2] & 65535u);
    ctx.gpr[18] = (ctx.gpr[19] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    goto L_08A56678;
L_08A56678:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[24])) && ctx.fpr[12] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A566A0;
      }
      goto L_08A5668C;
    }
L_08A5668C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
    goto L_08A566A0;
L_08A566A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A566B0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A557D0;
L_08A566B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A566F0;
      }
      goto L_08A566BC;
    }
L_08A566BC:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[26];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A566CCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A557D0;
L_08A566CC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[28];
    ctx.gpr[31] = (0x08A566E0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A557D0;
L_08A566E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A566FC;
      }
      goto L_08A566F0;
    }
L_08A566F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08A566FC;
L_08A566FC:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[30];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A56710u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A54794;
L_08A56710:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27020)));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[30];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<3u>(ctx.fpr[12]));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = ctx.fpr[30] / ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-24560)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[19] != 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A56750;
      }
      goto L_08A56748;
    }
L_08A56748:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_08A56750;
L_08A56750:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56480;
      }
      goto L_08A56760;
    }
L_08A56760:
    ctx.gpr[31] = (0x08A56768u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 887u, 0x08AD3988u>(ctx, &aot_mem) && ctx.pc == 0x08A56768u) goto L_08A56768;
    return;
L_08A56768:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-24560), ctx.gpr[16]);
    goto L_08A5676C;
L_08A5676C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08A567B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[21] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(22656));
    ctx.gpr[20] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[18] = (ctx.gpr[20] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[19] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A56830;
      }
      goto L_08A56820;
    }
L_08A56820:
    ctx.gpr[31] = (0x08A56828u);
    // nop
    goto L_08A562CC;
L_08A56828:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A56830;
L_08A56830:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(91)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(64))))));
        goto L_08A568B8;
    }
    goto L_08A5683C;
L_08A5683C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5016)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(89)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(90)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56890u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A567B4;
L_08A56890:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A56A00;
      }
      goto L_08A568B8;
    }
L_08A568B8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A56A04;
      }
      goto L_08A568D4;
    }
L_08A568D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-5016)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(69)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(70)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(71)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.gpr[6] = (2229u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[17]) || std::isnan(ctx.fpr[16])) && ctx.fpr[17] == ctx.fpr[16]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27024)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (17392u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (17288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A569B0;
      }
      goto L_08A56954;
    }
L_08A56954:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[16] + ctx.fpr[26];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[26];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A56994u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    goto L_08A567B4;
L_08A56994:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A569D8;
      }
      goto L_08A569B0;
    }
L_08A569B0:
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A569D8u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[13];
    goto L_08A567B4;
L_08A569D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(-5016), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[21]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    goto L_08A56A00;
L_08A56A00:
    ctx.gpr[5] = (ctx.gpr[17] - ctx.gpr[16]);
    goto L_08A56A04;
L_08A56A04:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25584));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1024));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A56A4C;
    }
    goto L_08A56A3C;
L_08A56A3C:
    ctx.gpr[31] = (0x08A56A44u);
    // nop
    goto L_08A562CC;
L_08A56A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A56A4C;
L_08A56A4C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(-5016)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(58)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(29)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(30)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(26)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A56BA4;
      }
      goto L_08A56AE4;
    }
L_08A56AE4:
    ctx.gpr[21] = (0u | 126u);
    ctx.gpr[23] = (0u | 255u);
    ctx.gpr[22] = (2230u << 16u);
    goto L_08A56AF0;
L_08A56AF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A56B80;
      }
      goto L_08A56AFC;
    }
L_08A56AFC:
    ctx.gpr[31] = (0x08A56B04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 5u, 0x08A581A4u>(ctx, &aot_mem) && ctx.pc == 0x08A56B04u) goto L_08A56B04;
    return;
L_08A56B04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56B30;
      }
      goto L_08A56B10;
    }
L_08A56B10:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560)));
    goto L_08A56B14;
L_08A56B14:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A56B14;
      }
      goto L_08A56B28;
    }
L_08A56B28:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    goto L_08A56B30;
L_08A56B30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(31)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56B78;
      }
      goto L_08A56B3C;
    }
L_08A56B3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(301) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A56B64;
      }
      goto L_08A56B54;
    }
L_08A56B54:
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(72), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(72)));
    goto L_08A56B64;
L_08A56B64:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56B74;
      }
      goto L_08A56B6C;
    }
L_08A56B6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[23]));
      if (branch_taken) {
          goto L_08A56B78;
      }
      goto L_08A56B74;
    }
L_08A56B74:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(0u));
    goto L_08A56B78;
L_08A56B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56B9C;
      }
      goto L_08A56B80;
    }
L_08A56B80:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560), ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[20] = (ctx.gpr[16] < ctx.gpr[17] ? 1u : 0u);
    goto L_08A56B9C;
L_08A56B9C:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56AF0;
      }
      goto L_08A56BA4;
    }
L_08A56BA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56BC8;
      }
      goto L_08A56BC0;
    }
L_08A56BC0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(-24560), ctx.gpr[4]);
    goto L_08A56BC8;
L_08A56BC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A56C04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A56C4Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x08A56C4Cu) goto L_08A56C4C;
    return;
L_08A56C4C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08A56C60u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A54F18;
L_08A56C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A56C80;
      }
      goto L_08A56C74;
    }
L_08A56C74:
    ctx.gpr[31] = (0x08A56C7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A556A0;
L_08A56C7C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    goto L_08A56C80;
L_08A56C80:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56D28;
      }
      goto L_08A56C98;
    }
L_08A56C98:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-5016)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(22656));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A56CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A57550;
L_08A56CCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A56CE0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A57A84;
L_08A56CE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A56D10;
      }
      goto L_08A56CF0;
    }
L_08A56CF0:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A56D08u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A56D08u) goto L_08A56D08;
    return;
L_08A56D08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D28;
      }
      goto L_08A56D10;
    }
L_08A56D10:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A56D28u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A56D28u) goto L_08A56D28;
    return;
L_08A56D28:
    ctx.gpr[5] = (2233u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A56D64;
      }
      goto L_08A56D4C;
    }
L_08A56D4C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56D6C;
      }
      goto L_08A56D64;
    }
L_08A56D64:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A56D70;
      }
      goto L_08A56D6C;
    }
L_08A56D6C:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A56D70;
L_08A56D70:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D84;
      }
      goto L_08A56D78;
    }
L_08A56D78:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A56D84;
L_08A56D84:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6184), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A574FC;
      }
      goto L_08A56D98;
    }
L_08A56D98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A56DA4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54B88;
L_08A56DA4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A56DCC;
      }
      goto L_08A56DBC;
    }
L_08A56DBC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_08A56E04;
      }
      goto L_08A56DCC;
    }
L_08A56DCC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A56DF8;
      }
      goto L_08A56DE4;
    }
L_08A56DE4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08A56E04;
      }
      goto L_08A56DF8;
    }
L_08A56DF8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    goto L_08A56E04;
L_08A56E04:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A56E24;
      }
      goto L_08A56E18;
    }
L_08A56E18:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56E30;
      }
      goto L_08A56E20;
    }
L_08A56E20:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A56E24;
L_08A56E24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-6184))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57198;
      }
      goto L_08A56E30;
    }
L_08A56E30:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2233u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6184), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56E84;
      }
      goto L_08A56E50;
    }
L_08A56E50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56E84;
      }
      goto L_08A56E60;
    }
L_08A56E60:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = ctx.fpr[13] - ctx.fpr[24];
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56E88;
      }
      goto L_08A56E84;
    }
L_08A56E84:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    goto L_08A56E88;
L_08A56E88:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A570C0;
      }
      goto L_08A56E9C;
    }
L_08A56E9C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56EB8;
      }
      goto L_08A56EB0;
    }
L_08A56EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A570D0;
      }
      goto L_08A56EB8;
    }
L_08A56EB8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A56ED0;
      }
      goto L_08A56EC8;
    }
L_08A56EC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56ED8;
      }
      goto L_08A56ED0;
    }
L_08A56ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A570B4;
      }
      goto L_08A56ED8;
    }
L_08A56ED8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56EFC;
      }
      goto L_08A56EE8;
    }
L_08A56EE8:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08A56EF4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A552D4;
L_08A56EF4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[6] = (2233u << 16u);
    goto L_08A56EFC;
L_08A56EFC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(29)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A56FA4;
      }
      goto L_08A56F10;
    }
L_08A56F10:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9912));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A56F88;
      }
      goto L_08A56F7C;
    }
L_08A56F7C:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A56F8C;
      }
      goto L_08A56F88;
    }
L_08A56F88:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    goto L_08A56F8C;
L_08A56F8C:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A570B4;
      }
      goto L_08A56FA4;
    }
L_08A56FA4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A56FE4;
      }
      goto L_08A56FBC;
    }
L_08A56FBC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A56FE4;
      }
      goto L_08A56FC4;
    }
L_08A56FC4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A56FE4;
      }
      goto L_08A56FCC;
    }
L_08A56FCC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A56FE4;
      }
      goto L_08A56FD4;
    }
L_08A56FD4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A56FE4;
      }
      goto L_08A56FDC;
    }
L_08A56FDC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A56FEC;
      }
      goto L_08A56FE4;
    }
L_08A56FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A56FEC;
      }
      goto L_08A56FEC;
    }
L_08A56FEC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57060;
      }
      goto L_08A56FF4;
    }
L_08A56FF4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A570B4;
      }
      goto L_08A57060;
    }
L_08A57060:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A570B4;
L_08A570B4:
    ctx.fpr[26] = ctx.fpr[20] - ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A570D0;
      }
      goto L_08A570C0;
    }
L_08A570C0:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[20] - ctx.fpr[26];
    goto L_08A570D0;
L_08A570D0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A570F4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A567B4;
L_08A570F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08A57104u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    goto L_08A55248;
L_08A57104:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A5712C;
      }
      goto L_08A57114;
    }
L_08A57114:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57134;
      }
      goto L_08A5712C;
    }
L_08A5712C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57138;
      }
      goto L_08A57134;
    }
L_08A57134:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A57138;
L_08A57138:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (16896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A57184;
      }
      goto L_08A57178;
    }
L_08A57178:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A57184;
L_08A57184:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A574F0;
      }
      goto L_08A57198;
    }
L_08A57198:
    ctx.gpr[31] = (0x08A571A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54D80;
L_08A571A0:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6184), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A571B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54DE8;
L_08A571B4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A571E0;
      }
      goto L_08A571C4;
    }
L_08A571C4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57290;
      }
      goto L_08A571D0;
    }
L_08A571D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57290;
      }
      goto L_08A571E0;
    }
L_08A571E0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57200;
      }
      goto L_08A571EC;
    }
L_08A571EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57200;
      }
      goto L_08A571FC;
    }
L_08A571FC:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    goto L_08A57200;
L_08A57200:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5720Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54B88;
L_08A5720C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A57248;
      }
      goto L_08A57224;
    }
L_08A57224:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57240;
      }
      goto L_08A57238;
    }
L_08A57238:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A57258;
      }
      goto L_08A57240;
    }
L_08A57240:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[26];
      if (branch_taken) {
          goto L_08A57258;
      }
      goto L_08A57248;
    }
L_08A57248:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    goto L_08A57258;
L_08A57258:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A57278u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A567B4;
L_08A57278:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[31] = (0x08A57288u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    goto L_08A55248;
L_08A57288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A574F0;
      }
      goto L_08A57290;
    }
L_08A57290:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A572A4;
      }
      goto L_08A57298;
    }
L_08A57298:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    goto L_08A572A4;
L_08A572A4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A572B4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54B88;
L_08A572B4:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[31] = (0x08A572C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54D80;
L_08A572C4:
    ctx.gpr[4] = (ctx.gpr[2] & 255u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6184), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6184))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A574E8;
      }
      goto L_08A572DC;
    }
L_08A572DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57300;
      }
      goto L_08A572F8;
    }
L_08A572F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57308;
      }
      goto L_08A57300;
    }
L_08A57300:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A574E4;
      }
      goto L_08A57308;
    }
L_08A57308:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A5732C;
      }
      goto L_08A57318;
    }
L_08A57318:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x08A57324u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A552D4;
L_08A57324:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[6] = (2233u << 16u);
    goto L_08A5732C;
L_08A5732C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(29)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[6] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A573D4;
      }
      goto L_08A57340;
    }
L_08A57340:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9912));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 192 ? 1u : 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A573B8;
      }
      goto L_08A573AC;
    }
L_08A573AC:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A573BC;
      }
      goto L_08A573B8;
    }
L_08A573B8:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    goto L_08A573BC;
L_08A573BC:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A574E4;
      }
      goto L_08A573D4;
    }
L_08A573D4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 63u);
      if (branch_taken) {
          goto L_08A57414;
      }
      goto L_08A573EC;
    }
L_08A573EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 46u);
      if (branch_taken) {
          goto L_08A57414;
      }
      goto L_08A573F4;
    }
L_08A573F4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 44u);
      if (branch_taken) {
          goto L_08A57414;
      }
      goto L_08A573FC;
    }
L_08A573FC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 58u);
      if (branch_taken) {
          goto L_08A57414;
      }
      goto L_08A57404;
    }
L_08A57404:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 59u);
      if (branch_taken) {
          goto L_08A57414;
      }
      goto L_08A5740C;
    }
L_08A5740C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5741C;
      }
      goto L_08A57414;
    }
L_08A57414:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5741C;
      }
      goto L_08A5741C;
    }
L_08A5741C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57490;
      }
      goto L_08A57424;
    }
L_08A57424:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A574E4;
      }
      goto L_08A57490;
    }
L_08A57490:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A574E4;
L_08A574E4:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[12];
    goto L_08A574E8;
L_08A574E8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_08A574F0;
L_08A574F0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A56D98;
      }
      goto L_08A574FC;
    }
L_08A574FC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A57514u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08A57514u) goto L_08A57514;
    return;
L_08A57514:
    ctx.gpr[31] = (0x08A5751Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08A55248;
L_08A5751C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57550:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A575A8;
      }
      goto L_08A57590;
    }
L_08A57590:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A575B0;
      }
      goto L_08A575A8;
    }
L_08A575A8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A575B4;
      }
      goto L_08A575B0;
    }
L_08A575B0:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A575B4;
L_08A575B4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57A60;
      }
      goto L_08A575C0;
    }
L_08A575C0:
    ctx.gpr[31] = (0x08A575C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54D80;
L_08A575C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A576A4;
      }
      goto L_08A575D0;
    }
L_08A575D0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A575FC;
      }
      goto L_08A575E8;
    }
L_08A575E8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A575E8;
      }
      goto L_08A575FC;
    }
L_08A575FC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08A57630;
      }
      goto L_08A57614;
    }
L_08A57614:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57630;
      }
      goto L_08A57628;
    }
L_08A57628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57630;
      }
      goto L_08A57630;
    }
L_08A57630:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57668;
      }
      goto L_08A57644;
    }
L_08A57644:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57660;
      }
      goto L_08A57658;
    }
L_08A57658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57668;
      }
      goto L_08A57660;
    }
L_08A57660:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57668;
      }
      goto L_08A57668;
    }
L_08A57668:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57694;
      }
      goto L_08A57680;
    }
L_08A57680:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A5769C;
      }
      goto L_08A57694;
    }
L_08A57694:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A576A0;
      }
      goto L_08A5769C;
    }
L_08A5769C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A576A0;
L_08A576A0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A576A4;
L_08A576A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A576B0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54B88;
L_08A576B0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A576D4;
      }
      goto L_08A576C4;
    }
L_08A576C4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A576E0;
      }
      goto L_08A576D4;
    }
L_08A576D4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08A576E0;
L_08A576E0:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A577B0;
      }
      goto L_08A576F4;
    }
L_08A576F4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A577B0;
      }
      goto L_08A576FC;
    }
L_08A576FC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A5772C;
      }
      goto L_08A57714;
    }
L_08A57714:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5772C;
      }
      goto L_08A57724;
    }
L_08A57724:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5772C;
      }
      goto L_08A5772C;
    }
L_08A5772C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57764;
      }
      goto L_08A57740;
    }
L_08A57740:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5775C;
      }
      goto L_08A57754;
    }
L_08A57754:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57764;
      }
      goto L_08A5775C;
    }
L_08A5775C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57764;
      }
      goto L_08A57764;
    }
L_08A57764:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57790;
      }
      goto L_08A5777C;
    }
L_08A5777C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57798;
      }
      goto L_08A57790;
    }
L_08A57790:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A5779C;
      }
      goto L_08A57798;
    }
L_08A57798:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A5779C;
L_08A5779C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A57A54;
      }
      goto L_08A577B0;
    }
L_08A577B0:
    ctx.gpr[31] = (0x08A577B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A54DE8;
L_08A577B8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57820;
      }
      goto L_08A577C8;
    }
L_08A577C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A577D4u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54B88;
L_08A577D4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A57810;
      }
      goto L_08A577EC;
    }
L_08A577EC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57808;
      }
      goto L_08A57800;
    }
L_08A57800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57810;
      }
      goto L_08A57808;
    }
L_08A57808:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57810;
      }
      goto L_08A57810;
    }
L_08A57810:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A57A50;
      }
      goto L_08A57820;
    }
L_08A57820:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57830;
      }
      goto L_08A57830;
    }
L_08A57830:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5783Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54B88;
L_08A5783C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[17] = (ctx.gpr[4] & 65535u);
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08A57864;
      }
      goto L_08A5785C;
    }
L_08A5785C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A5786C;
      }
      goto L_08A57864;
    }
L_08A57864:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57A48;
      }
      goto L_08A5786C;
    }
L_08A5786C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57890;
      }
      goto L_08A5787C;
    }
L_08A5787C:
    ctx.gpr[4] = (ctx.gpr[17] << 16u);
    ctx.gpr[31] = (0x08A57888u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A552D4;
L_08A57888:
    ctx.gpr[17] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (2233u << 16u);
    goto L_08A57890;
L_08A57890:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A5793C;
      }
      goto L_08A578A4;
    }
L_08A578A4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[17]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 192 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A57920;
      }
      goto L_08A57914;
    }
L_08A57914:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A57924;
      }
      goto L_08A57920;
    }
L_08A57920:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    goto L_08A57924;
L_08A57924:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A57A48;
      }
      goto L_08A5793C;
    }
L_08A5793C:
    ctx.gpr[17] = (ctx.gpr[4] & 65535u);
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 63u);
      if (branch_taken) {
          goto L_08A57978;
      }
      goto L_08A57950;
    }
L_08A57950:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 46u);
      if (branch_taken) {
          goto L_08A57978;
      }
      goto L_08A57958;
    }
L_08A57958:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 44u);
      if (branch_taken) {
          goto L_08A57978;
      }
      goto L_08A57960;
    }
L_08A57960:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 58u);
      if (branch_taken) {
          goto L_08A57978;
      }
      goto L_08A57968;
    }
L_08A57968:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 59u);
      if (branch_taken) {
          goto L_08A57978;
      }
      goto L_08A57970;
    }
L_08A57970:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A57980;
      }
      goto L_08A57978;
    }
L_08A57978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A57980;
      }
      goto L_08A57980;
    }
L_08A57980:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A579F4;
      }
      goto L_08A57988;
    }
L_08A57988:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A57A48;
      }
      goto L_08A579F4;
    }
L_08A579F4:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A57A48;
L_08A57A48:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(2));
    goto L_08A57A50;
L_08A57A50:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A57A54;
L_08A57A54:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A575C0;
      }
      goto L_08A57A60;
    }
L_08A57A60:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A57A84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A57AE0;
      }
      goto L_08A57AD8;
    }
L_08A57AD8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57AE4;
      }
      goto L_08A57AE0;
    }
L_08A57AE0:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A57AE4;
L_08A57AE4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57F9C;
      }
      goto L_08A57AF0;
    }
L_08A57AF0:
    ctx.gpr[31] = (0x08A57AF8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A54D80;
L_08A57AF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57BD4;
      }
      goto L_08A57B00;
    }
L_08A57B00:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A57B2C;
      }
      goto L_08A57B18;
    }
L_08A57B18:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A57B18;
      }
      goto L_08A57B2C;
    }
L_08A57B2C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(6));
      if (branch_taken) {
          goto L_08A57B60;
      }
      goto L_08A57B44;
    }
L_08A57B44:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B60;
      }
      goto L_08A57B58;
    }
L_08A57B58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B60;
      }
      goto L_08A57B60;
    }
L_08A57B60:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B98;
      }
      goto L_08A57B74;
    }
L_08A57B74:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B90;
      }
      goto L_08A57B88;
    }
L_08A57B88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B98;
      }
      goto L_08A57B90;
    }
L_08A57B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57B98;
      }
      goto L_08A57B98;
    }
L_08A57B98:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57BC4;
      }
      goto L_08A57BB0;
    }
L_08A57BB0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57BCC;
      }
      goto L_08A57BC4;
    }
L_08A57BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57BD0;
      }
      goto L_08A57BCC;
    }
L_08A57BCC:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A57BD0;
L_08A57BD0:
    ctx.fpr[24] = std::bit_cast<float>(0u);
    goto L_08A57BD4;
L_08A57BD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A57BE0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54B88;
L_08A57BE0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A57C04;
      }
      goto L_08A57BF4;
    }
L_08A57BF4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
      if (branch_taken) {
          goto L_08A57C10;
      }
      goto L_08A57C04;
    }
L_08A57C04:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    goto L_08A57C10;
L_08A57C10:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57CEC;
      }
      goto L_08A57C24;
    }
L_08A57C24:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[12])) && ctx.fpr[24] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57CEC;
      }
      goto L_08A57C38;
    }
L_08A57C38:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57C68;
      }
      goto L_08A57C50;
    }
L_08A57C50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C68;
      }
      goto L_08A57C60;
    }
L_08A57C60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C68;
      }
      goto L_08A57C68;
    }
L_08A57C68:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57CA0;
      }
      goto L_08A57C7C;
    }
L_08A57C7C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57C98;
      }
      goto L_08A57C90;
    }
L_08A57C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57CA0;
      }
      goto L_08A57C98;
    }
L_08A57C98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57CA0;
      }
      goto L_08A57CA0;
    }
L_08A57CA0:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57CCC;
      }
      goto L_08A57CB8;
    }
L_08A57CB8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(26)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A57CD4;
      }
      goto L_08A57CCC;
    }
L_08A57CCC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57CD8;
      }
      goto L_08A57CD4;
    }
L_08A57CD4:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A57CD8;
L_08A57CD8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A57F90;
      }
      goto L_08A57CEC;
    }
L_08A57CEC:
    ctx.gpr[31] = (0x08A57CF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A54DE8;
L_08A57CF4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D5C;
      }
      goto L_08A57D04;
    }
L_08A57D04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A57D10u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54B88;
L_08A57D10:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A57D4C;
      }
      goto L_08A57D28;
    }
L_08A57D28:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D44;
      }
      goto L_08A57D3C;
    }
L_08A57D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D4C;
      }
      goto L_08A57D44;
    }
L_08A57D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A57D4C;
      }
      goto L_08A57D4C;
    }
L_08A57D4C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
      if (branch_taken) {
          goto L_08A57F90;
      }
      goto L_08A57D5C;
    }
L_08A57D5C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[20])) && ctx.fpr[26] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A57D6C;
      }
      goto L_08A57D6C;
    }
L_08A57D6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A57D78u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A54B88;
L_08A57D78:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32));
    ctx.gpr[19] = (ctx.gpr[4] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 209 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[0];
      if (branch_taken) {
          goto L_08A57DA0;
      }
      goto L_08A57D98;
    }
L_08A57D98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57DA8;
      }
      goto L_08A57DA0;
    }
L_08A57DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A57F84;
      }
      goto L_08A57DA8;
    }
L_08A57DA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57DCC;
      }
      goto L_08A57DB8;
    }
L_08A57DB8:
    ctx.gpr[4] = (ctx.gpr[19] << 16u);
    ctx.gpr[31] = (0x08A57DC4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    goto L_08A552D4;
L_08A57DC4:
    ctx.gpr[19] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (2233u << 16u);
    goto L_08A57DCC;
L_08A57DCC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(29)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A57E78;
      }
      goto L_08A57DE0;
    }
L_08A57DE0:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(418))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 192 ? 1u : 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[24] = ctx.fpr[12] + ctx.fpr[24];
      if (branch_taken) {
          goto L_08A57E5C;
      }
      goto L_08A57E50;
    }
L_08A57E50:
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A57E60;
      }
      goto L_08A57E5C;
    }
L_08A57E5C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    goto L_08A57E60;
L_08A57E60:
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[12];
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A57F84;
      }
      goto L_08A57E78;
    }
L_08A57E78:
    ctx.gpr[19] = (ctx.gpr[4] & 65535u);
    ctx.gpr[19] = (ctx.gpr[19] & 65535u);
    ctx.gpr[4] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 63u);
      if (branch_taken) {
          goto L_08A57EB4;
      }
      goto L_08A57E8C;
    }
L_08A57E8C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 46u);
      if (branch_taken) {
          goto L_08A57EB4;
      }
      goto L_08A57E94;
    }
L_08A57E94:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 44u);
      if (branch_taken) {
          goto L_08A57EB4;
      }
      goto L_08A57E9C;
    }
L_08A57E9C:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 58u);
      if (branch_taken) {
          goto L_08A57EB4;
      }
      goto L_08A57EA4;
    }
L_08A57EA4:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 59u);
      if (branch_taken) {
          goto L_08A57EB4;
      }
      goto L_08A57EAC;
    }
L_08A57EAC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A57EBC;
      }
      goto L_08A57EB4;
    }
L_08A57EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A57EBC;
      }
      goto L_08A57EBC;
    }
L_08A57EBC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2233u << 16u);
      if (branch_taken) {
          goto L_08A57F30;
      }
      goto L_08A57EC4;
    }
L_08A57EC4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[24] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A57F84;
      }
      goto L_08A57F30;
    }
L_08A57F30:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(838));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9900));
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(836))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A57F84;
L_08A57F84:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[24];
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A57F90;
L_08A57F90:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A57AF0;
      }
      goto L_08A57F9C;
    }
L_08A57F9C:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (16512u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 3u, 0x08A580FCu>(ctx, &aot_mem); return;
      }
      goto L_08A57FB4;
    }
L_08A57FB4:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5016));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 2u, 0x08A5806Cu>(ctx, &aot_mem); return;
      }
      goto L_08A57FCC;
    }
L_08A57FCC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16896u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5016));
    ctx.pc = 0x08A58000u; return;
}

void recomp_unit_0148(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0148_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_148(Runtime &runtime) {
    runtime.register_generated_unit(148u, 0x08A54000u, 16384u, &recomp_unit_0148, &recomp_unit_0148_entry);
    runtime.register_function(0x08A54000u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54168u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5417Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5418Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54198u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A541F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54204u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54208u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54234u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A542F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5430Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54314u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54328u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54338u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54340u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54358u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54364u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54370u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54388u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54394u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A543F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54404u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54424u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54434u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54450u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54458u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54474u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5447Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54484u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5448Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5449Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A544F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54500u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54518u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54520u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54528u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54530u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54538u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54548u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54554u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54568u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54594u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5459Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A545F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54618u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54624u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5462Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54648u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5464Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54654u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54664u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5466Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54684u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A546F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54750u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54768u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5477Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54794u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A547E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5484Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54858u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5485Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54864u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5487Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54884u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5488Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54894u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5489Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A548B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54918u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54964u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5496Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54984u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5498Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A549D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54A9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54AB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54ABCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54B88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54BF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54C9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54CF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54D94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54DE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E40u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54E98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54ED0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54ED8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54EFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54F60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A54FFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55018u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55028u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55044u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5505Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55074u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55078u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55088u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5508Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5509Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A550ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55100u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55110u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5513Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55150u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55160u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55174u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55184u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5519Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A551DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55220u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55240u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55248u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5528Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A552FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55304u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55314u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5531Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55328u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55330u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55340u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55348u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55350u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55358u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55368u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55370u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5537Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55388u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55394u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A553FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5540Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55414u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55420u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55428u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55430u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55438u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5543Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55444u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5548Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55494u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5549Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A554F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55500u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55514u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5552Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55534u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5553Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55544u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55550u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55558u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55560u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55578u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A555E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55600u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55618u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55628u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55630u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55638u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55658u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55670u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55688u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55690u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A556F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55700u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55710u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55718u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55730u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55740u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55758u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55764u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55770u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55778u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55798u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A557D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55810u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55818u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55840u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55848u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55850u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55864u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55878u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55894u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5589Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A558E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55950u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5595Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55960u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55968u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5597Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55984u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5598Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55994u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5599Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A559B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55A94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ACCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55AD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55B98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55BA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C0Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55C9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55D6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55DD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E1Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E34u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55E94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55EC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55ED4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55F88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A55FF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56024u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5603Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56084u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A560DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56128u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56164u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5616Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56174u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A561FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56204u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5621Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56260u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A562CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5632Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56340u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56364u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56440u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56448u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56450u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56458u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56480u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5648Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A564BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56584u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56594u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A565F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5660Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5662Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56644u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56648u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56650u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56654u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56664u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5666Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56678u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5668Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566CCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A566FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56710u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56748u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56750u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56760u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56768u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5676Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A567B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56820u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56828u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56830u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5683Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56890u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A568D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56954u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56994u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A569D8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56A4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56AFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B14u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56B9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BC0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56BC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C80u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56C98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56CF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D08u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D64u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D70u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56D98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56DF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E20u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56E9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EC8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56ED0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56ED8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EE8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56EFCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56F8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FDCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A56FF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57060u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A570F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57104u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57114u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5712Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57134u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57138u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57178u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57184u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57198u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A571FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57200u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5720Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57224u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57238u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57240u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57248u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57258u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57278u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57288u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57290u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57298u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572DCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A572F8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57300u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57308u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57318u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57324u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5732Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57340u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573ACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573BCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A573FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57404u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5740Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57414u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5741Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57424u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57490u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574E4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574F0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A574FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57514u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5751Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57550u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57590u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575A8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575B4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575C0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575D0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575E8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A575FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57614u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57628u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57630u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57644u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57658u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57660u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57668u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57680u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57694u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5769Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576A0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576C4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576E0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A576FCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57714u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57724u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5772Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57740u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57754u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5775Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57764u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5777Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57790u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57798u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5779Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577B0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577B8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577C8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577D4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A577ECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57800u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57808u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57810u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57820u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57830u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5783Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5785Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57864u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5786Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5787Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57888u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57890u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A578A4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57914u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57920u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57924u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A5793Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57950u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57958u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57960u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57968u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57970u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57978u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57980u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57988u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A579F4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A48u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A54u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57A84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AE4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AF0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57AF8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B00u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B18u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B2Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B58u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B74u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B88u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57B98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BB0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BD0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57BF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C24u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C38u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C68u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C7Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57C98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CD4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CD8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CECu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57CF4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D04u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D10u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D28u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D3Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D44u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D4Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D6Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57D98u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DA0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DA8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DB8u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DCCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57DE0u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E50u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E5Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E60u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E78u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E8Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E94u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57E9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EA4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EACu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EBCu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57EC4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F30u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F84u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F90u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57F9Cu, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FB4u, &recomp_unit_0148, "recomp_unit_0148");
    runtime.register_function(0x08A57FCCu, &recomp_unit_0148, "recomp_unit_0148");
}
} // namespace psprecomp
