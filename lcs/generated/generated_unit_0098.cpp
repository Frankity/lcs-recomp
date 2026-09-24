#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0098[4091] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 0,
    7, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 16, 0, 0, 17, 0, 18, 19, 0, 0,
    20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 27, 0, 28, 0, 0, 0, 0, 29, 0, 0, 30, 0, 0, 31, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34, 35,
    0, 0, 0, 36, 0, 0, 37, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 43, 0, 44, 0,
    45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0,
    0, 51, 0, 0, 0, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 58, 0,
    0, 0, 59, 0, 0, 0, 60, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 66, 0, 67, 0, 68, 0, 69, 70, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 71, 0, 72, 0, 73, 0, 74, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 80, 0, 0, 0, 0, 0,
    0, 0, 0, 81, 0, 82, 0, 0, 83, 0, 84, 0, 85, 0, 86, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 89,
    0, 90, 0, 91, 0, 92, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 103, 0,
    0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 107, 0, 0, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0,
    0, 0, 0, 112, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 120, 0,
    121, 0, 0, 0, 0, 0, 0, 122, 0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 129, 0, 0, 0, 0, 130, 0,
    0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0,
    0, 0, 137, 0, 138, 0, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145,
    0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 153, 0,
    154, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 160,
    0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 0, 166, 0, 0, 0, 167, 0, 168, 0, 169, 0, 170,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 0, 0,
    0, 0, 179, 0, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 182, 0, 183, 0, 184, 0, 185, 0, 186, 0, 187, 0, 188, 0,
    0, 0, 0, 189, 0, 0, 0, 190, 191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 0, 196,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0,
    0, 0, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 218, 0, 0, 0, 219, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 0, 0, 0,
    0, 224, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 232,
    0, 233, 0, 0, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 246,
    0, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    253, 0, 254, 0, 255, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 261, 0, 262, 0,
    0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 269,
    0, 0, 270, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 273, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 274, 0, 0, 275, 0, 0, 276, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 282, 0, 0, 283, 0, 0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 287, 0, 288, 0, 289,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 0, 294, 0, 0, 295, 0, 0, 296, 0, 297,
    298, 0, 299, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 0, 305, 0, 306, 307, 0, 308, 0, 0, 0, 0, 309,
    0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 313, 0, 0, 314, 0, 315, 316, 0, 317, 0, 0, 0, 0, 318, 0, 319, 0, 0, 320, 0, 0, 0,
    0, 321, 0, 0, 322, 0, 323, 0, 324, 0, 0, 325, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0,
    0, 332, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 335, 0, 336, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 340,
    0, 0, 341, 0, 0, 0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 347, 0, 0, 348, 0, 0, 0, 0, 349, 0,
    350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0,
    0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 362, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376,
    0, 0, 0, 0, 0, 0, 377, 0, 378, 0, 379, 0, 380, 0, 381, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 384, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 393, 0, 0, 0,
    0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0,
    0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 408, 0,
    0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 413, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 428, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 0, 0, 0, 0,
    0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 439, 0, 0, 0, 0, 0, 440, 0,
    441, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 448, 0, 0,
    449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 456, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0,
    461, 0, 0, 462, 0, 463, 0, 0, 0, 464, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 0, 0, 475, 0, 476, 0, 477, 0, 0,
    0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 480, 0, 0, 481, 0, 0, 482, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0,
    0, 0, 489, 0, 0, 490, 0, 0, 0, 491, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 497, 0, 498, 0, 499,
    0, 500, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 506, 0, 0, 0, 0,
    0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 0,
    0, 0, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 0, 0, 521, 0, 0, 522,
    0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 527, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 530, 0, 531, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 534, 0, 535, 0, 0, 0, 536, 537, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0,
    541, 0, 0, 542, 0, 543, 0, 544, 0, 545, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 549, 0, 550, 551, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 552, 0, 553, 0, 554, 0, 555, 556, 0, 0, 0, 0, 0, 0, 0, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0, 561, 0,
    562, 563, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 565, 0, 566, 0, 567, 0, 568, 569, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 570, 0, 571, 0, 572, 0, 573, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 578, 579, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0,
    0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 584, 0, 585,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0,
    590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 594, 0, 0, 595, 0, 596, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0,
    0, 0, 0, 0, 600, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 0, 605, 0, 606, 0, 607, 0, 0, 0, 0, 608, 0, 609, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613,
    0, 0, 0, 614, 0, 0, 0, 0, 615, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 620, 0, 0, 621, 0, 622, 0, 623, 0,
    0, 0, 0, 0, 0, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0,
    629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 0, 634, 0, 0, 0, 635, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0,
    638, 0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 646, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0,
    0, 0, 654, 0, 0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0,
    0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 666, 0, 667, 0, 0, 668, 0,
    669, 0, 670, 0, 0, 0, 0, 0, 0, 0, 671, 0, 672, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 685, 0, 0, 0, 686, 0, 0, 0, 0,
    0, 0, 687, 0, 688, 0, 0, 0, 0, 0, 0, 689, 690, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 694, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 700, 0, 0, 701, 0,
    0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0,
    705, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 713, 0,
    0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 717, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0,
    0, 720, 0, 721, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0,
    0, 0, 0, 0, 726, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 0,
    0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 737, 0, 738, 0, 739, 0, 740, 0, 741, 0, 742, 743, 0, 744, 0, 745, 0,
    746, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 749, 0, 0, 750, 0, 751, 0, 752, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0,
    754, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 759, 0, 0, 0,
    0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0,
    765, 0, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 771, 0, 772, 0, 0,
    0, 0, 0, 0, 773, 0, 774, 0, 775, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 779, 0,
    0, 0, 780, 781, 0, 0, 0, 782, 783, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    785, 0, 786, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 788, 0, 789, 0, 790, 0, 791, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 795, 0, 0, 0, 796, 0, 797, 0, 0, 0, 798, 0, 799,
    0, 800, 0, 0, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0, 0, 803, 804, 0, 805, 0, 0, 0, 806,
};
void recomp_unit_0098_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0898C000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0098[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0898C000;
    case 2u: goto L_0898C03C;
    case 3u: goto L_0898C044;
    case 4u: goto L_0898C04C;
    case 5u: goto L_0898C0CC;
    case 6u: goto L_0898C0F0;
    case 7u: goto L_0898C100;
    case 8u: goto L_0898C124;
    case 9u: goto L_0898C140;
    case 10u: goto L_0898C150;
    case 11u: goto L_0898C188;
    case 12u: goto L_0898C1A4;
    case 13u: goto L_0898C1B4;
    case 14u: goto L_0898C1C0;
    case 15u: goto L_0898C1D0;
    case 16u: goto L_0898C1DC;
    case 17u: goto L_0898C1E8;
    case 18u: goto L_0898C1F0;
    case 19u: goto L_0898C1F4;
    case 20u: goto L_0898C200;
    case 21u: goto L_0898C20C;
    case 22u: goto L_0898C21C;
    case 23u: goto L_0898C224;
    case 24u: goto L_0898C22C;
    case 25u: goto L_0898C248;
    case 26u: goto L_0898C250;
    case 27u: goto L_0898C28C;
    case 28u: goto L_0898C294;
    case 29u: goto L_0898C2A8;
    case 30u: goto L_0898C2B4;
    case 31u: goto L_0898C2C0;
    case 32u: goto L_0898C2D0;
    case 33u: goto L_0898C2E4;
    case 34u: goto L_0898C2F8;
    case 35u: goto L_0898C2FC;
    case 36u: goto L_0898C30C;
    case 37u: goto L_0898C318;
    case 38u: goto L_0898C320;
    case 39u: goto L_0898C32C;
    case 40u: goto L_0898C338;
    case 41u: goto L_0898C350;
    case 42u: goto L_0898C360;
    case 43u: goto L_0898C370;
    case 44u: goto L_0898C378;
    case 45u: goto L_0898C380;
    case 46u: goto L_0898C38C;
    case 47u: goto L_0898C394;
    case 48u: goto L_0898C3B0;
    case 49u: goto L_0898C3CC;
    case 50u: goto L_0898C3E8;
    case 51u: goto L_0898C404;
    case 52u: goto L_0898C420;
    case 53u: goto L_0898C43C;
    case 54u: goto L_0898C444;
    case 55u: goto L_0898C44C;
    case 56u: goto L_0898C460;
    case 57u: goto L_0898C470;
    case 58u: goto L_0898C478;
    case 59u: goto L_0898C488;
    case 60u: goto L_0898C498;
    case 61u: goto L_0898C49C;
    case 62u: goto L_0898C4C4;
    case 63u: goto L_0898C4EC;
    case 64u: goto L_0898C520;
    case 65u: goto L_0898C538;
    case 66u: goto L_0898C544;
    case 67u: goto L_0898C54C;
    case 68u: goto L_0898C554;
    case 69u: goto L_0898C55C;
    case 70u: goto L_0898C560;
    case 71u: goto L_0898C588;
    case 72u: goto L_0898C590;
    case 73u: goto L_0898C598;
    case 74u: goto L_0898C5A0;
    case 75u: goto L_0898C5A4;
    case 76u: goto L_0898C5CC;
    case 77u: goto L_0898C5D4;
    case 78u: goto L_0898C5DC;
    case 79u: goto L_0898C5E4;
    case 80u: goto L_0898C5E8;
    case 81u: goto L_0898C60C;
    case 82u: goto L_0898C614;
    case 83u: goto L_0898C620;
    case 84u: goto L_0898C628;
    case 85u: goto L_0898C630;
    case 86u: goto L_0898C638;
    case 87u: goto L_0898C63C;
    case 88u: goto L_0898C66C;
    case 89u: goto L_0898C67C;
    case 90u: goto L_0898C684;
    case 91u: goto L_0898C68C;
    case 92u: goto L_0898C694;
    case 93u: goto L_0898C698;
    case 94u: goto L_0898C6C0;
    case 95u: goto L_0898C6C8;
    case 96u: goto L_0898C6D0;
    case 97u: goto L_0898C6D8;
    case 98u: goto L_0898C6DC;
    case 99u: goto L_0898C708;
    case 100u: goto L_0898C750;
    case 101u: goto L_0898C764;
    case 102u: goto L_0898C774;
    case 103u: goto L_0898C778;
    case 104u: goto L_0898C798;
    case 105u: goto L_0898C7B8;
    case 106u: goto L_0898C7D8;
    case 107u: goto L_0898C808;
    case 108u: goto L_0898C81C;
    case 109u: goto L_0898C824;
    case 110u: goto L_0898C864;
    case 111u: goto L_0898C878;
    case 112u: goto L_0898C88C;
    case 113u: goto L_0898C89C;
    case 114u: goto L_0898C8AC;
    case 115u: goto L_0898C8B8;
    case 116u: goto L_0898C8C8;
    case 117u: goto L_0898C8D4;
    case 118u: goto L_0898C8E4;
    case 119u: goto L_0898C8F0;
    case 120u: goto L_0898C8F8;
    case 121u: goto L_0898C900;
    case 122u: goto L_0898C91C;
    case 123u: goto L_0898C924;
    case 124u: goto L_0898C92C;
    case 125u: goto L_0898C934;
    case 126u: goto L_0898C93C;
    case 127u: goto L_0898C944;
    case 128u: goto L_0898C95C;
    case 129u: goto L_0898C964;
    case 130u: goto L_0898C978;
    case 131u: goto L_0898C994;
    case 132u: goto L_0898C9A0;
    case 133u: goto L_0898C9AC;
    case 134u: goto L_0898C9C8;
    case 135u: goto L_0898C9E0;
    case 136u: goto L_0898C9E8;
    case 137u: goto L_0898CA08;
    case 138u: goto L_0898CA10;
    case 139u: goto L_0898CA20;
    case 140u: goto L_0898CA28;
    case 141u: goto L_0898CA4C;
    case 142u: goto L_0898CA54;
    case 143u: goto L_0898CA5C;
    case 144u: goto L_0898CA74;
    case 145u: goto L_0898CA7C;
    case 146u: goto L_0898CA98;
    case 147u: goto L_0898CAA4;
    case 148u: goto L_0898CAB0;
    case 149u: goto L_0898CABC;
    case 150u: goto L_0898CAC4;
    case 151u: goto L_0898CACC;
    case 152u: goto L_0898CAF0;
    case 153u: goto L_0898CAF8;
    case 154u: goto L_0898CB00;
    case 155u: goto L_0898CB0C;
    case 156u: goto L_0898CB14;
    case 157u: goto L_0898CB48;
    case 158u: goto L_0898CB50;
    case 159u: goto L_0898CB5C;
    case 160u: goto L_0898CB7C;
    case 161u: goto L_0898CB88;
    case 162u: goto L_0898CB90;
    case 163u: goto L_0898CBA0;
    case 164u: goto L_0898CBB8;
    case 165u: goto L_0898CBC0;
    case 166u: goto L_0898CBD4;
    case 167u: goto L_0898CBE4;
    case 168u: goto L_0898CBEC;
    case 169u: goto L_0898CBF4;
    case 170u: goto L_0898CBFC;
    case 171u: goto L_0898CC34;
    case 172u: goto L_0898CC3C;
    case 173u: goto L_0898CC80;
    case 174u: goto L_0898CC94;
    case 175u: goto L_0898CC9C;
    case 176u: goto L_0898CCB8;
    case 177u: goto L_0898CCD4;
    case 178u: goto L_0898CCF0;
    case 179u: goto L_0898CD08;
    case 180u: goto L_0898CD20;
    case 181u: goto L_0898CD34;
    case 182u: goto L_0898CD48;
    case 183u: goto L_0898CD50;
    case 184u: goto L_0898CD58;
    case 185u: goto L_0898CD60;
    case 186u: goto L_0898CD68;
    case 187u: goto L_0898CD70;
    case 188u: goto L_0898CD78;
    case 189u: goto L_0898CD8C;
    case 190u: goto L_0898CD9C;
    case 191u: goto L_0898CDA0;
    case 192u: goto L_0898CDD8;
    case 193u: goto L_0898CE04;
    case 194u: goto L_0898CE40;
    case 195u: goto L_0898CE68;
    case 196u: goto L_0898CE7C;
    case 197u: goto L_0898CEA4;
    case 198u: goto L_0898CEAC;
    case 199u: goto L_0898CEE8;
    case 200u: goto L_0898CF14;
    case 201u: goto L_0898CF50;
    case 202u: goto L_0898CF78;
    case 203u: goto L_0898CF8C;
    case 204u: goto L_0898CF9C;
    case 205u: goto L_0898CFB8;
    case 206u: goto L_0898CFE0;
    case 207u: goto L_0898D018;
    case 208u: goto L_0898D044;
    case 209u: goto L_0898D080;
    case 210u: goto L_0898D0A8;
    case 211u: goto L_0898D0D4;
    case 212u: goto L_0898D100;
    case 213u: goto L_0898D120;
    case 214u: goto L_0898D154;
    case 215u: goto L_0898D160;
    case 216u: goto L_0898D188;
    case 217u: goto L_0898D1A0;
    case 218u: goto L_0898D1B4;
    case 219u: goto L_0898D1C4;
    case 220u: goto L_0898D1C8;
    case 221u: goto L_0898D200;
    case 222u: goto L_0898D22C;
    case 223u: goto L_0898D268;
    case 224u: goto L_0898D284;
    case 225u: goto L_0898D294;
    case 226u: goto L_0898D29C;
    case 227u: goto L_0898D2A4;
    case 228u: goto L_0898D2AC;
    case 229u: goto L_0898D2BC;
    case 230u: goto L_0898D2D8;
    case 231u: goto L_0898D2E0;
    case 232u: goto L_0898D2FC;
    case 233u: goto L_0898D304;
    case 234u: goto L_0898D320;
    case 235u: goto L_0898D328;
    case 236u: goto L_0898D330;
    case 237u: goto L_0898D33C;
    case 238u: goto L_0898D344;
    case 239u: goto L_0898D34C;
    case 240u: goto L_0898D354;
    case 241u: goto L_0898D35C;
    case 242u: goto L_0898D38C;
    case 243u: goto L_0898D394;
    case 244u: goto L_0898D3AC;
    case 245u: goto L_0898D3B4;
    case 246u: goto L_0898D3FC;
    case 247u: goto L_0898D408;
    case 248u: goto L_0898D414;
    case 249u: goto L_0898D41C;
    case 250u: goto L_0898D424;
    case 251u: goto L_0898D434;
    case 252u: goto L_0898D450;
    case 253u: goto L_0898D480;
    case 254u: goto L_0898D488;
    case 255u: goto L_0898D490;
    case 256u: goto L_0898D498;
    case 257u: goto L_0898D4A8;
    case 258u: goto L_0898D4C4;
    case 259u: goto L_0898D4CC;
    case 260u: goto L_0898D4E8;
    case 261u: goto L_0898D4F0;
    case 262u: goto L_0898D4F8;
    case 263u: goto L_0898D508;
    case 264u: goto L_0898D530;
    case 265u: goto L_0898D538;
    case 266u: goto L_0898D558;
    case 267u: goto L_0898D594;
    case 268u: goto L_0898D5C0;
    case 269u: goto L_0898D5FC;
    case 270u: goto L_0898D608;
    case 271u: goto L_0898D614;
    case 272u: goto L_0898D668;
    case 273u: goto L_0898D694;
    case 274u: goto L_0898D6D0;
    case 275u: goto L_0898D6DC;
    case 276u: goto L_0898D6E8;
    case 277u: goto L_0898D718;
    case 278u: goto L_0898D72C;
    case 279u: goto L_0898D754;
    case 280u: goto L_0898D7A4;
    case 281u: goto L_0898D7D0;
    case 282u: goto L_0898D808;
    case 283u: goto L_0898D814;
    case 284u: goto L_0898D820;
    case 285u: goto L_0898D83C;
    case 286u: goto L_0898D858;
    case 287u: goto L_0898D86C;
    case 288u: goto L_0898D874;
    case 289u: goto L_0898D87C;
    case 290u: goto L_0898D8A4;
    case 291u: goto L_0898D8AC;
    case 292u: goto L_0898D8C4;
    case 293u: goto L_0898D8CC;
    case 294u: goto L_0898D8DC;
    case 295u: goto L_0898D8E8;
    case 296u: goto L_0898D8F4;
    case 297u: goto L_0898D8FC;
    case 298u: goto L_0898D900;
    case 299u: goto L_0898D908;
    case 300u: goto L_0898D91C;
    case 301u: goto L_0898D924;
    case 302u: goto L_0898D930;
    case 303u: goto L_0898D93C;
    case 304u: goto L_0898D948;
    case 305u: goto L_0898D954;
    case 306u: goto L_0898D95C;
    case 307u: goto L_0898D960;
    case 308u: goto L_0898D968;
    case 309u: goto L_0898D97C;
    case 310u: goto L_0898D984;
    case 311u: goto L_0898D990;
    case 312u: goto L_0898D99C;
    case 313u: goto L_0898D9A8;
    case 314u: goto L_0898D9B4;
    case 315u: goto L_0898D9BC;
    case 316u: goto L_0898D9C0;
    case 317u: goto L_0898D9C8;
    case 318u: goto L_0898D9DC;
    case 319u: goto L_0898D9E4;
    case 320u: goto L_0898D9F0;
    case 321u: goto L_0898DA04;
    case 322u: goto L_0898DA10;
    case 323u: goto L_0898DA18;
    case 324u: goto L_0898DA20;
    case 325u: goto L_0898DA2C;
    case 326u: goto L_0898DA34;
    case 327u: goto L_0898DA3C;
    case 328u: goto L_0898DA48;
    case 329u: goto L_0898DA50;
    case 330u: goto L_0898DA68;
    case 331u: goto L_0898DA70;
    case 332u: goto L_0898DA84;
    case 333u: goto L_0898DA90;
    case 334u: goto L_0898DA98;
    case 335u: goto L_0898DAB0;
    case 336u: goto L_0898DAB8;
    case 337u: goto L_0898DACC;
    case 338u: goto L_0898DAD8;
    case 339u: goto L_0898DAF4;
    case 340u: goto L_0898DAFC;
    case 341u: goto L_0898DB08;
    case 342u: goto L_0898DB1C;
    case 343u: goto L_0898DB24;
    case 344u: goto L_0898DB40;
    case 345u: goto L_0898DB48;
    case 346u: goto L_0898DB50;
    case 347u: goto L_0898DB58;
    case 348u: goto L_0898DB64;
    case 349u: goto L_0898DB78;
    case 350u: goto L_0898DB80;
    case 351u: goto L_0898DB88;
    case 352u: goto L_0898DBAC;
    case 353u: goto L_0898DBB4;
    case 354u: goto L_0898DBCC;
    case 355u: goto L_0898DBD4;
    case 356u: goto L_0898DBEC;
    case 357u: goto L_0898DBF8;
    case 358u: goto L_0898DC18;
    case 359u: goto L_0898DC2C;
    case 360u: goto L_0898DC38;
    case 361u: goto L_0898DC58;
    case 362u: goto L_0898DC8C;
    case 363u: goto L_0898DC94;
    case 364u: goto L_0898DCA4;
    case 365u: goto L_0898DCB0;
    case 366u: goto L_0898DCF0;
    case 367u: goto L_0898DD1C;
    case 368u: goto L_0898DD54;
    case 369u: goto L_0898DD60;
    case 370u: goto L_0898DD6C;
    case 371u: goto L_0898DDA0;
    case 372u: goto L_0898DDB4;
    case 373u: goto L_0898DDBC;
    case 374u: goto L_0898DDD8;
    case 375u: goto L_0898DDF4;
    case 376u: goto L_0898DDFC;
    case 377u: goto L_0898DE18;
    case 378u: goto L_0898DE20;
    case 379u: goto L_0898DE28;
    case 380u: goto L_0898DE30;
    case 381u: goto L_0898DE38;
    case 382u: goto L_0898DE40;
    case 383u: goto L_0898DE6C;
    case 384u: goto L_0898DE78;
    case 385u: goto L_0898DEA0;
    case 386u: goto L_0898DEA8;
    case 387u: goto L_0898DEB0;
    case 388u: goto L_0898DEB8;
    case 389u: goto L_0898DEC0;
    case 390u: goto L_0898DEC8;
    case 391u: goto L_0898DEE0;
    case 392u: goto L_0898DEE8;
    case 393u: goto L_0898DEF0;
    case 394u: goto L_0898DF08;
    case 395u: goto L_0898DF10;
    case 396u: goto L_0898DF34;
    case 397u: goto L_0898DF3C;
    case 398u: goto L_0898DF4C;
    case 399u: goto L_0898DF60;
    case 400u: goto L_0898DF70;
    case 401u: goto L_0898DF90;
    case 402u: goto L_0898DFC8;
    case 403u: goto L_0898DFD0;
    case 404u: goto L_0898DFD8;
    case 405u: goto L_0898DFE0;
    case 406u: goto L_0898DFE8;
    case 407u: goto L_0898DFF0;
    case 408u: goto L_0898DFF8;
    case 409u: goto L_0898E004;
    case 410u: goto L_0898E014;
    case 411u: goto L_0898E030;
    case 412u: goto L_0898E038;
    case 413u: goto L_0898E054;
    case 414u: goto L_0898E058;
    case 415u: goto L_0898E084;
    case 416u: goto L_0898E0C8;
    case 417u: goto L_0898E0F4;
    case 418u: goto L_0898E12C;
    case 419u: goto L_0898E138;
    case 420u: goto L_0898E144;
    case 421u: goto L_0898E1A0;
    case 422u: goto L_0898E1CC;
    case 423u: goto L_0898E208;
    case 424u: goto L_0898E214;
    case 425u: goto L_0898E220;
    case 426u: goto L_0898E244;
    case 427u: goto L_0898E25C;
    case 428u: goto L_0898E288;
    case 429u: goto L_0898E2E0;
    case 430u: goto L_0898E30C;
    case 431u: goto L_0898E344;
    case 432u: goto L_0898E350;
    case 433u: goto L_0898E35C;
    case 434u: goto L_0898E36C;
    case 435u: goto L_0898E38C;
    case 436u: goto L_0898E3B0;
    case 437u: goto L_0898E3D0;
    case 438u: goto L_0898E3D8;
    case 439u: goto L_0898E3E0;
    case 440u: goto L_0898E3F8;
    case 441u: goto L_0898E400;
    case 442u: goto L_0898E418;
    case 443u: goto L_0898E420;
    case 444u: goto L_0898E440;
    case 445u: goto L_0898E448;
    case 446u: goto L_0898E458;
    case 447u: goto L_0898E468;
    case 448u: goto L_0898E474;
    case 449u: goto L_0898E480;
    case 450u: goto L_0898E4B8;
    case 451u: goto L_0898E4C8;
    case 452u: goto L_0898E4D4;
    case 453u: goto L_0898E514;
    case 454u: goto L_0898E520;
    case 455u: goto L_0898E52C;
    case 456u: goto L_0898E538;
    case 457u: goto L_0898E544;
    case 458u: goto L_0898E550;
    case 459u: goto L_0898E55C;
    case 460u: goto L_0898E570;
    case 461u: goto L_0898E580;
    case 462u: goto L_0898E58C;
    case 463u: goto L_0898E594;
    case 464u: goto L_0898E5A4;
    case 465u: goto L_0898E5AC;
    case 466u: goto L_0898E5B4;
    case 467u: goto L_0898E5BC;
    case 468u: goto L_0898E5D0;
    case 469u: goto L_0898E5E4;
    case 470u: goto L_0898E5F4;
    case 471u: goto L_0898E630;
    case 472u: goto L_0898E640;
    case 473u: goto L_0898E648;
    case 474u: goto L_0898E654;
    case 475u: goto L_0898E664;
    case 476u: goto L_0898E66C;
    case 477u: goto L_0898E674;
    case 478u: goto L_0898E690;
    case 479u: goto L_0898E6D8;
    case 480u: goto L_0898E710;
    case 481u: goto L_0898E71C;
    case 482u: goto L_0898E728;
    case 483u: goto L_0898E738;
    case 484u: goto L_0898E748;
    case 485u: goto L_0898E750;
    case 486u: goto L_0898E758;
    case 487u: goto L_0898E768;
    case 488u: goto L_0898E778;
    case 489u: goto L_0898E788;
    case 490u: goto L_0898E794;
    case 491u: goto L_0898E7A4;
    case 492u: goto L_0898E7B0;
    case 493u: goto L_0898E7B8;
    case 494u: goto L_0898E7C0;
    case 495u: goto L_0898E7DC;
    case 496u: goto L_0898E7E4;
    case 497u: goto L_0898E7EC;
    case 498u: goto L_0898E7F4;
    case 499u: goto L_0898E7FC;
    case 500u: goto L_0898E804;
    case 501u: goto L_0898E81C;
    case 502u: goto L_0898E824;
    case 503u: goto L_0898E838;
    case 504u: goto L_0898E854;
    case 505u: goto L_0898E860;
    case 506u: goto L_0898E86C;
    case 507u: goto L_0898E888;
    case 508u: goto L_0898E8A0;
    case 509u: goto L_0898E8A8;
    case 510u: goto L_0898E8C8;
    case 511u: goto L_0898E8D0;
    case 512u: goto L_0898E8E0;
    case 513u: goto L_0898E8E8;
    case 514u: goto L_0898E90C;
    case 515u: goto L_0898E914;
    case 516u: goto L_0898E91C;
    case 517u: goto L_0898E934;
    case 518u: goto L_0898E93C;
    case 519u: goto L_0898E958;
    case 520u: goto L_0898E964;
    case 521u: goto L_0898E970;
    case 522u: goto L_0898E97C;
    case 523u: goto L_0898E984;
    case 524u: goto L_0898E98C;
    case 525u: goto L_0898E9B0;
    case 526u: goto L_0898E9B8;
    case 527u: goto L_0898E9C0;
    case 528u: goto L_0898E9CC;
    case 529u: goto L_0898E9D4;
    case 530u: goto L_0898EA08;
    case 531u: goto L_0898EA10;
    case 532u: goto L_0898EA1C;
    case 533u: goto L_0898EA3C;
    case 534u: goto L_0898EA48;
    case 535u: goto L_0898EA50;
    case 536u: goto L_0898EA60;
    case 537u: goto L_0898EA64;
    case 538u: goto L_0898EA8C;
    case 539u: goto L_0898EAB4;
    case 540u: goto L_0898EAE8;
    case 541u: goto L_0898EB00;
    case 542u: goto L_0898EB0C;
    case 543u: goto L_0898EB14;
    case 544u: goto L_0898EB1C;
    case 545u: goto L_0898EB24;
    case 546u: goto L_0898EB28;
    case 547u: goto L_0898EB50;
    case 548u: goto L_0898EB58;
    case 549u: goto L_0898EB60;
    case 550u: goto L_0898EB68;
    case 551u: goto L_0898EB6C;
    case 552u: goto L_0898EB94;
    case 553u: goto L_0898EB9C;
    case 554u: goto L_0898EBA4;
    case 555u: goto L_0898EBAC;
    case 556u: goto L_0898EBB0;
    case 557u: goto L_0898EBD4;
    case 558u: goto L_0898EBDC;
    case 559u: goto L_0898EBE8;
    case 560u: goto L_0898EBF0;
    case 561u: goto L_0898EBF8;
    case 562u: goto L_0898EC00;
    case 563u: goto L_0898EC04;
    case 564u: goto L_0898EC34;
    case 565u: goto L_0898EC44;
    case 566u: goto L_0898EC4C;
    case 567u: goto L_0898EC54;
    case 568u: goto L_0898EC5C;
    case 569u: goto L_0898EC60;
    case 570u: goto L_0898EC88;
    case 571u: goto L_0898EC90;
    case 572u: goto L_0898EC98;
    case 573u: goto L_0898ECA0;
    case 574u: goto L_0898ECA4;
    case 575u: goto L_0898ECD0;
    case 576u: goto L_0898ED28;
    case 577u: goto L_0898ED3C;
    case 578u: goto L_0898ED4C;
    case 579u: goto L_0898ED50;
    case 580u: goto L_0898ED70;
    case 581u: goto L_0898ED90;
    case 582u: goto L_0898EDB0;
    case 583u: goto L_0898EDE0;
    case 584u: goto L_0898EDF4;
    case 585u: goto L_0898EDFC;
    case 586u: goto L_0898EE3C;
    case 587u: goto L_0898EE50;
    case 588u: goto L_0898EE64;
    case 589u: goto L_0898EE78;
    case 590u: goto L_0898EE80;
    case 591u: goto L_0898EE88;
    case 592u: goto L_0898EEA4;
    case 593u: goto L_0898EEAC;
    case 594u: goto L_0898EEB4;
    case 595u: goto L_0898EEC0;
    case 596u: goto L_0898EEC8;
    case 597u: goto L_0898EED0;
    case 598u: goto L_0898EEF0;
    case 599u: goto L_0898EEF8;
    case 600u: goto L_0898EF10;
    case 601u: goto L_0898EF18;
    case 602u: goto L_0898EF24;
    case 603u: goto L_0898EF30;
    case 604u: goto L_0898EF3C;
    case 605u: goto L_0898EF4C;
    case 606u: goto L_0898EF54;
    case 607u: goto L_0898EF5C;
    case 608u: goto L_0898EF70;
    case 609u: goto L_0898EF78;
    case 610u: goto L_0898EFBC;
    case 611u: goto L_0898EFC4;
    case 612u: goto L_0898EFE8;
    case 613u: goto L_0898EFFC;
    case 614u: goto L_0898F00C;
    case 615u: goto L_0898F020;
    case 616u: goto L_0898F028;
    case 617u: goto L_0898F030;
    case 618u: goto L_0898F04C;
    case 619u: goto L_0898F054;
    case 620u: goto L_0898F05C;
    case 621u: goto L_0898F068;
    case 622u: goto L_0898F070;
    case 623u: goto L_0898F078;
    case 624u: goto L_0898F098;
    case 625u: goto L_0898F0A0;
    case 626u: goto L_0898F0B8;
    case 627u: goto L_0898F0C0;
    case 628u: goto L_0898F0E4;
    case 629u: goto L_0898F100;
    case 630u: goto L_0898F134;
    case 631u: goto L_0898F160;
    case 632u: goto L_0898F198;
    case 633u: goto L_0898F1A4;
    case 634u: goto L_0898F1B0;
    case 635u: goto L_0898F1C0;
    case 636u: goto L_0898F1D4;
    case 637u: goto L_0898F1EC;
    case 638u: goto L_0898F200;
    case 639u: goto L_0898F208;
    case 640u: goto L_0898F210;
    case 641u: goto L_0898F230;
    case 642u: goto L_0898F238;
    case 643u: goto L_0898F240;
    case 644u: goto L_0898F248;
    case 645u: goto L_0898F268;
    case 646u: goto L_0898F290;
    case 647u: goto L_0898F29C;
    case 648u: goto L_0898F2AC;
    case 649u: goto L_0898F2C0;
    case 650u: goto L_0898F2C8;
    case 651u: goto L_0898F304;
    case 652u: goto L_0898F330;
    case 653u: goto L_0898F36C;
    case 654u: goto L_0898F388;
    case 655u: goto L_0898F394;
    case 656u: goto L_0898F39C;
    case 657u: goto L_0898F3C4;
    case 658u: goto L_0898F3D0;
    case 659u: goto L_0898F3F0;
    case 660u: goto L_0898F40C;
    case 661u: goto L_0898F420;
    case 662u: goto L_0898F430;
    case 663u: goto L_0898F438;
    case 664u: goto L_0898F440;
    case 665u: goto L_0898F45C;
    case 666u: goto L_0898F464;
    case 667u: goto L_0898F46C;
    case 668u: goto L_0898F478;
    case 669u: goto L_0898F480;
    case 670u: goto L_0898F488;
    case 671u: goto L_0898F4A8;
    case 672u: goto L_0898F4B0;
    case 673u: goto L_0898F4C8;
    case 674u: goto L_0898F4D0;
    case 675u: goto L_0898F534;
    case 676u: goto L_0898F548;
    case 677u: goto L_0898F568;
    case 678u: goto L_0898F5A0;
    case 679u: goto L_0898F5A8;
    case 680u: goto L_0898F5B0;
    case 681u: goto L_0898F5B8;
    case 682u: goto L_0898F5C0;
    case 683u: goto L_0898F5C8;
    case 684u: goto L_0898F5D0;
    case 685u: goto L_0898F5DC;
    case 686u: goto L_0898F5EC;
    case 687u: goto L_0898F608;
    case 688u: goto L_0898F610;
    case 689u: goto L_0898F62C;
    case 690u: goto L_0898F630;
    case 691u: goto L_0898F65C;
    case 692u: goto L_0898F6A0;
    case 693u: goto L_0898F6CC;
    case 694u: goto L_0898F704;
    case 695u: goto L_0898F710;
    case 696u: goto L_0898F71C;
    case 697u: goto L_0898F778;
    case 698u: goto L_0898F7A4;
    case 699u: goto L_0898F7E0;
    case 700u: goto L_0898F7EC;
    case 701u: goto L_0898F7F8;
    case 702u: goto L_0898F81C;
    case 703u: goto L_0898F834;
    case 704u: goto L_0898F860;
    case 705u: goto L_0898F880;
    case 706u: goto L_0898F88C;
    case 707u: goto L_0898F8CC;
    case 708u: goto L_0898F8F8;
    case 709u: goto L_0898F930;
    case 710u: goto L_0898F93C;
    case 711u: goto L_0898F948;
    case 712u: goto L_0898F958;
    case 713u: goto L_0898F978;
    case 714u: goto L_0898F99C;
    case 715u: goto L_0898F9BC;
    case 716u: goto L_0898F9C4;
    case 717u: goto L_0898F9CC;
    case 718u: goto L_0898F9E4;
    case 719u: goto L_0898F9EC;
    case 720u: goto L_0898FA04;
    case 721u: goto L_0898FA0C;
    case 722u: goto L_0898FA2C;
    case 723u: goto L_0898FA34;
    case 724u: goto L_0898FA44;
    case 725u: goto L_0898FA74;
    case 726u: goto L_0898FA90;
    case 727u: goto L_0898FA98;
    case 728u: goto L_0898FAA0;
    case 729u: goto L_0898FABC;
    case 730u: goto L_0898FAC8;
    case 731u: goto L_0898FAD0;
    case 732u: goto L_0898FAD8;
    case 733u: goto L_0898FAF4;
    case 734u: goto L_0898FB10;
    case 735u: goto L_0898FB28;
    case 736u: goto L_0898FB30;
    case 737u: goto L_0898FB3C;
    case 738u: goto L_0898FB44;
    case 739u: goto L_0898FB4C;
    case 740u: goto L_0898FB54;
    case 741u: goto L_0898FB5C;
    case 742u: goto L_0898FB64;
    case 743u: goto L_0898FB68;
    case 744u: goto L_0898FB70;
    case 745u: goto L_0898FB78;
    case 746u: goto L_0898FB80;
    case 747u: goto L_0898FBA4;
    case 748u: goto L_0898FBAC;
    case 749u: goto L_0898FBB4;
    case 750u: goto L_0898FBC0;
    case 751u: goto L_0898FBC8;
    case 752u: goto L_0898FBD0;
    case 753u: goto L_0898FBE8;
    case 754u: goto L_0898FC00;
    case 755u: goto L_0898FC20;
    case 756u: goto L_0898FC38;
    case 757u: goto L_0898FC4C;
    case 758u: goto L_0898FC58;
    case 759u: goto L_0898FC70;
    case 760u: goto L_0898FC88;
    case 761u: goto L_0898FCA8;
    case 762u: goto L_0898FCC0;
    case 763u: goto L_0898FCD0;
    case 764u: goto L_0898FCDC;
    case 765u: goto L_0898FD00;
    case 766u: goto L_0898FD08;
    case 767u: goto L_0898FD20;
    case 768u: goto L_0898FD38;
    case 769u: goto L_0898FD58;
    case 770u: goto L_0898FD64;
    case 771u: goto L_0898FD6C;
    case 772u: goto L_0898FD74;
    case 773u: goto L_0898FD90;
    case 774u: goto L_0898FD98;
    case 775u: goto L_0898FDA0;
    case 776u: goto L_0898FDA8;
    case 777u: goto L_0898FDC4;
    case 778u: goto L_0898FDE0;
    case 779u: goto L_0898FDF8;
    case 780u: goto L_0898FE08;
    case 781u: goto L_0898FE0C;
    case 782u: goto L_0898FE1C;
    case 783u: goto L_0898FE20;
    case 784u: goto L_0898FE28;
    case 785u: goto L_0898FE80;
    case 786u: goto L_0898FE88;
    case 787u: goto L_0898FEA4;
    case 788u: goto L_0898FEBC;
    case 789u: goto L_0898FEC4;
    case 790u: goto L_0898FECC;
    case 791u: goto L_0898FED4;
    case 792u: goto L_0898FEDC;
    case 793u: goto L_0898FF0C;
    case 794u: goto L_0898FF48;
    case 795u: goto L_0898FF4C;
    case 796u: goto L_0898FF5C;
    case 797u: goto L_0898FF64;
    case 798u: goto L_0898FF74;
    case 799u: goto L_0898FF7C;
    case 800u: goto L_0898FF84;
    case 801u: goto L_0898FF94;
    case 802u: goto L_0898FFBC;
    case 803u: goto L_0898FFCC;
    case 804u: goto L_0898FFD0;
    case 805u: goto L_0898FFD8;
    case 806u: goto L_0898FFE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0898C000:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17386u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898C03Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898C03Cu) goto L_0898C03C;
    return;
L_0898C03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C1B4;
      }
      goto L_0898C044;
    }
L_0898C044:
    ctx.gpr[31] = (0x0898C04Cu);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 240u, 0x08AECC38u>(ctx, &aot_mem) && ctx.pc == 0x0898C04Cu) goto L_0898C04C;
    return;
L_0898C04C:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[2] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16688u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(996));
    ctx.gpr[4] = (17362u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = ctx.fpr[22] + ctx.fpr[14];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17386u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0898C0CCu);
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0898C0CCu) goto L_0898C0CC;
    return;
L_0898C0CC:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(1012));
    ctx.gpr[30] = (2228u << 16u);
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898C0F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C0F0u) goto L_0898C0F0;
    return;
L_0898C0F0:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898C100u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898C100u) goto L_0898C100;
    return;
L_0898C100:
    ctx.gpr[5] = (17363u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (17386u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0898C124u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0898C124u) goto L_0898C124;
    return;
L_0898C124:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(81)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(82)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[31] = (0x0898C140u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C140u) goto L_0898C140;
    return;
L_0898C140:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898C150u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898C150u) goto L_0898C150;
    return;
L_0898C150:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (16952u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0898C188u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0898C188u) goto L_0898C188;
    return;
L_0898C188:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(77)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(78)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[31] = (0x0898C1A4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C1A4u) goto L_0898C1A4;
    return;
L_0898C1A4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898C1B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898C1B4u) goto L_0898C1B4;
    return;
L_0898C1B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(8))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C28C;
      }
      goto L_0898C1C0;
    }
L_0898C1C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898C200;
      }
      goto L_0898C1D0;
    }
L_0898C1D0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x0898C1DCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0898C1DCu) goto L_0898C1DC;
    return;
L_0898C1DC:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C1F4;
      }
      goto L_0898C1E8;
    }
L_0898C1E8:
    ctx.gpr[31] = (0x0898C1F0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0898C1F0u) goto L_0898C1F0;
    return;
L_0898C1F0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_0898C1F4;
L_0898C1F4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0898C200;
L_0898C200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0898C20Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0898C20Cu) goto L_0898C20C;
    return;
L_0898C20C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(668));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898C21Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 22u, 0x08A54364u>(ctx, &aot_mem) && ctx.pc == 0x0898C21Cu) goto L_0898C21C;
    return;
L_0898C21C:
    ctx.gpr[31] = (0x0898C224u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 512u, 0x089870E8u>(ctx, &aot_mem) && ctx.pc == 0x0898C224u) goto L_0898C224;
    return;
L_0898C224:
    ctx.gpr[31] = (0x0898C22Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898C22Cu) goto L_0898C22C;
    return;
L_0898C22C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(76)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(77)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(78)));
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1016));
    ctx.gpr[31] = (0x0898C248u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(-24908)));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C248u) goto L_0898C248;
    return;
L_0898C248:
    ctx.gpr[31] = (0x0898C250u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898C250u) goto L_0898C250;
    return;
L_0898C250:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (17386u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(100));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898C28Cu);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898C28Cu) goto L_0898C28C;
    return;
L_0898C28C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    goto L_0898C294;
L_0898C294:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[21]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 645u, 0x0898BF34u>(ctx, &aot_mem); return;
      }
      goto L_0898C2A8;
    }
L_0898C2A8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898C2B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 608u, 0x08ADA7D8u>(ctx, &aot_mem) && ctx.pc == 0x0898C2B4u) goto L_0898C2B4;
    return;
L_0898C2B4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898C44C;
      }
      goto L_0898C2C0;
    }
L_0898C2C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7083)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C44C;
      }
      goto L_0898C2D0;
    }
L_0898C2D0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800))))));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898C2FC;
      }
      goto L_0898C2E4;
    }
L_0898C2E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C30C;
      }
      goto L_0898C2F8;
    }
L_0898C2F8:
    ctx.gpr[5] = (2230u << 16u);
    goto L_0898C2FC;
L_0898C2FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6800))))));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898C444;
      }
      goto L_0898C30C;
    }
L_0898C30C:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x0898C318u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898C318u) goto L_0898C318;
    return;
L_0898C318:
    ctx.gpr[31] = (0x0898C320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 703u, 0x089671ECu>(ctx, &aot_mem) && ctx.pc == 0x0898C320u) goto L_0898C320;
    return;
L_0898C320:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898C32Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 608u, 0x08ADA7D8u>(ctx, &aot_mem) && ctx.pc == 0x0898C32Cu) goto L_0898C32C;
    return;
L_0898C32C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898C43C;
      }
      goto L_0898C338;
    }
L_0898C338:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6484)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C350;
      }
      goto L_0898C350;
    }
L_0898C350:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7488));
    ctx.gpr[31] = (0x0898C360u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(200));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898C360u) goto L_0898C360;
    return;
L_0898C360:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898C370u);
    ctx.fpr[22] = ctx.fpr[0] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x089870BCu>(ctx, &aot_mem) && ctx.pc == 0x0898C370u) goto L_0898C370;
    return;
L_0898C370:
    ctx.gpr[31] = (0x0898C378u);
    ctx.fpr[24] = ctx.fpr[0] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898C378u) goto L_0898C378;
    return;
L_0898C378:
    ctx.gpr[31] = (0x0898C380u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x0898C380u) goto L_0898C380;
    return;
L_0898C380:
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[0];
    ctx.gpr[31] = (0x0898C38Cu);
    ctx.fpr[28] = ctx.fpr[12] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 508u, 0x089870BCu>(ctx, &aot_mem) && ctx.pc == 0x0898C38Cu) goto L_0898C38C;
    return;
L_0898C38C:
    ctx.gpr[31] = (0x0898C394u);
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 501u, 0x08987068u>(ctx, &aot_mem) && ctx.pc == 0x0898C394u) goto L_0898C394;
    return;
L_0898C394:
    ctx.fpr[15] = ctx.fpr[30] + ctx.fpr[0];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1020));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0898C3B0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0898C3B0u) goto L_0898C3B0;
    return;
L_0898C3B0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1036));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898C3CCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C3CCu) goto L_0898C3CC;
    return;
L_0898C3CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898C3E8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C3E8u) goto L_0898C3E8;
    return;
L_0898C3E8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1044));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898C404u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C404u) goto L_0898C404;
    return;
L_0898C404:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1048));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898C420u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C420u) goto L_0898C420;
    return;
L_0898C420:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0898C43Cu);
    ctx.gpr[9] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 924u, 0x08AD3C28u>(ctx, &aot_mem) && ctx.pc == 0x0898C43Cu) goto L_0898C43C;
    return;
L_0898C43C:
    ctx.gpr[31] = (0x0898C444u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 43u, 0x0896C1F4u>(ctx, &aot_mem) && ctx.pc == 0x0898C444u) goto L_0898C444;
    return;
L_0898C444:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6843), static_cast<std::uint8_t>(0u));
    goto L_0898C44C;
L_0898C44C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6420)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0898C478;
      }
      goto L_0898C460;
    }
L_0898C460:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898C478;
      }
      goto L_0898C470;
    }
L_0898C470:
    ctx.gpr[31] = (0x0898C478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 204u, 0x0896CB70u>(ctx, &aot_mem) && ctx.pc == 0x0898C478u) goto L_0898C478;
    return;
L_0898C478:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E458;
      }
      goto L_0898C488;
    }
L_0898C488:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C764;
      }
      goto L_0898C498;
    }
L_0898C498:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C49C;
L_0898C49C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C750;
      }
      goto L_0898C4C4;
    }
L_0898C4C4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C750;
      }
      goto L_0898C4EC;
    }
L_0898C4EC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23232));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898C520u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898C520u) goto L_0898C520;
    return;
L_0898C520:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    ctx.gpr[31] = (0x0898C538u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898C538u) goto L_0898C538;
    return;
L_0898C538:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C554;
      }
      goto L_0898C544;
    }
L_0898C544:
    ctx.gpr[31] = (0x0898C54Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54FCCu>(ctx, &aot_mem) && ctx.pc == 0x0898C54Cu) goto L_0898C54C;
    return;
L_0898C54C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C560;
      }
      goto L_0898C554;
    }
L_0898C554:
    ctx.gpr[31] = (0x0898C55Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898C55Cu) goto L_0898C55C;
    return;
L_0898C55C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C560;
L_0898C560:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C598;
      }
      goto L_0898C588;
    }
L_0898C588:
    ctx.gpr[31] = (0x0898C590u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0898C590u) goto L_0898C590;
    return;
L_0898C590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C5A4;
      }
      goto L_0898C598;
    }
L_0898C598:
    ctx.gpr[31] = (0x0898C5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898C5A0u) goto L_0898C5A0;
    return;
L_0898C5A0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C5A4;
L_0898C5A4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C5DC;
      }
      goto L_0898C5CC;
    }
L_0898C5CC:
    ctx.gpr[31] = (0x0898C5D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898C5D4u) goto L_0898C5D4;
    return;
L_0898C5D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C5E8;
      }
      goto L_0898C5DC;
    }
L_0898C5DC:
    ctx.gpr[31] = (0x0898C5E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x0898C5E4u) goto L_0898C5E4;
    return;
L_0898C5E4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C5E8;
L_0898C5E8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0898C60Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C60Cu) goto L_0898C60C;
    return;
L_0898C60C:
    ctx.gpr[31] = (0x0898C614u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C614u) goto L_0898C614;
    return;
L_0898C614:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C630;
      }
      goto L_0898C620;
    }
L_0898C620:
    ctx.gpr[31] = (0x0898C628u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 220u, 0x08A550ECu>(ctx, &aot_mem) && ctx.pc == 0x0898C628u) goto L_0898C628;
    return;
L_0898C628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C63C;
      }
      goto L_0898C630;
    }
L_0898C630:
    ctx.gpr[31] = (0x0898C638u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898C638u) goto L_0898C638;
    return;
L_0898C638:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C63C;
L_0898C63C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1052));
    ctx.gpr[31] = (0x0898C66Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1052), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A55110u>(ctx, &aot_mem) && ctx.pc == 0x0898C66Cu) goto L_0898C66C;
    return;
L_0898C66C:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C68C;
      }
      goto L_0898C67C;
    }
L_0898C67C:
    ctx.gpr[31] = (0x0898C684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5513Cu>(ctx, &aot_mem) && ctx.pc == 0x0898C684u) goto L_0898C684;
    return;
L_0898C684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C698;
      }
      goto L_0898C68C;
    }
L_0898C68C:
    ctx.gpr[31] = (0x0898C694u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x0898C694u) goto L_0898C694;
    return;
L_0898C694:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C698;
L_0898C698:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C6D0;
      }
      goto L_0898C6C0;
    }
L_0898C6C0:
    ctx.gpr[31] = (0x0898C6C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898C6C8u) goto L_0898C6C8;
    return;
L_0898C6C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C6DC;
      }
      goto L_0898C6D0;
    }
L_0898C6D0:
    ctx.gpr[31] = (0x0898C6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55174u>(ctx, &aot_mem) && ctx.pc == 0x0898C6D8u) goto L_0898C6D8;
    return;
L_0898C6D8:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898C6DC;
L_0898C6DC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23232));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x0898C708u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898C708u) goto L_0898C708;
    return;
L_0898C708:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (17376u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17288u << 16u);
    ctx.gpr[4] = (17392u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0898C750u);
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898C750u) goto L_0898C750;
    return;
L_0898C750:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898C49C;
      }
      goto L_0898C764;
    }
L_0898C764:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C88C;
      }
      goto L_0898C774;
    }
L_0898C774:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    goto L_0898C778;
L_0898C778:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898C878;
      }
      goto L_0898C798;
    }
L_0898C798:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898C878;
      }
      goto L_0898C7B8;
    }
L_0898C7B8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898C824;
      }
      goto L_0898C7D8;
    }
L_0898C7D8:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x0898C808u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0898C808u) goto L_0898C808;
    return;
L_0898C808:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898C81Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898C81Cu) goto L_0898C81C;
    return;
L_0898C81C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C878;
      }
      goto L_0898C824;
    }
L_0898C824:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22304));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x0898C864u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0898C864u) goto L_0898C864;
    return;
L_0898C864:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898C878u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x0898C878u) goto L_0898C878;
    return;
L_0898C878:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898C778;
      }
      goto L_0898C88C;
    }
L_0898C88C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-9536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898CB90;
      }
      goto L_0898C89C;
    }
L_0898C89C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CB90;
      }
      goto L_0898C8AC;
    }
L_0898C8AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6432)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CB90;
      }
      goto L_0898C8B8;
    }
L_0898C8B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C8D4;
      }
      goto L_0898C8C8;
    }
L_0898C8C8:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), ctx.gpr[4]);
    goto L_0898C8D4;
L_0898C8D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898C8F0;
      }
      goto L_0898C8E4;
    }
L_0898C8E4:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    goto L_0898C8F0;
L_0898C8F0:
    ctx.gpr[31] = (0x0898C8F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898C8F8u) goto L_0898C8F8;
    return;
L_0898C8F8:
    ctx.gpr[31] = (0x0898C900u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898C900u) goto L_0898C900;
    return;
L_0898C900:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898C91Cu);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C91Cu) goto L_0898C91C;
    return;
L_0898C91C:
    ctx.gpr[31] = (0x0898C924u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A55110u>(ctx, &aot_mem) && ctx.pc == 0x0898C924u) goto L_0898C924;
    return;
L_0898C924:
    ctx.gpr[31] = (0x0898C92Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898C92Cu) goto L_0898C92C;
    return;
L_0898C92C:
    ctx.gpr[31] = (0x0898C934u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898C934u) goto L_0898C934;
    return;
L_0898C934:
    ctx.gpr[31] = (0x0898C93Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898C93Cu) goto L_0898C93C;
    return;
L_0898C93C:
    ctx.gpr[31] = (0x0898C944u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898C944u) goto L_0898C944;
    return;
L_0898C944:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x0898C95Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C95Cu) goto L_0898C95C;
    return;
L_0898C95C:
    ctx.gpr[31] = (0x0898C964u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898C964u) goto L_0898C964;
    return;
L_0898C964:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CA10;
      }
      goto L_0898C978;
    }
L_0898C978:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24872), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25812)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898C9A0;
      }
      goto L_0898C994;
    }
L_0898C994:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(679)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CB88;
      }
      goto L_0898C9A0;
    }
L_0898C9A0:
    ctx.gpr[4] = (17362u << 16u);
    ctx.gpr[31] = (0x0898C9ACu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C9ACu) goto L_0898C9AC;
    return;
L_0898C9AC:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898C9C8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898C9C8u) goto L_0898C9C8;
    return;
L_0898C9C8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1092));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898C9E0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C9E0u) goto L_0898C9E0;
    return;
L_0898C9E0:
    ctx.gpr[31] = (0x0898C9E8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898C9E8u) goto L_0898C9E8;
    return;
L_0898C9E8:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (17241u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x0898CA08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9536));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898CA08u) goto L_0898CA08;
    return;
L_0898CA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CB88;
      }
      goto L_0898CA10;
    }
L_0898CA10:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24872)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CA28;
      }
      goto L_0898CA20;
    }
L_0898CA20:
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-9536), static_cast<std::uint16_t>(0u));
    goto L_0898CA28;
L_0898CA28:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-24872), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1096));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x0898CA4Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898CA4Cu) goto L_0898CA4C;
    return;
L_0898CA4C:
    ctx.gpr[31] = (0x0898CA54u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898CA54u) goto L_0898CA54;
    return;
L_0898CA54:
    ctx.gpr[31] = (0x0898CA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x0898CA5Cu) goto L_0898CA5C;
    return;
L_0898CA5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898CA74u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898CA74u) goto L_0898CA74;
    return;
L_0898CA74:
    ctx.gpr[31] = (0x0898CA7Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898CA7Cu) goto L_0898CA7C;
    return;
L_0898CA7C:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898CA98u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898CA98u) goto L_0898CA98;
    return;
L_0898CA98:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898CAA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 608u, 0x08ADA7D8u>(ctx, &aot_mem) && ctx.pc == 0x0898CAA4u) goto L_0898CAA4;
    return;
L_0898CAA4:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CB50;
      }
      goto L_0898CAB0;
    }
L_0898CAB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7083)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CB50;
      }
      goto L_0898CABC;
    }
L_0898CABC:
    ctx.gpr[31] = (0x0898CAC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x0898CAC4u) goto L_0898CAC4;
    return;
L_0898CAC4:
    ctx.gpr[31] = (0x0898CACCu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898CACCu) goto L_0898CACC;
    return;
L_0898CACC:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[31] = (0x0898CAF0u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898CAF0u) goto L_0898CAF0;
    return;
L_0898CAF0:
    ctx.gpr[31] = (0x0898CAF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x0898CAF8u) goto L_0898CAF8;
    return;
L_0898CAF8:
    ctx.gpr[31] = (0x0898CB00u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898CB00u) goto L_0898CB00;
    return;
L_0898CB00:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[31] = (0x0898CB0Cu);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x0898CB0Cu) goto L_0898CB0C;
    return;
L_0898CB0C:
    ctx.gpr[31] = (0x0898CB14u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898CB14u) goto L_0898CB14;
    return;
L_0898CB14:
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (17245u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9536));
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0898CB48u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898CB48u) goto L_0898CB48;
    return;
L_0898CB48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CB7C;
      }
      goto L_0898CB50;
    }
L_0898CB50:
    ctx.gpr[4] = (17379u << 16u);
    ctx.gpr[31] = (0x0898CB5Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898CB5Cu) goto L_0898CB5C;
    return;
L_0898CB5C:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (17245u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x0898CB7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9536));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898CB7Cu) goto L_0898CB7C;
    return;
L_0898CB7C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6843), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898CB88;
L_0898CB88:
    ctx.gpr[31] = (0x0898CB90u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898CB90u) goto L_0898CB90;
    return;
L_0898CB90:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-9024)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D41C;
      }
      goto L_0898CBA0;
    }
L_0898CBA0:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9024));
    ctx.gpr[31] = (0x0898CBB8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8512));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 195u, 0x08879030u>(ctx, &aot_mem) && ctx.pc == 0x0898CBB8u) goto L_0898CBB8;
    return;
L_0898CBB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898CD20;
      }
      goto L_0898CBC0;
    }
L_0898CBC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6408)));
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CD08;
      }
      goto L_0898CBD4;
    }
L_0898CBD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6408)));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0898CC9C;
      }
      goto L_0898CBE4;
    }
L_0898CBE4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0898CCB8;
      }
      goto L_0898CBEC;
    }
L_0898CBEC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0898CCD4;
      }
      goto L_0898CBF4;
    }
L_0898CBF4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0898CCF0;
      }
      goto L_0898CBFC;
    }
L_0898CBFC:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6416), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6412), 0u);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9024));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[31] = (0x0898CC34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8000));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878FB0u>(ctx, &aot_mem) && ctx.pc == 0x0898CC34u) goto L_0898CC34;
    return;
L_0898CC34:
    ctx.gpr[31] = (0x0898CC3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 184u, 0x08878F88u>(ctx, &aot_mem) && ctx.pc == 0x0898CC3Cu) goto L_0898CC3C;
    return;
L_0898CC3C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(324)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[13])) && ctx.fpr[14] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6400), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898CC94;
      }
      goto L_0898CC80;
    }
L_0898CC80:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 179u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898CC94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0898CC94u) goto L_0898CC94;
    return;
L_0898CC94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CD08;
      }
      goto L_0898CC9C;
    }
L_0898CC9C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CD08;
      }
      goto L_0898CCB8;
    }
L_0898CCB8:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CD08;
      }
      goto L_0898CCD4;
    }
L_0898CCD4:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CD08;
      }
      goto L_0898CCF0;
    }
L_0898CCF0:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6416), ctx.gpr[4]);
    goto L_0898CD08;
L_0898CD08:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8512));
    ctx.gpr[31] = (0x0898CD20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9024));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878FB0u>(ctx, &aot_mem) && ctx.pc == 0x0898CD20u) goto L_0898CD20;
    return;
L_0898CD20:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6408)));
    ctx.gpr[5] = (17249u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898D414;
      }
      goto L_0898CD34;
    }
L_0898CD34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6408)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CD60;
      }
      goto L_0898CD48;
    }
L_0898CD48:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898D1A0;
      }
      goto L_0898CD50;
    }
L_0898CD50:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D100;
      }
      goto L_0898CD58;
    }
L_0898CD58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CD78;
      }
      goto L_0898CD60;
    }
L_0898CD60:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898CEAC;
      }
      goto L_0898CD68;
    }
L_0898CD68:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CFE0;
      }
      goto L_0898CD70;
    }
L_0898CD70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D1A0;
      }
      goto L_0898CD78;
    }
L_0898CD78:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CDA0;
      }
      goto L_0898CD8C;
    }
L_0898CD8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7376)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898CEA4;
      }
      goto L_0898CD9C;
    }
L_0898CD9C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898CDA0;
L_0898CDA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412)));
      if (branch_taken) {
          goto L_0898CE04;
      }
      goto L_0898CDD8;
    }
L_0898CDD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898CE40;
      }
      goto L_0898CE04;
    }
L_0898CE04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898CE40;
L_0898CE40:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CE7C;
      }
      goto L_0898CE68;
    }
L_0898CE68:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6412), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), ctx.gpr[4]);
    goto L_0898CE7C;
L_0898CE7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6412)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17249u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_0898CEA4;
L_0898CEA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D1A0;
      }
      goto L_0898CEAC;
    }
L_0898CEAC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412)));
      if (branch_taken) {
          goto L_0898CF14;
      }
      goto L_0898CEE8;
    }
L_0898CEE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898CF50;
      }
      goto L_0898CF14;
    }
L_0898CF14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898CF50;
L_0898CF50:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898CF9C;
      }
      goto L_0898CF78;
    }
L_0898CF78:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CFB8;
      }
      goto L_0898CF8C;
    }
L_0898CF8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7376)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898CFB8;
      }
      goto L_0898CF9C;
    }
L_0898CF9C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6412), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6408), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7376), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898CFB8;
L_0898CFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6412)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17249u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898D1A0;
      }
      goto L_0898CFE0;
    }
L_0898CFE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6412)));
      if (branch_taken) {
          goto L_0898D044;
      }
      goto L_0898D018;
    }
L_0898D018:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898D080;
      }
      goto L_0898D044;
    }
L_0898D044:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898D080;
L_0898D080:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898D0D4;
      }
      goto L_0898D0A8;
    }
L_0898D0A8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6412), 0u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (0u | 256u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8000));
    ctx.gpr[31] = (0x0898D0D4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8512));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 187u, 0x08878FB0u>(ctx, &aot_mem) && ctx.pc == 0x0898D0D4u) goto L_0898D0D4;
    return;
L_0898D0D4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6412)));
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17249u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_0898D1A0;
      }
      goto L_0898D100;
    }
L_0898D100:
    ctx.gpr[4] = (0u | 600u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6403)));
    ctx.gpr[5] = (17249u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898D1A0;
      }
      goto L_0898D120;
    }
L_0898D120:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6416)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6400)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898D188;
      }
      goto L_0898D154;
    }
L_0898D154:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6404)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898D1A0;
      }
      goto L_0898D160;
    }
L_0898D160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6416)));
    ctx.gpr[5] = (17595u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898D1A0;
      }
      goto L_0898D188;
    }
L_0898D188:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6408), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 600u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6412), ctx.gpr[4]);
    goto L_0898D1A0;
L_0898D1A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898D1C8;
      }
      goto L_0898D1B4;
    }
L_0898D1B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7376)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D414;
      }
      goto L_0898D1C4;
    }
L_0898D1C4:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898D1C8;
L_0898D1C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6416)));
      if (branch_taken) {
          goto L_0898D22C;
      }
      goto L_0898D200;
    }
L_0898D200:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898D268;
      }
      goto L_0898D22C;
    }
L_0898D22C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    goto L_0898D268;
L_0898D268:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6416), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0898D294;
      }
      goto L_0898D284;
    }
L_0898D284:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898D414;
      }
      goto L_0898D294;
    }
L_0898D294:
    ctx.gpr[31] = (0x0898D29Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 231u, 0x08A551BCu>(ctx, &aot_mem) && ctx.pc == 0x0898D29Cu) goto L_0898D29C;
    return;
L_0898D29C:
    ctx.gpr[31] = (0x0898D2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x0898D2A4u) goto L_0898D2A4;
    return;
L_0898D2A4:
    ctx.gpr[31] = (0x0898D2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898D2ACu) goto L_0898D2AC;
    return;
L_0898D2AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29514)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D2E0;
      }
      goto L_0898D2BC;
    }
L_0898D2BC:
    ctx.gpr[4] = (16048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11073u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16191u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 31982u);
    ctx.gpr[31] = (0x0898D2D8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898D2D8u) goto L_0898D2D8;
    return;
L_0898D2D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D2FC;
      }
      goto L_0898D2E0;
    }
L_0898D2E0:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898D2FCu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898D2FCu) goto L_0898D2FC;
    return;
L_0898D2FC:
    ctx.gpr[31] = (0x0898D304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x0898D304u) goto L_0898D304;
    return;
L_0898D304:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1100));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 175u);
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[7] = (0u | 175u);
    ctx.gpr[31] = (0x0898D320u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898D320u) goto L_0898D320;
    return;
L_0898D320:
    ctx.gpr[31] = (0x0898D328u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898D328u) goto L_0898D328;
    return;
L_0898D328:
    ctx.gpr[31] = (0x0898D330u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898D330u) goto L_0898D330;
    return;
L_0898D330:
    ctx.gpr[4] = (17248u << 16u);
    ctx.gpr[31] = (0x0898D33Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D33Cu) goto L_0898D33C;
    return;
L_0898D33C:
    ctx.gpr[31] = (0x0898D344u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898D344u) goto L_0898D344;
    return;
L_0898D344:
    ctx.gpr[31] = (0x0898D34Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 220u, 0x08A550ECu>(ctx, &aot_mem) && ctx.pc == 0x0898D34Cu) goto L_0898D34C;
    return;
L_0898D34C:
    ctx.gpr[31] = (0x0898D354u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x0898D354u) goto L_0898D354;
    return;
L_0898D354:
    ctx.gpr[31] = (0x0898D35Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898D35Cu) goto L_0898D35C;
    return;
L_0898D35C:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0898D38Cu);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898D38Cu) goto L_0898D38C;
    return;
L_0898D38C:
    ctx.gpr[31] = (0x0898D394u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A55110u>(ctx, &aot_mem) && ctx.pc == 0x0898D394u) goto L_0898D394;
    return;
L_0898D394:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 175u);
    ctx.gpr[6] = (0u | 175u);
    ctx.gpr[7] = (0u | 175u);
    ctx.gpr[31] = (0x0898D3ACu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898D3ACu) goto L_0898D3AC;
    return;
L_0898D3AC:
    ctx.gpr[31] = (0x0898D3B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898D3B4u) goto L_0898D3B4;
    return;
L_0898D3B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6468)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16640u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8000));
    ctx.gpr[31] = (0x0898D3FCu);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898D3FCu) goto L_0898D3FC;
    return;
L_0898D3FC:
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[31] = (0x0898D408u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 231u, 0x08A551BCu>(ctx, &aot_mem) && ctx.pc == 0x0898D408u) goto L_0898D408;
    return;
L_0898D408:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x0898D414u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898D414u) goto L_0898D414;
    return;
L_0898D414:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D424;
      }
      goto L_0898D41C;
    }
L_0898D41C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6408), 0u);
    goto L_0898D424;
L_0898D424:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DAFC;
      }
      goto L_0898D434;
    }
L_0898D434:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4624)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898D480;
      }
      goto L_0898D450;
    }
L_0898D450:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898DB08;
      }
      goto L_0898D480;
    }
L_0898D480:
    ctx.gpr[31] = (0x0898D488u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898D488u) goto L_0898D488;
    return;
L_0898D488:
    ctx.gpr[31] = (0x0898D490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898D490u) goto L_0898D490;
    return;
L_0898D490:
    ctx.gpr[31] = (0x0898D498u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x0898D498u) goto L_0898D498;
    return;
L_0898D498:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29514)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D4CC;
      }
      goto L_0898D4A8;
    }
L_0898D4A8:
    ctx.gpr[4] = (16161u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16409u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x0898D4C4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898D4C4u) goto L_0898D4C4;
    return;
L_0898D4C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D4E8;
      }
      goto L_0898D4CC;
    }
L_0898D4CC:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16409u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[31] = (0x0898D4E8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898D4E8u) goto L_0898D4E8;
    return;
L_0898D4E8:
    ctx.gpr[31] = (0x0898D4F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898D4F0u) goto L_0898D4F0;
    return;
L_0898D4F0:
    ctx.gpr[31] = (0x0898D4F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898D4F8u) goto L_0898D4F8;
    return;
L_0898D4F8:
    ctx.gpr[4] = (17427u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[31] = (0x0898D508u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898D508u) goto L_0898D508;
    return;
L_0898D508:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9568)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D530;
      }
      goto L_0898D530;
    }
L_0898D530:
    ctx.gpr[31] = (0x0898D538u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898D538u) goto L_0898D538;
    return;
L_0898D538:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9600)));
    ctx.gpr[4] = (17382u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898D72C;
      }
      goto L_0898D558;
    }
L_0898D558:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-9600)));
      if (branch_taken) {
          goto L_0898D5C0;
      }
      goto L_0898D594;
    }
L_0898D594:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898D5FC;
      }
      goto L_0898D5C0;
    }
L_0898D5C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898D5FC;
L_0898D5FC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898D614;
      }
      goto L_0898D608;
    }
L_0898D608:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898D614;
L_0898D614:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[7] = (2277u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-9600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-9568)));
      if (branch_taken) {
          goto L_0898D694;
      }
      goto L_0898D668;
    }
L_0898D668:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898D6D0;
      }
      goto L_0898D694;
    }
L_0898D694:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898D6D0;
L_0898D6D0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898D6E8;
      }
      goto L_0898D6DC;
    }
L_0898D6DC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898D6E8;
L_0898D6E8:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17279u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-9568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898D86C;
      }
      goto L_0898D718;
    }
L_0898D718:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898D86C;
      }
      goto L_0898D72C;
    }
L_0898D72C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4624)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898D83C;
      }
      goto L_0898D754;
    }
L_0898D754:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17136u << 16u);
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-9568)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4624), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898D7D0;
      }
      goto L_0898D7A4;
    }
L_0898D7A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898D808;
      }
      goto L_0898D7D0;
    }
L_0898D7D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898D808;
L_0898D808:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898D820;
      }
      goto L_0898D814;
    }
L_0898D814:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898D820;
L_0898D820:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898D83C;
L_0898D83C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9568)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898D86C;
      }
      goto L_0898D858;
    }
L_0898D858:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-9568), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4368), static_cast<std::uint16_t>(0u));
    goto L_0898D86C;
L_0898D86C:
    ctx.gpr[31] = (0x0898D874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x0898D874u) goto L_0898D874;
    return;
L_0898D874:
    ctx.gpr[31] = (0x0898D87Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898D87Cu) goto L_0898D87C;
    return;
L_0898D87C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9568)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D8AC;
      }
      goto L_0898D8A4;
    }
L_0898D8A4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    goto L_0898D8AC;
L_0898D8AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898D8C4u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898D8C4u) goto L_0898D8C4;
    return;
L_0898D8C4:
    ctx.gpr[31] = (0x0898D8CCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898D8CCu) goto L_0898D8CC;
    return;
L_0898D8CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1108));
      if (branch_taken) {
          goto L_0898D908;
      }
      goto L_0898D8DC;
    }
L_0898D8DC:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898D8E8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0898D8E8u) goto L_0898D8E8;
    return;
L_0898D8E8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D900;
      }
      goto L_0898D8F4;
    }
L_0898D8F4:
    ctx.gpr[31] = (0x0898D8FCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0898D8FCu) goto L_0898D8FC;
    return;
L_0898D8FC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898D900;
L_0898D900:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_0898D908;
L_0898D908:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0898D91Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21800));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0898D91Cu) goto L_0898D91C;
    return;
L_0898D91C:
    ctx.gpr[31] = (0x0898D924u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x0898D924u) goto L_0898D924;
    return;
L_0898D924:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898D930u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x0898D930u) goto L_0898D930;
    return;
L_0898D930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1364));
      if (branch_taken) {
          goto L_0898D968;
      }
      goto L_0898D93C;
    }
L_0898D93C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898D948u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0898D948u) goto L_0898D948;
    return;
L_0898D948:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D960;
      }
      goto L_0898D954;
    }
L_0898D954:
    ctx.gpr[31] = (0x0898D95Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0898D95Cu) goto L_0898D95C;
    return;
L_0898D95C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898D960;
L_0898D960:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_0898D968;
L_0898D968:
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0898D97Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21792));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0898D97Cu) goto L_0898D97C;
    return;
L_0898D97C:
    ctx.gpr[31] = (0x0898D984u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x0898D984u) goto L_0898D984;
    return;
L_0898D984:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898D990u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x0898D990u) goto L_0898D990;
    return;
L_0898D990:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1620));
      if (branch_taken) {
          goto L_0898D9C8;
      }
      goto L_0898D99C;
    }
L_0898D99C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0898D9A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0898D9A8u) goto L_0898D9A8;
    return;
L_0898D9A8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898D9C0;
      }
      goto L_0898D9B4;
    }
L_0898D9B4:
    ctx.gpr[31] = (0x0898D9BCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0898D9BCu) goto L_0898D9BC;
    return;
L_0898D9BC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0898D9C0;
L_0898D9C0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    goto L_0898D9C8;
L_0898D9C8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0898D9DCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21784));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0898D9DCu) goto L_0898D9DC;
    return;
L_0898D9DC:
    ctx.gpr[31] = (0x0898D9E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x0898D9E4u) goto L_0898D9E4;
    return;
L_0898D9E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0898D9F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x0898D9F0u) goto L_0898D9F0;
    return;
L_0898D9F0:
    ctx.gpr[4] = (17159u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898DA04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x0898DA04u) goto L_0898DA04;
    return;
L_0898DA04:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1108));
    ctx.gpr[31] = (0x0898DA10u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED604u>(ctx, &aot_mem) && ctx.pc == 0x0898DA10u) goto L_0898DA10;
    return;
L_0898DA10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898DA50;
      }
      goto L_0898DA18;
    }
L_0898DA18:
    ctx.gpr[31] = (0x0898DA20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x0898DA20u) goto L_0898DA20;
    return;
L_0898DA20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1364));
    ctx.gpr[31] = (0x0898DA2Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED604u>(ctx, &aot_mem) && ctx.pc == 0x0898DA2Cu) goto L_0898DA2C;
    return;
L_0898DA2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898DA50;
      }
      goto L_0898DA34;
    }
L_0898DA34:
    ctx.gpr[31] = (0x0898DA3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x0898DA3Cu) goto L_0898DA3C;
    return;
L_0898DA3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1620));
    ctx.gpr[31] = (0x0898DA48u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED604u>(ctx, &aot_mem) && ctx.pc == 0x0898DA48u) goto L_0898DA48;
    return;
L_0898DA48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898DA98;
      }
      goto L_0898DA50;
    }
L_0898DA50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1876));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898DA68u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DA68u) goto L_0898DA68;
    return;
L_0898DA68:
    ctx.gpr[31] = (0x0898DA70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898DA70u) goto L_0898DA70;
    return;
L_0898DA70:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898DA90;
      }
      goto L_0898DA84;
    }
L_0898DA84:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_0898DA90;
L_0898DA90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DAD8;
      }
      goto L_0898DA98;
    }
L_0898DA98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1880));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 227u);
    ctx.gpr[7] = (0u | 79u);
    ctx.gpr[31] = (0x0898DAB0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DAB0u) goto L_0898DAB0;
    return;
L_0898DAB0:
    ctx.gpr[31] = (0x0898DAB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898DAB8u) goto L_0898DAB8;
    return;
L_0898DAB8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898DAD8;
      }
      goto L_0898DACC;
    }
L_0898DACC:
    ctx.gpr[4] = (16916u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    goto L_0898DAD8;
L_0898DAD8:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898DAF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898DAF4u) goto L_0898DAF4;
    return;
L_0898DAF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DB08;
      }
      goto L_0898DAFC;
    }
L_0898DAFC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4624), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898DB08;
L_0898DB08:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3584)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DC18;
      }
      goto L_0898DB1C;
    }
L_0898DB1C:
    ctx.gpr[31] = (0x0898DB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898DB24u) goto L_0898DB24;
    return;
L_0898DB24:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898DB40u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898DB40u) goto L_0898DB40;
    return;
L_0898DB40:
    ctx.gpr[31] = (0x0898DB48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898DB48u) goto L_0898DB48;
    return;
L_0898DB48:
    ctx.gpr[31] = (0x0898DB50u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898DB50u) goto L_0898DB50;
    return;
L_0898DB50:
    ctx.gpr[31] = (0x0898DB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898DB58u) goto L_0898DB58;
    return;
L_0898DB58:
    ctx.gpr[4] = (17337u << 16u);
    ctx.gpr[31] = (0x0898DB64u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DB64u) goto L_0898DB64;
    return;
L_0898DB64:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898DB78u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DB78u) goto L_0898DB78;
    return;
L_0898DB78:
    ctx.gpr[31] = (0x0898DB80u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898DB80u) goto L_0898DB80;
    return;
L_0898DB80:
    ctx.gpr[31] = (0x0898DB88u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898DB88u) goto L_0898DB88;
    return;
L_0898DB88:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1884));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898DBACu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DBACu) goto L_0898DBAC;
    return;
L_0898DBAC:
    ctx.gpr[31] = (0x0898DBB4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DBB4u) goto L_0898DBB4;
    return;
L_0898DBB4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898DBCCu);
    ctx.gpr[8] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DBCCu) goto L_0898DBCC;
    return;
L_0898DBCC:
    ctx.gpr[31] = (0x0898DBD4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898DBD4u) goto L_0898DBD4;
    return;
L_0898DBD4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[5] = (17199u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898DBF8;
      }
      goto L_0898DBEC;
    }
L_0898DBEC:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_0898DBF8;
L_0898DBF8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[6] = (17264u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898DC18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3584));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898DC18u) goto L_0898DC18;
    return;
L_0898DC18:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DF3C;
      }
      goto L_0898DC2C;
    }
L_0898DC2C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0898DC38u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 485u, 0x08986EE4u>(ctx, &aot_mem) && ctx.pc == 0x0898DC38u) goto L_0898DC38;
    return;
L_0898DC38:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898DCB0;
      }
      goto L_0898DC58;
    }
L_0898DC58:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DC94;
      }
      goto L_0898DC8C;
    }
L_0898DC8C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116), 0u);
    goto L_0898DC94;
L_0898DC94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DF4C;
      }
      goto L_0898DCA4;
    }
L_0898DCA4:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), 0u);
      if (branch_taken) {
          goto L_0898DF4C;
      }
      goto L_0898DCB0;
    }
L_0898DCB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898DD1C;
      }
      goto L_0898DCF0;
    }
L_0898DCF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898DD54;
      }
      goto L_0898DD1C;
    }
L_0898DD1C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898DD54;
L_0898DD54:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898DD6C;
      }
      goto L_0898DD60;
    }
L_0898DD60:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898DD6C;
L_0898DD6C:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17279u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898DDB4;
      }
      goto L_0898DDA0;
    }
L_0898DDA0:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898DDB4;
L_0898DDB4:
    ctx.gpr[31] = (0x0898DDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898DDBCu) goto L_0898DDBC;
    return;
L_0898DDBC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29515)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29514)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DDFC;
      }
      goto L_0898DDD8;
    }
L_0898DDD8:
    ctx.gpr[4] = (16241u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 60293u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16417u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898DDF4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898DDF4u) goto L_0898DDF4;
    return;
L_0898DDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DE18;
      }
      goto L_0898DDFC;
    }
L_0898DDFC:
    ctx.gpr[4] = (16300u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16486u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.gpr[31] = (0x0898DE18u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898DE18u) goto L_0898DE18;
    return;
L_0898DE18:
    ctx.gpr[31] = (0x0898DE20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898DE20u) goto L_0898DE20;
    return;
L_0898DE20:
    ctx.gpr[31] = (0x0898DE28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898DE28u) goto L_0898DE28;
    return;
L_0898DE28:
    ctx.gpr[31] = (0x0898DE30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898DE30u) goto L_0898DE30;
    return;
L_0898DE30:
    ctx.gpr[31] = (0x0898DE38u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898DE38u) goto L_0898DE38;
    return;
L_0898DE38:
    ctx.gpr[31] = (0x0898DE40u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898DE40u) goto L_0898DE40;
    return;
L_0898DE40:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_0898DE78;
      }
      goto L_0898DE6C;
    }
L_0898DE6C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (2277u << 16u);
    goto L_0898DE78;
L_0898DE78:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1888));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0898DEA0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DEA0u) goto L_0898DEA0;
    return;
L_0898DEA0:
    ctx.gpr[31] = (0x0898DEA8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DEA8u) goto L_0898DEA8;
    return;
L_0898DEA8:
    ctx.gpr[31] = (0x0898DEB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DEB0u) goto L_0898DEB0;
    return;
L_0898DEB0:
    ctx.gpr[31] = (0x0898DEB8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 266u, 0x0894526Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DEB8u) goto L_0898DEB8;
    return;
L_0898DEB8:
    ctx.gpr[31] = (0x0898DEC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 379u, 0x089D6728u>(ctx, &aot_mem) && ctx.pc == 0x0898DEC0u) goto L_0898DEC0;
    return;
L_0898DEC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DEF0;
      }
      goto L_0898DEC8;
    }
L_0898DEC8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1892));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 155u);
    ctx.gpr[7] = (0u | 210u);
    ctx.gpr[31] = (0x0898DEE0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DEE0u) goto L_0898DEE0;
    return;
L_0898DEE0:
    ctx.gpr[31] = (0x0898DEE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898DEE8u) goto L_0898DEE8;
    return;
L_0898DEE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DF10;
      }
      goto L_0898DEF0;
    }
L_0898DEF0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1896));
    ctx.gpr[5] = (0u | 174u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898DF08u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898DF08u) goto L_0898DF08;
    return;
L_0898DF08:
    ctx.gpr[31] = (0x0898DF10u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898DF10u) goto L_0898DF10;
    return;
L_0898DF10:
    ctx.gpr[6] = (17264u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[6] = (17048u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898DF34u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1024));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898DF34u) goto L_0898DF34;
    return;
L_0898DF34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898DF4C;
      }
      goto L_0898DF3C;
    }
L_0898DF3C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898DF4C;
L_0898DF4C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898E448;
      }
      goto L_0898DF60;
    }
L_0898DF60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E448;
      }
      goto L_0898DF70;
    }
L_0898DF70:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898DFC8;
      }
      goto L_0898DF90;
    }
L_0898DF90:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424), 0u);
    ctx.gpr[4] = (49776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9600));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E458;
      }
      goto L_0898DFC8;
    }
L_0898DFC8:
    ctx.gpr[31] = (0x0898DFD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898DFD0u) goto L_0898DFD0;
    return;
L_0898DFD0:
    ctx.gpr[31] = (0x0898DFD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898DFD8u) goto L_0898DFD8;
    return;
L_0898DFD8:
    ctx.gpr[31] = (0x0898DFE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898DFE0u) goto L_0898DFE0;
    return;
L_0898DFE0:
    ctx.gpr[31] = (0x0898DFE8u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x0898DFE8u) goto L_0898DFE8;
    return;
L_0898DFE8:
    ctx.gpr[31] = (0x0898DFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0898DFF0u) goto L_0898DFF0;
    return;
L_0898DFF0:
    ctx.gpr[31] = (0x0898DFF8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898DFF8u) goto L_0898DFF8;
    return;
L_0898DFF8:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x0898E004u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E004u) goto L_0898E004;
    return;
L_0898E004:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E038;
      }
      goto L_0898E014;
    }
L_0898E014:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898E030u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898E030u) goto L_0898E030;
    return;
L_0898E030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0898E058;
      }
      goto L_0898E038;
    }
L_0898E038:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898E054u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898E054u) goto L_0898E054;
    return;
L_0898E054:
    ctx.gpr[4] = (2229u << 16u);
    goto L_0898E058;
L_0898E058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9600));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898E25C;
      }
      goto L_0898E084;
    }
L_0898E084:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9600));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898E0F4;
      }
      goto L_0898E0C8;
    }
L_0898E0C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898E12C;
      }
      goto L_0898E0F4;
    }
L_0898E0F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898E12C;
L_0898E12C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898E144;
      }
      goto L_0898E138;
    }
L_0898E138:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898E144;
L_0898E144:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9600));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0898E1CC;
      }
      goto L_0898E1A0;
    }
L_0898E1A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898E208;
      }
      goto L_0898E1CC;
    }
L_0898E1CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898E208;
L_0898E208:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898E220;
      }
      goto L_0898E214;
    }
L_0898E214:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898E220;
L_0898E220:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (17279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E3B0;
      }
      goto L_0898E244;
    }
L_0898E244:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E3B0;
      }
      goto L_0898E25C;
    }
L_0898E25C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E36C;
      }
      goto L_0898E288;
    }
L_0898E288:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[7] = (2277u << 16u);
    ctx.gpr[5] = (17136u << 16u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-9568));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4624));
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[8] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898E30C;
      }
      goto L_0898E2E0;
    }
L_0898E2E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898E344;
      }
      goto L_0898E30C;
    }
L_0898E30C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898E344;
L_0898E344:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898E35C;
      }
      goto L_0898E350;
    }
L_0898E350:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898E35C;
L_0898E35C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898E36C;
L_0898E36C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_0898E3B0;
      }
      goto L_0898E38C;
    }
L_0898E38C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3072), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898E3B0;
L_0898E3B0:
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1900));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[7] = (0u | 40u);
    ctx.gpr[31] = (0x0898E3D0u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E3D0u) goto L_0898E3D0;
    return;
L_0898E3D0:
    ctx.gpr[31] = (0x0898E3D8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898E3D8u) goto L_0898E3D8;
    return;
L_0898E3D8:
    ctx.gpr[31] = (0x0898E3E0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E3E0u) goto L_0898E3E0;
    return;
L_0898E3E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898E3F8u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E3F8u) goto L_0898E3F8;
    return;
L_0898E3F8:
    ctx.gpr[31] = (0x0898E400u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E400u) goto L_0898E400;
    return;
L_0898E400:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 220u);
    ctx.gpr[6] = (0u | 172u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x0898E418u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E418u) goto L_0898E418;
    return;
L_0898E418:
    ctx.gpr[31] = (0x0898E420u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898E420u) goto L_0898E420;
    return;
L_0898E420:
    ctx.gpr[5] = (17387u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3072));
    ctx.gpr[31] = (0x0898E440u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A546D4u>(ctx, &aot_mem) && ctx.pc == 0x0898E440u) goto L_0898E440;
    return;
L_0898E440:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E458;
      }
      goto L_0898E448;
    }
L_0898E448:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898E458;
L_0898E458:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898E654;
      }
      goto L_0898E468;
    }
L_0898E468:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16401)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E654;
      }
      goto L_0898E474;
    }
L_0898E474:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1904));
    ctx.gpr[31] = (0x0898E480u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898E480u) goto L_0898E480;
    return;
L_0898E480:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1908), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1909), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (17392u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1910), static_cast<std::uint8_t>(0u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 180u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1911), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (17288u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1908));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898E4B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E4B8u) goto L_0898E4B8;
    return;
L_0898E4B8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16402)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E520;
      }
      goto L_0898E4C8;
    }
L_0898E4C8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1912));
    ctx.gpr[31] = (0x0898E4D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x0898E4D4u) goto L_0898E4D4;
    return;
L_0898E4D4:
    ctx.gpr[6] = (17106u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1916), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1917), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (17282u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1918), static_cast<std::uint8_t>(0u));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 220u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1919), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (17189u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1916));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898E514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 911u, 0x08AD3AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E514u) goto L_0898E514;
    return;
L_0898E514:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0898E520u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 872u, 0x08AD378Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E520u) goto L_0898E520;
    return;
L_0898E520:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0898E52Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E52Cu) goto L_0898E52C;
    return;
L_0898E52C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0898E538u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E538u) goto L_0898E538;
    return;
L_0898E538:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0898E544u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E544u) goto L_0898E544;
    return;
L_0898E544:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0898E550u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E550u) goto L_0898E550;
    return;
L_0898E550:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0898E55Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E55Cu) goto L_0898E55C;
    return;
L_0898E55C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7364)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0898E570u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E570u) goto L_0898E570;
    return;
L_0898E570:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16403))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898E5A4;
      }
      goto L_0898E580;
    }
L_0898E580:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E5F4;
      }
      goto L_0898E58C;
    }
L_0898E58C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0898E5BC;
      }
      goto L_0898E594;
    }
L_0898E594:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898E5F4;
      }
      goto L_0898E5A4;
    }
L_0898E5A4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898E5D0;
      }
      goto L_0898E5AC;
    }
L_0898E5AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E5E4;
      }
      goto L_0898E5B4;
    }
L_0898E5B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E5F4;
      }
      goto L_0898E5BC;
    }
L_0898E5BC:
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17286u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898E5F4;
      }
      goto L_0898E5D0;
    }
L_0898E5D0:
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17295u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0898E5F4;
      }
      goto L_0898E5E4;
    }
L_0898E5E4:
    ctx.gpr[4] = (17219u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17304u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0898E5F4;
L_0898E5F4:
    ctx.gpr[9] = (16640u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[9] = (15786u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[9] = (ctx.gpr[9] | 43691u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[9] = (16704u << 16u);
    ctx.gpr[6] = (0u | 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[7] = (0u | 158u);
    ctx.gpr[31] = (0x0898E630u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 339u, 0x08A264E0u>(ctx, &aot_mem) && ctx.pc == 0x0898E630u) goto L_0898E630;
    return;
L_0898E630:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16405)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E648;
      }
      goto L_0898E640;
    }
L_0898E640:
    ctx.gpr[31] = (0x0898E648u);
    // nop
    goto L_0898FE28;
L_0898E648:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1904));
    ctx.gpr[31] = (0x0898E654u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 872u, 0x08AD378Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E654u) goto L_0898E654;
    return;
L_0898E654:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E66C;
      }
      goto L_0898E664;
    }
L_0898E664:
    ctx.gpr[31] = (0x0898E66Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0097_entry, 97u, 35u, 0x0898838Cu>(ctx, &aot_mem) && ctx.pc == 0x0898E66Cu) goto L_0898E66C;
    return;
L_0898E66C:
    ctx.gpr[31] = (0x0898E674u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 12u, 0x089381ACu>(ctx, &aot_mem) && ctx.pc == 0x0898E674u) goto L_0898E674;
    return;
L_0898E674:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[6] = (50944u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5168), ctx.gpr[5]);
    goto L_0898E690;
L_0898E690:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1932)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1936)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1940)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1944)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1948)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1952)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1956)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1960)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1964)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1968)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1972)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1976)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1980)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1984)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1988)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1992)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2000));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898E6D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[31] = (0x0898E710u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E710u) goto L_0898E710;
    return;
L_0898E710:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0898E71Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E71Cu) goto L_0898E71C;
    return;
L_0898E71C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0898E728u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x0898E728u) goto L_0898E728;
    return;
L_0898E728:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7200)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898E750;
      }
      goto L_0898E738;
    }
L_0898E738:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-9536)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898E758;
      }
      goto L_0898E748;
    }
L_0898E748:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EA50;
      }
      goto L_0898E750;
    }
L_0898E750:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FA44;
      }
      goto L_0898E758;
    }
L_0898E758:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1024)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898EA50;
      }
      goto L_0898E768;
    }
L_0898E768:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6432)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898EA50;
      }
      goto L_0898E778;
    }
L_0898E778:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7116)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E794;
      }
      goto L_0898E788;
    }
L_0898E788:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7116), ctx.gpr[4]);
    goto L_0898E794;
L_0898E794:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E7B0;
      }
      goto L_0898E7A4;
    }
L_0898E7A4:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7912), ctx.gpr[4]);
    goto L_0898E7B0;
L_0898E7B0:
    ctx.gpr[31] = (0x0898E7B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898E7B8u) goto L_0898E7B8;
    return;
L_0898E7B8:
    ctx.gpr[31] = (0x0898E7C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898E7C0u) goto L_0898E7C0;
    return;
L_0898E7C0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898E7DCu);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E7DCu) goto L_0898E7DC;
    return;
L_0898E7DC:
    ctx.gpr[31] = (0x0898E7E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A55110u>(ctx, &aot_mem) && ctx.pc == 0x0898E7E4u) goto L_0898E7E4;
    return;
L_0898E7E4:
    ctx.gpr[31] = (0x0898E7ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898E7ECu) goto L_0898E7EC;
    return;
L_0898E7EC:
    ctx.gpr[31] = (0x0898E7F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898E7F4u) goto L_0898E7F4;
    return;
L_0898E7F4:
    ctx.gpr[31] = (0x0898E7FCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898E7FCu) goto L_0898E7FC;
    return;
L_0898E7FC:
    ctx.gpr[31] = (0x0898E804u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898E804u) goto L_0898E804;
    return;
L_0898E804:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x0898E81Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E81Cu) goto L_0898E81C;
    return;
L_0898E81C:
    ctx.gpr[31] = (0x0898E824u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898E824u) goto L_0898E824;
    return;
L_0898E824:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(117)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E8D0;
      }
      goto L_0898E838;
    }
L_0898E838:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-24871), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-25812)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0898E860;
      }
      goto L_0898E854;
    }
L_0898E854:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(679)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898EA48;
      }
      goto L_0898E860;
    }
L_0898E860:
    ctx.gpr[4] = (17362u << 16u);
    ctx.gpr[31] = (0x0898E86Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E86Cu) goto L_0898E86C;
    return;
L_0898E86C:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898E888u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898E888u) goto L_0898E888;
    return;
L_0898E888:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898E8A0u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E8A0u) goto L_0898E8A0;
    return;
L_0898E8A0:
    ctx.gpr[31] = (0x0898E8A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E8A8u) goto L_0898E8A8;
    return;
L_0898E8A8:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (17241u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x0898E8C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9536));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898E8C8u) goto L_0898E8C8;
    return;
L_0898E8C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EA48;
      }
      goto L_0898E8D0;
    }
L_0898E8D0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24871)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898E8E8;
      }
      goto L_0898E8E0;
    }
L_0898E8E0:
    ctx.gpr[4] = (2277u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-9536), static_cast<std::uint16_t>(0u));
    goto L_0898E8E8;
L_0898E8E8:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-24871), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x0898E90Cu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E90Cu) goto L_0898E90C;
    return;
L_0898E90C:
    ctx.gpr[31] = (0x0898E914u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898E914u) goto L_0898E914;
    return;
L_0898E914:
    ctx.gpr[31] = (0x0898E91Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x0898E91Cu) goto L_0898E91C;
    return;
L_0898E91C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898E934u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E934u) goto L_0898E934;
    return;
L_0898E934:
    ctx.gpr[31] = (0x0898E93Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E93Cu) goto L_0898E93C;
    return;
L_0898E93C:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x0898E958u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898E958u) goto L_0898E958;
    return;
L_0898E958:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898E964u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 608u, 0x08ADA7D8u>(ctx, &aot_mem) && ctx.pc == 0x0898E964u) goto L_0898E964;
    return;
L_0898E964:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898EA10;
      }
      goto L_0898E970;
    }
L_0898E970:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7083)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898EA10;
      }
      goto L_0898E97C;
    }
L_0898E97C:
    ctx.gpr[31] = (0x0898E984u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x0898E984u) goto L_0898E984;
    return;
L_0898E984:
    ctx.gpr[31] = (0x0898E98Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898E98Cu) goto L_0898E98C;
    return;
L_0898E98C:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[31] = (0x0898E9B0u);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898E9B0u) goto L_0898E9B0;
    return;
L_0898E9B0:
    ctx.gpr[31] = (0x0898E9B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x0898E9B8u) goto L_0898E9B8;
    return;
L_0898E9B8:
    ctx.gpr[31] = (0x0898E9C0u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898E9C0u) goto L_0898E9C0;
    return;
L_0898E9C0:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[31] = (0x0898E9CCu);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x0898E9CCu) goto L_0898E9CC;
    return;
L_0898E9CC:
    ctx.gpr[31] = (0x0898E9D4u);
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898E9D4u) goto L_0898E9D4;
    return;
L_0898E9D4:
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (17245u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[28];
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9536));
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0898EA08u);
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898EA08u) goto L_0898EA08;
    return;
L_0898EA08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EA3C;
      }
      goto L_0898EA10;
    }
L_0898EA10:
    ctx.gpr[4] = (17379u << 16u);
    ctx.gpr[31] = (0x0898EA1Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898EA1Cu) goto L_0898EA1C;
    return;
L_0898EA1C:
    ctx.gpr[4] = (17264u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (17245u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x0898EA3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9536));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898EA3Cu) goto L_0898EA3C;
    return;
L_0898EA3C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6843), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0898EA48;
L_0898EA48:
    ctx.gpr[31] = (0x0898EA50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898EA50u) goto L_0898EA50;
    return;
L_0898EA50:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898ED3C;
      }
      goto L_0898EA60;
    }
L_0898EA60:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EA64;
L_0898EA64:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898ED28;
      }
      goto L_0898EA8C;
    }
L_0898EA8C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(29)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898ED28;
      }
      goto L_0898EAB4;
    }
L_0898EAB4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23232));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0898EAE8u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898EAE8u) goto L_0898EAE8;
    return;
L_0898EAE8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x0898EB00u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898EB00u) goto L_0898EB00;
    return;
L_0898EB00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EB1C;
      }
      goto L_0898EB0C;
    }
L_0898EB0C:
    ctx.gpr[31] = (0x0898EB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 203u, 0x08A54FCCu>(ctx, &aot_mem) && ctx.pc == 0x0898EB14u) goto L_0898EB14;
    return;
L_0898EB14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EB28;
      }
      goto L_0898EB1C;
    }
L_0898EB1C:
    ctx.gpr[31] = (0x0898EB24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898EB24u) goto L_0898EB24;
    return;
L_0898EB24:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EB28;
L_0898EB28:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(30)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EB60;
      }
      goto L_0898EB50;
    }
L_0898EB50:
    ctx.gpr[31] = (0x0898EB58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0898EB58u) goto L_0898EB58;
    return;
L_0898EB58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EB6C;
      }
      goto L_0898EB60;
    }
L_0898EB60:
    ctx.gpr[31] = (0x0898EB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898EB68u) goto L_0898EB68;
    return;
L_0898EB68:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EB6C;
L_0898EB6C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EBA4;
      }
      goto L_0898EB94;
    }
L_0898EB94:
    ctx.gpr[31] = (0x0898EB9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898EB9Cu) goto L_0898EB9C;
    return;
L_0898EB9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EBB0;
      }
      goto L_0898EBA4;
    }
L_0898EBA4:
    ctx.gpr[31] = (0x0898EBACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 206u, 0x08A55018u>(ctx, &aot_mem) && ctx.pc == 0x0898EBACu) goto L_0898EBAC;
    return;
L_0898EBAC:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EBB0;
L_0898EBB0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0898EBD4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EBD4u) goto L_0898EBD4;
    return;
L_0898EBD4:
    ctx.gpr[31] = (0x0898EBDCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898EBDCu) goto L_0898EBDC;
    return;
L_0898EBDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EBF8;
      }
      goto L_0898EBE8;
    }
L_0898EBE8:
    ctx.gpr[31] = (0x0898EBF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 220u, 0x08A550ECu>(ctx, &aot_mem) && ctx.pc == 0x0898EBF0u) goto L_0898EBF0;
    return;
L_0898EBF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EC04;
      }
      goto L_0898EBF8;
    }
L_0898EBF8:
    ctx.gpr[31] = (0x0898EC00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898EC00u) goto L_0898EC00;
    return;
L_0898EC00:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EC04;
L_0898EC04:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x0898EC34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 222u, 0x08A55110u>(ctx, &aot_mem) && ctx.pc == 0x0898EC34u) goto L_0898EC34;
    return;
L_0898EC34:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(15)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EC54;
      }
      goto L_0898EC44;
    }
L_0898EC44:
    ctx.gpr[31] = (0x0898EC4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 223u, 0x08A5513Cu>(ctx, &aot_mem) && ctx.pc == 0x0898EC4Cu) goto L_0898EC4C;
    return;
L_0898EC4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EC60;
      }
      goto L_0898EC54;
    }
L_0898EC54:
    ctx.gpr[31] = (0x0898EC5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55150u>(ctx, &aot_mem) && ctx.pc == 0x0898EC5Cu) goto L_0898EC5C;
    return;
L_0898EC5C:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898EC60;
L_0898EC60:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2274u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23232));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EC98;
      }
      goto L_0898EC88;
    }
L_0898EC88:
    ctx.gpr[31] = (0x0898EC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898EC90u) goto L_0898EC90;
    return;
L_0898EC90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898ECA4;
      }
      goto L_0898EC98;
    }
L_0898EC98:
    ctx.gpr[31] = (0x0898ECA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 226u, 0x08A55174u>(ctx, &aot_mem) && ctx.pc == 0x0898ECA0u) goto L_0898ECA0;
    return;
L_0898ECA0:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    goto L_0898ECA4;
L_0898ECA4:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(23232));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x0898ECD0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898ECD0u) goto L_0898ECD0;
    return;
L_0898ECD0:
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[4] = (17376u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(44));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x0898ED28u);
    ctx.fpr[13] = ctx.fpr[16] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898ED28u) goto L_0898ED28;
    return;
L_0898ED28:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
      if (branch_taken) {
          goto L_0898EA64;
      }
      goto L_0898ED3C;
    }
L_0898ED3C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EE64;
      }
      goto L_0898ED4C;
    }
L_0898ED4C:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    goto L_0898ED50;
L_0898ED50:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898EE50;
      }
      goto L_0898ED70;
    }
L_0898ED70:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898EE50;
      }
      goto L_0898ED90;
    }
L_0898ED90:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898EDFC;
      }
      goto L_0898EDB0;
    }
L_0898EDB0:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0898EDE0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0898EDE0u) goto L_0898EDE0;
    return;
L_0898EDE0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0898EDF4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x0898EDF4u) goto L_0898EDF4;
    return;
L_0898EDF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EE50;
      }
      goto L_0898EDFC;
    }
L_0898EDFC:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22688));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22304));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0898EE3Cu);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x0898EE3Cu) goto L_0898EE3C;
    return;
L_0898EE3C:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(20));
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0898EE50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 920u, 0x08AD3BD4u>(ctx, &aot_mem) && ctx.pc == 0x0898EE50u) goto L_0898EE50;
    return;
L_0898EE50:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_0898ED50;
      }
      goto L_0898EE64;
    }
L_0898EE64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(1536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EFE8;
      }
      goto L_0898EE78;
    }
L_0898EE78:
    ctx.gpr[31] = (0x0898EE80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898EE80u) goto L_0898EE80;
    return;
L_0898EE80:
    ctx.gpr[31] = (0x0898EE88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898EE88u) goto L_0898EE88;
    return;
L_0898EE88:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898EEA4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898EEA4u) goto L_0898EEA4;
    return;
L_0898EEA4:
    ctx.gpr[31] = (0x0898EEACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898EEACu) goto L_0898EEAC;
    return;
L_0898EEAC:
    ctx.gpr[31] = (0x0898EEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898EEB4u) goto L_0898EEB4;
    return;
L_0898EEB4:
    ctx.gpr[4] = (17430u << 16u);
    ctx.gpr[31] = (0x0898EEC0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898EEC0u) goto L_0898EEC0;
    return;
L_0898EEC0:
    ctx.gpr[31] = (0x0898EEC8u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898EEC8u) goto L_0898EEC8;
    return;
L_0898EEC8:
    ctx.gpr[31] = (0x0898EED0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898EED0u) goto L_0898EED0;
    return;
L_0898EED0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898EEF0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898EEF0u) goto L_0898EEF0;
    return;
L_0898EEF0:
    ctx.gpr[31] = (0x0898EEF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898EEF8u) goto L_0898EEF8;
    return;
L_0898EEF8:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 106u);
    ctx.gpr[31] = (0x0898EF10u);
    ctx.gpr[7] = (0u | 164u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898EF10u) goto L_0898EF10;
    return;
L_0898EF10:
    ctx.gpr[31] = (0x0898EF18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898EF18u) goto L_0898EF18;
    return;
L_0898EF18:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x0898EF24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4832));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 608u, 0x08ADA7D8u>(ctx, &aot_mem) && ctx.pc == 0x0898EF24u) goto L_0898EF24;
    return;
L_0898EF24:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898EFC4;
      }
      goto L_0898EF30;
    }
L_0898EF30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7083)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898EFC4;
      }
      goto L_0898EF3C;
    }
L_0898EF3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7940)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898EFC4;
      }
      goto L_0898EF4C;
    }
L_0898EF4C:
    ctx.gpr[31] = (0x0898EF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x0898EF54u) goto L_0898EF54;
    return;
L_0898EF54:
    ctx.gpr[31] = (0x0898EF5Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898EF5Cu) goto L_0898EF5C;
    return;
L_0898EF5C:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[31] = (0x0898EF70u);
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 497u, 0x08987038u>(ctx, &aot_mem) && ctx.pc == 0x0898EF70u) goto L_0898EF70;
    return;
L_0898EF70:
    ctx.gpr[31] = (0x0898EF78u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 505u, 0x08987098u>(ctx, &aot_mem) && ctx.pc == 0x0898EF78u) goto L_0898EF78;
    return;
L_0898EF78:
    ctx.fpr[13] = ctx.fpr[0] + ctx.fpr[22];
    ctx.gpr[4] = (17385u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17220u << 16u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1536));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0898EFBCu);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898EFBCu) goto L_0898EFBC;
    return;
L_0898EFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898EFE8;
      }
      goto L_0898EFC4;
    }
L_0898EFC4:
    ctx.gpr[6] = (17264u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[6] = (17220u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898EFE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1536));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898EFE8u) goto L_0898EFE8;
    return;
L_0898EFE8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898F0E4;
      }
      goto L_0898EFFC;
    }
L_0898EFFC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F0E4;
      }
      goto L_0898F00C;
    }
L_0898F00C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2048)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F0E4;
      }
      goto L_0898F020;
    }
L_0898F020:
    ctx.gpr[31] = (0x0898F028u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898F028u) goto L_0898F028;
    return;
L_0898F028:
    ctx.gpr[31] = (0x0898F030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898F030u) goto L_0898F030;
    return;
L_0898F030:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898F04Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898F04Cu) goto L_0898F04C;
    return;
L_0898F04C:
    ctx.gpr[31] = (0x0898F054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898F054u) goto L_0898F054;
    return;
L_0898F054:
    ctx.gpr[31] = (0x0898F05Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898F05Cu) goto L_0898F05C;
    return;
L_0898F05C:
    ctx.gpr[4] = (17425u << 16u);
    ctx.gpr[31] = (0x0898F068u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F068u) goto L_0898F068;
    return;
L_0898F068:
    ctx.gpr[31] = (0x0898F070u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898F070u) goto L_0898F070;
    return;
L_0898F070:
    ctx.gpr[31] = (0x0898F078u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898F078u) goto L_0898F078;
    return;
L_0898F078:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898F098u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F098u) goto L_0898F098;
    return;
L_0898F098:
    ctx.gpr[31] = (0x0898F0A0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F0A0u) goto L_0898F0A0;
    return;
L_0898F0A0:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 143u);
    ctx.gpr[31] = (0x0898F0B8u);
    ctx.gpr[7] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F0B8u) goto L_0898F0B8;
    return;
L_0898F0B8:
    ctx.gpr[31] = (0x0898F0C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898F0C0u) goto L_0898F0C0;
    return;
L_0898F0C0:
    ctx.gpr[6] = (17264u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[6] = (17220u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0898F0E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2048));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898F0E4u) goto L_0898F0E4;
    return;
L_0898F0E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6456)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F1C0;
      }
      goto L_0898F100;
    }
L_0898F100:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F160;
      }
      goto L_0898F134;
    }
L_0898F134:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F198;
      }
      goto L_0898F160;
    }
L_0898F160:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898F198;
L_0898F198:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0898F1B0;
      }
      goto L_0898F1A4;
    }
L_0898F1A4:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0898F1B0;
L_0898F1B0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6456)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898F1C0;
L_0898F1C0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2560)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F534;
      }
      goto L_0898F1D4;
    }
L_0898F1D4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6456)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898F534;
      }
      goto L_0898F1EC;
    }
L_0898F1EC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-25490))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898F230;
      }
      goto L_0898F200;
    }
L_0898F200:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898F40C;
      }
      goto L_0898F208;
    }
L_0898F208:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0898F248;
      }
      goto L_0898F210;
    }
L_0898F210:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-25490), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17342u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F40C;
      }
      goto L_0898F230;
    }
L_0898F230:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898F2C8;
      }
      goto L_0898F238;
    }
L_0898F238:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F39C;
      }
      goto L_0898F240;
    }
L_0898F240:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F40C;
      }
      goto L_0898F248;
    }
L_0898F248:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6460)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F2AC;
      }
      goto L_0898F268;
    }
L_0898F268:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6460)));
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F29C;
      }
      goto L_0898F290;
    }
L_0898F290:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898F29C;
L_0898F29C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6460)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F2C0;
      }
      goto L_0898F2AC;
    }
L_0898F2AC:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-25490), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6462), static_cast<std::uint16_t>(0u));
    goto L_0898F2C0;
L_0898F2C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F40C;
      }
      goto L_0898F2C8;
    }
L_0898F2C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6462))))));
      if (branch_taken) {
          goto L_0898F330;
      }
      goto L_0898F304;
    }
L_0898F304:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F36C;
      }
      goto L_0898F330;
    }
L_0898F330:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[6] = (20224u << 16u);
    ctx.gpr[7] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    goto L_0898F36C;
L_0898F36C:
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6462), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-6462))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 1501 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F394;
      }
      goto L_0898F388;
    }
L_0898F388:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-25490), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0898F394;
L_0898F394:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898F40C;
      }
      goto L_0898F39C;
    }
L_0898F39C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6460)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F3D0;
      }
      goto L_0898F3C4;
    }
L_0898F3C4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0898F3D0;
L_0898F3D0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6460)));
    ctx.gpr[5] = (50110u << 16u);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6460), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F40C;
      }
      goto L_0898F3F0;
    }
L_0898F3F0:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-25490), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898F40C;
L_0898F40C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          goto L_0898F534;
      }
      goto L_0898F420;
    }
L_0898F420:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F534;
      }
      goto L_0898F430;
    }
L_0898F430:
    ctx.gpr[31] = (0x0898F438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898F438u) goto L_0898F438;
    return;
L_0898F438:
    ctx.gpr[31] = (0x0898F440u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898F440u) goto L_0898F440;
    return;
L_0898F440:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898F45Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898F45Cu) goto L_0898F45C;
    return;
L_0898F45C:
    ctx.gpr[31] = (0x0898F464u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x0898F464u) goto L_0898F464;
    return;
L_0898F464:
    ctx.gpr[31] = (0x0898F46Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898F46Cu) goto L_0898F46C;
    return;
L_0898F46C:
    ctx.gpr[4] = (17420u << 16u);
    ctx.gpr[31] = (0x0898F478u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F478u) goto L_0898F478;
    return;
L_0898F478:
    ctx.gpr[31] = (0x0898F480u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898F480u) goto L_0898F480;
    return;
L_0898F480:
    ctx.gpr[31] = (0x0898F488u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898F488u) goto L_0898F488;
    return;
L_0898F488:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-24908)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0898F4A8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F4A8u) goto L_0898F4A8;
    return;
L_0898F4A8:
    ctx.gpr[31] = (0x0898F4B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F4B0u) goto L_0898F4B0;
    return;
L_0898F4B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898F4C8u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F4C8u) goto L_0898F4C8;
    return;
L_0898F4C8:
    ctx.gpr[31] = (0x0898F4D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898F4D0u) goto L_0898F4D0;
    return;
L_0898F4D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[15];
    ctx.gpr[6] = (17234u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[7] = (17264u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2560));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.gpr[31] = (0x0898F534u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x0898F534u) goto L_0898F534;
    return;
L_0898F534:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FA34;
      }
      goto L_0898F548;
    }
L_0898F548:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F5A0;
      }
      goto L_0898F568;
    }
L_0898F568:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7912), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6424), 0u);
    ctx.gpr[4] = (49776u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9600));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898FA44;
      }
      goto L_0898F5A0;
    }
L_0898F5A0:
    ctx.gpr[31] = (0x0898F5A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x0898F5A8u) goto L_0898F5A8;
    return;
L_0898F5A8:
    ctx.gpr[31] = (0x0898F5B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x0898F5B0u) goto L_0898F5B0;
    return;
L_0898F5B0:
    ctx.gpr[31] = (0x0898F5B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898F5B8u) goto L_0898F5B8;
    return;
L_0898F5B8:
    ctx.gpr[31] = (0x0898F5C0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 209u, 0x08A5505Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F5C0u) goto L_0898F5C0;
    return;
L_0898F5C0:
    ctx.gpr[31] = (0x0898F5C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 207u, 0x08A55028u>(ctx, &aot_mem) && ctx.pc == 0x0898F5C8u) goto L_0898F5C8;
    return;
L_0898F5C8:
    ctx.gpr[31] = (0x0898F5D0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898F5D0u) goto L_0898F5D0;
    return;
L_0898F5D0:
    ctx.gpr[4] = (17392u << 16u);
    ctx.gpr[31] = (0x0898F5DCu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 214u, 0x08A5509Cu>(ctx, &aot_mem) && ctx.pc == 0x0898F5DCu) goto L_0898F5DC;
    return;
L_0898F5DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25764)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898F610;
      }
      goto L_0898F5EC;
    }
L_0898F5EC:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898F608u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898F608u) goto L_0898F608;
    return;
L_0898F608:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0898F630;
      }
      goto L_0898F610;
    }
L_0898F610:
    ctx.gpr[4] = (16120u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46473u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16263u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 11010u);
    ctx.gpr[31] = (0x0898F62Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898F62Cu) goto L_0898F62C;
    return;
L_0898F62C:
    ctx.gpr[4] = (2229u << 16u);
    goto L_0898F630;
L_0898F630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9600));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0898F834;
      }
      goto L_0898F65C;
    }
L_0898F65C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9600));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F6CC;
      }
      goto L_0898F6A0;
    }
L_0898F6A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F704;
      }
      goto L_0898F6CC;
    }
L_0898F6CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898F704;
L_0898F704:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_0898F71C;
      }
      goto L_0898F710;
    }
L_0898F710:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_0898F71C;
L_0898F71C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[8] = (17530u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-9568));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9600));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898F7A4;
      }
      goto L_0898F778;
    }
L_0898F778:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898F7E0;
      }
      goto L_0898F7A4;
    }
L_0898F7A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898F7E0;
L_0898F7E0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898F7F8;
      }
      goto L_0898F7EC;
    }
L_0898F7EC:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898F7F8;
L_0898F7F8:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (17279u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F99C;
      }
      goto L_0898F81C;
    }
L_0898F81C:
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F99C;
      }
      goto L_0898F834;
    }
L_0898F834:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0898F958;
      }
      goto L_0898F860;
    }
L_0898F860:
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0898F880u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 137u, 0x088ED164u>(ctx, &aot_mem) && ctx.pc == 0x0898F880u) goto L_0898F880;
    return;
L_0898F880:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F958;
      }
      goto L_0898F88C;
    }
L_0898F88C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898F8F8;
      }
      goto L_0898F8CC;
    }
L_0898F8CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0898F930;
      }
      goto L_0898F8F8;
    }
L_0898F8F8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_0898F930;
L_0898F930:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_0898F948;
      }
      goto L_0898F93C;
    }
L_0898F93C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_0898F948;
L_0898F948:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898F958;
L_0898F958:
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_0898F99C;
      }
      goto L_0898F978;
    }
L_0898F978:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9568));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(512), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898F99C;
L_0898F99C:
    ctx.gpr[16] = (0u | 255u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(92));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[7] = (0u | 40u);
    ctx.gpr[31] = (0x0898F9BCu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F9BCu) goto L_0898F9BC;
    return;
L_0898F9BC:
    ctx.gpr[31] = (0x0898F9C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898F9C4u) goto L_0898F9C4;
    return;
L_0898F9C4:
    ctx.gpr[31] = (0x0898F9CCu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898F9CCu) goto L_0898F9CC;
    return;
L_0898F9CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x0898F9E4u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F9E4u) goto L_0898F9E4;
    return;
L_0898F9E4:
    ctx.gpr[31] = (0x0898F9ECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 233u, 0x08A551DCu>(ctx, &aot_mem) && ctx.pc == 0x0898F9ECu) goto L_0898F9EC;
    return;
L_0898F9EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 220u);
    ctx.gpr[6] = (0u | 172u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x0898FA04u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898FA04u) goto L_0898FA04;
    return;
L_0898FA04:
    ctx.gpr[31] = (0x0898FA0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898FA0Cu) goto L_0898FA0C;
    return;
L_0898FA0C:
    ctx.gpr[5] = (17387u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4368));
    ctx.gpr[5] = (17286u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(512));
    ctx.gpr[31] = (0x0898FA2Cu);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 79u, 0x08A546D4u>(ctx, &aot_mem) && ctx.pc == 0x0898FA2Cu) goto L_0898FA2C;
    return;
L_0898FA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FA44;
      }
      goto L_0898FA34;
    }
L_0898FA34:
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4624));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898FA44;
L_0898FA44:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FA74:
    ctx.gpr[7] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
      if (branch_taken) {
          goto L_0898FABC;
      }
      goto L_0898FA90;
    }
L_0898FA90:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898FB28;
      }
      goto L_0898FA98;
    }
L_0898FA98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_0898FAD8;
      }
      goto L_0898FAA0;
    }
L_0898FAA0:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6792)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6344)));
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6340)));
      if (branch_taken) {
          goto L_0898FB28;
      }
      goto L_0898FABC;
    }
L_0898FABC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FAF4;
      }
      goto L_0898FAC8;
    }
L_0898FAC8:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FB10;
      }
      goto L_0898FAD0;
    }
L_0898FAD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FB28;
      }
      goto L_0898FAD8;
    }
L_0898FAD8:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6364)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6372)));
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6368)));
      if (branch_taken) {
          goto L_0898FB28;
      }
      goto L_0898FAF4;
    }
L_0898FAF4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6788)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6356)));
    ctx.gpr[6] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6352)));
      if (branch_taken) {
          goto L_0898FB28;
      }
      goto L_0898FB10;
    }
L_0898FB10:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6324)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6332)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6328)));
    goto L_0898FB28;
L_0898FB28:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FB70;
      }
      goto L_0898FB30;
    }
L_0898FB30:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0898FB54;
      }
      goto L_0898FB3C;
    }
L_0898FB3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898FB70;
      }
      goto L_0898FB44;
    }
L_0898FB44:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0898FB64;
      }
      goto L_0898FB4C;
    }
L_0898FB4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FB68;
      }
      goto L_0898FB54;
    }
L_0898FB54:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0898FB68;
      }
      goto L_0898FB5C;
    }
L_0898FB5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FB70;
      }
      goto L_0898FB64;
    }
L_0898FB64:
    ctx.gpr[6] = (0u | 0u);
    goto L_0898FB68;
L_0898FB68:
    ctx.gpr[8] = (0u | 2u);
    ctx.gpr[7] = (0u | 5u);
    goto L_0898FB70;
L_0898FB70:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_0898FD58;
      }
      goto L_0898FB78;
    }
L_0898FB78:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    ctx.gpr[9] = (2230u << 16u);
      if (branch_taken) {
          goto L_0898FD58;
      }
      goto L_0898FB80;
    }
L_0898FB80:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[9] = (16968u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 2 ? 1u : 0u);
    ctx.gpr[9] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[9] = (20224u << 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[9]);
      if (branch_taken) {
          goto L_0898FBB4;
      }
      goto L_0898FBA4;
    }
L_0898FBA4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0898FD08;
      }
      goto L_0898FBAC;
    }
L_0898FBAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FCDC;
      }
      goto L_0898FBB4;
    }
L_0898FBB4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FBD0;
      }
      goto L_0898FBC0;
    }
L_0898FBC0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FC58;
      }
      goto L_0898FBC8;
    }
L_0898FBC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FD08;
      }
      goto L_0898FBD0;
    }
L_0898FBD0:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FC00;
      }
      goto L_0898FBE8;
    }
L_0898FBE8:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898FC20;
      }
      goto L_0898FC00;
    }
L_0898FC00:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_0898FC20;
L_0898FC20:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FC4C;
      }
      goto L_0898FC38;
    }
L_0898FC38:
    ctx.gpr[5] = (17530u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1000u);
    ctx.gpr[8] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    goto L_0898FC4C;
L_0898FC4C:
    ctx.fpr[0] = ctx.fpr[13] / ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_0898FD08;
      }
      goto L_0898FC58;
    }
L_0898FC58:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FC88;
      }
      goto L_0898FC70;
    }
L_0898FC70:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898FCA8;
      }
      goto L_0898FC88;
    }
L_0898FC88:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[5]);
    goto L_0898FCA8;
L_0898FCA8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FCD0;
      }
      goto L_0898FCC0;
    }
L_0898FCC0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898FCD0;
L_0898FCD0:
    ctx.fpr[0] = ctx.fpr[13] / ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
      if (branch_taken) {
          goto L_0898FD08;
      }
      goto L_0898FCDC;
    }
L_0898FCDC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (17948u << 16u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (0u | 1000u);
      if (branch_taken) {
          goto L_0898FD08;
      }
      goto L_0898FD00;
    }
L_0898FD00:
    ctx.gpr[8] = (0u | 3u);
    ctx.gpr[6] = (0u | 3000u);
    goto L_0898FD08;
L_0898FD08:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FD38;
      }
      goto L_0898FD20;
    }
L_0898FD20:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898FD58;
      }
      goto L_0898FD38;
    }
L_0898FD38:
    ctx.fpr[13] = ctx.fpr[17] / ctx.fpr[16];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    goto L_0898FD58;
L_0898FD58:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FD90;
      }
      goto L_0898FD64;
    }
L_0898FD64:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0898FDF8;
      }
      goto L_0898FD6C;
    }
L_0898FD6C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0898FDA8;
      }
      goto L_0898FD74;
    }
L_0898FD74:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6792), ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6344), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6340), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0898FDF8;
      }
      goto L_0898FD90;
    }
L_0898FD90:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0898FDC4;
      }
      goto L_0898FD98;
    }
L_0898FD98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FDE0;
      }
      goto L_0898FDA0;
    }
L_0898FDA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0898FDF8;
      }
      goto L_0898FDA8;
    }
L_0898FDA8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6364), ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6372), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6368), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0898FDF8;
      }
      goto L_0898FDC4;
    }
L_0898FDC4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6788), ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6356), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6352), ctx.gpr[6]);
      if (branch_taken) {
          goto L_0898FDF8;
      }
      goto L_0898FDE0;
    }
L_0898FDE0:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6324), ctx.gpr[8]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6332), ctx.gpr[7]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6328), ctx.gpr[6]);
    goto L_0898FDF8;
L_0898FDF8:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FE0C;
      }
      goto L_0898FE08;
    }
L_0898FE08:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0898FE0C;
L_0898FE0C:
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0898FE20;
      }
      goto L_0898FE1C;
    }
L_0898FE1C:
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_0898FE20;
L_0898FE20:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0898FE28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
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
    ctx.gpr[31] = (0x0898FE80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24852));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0898FE80u) goto L_0898FE80;
    return;
L_0898FE80:
    ctx.gpr[31] = (0x0898FE88u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x0898FE88u) goto L_0898FE88;
    return;
L_0898FE88:
    ctx.gpr[4] = (16066u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36700u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16194u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36700u);
    ctx.gpr[31] = (0x0898FEA4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x0898FEA4u) goto L_0898FEA4;
    return;
L_0898FEA4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x0898FEBCu);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x0898FEBCu) goto L_0898FEBC;
    return;
L_0898FEBC:
    ctx.gpr[31] = (0x0898FEC4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x0898FEC4u) goto L_0898FEC4;
    return;
L_0898FEC4:
    ctx.gpr[31] = (0x0898FECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 208u, 0x08A55044u>(ctx, &aot_mem) && ctx.pc == 0x0898FECCu) goto L_0898FECC;
    return;
L_0898FECC:
    ctx.gpr[31] = (0x0898FED4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 232u, 0x08A551CCu>(ctx, &aot_mem) && ctx.pc == 0x0898FED4u) goto L_0898FED4;
    return;
L_0898FED4:
    ctx.gpr[31] = (0x0898FEDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x0898FEDCu) goto L_0898FEDC;
    return;
L_0898FEDC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24868)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[22] = (0u | 120u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(601) ? 1u : 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-24856)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_0898FF84;
      }
      goto L_0898FF0C;
    }
L_0898FF0C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24860)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24860), ctx.gpr[9]);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < 8 ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[10] >> 30u);
    ctx.gpr[10] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 2u));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-24864)));
      if (branch_taken) {
          goto L_0898FF4C;
      }
      goto L_0898FF48;
    }
L_0898FF48:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-24860), 0u);
    goto L_0898FF4C;
L_0898FF4C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24856), ctx.gpr[7]);
      if (branch_taken) {
          goto L_0898FF64;
      }
      goto L_0898FF5C;
    }
L_0898FF5C:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24856), 0u);
    ctx.gpr[7] = (0u | 0u);
    goto L_0898FF64;
L_0898FF64:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24868), ctx.gpr[5]);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898FF7C;
      }
      goto L_0898FF74;
    }
L_0898FF74:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-24864), 0u);
      if (branch_taken) {
          goto L_0898FF84;
      }
      goto L_0898FF7C;
    }
L_0898FF7C:
    ctx.gpr[4] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-24864), ctx.gpr[4]);
    goto L_0898FF84;
L_0898FF84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0898FFD0;
      }
      goto L_0898FF94;
    }
L_0898FF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0898FFD0;
      }
      goto L_0898FFBC;
    }
L_0898FFBC:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24856), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0898FFD0;
      }
      goto L_0898FFCC;
    }
L_0898FFCC:
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24856), 0u);
    goto L_0898FFD0;
L_0898FFD0:
    ctx.gpr[31] = (0x0898FFD8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x0898FFD8u) goto L_0898FFD8;
    return;
L_0898FFD8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (17170u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0099_entry, 99u, 456u, 0x08991A40u>(ctx, &aot_mem); return;
      }
      goto L_0898FFE8;
    }
L_0898FFE8:
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17136u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[23] = (2226u << 16u);
    ctx.gpr[5] = (17176u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.pc = 0x08990000u; return;
}

void recomp_unit_0098(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0098_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_98(Runtime &runtime) {
    runtime.register_generated_unit(98u, 0x0898C000u, 16384u, &recomp_unit_0098, &recomp_unit_0098_entry);
    runtime.register_function(0x0898C000u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C03Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C044u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C04Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C0F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C100u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C124u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C140u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C150u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C188u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C1F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C200u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C20Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C21Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C224u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C22Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C248u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C250u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C28Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C294u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C2FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C30Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C318u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C320u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C32Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C338u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C350u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C360u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C370u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C378u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C380u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C38Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C394u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C3E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C404u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C420u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C43Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C444u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C44Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C460u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C470u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C478u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C488u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C498u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C49Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C4ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C520u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C538u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C544u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C54Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C554u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C55Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C560u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C588u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C590u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C598u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C5E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C60Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C614u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C620u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C628u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C630u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C638u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C63Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C66Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C67Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C684u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C68Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C694u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C698u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C6DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C708u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C750u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C764u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C774u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C778u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C798u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C7D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C808u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C81Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C824u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C864u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C878u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C88Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C89Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C8F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C900u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C91Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C924u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C92Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C934u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C93Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C944u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C95Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C964u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C978u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C994u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898C9E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CA98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CABCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CACCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CAF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CB90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBE4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CBFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CC9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CCF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CD9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CDD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CE7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CEE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CF9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898CFE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D018u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D044u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D080u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D0D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D100u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D120u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D154u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D160u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D188u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D1C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D200u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D22Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D268u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D284u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D294u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D29Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D2FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D304u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D320u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D328u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D330u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D33Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D344u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D34Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D354u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D35Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D38Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D394u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D3FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D408u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D414u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D41Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D424u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D434u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D450u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D480u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D488u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D490u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D498u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D4F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D508u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D530u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D538u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D558u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D594u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D5FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D608u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D614u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D668u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D694u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D6E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D718u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D72Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D754u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D7D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D808u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D814u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D820u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D83Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D858u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D86Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D874u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D87Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D8FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D900u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D908u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D91Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D924u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D930u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D93Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D948u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D954u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D95Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D960u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D968u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D97Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D984u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D990u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D99Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898D9F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DA98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DACCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DAFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DB88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DBF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DC94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DCF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DD6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DDFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE40u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DE78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEB8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DEF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DF90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898DFF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E004u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E014u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E030u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E038u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E054u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E058u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E084u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E0F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E12Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E138u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E144u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E1CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E208u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E214u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E220u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E244u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E25Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E288u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E2E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E30Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E344u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E350u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E35Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E36Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E38Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E3F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E400u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E418u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E420u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E440u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E448u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E458u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E468u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E474u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E480u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E4D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E514u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E520u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E52Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E538u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E544u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E550u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E55Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E570u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E580u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E58Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E594u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5B4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E5F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E630u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E640u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E648u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E654u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E664u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E66Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E674u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E690u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E6D8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E710u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E71Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E728u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E738u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E748u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E750u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E758u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E768u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E778u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E788u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E794u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7F4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E7FCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E804u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E81Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E824u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E838u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E854u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E860u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E86Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E888u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E8E8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E90Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E914u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E91Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E934u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E93Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E958u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E964u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E970u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E97Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E984u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E98Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898E9D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EA8Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EAE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB14u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EB9Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBD4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EBF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC60u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EC98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ECD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898ED90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDB0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EDFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE50u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EE88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EED0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEF0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EEF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF18u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF24u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EF78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898EFFCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F00Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F020u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F028u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F030u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F04Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F054u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F05Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F068u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F070u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F078u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F098u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F0E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F100u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F134u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F160u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F198u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1D4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F1ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F200u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F208u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F210u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F230u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F238u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F240u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F248u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F268u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F290u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F29Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2ACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F2C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F304u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F330u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F36Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F388u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F394u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F39Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F3F0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F40Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F420u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F430u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F438u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F440u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F45Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F464u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F46Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F478u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F480u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F488u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F4D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F534u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F548u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F568u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5A8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5B0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5B8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5C0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5C8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5D0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5DCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F5ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F608u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F610u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F62Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F630u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F65Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6A0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F6CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F704u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F710u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F71Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F778u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7A4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7E0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F7F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F81Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F834u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F860u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F880u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F88Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F8F8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F930u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F93Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F948u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F958u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F978u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F99Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9BCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9C4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9CCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9E4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898F9ECu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA04u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA2Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA34u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FA98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FABCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FAF4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB10u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB30u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB3Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB44u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB54u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB68u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB78u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FB80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBACu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBB4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBC8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FBE8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC70u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FC88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCC0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FCDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD00u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD38u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD58u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD6Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD90u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FD98u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDA0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDA8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDE0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FDF8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE08u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE1Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE20u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE28u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE80u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FE88u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEA4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEC4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FECCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FED4u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FEDCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF0Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF48u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF4Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF5Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF64u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF74u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF7Cu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF84u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FF94u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFBCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFCCu, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFD0u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFD8u, &recomp_unit_0098, "recomp_unit_0098");
    runtime.register_function(0x0898FFE8u, &recomp_unit_0098, "recomp_unit_0098");
}
} // namespace psprecomp
