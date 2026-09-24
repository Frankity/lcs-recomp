#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0048[4091] = {
    1, 0, 2, 3, 0, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0,
    0, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 18,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25,
    0, 26, 0, 27, 0, 28, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 38,
    39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 42, 0, 0, 0, 0, 43, 0, 0, 0, 0, 44, 0, 0, 0, 0, 45,
    0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 48, 0, 49, 0, 0, 50, 0, 51, 52, 0, 0, 0, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0,
    56, 0, 0, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 64, 0, 65, 0, 0, 0, 0, 0, 66, 0, 67, 68, 0, 69, 0, 70, 0, 71, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 81, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 83, 84, 0, 0, 0, 0, 0, 85, 0, 86, 87,
    0, 88, 0, 0, 0, 0, 0, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    93, 0, 0, 0, 0, 0, 94, 0, 95, 96, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99,
    0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 107, 0, 108, 0, 109, 0, 0, 0, 110,
    0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0,
    0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0,
    0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131, 0, 132, 0, 133, 0, 0, 134, 0, 135, 0, 136, 0, 0, 0, 137, 0,
    138, 0, 0, 139, 0, 140, 0, 141, 0, 142, 0, 143, 0, 0, 144, 0, 145, 0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 150, 0, 151, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 0, 153, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0,
    0, 0, 0, 155, 0, 156, 157, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0, 0, 163, 0,
    164, 0, 0, 0, 0, 165, 0, 166, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 0, 0, 171, 0,
    0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 0, 181, 0, 182,
    0, 0, 0, 0, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 191, 0, 192,
    0, 193, 0, 194, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 199, 0, 200, 0, 201, 0, 202, 0, 203, 0, 204,
    0, 0, 0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 207, 0, 208, 0, 209, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 212,
    0, 213, 0, 214, 0, 215, 0, 216, 0, 217, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 223, 0, 224, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 228, 0, 229, 0, 0, 230, 0, 231, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 234, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236,
    0, 0, 0, 0, 0, 0, 0, 0, 237, 238, 0, 0, 239, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 243, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 246, 247, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 251, 252, 0, 253, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 0, 0, 0, 257, 0, 0,
    0, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 262,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 266, 267, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270,
    0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 0,
    0, 0, 278, 0, 279, 0, 280, 0, 281, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 286, 287, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0,
    0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0,
    0, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 298, 0, 299, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303,
    0, 0, 0, 304, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 308, 0, 0, 0, 309, 0, 310,
    0, 311, 312, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 315, 0, 0, 0, 316, 0,
    0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 320, 0, 0, 0, 321, 322, 323, 0, 324, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0, 0, 329, 0, 330, 0, 0, 0, 331, 0, 332, 0, 0,
    0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 352, 353, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 358, 0, 359, 0, 0,
    0, 360, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0,
    365, 0, 0, 0, 366, 0, 367, 0, 368, 0, 0, 369, 0, 0, 0, 370, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 376, 0, 377, 0, 0, 0, 378, 379, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0, 0, 0, 384, 0, 385, 0, 0,
    0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 387, 0, 0, 388, 389, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 390,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 396, 397, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0,
    403, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 404, 0, 0, 405, 406, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 410, 0, 0, 0, 411, 0, 412, 0, 0,
    413, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0,
    418, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 421, 0, 0, 422, 423, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 424, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 427, 0, 0, 0, 428, 0, 429, 0, 0, 430, 431, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 438, 0, 0, 439, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 442, 0, 443, 0, 444, 0, 0, 0, 445, 0, 446, 0, 0, 447, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 452, 0, 0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 461, 0, 0, 0, 462, 0, 463, 0, 0, 464, 465, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 0, 0, 0, 470, 0, 0, 0, 471,
    0, 0, 472, 0, 0, 473, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    476, 0, 477, 0, 478, 0, 0, 0, 479, 0, 480, 0, 0, 481, 482, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 487, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0,
    0, 495, 0, 0, 0, 0, 496, 0, 0, 0, 0, 497, 498, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 507, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 512,
    0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 0, 521, 0, 522, 0, 523,
    0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 526, 0, 527, 0, 0, 528, 0, 0, 0, 529, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 536, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0,
    0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 542, 0, 0, 543, 0, 0, 0, 544, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 549,
    0, 0, 0, 550, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0,
    0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 570, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0,
    0, 0, 573, 0, 574, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 0, 580, 0, 0, 581, 582, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0,
    0, 585, 0, 586, 0, 0, 587, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0,
    0, 0, 597, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612,
    0, 0, 0, 613, 0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 620, 0, 621, 0, 0, 622, 623, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0,
    626, 0, 0, 0, 0, 0, 0, 0, 627, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    630, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0,
    637, 0, 0, 0, 0, 0, 638, 0, 639, 0, 640, 0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 647,
    0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 651, 0, 652, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 655, 0, 656,
    0, 657, 0, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 663, 0, 664, 0, 665,
    0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 0, 0,
    673, 0, 0, 0, 674, 0, 0, 0, 675, 0, 676, 0, 677, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 681,
    0, 0, 0, 0, 0, 682, 0, 683, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 688, 0, 0,
    0, 0, 0, 689, 0, 690, 0, 691, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 696, 0, 697, 0, 698, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701,
};
void recomp_unit_0048_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088C4004u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0048[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088C4004;
    case 2u: goto L_088C400C;
    case 3u: goto L_088C4010;
    case 4u: goto L_088C401C;
    case 5u: goto L_088C4028;
    case 6u: goto L_088C4038;
    case 7u: goto L_088C4044;
    case 8u: goto L_088C4050;
    case 9u: goto L_088C4058;
    case 10u: goto L_088C4068;
    case 11u: goto L_088C4078;
    case 12u: goto L_088C408C;
    case 13u: goto L_088C409C;
    case 14u: goto L_088C40B0;
    case 15u: goto L_088C40D0;
    case 16u: goto L_088C40F0;
    case 17u: goto L_088C40F8;
    case 18u: goto L_088C4100;
    case 19u: goto L_088C4128;
    case 20u: goto L_088C4148;
    case 21u: goto L_088C4160;
    case 22u: goto L_088C4168;
    case 23u: goto L_088C4170;
    case 24u: goto L_088C4178;
    case 25u: goto L_088C4180;
    case 26u: goto L_088C4188;
    case 27u: goto L_088C4190;
    case 28u: goto L_088C4198;
    case 29u: goto L_088C41A0;
    case 30u: goto L_088C41A8;
    case 31u: goto L_088C41B0;
    case 32u: goto L_088C41CC;
    case 33u: goto L_088C41D4;
    case 34u: goto L_088C41E4;
    case 35u: goto L_088C4258;
    case 36u: goto L_088C4260;
    case 37u: goto L_088C4278;
    case 38u: goto L_088C4280;
    case 39u: goto L_088C4284;
    case 40u: goto L_088C4290;
    case 41u: goto L_088C42B0;
    case 42u: goto L_088C42C4;
    case 43u: goto L_088C42D8;
    case 44u: goto L_088C42EC;
    case 45u: goto L_088C4300;
    case 46u: goto L_088C4314;
    case 47u: goto L_088C4324;
    case 48u: goto L_088C432C;
    case 49u: goto L_088C4334;
    case 50u: goto L_088C4340;
    case 51u: goto L_088C4348;
    case 52u: goto L_088C434C;
    case 53u: goto L_088C4360;
    case 54u: goto L_088C436C;
    case 55u: goto L_088C4374;
    case 56u: goto L_088C4384;
    case 57u: goto L_088C4398;
    case 58u: goto L_088C43A0;
    case 59u: goto L_088C43A8;
    case 60u: goto L_088C43B0;
    case 61u: goto L_088C43CC;
    case 62u: goto L_088C43DC;
    case 63u: goto L_088C4424;
    case 64u: goto L_088C448C;
    case 65u: goto L_088C4494;
    case 66u: goto L_088C44AC;
    case 67u: goto L_088C44B4;
    case 68u: goto L_088C44B8;
    case 69u: goto L_088C44C0;
    case 70u: goto L_088C44C8;
    case 71u: goto L_088C44D0;
    case 72u: goto L_088C44D8;
    case 73u: goto L_088C44E0;
    case 74u: goto L_088C4500;
    case 75u: goto L_088C4514;
    case 76u: goto L_088C4528;
    case 77u: goto L_088C453C;
    case 78u: goto L_088C4550;
    case 79u: goto L_088C4564;
    case 80u: goto L_088C456C;
    case 81u: goto L_088C457C;
    case 82u: goto L_088C45B8;
    case 83u: goto L_088C45D8;
    case 84u: goto L_088C45DC;
    case 85u: goto L_088C45F4;
    case 86u: goto L_088C45FC;
    case 87u: goto L_088C4600;
    case 88u: goto L_088C4608;
    case 89u: goto L_088C4624;
    case 90u: goto L_088C4634;
    case 91u: goto L_088C463C;
    case 92u: goto L_088C467C;
    case 93u: goto L_088C4684;
    case 94u: goto L_088C469C;
    case 95u: goto L_088C46A4;
    case 96u: goto L_088C46A8;
    case 97u: goto L_088C46B0;
    case 98u: goto L_088C46F8;
    case 99u: goto L_088C4700;
    case 100u: goto L_088C4710;
    case 101u: goto L_088C4734;
    case 102u: goto L_088C47E4;
    case 103u: goto L_088C4808;
    case 104u: goto L_088C4828;
    case 105u: goto L_088C4848;
    case 106u: goto L_088C4858;
    case 107u: goto L_088C4860;
    case 108u: goto L_088C4868;
    case 109u: goto L_088C4870;
    case 110u: goto L_088C4880;
    case 111u: goto L_088C4890;
    case 112u: goto L_088C48A0;
    case 113u: goto L_088C48B0;
    case 114u: goto L_088C48EC;
    case 115u: goto L_088C4914;
    case 116u: goto L_088C4940;
    case 117u: goto L_088C4968;
    case 118u: goto L_088C4978;
    case 119u: goto L_088C4988;
    case 120u: goto L_088C49D0;
    case 121u: goto L_088C4A24;
    case 122u: goto L_088C4A3C;
    case 123u: goto L_088C4A54;
    case 124u: goto L_088C4A5C;
    case 125u: goto L_088C4A64;
    case 126u: goto L_088C4A6C;
    case 127u: goto L_088C4A74;
    case 128u: goto L_088C4A8C;
    case 129u: goto L_088C4A9C;
    case 130u: goto L_088C4AB0;
    case 131u: goto L_088C4AC0;
    case 132u: goto L_088C4AC8;
    case 133u: goto L_088C4AD0;
    case 134u: goto L_088C4ADC;
    case 135u: goto L_088C4AE4;
    case 136u: goto L_088C4AEC;
    case 137u: goto L_088C4AFC;
    case 138u: goto L_088C4B04;
    case 139u: goto L_088C4B10;
    case 140u: goto L_088C4B18;
    case 141u: goto L_088C4B20;
    case 142u: goto L_088C4B28;
    case 143u: goto L_088C4B30;
    case 144u: goto L_088C4B3C;
    case 145u: goto L_088C4B44;
    case 146u: goto L_088C4B4C;
    case 147u: goto L_088C4B54;
    case 148u: goto L_088C4B60;
    case 149u: goto L_088C4B68;
    case 150u: goto L_088C4B70;
    case 151u: goto L_088C4B78;
    case 152u: goto L_088C4BB8;
    case 153u: goto L_088C4BD4;
    case 154u: goto L_088C4BF8;
    case 155u: goto L_088C4C10;
    case 156u: goto L_088C4C18;
    case 157u: goto L_088C4C1C;
    case 158u: goto L_088C4C24;
    case 159u: goto L_088C4C34;
    case 160u: goto L_088C4C4C;
    case 161u: goto L_088C4C60;
    case 162u: goto L_088C4C68;
    case 163u: goto L_088C4C7C;
    case 164u: goto L_088C4C84;
    case 165u: goto L_088C4C98;
    case 166u: goto L_088C4CA0;
    case 167u: goto L_088C4CAC;
    case 168u: goto L_088C4CC0;
    case 169u: goto L_088C4CD8;
    case 170u: goto L_088C4CE4;
    case 171u: goto L_088C4CFC;
    case 172u: goto L_088C4D08;
    case 173u: goto L_088C4D20;
    case 174u: goto L_088C4D2C;
    case 175u: goto L_088C4D44;
    case 176u: goto L_088C4D50;
    case 177u: goto L_088C4D68;
    case 178u: goto L_088C4D78;
    case 179u: goto L_088C4D80;
    case 180u: goto L_088C4DE0;
    case 181u: goto L_088C4DF8;
    case 182u: goto L_088C4E00;
    case 183u: goto L_088C4E18;
    case 184u: goto L_088C4E20;
    case 185u: goto L_088C4E28;
    case 186u: goto L_088C4E30;
    case 187u: goto L_088C4E38;
    case 188u: goto L_088C4E40;
    case 189u: goto L_088C4E58;
    case 190u: goto L_088C4E60;
    case 191u: goto L_088C4E78;
    case 192u: goto L_088C4E80;
    case 193u: goto L_088C4E88;
    case 194u: goto L_088C4E90;
    case 195u: goto L_088C4E98;
    case 196u: goto L_088C4EA0;
    case 197u: goto L_088C4EB8;
    case 198u: goto L_088C4EC0;
    case 199u: goto L_088C4ED8;
    case 200u: goto L_088C4EE0;
    case 201u: goto L_088C4EE8;
    case 202u: goto L_088C4EF0;
    case 203u: goto L_088C4EF8;
    case 204u: goto L_088C4F00;
    case 205u: goto L_088C4F18;
    case 206u: goto L_088C4F20;
    case 207u: goto L_088C4F38;
    case 208u: goto L_088C4F40;
    case 209u: goto L_088C4F48;
    case 210u: goto L_088C4F60;
    case 211u: goto L_088C4F68;
    case 212u: goto L_088C4F80;
    case 213u: goto L_088C4F88;
    case 214u: goto L_088C4F90;
    case 215u: goto L_088C4F98;
    case 216u: goto L_088C4FA0;
    case 217u: goto L_088C4FA8;
    case 218u: goto L_088C4FAC;
    case 219u: goto L_088C4FDC;
    case 220u: goto L_088C509C;
    case 221u: goto L_088C50C8;
    case 222u: goto L_088C50EC;
    case 223u: goto L_088C50F0;
    case 224u: goto L_088C50F8;
    case 225u: goto L_088C5120;
    case 226u: goto L_088C5144;
    case 227u: goto L_088C514C;
    case 228u: goto L_088C5158;
    case 229u: goto L_088C5160;
    case 230u: goto L_088C516C;
    case 231u: goto L_088C5174;
    case 232u: goto L_088C519C;
    case 233u: goto L_088C51C0;
    case 234u: goto L_088C51C8;
    case 235u: goto L_088C51D4;
    case 236u: goto L_088C5200;
    case 237u: goto L_088C5224;
    case 238u: goto L_088C5228;
    case 239u: goto L_088C5234;
    case 240u: goto L_088C5258;
    case 241u: goto L_088C5264;
    case 242u: goto L_088C528C;
    case 243u: goto L_088C52B0;
    case 244u: goto L_088C52B4;
    case 245u: goto L_088C52DC;
    case 246u: goto L_088C52E8;
    case 247u: goto L_088C52EC;
    case 248u: goto L_088C531C;
    case 249u: goto L_088C53A0;
    case 250u: goto L_088C53CC;
    case 251u: goto L_088C53F0;
    case 252u: goto L_088C53F4;
    case 253u: goto L_088C53FC;
    case 254u: goto L_088C5424;
    case 255u: goto L_088C5448;
    case 256u: goto L_088C5450;
    case 257u: goto L_088C5478;
    case 258u: goto L_088C549C;
    case 259u: goto L_088C54A8;
    case 260u: goto L_088C54D0;
    case 261u: goto L_088C54F4;
    case 262u: goto L_088C5500;
    case 263u: goto L_088C5528;
    case 264u: goto L_088C554C;
    case 265u: goto L_088C5560;
    case 266u: goto L_088C5568;
    case 267u: goto L_088C556C;
    case 268u: goto L_088C55A0;
    case 269u: goto L_088C55E8;
    case 270u: goto L_088C5600;
    case 271u: goto L_088C560C;
    case 272u: goto L_088C5628;
    case 273u: goto L_088C5638;
    case 274u: goto L_088C5640;
    case 275u: goto L_088C5654;
    case 276u: goto L_088C5664;
    case 277u: goto L_088C567C;
    case 278u: goto L_088C568C;
    case 279u: goto L_088C5694;
    case 280u: goto L_088C569C;
    case 281u: goto L_088C56A4;
    case 282u: goto L_088C56A8;
    case 283u: goto L_088C56D0;
    case 284u: goto L_088C56D8;
    case 285u: goto L_088C56E0;
    case 286u: goto L_088C56E8;
    case 287u: goto L_088C56EC;
    case 288u: goto L_088C5720;
    case 289u: goto L_088C577C;
    case 290u: goto L_088C5794;
    case 291u: goto L_088C57A0;
    case 292u: goto L_088C57BC;
    case 293u: goto L_088C57CC;
    case 294u: goto L_088C57D4;
    case 295u: goto L_088C57E8;
    case 296u: goto L_088C57F8;
    case 297u: goto L_088C5810;
    case 298u: goto L_088C584C;
    case 299u: goto L_088C5854;
    case 300u: goto L_088C5858;
    case 301u: goto L_088C5860;
    case 302u: goto L_088C5868;
    case 303u: goto L_088C5880;
    case 304u: goto L_088C5890;
    case 305u: goto L_088C5894;
    case 306u: goto L_088C58C8;
    case 307u: goto L_088C58E0;
    case 308u: goto L_088C58E8;
    case 309u: goto L_088C58F8;
    case 310u: goto L_088C5900;
    case 311u: goto L_088C5908;
    case 312u: goto L_088C590C;
    case 313u: goto L_088C591C;
    case 314u: goto L_088C595C;
    case 315u: goto L_088C596C;
    case 316u: goto L_088C597C;
    case 317u: goto L_088C5990;
    case 318u: goto L_088C59A0;
    case 319u: goto L_088C59AC;
    case 320u: goto L_088C59B4;
    case 321u: goto L_088C59C4;
    case 322u: goto L_088C59C8;
    case 323u: goto L_088C59CC;
    case 324u: goto L_088C59D4;
    case 325u: goto L_088C59DC;
    case 326u: goto L_088C59E4;
    case 327u: goto L_088C5A44;
    case 328u: goto L_088C5A4C;
    case 329u: goto L_088C5A58;
    case 330u: goto L_088C5A60;
    case 331u: goto L_088C5A70;
    case 332u: goto L_088C5A78;
    case 333u: goto L_088C5A8C;
    case 334u: goto L_088C5AA8;
    case 335u: goto L_088C5ABC;
    case 336u: goto L_088C5AC4;
    case 337u: goto L_088C5AF4;
    case 338u: goto L_088C5B20;
    case 339u: goto L_088C5B2C;
    case 340u: goto L_088C5BB4;
    case 341u: goto L_088C5BC8;
    case 342u: goto L_088C5BD0;
    case 343u: goto L_088C5BDC;
    case 344u: goto L_088C5C40;
    case 345u: goto L_088C5C48;
    case 346u: goto L_088C5C50;
    case 347u: goto L_088C5C58;
    case 348u: goto L_088C5C94;
    case 349u: goto L_088C5CC0;
    case 350u: goto L_088C5CC8;
    case 351u: goto L_088C5CD4;
    case 352u: goto L_088C5CE4;
    case 353u: goto L_088C5CE8;
    case 354u: goto L_088C5D24;
    case 355u: goto L_088C5D50;
    case 356u: goto L_088C5D58;
    case 357u: goto L_088C5D60;
    case 358u: goto L_088C5D70;
    case 359u: goto L_088C5D78;
    case 360u: goto L_088C5D88;
    case 361u: goto L_088C5D8C;
    case 362u: goto L_088C5DC8;
    case 363u: goto L_088C5DF4;
    case 364u: goto L_088C5DFC;
    case 365u: goto L_088C5E04;
    case 366u: goto L_088C5E14;
    case 367u: goto L_088C5E1C;
    case 368u: goto L_088C5E24;
    case 369u: goto L_088C5E30;
    case 370u: goto L_088C5E40;
    case 371u: goto L_088C5E44;
    case 372u: goto L_088C5E80;
    case 373u: goto L_088C5EAC;
    case 374u: goto L_088C5EB4;
    case 375u: goto L_088C5EBC;
    case 376u: goto L_088C5ECC;
    case 377u: goto L_088C5ED4;
    case 378u: goto L_088C5EE4;
    case 379u: goto L_088C5EE8;
    case 380u: goto L_088C5F24;
    case 381u: goto L_088C5F50;
    case 382u: goto L_088C5F58;
    case 383u: goto L_088C5F60;
    case 384u: goto L_088C5F70;
    case 385u: goto L_088C5F78;
    case 386u: goto L_088C5F90;
    case 387u: goto L_088C6030;
    case 388u: goto L_088C603C;
    case 389u: goto L_088C6040;
    case 390u: goto L_088C6080;
    case 391u: goto L_088C60AC;
    case 392u: goto L_088C60B4;
    case 393u: goto L_088C60BC;
    case 394u: goto L_088C60CC;
    case 395u: goto L_088C60D4;
    case 396u: goto L_088C60E0;
    case 397u: goto L_088C60E4;
    case 398u: goto L_088C6124;
    case 399u: goto L_088C6150;
    case 400u: goto L_088C6158;
    case 401u: goto L_088C6160;
    case 402u: goto L_088C6170;
    case 403u: goto L_088C6184;
    case 404u: goto L_088C61D4;
    case 405u: goto L_088C61E0;
    case 406u: goto L_088C61E4;
    case 407u: goto L_088C6224;
    case 408u: goto L_088C6250;
    case 409u: goto L_088C6258;
    case 410u: goto L_088C6260;
    case 411u: goto L_088C6270;
    case 412u: goto L_088C6278;
    case 413u: goto L_088C6284;
    case 414u: goto L_088C6288;
    case 415u: goto L_088C62C8;
    case 416u: goto L_088C62F4;
    case 417u: goto L_088C62FC;
    case 418u: goto L_088C6304;
    case 419u: goto L_088C6314;
    case 420u: goto L_088C6324;
    case 421u: goto L_088C6330;
    case 422u: goto L_088C633C;
    case 423u: goto L_088C6340;
    case 424u: goto L_088C637C;
    case 425u: goto L_088C63A8;
    case 426u: goto L_088C63B0;
    case 427u: goto L_088C63B8;
    case 428u: goto L_088C63C8;
    case 429u: goto L_088C63D0;
    case 430u: goto L_088C63DC;
    case 431u: goto L_088C63E0;
    case 432u: goto L_088C641C;
    case 433u: goto L_088C6448;
    case 434u: goto L_088C6450;
    case 435u: goto L_088C6458;
    case 436u: goto L_088C6468;
    case 437u: goto L_088C6470;
    case 438u: goto L_088C650C;
    case 439u: goto L_088C6518;
    case 440u: goto L_088C651C;
    case 441u: goto L_088C655C;
    case 442u: goto L_088C6588;
    case 443u: goto L_088C6590;
    case 444u: goto L_088C6598;
    case 445u: goto L_088C65A8;
    case 446u: goto L_088C65B0;
    case 447u: goto L_088C65BC;
    case 448u: goto L_088C65C0;
    case 449u: goto L_088C6600;
    case 450u: goto L_088C662C;
    case 451u: goto L_088C6634;
    case 452u: goto L_088C663C;
    case 453u: goto L_088C664C;
    case 454u: goto L_088C6660;
    case 455u: goto L_088C66B0;
    case 456u: goto L_088C66BC;
    case 457u: goto L_088C66C0;
    case 458u: goto L_088C6700;
    case 459u: goto L_088C672C;
    case 460u: goto L_088C6734;
    case 461u: goto L_088C673C;
    case 462u: goto L_088C674C;
    case 463u: goto L_088C6754;
    case 464u: goto L_088C6760;
    case 465u: goto L_088C6764;
    case 466u: goto L_088C67A4;
    case 467u: goto L_088C67D0;
    case 468u: goto L_088C67D8;
    case 469u: goto L_088C67E0;
    case 470u: goto L_088C67F0;
    case 471u: goto L_088C6800;
    case 472u: goto L_088C680C;
    case 473u: goto L_088C6818;
    case 474u: goto L_088C681C;
    case 475u: goto L_088C6858;
    case 476u: goto L_088C6884;
    case 477u: goto L_088C688C;
    case 478u: goto L_088C6894;
    case 479u: goto L_088C68A4;
    case 480u: goto L_088C68AC;
    case 481u: goto L_088C68B8;
    case 482u: goto L_088C68BC;
    case 483u: goto L_088C68F8;
    case 484u: goto L_088C6924;
    case 485u: goto L_088C692C;
    case 486u: goto L_088C6934;
    case 487u: goto L_088C6944;
    case 488u: goto L_088C6948;
    case 489u: goto L_088C697C;
    case 490u: goto L_088C6A24;
    case 491u: goto L_088C6A38;
    case 492u: goto L_088C6A40;
    case 493u: goto L_088C6A4C;
    case 494u: goto L_088C6A70;
    case 495u: goto L_088C6A88;
    case 496u: goto L_088C6A9C;
    case 497u: goto L_088C6AB0;
    case 498u: goto L_088C6AB4;
    case 499u: goto L_088C6AB8;
    case 500u: goto L_088C6AC0;
    case 501u: goto L_088C6AE0;
    case 502u: goto L_088C6AE8;
    case 503u: goto L_088C6AF0;
    case 504u: goto L_088C6B08;
    case 505u: goto L_088C6B1C;
    case 506u: goto L_088C6B30;
    case 507u: goto L_088C6B34;
    case 508u: goto L_088C6B38;
    case 509u: goto L_088C6B40;
    case 510u: goto L_088C6B70;
    case 511u: goto L_088C6B78;
    case 512u: goto L_088C6B80;
    case 513u: goto L_088C6B88;
    case 514u: goto L_088C6B90;
    case 515u: goto L_088C6BC8;
    case 516u: goto L_088C6BD4;
    case 517u: goto L_088C6C0C;
    case 518u: goto L_088C6C18;
    case 519u: goto L_088C6C50;
    case 520u: goto L_088C6C60;
    case 521u: goto L_088C6C70;
    case 522u: goto L_088C6C78;
    case 523u: goto L_088C6C80;
    case 524u: goto L_088C6C88;
    case 525u: goto L_088C6CC4;
    case 526u: goto L_088C6D10;
    case 527u: goto L_088C6D18;
    case 528u: goto L_088C6D24;
    case 529u: goto L_088C6D34;
    case 530u: goto L_088C6D38;
    case 531u: goto L_088C6D74;
    case 532u: goto L_088C6DC4;
    case 533u: goto L_088C6DD4;
    case 534u: goto L_088C6DDC;
    case 535u: goto L_088C6DEC;
    case 536u: goto L_088C6DF0;
    case 537u: goto L_088C6E2C;
    case 538u: goto L_088C6E7C;
    case 539u: goto L_088C6E8C;
    case 540u: goto L_088C6EAC;
    case 541u: goto L_088C6EB4;
    case 542u: goto L_088C6EBC;
    case 543u: goto L_088C6EC8;
    case 544u: goto L_088C6ED8;
    case 545u: goto L_088C6EDC;
    case 546u: goto L_088C6F18;
    case 547u: goto L_088C6F68;
    case 548u: goto L_088C6F78;
    case 549u: goto L_088C6F80;
    case 550u: goto L_088C6F90;
    case 551u: goto L_088C6F94;
    case 552u: goto L_088C6FD0;
    case 553u: goto L_088C7020;
    case 554u: goto L_088C7030;
    case 555u: goto L_088C7050;
    case 556u: goto L_088C7058;
    case 557u: goto L_088C7070;
    case 558u: goto L_088C7110;
    case 559u: goto L_088C711C;
    case 560u: goto L_088C7160;
    case 561u: goto L_088C71B0;
    case 562u: goto L_088C71C0;
    case 563u: goto L_088C71C8;
    case 564u: goto L_088C71D4;
    case 565u: goto L_088C7218;
    case 566u: goto L_088C7268;
    case 567u: goto L_088C7278;
    case 568u: goto L_088C728C;
    case 569u: goto L_088C72DC;
    case 570u: goto L_088C72E8;
    case 571u: goto L_088C732C;
    case 572u: goto L_088C737C;
    case 573u: goto L_088C738C;
    case 574u: goto L_088C7394;
    case 575u: goto L_088C73A0;
    case 576u: goto L_088C73E4;
    case 577u: goto L_088C7434;
    case 578u: goto L_088C7444;
    case 579u: goto L_088C7454;
    case 580u: goto L_088C7460;
    case 581u: goto L_088C746C;
    case 582u: goto L_088C7470;
    case 583u: goto L_088C74AC;
    case 584u: goto L_088C74F8;
    case 585u: goto L_088C7508;
    case 586u: goto L_088C7510;
    case 587u: goto L_088C751C;
    case 588u: goto L_088C7520;
    case 589u: goto L_088C755C;
    case 590u: goto L_088C75A8;
    case 591u: goto L_088C75B8;
    case 592u: goto L_088C75C0;
    case 593u: goto L_088C765C;
    case 594u: goto L_088C7668;
    case 595u: goto L_088C76AC;
    case 596u: goto L_088C76FC;
    case 597u: goto L_088C770C;
    case 598u: goto L_088C7714;
    case 599u: goto L_088C7720;
    case 600u: goto L_088C7764;
    case 601u: goto L_088C77B4;
    case 602u: goto L_088C77C4;
    case 603u: goto L_088C77D8;
    case 604u: goto L_088C7828;
    case 605u: goto L_088C7834;
    case 606u: goto L_088C7878;
    case 607u: goto L_088C78C8;
    case 608u: goto L_088C78D8;
    case 609u: goto L_088C78E0;
    case 610u: goto L_088C78EC;
    case 611u: goto L_088C7930;
    case 612u: goto L_088C7980;
    case 613u: goto L_088C7990;
    case 614u: goto L_088C79A0;
    case 615u: goto L_088C79AC;
    case 616u: goto L_088C79B8;
    case 617u: goto L_088C79BC;
    case 618u: goto L_088C79F8;
    case 619u: goto L_088C7A44;
    case 620u: goto L_088C7A54;
    case 621u: goto L_088C7A5C;
    case 622u: goto L_088C7A68;
    case 623u: goto L_088C7A6C;
    case 624u: goto L_088C7AA8;
    case 625u: goto L_088C7AF4;
    case 626u: goto L_088C7B04;
    case 627u: goto L_088C7B24;
    case 628u: goto L_088C7B28;
    case 629u: goto L_088C7B5C;
    case 630u: goto L_088C7B84;
    case 631u: goto L_088C7B8C;
    case 632u: goto L_088C7B9C;
    case 633u: goto L_088C7BAC;
    case 634u: goto L_088C7BC8;
    case 635u: goto L_088C7BD4;
    case 636u: goto L_088C7BEC;
    case 637u: goto L_088C7C04;
    case 638u: goto L_088C7C1C;
    case 639u: goto L_088C7C24;
    case 640u: goto L_088C7C2C;
    case 641u: goto L_088C7C3C;
    case 642u: goto L_088C7C44;
    case 643u: goto L_088C7C4C;
    case 644u: goto L_088C7C54;
    case 645u: goto L_088C7C64;
    case 646u: goto L_088C7C78;
    case 647u: goto L_088C7C80;
    case 648u: goto L_088C7C90;
    case 649u: goto L_088C7CA4;
    case 650u: goto L_088C7CAC;
    case 651u: goto L_088C7CC4;
    case 652u: goto L_088C7CCC;
    case 653u: goto L_088C7CD4;
    case 654u: goto L_088C7CE4;
    case 655u: goto L_088C7CF8;
    case 656u: goto L_088C7D00;
    case 657u: goto L_088C7D08;
    case 658u: goto L_088C7D18;
    case 659u: goto L_088C7D30;
    case 660u: goto L_088C7D38;
    case 661u: goto L_088C7D50;
    case 662u: goto L_088C7D60;
    case 663u: goto L_088C7D70;
    case 664u: goto L_088C7D78;
    case 665u: goto L_088C7D80;
    case 666u: goto L_088C7D88;
    case 667u: goto L_088C7D90;
    case 668u: goto L_088C7DAC;
    case 669u: goto L_088C7DCC;
    case 670u: goto L_088C7DDC;
    case 671u: goto L_088C7DE4;
    case 672u: goto L_088C7DEC;
    case 673u: goto L_088C7E04;
    case 674u: goto L_088C7E14;
    case 675u: goto L_088C7E24;
    case 676u: goto L_088C7E2C;
    case 677u: goto L_088C7E34;
    case 678u: goto L_088C7E3C;
    case 679u: goto L_088C7E44;
    case 680u: goto L_088C7E64;
    case 681u: goto L_088C7E80;
    case 682u: goto L_088C7E98;
    case 683u: goto L_088C7EA0;
    case 684u: goto L_088C7EA8;
    case 685u: goto L_088C7EB0;
    case 686u: goto L_088C7ECC;
    case 687u: goto L_088C7EDC;
    case 688u: goto L_088C7EF8;
    case 689u: goto L_088C7F10;
    case 690u: goto L_088C7F18;
    case 691u: goto L_088C7F20;
    case 692u: goto L_088C7F28;
    case 693u: goto L_088C7F38;
    case 694u: goto L_088C7F48;
    case 695u: goto L_088C7F64;
    case 696u: goto L_088C7F9C;
    case 697u: goto L_088C7FA4;
    case 698u: goto L_088C7FAC;
    case 699u: goto L_088C7FC4;
    case 700u: goto L_088C7FE4;
    case 701u: goto L_088C7FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088C4004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4010;
      }
      goto L_088C400C;
    }
L_088C400C:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_088C4010;
L_088C4010:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4078;
      }
      goto L_088C401C;
    }
L_088C401C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4078;
      }
      goto L_088C4028;
    }
L_088C4028:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (ctx.gpr[5] & 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088C4078;
      }
      goto L_088C4038;
    }
L_088C4038:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1512)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C4078;
      }
      goto L_088C4044;
    }
L_088C4044:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(646)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 501 ? 1u : 0u);
      if (branch_taken) {
          goto L_088C4058;
      }
      goto L_088C4050;
    }
L_088C4050:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4078;
      }
      goto L_088C4058;
    }
L_088C4058:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1512)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(ctx.gpr[22]));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(648), ctx.gpr[5]);
      if (branch_taken) {
          goto L_088C4078;
      }
      goto L_088C4068;
    }
L_088C4068:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(648));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088C4078u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x088C4078u) goto L_088C4078;
    return;
L_088C4078:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 638u, 0x088C3FECu>(ctx, &aot_mem); return;
      }
      goto L_088C408C;
    }
L_088C408C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C40F8;
      }
      goto L_088C409C;
    }
L_088C409C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x088C40B0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 125u, 0x08834A18u>(ctx, &aot_mem) && ctx.pc == 0x088C40B0u) goto L_088C40B0;
    return;
L_088C40B0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7215)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C40D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 622u, 0x088C3EC4u>(ctx, &aot_mem) && ctx.pc == 0x088C40D0u) goto L_088C40D0;
    return;
L_088C40D0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x088C40F0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A878Cu>(ctx, &aot_mem) && ctx.pc == 0x088C40F0u) goto L_088C40F0;
    return;
L_088C40F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4100;
      }
      goto L_088C40F8;
    }
L_088C40F8:
    ctx.gpr[31] = (0x088C4100u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0012_entry, 12u, 125u, 0x08834A18u>(ctx, &aot_mem) && ctx.pc == 0x088C4100u) goto L_088C4100;
    return;
L_088C4100:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4168;
      }
      goto L_088C4148;
    }
L_088C4148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C4170;
      }
      goto L_088C4160;
    }
L_088C4160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C41A0;
      }
      goto L_088C4168;
    }
L_088C4168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C41D4;
      }
      goto L_088C4170;
    }
L_088C4170:
    ctx.gpr[31] = (0x088C4178u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4178u) goto L_088C4178;
    return;
L_088C4178:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088C4190;
      }
      goto L_088C4180;
    }
L_088C4180:
    ctx.gpr[31] = (0x088C4188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x088C4188u) goto L_088C4188;
    return;
L_088C4188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4198;
      }
      goto L_088C4190;
    }
L_088C4190:
    ctx.gpr[31] = (0x088C4198u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x088C4198u) goto L_088C4198;
    return;
L_088C4198:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C41D4;
      }
      goto L_088C41A0;
    }
L_088C41A0:
    ctx.gpr[31] = (0x088C41A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x088C41A8u) goto L_088C41A8;
    return;
L_088C41A8:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C41CC;
      }
      goto L_088C41B0;
    }
L_088C41B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088C41CCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C41CCu) goto L_088C41CC;
    return;
L_088C41CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4198;
      }
      goto L_088C41D4;
    }
L_088C41D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C41E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_088C43DC;
      }
      goto L_088C4258;
    }
L_088C4258:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[19] = (0u | 0u);
    goto L_088C4260;
L_088C4260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
        goto L_088C4280;
    }
    goto L_088C4278;
L_088C4278:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4284;
      }
      goto L_088C4280;
    }
L_088C4280:
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[19]);
    goto L_088C4284;
L_088C4284:
    ctx.gpr[30] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C4290;
    }
L_088C4290:
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C42B0;
    }
L_088C42B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C42C4;
    }
L_088C42C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C42D8;
    }
L_088C42D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C42EC;
    }
L_088C42EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C4300;
    }
L_088C4300:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C4314;
    }
L_088C4314:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C4324;
    }
L_088C4324:
    ctx.gpr[31] = (0x088C432Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 541u, 0x0889EB14u>(ctx, &aot_mem) && ctx.pc == 0x088C432Cu) goto L_088C432C;
    return;
L_088C432C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C4334;
    }
L_088C4334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C434C;
      }
      goto L_088C4340;
    }
L_088C4340:
    ctx.gpr[31] = (0x088C4348u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x088C4348u) goto L_088C4348;
    return;
L_088C4348:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(504), 0u);
    goto L_088C434C;
L_088C434C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088C4398;
      }
      goto L_088C4360;
    }
L_088C4360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4384;
      }
      goto L_088C436C;
    }
L_088C436C:
    ctx.gpr[31] = (0x088C4374u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x088C4374u) goto L_088C4374;
    return;
L_088C4374:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(508), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(540)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(540), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C4384;
L_088C4384:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(544)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C4360;
      }
      goto L_088C4398;
    }
L_088C4398:
    ctx.gpr[31] = (0x088C43A0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 210u, 0x089ED530u>(ctx, &aot_mem) && ctx.pc == 0x088C43A0u) goto L_088C43A0;
    return;
L_088C43A0:
    ctx.gpr[31] = (0x088C43A8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x088C43A8u) goto L_088C43A8;
    return;
L_088C43A8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C43CC;
      }
      goto L_088C43B0;
    }
L_088C43B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x088C43CCu);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C43CCu) goto L_088C43CC;
    return;
L_088C43CC:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_088C4260;
      }
      goto L_088C43DC;
    }
L_088C43DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4424:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_088C457C;
      }
      goto L_088C448C;
    }
L_088C448C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 0u);
    goto L_088C4494;
L_088C4494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_088C44B4;
    }
    goto L_088C44AC;
L_088C44AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088C44B8;
      }
      goto L_088C44B4;
    }
L_088C44B4:
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[17]);
    goto L_088C44B8;
L_088C44B8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C44C0;
    }
L_088C44C0:
    ctx.gpr[31] = (0x088C44C8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x088C44C8u) goto L_088C44C8;
    return;
L_088C44C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C44D0;
    }
L_088C44D0:
    ctx.gpr[31] = (0x088C44D8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 697u, 0x089A2E7Cu>(ctx, &aot_mem) && ctx.pc == 0x088C44D8u) goto L_088C44D8;
    return;
L_088C44D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C44E0;
    }
L_088C44E0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C4500;
    }
L_088C4500:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C4514;
    }
L_088C4514:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C4528;
    }
L_088C4528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C453C;
    }
L_088C453C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C4550;
    }
L_088C4550:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C456C;
      }
      goto L_088C4564;
    }
L_088C4564:
    ctx.gpr[31] = (0x088C456Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 296u, 0x08A9D7E4u>(ctx, &aot_mem) && ctx.pc == 0x088C456Cu) goto L_088C456C;
    return;
L_088C456C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_088C4494;
      }
      goto L_088C457C;
    }
L_088C457C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_088C45B8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-65));
      if (branch_taken) {
          goto L_088C4634;
      }
      goto L_088C45D8;
    }
L_088C45D8:
    ctx.gpr[9] = (0u | 0u);
    goto L_088C45DC;
L_088C45DC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[10] & 128u);
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_088C45FC;
    }
    goto L_088C45F4;
L_088C45F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4600;
      }
      goto L_088C45FC;
    }
L_088C45FC:
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    goto L_088C4600;
L_088C4600:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4624;
      }
      goto L_088C4608;
    }
L_088C4608:
    ctx.gpr[11] = (ctx.gpr[7] & 255u);
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[10] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[11] = (ctx.gpr[11] & 1u);
    ctx.gpr[2] = (ctx.gpr[2] & ctx.gpr[8]);
    ctx.gpr[11] = (ctx.gpr[11] << 6u);
    ctx.gpr[11] = (ctx.gpr[2] | ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[10] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[11]));
    goto L_088C4624;
L_088C4624:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_088C45DC;
      }
      goto L_088C4634;
    }
L_088C4634:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C463C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15312)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4710;
      }
      goto L_088C467C;
    }
L_088C467C:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[17] = (0u | 0u);
    goto L_088C4684;
L_088C4684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
        goto L_088C46A4;
    }
    goto L_088C469C;
L_088C469C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C46A8;
      }
      goto L_088C46A4;
    }
L_088C46A4:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_088C46A8;
L_088C46A8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088C4700;
      }
      goto L_088C46B0;
    }
L_088C46B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4700;
      }
      goto L_088C46F8;
    }
L_088C46F8:
    ctx.gpr[31] = (0x088C4700u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 114u, 0x088A0828u>(ctx, &aot_mem) && ctx.pc == 0x088C4700u) goto L_088C4700;
    return;
L_088C4700:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1760));
      if (branch_taken) {
          goto L_088C4684;
      }
      goto L_088C4710;
    }
L_088C4710:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_088C4734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (16800u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[26] = ctx.fpr[16] - ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[17] = ctx.fpr[26] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = ctx.fpr[16] - ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(20720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[24] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (0u | 0u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    ctx.fpr[20] = ctx.fpr[15] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
        goto L_088C47E4;
    }
    goto L_088C47E4;
L_088C47E4:
    ctx.fpr[14] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[22] = (0u | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
        goto L_088C4808;
    }
    goto L_088C4808;
L_088C4808:
    ctx.fpr[14] = ctx.fpr[24] / ctx.fpr[12];
    ctx.gpr[17] = (0u | 100u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_088C4828;
    }
    goto L_088C4828;
L_088C4828:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[18] = (0u | 100u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_088C4848;
    }
    goto L_088C4848;
L_088C4848:
    ctx.gpr[4] = (0u | 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_088C4860;
      }
      goto L_088C4858;
    }
L_088C4858:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088C4870;
      }
      goto L_088C4860;
    }
L_088C4860:
    ctx.gpr[31] = (0x088C4868u);
    // nop
    goto L_088C4CA0;
L_088C4868:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C4870;
L_088C4870:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[22] << 5u);
      if (branch_taken) {
          goto L_088C4988;
      }
      goto L_088C4880;
    }
L_088C4880:
    ctx.gpr[5] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[5] << 2u);
    ctx.gpr[22] = (ctx.gpr[22] - ctx.gpr[4]);
    ctx.gpr[21] = (2227u << 16u);
    goto L_088C4890;
L_088C4890:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_088C4978;
      }
      goto L_088C48A0;
    }
L_088C48A0:
    ctx.gpr[23] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[23] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[23] = (ctx.gpr[4] - ctx.gpr[23]);
    goto L_088C48B0;
L_088C48B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20716)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x088C48ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 210u, 0x088C903Cu>(ctx, &aot_mem) && ctx.pc == 0x088C48ECu) goto L_088C48EC;
    return;
L_088C48EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(24));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088C4914u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 210u, 0x088C903Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4914u) goto L_088C4914;
    return;
L_088C4914:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(28));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088C4940u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088C49D0;
L_088C4940:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (ctx.gpr[30] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088C4968u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088C49D0;
L_088C4968:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C48B0;
      }
      goto L_088C4978;
    }
L_088C4978:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(100));
      if (branch_taken) {
          goto L_088C4890;
      }
      goto L_088C4988;
    }
L_088C4988:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C49D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
      if (branch_taken) {
          goto L_088C4B78;
      }
      goto L_088C4A24;
    }
L_088C4A24:
    ctx.gpr[30] = (0u | 54u);
    ctx.gpr[23] = (0u | 8u);
    ctx.gpr[22] = (0u | 18u);
    ctx.gpr[21] = (0u | 9u);
    ctx.gpr[20] = (0u | 6u);
    ctx.gpr[19] = (0u | 1u);
    goto L_088C4A3C;
L_088C4A3C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20720)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4A54;
    }
L_088C4A54:
    ctx.gpr[31] = (0x088C4A5Cu);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4A5Cu) goto L_088C4A5C;
    return;
L_088C4A5C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4A64;
    }
L_088C4A64:
    ctx.gpr[31] = (0x088C4A6Cu);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(628)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4A6Cu) goto L_088C4A6C;
    return;
L_088C4A6C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4A74;
    }
L_088C4A74:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4A8C;
    }
L_088C4A8C:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4A9C;
    }
L_088C4A9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4AB0;
    }
L_088C4AB0:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4AC0;
    }
L_088C4AC0:
    ctx.gpr[31] = (0x088C4AC8u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088C4AC8u) goto L_088C4AC8;
    return;
L_088C4AC8:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C4AEC;
      }
      goto L_088C4AD0;
    }
L_088C4AD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(604)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4ADC;
    }
L_088C4ADC:
    ctx.gpr[31] = (0x088C4AE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088C4AE4u) goto L_088C4AE4;
    return;
L_088C4AE4:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4AEC;
    }
L_088C4AEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4AFC;
    }
L_088C4AFC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4B04;
    }
L_088C4B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088C4B20;
      }
      goto L_088C4B10;
    }
L_088C4B10:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088C4B20;
      }
      goto L_088C4B18;
    }
L_088C4B18:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4B20;
    }
L_088C4B20:
    ctx.gpr[31] = (0x088C4B28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x088C4B28u) goto L_088C4B28;
    return;
L_088C4B28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4B68;
      }
      goto L_088C4B30;
    }
L_088C4B30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088C4B4C;
      }
      goto L_088C4B3C;
    }
L_088C4B3C:
    ctx.gpr[31] = (0x088C4B44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 175u, 0x08A909D8u>(ctx, &aot_mem) && ctx.pc == 0x088C4B44u) goto L_088C4B44;
    return;
L_088C4B44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4B54;
      }
      goto L_088C4B4C;
    }
L_088C4B4C:
    ctx.gpr[31] = (0x088C4B54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 759u, 0x0899FD54u>(ctx, &aot_mem) && ctx.pc == 0x088C4B54u) goto L_088C4B54;
    return;
L_088C4B54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C4B60u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x088C4B60u) goto L_088C4B60;
    return;
L_088C4B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4B70;
      }
      goto L_088C4B68;
    }
L_088C4B68:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(848), ctx.gpr[19]);
    goto L_088C4B70;
L_088C4B70:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4A3C;
      }
      goto L_088C4B78;
    }
L_088C4B78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_088C4BB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_088C4C60;
      }
      goto L_088C4BD4;
    }
L_088C4BD4:
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_088C4BF8;
L_088C4BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
        goto L_088C4C18;
    }
    goto L_088C4C10;
L_088C4C10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4C1C;
      }
      goto L_088C4C18;
    }
L_088C4C18:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_088C4C1C;
L_088C4C1C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C4C;
      }
      goto L_088C4C24;
    }
L_088C4C24:
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[9] = (ctx.gpr[9] & 1u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C4C;
      }
      goto L_088C4C34;
    }
L_088C4C34:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[29] + static_cast<std::uint32_t>(0);
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
    goto L_088C4C4C;
L_088C4C4C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1760));
      if (branch_taken) {
          goto L_088C4BF8;
      }
      goto L_088C4C60;
    }
L_088C4C60:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4C68:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20728)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4C84;
      }
      goto L_088C4C7C;
    }
L_088C4C7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4C98;
      }
      goto L_088C4C84;
    }
L_088C4C84:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(21872));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088C4C98;
L_088C4C98:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4CA0:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (2227u << 16u);
    goto L_088C4CAC;
L_088C4CAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CD8;
      }
      goto L_088C4CC0;
    }
L_088C4CC0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CC0;
      }
      goto L_088C4CD8;
    }
L_088C4CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CFC;
      }
      goto L_088C4CE4;
    }
L_088C4CE4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4CE4;
      }
      goto L_088C4CFC;
    }
L_088C4CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D20;
      }
      goto L_088C4D08;
    }
L_088C4D08:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D08;
      }
      goto L_088C4D20;
    }
L_088C4D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D44;
      }
      goto L_088C4D2C;
    }
L_088C4D2C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D2C;
      }
      goto L_088C4D44;
    }
L_088C4D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D68;
      }
      goto L_088C4D50;
    }
L_088C4D50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4D50;
      }
      goto L_088C4D68;
    }
L_088C4D68:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 10000 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_088C4CAC;
      }
      goto L_088C4D78;
    }
L_088C4D78:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C4D80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[30] = (ctx.gpr[7] & 255u);
    ctx.gpr[23] = (ctx.gpr[8] & 255u);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[10] & 255u);
    ctx.gpr[20] = (ctx.gpr[11] & 255u);
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C4E20;
      }
      goto L_088C4DE0;
    }
L_088C4DE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4DF8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C55A0;
L_088C4DF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E38;
      }
      goto L_088C4E00;
    }
L_088C4E00:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4E18u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C55A0;
L_088C4E18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E30;
      }
      goto L_088C4E20;
    }
L_088C4E20:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E40;
      }
      goto L_088C4E28;
    }
L_088C4E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E80;
      }
      goto L_088C4E30;
    }
L_088C4E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4E38;
    }
L_088C4E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4E40;
    }
L_088C4E40:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4E58u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C55A0;
L_088C4E58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E98;
      }
      goto L_088C4E60;
    }
L_088C4E60:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4E78u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C55A0;
L_088C4E78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4E90;
      }
      goto L_088C4E80;
    }
L_088C4E80:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4EA0;
      }
      goto L_088C4E88;
    }
L_088C4E88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4EE0;
      }
      goto L_088C4E90;
    }
L_088C4E90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4E98;
    }
L_088C4E98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4EA0;
    }
L_088C4EA0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4EB8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C55A0;
L_088C4EB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4EF8;
      }
      goto L_088C4EC0;
    }
L_088C4EC0:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4ED8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C55A0;
L_088C4ED8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4EF0;
      }
      goto L_088C4EE0;
    }
L_088C4EE0:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F00;
      }
      goto L_088C4EE8;
    }
L_088C4EE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F40;
      }
      goto L_088C4EF0;
    }
L_088C4EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4EF8;
    }
L_088C4EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4F00;
    }
L_088C4F00:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C4F18u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_088C55A0;
L_088C4F18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4FA8;
      }
      goto L_088C4F20;
    }
L_088C4F20:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088C4F38u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    goto L_088C55A0;
L_088C4F38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4FA0;
      }
      goto L_088C4F40;
    }
L_088C4F40:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F98;
      }
      goto L_088C4F48;
    }
L_088C4F48:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4F60u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C55A0;
L_088C4F60:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F90;
      }
      goto L_088C4F68;
    }
L_088C4F68:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x088C4F80u);
    ctx.gpr[8] = (0u | 0u);
    goto L_088C55A0;
L_088C4F80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C4F98;
      }
      goto L_088C4F88;
    }
L_088C4F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4F90;
    }
L_088C4F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4F98;
    }
L_088C4F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4FA0;
    }
L_088C4FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C4FAC;
      }
      goto L_088C4FA8;
    }
L_088C4FA8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C4FAC;
L_088C4FAC:
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
L_088C4FDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[22] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[10] = (ctx.gpr[2] & 255u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[11] & 255u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[11] = (ctx.gpr[3] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[10] = (ctx.gpr[2] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (ctx.gpr[11] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(-7399)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[10] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-7398)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (0u < ctx.gpr[2] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[10]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(0u));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
      if (branch_taken) {
          goto L_088C50F0;
      }
      goto L_088C509C;
    }
L_088C509C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[30]);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C50C8u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C50C8u) goto L_088C50C8;
    return;
L_088C50C8:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C50ECu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C50ECu) goto L_088C50EC;
    return;
L_088C50EC:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_088C50F0;
L_088C50F0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5144;
      }
      goto L_088C50F8;
    }
L_088C50F8:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C5120u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C5120u) goto L_088C5120;
    return;
L_088C5120:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C5144u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C5144u) goto L_088C5144;
    return;
L_088C5144:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_088C51C8;
      }
      goto L_088C514C;
    }
L_088C514C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5160;
      }
      goto L_088C5158;
    }
L_088C5158:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C5160;
L_088C5160:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5174;
      }
      goto L_088C516C;
    }
L_088C516C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088C5174;
L_088C5174:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C519Cu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C519Cu) goto L_088C519C;
    return;
L_088C519C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C51C0u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C51C0u) goto L_088C51C0;
    return;
L_088C51C0:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(0u));
    goto L_088C51C8;
L_088C51C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_088C5228;
      }
      goto L_088C51D4;
    }
L_088C51D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C5200u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C5200u) goto L_088C5200;
    return;
L_088C5200:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C5224u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C5224u) goto L_088C5224;
    return;
L_088C5224:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_088C5228;
L_088C5228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5258;
      }
      goto L_088C5234;
    }
L_088C5234:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C5258u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C5258u) goto L_088C5258;
    return;
L_088C5258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
        goto L_088C52B4;
    }
    goto L_088C5264;
L_088C5264:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C528Cu);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C528Cu) goto L_088C528C;
    return;
L_088C528C:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C52B0u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 247u, 0x088C93ECu>(ctx, &aot_mem) && ctx.pc == 0x088C52B0u) goto L_088C52B0;
    return;
L_088C52B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(45)));
    goto L_088C52B4;
L_088C52B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(-7399), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[30] + static_cast<std::uint32_t>(-7398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C52E8;
      }
      goto L_088C52DC;
    }
L_088C52DC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C52EC;
      }
      goto L_088C52E8;
    }
L_088C52E8:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C52EC;
L_088C52EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C531C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[9] = (ctx.gpr[11] & 255u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[10] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[10] = (ctx.gpr[2] & 255u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[9] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088C53F4;
      }
      goto L_088C53A0;
    }
L_088C53A0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C53CCu);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5720;
L_088C53CC:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C53F0u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5720;
L_088C53F0:
    ctx.gpr[30] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    goto L_088C53F4;
L_088C53F4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5448;
      }
      goto L_088C53FC;
    }
L_088C53FC:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5424u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5720;
L_088C5424:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(24));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5448u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5720;
L_088C5448:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C549C;
      }
      goto L_088C5450;
    }
L_088C5450:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5478u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5720;
L_088C5478:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C549Cu);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5720;
L_088C549C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C54F4;
      }
      goto L_088C54A8;
    }
L_088C54A8:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C54D0u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_088C5720;
L_088C54D0:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C54F4u);
    ctx.gpr[11] = (ctx.gpr[30] | 0u);
    goto L_088C5720;
L_088C54F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C554C;
      }
      goto L_088C5500;
    }
L_088C5500:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5528u);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5720;
L_088C5528:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C554Cu);
    ctx.gpr[11] = (0u | 0u);
    goto L_088C5720;
L_088C554C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C5568;
      }
      goto L_088C5560;
    }
L_088C5560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C556C;
      }
      goto L_088C5568;
    }
L_088C5568:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C556C;
L_088C556C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_088C55A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[17] = (ctx.gpr[6] & 255u);
    ctx.gpr[18] = (ctx.gpr[7] & 255u);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C56E8;
      }
      goto L_088C55E8;
    }
L_088C55E8:
    ctx.gpr[4] = (16168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    goto L_088C5600;
L_088C5600:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C56E0;
      }
      goto L_088C560C;
    }
L_088C560C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5654;
      }
      goto L_088C5628;
    }
L_088C5628:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(422))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5654;
      }
      goto L_088C5638;
    }
L_088C5638:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5654;
      }
      goto L_088C5640;
    }
L_088C5640:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C56E0;
      }
      goto L_088C5654;
    }
L_088C5654:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(20720)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C56E0;
      }
      goto L_088C5664;
    }
L_088C5664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C56E0;
      }
      goto L_088C567C;
    }
L_088C567C:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-8004)));
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C56E0;
      }
      goto L_088C568C;
    }
L_088C568C:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
        goto L_088C56A8;
    }
    goto L_088C5694;
L_088C5694:
    ctx.gpr[31] = (0x088C569Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_088C58C8;
L_088C569C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C56E0;
      }
      goto L_088C56A4;
    }
L_088C56A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    goto L_088C56A8;
L_088C56A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C56D0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 174u, 0x088CD77Cu>(ctx, &aot_mem) && ctx.pc == 0x088C56D0u) goto L_088C56D0;
    return;
L_088C56D0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C56E0;
      }
      goto L_088C56D8;
    }
L_088C56D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C56EC;
      }
      goto L_088C56E0;
    }
L_088C56E0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5600;
      }
      goto L_088C56E8;
    }
L_088C56E8:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C56EC;
L_088C56EC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.gpr[22] = (ctx.gpr[9] & 255u);
    ctx.gpr[21] = (ctx.gpr[11] & 255u);
    ctx.gpr[30] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[23] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_088C5868;
      }
      goto L_088C577C;
    }
L_088C577C:
    ctx.gpr[4] = (16168u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[19] = (2229u << 16u);
    goto L_088C5794;
L_088C5794:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C5858;
      }
      goto L_088C57A0;
    }
L_088C57A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C57E8;
      }
      goto L_088C57BC;
    }
L_088C57BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(422))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C57E8;
      }
      goto L_088C57CC;
    }
L_088C57CC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C57E8;
      }
      goto L_088C57D4;
    }
L_088C57D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C5858;
      }
      goto L_088C57E8;
    }
L_088C57E8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(20720)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088C5858;
      }
      goto L_088C57F8;
    }
L_088C57F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 512u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5858;
      }
      goto L_088C5810;
    }
L_088C5810:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    ctx.gpr[9] = (ctx.gpr[22] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088C584Cu);
    ctx.gpr[11] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 284u, 0x088CE438u>(ctx, &aot_mem) && ctx.pc == 0x088C584Cu) goto L_088C584C;
    return;
L_088C584C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5858;
      }
      goto L_088C5854;
    }
L_088C5854:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_088C5858;
L_088C5858:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5794;
      }
      goto L_088C5860;
    }
L_088C5860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088C5868;
L_088C5868:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088C5890;
      }
      goto L_088C5880;
    }
L_088C5880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[2] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C5894;
      }
      goto L_088C5890;
    }
L_088C5890:
    ctx.gpr[2] = (0u | 0u);
    goto L_088C5894;
L_088C5894:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_088C58C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C58E0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 441u, 0x08942000u>(ctx, &aot_mem) && ctx.pc == 0x088C58E0u) goto L_088C58E0;
    return;
L_088C58E0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5900;
      }
      goto L_088C58E8;
    }
L_088C58E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(434)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C5908;
      }
      goto L_088C58F8;
    }
L_088C58F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C590C;
      }
      goto L_088C5900;
    }
L_088C5900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C590C;
      }
      goto L_088C5908;
    }
L_088C5908:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C590C;
L_088C590C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C591C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20728), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C595Cu);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8112)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x088C595Cu) goto L_088C595C;
    return;
L_088C595C:
    ctx.gpr[23] = (2230u << 16u);
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(21872));
      if (branch_taken) {
          goto L_088C5A58;
      }
      goto L_088C596C;
    }
L_088C596C:
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[21] = (0u | 65535u);
    ctx.gpr[22] = (0u | 80u);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    goto L_088C597C;
L_088C597C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088C5A4C;
      }
      goto L_088C5990;
    }
L_088C5990:
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C59D4;
      }
      goto L_088C59A0;
    }
L_088C59A0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C59C8;
      }
      goto L_088C59AC;
    }
L_088C59AC:
    if (ctx.gpr[5] == ctx.gpr[21]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_088C59CC;
    }
    goto L_088C59B4;
L_088C59B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C59CC;
      }
      goto L_088C59C4;
    }
L_088C59C4:
    ctx.gpr[4] = (0u | 1u);
    goto L_088C59C8;
L_088C59C8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C59CC;
L_088C59CC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5A4C;
      }
      goto L_088C59D4;
    }
L_088C59D4:
    ctx.gpr[31] = (0x088C59DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x088C59DCu) goto L_088C59DC;
    return;
L_088C59DC:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_088C5A4C;
      }
      goto L_088C59E4;
    }
L_088C59E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20728)));
    ctx.gpr[5] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20728), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 20 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5A4C;
      }
      goto L_088C5A44;
    }
L_088C5A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5A58;
      }
      goto L_088C5A4C;
    }
L_088C5A4C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C597C;
      }
      goto L_088C5A58;
    }
L_088C5A58:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20728)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    goto L_088C5A60;
L_088C5A60:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C5ABC;
      }
      goto L_088C5A70;
    }
L_088C5A70:
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    goto L_088C5A78;
L_088C5A78:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5AA8;
      }
      goto L_088C5A8C;
    }
L_088C5A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    goto L_088C5AA8;
L_088C5AA8:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_088C5A78;
      }
      goto L_088C5ABC;
    }
L_088C5ABC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5A60;
      }
      goto L_088C5AC4;
    }
L_088C5AC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5AF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 368u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x088C5B20u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(3684));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 366u, 0x08AF5CA4u>(ctx, &aot_mem) && ctx.pc == 0x088C5B20u) goto L_088C5B20;
    return;
L_088C5B20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C5B2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-672));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(595), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(594), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[30]);
    ctx.gpr[7] = (ctx.gpr[10] & 255u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(593), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(20720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[21]);
    ctx.gpr[6] = (0u | 65535u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[11] & 255u);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[23] = (ctx.gpr[23] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088C5BC8;
      }
      goto L_088C5BB4;
    }
L_088C5BB4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088C5BDC;
      }
      goto L_088C5BC8;
    }
L_088C5BC8:
    ctx.gpr[31] = (0x088C5BD0u);
    // nop
    goto L_088C4CA0;
L_088C5BD0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C5BDC;
L_088C5BDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088C5C48;
      }
      goto L_088C5C40;
    }
L_088C5C40:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C5C58;
      }
      goto L_088C5C48;
    }
L_088C5C48:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(592), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088C5CC8;
      }
      goto L_088C5C50;
    }
L_088C5C50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E1C;
      }
      goto L_088C5C58;
    }
L_088C5C58:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5C94u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C5C94u) goto L_088C5C94;
    return;
L_088C5C94:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088C5CC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C5CC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C5CC8;
    }
L_088C5CC8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5D78;
      }
      goto L_088C5CD4;
    }
L_088C5CD4:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5D70;
      }
      goto L_088C5CE4;
    }
L_088C5CE4:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C5CE8;
L_088C5CE8:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5D24u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C5D24u) goto L_088C5D24;
    return;
L_088C5D24:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C5D50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C5D50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5D60;
      }
      goto L_088C5D58;
    }
L_088C5D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C5D60;
    }
L_088C5D60:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C5CE8;
      }
      goto L_088C5D70;
    }
L_088C5D70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E14;
      }
      goto L_088C5D78;
    }
L_088C5D78:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E14;
      }
      goto L_088C5D88;
    }
L_088C5D88:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C5D8C;
L_088C5D8C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5DC8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C5DC8u) goto L_088C5DC8;
    return;
L_088C5DC8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C5DF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C5DF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5E04;
      }
      goto L_088C5DFC;
    }
L_088C5DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C5E04;
    }
L_088C5E04:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C5D8C;
      }
      goto L_088C5E14;
    }
L_088C5E14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C5E1C;
    }
L_088C5E1C:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088C5F78;
      }
      goto L_088C5E24;
    }
L_088C5E24:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5ED4;
      }
      goto L_088C5E30;
    }
L_088C5E30:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5ECC;
      }
      goto L_088C5E40;
    }
L_088C5E40:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    goto L_088C5E44;
L_088C5E44:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5E80u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C5E80u) goto L_088C5E80;
    return;
L_088C5E80:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C5EACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C5EAC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5EBC;
      }
      goto L_088C5EB4;
    }
L_088C5EB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C5EBC;
    }
L_088C5EBC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C5E44;
      }
      goto L_088C5ECC;
    }
L_088C5ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F70;
      }
      goto L_088C5ED4;
    }
L_088C5ED4:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F70;
      }
      goto L_088C5EE4;
    }
L_088C5EE4:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    goto L_088C5EE8;
L_088C5EE8:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C5F24u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C5F24u) goto L_088C5F24;
    return;
L_088C5F24:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C5F50u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C5F50:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C5F60;
      }
      goto L_088C5F58;
    }
L_088C5F58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C5F60;
    }
L_088C5F60:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C5EE8;
      }
      goto L_088C5F70;
    }
L_088C5F70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C5F78;
    }
L_088C5F78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16928u << 16u);
      if (branch_taken) {
          goto L_088C6470;
      }
      goto L_088C5F90;
    }
L_088C5F90:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-49));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = ctx.fpr[16] / ctx.fpr[13];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[19];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088C60D4;
      }
      goto L_088C6030;
    }
L_088C6030:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C60CC;
      }
      goto L_088C603C;
    }
L_088C603C:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6040;
L_088C6040:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6080u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6080u) goto L_088C6080;
    return;
L_088C6080:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C60ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C60AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_088C60BC;
      }
      goto L_088C60B4;
    }
L_088C60B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C60BC;
    }
L_088C60BC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6040;
      }
      goto L_088C60CC;
    }
L_088C60CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6170;
      }
      goto L_088C60D4;
    }
L_088C60D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6170;
      }
      goto L_088C60E0;
    }
L_088C60E0:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C60E4;
L_088C60E4:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6124u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6124u) goto L_088C6124;
    return;
L_088C6124:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C6150u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C6150:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
      if (branch_taken) {
          goto L_088C6160;
      }
      goto L_088C6158;
    }
L_088C6158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C6160;
    }
L_088C6160:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C60E4;
      }
      goto L_088C6170;
    }
L_088C6170:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6324;
      }
      goto L_088C6184;
    }
L_088C6184:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-49));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6278;
      }
      goto L_088C61D4;
    }
L_088C61D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6270;
      }
      goto L_088C61E0;
    }
L_088C61E0:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C61E4;
L_088C61E4:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6224u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6224u) goto L_088C6224;
    return;
L_088C6224:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C6250u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C6250:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
      if (branch_taken) {
          goto L_088C6260;
      }
      goto L_088C6258;
    }
L_088C6258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C6260;
    }
L_088C6260:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C61E4;
      }
      goto L_088C6270;
    }
L_088C6270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6314;
      }
      goto L_088C6278;
    }
L_088C6278:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6314;
      }
      goto L_088C6284;
    }
L_088C6284:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6288;
L_088C6288:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C62C8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C62C8u) goto L_088C62C8;
    return;
L_088C62C8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C62F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C62F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
      if (branch_taken) {
          goto L_088C6304;
      }
      goto L_088C62FC;
    }
L_088C62FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C6304;
    }
L_088C6304:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6288;
      }
      goto L_088C6314;
    }
L_088C6314:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C6184;
      }
      goto L_088C6324;
    }
L_088C6324:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
      if (branch_taken) {
          goto L_088C63D0;
      }
      goto L_088C6330;
    }
L_088C6330:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C63C8;
      }
      goto L_088C633C;
    }
L_088C633C:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6340;
L_088C6340:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C637Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C637Cu) goto L_088C637C;
    return;
L_088C637C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C63A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C63A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C63B8;
      }
      goto L_088C63B0;
    }
L_088C63B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C63B8;
    }
L_088C63B8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6340;
      }
      goto L_088C63C8;
    }
L_088C63C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6468;
      }
      goto L_088C63D0;
    }
L_088C63D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6468;
      }
      goto L_088C63DC;
    }
L_088C63DC:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C63E0;
L_088C63E0:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C641Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C641Cu) goto L_088C641C;
    return;
L_088C641C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C6448u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C6448:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6458;
      }
      goto L_088C6450;
    }
L_088C6450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C6458;
    }
L_088C6458:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C63E0;
      }
      goto L_088C6468;
    }
L_088C6468:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6944;
      }
      goto L_088C6470;
    }
L_088C6470:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-50));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = ctx.fpr[16] / ctx.fpr[13];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[19];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088C65B0;
      }
      goto L_088C650C;
    }
L_088C650C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C65A8;
      }
      goto L_088C6518;
    }
L_088C6518:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C651C;
L_088C651C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C655Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C655Cu) goto L_088C655C;
    return;
L_088C655C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C6588u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C6588:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
      if (branch_taken) {
          goto L_088C6598;
      }
      goto L_088C6590;
    }
L_088C6590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C6598;
    }
L_088C6598:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C651C;
      }
      goto L_088C65A8;
    }
L_088C65A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C664C;
      }
      goto L_088C65B0;
    }
L_088C65B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C664C;
      }
      goto L_088C65BC;
    }
L_088C65BC:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C65C0;
L_088C65C0:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6600u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6600u) goto L_088C6600;
    return;
L_088C6600:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C662Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C662C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
      if (branch_taken) {
          goto L_088C663C;
      }
      goto L_088C6634;
    }
L_088C6634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C663C;
    }
L_088C663C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C65C0;
      }
      goto L_088C664C;
    }
L_088C664C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6800;
      }
      goto L_088C6660;
    }
L_088C6660:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6754;
      }
      goto L_088C66B0;
    }
L_088C66B0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C674C;
      }
      goto L_088C66BC;
    }
L_088C66BC:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C66C0;
L_088C66C0:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6700u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6700u) goto L_088C6700;
    return;
L_088C6700:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C672Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C672C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
      if (branch_taken) {
          goto L_088C673C;
      }
      goto L_088C6734;
    }
L_088C6734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C673C;
    }
L_088C673C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C66C0;
      }
      goto L_088C674C;
    }
L_088C674C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C67F0;
      }
      goto L_088C6754;
    }
L_088C6754:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C67F0;
      }
      goto L_088C6760;
    }
L_088C6760:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6764;
L_088C6764:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C67A4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C67A4u) goto L_088C67A4;
    return;
L_088C67A4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088C67D0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C67D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
      if (branch_taken) {
          goto L_088C67E0;
      }
      goto L_088C67D8;
    }
L_088C67D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C67E0;
    }
L_088C67E0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6764;
      }
      goto L_088C67F0;
    }
L_088C67F0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C6660;
      }
      goto L_088C6800;
    }
L_088C6800:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
      if (branch_taken) {
          goto L_088C68AC;
      }
      goto L_088C680C;
    }
L_088C680C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C68A4;
      }
      goto L_088C6818;
    }
L_088C6818:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C681C;
L_088C681C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6858u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6858u) goto L_088C6858;
    return;
L_088C6858:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C6884u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C6884:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6894;
      }
      goto L_088C688C;
    }
L_088C688C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C6894;
    }
L_088C6894:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C681C;
      }
      goto L_088C68A4;
    }
L_088C68A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6944;
      }
      goto L_088C68AC;
    }
L_088C68AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6944;
      }
      goto L_088C68B8;
    }
L_088C68B8:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C68BC;
L_088C68BC:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C68F8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C68F8u) goto L_088C68F8;
    return;
L_088C68F8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(597)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(595)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(594)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(593)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088C6924u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[23]);
    goto L_088C4D80;
L_088C6924:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6934;
      }
      goto L_088C692C;
    }
L_088C692C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6948;
      }
      goto L_088C6934;
    }
L_088C6934:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C68BC;
      }
      goto L_088C6944;
    }
L_088C6944:
    ctx.gpr[2] = (0u | 1u);
    goto L_088C6948;
L_088C6948:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
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
L_088C697C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-720));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(647), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(646), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(724)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(645), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(644), static_cast<std::uint8_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(643), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(672), ctx.gpr[16]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(642), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), ctx.gpr[30]);
    ctx.gpr[8] = (ctx.gpr[10] & 255u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(641), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[9] = (2227u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(20720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(692), ctx.gpr[21]);
    ctx.gpr[8] = (0u | 65535u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(700), ctx.gpr[23]);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[30] = (ctx.gpr[30] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(668), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(676), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(680), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(684), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(688), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(648), ctx.gpr[6]);
      if (branch_taken) {
          goto L_088C6A38;
      }
      goto L_088C6A24;
    }
L_088C6A24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(20720)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088C6A4C;
      }
      goto L_088C6A38;
    }
L_088C6A38:
    ctx.gpr[31] = (0x088C6A40u);
    // nop
    goto L_088C4CA0;
L_088C6A40:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(20720), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088C6A4C;
L_088C6A4C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50426u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6AB4;
      }
      goto L_088C6A70;
    }
L_088C6A70:
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (50426u << 16u);
      if (branch_taken) {
          goto L_088C6AB4;
      }
      goto L_088C6A88;
    }
L_088C6A88:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_088C6AB4;
      }
      goto L_088C6A9C;
    }
L_088C6A9C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C6AB8;
      }
      goto L_088C6AB0;
    }
L_088C6AB0:
    ctx.gpr[4] = (0u | 1u);
    goto L_088C6AB4;
L_088C6AB4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C6AB8;
L_088C6AB8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6AE8;
      }
      goto L_088C6AC0;
    }
L_088C6AC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (50426u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6AF0;
      }
      goto L_088C6AE0;
    }
L_088C6AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C6B38;
      }
      goto L_088C6AE8;
    }
L_088C6AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7B28;
      }
      goto L_088C6AF0;
    }
L_088C6AF0:
    ctx.gpr[5] = (17658u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (50426u << 16u);
      if (branch_taken) {
          goto L_088C6B34;
      }
      goto L_088C6B08;
    }
L_088C6B08:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (17658u << 16u);
      if (branch_taken) {
          goto L_088C6B34;
      }
      goto L_088C6B1C;
    }
L_088C6B1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C6B38;
      }
      goto L_088C6B30;
    }
L_088C6B30:
    ctx.gpr[4] = (0u | 1u);
    goto L_088C6B34;
L_088C6B34:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C6B38;
L_088C6B38:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16928u << 16u);
      if (branch_taken) {
          goto L_088C6B78;
      }
      goto L_088C6B40;
    }
L_088C6B40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C6B80;
      }
      goto L_088C6B70;
    }
L_088C6B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
      if (branch_taken) {
          goto L_088C6B88;
      }
      goto L_088C6B78;
    }
L_088C6B78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7B28;
      }
      goto L_088C6B80;
    }
L_088C6B80:
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    goto L_088C6B88;
L_088C6B88:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_088C6B90;
    }
    goto L_088C6B90;
L_088C6B90:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
        goto L_088C6BC8;
    }
    goto L_088C6BC8;
L_088C6BC8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
        goto L_088C6BD4;
    }
    goto L_088C6BD4;
L_088C6BD4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
        goto L_088C6C0C;
    }
    goto L_088C6C0C;
L_088C6C0C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
        goto L_088C6C18;
    }
    goto L_088C6C18;
L_088C6C18:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[6] = (16968u << 16u);
    ctx.gpr[5] = (0u | 99u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
        goto L_088C6C50;
    }
    goto L_088C6C50;
L_088C6C50:
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_088C6C60;
    }
    goto L_088C6C60;
L_088C6C60:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088C6C78;
      }
      goto L_088C6C70;
    }
L_088C6C70:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[19];
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C6C88;
      }
      goto L_088C6C78;
    }
L_088C6C78:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[20];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(640), static_cast<std::uint8_t>(ctx.gpr[16]));
      if (branch_taken) {
          goto L_088C6D18;
      }
      goto L_088C6C80;
    }
L_088C6C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6EB4;
      }
      goto L_088C6C88;
    }
L_088C6C88:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6CC4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6CC4u) goto L_088C6CC4;
    return;
L_088C6CC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C6D10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C6D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7B28;
      }
      goto L_088C6D18;
    }
L_088C6D18:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6DDC;
      }
      goto L_088C6D24;
    }
L_088C6D24:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6DD4;
      }
      goto L_088C6D34;
    }
L_088C6D34:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6D38;
L_088C6D38:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6D74u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6D74u) goto L_088C6D74;
    return;
L_088C6D74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C6DC4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C6DC4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6D38;
      }
      goto L_088C6DD4;
    }
L_088C6DD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6E8C;
      }
      goto L_088C6DDC;
    }
L_088C6DDC:
    ctx.gpr[16] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6E8C;
      }
      goto L_088C6DEC;
    }
L_088C6DEC:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C6DF0;
L_088C6DF0:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6E2Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6E2Cu) goto L_088C6E2C;
    return;
L_088C6E2C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C6E7Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C6E7C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C6DF0;
      }
      goto L_088C6E8C;
    }
L_088C6E8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088C6EAC;
    }
    goto L_088C6EAC;
L_088C6EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C7B28;
      }
      goto L_088C6EB4;
    }
L_088C6EB4:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088C7058;
      }
      goto L_088C6EBC;
    }
L_088C6EBC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C6F80;
      }
      goto L_088C6EC8;
    }
L_088C6EC8:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C6F78;
      }
      goto L_088C6ED8;
    }
L_088C6ED8:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    goto L_088C6EDC;
L_088C6EDC:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6F18u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6F18u) goto L_088C6F18;
    return;
L_088C6F18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C6F68u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C6F68:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C6EDC;
      }
      goto L_088C6F78;
    }
L_088C6F78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7030;
      }
      goto L_088C6F80;
    }
L_088C6F80:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7030;
      }
      goto L_088C6F90;
    }
L_088C6F90:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    goto L_088C6F94;
L_088C6F94:
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C6FD0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C6FD0u) goto L_088C6FD0;
    return;
L_088C6FD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7020u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C7020:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
      if (branch_taken) {
          goto L_088C6F94;
      }
      goto L_088C7030;
    }
L_088C7030:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088C7050;
    }
    goto L_088C7050;
L_088C7050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C7B28;
      }
      goto L_088C7058;
    }
L_088C7058:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16928u << 16u);
      if (branch_taken) {
          goto L_088C75C0;
      }
      goto L_088C7070;
    }
L_088C7070:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-49));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = ctx.fpr[16] / ctx.fpr[13];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[19];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088C71C8;
      }
      goto L_088C7110;
    }
L_088C7110:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C71C0;
      }
      goto L_088C711C;
    }
L_088C711C:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7160u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C7160u) goto L_088C7160;
    return;
L_088C7160:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C71B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C71B0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_088C711C;
      }
      goto L_088C71C0;
    }
L_088C71C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7278;
      }
      goto L_088C71C8;
    }
L_088C71C8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7278;
      }
      goto L_088C71D4;
    }
L_088C71D4:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(652), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7218u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C7218u) goto L_088C7218;
    return;
L_088C7218:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7268u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C7268:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(652)));
      if (branch_taken) {
          goto L_088C71D4;
      }
      goto L_088C7278;
    }
L_088C7278:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7454;
      }
      goto L_088C728C;
    }
L_088C728C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-49));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7394;
      }
      goto L_088C72DC;
    }
L_088C72DC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C738C;
      }
      goto L_088C72E8;
    }
L_088C72E8:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C732Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C732Cu) goto L_088C732C;
    return;
L_088C732C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C737Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C737C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_088C72E8;
      }
      goto L_088C738C;
    }
L_088C738C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7444;
      }
      goto L_088C7394;
    }
L_088C7394:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7444;
      }
      goto L_088C73A0;
    }
L_088C73A0:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C73E4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C73E4u) goto L_088C73E4;
    return;
L_088C73E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    ctx.gpr[13] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7434u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C7434:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(656)));
      if (branch_taken) {
          goto L_088C73A0;
      }
      goto L_088C7444;
    }
L_088C7444:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C728C;
      }
      goto L_088C7454;
    }
L_088C7454:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_088C7510;
      }
      goto L_088C7460;
    }
L_088C7460:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7508;
      }
      goto L_088C746C;
    }
L_088C746C:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C7470;
L_088C7470:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C74ACu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C74ACu) goto L_088C74AC;
    return;
L_088C74AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C74F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C74F8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C7470;
      }
      goto L_088C7508;
    }
L_088C7508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C75B8;
      }
      goto L_088C7510;
    }
L_088C7510:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C75B8;
      }
      goto L_088C751C;
    }
L_088C751C:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C7520;
L_088C7520:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C755Cu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C755Cu) goto L_088C755C;
    return;
L_088C755C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C75A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C75A8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C7520;
      }
      goto L_088C75B8;
    }
L_088C75B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7B04;
      }
      goto L_088C75C0;
    }
L_088C75C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[20] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = ctx.fpr[17] - ctx.fpr[12];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-50));
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[0])));
    ctx.fpr[2] = ctx.fpr[16] / ctx.fpr[13];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[18] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[0] = ctx.fpr[2] + ctx.fpr[19];
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[19];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[19];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[19];
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_088C7714;
      }
      goto L_088C765C;
    }
L_088C765C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C770C;
      }
      goto L_088C7668;
    }
L_088C7668:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C76ACu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C76ACu) goto L_088C76AC;
    return;
L_088C76AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C76FCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C76FC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_088C7668;
      }
      goto L_088C770C;
    }
L_088C770C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C77C4;
      }
      goto L_088C7714;
    }
L_088C7714:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C77C4;
      }
      goto L_088C7720;
    }
L_088C7720:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7764u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C7764u) goto L_088C7764;
    return;
L_088C7764:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C77B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C77B4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(660)));
      if (branch_taken) {
          goto L_088C7720;
      }
      goto L_088C77C4;
    }
L_088C77C4:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C79A0;
      }
      goto L_088C77D8;
    }
L_088C77D8:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C78E0;
      }
      goto L_088C7828;
    }
L_088C7828:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C78D8;
      }
      goto L_088C7834;
    }
L_088C7834:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7878u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C7878u) goto L_088C7878;
    return;
L_088C7878:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C78C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C78C8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_088C7834;
      }
      goto L_088C78D8;
    }
L_088C78D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7990;
      }
      goto L_088C78E0;
    }
L_088C78E0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7990;
      }
      goto L_088C78EC;
    }
L_088C78EC:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7930u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C7930u) goto L_088C7930;
    return;
L_088C7930:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[3]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7980u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C7980:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(664)));
      if (branch_taken) {
          goto L_088C78EC;
      }
      goto L_088C7990;
    }
L_088C7990:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_088C77D8;
      }
      goto L_088C79A0;
    }
L_088C79A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
      if (branch_taken) {
          goto L_088C7A5C;
      }
      goto L_088C79AC;
    }
L_088C79AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7A54;
      }
      goto L_088C79B8;
    }
L_088C79B8:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C79BC;
L_088C79BC:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C79F8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C79F8u) goto L_088C79F8;
    return;
L_088C79F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7A44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C7A44:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C79BC;
      }
      goto L_088C7A54;
    }
L_088C7A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7B04;
      }
      goto L_088C7A5C;
    }
L_088C7A5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7B04;
      }
      goto L_088C7A68;
    }
L_088C7A68:
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    goto L_088C7A6C;
L_088C7A6C:
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20716)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    ctx.gpr[18] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088C7AA8u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 688u, 0x08A076B8u>(ctx, &aot_mem) && ctx.pc == 0x088C7AA8u) goto L_088C7AA8;
    return;
L_088C7AA8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(648)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(647)));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(646)));
    ctx.gpr[11] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(645)));
    ctx.gpr[3] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(643)));
    ctx.gpr[12] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(642)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(641)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[12]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[17]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088C7AF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[30]);
    goto L_088C4FDC;
L_088C7AF4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_088C7A6C;
      }
      goto L_088C7B04;
    }
L_088C7B04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088C7B24;
    }
    goto L_088C7B24;
L_088C7B24:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    goto L_088C7B28;
L_088C7B28:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(668)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(672)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(676)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(680)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(684)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(688)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(692)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(700)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(708)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088C7B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 63u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7B8C;
      }
      goto L_088C7B84;
    }
L_088C7B84:
    ctx.gpr[31] = (0x088C7B8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 664u, 0x0883B714u>(ctx, &aot_mem) && ctx.pc == 0x088C7B8Cu) goto L_088C7B8C;
    return;
L_088C7B8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8036)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7C54;
      }
      goto L_088C7B9C;
    }
L_088C7B9C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7C3C;
      }
      goto L_088C7BAC;
    }
L_088C7BAC:
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-18952));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7C2C;
      }
      goto L_088C7BC8;
    }
L_088C7BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7C2C;
      }
      goto L_088C7BD4;
    }
L_088C7BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7BECu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7BECu) goto L_088C7BEC;
    return;
L_088C7BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7C04u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7C04u) goto L_088C7C04;
    return;
L_088C7C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7C1Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7C1Cu) goto L_088C7C1C;
    return;
L_088C7C1C:
    ctx.gpr[31] = (0x088C7C24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x088C7C24u) goto L_088C7C24;
    return;
L_088C7C24:
    ctx.gpr[31] = (0x088C7C2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x088C7C2Cu) goto L_088C7C2C;
    return;
L_088C7C2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7BAC;
      }
      goto L_088C7C3C;
    }
L_088C7C3C:
    ctx.gpr[31] = (0x088C7C44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 679u, 0x08A9A230u>(ctx, &aot_mem) && ctx.pc == 0x088C7C44u) goto L_088C7C44;
    return;
L_088C7C44:
    ctx.gpr[31] = (0x088C7C4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 678u, 0x08A9A228u>(ctx, &aot_mem) && ctx.pc == 0x088C7C4Cu) goto L_088C7C4C;
    return;
L_088C7C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 71u, 0x088C8418u>(ctx, &aot_mem); return;
      }
      goto L_088C7C54;
    }
L_088C7C54:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8112)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7CCC;
      }
      goto L_088C7C64;
    }
L_088C7C64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7C80;
      }
      goto L_088C7C78;
    }
L_088C7C78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7CC4;
      }
      goto L_088C7C80;
    }
L_088C7C80:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7CAC;
      }
      goto L_088C7C90;
    }
L_088C7C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088C7CAC;
      }
      goto L_088C7CA4;
    }
L_088C7CA4:
    ctx.gpr[31] = (0x088C7CACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 274u, 0x089A534Cu>(ctx, &aot_mem) && ctx.pc == 0x088C7CACu) goto L_088C7CAC;
    return;
L_088C7CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7CC4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7CC4u) goto L_088C7CC4;
    return;
L_088C7CC4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7C64;
      }
      goto L_088C7CCC;
    }
L_088C7CCC:
    ctx.gpr[31] = (0x088C7CD4u);
    // nop
    goto L_088C591C;
L_088C7CD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8112)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D90;
      }
      goto L_088C7CE4;
    }
L_088C7CE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7D08;
      }
      goto L_088C7CF8;
    }
L_088C7CF8:
    ctx.gpr[31] = (0x088C7D00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C4128;
L_088C7D00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D88;
      }
      goto L_088C7D08;
    }
L_088C7D08:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D38;
      }
      goto L_088C7D18;
    }
L_088C7D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7D30u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7D30u) goto L_088C7D30;
    return;
L_088C7D30:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D50;
      }
      goto L_088C7D38;
    }
L_088C7D38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7D50u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7D50u) goto L_088C7D50;
    return;
L_088C7D50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7D70;
      }
      goto L_088C7D60;
    }
L_088C7D60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C7D78;
      }
      goto L_088C7D70;
    }
L_088C7D70:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C7D78;
L_088C7D78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7D88;
      }
      goto L_088C7D80;
    }
L_088C7D80:
    ctx.gpr[31] = (0x088C7D88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 165u, 0x08A0D4BCu>(ctx, &aot_mem) && ctx.pc == 0x088C7D88u) goto L_088C7D88;
    return;
L_088C7D88:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7CE4;
      }
      goto L_088C7D90;
    }
L_088C7D90:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-8091), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-8112)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E44;
      }
      goto L_088C7DAC;
    }
L_088C7DAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7E3C;
      }
      goto L_088C7DCC;
    }
L_088C7DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DEC;
      }
      goto L_088C7DDC;
    }
L_088C7DDC:
    ctx.gpr[31] = (0x088C7DE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_088C4128;
L_088C7DE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E3C;
      }
      goto L_088C7DEC;
    }
L_088C7DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7E04u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7E04u) goto L_088C7E04;
    return;
L_088C7E04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088C7E24;
      }
      goto L_088C7E14;
    }
L_088C7E14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088C7E2C;
      }
      goto L_088C7E24;
    }
L_088C7E24:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_088C7E2C;
L_088C7E2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E3C;
      }
      goto L_088C7E34;
    }
L_088C7E34:
    ctx.gpr[31] = (0x088C7E3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 165u, 0x08A0D4BCu>(ctx, &aot_mem) && ctx.pc == 0x088C7E3Cu) goto L_088C7E3C;
    return;
L_088C7E3C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7DAC;
      }
      goto L_088C7E44;
    }
L_088C7E44:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8091), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7146), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8112)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7EB0;
      }
      goto L_088C7E64;
    }
L_088C7E64:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7EA8;
      }
      goto L_088C7E80;
    }
L_088C7E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7E98u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7E98u) goto L_088C7E98;
    return;
L_088C7E98:
    ctx.gpr[31] = (0x088C7EA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x088C7EA0u) goto L_088C7EA0;
    return;
L_088C7EA0:
    ctx.gpr[31] = (0x088C7EA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x088C7EA8u) goto L_088C7EA8;
    return;
L_088C7EA8:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7E64;
      }
      goto L_088C7EB0;
    }
L_088C7EB0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7146), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7F38;
      }
      goto L_088C7ECC;
    }
L_088C7ECC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8112)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7F28;
      }
      goto L_088C7EDC;
    }
L_088C7EDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7F20;
      }
      goto L_088C7EF8;
    }
L_088C7EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7F10u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7F10u) goto L_088C7F10;
    return;
L_088C7F10:
    ctx.gpr[31] = (0x088C7F18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x088C7F18u) goto L_088C7F18;
    return;
L_088C7F18:
    ctx.gpr[31] = (0x088C7F20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x088C7F20u) goto L_088C7F20;
    return;
L_088C7F20:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7EDC;
      }
      goto L_088C7F28;
    }
L_088C7F28:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7ECC;
      }
      goto L_088C7F38;
    }
L_088C7F38:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8112)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088C7FEC;
      }
      goto L_088C7F48;
    }
L_088C7F48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_088C7FE4;
      }
      goto L_088C7F64;
    }
L_088C7F64:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 14u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088C7F9Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088C7F9Cu) goto L_088C7F9C;
    return;
L_088C7F9C:
    ctx.gpr[31] = (0x088C7FA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x088C7FA4u) goto L_088C7FA4;
    return;
L_088C7FA4:
    ctx.gpr[31] = (0x088C7FACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x088C7FACu) goto L_088C7FAC;
    return;
L_088C7FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7FE4;
      }
      goto L_088C7FC4;
    }
L_088C7FC4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-16385));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 14u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_088C7FE4;
L_088C7FE4:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088C7F48;
      }
      goto L_088C7FEC;
    }
L_088C7FEC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7145), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8112)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 8u, 0x088C8088u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 1u, 0x088C8004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0048(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0048_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_48(Runtime &runtime) {
    runtime.register_generated_unit(48u, 0x088C4000u, 16384u, &recomp_unit_0048, &recomp_unit_0048_entry);
    runtime.register_function(0x088C4004u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C400Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4010u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C401Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4028u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4038u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4044u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4050u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4058u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4068u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4078u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C408Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C409Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C40F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4100u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4128u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4148u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4160u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4168u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4170u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4178u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4180u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4188u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4190u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4198u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C41E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4258u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4260u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4278u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4280u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4284u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4290u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C42ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4300u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4314u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4324u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C432Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4334u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4340u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4348u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C434Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4360u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C436Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4374u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4384u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4398u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C43DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4424u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C448Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4494u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C44E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4500u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4514u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4528u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C453Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4550u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4564u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C456Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C457Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C45FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4600u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4608u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4624u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4634u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C463Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C467Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4684u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C469Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C46F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4700u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4710u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4734u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C47E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4808u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4828u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4848u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4858u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4860u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4868u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4870u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4880u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4890u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C48ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4914u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4940u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4968u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4978u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4988u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C49D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4A9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ADCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4AFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4B78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4BF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4C98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CD8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4CFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4D80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4DF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4E98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4ED8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4EF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4F98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C4FDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C509Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C50F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5120u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5144u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C514Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5158u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5160u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C516Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5174u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C519Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C51D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5200u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5224u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5228u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5234u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5258u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5264u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C528Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C52ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C531Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C53FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5424u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5448u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5450u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5478u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C549Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C54F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5500u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5528u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C554Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5560u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5568u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C556Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C55E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5600u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C560Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5628u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5638u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5640u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5654u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5664u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C567Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C568Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5694u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C569Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C56ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5720u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C577Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5794u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C57F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5810u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C584Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5854u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5858u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5860u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5868u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5880u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5890u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5894u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C58F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5900u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5908u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C590Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C591Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C595Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C596Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C597Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5990u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C59E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5A8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5ABCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5AF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5B2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5BDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5C94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5CE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5D8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5DFCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5E80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5ECCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5ED4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5EE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F58u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C5F90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6030u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C603Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6040u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6080u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60CCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C60E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6124u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6150u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6158u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6160u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6170u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6184u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C61E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6224u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6250u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6258u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6260u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6270u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6278u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6284u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6288u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62F4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C62FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6304u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6314u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6324u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6330u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C633Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6340u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C637Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C63E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C641Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6448u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6450u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6458u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6468u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6470u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C650Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6518u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C651Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C655Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6588u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6590u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6598u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C65C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6600u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C662Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6634u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C663Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C664Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6660u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C66C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6700u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C672Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6734u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C673Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C674Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6754u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6760u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6764u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67D0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C67F0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6800u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C680Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6818u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C681Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6858u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6884u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C688Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6894u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68A4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C68F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6924u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C692Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6934u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6944u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6948u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C697Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6A9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AB8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AC0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AE0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AE8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6AF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B40u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6B90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6BD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C0Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6C88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6CC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6D74u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6DF0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E7Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6E8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EB4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EBCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6ED8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6EDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6F94u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C6FD0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7020u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7030u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7050u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7058u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7070u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7110u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C711Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7160u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71B0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C71D4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7218u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7268u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7278u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C728Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72DCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C72E8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C732Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C737Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C738Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7394u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C73E4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7434u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7444u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7454u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7460u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C746Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7470u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C74F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7508u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7510u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C751Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7520u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C755Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75A8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C75C0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C765Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7668u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C76FCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C770Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7714u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7720u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7764u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77B4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77C4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C77D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7828u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7834u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7878u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78C8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78D8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78E0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C78ECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7930u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7980u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7990u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79A0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79ACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79B8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79BCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C79F8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A68u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7A6Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7AF4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B5Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B84u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B8Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7B9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BC8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7BECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C1Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C4Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C54u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7C90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CD4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7CF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D00u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D08u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D30u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D50u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D60u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D70u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D78u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D88u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7D90u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DCCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7DECu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E04u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E14u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E24u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E2Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E34u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E3Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E44u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E80u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7E98u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EA0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EA8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EB0u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7ECCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EDCu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7EF8u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F10u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F18u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F20u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F28u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F38u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F48u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F64u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7F9Cu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FA4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FACu, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FC4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FE4u, &recomp_unit_0048, "recomp_unit_0048");
    runtime.register_function(0x088C7FECu, &recomp_unit_0048, "recomp_unit_0048");
}
} // namespace psprecomp
