#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0064[4085] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 10, 11, 0, 12, 0, 0, 13, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 16,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 24, 0, 25, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 0, 0,
    0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 34, 0, 0, 0, 35, 0, 0, 0, 36, 37, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41, 0,
    0, 42, 0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 49, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0,
    0, 0, 53, 0, 0, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 58, 0, 0, 59, 0, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 65,
    0, 66, 0, 0, 0, 0, 67, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0,
    0, 80, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 84, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 85, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 92, 0, 93, 0, 0, 94, 95, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98,
    0, 0, 99, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 114, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 121, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 126, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0,
    147, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151, 0, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0,
    0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 167, 0, 168, 0, 0, 0, 0,
    0, 0, 169, 0, 0, 0, 170, 0, 0, 171, 0, 172, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0,
    178, 0, 0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 184, 0, 185, 0, 186, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 191, 0, 0, 0, 192, 0,
    193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 0,
    0, 202, 0, 0, 203, 0, 0, 204, 205, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 210, 0, 0,
    0, 0, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 217, 0,
    0, 0, 0, 0, 0, 218, 0, 0, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 0, 222,
    0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 231, 0, 0, 232, 0, 0, 233, 0,
    0, 234, 0, 0, 235, 0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 242, 0, 0, 0,
    243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 248,
    0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 257, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 261,
    0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 265, 0, 266, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270, 0, 271, 0, 0, 272, 0, 0,
    273, 0, 274, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0,
    0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 284, 0, 0, 0, 0, 285, 0,
    0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 292, 0, 0, 293, 0, 0, 0, 0, 0,
    294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0,
    0, 299, 0, 0, 0, 0, 0, 300, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 0, 305, 0, 306, 0, 0,
    0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312,
    0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 317, 0, 318, 0, 319, 0, 320, 321, 0, 322, 0, 0, 0, 0,
    323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 325, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 333, 0,
    0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 340, 0, 341, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 0, 352,
    0, 0, 0, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 356, 0, 0, 0, 357, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 370, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0,
    380, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0,
    388, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0,
    396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 0,
    404, 0, 0, 0, 405, 0, 0, 406, 0, 0, 407, 408, 0, 0, 409, 0, 410, 0, 411, 0, 412, 0, 0, 413, 0, 414, 0, 415, 0, 416, 0, 417,
    0, 0, 418, 0, 419, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0, 425, 0, 0, 426, 427, 0, 0, 428, 0, 0, 0, 429, 0, 0,
    0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 436, 0, 437, 0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 442, 0, 0, 0, 0, 443,
    0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 450, 0, 451,
    0, 452, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 459, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 462, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 466, 0,
    467, 468, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 477, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 480, 0, 0, 0, 0, 481, 0, 0, 0, 482, 0, 0,
    0, 483, 0, 0, 0, 484, 0, 0, 0, 485, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0,
    0, 491, 0, 0, 0, 492, 0, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 512, 0, 513, 0, 514, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 520, 0, 521, 522, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 539, 0, 540, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    557, 0, 558, 0, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 567, 0, 0, 568, 569, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573,
    0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 580, 0, 0, 0, 581, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 584, 585, 0, 0, 586, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 0, 0,
    590, 0, 591, 0, 592, 0, 593, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 596, 0, 0, 597, 0, 0, 598, 599, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0,
    606, 0, 0, 0, 607, 0, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 0,
    619, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 627, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 633, 634, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 637, 0, 0, 638,
    0, 0, 639, 0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0,
    647, 0, 648, 0, 649, 0, 650, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 655, 656, 0, 657, 0,
    0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 665, 0, 0, 0, 666, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 672, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 679, 0, 680, 0, 681, 0, 682, 0, 0, 683, 0, 0, 684, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0,
    0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0,
    697, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 702, 0, 0, 0,
    703, 0, 704, 0, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 714, 0, 0, 715, 716, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 724, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731, 0, 732, 0, 0, 0, 0, 0, 0,
    733, 0, 734, 0, 0, 0, 0, 735, 0, 0, 736, 0, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 745, 0,
    746, 0, 747, 0, 748, 0, 0, 0, 749, 0, 0, 0, 750, 751, 0, 752, 0, 0, 0, 753, 0, 0, 0, 0, 754, 0, 0, 0, 0, 755, 0, 756,
    0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758,
};
void recomp_unit_0064_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08904000u;
        entry_id = (entry_delta < 16340u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0064[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08904000;
    case 2u: goto L_0890401C;
    case 3u: goto L_08904028;
    case 4u: goto L_0890405C;
    case 5u: goto L_08904068;
    case 6u: goto L_08904074;
    case 7u: goto L_089040A0;
    case 8u: goto L_089040D0;
    case 9u: goto L_089040DC;
    case 10u: goto L_0890410C;
    case 11u: goto L_08904110;
    case 12u: goto L_08904118;
    case 13u: goto L_08904124;
    case 14u: goto L_0890413C;
    case 15u: goto L_08904170;
    case 16u: goto L_0890417C;
    case 17u: goto L_089041B0;
    case 18u: goto L_089041B4;
    case 19u: goto L_089041D0;
    case 20u: goto L_089041E8;
    case 21u: goto L_089041F0;
    case 22u: goto L_08904238;
    case 23u: goto L_08904264;
    case 24u: goto L_0890426C;
    case 25u: goto L_08904274;
    case 26u: goto L_089042B4;
    case 27u: goto L_089042C8;
    case 28u: goto L_089042DC;
    case 29u: goto L_089042E8;
    case 30u: goto L_089042F0;
    case 31u: goto L_08904310;
    case 32u: goto L_08904318;
    case 33u: goto L_08904320;
    case 34u: goto L_08904328;
    case 35u: goto L_08904338;
    case 36u: goto L_08904348;
    case 37u: goto L_0890434C;
    case 38u: goto L_08904354;
    case 39u: goto L_08904360;
    case 40u: goto L_0890436C;
    case 41u: goto L_08904378;
    case 42u: goto L_08904384;
    case 43u: goto L_08904398;
    case 44u: goto L_089043A0;
    case 45u: goto L_089043A8;
    case 46u: goto L_089043B0;
    case 47u: goto L_089043C0;
    case 48u: goto L_089043D0;
    case 49u: goto L_089043D4;
    case 50u: goto L_089043DC;
    case 51u: goto L_089043E8;
    case 52u: goto L_089043F4;
    case 53u: goto L_08904408;
    case 54u: goto L_08904424;
    case 55u: goto L_08904434;
    case 56u: goto L_08904450;
    case 57u: goto L_0890445C;
    case 58u: goto L_08904484;
    case 59u: goto L_08904490;
    case 60u: goto L_089044AC;
    case 61u: goto L_089044BC;
    case 62u: goto L_089044D8;
    case 63u: goto L_089044E4;
    case 64u: goto L_089044EC;
    case 65u: goto L_089044FC;
    case 66u: goto L_08904504;
    case 67u: goto L_08904518;
    case 68u: goto L_08904524;
    case 69u: goto L_08904534;
    case 70u: goto L_0890454C;
    case 71u: goto L_08904580;
    case 72u: goto L_0890458C;
    case 73u: goto L_089045C0;
    case 74u: goto L_089045CC;
    case 75u: goto L_089045D8;
    case 76u: goto L_08904604;
    case 77u: goto L_08904638;
    case 78u: goto L_08904644;
    case 79u: goto L_08904678;
    case 80u: goto L_08904684;
    case 81u: goto L_08904690;
    case 82u: goto L_089046A8;
    case 83u: goto L_089046DC;
    case 84u: goto L_089046E8;
    case 85u: goto L_0890471C;
    case 86u: goto L_08904720;
    case 87u: goto L_0890473C;
    case 88u: goto L_08904754;
    case 89u: goto L_0890475C;
    case 90u: goto L_089047A8;
    case 91u: goto L_089047B4;
    case 92u: goto L_089047BC;
    case 93u: goto L_089047C4;
    case 94u: goto L_089047D0;
    case 95u: goto L_089047D4;
    case 96u: goto L_089047DC;
    case 97u: goto L_089047F0;
    case 98u: goto L_089047FC;
    case 99u: goto L_08904808;
    case 100u: goto L_08904818;
    case 101u: goto L_08904828;
    case 102u: goto L_08904834;
    case 103u: goto L_0890483C;
    case 104u: goto L_08904858;
    case 105u: goto L_089048A0;
    case 106u: goto L_089048A8;
    case 107u: goto L_089048B8;
    case 108u: goto L_089048C0;
    case 109u: goto L_089048CC;
    case 110u: goto L_089048DC;
    case 111u: goto L_089048F0;
    case 112u: goto L_08904920;
    case 113u: goto L_08904928;
    case 114u: goto L_08904984;
    case 115u: goto L_08904990;
    case 116u: goto L_089049A0;
    case 117u: goto L_089049A8;
    case 118u: goto L_089049C0;
    case 119u: goto L_089049D4;
    case 120u: goto L_089049E4;
    case 121u: goto L_089049F4;
    case 122u: goto L_08904A24;
    case 123u: goto L_08904A38;
    case 124u: goto L_08904A58;
    case 125u: goto L_08904A68;
    case 126u: goto L_08904A70;
    case 127u: goto L_08904AA0;
    case 128u: goto L_08904AAC;
    case 129u: goto L_08904ACC;
    case 130u: goto L_08904AEC;
    case 131u: goto L_08904AFC;
    case 132u: goto L_08904B08;
    case 133u: goto L_08904B10;
    case 134u: goto L_08904B40;
    case 135u: goto L_08904B4C;
    case 136u: goto L_08904B50;
    case 137u: goto L_08904B58;
    case 138u: goto L_08904B64;
    case 139u: goto L_08904B70;
    case 140u: goto L_08904BA8;
    case 141u: goto L_08904BB4;
    case 142u: goto L_08904BBC;
    case 143u: goto L_08904BCC;
    case 144u: goto L_08904BD4;
    case 145u: goto L_08904BE0;
    case 146u: goto L_08904BF4;
    case 147u: goto L_08904C00;
    case 148u: goto L_08904C0C;
    case 149u: goto L_08904C20;
    case 150u: goto L_08904C2C;
    case 151u: goto L_08904C34;
    case 152u: goto L_08904C48;
    case 153u: goto L_08904C54;
    case 154u: goto L_08904C68;
    case 155u: goto L_08904C74;
    case 156u: goto L_08904C88;
    case 157u: goto L_08904C98;
    case 158u: goto L_08904CAC;
    case 159u: goto L_08904CC0;
    case 160u: goto L_08904CCC;
    case 161u: goto L_08904CD4;
    case 162u: goto L_08904CDC;
    case 163u: goto L_08904CE4;
    case 164u: goto L_08904D10;
    case 165u: goto L_08904D48;
    case 166u: goto L_08904D58;
    case 167u: goto L_08904D64;
    case 168u: goto L_08904D6C;
    case 169u: goto L_08904D88;
    case 170u: goto L_08904D98;
    case 171u: goto L_08904DA4;
    case 172u: goto L_08904DAC;
    case 173u: goto L_08904DB8;
    case 174u: goto L_08904DD0;
    case 175u: goto L_08904DE0;
    case 176u: goto L_08904DEC;
    case 177u: goto L_08904DF4;
    case 178u: goto L_08904E00;
    case 179u: goto L_08904E18;
    case 180u: goto L_08904E28;
    case 181u: goto L_08904E34;
    case 182u: goto L_08904E50;
    case 183u: goto L_08904E58;
    case 184u: goto L_08904E64;
    case 185u: goto L_08904E6C;
    case 186u: goto L_08904E74;
    case 187u: goto L_08904EA0;
    case 188u: goto L_08904EBC;
    case 189u: goto L_08904ECC;
    case 190u: goto L_08904ED4;
    case 191u: goto L_08904EE8;
    case 192u: goto L_08904EF8;
    case 193u: goto L_08904F00;
    case 194u: goto L_08904F08;
    case 195u: goto L_08904F14;
    case 196u: goto L_08904F24;
    case 197u: goto L_08904F34;
    case 198u: goto L_08904F44;
    case 199u: goto L_08904F5C;
    case 200u: goto L_08904F68;
    case 201u: goto L_08904F74;
    case 202u: goto L_08904F84;
    case 203u: goto L_08904F90;
    case 204u: goto L_08904F9C;
    case 205u: goto L_08904FA0;
    case 206u: goto L_08904FAC;
    case 207u: goto L_08904FB4;
    case 208u: goto L_08904FDC;
    case 209u: goto L_08904FEC;
    case 210u: goto L_08904FF4;
    case 211u: goto L_0890500C;
    case 212u: goto L_08905014;
    case 213u: goto L_0890503C;
    case 214u: goto L_0890504C;
    case 215u: goto L_08905054;
    case 216u: goto L_08905070;
    case 217u: goto L_08905078;
    case 218u: goto L_08905094;
    case 219u: goto L_089050A0;
    case 220u: goto L_089050CC;
    case 221u: goto L_089050D4;
    case 222u: goto L_089050FC;
    case 223u: goto L_08905108;
    case 224u: goto L_08905114;
    case 225u: goto L_08905130;
    case 226u: goto L_08905138;
    case 227u: goto L_08905140;
    case 228u: goto L_08905148;
    case 229u: goto L_08905150;
    case 230u: goto L_08905158;
    case 231u: goto L_08905160;
    case 232u: goto L_0890516C;
    case 233u: goto L_08905178;
    case 234u: goto L_08905184;
    case 235u: goto L_08905190;
    case 236u: goto L_0890519C;
    case 237u: goto L_089051A8;
    case 238u: goto L_089051B0;
    case 239u: goto L_089051C0;
    case 240u: goto L_089051D0;
    case 241u: goto L_089051E0;
    case 242u: goto L_089051F0;
    case 243u: goto L_08905200;
    case 244u: goto L_08905210;
    case 245u: goto L_08905238;
    case 246u: goto L_08905240;
    case 247u: goto L_08905270;
    case 248u: goto L_0890527C;
    case 249u: goto L_08905290;
    case 250u: goto L_089052B8;
    case 251u: goto L_089052C0;
    case 252u: goto L_089052D0;
    case 253u: goto L_089052E0;
    case 254u: goto L_089052F0;
    case 255u: goto L_08905304;
    case 256u: goto L_0890531C;
    case 257u: goto L_08905328;
    case 258u: goto L_08905338;
    case 259u: goto L_08905368;
    case 260u: goto L_08905374;
    case 261u: goto L_0890537C;
    case 262u: goto L_08905398;
    case 263u: goto L_089053A0;
    case 264u: goto L_089053A8;
    case 265u: goto L_089053B0;
    case 266u: goto L_089053B8;
    case 267u: goto L_089053C0;
    case 268u: goto L_089053CC;
    case 269u: goto L_089053D4;
    case 270u: goto L_089053E0;
    case 271u: goto L_089053E8;
    case 272u: goto L_089053F4;
    case 273u: goto L_08905400;
    case 274u: goto L_08905408;
    case 275u: goto L_08905420;
    case 276u: goto L_0890543C;
    case 277u: goto L_08905448;
    case 278u: goto L_08905458;
    case 279u: goto L_08905478;
    case 280u: goto L_08905488;
    case 281u: goto L_0890549C;
    case 282u: goto L_089054CC;
    case 283u: goto L_089054DC;
    case 284u: goto L_089054E4;
    case 285u: goto L_089054F8;
    case 286u: goto L_08905504;
    case 287u: goto L_08905510;
    case 288u: goto L_0890551C;
    case 289u: goto L_08905530;
    case 290u: goto L_08905540;
    case 291u: goto L_08905550;
    case 292u: goto L_0890555C;
    case 293u: goto L_08905568;
    case 294u: goto L_08905580;
    case 295u: goto L_089055AC;
    case 296u: goto L_089055E8;
    case 297u: goto L_089055F0;
    case 298u: goto L_089055F8;
    case 299u: goto L_08905604;
    case 300u: goto L_0890561C;
    case 301u: goto L_0890562C;
    case 302u: goto L_08905634;
    case 303u: goto L_08905648;
    case 304u: goto L_08905658;
    case 305u: goto L_0890566C;
    case 306u: goto L_08905674;
    case 307u: goto L_08905684;
    case 308u: goto L_08905694;
    case 309u: goto L_089056D0;
    case 310u: goto L_089056DC;
    case 311u: goto L_089056EC;
    case 312u: goto L_089056FC;
    case 313u: goto L_08905708;
    case 314u: goto L_0890571C;
    case 315u: goto L_08905724;
    case 316u: goto L_08905730;
    case 317u: goto L_08905748;
    case 318u: goto L_08905750;
    case 319u: goto L_08905758;
    case 320u: goto L_08905760;
    case 321u: goto L_08905764;
    case 322u: goto L_0890576C;
    case 323u: goto L_08905780;
    case 324u: goto L_089057C4;
    case 325u: goto L_089057CC;
    case 326u: goto L_089057D8;
    case 327u: goto L_089057E8;
    case 328u: goto L_08905818;
    case 329u: goto L_08905824;
    case 330u: goto L_08905854;
    case 331u: goto L_08905864;
    case 332u: goto L_08905870;
    case 333u: goto L_08905878;
    case 334u: goto L_08905890;
    case 335u: goto L_089058A4;
    case 336u: goto L_089058B0;
    case 337u: goto L_089058BC;
    case 338u: goto L_089058CC;
    case 339u: goto L_089058D8;
    case 340u: goto L_089058E8;
    case 341u: goto L_089058F0;
    case 342u: goto L_08905908;
    case 343u: goto L_08905948;
    case 344u: goto L_0890595C;
    case 345u: goto L_08905964;
    case 346u: goto L_08905998;
    case 347u: goto L_089059A8;
    case 348u: goto L_089059BC;
    case 349u: goto L_089059CC;
    case 350u: goto L_089059DC;
    case 351u: goto L_089059EC;
    case 352u: goto L_089059FC;
    case 353u: goto L_08905A0C;
    case 354u: goto L_08905A1C;
    case 355u: goto L_08905A2C;
    case 356u: goto L_08905A3C;
    case 357u: goto L_08905A4C;
    case 358u: goto L_08905A58;
    case 359u: goto L_08905A64;
    case 360u: goto L_08905AD8;
    case 361u: goto L_08905B0C;
    case 362u: goto L_08905B38;
    case 363u: goto L_08905B68;
    case 364u: goto L_08905B74;
    case 365u: goto L_08905BA8;
    case 366u: goto L_08905BB4;
    case 367u: goto L_08905BBC;
    case 368u: goto L_08905BE8;
    case 369u: goto L_08905BF4;
    case 370u: goto L_08905BF8;
    case 371u: goto L_08905C24;
    case 372u: goto L_08905C64;
    case 373u: goto L_08905C90;
    case 374u: goto L_08905CA8;
    case 375u: goto L_08905CB8;
    case 376u: goto L_08905CC4;
    case 377u: goto L_08905CD4;
    case 378u: goto L_08905CDC;
    case 379u: goto L_08905CE4;
    case 380u: goto L_08905D00;
    case 381u: goto L_08905D0C;
    case 382u: goto L_08905D28;
    case 383u: goto L_08905D30;
    case 384u: goto L_08905D40;
    case 385u: goto L_08905D50;
    case 386u: goto L_08905D60;
    case 387u: goto L_08905D70;
    case 388u: goto L_08905D80;
    case 389u: goto L_08905D90;
    case 390u: goto L_08905DA0;
    case 391u: goto L_08905DB0;
    case 392u: goto L_08905DC0;
    case 393u: goto L_08905DD0;
    case 394u: goto L_08905DE0;
    case 395u: goto L_08905DF0;
    case 396u: goto L_08905E00;
    case 397u: goto L_08905E10;
    case 398u: goto L_08905E20;
    case 399u: goto L_08905E30;
    case 400u: goto L_08905E40;
    case 401u: goto L_08905E50;
    case 402u: goto L_08905E60;
    case 403u: goto L_08905E70;
    case 404u: goto L_08905E80;
    case 405u: goto L_08905E90;
    case 406u: goto L_08905E9C;
    case 407u: goto L_08905EA8;
    case 408u: goto L_08905EAC;
    case 409u: goto L_08905EB8;
    case 410u: goto L_08905EC0;
    case 411u: goto L_08905EC8;
    case 412u: goto L_08905ED0;
    case 413u: goto L_08905EDC;
    case 414u: goto L_08905EE4;
    case 415u: goto L_08905EEC;
    case 416u: goto L_08905EF4;
    case 417u: goto L_08905EFC;
    case 418u: goto L_08905F08;
    case 419u: goto L_08905F10;
    case 420u: goto L_08905F1C;
    case 421u: goto L_08905F24;
    case 422u: goto L_08905F2C;
    case 423u: goto L_08905F34;
    case 424u: goto L_08905F3C;
    case 425u: goto L_08905F48;
    case 426u: goto L_08905F54;
    case 427u: goto L_08905F58;
    case 428u: goto L_08905F64;
    case 429u: goto L_08905F74;
    case 430u: goto L_08905F88;
    case 431u: goto L_08905F98;
    case 432u: goto L_08905FA8;
    case 433u: goto L_08905FB0;
    case 434u: goto L_08905FC4;
    case 435u: goto L_08905FD4;
    case 436u: goto L_08906004;
    case 437u: goto L_0890600C;
    case 438u: goto L_08906014;
    case 439u: goto L_08906020;
    case 440u: goto L_08906034;
    case 441u: goto L_08906064;
    case 442u: goto L_08906068;
    case 443u: goto L_0890607C;
    case 444u: goto L_0890608C;
    case 445u: goto L_08906098;
    case 446u: goto L_089060A0;
    case 447u: goto L_089060A8;
    case 448u: goto L_089060BC;
    case 449u: goto L_089060EC;
    case 450u: goto L_089060F4;
    case 451u: goto L_089060FC;
    case 452u: goto L_08906104;
    case 453u: goto L_0890610C;
    case 454u: goto L_08906118;
    case 455u: goto L_08906128;
    case 456u: goto L_08906138;
    case 457u: goto L_08906150;
    case 458u: goto L_08906158;
    case 459u: goto L_08906168;
    case 460u: goto L_089061AC;
    case 461u: goto L_089061C0;
    case 462u: goto L_08906204;
    case 463u: goto L_08906214;
    case 464u: goto L_08906240;
    case 465u: goto L_08906274;
    case 466u: goto L_08906278;
    case 467u: goto L_08906280;
    case 468u: goto L_08906284;
    case 469u: goto L_08906294;
    case 470u: goto L_089062A4;
    case 471u: goto L_089062D4;
    case 472u: goto L_089062DC;
    case 473u: goto L_089062F0;
    case 474u: goto L_08906320;
    case 475u: goto L_08906350;
    case 476u: goto L_08906358;
    case 477u: goto L_0890636C;
    case 478u: goto L_0890639C;
    case 479u: goto L_089063CC;
    case 480u: goto L_089063D0;
    case 481u: goto L_089063E4;
    case 482u: goto L_089063F4;
    case 483u: goto L_08906404;
    case 484u: goto L_08906414;
    case 485u: goto L_08906424;
    case 486u: goto L_08906434;
    case 487u: goto L_08906444;
    case 488u: goto L_08906454;
    case 489u: goto L_08906464;
    case 490u: goto L_08906474;
    case 491u: goto L_08906484;
    case 492u: goto L_08906494;
    case 493u: goto L_089064A4;
    case 494u: goto L_089064AC;
    case 495u: goto L_089064B4;
    case 496u: goto L_089064BC;
    case 497u: goto L_089064D0;
    case 498u: goto L_089064E0;
    case 499u: goto L_08906510;
    case 500u: goto L_08906540;
    case 501u: goto L_08906570;
    case 502u: goto L_089065A0;
    case 503u: goto L_089065D0;
    case 504u: goto L_089065D8;
    case 505u: goto L_08906608;
    case 506u: goto L_08906638;
    case 507u: goto L_08906668;
    case 508u: goto L_08906698;
    case 509u: goto L_089066C8;
    case 510u: goto L_089066F8;
    case 511u: goto L_08906728;
    case 512u: goto L_0890672C;
    case 513u: goto L_08906734;
    case 514u: goto L_0890673C;
    case 515u: goto L_08906744;
    case 516u: goto L_0890674C;
    case 517u: goto L_08906760;
    case 518u: goto L_08906794;
    case 519u: goto L_089067C4;
    case 520u: goto L_089067CC;
    case 521u: goto L_089067D4;
    case 522u: goto L_089067D8;
    case 523u: goto L_08906808;
    case 524u: goto L_08906838;
    case 525u: goto L_08906868;
    case 526u: goto L_08906898;
    case 527u: goto L_089068C8;
    case 528u: goto L_089068F8;
    case 529u: goto L_08906928;
    case 530u: goto L_08906958;
    case 531u: goto L_08906988;
    case 532u: goto L_089069B8;
    case 533u: goto L_089069E8;
    case 534u: goto L_08906A18;
    case 535u: goto L_08906A48;
    case 536u: goto L_08906A78;
    case 537u: goto L_08906AA8;
    case 538u: goto L_08906AD8;
    case 539u: goto L_08906B08;
    case 540u: goto L_08906B10;
    case 541u: goto L_08906B18;
    case 542u: goto L_08906B24;
    case 543u: goto L_08906B54;
    case 544u: goto L_08906B84;
    case 545u: goto L_08906BB4;
    case 546u: goto L_08906BE4;
    case 547u: goto L_08906C14;
    case 548u: goto L_08906C44;
    case 549u: goto L_08906C74;
    case 550u: goto L_08906CA4;
    case 551u: goto L_08906CD4;
    case 552u: goto L_08906D04;
    case 553u: goto L_08906D34;
    case 554u: goto L_08906D60;
    case 555u: goto L_08906D88;
    case 556u: goto L_08906DCC;
    case 557u: goto L_08906E00;
    case 558u: goto L_08906E08;
    case 559u: goto L_08906E18;
    case 560u: goto L_08906E28;
    case 561u: goto L_08906E44;
    case 562u: goto L_08906E64;
    case 563u: goto L_08906E70;
    case 564u: goto L_08906E7C;
    case 565u: goto L_08906EB0;
    case 566u: goto L_08906EDC;
    case 567u: goto L_08906F18;
    case 568u: goto L_08906F24;
    case 569u: goto L_08906F28;
    case 570u: goto L_08906F30;
    case 571u: goto L_08906F44;
    case 572u: goto L_08906F74;
    case 573u: goto L_08906F7C;
    case 574u: goto L_08906F90;
    case 575u: goto L_08906F98;
    case 576u: goto L_08906FAC;
    case 577u: goto L_08906FBC;
    case 578u: goto L_08906FCC;
    case 579u: goto L_08906FD4;
    case 580u: goto L_0890700C;
    case 581u: goto L_0890701C;
    case 582u: goto L_08907020;
    case 583u: goto L_0890705C;
    case 584u: goto L_08907090;
    case 585u: goto L_08907094;
    case 586u: goto L_089070A0;
    case 587u: goto L_089070B4;
    case 588u: goto L_089070D0;
    case 589u: goto L_089070E8;
    case 590u: goto L_08907100;
    case 591u: goto L_08907108;
    case 592u: goto L_08907110;
    case 593u: goto L_08907118;
    case 594u: goto L_08907124;
    case 595u: goto L_08907158;
    case 596u: goto L_0890715C;
    case 597u: goto L_08907168;
    case 598u: goto L_08907174;
    case 599u: goto L_08907178;
    case 600u: goto L_089071A8;
    case 601u: goto L_089071B4;
    case 602u: goto L_089071C0;
    case 603u: goto L_089071CC;
    case 604u: goto L_089071E0;
    case 605u: goto L_089071F0;
    case 606u: goto L_08907200;
    case 607u: goto L_08907210;
    case 608u: goto L_08907220;
    case 609u: goto L_08907230;
    case 610u: goto L_08907240;
    case 611u: goto L_08907250;
    case 612u: goto L_08907260;
    case 613u: goto L_0890726C;
    case 614u: goto L_08907278;
    case 615u: goto L_089072E0;
    case 616u: goto L_08907314;
    case 617u: goto L_08907340;
    case 618u: goto L_08907374;
    case 619u: goto L_08907380;
    case 620u: goto L_08907384;
    case 621u: goto L_089073B0;
    case 622u: goto L_08907408;
    case 623u: goto L_08907434;
    case 624u: goto L_0890743C;
    case 625u: goto L_08907448;
    case 626u: goto L_08907458;
    case 627u: goto L_0890746C;
    case 628u: goto L_08907498;
    case 629u: goto L_089074A0;
    case 630u: goto L_089074AC;
    case 631u: goto L_089074DC;
    case 632u: goto L_089074F4;
    case 633u: goto L_08907524;
    case 634u: goto L_08907528;
    case 635u: goto L_0890753C;
    case 636u: goto L_0890756C;
    case 637u: goto L_08907570;
    case 638u: goto L_0890757C;
    case 639u: goto L_08907588;
    case 640u: goto L_08907594;
    case 641u: goto L_0890759C;
    case 642u: goto L_089075A4;
    case 643u: goto L_089075BC;
    case 644u: goto L_089075C4;
    case 645u: goto L_089075DC;
    case 646u: goto L_089075E4;
    case 647u: goto L_08907600;
    case 648u: goto L_08907608;
    case 649u: goto L_08907610;
    case 650u: goto L_08907618;
    case 651u: goto L_08907630;
    case 652u: goto L_08907644;
    case 653u: goto L_08907654;
    case 654u: goto L_0890765C;
    case 655u: goto L_0890766C;
    case 656u: goto L_08907670;
    case 657u: goto L_08907678;
    case 658u: goto L_08907688;
    case 659u: goto L_0890769C;
    case 660u: goto L_089076C8;
    case 661u: goto L_089076D0;
    case 662u: goto L_089076E4;
    case 663u: goto L_08907718;
    case 664u: goto L_08907724;
    case 665u: goto L_08907730;
    case 666u: goto L_08907740;
    case 667u: goto L_08907748;
    case 668u: goto L_08907758;
    case 669u: goto L_0890776C;
    case 670u: goto L_08907798;
    case 671u: goto L_089077A0;
    case 672u: goto L_089077B8;
    case 673u: goto L_089077C8;
    case 674u: goto L_089077DC;
    case 675u: goto L_08907810;
    case 676u: goto L_08907818;
    case 677u: goto L_08907828;
    case 678u: goto L_08907838;
    case 679u: goto L_08907848;
    case 680u: goto L_08907850;
    case 681u: goto L_08907858;
    case 682u: goto L_08907860;
    case 683u: goto L_0890786C;
    case 684u: goto L_08907878;
    case 685u: goto L_089078A8;
    case 686u: goto L_089078C0;
    case 687u: goto L_089078C8;
    case 688u: goto L_089078D4;
    case 689u: goto L_089078E4;
    case 690u: goto L_089078F4;
    case 691u: goto L_0890790C;
    case 692u: goto L_08907920;
    case 693u: goto L_0890794C;
    case 694u: goto L_08907954;
    case 695u: goto L_08907960;
    case 696u: goto L_08907970;
    case 697u: goto L_08907980;
    case 698u: goto L_08907998;
    case 699u: goto L_089079AC;
    case 700u: goto L_089079D8;
    case 701u: goto L_089079E0;
    case 702u: goto L_089079F0;
    case 703u: goto L_08907A00;
    case 704u: goto L_08907A08;
    case 705u: goto L_08907A20;
    case 706u: goto L_08907A30;
    case 707u: goto L_08907A60;
    case 708u: goto L_08907A68;
    case 709u: goto L_08907A94;
    case 710u: goto L_08907ABC;
    case 711u: goto L_08907AFC;
    case 712u: goto L_08907B30;
    case 713u: goto L_08907B5C;
    case 714u: goto L_08907B90;
    case 715u: goto L_08907B9C;
    case 716u: goto L_08907BA0;
    case 717u: goto L_08907BC4;
    case 718u: goto L_08907BE0;
    case 719u: goto L_08907C0C;
    case 720u: goto L_08907C1C;
    case 721u: goto L_08907C4C;
    case 722u: goto L_08907C7C;
    case 723u: goto L_08907CAC;
    case 724u: goto L_08907CB4;
    case 725u: goto L_08907CBC;
    case 726u: goto L_08907CEC;
    case 727u: goto L_08907D1C;
    case 728u: goto L_08907D4C;
    case 729u: goto L_08907D7C;
    case 730u: goto L_08907DAC;
    case 731u: goto L_08907DDC;
    case 732u: goto L_08907DE4;
    case 733u: goto L_08907E00;
    case 734u: goto L_08907E08;
    case 735u: goto L_08907E1C;
    case 736u: goto L_08907E28;
    case 737u: goto L_08907E38;
    case 738u: goto L_08907E44;
    case 739u: goto L_08907E50;
    case 740u: goto L_08907E80;
    case 741u: goto L_08907E88;
    case 742u: goto L_08907EB8;
    case 743u: goto L_08907EE8;
    case 744u: goto L_08907EF0;
    case 745u: goto L_08907EF8;
    case 746u: goto L_08907F00;
    case 747u: goto L_08907F08;
    case 748u: goto L_08907F10;
    case 749u: goto L_08907F20;
    case 750u: goto L_08907F30;
    case 751u: goto L_08907F34;
    case 752u: goto L_08907F3C;
    case 753u: goto L_08907F4C;
    case 754u: goto L_08907F60;
    case 755u: goto L_08907F74;
    case 756u: goto L_08907F7C;
    case 757u: goto L_08907F90;
    case 758u: goto L_08907FD0;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08904000:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
        goto L_0890401C;
    }
    goto L_0890401C;
L_0890401C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089041F0;
      }
      goto L_08904028;
    }
L_08904028:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(288)));
        goto L_0890405C;
    }
    goto L_0890405C;
L_0890405C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089041F0;
      }
      goto L_08904068;
    }
L_08904068:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904118;
      }
      goto L_08904074;
    }
L_08904074:
    ctx.gpr[4] = (48934u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089040DC;
      }
      goto L_089040A0;
    }
L_089040A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089040D0;
    }
    goto L_089040D0;
L_089040D0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904110;
      }
      goto L_089040DC;
    }
L_089040DC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0890410C;
    }
    goto L_0890410C;
L_0890410C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08904110;
L_08904110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089041F0;
      }
      goto L_08904118;
    }
L_08904118:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(113)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089041F0;
      }
      goto L_08904124;
    }
L_08904124:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890417C;
      }
      goto L_0890413C;
    }
L_0890413C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
        goto L_08904170;
    }
    goto L_08904170;
L_08904170:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089041B4;
      }
      goto L_0890417C;
    }
L_0890417C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
        goto L_089041B0;
    }
    goto L_089041B0;
L_089041B0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089041B4;
L_089041B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089041F0;
      }
      goto L_089041D0;
    }
L_089041D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089041F0;
      }
      goto L_089041E8;
    }
L_089041E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089041F0;
L_089041F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(516));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(520));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16000u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08904238u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 458u, 0x088EA858u>(ctx, &aot_mem) && ctx.pc == 0x08904238u) goto L_08904238;
    return;
L_08904238:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x08904264u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 624u, 0x088EBE0Cu>(ctx, &aot_mem) && ctx.pc == 0x08904264u) goto L_08904264;
    return;
L_08904264:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089042E8;
      }
      goto L_0890426C;
    }
L_0890426C:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_089042E8;
      }
      goto L_08904274;
    }
L_08904274:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089042E8;
      }
      goto L_089042B4;
    }
L_089042B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089042E8;
      }
      goto L_089042C8;
    }
L_089042C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-986));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089042E8;
      }
      goto L_089042DC;
    }
L_089042DC:
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089042E8;
L_089042E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_089042F0;
    }
L_089042F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_08904310;
    }
L_08904310:
    ctx.gpr[31] = (0x08904318u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08904318u) goto L_08904318;
    return;
L_08904318:
    ctx.gpr[31] = (0x08904320u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 31u, 0x08A980FCu>(ctx, &aot_mem) && ctx.pc == 0x08904320u) goto L_08904320;
    return;
L_08904320:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904398;
      }
      goto L_08904328;
    }
L_08904328:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
        goto L_0890434C;
    }
    goto L_08904338;
L_08904338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904398;
      }
      goto L_08904348;
    }
L_08904348:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
    goto L_0890434C;
L_0890434C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904398;
      }
      goto L_08904354;
    }
L_08904354:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904398;
      }
      goto L_08904360;
    }
L_08904360:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(87)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904398;
      }
      goto L_0890436C;
    }
L_0890436C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(123)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08904398;
      }
      goto L_08904378;
    }
L_08904378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29520)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904398;
      }
      goto L_08904384;
    }
L_08904384:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904398;
L_08904398:
    ctx.gpr[31] = (0x089043A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089043A0u) goto L_089043A0;
    return;
L_089043A0:
    ctx.gpr[31] = (0x089043A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 48u, 0x08A9819Cu>(ctx, &aot_mem) && ctx.pc == 0x089043A8u) goto L_089043A8;
    return;
L_089043A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904408;
      }
      goto L_089043B0;
    }
L_089043B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
        goto L_089043D4;
    }
    goto L_089043C0;
L_089043C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904408;
      }
      goto L_089043D0;
    }
L_089043D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
    goto L_089043D4;
L_089043D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904408;
      }
      goto L_089043DC;
    }
L_089043DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904408;
      }
      goto L_089043E8;
    }
L_089043E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(87)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904408;
      }
      goto L_089043F4;
    }
L_089043F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904408;
L_08904408:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904434;
      }
      goto L_08904424;
    }
L_08904424:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0890445C;
      }
      goto L_08904434;
    }
L_08904434:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890445C;
      }
      goto L_08904450;
    }
L_08904450:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890445C;
L_0890445C:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904490;
      }
      goto L_08904484;
    }
L_08904484:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089044E4;
      }
      goto L_08904490;
    }
L_08904490:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089044BC;
      }
      goto L_089044AC;
    }
L_089044AC:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089044E4;
      }
      goto L_089044BC;
    }
L_089044BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089044E4;
      }
      goto L_089044D8;
    }
L_089044D8:
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089044E4;
L_089044E4:
    ctx.gpr[31] = (0x089044ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089044ECu) goto L_089044EC;
    return;
L_089044EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904524;
      }
      goto L_089044FC;
    }
L_089044FC:
    ctx.gpr[31] = (0x08904504u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08904504u) goto L_08904504;
    return;
L_08904504:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 162u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904524;
      }
      goto L_08904518;
    }
L_08904518:
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904524;
L_08904524:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089045CC;
      }
      goto L_08904534;
    }
L_08904534:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890458C;
      }
      goto L_0890454C;
    }
L_0890454C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
        goto L_08904580;
    }
    goto L_08904580;
L_08904580:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890475C;
      }
      goto L_0890458C;
    }
L_0890458C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
        goto L_089045C0;
    }
    goto L_089045C0;
L_089045C0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890475C;
      }
      goto L_089045CC;
    }
L_089045CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904684;
      }
      goto L_089045D8;
    }
L_089045D8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904644;
      }
      goto L_08904604;
    }
L_08904604:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
        goto L_08904638;
    }
    goto L_08904638;
L_08904638:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890475C;
      }
      goto L_08904644;
    }
L_08904644:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
        goto L_08904678;
    }
    goto L_08904678;
L_08904678:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890475C;
      }
      goto L_08904684;
    }
L_08904684:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890475C;
      }
      goto L_08904690;
    }
L_08904690:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089046E8;
      }
      goto L_089046A8;
    }
L_089046A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
        goto L_089046DC;
    }
    goto L_089046DC;
L_089046DC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904720;
      }
      goto L_089046E8;
    }
L_089046E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15861u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
        goto L_0890471C;
    }
    goto L_0890471C;
L_0890471C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904720;
L_08904720:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890475C;
      }
      goto L_0890473C;
    }
L_0890473C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890475C;
      }
      goto L_08904754;
    }
L_08904754:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0890475C;
L_0890475C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(508));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(512));
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (15564u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089047A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 458u, 0x088EA858u>(ctx, &aot_mem) && ctx.pc == 0x089047A8u) goto L_089047A8;
    return;
L_089047A8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089047B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 416u, 0x08ACA910u>(ctx, &aot_mem) && ctx.pc == 0x089047B4u) goto L_089047B4;
    return;
L_089047B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089047D4;
      }
      goto L_089047BC;
    }
L_089047BC:
    ctx.gpr[31] = (0x089047C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 369u, 0x08ACA5D8u>(ctx, &aot_mem) && ctx.pc == 0x089047C4u) goto L_089047C4;
    return;
L_089047C4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089047D4;
      }
      goto L_089047D0;
    }
L_089047D0:
    ctx.gpr[23] = (0u | 1u);
    goto L_089047D4;
L_089047D4:
    ctx.gpr[31] = (0x089047DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089047DCu) goto L_089047DC;
    return;
L_089047DC:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089047F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 41u, 0x0893C2ECu>(ctx, &aot_mem) && ctx.pc == 0x089047F0u) goto L_089047F0;
    return;
L_089047F0:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904F84;
      }
      goto L_089047FC;
    }
L_089047FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6856)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904F00;
      }
      goto L_08904808;
    }
L_08904808:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904F00;
      }
      goto L_08904818;
    }
L_08904818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904F00;
      }
      goto L_08904828;
    }
L_08904828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089048F0;
      }
      goto L_08904834;
    }
L_08904834:
    ctx.gpr[31] = (0x0890483Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x0890483Cu) goto L_0890483C;
    return;
L_0890483C:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089048A8;
      }
      goto L_08904858;
    }
L_08904858:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089048A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x089048A0u) goto L_089048A0;
    return;
L_089048A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904B64;
      }
      goto L_089048A8;
    }
L_089048A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089048C0;
      }
      goto L_089048B8;
    }
L_089048B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_08904B64;
      }
      goto L_089048C0;
    }
L_089048C0:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x089048CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089048CCu) goto L_089048CC;
    return;
L_089048CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089048DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089048DCu) goto L_089048DC;
    return;
L_089048DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08904B64;
      }
      goto L_089048F0;
    }
L_089048F0:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08904920u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904920u) goto L_08904920;
    return;
L_08904920:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904B64;
      }
      goto L_08904928;
    }
L_08904928:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[5] = (ctx.gpr[5] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08904984u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904984u) goto L_08904984;
    return;
L_08904984:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08904990u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904990u) goto L_08904990;
    return;
L_08904990:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089049A0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x089049A0u) goto L_089049A0;
    return;
L_089049A0:
    ctx.gpr[31] = (0x089049A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 486u, 0x088EAAE0u>(ctx, &aot_mem) && ctx.pc == 0x089049A8u) goto L_089049A8;
    return;
L_089049A8:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904B64;
      }
      goto L_089049C0;
    }
L_089049C0:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x089049D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089049D4u) goto L_089049D4;
    return;
L_089049D4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089049E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x089049E4u) goto L_089049E4;
    return;
L_089049E4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089049F4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x089049F4u) goto L_089049F4;
    return;
L_089049F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1072), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2040), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1076), ctx.gpr[5]);
    ctx.gpr[31] = (0x08904A24u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1076));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08904A24u) goto L_08904A24;
    return;
L_08904A24:
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08904A38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08904A38u) goto L_08904A38;
    return;
L_08904A38:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08904A58u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 408u, 0x088EA4B0u>(ctx, &aot_mem) && ctx.pc == 0x08904A58u) goto L_08904A58;
    return;
L_08904A58:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08904A68u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 406u, 0x088EA480u>(ctx, &aot_mem) && ctx.pc == 0x08904A68u) goto L_08904A68;
    return;
L_08904A68:
    ctx.gpr[31] = (0x08904A70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08904A70u) goto L_08904A70;
    return;
L_08904A70:
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[31] = (0x08904AA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08904AA0u) goto L_08904AA0;
    return;
L_08904AA0:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2040)));
      if (branch_taken) {
          goto L_08904B50;
      }
      goto L_08904AAC;
    }
L_08904AAC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2040), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2044), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08904ACCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08904ACCu) goto L_08904ACC;
    return;
L_08904ACC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08904AECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 408u, 0x088EA4B0u>(ctx, &aot_mem) && ctx.pc == 0x08904AECu) goto L_08904AEC;
    return;
L_08904AEC:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08904AFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08904AFCu) goto L_08904AFC;
    return;
L_08904AFC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08904B08u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904B08u) goto L_08904B08;
    return;
L_08904B08:
    ctx.gpr[31] = (0x08904B10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08904B10u) goto L_08904B10;
    return;
L_08904B10:
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    ctx.gpr[31] = (0x08904B40u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08904B40u) goto L_08904B40;
    return;
L_08904B40:
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(2044)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2040)));
      if (branch_taken) {
          goto L_08904B50;
      }
      goto L_08904B4C;
    }
L_08904B4C:
    ctx.gpr[19] = (0u | 0u);
    goto L_08904B50;
L_08904B50:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904B64;
      }
      goto L_08904B58;
    }
L_08904B58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08904B64u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904B64u) goto L_08904B64;
    return;
L_08904B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904BBC;
      }
      goto L_08904B70;
    }
L_08904B70:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08904BA8u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904BA8u) goto L_08904BA8;
    return;
L_08904BA8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904BB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904BB4u) goto L_08904BB4;
    return;
L_08904BB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904C00;
      }
      goto L_08904BBC;
    }
L_08904BBC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904C00;
      }
      goto L_08904BCC;
    }
L_08904BCC:
    ctx.gpr[31] = (0x08904BD4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08904BD4u) goto L_08904BD4;
    return;
L_08904BD4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08904BE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08904BE0u) goto L_08904BE0;
    return;
L_08904BE0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[31] = (0x08904BF4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904BF4u) goto L_08904BF4;
    return;
L_08904BF4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904C00u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904C00u) goto L_08904C00;
    return;
L_08904C00:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08904C34;
      }
      goto L_08904C0C;
    }
L_08904C0C:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904C20u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08904C20u) goto L_08904C20;
    return;
L_08904C20:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904C2Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904C2Cu) goto L_08904C2C;
    return;
L_08904C2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904C54;
      }
      goto L_08904C34;
    }
L_08904C34:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904C48u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08904C48u) goto L_08904C48;
    return;
L_08904C48:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904C54u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904C54u) goto L_08904C54;
    return;
L_08904C54:
    ctx.gpr[4] = (16454u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08904C68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08904C68u) goto L_08904C68;
    return;
L_08904C68:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08904C74u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904C74u) goto L_08904C74;
    return;
L_08904C74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08904C88u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08904C88u) goto L_08904C88;
    return;
L_08904C88:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904CAC;
      }
      goto L_08904C98;
    }
L_08904C98:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
    goto L_08904CAC;
L_08904CAC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08904DF4;
      }
      goto L_08904CC0;
    }
L_08904CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904DAC;
      }
      goto L_08904CCC;
    }
L_08904CCC:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904DAC;
      }
      goto L_08904CD4;
    }
L_08904CD4:
    ctx.gpr[31] = (0x08904CDCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08904CDCu) goto L_08904CDC;
    return;
L_08904CDC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904D6C;
      }
      goto L_08904CE4;
    }
L_08904CE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), ctx.gpr[5]);
    ctx.gpr[31] = (0x08904D10u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1236));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08904D10u) goto L_08904D10;
    return;
L_08904D10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16496u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1264));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904D48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 408u, 0x088EA4B0u>(ctx, &aot_mem) && ctx.pc == 0x08904D48u) goto L_08904D48;
    return;
L_08904D48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08904D58u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 406u, 0x088EA480u>(ctx, &aot_mem) && ctx.pc == 0x08904D58u) goto L_08904D58;
    return;
L_08904D58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904D64u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904D64u) goto L_08904D64;
    return;
L_08904D64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904E34;
      }
      goto L_08904D6C;
    }
L_08904D6C:
    ctx.gpr[4] = (16496u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1280));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1296));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904D88u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 408u, 0x088EA4B0u>(ctx, &aot_mem) && ctx.pc == 0x08904D88u) goto L_08904D88;
    return;
L_08904D88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08904D98u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 406u, 0x088EA480u>(ctx, &aot_mem) && ctx.pc == 0x08904D98u) goto L_08904D98;
    return;
L_08904D98:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904DA4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904DA4u) goto L_08904DA4;
    return;
L_08904DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904E34;
      }
      goto L_08904DAC;
    }
L_08904DAC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904DB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08904DB8u) goto L_08904DB8;
    return;
L_08904DB8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1312));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1328));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08904DD0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 408u, 0x088EA4B0u>(ctx, &aot_mem) && ctx.pc == 0x08904DD0u) goto L_08904DD0;
    return;
L_08904DD0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08904DE0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 406u, 0x088EA480u>(ctx, &aot_mem) && ctx.pc == 0x08904DE0u) goto L_08904DE0;
    return;
L_08904DE0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904DECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904DECu) goto L_08904DEC;
    return;
L_08904DEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08904E34;
      }
      goto L_08904DF4;
    }
L_08904DF4:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[31] = (0x08904E00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08904E00u) goto L_08904E00;
    return;
L_08904E00:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1344));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1360));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08904E18u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 408u, 0x088EA4B0u>(ctx, &aot_mem) && ctx.pc == 0x08904E18u) goto L_08904E18;
    return;
L_08904E18:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08904E28u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 406u, 0x088EA480u>(ctx, &aot_mem) && ctx.pc == 0x08904E28u) goto L_08904E28;
    return;
L_08904E28:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904E34u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904E34u) goto L_08904E34;
    return;
L_08904E34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904ECC;
      }
      goto L_08904E50;
    }
L_08904E50:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08904ECC;
      }
      goto L_08904E58;
    }
L_08904E58:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904E64u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08904E64u) goto L_08904E64;
    return;
L_08904E64:
    ctx.gpr[31] = (0x08904E6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08904E6Cu) goto L_08904E6C;
    return;
L_08904E6C:
    ctx.gpr[31] = (0x08904E74u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08904E74u) goto L_08904E74;
    return;
L_08904E74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16390u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904ED4;
      }
      goto L_08904EA0;
    }
L_08904EA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08904ED4;
      }
      goto L_08904EBC;
    }
L_08904EBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08904ED4;
      }
      goto L_08904ECC;
    }
L_08904ECC:
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08904ED4;
L_08904ED4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08904EE8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904EE8u) goto L_08904EE8;
    return;
L_08904EE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[31] = (0x08904EF8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x08904EF8u) goto L_08904EF8;
    return;
L_08904EF8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6856), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08904F00;
L_08904F00:
    ctx.gpr[31] = (0x08904F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 57u, 0x0893C410u>(ctx, &aot_mem) && ctx.pc == 0x08904F08u) goto L_08904F08;
    return;
L_08904F08:
    ctx.gpr[4] = (ctx.gpr[2] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904F5C;
      }
      goto L_08904F14;
    }
L_08904F14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904F5C;
      }
      goto L_08904F24;
    }
L_08904F24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(6856)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08904F5C;
      }
      goto L_08904F34;
    }
L_08904F34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[23]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904FA0;
      }
      goto L_08904F44;
    }
L_08904F44:
    ctx.gpr[4] = (0u | 15u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08904FA0;
      }
      goto L_08904F5C;
    }
L_08904F5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904F74;
      }
      goto L_08904F68;
    }
L_08904F68:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    goto L_08904F74;
L_08904F74:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08904FA0;
      }
      goto L_08904F84;
    }
L_08904F84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08904F9C;
      }
      goto L_08904F90;
    }
L_08904F90:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(0u));
    goto L_08904F9C;
L_08904F9C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6856), static_cast<std::uint8_t>(0u));
    goto L_08904FA0;
L_08904FA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(87)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
      if (branch_taken) {
          goto L_089050A0;
      }
      goto L_08904FAC;
    }
L_08904FAC:
    ctx.gpr[31] = (0x08904FB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08904FB4u) goto L_08904FB4;
    return;
L_08904FB4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[5] = (17389u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9830u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (50390u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 45875u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08904FDCu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08904FDCu) goto L_08904FDC;
    return;
L_08904FDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08904FECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08904FECu) goto L_08904FEC;
    return;
L_08904FEC:
    ctx.gpr[31] = (0x08904FF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 486u, 0x088EAAE0u>(ctx, &aot_mem) && ctx.pc == 0x08904FF4u) goto L_08904FF4;
    return;
L_08904FF4:
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
      if (branch_taken) {
          goto L_089050A0;
      }
      goto L_0890500C;
    }
L_0890500C:
    ctx.gpr[31] = (0x08905014u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08905014u) goto L_08905014;
    return;
L_08905014:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[5] = (17389u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 9830u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (50390u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 45875u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x0890503Cu);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x0890503Cu) goto L_0890503C;
    return;
L_0890503C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0890504Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x0890504Cu) goto L_0890504C;
    return;
L_0890504C:
    ctx.gpr[31] = (0x08905054u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 486u, 0x088EAAE0u>(ctx, &aot_mem) && ctx.pc == 0x08905054u) goto L_08905054;
    return;
L_08905054:
    ctx.gpr[4] = (16499u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905094;
      }
      goto L_08905070;
    }
L_08905070:
    ctx.gpr[31] = (0x08905078u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08905078u) goto L_08905078;
    return;
L_08905078:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089050A0;
      }
      goto L_08905094;
    }
L_08905094:
    ctx.gpr[4] = (0u | 38u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089050A0;
L_089050A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(400));
    ctx.gpr[31] = (0x089050CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 624u, 0x088EBE0Cu>(ctx, &aot_mem) && ctx.pc == 0x089050CCu) goto L_089050CC;
    return;
L_089050CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905114;
      }
      goto L_089050D4;
    }
L_089050D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089050FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 413u, 0x08AF9D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089050FCu) goto L_089050FC;
    return;
L_089050FC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905114;
      }
      goto L_08905108;
    }
L_08905108:
    ctx.gpr[4] = (0u | 23u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08905114;
L_08905114:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905184;
      }
      goto L_08905130;
    }
L_08905130:
    ctx.gpr[31] = (0x08905138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 420u, 0x08ACA938u>(ctx, &aot_mem) && ctx.pc == 0x08905138u) goto L_08905138;
    return;
L_08905138:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905184;
      }
      goto L_08905140;
    }
L_08905140:
    ctx.gpr[31] = (0x08905148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x08905148u) goto L_08905148;
    return;
L_08905148:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905184;
      }
      goto L_08905150;
    }
L_08905150:
    ctx.gpr[31] = (0x08905158u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x08905158u) goto L_08905158;
    return;
L_08905158:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905184;
      }
      goto L_08905160;
    }
L_08905160:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(87)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905184;
      }
      goto L_0890516C;
    }
L_0890516C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905184;
      }
      goto L_08905178;
    }
L_08905178:
    ctx.gpr[4] = (0u | 37u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08905184;
L_08905184:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2376))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890519C;
      }
      goto L_08905190;
    }
L_08905190:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2376))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0890519C;
L_0890519C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_089051A8;
    }
L_089051A8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_089051B0;
    }
L_089051B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905240;
      }
      goto L_089051C0;
    }
L_089051C0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905240;
      }
      goto L_089051D0;
    }
L_089051D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905240;
      }
      goto L_089051E0;
    }
L_089051E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905240;
      }
      goto L_089051F0;
    }
L_089051F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905240;
      }
      goto L_08905200;
    }
L_08905200:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905240;
      }
      goto L_08905210;
    }
L_08905210:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08905238u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 534u, 0x088EAEDCu>(ctx, &aot_mem) && ctx.pc == 0x08905238u) goto L_08905238;
    return;
L_08905238:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089052F0;
      }
      goto L_08905240;
    }
L_08905240:
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
    ctx.gpr[31] = (0x08905270u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x08905270u) goto L_08905270;
    return;
L_08905270:
    ctx.gpr[4] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089052E0;
      }
      goto L_0890527C;
    }
L_0890527C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089052D0;
      }
      goto L_08905290;
    }
L_08905290:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089052B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 534u, 0x088EAEDCu>(ctx, &aot_mem) && ctx.pc == 0x089052B8u) goto L_089052B8;
    return;
L_089052B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089052D0;
      }
      goto L_089052C0;
    }
L_089052C0:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_089052D0;
    }
L_089052D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_089052E0;
    }
L_089052E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_089052F0;
    }
L_089052F0:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_08905304;
    }
L_08905304:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1376));
    ctx.gpr[31] = (0x0890531Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x0890531Cu) goto L_0890531C;
    return;
L_0890531C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08905328u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 483u, 0x088EAA8Cu>(ctx, &aot_mem) && ctx.pc == 0x08905328u) goto L_08905328;
    return;
L_08905328:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1392));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(2432));
    ctx.gpr[31] = (0x08905338u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08905338u) goto L_08905338;
    return;
L_08905338:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1408));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x08905368u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08905368u) goto L_08905368;
    return;
L_08905368:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890537C;
      }
      goto L_08905374;
    }
L_08905374:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_0890537C;
    }
L_0890537C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089053A0;
      }
      goto L_08905398;
    }
L_08905398:
    ctx.gpr[4] = (16400u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089053A0;
L_089053A0:
    ctx.gpr[31] = (0x089053A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089053A8u) goto L_089053A8;
    return;
L_089053A8:
    ctx.gpr[31] = (0x089053B0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 828u, 0x08AFB970u>(ctx, &aot_mem) && ctx.pc == 0x089053B0u) goto L_089053B0;
    return;
L_089053B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_089053B8;
    }
L_089053B8:
    ctx.gpr[31] = (0x089053C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089053C0u) goto L_089053C0;
    return;
L_089053C0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905400;
      }
      goto L_089053CC;
    }
L_089053CC:
    ctx.gpr[31] = (0x089053D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x089053D4u) goto L_089053D4;
    return;
L_089053D4:
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089053F4;
      }
      goto L_089053E0;
    }
L_089053E0:
    ctx.gpr[31] = (0x089053E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x089053E8u) goto L_089053E8;
    return;
L_089053E8:
    ctx.gpr[4] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905400;
      }
      goto L_089053F4;
    }
L_089053F4:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905408;
      }
      goto L_08905400;
    }
L_08905400:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23892)));
    goto L_08905408;
L_08905408:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x08905420u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 481u, 0x088EAA6Cu>(ctx, &aot_mem) && ctx.pc == 0x08905420u) goto L_08905420;
    return;
L_08905420:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x0890543Cu);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 481u, 0x088EAA6Cu>(ctx, &aot_mem) && ctx.pc == 0x0890543Cu) goto L_0890543C;
    return;
L_0890543C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1408)));
    ctx.gpr[31] = (0x08905448u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1412)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 504u, 0x088EAC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08905448u) goto L_08905448;
    return;
L_08905448:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[31] = (0x08905458u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1396)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 504u, 0x088EAC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08905458u) goto L_08905458;
    return;
L_08905458:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905488;
      }
      goto L_08905478;
    }
L_08905478:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890551C;
      }
      goto L_08905488;
    }
L_08905488:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089054CC;
      }
      goto L_0890549C;
    }
L_0890549C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890551C;
      }
      goto L_089054CC;
    }
L_089054CC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890551C;
      }
      goto L_089054DC;
    }
L_089054DC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890551C;
      }
      goto L_089054E4;
    }
L_089054E4:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905504;
      }
      goto L_089054F8;
    }
L_089054F8:
    ctx.gpr[4] = (16544u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08905510;
      }
      goto L_08905504;
    }
L_08905504:
    ctx.gpr[4] = (16563u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08905510;
L_08905510:
    ctx.gpr[4] = (0u | 35u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0890551C;
L_0890551C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890566C;
      }
      goto L_08905530;
    }
L_08905530:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23889)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_08905540;
    }
L_08905540:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1472), 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[31] = (0x08905550u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x08905550u) goto L_08905550;
    return;
L_08905550:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890555Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x0890555Cu) goto L_0890555C;
    return;
L_0890555C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1424)));
    ctx.gpr[31] = (0x08905568u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 384u, 0x08AF9AE8u>(ctx, &aot_mem) && ctx.pc == 0x08905568u) goto L_08905568;
    return;
L_08905568:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[31] = (0x08905580u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08905580u) goto L_08905580;
    return;
L_08905580:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[4] = (16275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089055ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 410u, 0x088EA4E8u>(ctx, &aot_mem) && ctx.pc == 0x089055ACu) goto L_089055AC;
    return;
L_089055AC:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(1472));
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x089055E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 489u, 0x088C697Cu>(ctx, &aot_mem) && ctx.pc == 0x089055E8u) goto L_089055E8;
    return;
L_089055E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905634;
      }
      goto L_089055F0;
    }
L_089055F0:
    ctx.gpr[31] = (0x089055F8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1440));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 431u, 0x08AF9F18u>(ctx, &aot_mem) && ctx.pc == 0x089055F8u) goto L_089055F8;
    return;
L_089055F8:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1488));
    ctx.gpr[31] = (0x08905604u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 396u, 0x08AF9C28u>(ctx, &aot_mem) && ctx.pc == 0x08905604u) goto L_08905604;
    return;
L_08905604:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1504));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0890561Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x0890561Cu) goto L_0890561C;
    return;
L_0890561C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0890562Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x0890562Cu) goto L_0890562C;
    return;
L_0890562C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905658;
      }
      goto L_08905634;
    }
L_08905634:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1520));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08905648u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08905648u) goto L_08905648;
    return;
L_08905648:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(1424));
    ctx.gpr[31] = (0x08905658u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 347u, 0x088EE45Cu>(ctx, &aot_mem) && ctx.pc == 0x08905658u) goto L_08905658;
    return;
L_08905658:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(23889), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905674;
      }
      goto L_0890566C;
    }
L_0890566C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23889), static_cast<std::uint8_t>(0u));
    goto L_08905674;
L_08905674:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22302))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905694;
      }
      goto L_08905684;
    }
L_08905684:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(22302))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08905694;
L_08905694:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
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
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089056D0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x089056D0u) goto L_089056D0;
    return;
L_089056D0:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089056EC;
      }
      goto L_089056DC;
    }
L_089056DC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(23890), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08905708;
      }
      goto L_089056EC;
    }
L_089056EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23890)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905708;
      }
      goto L_089056FC;
    }
L_089056FC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23890), static_cast<std::uint8_t>(0u));
    goto L_08905708;
L_08905708:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32440)));
    ctx.gpr[5] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905760;
      }
      goto L_0890571C;
    }
L_0890571C:
    ctx.gpr[31] = (0x08905724u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x08905724u) goto L_08905724;
    return;
L_08905724:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905760;
      }
      goto L_08905730;
    }
L_08905730:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905758;
      }
      goto L_08905748;
    }
L_08905748:
    ctx.gpr[31] = (0x08905750u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 412u, 0x08AF9D68u>(ctx, &aot_mem) && ctx.pc == 0x08905750u) goto L_08905750;
    return;
L_08905750:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905764;
      }
      goto L_08905758;
    }
L_08905758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08905764;
      }
      goto L_08905760;
    }
L_08905760:
    ctx.gpr[18] = (0u | 0u);
    goto L_08905764;
L_08905764:
    ctx.gpr[31] = (0x0890576Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x0890576Cu) goto L_0890576C;
    return;
L_0890576C:
    ctx.gpr[4] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-32440), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089057C4;
      }
      goto L_08905780;
    }
L_08905780:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-32436), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089057E8;
      }
      goto L_089057C4;
    }
L_089057C4:
    ctx.gpr[31] = (0x089057CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x089057CCu) goto L_089057CC;
    return;
L_089057CC:
    ctx.gpr[4] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089057E8;
      }
      goto L_089057D8;
    }
L_089057D8:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-32436)));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089057E8;
L_089057E8:
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
    ctx.gpr[31] = (0x08905818u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x08905818u) goto L_08905818;
    return;
L_08905818:
    ctx.gpr[4] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905998;
      }
      goto L_08905824;
    }
L_08905824:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905864;
      }
      goto L_08905854;
    }
L_08905854:
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[5] = (2231u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08905998;
      }
      goto L_08905864;
    }
L_08905864:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08905870u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 413u, 0x08AF9D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08905870u) goto L_08905870;
    return;
L_08905870:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890595C;
      }
      goto L_08905878;
    }
L_08905878:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890595C;
      }
      goto L_08905890;
    }
L_08905890:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_08905948;
      }
      goto L_089058A4;
    }
L_089058A4:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089058B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 468u, 0x08AFA1ECu>(ctx, &aot_mem) && ctx.pc == 0x089058B0u) goto L_089058B0;
    return;
L_089058B0:
    ctx.gpr[4] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(1536));
      if (branch_taken) {
          goto L_08905948;
      }
      goto L_089058BC;
    }
L_089058BC:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x089058CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089058CCu) goto L_089058CC;
    return;
L_089058CC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089058D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089058D8u) goto L_089058D8;
    return;
L_089058D8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x089058E8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x089058E8u) goto L_089058E8;
    return;
L_089058E8:
    ctx.gpr[31] = (0x089058F0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x089058F0u) goto L_089058F0;
    return;
L_089058F0:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905948;
      }
      goto L_08905908;
    }
L_08905908:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0890595C;
      }
      goto L_08905948;
    }
L_08905948:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905890;
      }
      goto L_0890595C;
    }
L_0890595C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905998;
      }
      goto L_08905964;
    }
L_08905964:
    ctx.gpr[4] = (0u | 29u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08905998;
L_08905998:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905CA8;
      }
      goto L_089059A8;
    }
L_089059A8:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_089059BC;
    }
L_089059BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_089059CC;
    }
L_089059CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_089059DC;
    }
L_089059DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_089059EC;
    }
L_089059EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_089059FC;
    }
L_089059FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_08905A0C;
    }
L_08905A0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_08905A1C;
    }
L_08905A1C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_08905A2C;
    }
L_08905A2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_08905A3C;
    }
L_08905A3C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_08905A4C;
    }
L_08905A4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905A64;
      }
      goto L_08905A58;
    }
L_08905A58:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08905A64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 498u, 0x088EF15Cu>(ctx, &aot_mem) && ctx.pc == 0x08905A64u) goto L_08905A64;
    return;
L_08905A64:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(736));
    ctx.gpr[31] = (0x08905AD8u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2448));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08905AD8u) goto L_08905AD8;
    return;
L_08905AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x08905B0Cu);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2464));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08905B0Cu) goto L_08905B0C;
    return;
L_08905B0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x08905B38u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2480));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08905B38u) goto L_08905B38;
    return;
L_08905B38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
        goto L_08905B74;
    }
    goto L_08905B68;
L_08905B68:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08905B74;
      }
      goto L_08905B74;
    }
L_08905B74:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1552));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08905BA8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 482u, 0x088EAA78u>(ctx, &aot_mem) && ctx.pc == 0x08905BA8u) goto L_08905BA8;
    return;
L_08905BA8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08905BB4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892751Cu>(ctx, &aot_mem) && ctx.pc == 0x08905BB4u) goto L_08905BB4;
    return;
L_08905BB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905C24;
      }
      goto L_08905BBC;
    }
L_08905BBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(784));
      if (branch_taken) {
          goto L_08905BF4;
      }
      goto L_08905BE8;
    }
L_08905BE8:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08905BF8;
      }
      goto L_08905BF4;
    }
L_08905BF4:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    goto L_08905BF8;
L_08905BF8:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08905C24u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08905C24u) goto L_08905C24;
    return;
L_08905C24:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x08905C64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08905C64u) goto L_08905C64;
    return;
L_08905C64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x08905C90u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08905C90u) goto L_08905C90;
    return;
L_08905C90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6857), static_cast<std::uint8_t>(0u));
    goto L_08905CA8;
L_08905CA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29215)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905CC4;
      }
      goto L_08905CB8;
    }
L_08905CB8:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08905CC4;
L_08905CC4:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905D30;
      }
      goto L_08905CD4;
    }
L_08905CD4:
    ctx.gpr[31] = (0x08905CDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 412u, 0x08AF9D68u>(ctx, &aot_mem) && ctx.pc == 0x08905CDCu) goto L_08905CDC;
    return;
L_08905CDC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905D0C;
      }
      goto L_08905CE4;
    }
L_08905CE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905D30;
      }
      goto L_08905D00;
    }
L_08905D00:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(102), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08905D30;
      }
      goto L_08905D0C;
    }
L_08905D0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(204)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08905D30;
      }
      goto L_08905D28;
    }
L_08905D28:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(103), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08905D30;
L_08905D30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905D40;
    }
L_08905D40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905D50;
    }
L_08905D50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905D60;
    }
L_08905D60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905D70;
    }
L_08905D70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905D80;
    }
L_08905D80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905D90;
    }
L_08905D90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905DA0;
    }
L_08905DA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905DB0;
    }
L_08905DB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905DC0;
    }
L_08905DC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905DD0;
    }
L_08905DD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905DE0;
    }
L_08905DE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905DF0;
    }
L_08905DF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E00;
    }
L_08905E00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E10;
    }
L_08905E10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E20;
    }
L_08905E20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E30;
    }
L_08905E30:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E40;
    }
L_08905E40:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E50;
    }
L_08905E50:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E60;
    }
L_08905E60:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E70;
    }
L_08905E70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E80;
    }
L_08905E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E90;
    }
L_08905E90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08905EA8;
      }
      goto L_08905E9C;
    }
L_08905E9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905EAC;
      }
      goto L_08905EA8;
    }
L_08905EA8:
    ctx.gpr[18] = (0u | 0u);
    goto L_08905EAC;
L_08905EAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(102)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08905ED0;
      }
      goto L_08905EB8;
    }
L_08905EB8:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905ED0;
      }
      goto L_08905EC0;
    }
L_08905EC0:
    ctx.gpr[31] = (0x08905EC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 512u, 0x088EF234u>(ctx, &aot_mem) && ctx.pc == 0x08905EC8u) goto L_08905EC8;
    return;
L_08905EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905F64;
      }
      goto L_08905ED0;
    }
L_08905ED0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(103)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08905F3C;
      }
      goto L_08905EDC;
    }
L_08905EDC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905F3C;
      }
      goto L_08905EE4;
    }
L_08905EE4:
    ctx.gpr[31] = (0x08905EECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 412u, 0x08AF9D68u>(ctx, &aot_mem) && ctx.pc == 0x08905EECu) goto L_08905EEC;
    return;
L_08905EEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905F2C;
      }
      goto L_08905EF4;
    }
L_08905EF4:
    ctx.gpr[31] = (0x08905EFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08905EFCu) goto L_08905EFC;
    return;
L_08905EFC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905F1C;
      }
      goto L_08905F08;
    }
L_08905F08:
    ctx.gpr[31] = (0x08905F10u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 458u, 0x08AFA16Cu>(ctx, &aot_mem) && ctx.pc == 0x08905F10u) goto L_08905F10;
    return;
L_08905F10:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08905F2C;
      }
      goto L_08905F1C;
    }
L_08905F1C:
    ctx.gpr[31] = (0x08905F24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 538u, 0x088EF490u>(ctx, &aot_mem) && ctx.pc == 0x08905F24u) goto L_08905F24;
    return;
L_08905F24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905F64;
      }
      goto L_08905F2C;
    }
L_08905F2C:
    ctx.gpr[31] = (0x08905F34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 524u, 0x088EF33Cu>(ctx, &aot_mem) && ctx.pc == 0x08905F34u) goto L_08905F34;
    return;
L_08905F34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08905F64;
      }
      goto L_08905F3C;
    }
L_08905F3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905F58;
      }
      goto L_08905F48;
    }
L_08905F48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(103)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08905F58;
      }
      goto L_08905F54;
    }
L_08905F54:
    ctx.gpr[22] = (0u | 1u);
    goto L_08905F58;
L_08905F58:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08905F64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 558u, 0x088EF628u>(ctx, &aot_mem) && ctx.pc == 0x08905F64u) goto L_08905F64;
    return;
L_08905F64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089077A0;
      }
      goto L_08905F74;
    }
L_08905F74:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905FA8;
      }
      goto L_08905F88;
    }
L_08905F88:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905FA8;
      }
      goto L_08905F98;
    }
L_08905F98:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08905FB0;
      }
      goto L_08905FA8;
    }
L_08905FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08906068;
      }
      goto L_08905FB0;
    }
L_08905FB0:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08905FD4;
      }
      goto L_08905FC4;
    }
L_08905FC4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906020;
      }
      goto L_08905FD4;
    }
L_08905FD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 16u);
      if (branch_taken) {
          goto L_08906014;
      }
      goto L_08906004;
    }
L_08906004:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08906014;
      }
      goto L_0890600C;
    }
L_0890600C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906068;
      }
      goto L_08906014;
    }
L_08906014:
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906068;
      }
      goto L_08906020;
    }
L_08906020:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906068;
      }
      goto L_08906034;
    }
L_08906034:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906068;
      }
      goto L_08906064;
    }
L_08906064:
    ctx.gpr[22] = (0u | 1u);
    goto L_08906068;
L_08906068:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_0890608C;
      }
      goto L_0890607C;
    }
L_0890607C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906284;
      }
      goto L_0890608C;
    }
L_0890608C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906284;
      }
      goto L_08906098;
    }
L_08906098:
    ctx.gpr[31] = (0x089060A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 413u, 0x08AF9D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089060A0u) goto L_089060A0;
    return;
L_089060A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906284;
      }
      goto L_089060A8;
    }
L_089060A8:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906280;
      }
      goto L_089060BC;
    }
L_089060BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906280;
      }
      goto L_089060EC;
    }
L_089060EC:
    ctx.gpr[31] = (0x089060F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB97Cu>(ctx, &aot_mem) && ctx.pc == 0x089060F4u) goto L_089060F4;
    return;
L_089060F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906150;
      }
      goto L_089060FC;
    }
L_089060FC:
    ctx.gpr[31] = (0x08906104u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB97Cu>(ctx, &aot_mem) && ctx.pc == 0x08906104u) goto L_08906104;
    return;
L_08906104:
    ctx.gpr[31] = (0x0890610Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x0890610Cu) goto L_0890610C;
    return;
L_0890610C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08906118u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08906118u) goto L_08906118;
    return;
L_08906118:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1568));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08906128u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08906128u) goto L_08906128;
    return;
L_08906128:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1568)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08906138u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1572)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B60u>(ctx, &aot_mem) && ctx.pc == 0x08906138u) goto L_08906138;
    return;
L_08906138:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906168;
      }
      goto L_08906150;
    }
L_08906150:
    ctx.gpr[31] = (0x08906158u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 399u, 0x08AF9C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08906158u) goto L_08906158;
    return;
L_08906158:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    goto L_08906168;
L_08906168:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089061C0;
      }
      goto L_089061AC;
    }
L_089061AC:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
      if (branch_taken) {
          goto L_08906214;
      }
      goto L_089061C0;
    }
L_089061C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906214;
      }
      goto L_08906204;
    }
L_08906204:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08906214;
L_08906214:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(604)));
    ctx.gpr[31] = (0x08906240u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 457u, 0x088EA84Cu>(ctx, &aot_mem) && ctx.pc == 0x08906240u) goto L_08906240;
    return;
L_08906240:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22288)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08906278;
      }
      goto L_08906274;
    }
L_08906274:
    ctx.gpr[22] = (0u | 1u);
    goto L_08906278;
L_08906278:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906284;
      }
      goto L_08906280;
    }
L_08906280:
    ctx.gpr[22] = (0u | 1u);
    goto L_08906284;
L_08906284:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27452)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089062DC;
      }
      goto L_08906294;
    }
L_08906294:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089062DC;
      }
      goto L_089062A4;
    }
L_089062A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089062DC;
      }
      goto L_089062D4;
    }
L_089062D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_089063D0;
      }
      goto L_089062DC;
    }
L_089062DC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906358;
      }
      goto L_089062F0;
    }
L_089062F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906350;
      }
      goto L_08906320;
    }
L_08906320:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089063D0;
      }
      goto L_08906350;
    }
L_08906350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_089063D0;
      }
      goto L_08906358;
    }
L_08906358:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089063D0;
      }
      goto L_0890636C;
    }
L_0890636C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089063CC;
      }
      goto L_0890639C;
    }
L_0890639C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089063D0;
      }
      goto L_089063CC;
    }
L_089063CC:
    ctx.gpr[22] = (0u | 0u);
    goto L_089063D0;
L_089063D0:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_089063E4;
    }
L_089063E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_089063F4;
    }
L_089063F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906404;
    }
L_08906404:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906414;
    }
L_08906414:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906424;
    }
L_08906424:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906434;
    }
L_08906434:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906444;
    }
L_08906444:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906454;
    }
L_08906454:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906464;
    }
L_08906464:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906474;
    }
L_08906474:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906484;
    }
L_08906484:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089064A4;
      }
      goto L_08906494;
    }
L_08906494:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089064BC;
      }
      goto L_089064A4;
    }
L_089064A4:
    ctx.gpr[31] = (0x089064ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 413u, 0x08AF9D7Cu>(ctx, &aot_mem) && ctx.pc == 0x089064ACu) goto L_089064AC;
    return;
L_089064AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089064BC;
      }
      goto L_089064B4;
    }
L_089064B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_089064BC;
    }
L_089064BC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890674C;
      }
      goto L_089064D0;
    }
L_089064D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890674C;
      }
      goto L_089064E0;
    }
L_089064E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_08906510;
L_08906510:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_08906540;
L_08906540:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_08906570;
L_08906570:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_089065A0;
L_089065A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_089065D0;
L_089065D0:
    if (ctx.gpr[23] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_089065D8;
L_089065D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_08906608;
L_08906608:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_08906638;
L_08906638:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_08906668;
L_08906668:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_08906698;
L_08906698:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 43u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_089066C8;
L_089066C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 41u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
        goto L_0890672C;
    }
    goto L_089066F8;
L_089066F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_08906728;
    }
L_08906728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    goto L_0890672C;
L_0890672C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_08906734;
    }
L_08906734:
    ctx.gpr[31] = (0x0890673Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 412u, 0x08AF9D68u>(ctx, &aot_mem) && ctx.pc == 0x0890673Cu) goto L_0890673C;
    return;
L_0890673C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_08906744;
    }
L_08906744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_0890674C;
    }
L_0890674C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906F30;
      }
      goto L_08906760;
    }
L_08906760:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089067C4;
      }
      goto L_08906794;
    }
L_08906794:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089067D8;
      }
      goto L_089067C4;
    }
L_089067C4:
    ctx.gpr[31] = (0x089067CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 276u, 0x0899DC04u>(ctx, &aot_mem) && ctx.pc == 0x089067CCu) goto L_089067CC;
    return;
L_089067CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089067D8;
      }
      goto L_089067D4;
    }
L_089067D4:
    ctx.gpr[19] = (0u | 1u);
    goto L_089067D8;
L_089067D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906808;
    }
L_08906808:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906838;
    }
L_08906838:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906868;
    }
L_08906868:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906898;
    }
L_08906898:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_089068C8;
    }
L_089068C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_089068F8;
    }
L_089068F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906928;
    }
L_08906928:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906958;
    }
L_08906958:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906988;
    }
L_08906988:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_089069B8;
    }
L_089069B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_089069E8;
    }
L_089069E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906A18;
    }
L_08906A18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906A48;
    }
L_08906A48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906A78;
    }
L_08906A78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906AA8;
    }
L_08906AA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906AD8;
    }
L_08906AD8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906B08;
    }
L_08906B08:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906B18;
      }
      goto L_08906B10;
    }
L_08906B10:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906F18;
      }
      goto L_08906B18;
    }
L_08906B18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08906F18;
      }
      goto L_08906B24;
    }
L_08906B24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906B54;
    }
L_08906B54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906B84;
    }
L_08906B84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906BB4;
    }
L_08906BB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906BE4;
    }
L_08906BE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906C14;
    }
L_08906C14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906C44;
    }
L_08906C44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906C74;
    }
L_08906C74:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906CA4;
    }
L_08906CA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906CD4;
    }
L_08906CD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D34;
      }
      goto L_08906D04;
    }
L_08906D04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906D88;
      }
      goto L_08906D34;
    }
L_08906D34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08906D60u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 504u, 0x088EAC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08906D60u) goto L_08906D60;
    return;
L_08906D60:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08906D88;
L_08906D88:
    ctx.gpr[22] = (0u | 1u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(111), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906EB0;
      }
      goto L_08906DCC;
    }
L_08906DCC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(1584));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(832));
    ctx.gpr[31] = (0x08906E00u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08906E00u) goto L_08906E00;
    return;
L_08906E00:
    ctx.gpr[31] = (0x08906E08u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x08906E08u) goto L_08906E08;
    return;
L_08906E08:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08906E18u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 407u, 0x088EA498u>(ctx, &aot_mem) && ctx.pc == 0x08906E18u) goto L_08906E18;
    return;
L_08906E18:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1592), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08906E28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 484u, 0x088EAA9Cu>(ctx, &aot_mem) && ctx.pc == 0x08906E28u) goto L_08906E28;
    return;
L_08906E28:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1584), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08906E70;
      }
      goto L_08906E44;
    }
L_08906E44:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08906E70;
      }
      goto L_08906E64;
    }
L_08906E64:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1588), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08906E70;
L_08906E70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1584)));
    ctx.gpr[31] = (0x08906E7Cu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1588)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 504u, 0x088EAC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08906E7Cu) goto L_08906E7C;
    return;
L_08906E7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08906F18;
      }
      goto L_08906EB0;
    }
L_08906EB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.gpr[31] = (0x08906EDCu);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 504u, 0x088EAC4Cu>(ctx, &aot_mem) && ctx.pc == 0x08906EDCu) goto L_08906EDC;
    return;
L_08906EDC:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(572), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08906F18;
L_08906F18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08906F28;
      }
      goto L_08906F24;
    }
L_08906F24:
    ctx.gpr[22] = (0u | 1u);
    goto L_08906F28;
L_08906F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_08906F30;
    }
L_08906F30:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906F7C;
      }
      goto L_08906F44;
    }
L_08906F44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_08906F74;
    }
L_08906F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_08906F7C;
    }
L_08906F7C:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906F98;
      }
      goto L_08906F90;
    }
L_08906F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_08906F98;
    }
L_08906F98:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 32u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906FCC;
      }
      goto L_08906FAC;
    }
L_08906FAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08906FCC;
      }
      goto L_08906FBC;
    }
L_08906FBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08906FD4;
      }
      goto L_08906FCC;
    }
L_08906FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_08906FD4;
    }
L_08906FD4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_0890700C;
    }
L_0890700C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907020;
      }
      goto L_0890701C;
    }
L_0890701C:
    ctx.gpr[22] = (0u | 1u);
    goto L_08907020;
L_08907020:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (2232u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907094;
      }
      goto L_0890705C;
    }
L_0890705C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907094;
      }
      goto L_08907090;
    }
L_08907090:
    ctx.gpr[22] = (0u | 1u);
    goto L_08907094;
L_08907094:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890715C;
      }
      goto L_089070A0;
    }
L_089070A0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890715C;
      }
      goto L_089070B4;
    }
L_089070B4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08907100;
      }
      goto L_089070D0;
    }
L_089070D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08907100;
      }
      goto L_089070E8;
    }
L_089070E8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2368)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890715C;
      }
      goto L_08907100;
    }
L_08907100:
    ctx.gpr[31] = (0x08907108u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 412u, 0x08AF9D68u>(ctx, &aot_mem) && ctx.pc == 0x08907108u) goto L_08907108;
    return;
L_08907108:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890715C;
      }
      goto L_08907110;
    }
L_08907110:
    ctx.gpr[31] = (0x08907118u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 358u, 0x08AF995Cu>(ctx, &aot_mem) && ctx.pc == 0x08907118u) goto L_08907118;
    return;
L_08907118:
    ctx.gpr[4] = (0u | 154u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890715C;
      }
      goto L_08907124;
    }
L_08907124:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890715C;
      }
      goto L_08907158;
    }
L_08907158:
    ctx.gpr[22] = (0u | 1u);
    goto L_0890715C;
L_0890715C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907178;
      }
      goto L_08907168;
    }
L_08907168:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089074A0;
      }
      goto L_08907174;
    }
L_08907174:
    ctx.gpr[4] = (2231u << 16u);
    goto L_08907178;
L_08907178:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089074A0;
      }
      goto L_089071A8;
    }
L_089071A8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0890743C;
      }
      goto L_089071B4;
    }
L_089071B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089071CC;
      }
      goto L_089071C0;
    }
L_089071C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_089071CC;
    }
L_089071CC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_089071E0;
    }
L_089071E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_089071F0;
    }
L_089071F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_08907200;
    }
L_08907200:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_08907210;
    }
L_08907210:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_08907220;
    }
L_08907220:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_08907230;
    }
L_08907230:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_08907240;
    }
L_08907240:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_08907250;
    }
L_08907250:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 35u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_08907260;
    }
L_08907260:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(23516)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907278;
      }
      goto L_0890726C;
    }
L_0890726C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08907278u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 498u, 0x088EF15Cu>(ctx, &aot_mem) && ctx.pc == 0x08907278u) goto L_08907278;
    return;
L_08907278:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(736));
    ctx.gpr[31] = (0x089072E0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2448));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x089072E0u) goto L_089072E0;
    return;
L_089072E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x08907314u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2464));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08907314u) goto L_08907314;
    return;
L_08907314:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x08907340u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2480));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08907340u) goto L_08907340;
    return;
L_08907340:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(784));
      if (branch_taken) {
          goto L_08907380;
      }
      goto L_08907374;
    }
L_08907374:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08907384;
      }
      goto L_08907380;
    }
L_08907380:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    goto L_08907384;
L_08907384:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x089073B0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x089073B0u) goto L_089073B0;
    return;
L_089073B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6857), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x08907408u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907408u) goto L_08907408;
    return;
L_08907408:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x08907434u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907434u) goto L_08907434;
    return;
L_08907434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_0890743C;
    }
L_0890743C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_08907448;
    }
L_08907448:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[31] = (0x08907458u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08907FD0;
L_08907458:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x0890746Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0890746Cu) goto L_0890746C;
    return;
L_0890746C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x08907498u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907498u) goto L_08907498;
    return;
L_08907498:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_089074A0;
    }
L_089074A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_089076D0;
      }
      goto L_089074AC;
    }
L_089074AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089076D0;
      }
      goto L_089074DC;
    }
L_089074DC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907524;
      }
      goto L_089074F4;
    }
L_089074F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907528;
      }
      goto L_08907524;
    }
L_08907524:
    ctx.gpr[16] = (0u | 0u);
    goto L_08907528;
L_08907528:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907570;
      }
      goto L_0890753C;
    }
L_0890753C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907570;
      }
      goto L_0890756C;
    }
L_0890756C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08907570;
L_08907570:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(114)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0890765C;
      }
      goto L_0890757C;
    }
L_0890757C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890765C;
      }
      goto L_08907588;
    }
L_08907588:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890765C;
      }
      goto L_08907594;
    }
L_08907594:
    ctx.gpr[31] = (0x0890759Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0890759Cu) goto L_0890759C;
    return;
L_0890759C:
    ctx.gpr[31] = (0x089075A4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089075A4u) goto L_089075A4;
    return;
L_089075A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1600), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089075BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089075BCu) goto L_089075BC;
    return;
L_089075BC:
    ctx.gpr[31] = (0x089075C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089075C4u) goto L_089075C4;
    return;
L_089075C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1604), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089075DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x089075DCu) goto L_089075DC;
    return;
L_089075DC:
    ctx.gpr[31] = (0x089075E4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 355u, 0x08AF993Cu>(ctx, &aot_mem) && ctx.pc == 0x089075E4u) goto L_089075E4;
    return;
L_089075E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890765C;
      }
      goto L_08907600;
    }
L_08907600:
    ctx.gpr[31] = (0x08907608u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 413u, 0x08AF9D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08907608u) goto L_08907608;
    return;
L_08907608:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0890765C;
      }
      goto L_08907610;
    }
L_08907610:
    ctx.gpr[31] = (0x08907618u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1600));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 485u, 0x088EAAC4u>(ctx, &aot_mem) && ctx.pc == 0x08907618u) goto L_08907618;
    return;
L_08907618:
    ctx.gpr[4] = (16780u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0890765C;
      }
      goto L_08907630;
    }
L_08907630:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907654;
      }
      goto L_08907644;
    }
L_08907644:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0890765C;
      }
      goto L_08907654;
    }
L_08907654:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0890765C;
L_0890765C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(114)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907670;
      }
      goto L_0890766C;
    }
L_0890766C:
    ctx.gpr[16] = (0u | 0u);
    goto L_08907670;
L_08907670:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089076C8;
      }
      goto L_08907678;
    }
L_08907678:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[31] = (0x08907688u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 290u, 0x088EE064u>(ctx, &aot_mem) && ctx.pc == 0x08907688u) goto L_08907688;
    return;
L_08907688:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x0890769Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0890769Cu) goto L_0890769C;
    return;
L_0890769C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x089076C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089076C8u) goto L_089076C8;
    return;
L_089076C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_089076D0;
    }
L_089076D0:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_089076E4;
    }
L_089076E4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_08907718;
    }
L_08907718:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(94)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_08907724;
    }
L_08907724:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907748;
      }
      goto L_08907730;
    }
L_08907730:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[31] = (0x08907740u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08907FD0;
L_08907740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907758;
      }
      goto L_08907748;
    }
L_08907748:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[31] = (0x08907758u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 290u, 0x088EE064u>(ctx, &aot_mem) && ctx.pc == 0x08907758u) goto L_08907758;
    return;
L_08907758:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x0890776Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0890776Cu) goto L_0890776C;
    return;
L_0890776C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x08907798u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907798u) goto L_08907798;
    return;
L_08907798:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_089077A0;
    }
L_089077A0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(121)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089077C8;
      }
      goto L_089077B8;
    }
L_089077B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(122)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089078C8;
      }
      goto L_089077C8;
    }
L_089077C8:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907818;
      }
      goto L_089077DC;
    }
L_089077DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (2231u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089078C8;
      }
      goto L_08907810;
    }
L_08907810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_089078C8;
      }
      goto L_08907818;
    }
L_08907818:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907848;
      }
      goto L_08907828;
    }
L_08907828:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907848;
      }
      goto L_08907838;
    }
L_08907838:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907878;
      }
      goto L_08907848;
    }
L_08907848:
    ctx.gpr[31] = (0x08907850u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08907850u) goto L_08907850;
    return;
L_08907850:
    ctx.gpr[31] = (0x08907858u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 79u, 0x08A982F0u>(ctx, &aot_mem) && ctx.pc == 0x08907858u) goto L_08907858;
    return;
L_08907858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907878;
      }
      goto L_08907860;
    }
L_08907860:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907878;
      }
      goto L_0890786C;
    }
L_0890786C:
    ctx.gpr[16] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089078C8;
      }
      goto L_08907878;
    }
L_08907878:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089078C8;
      }
      goto L_089078A8;
    }
L_089078A8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(7116), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089078C0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x089078C0u) goto L_089078C0;
    return;
L_089078C0:
    ctx.gpr[31] = (0x089078C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 227u, 0x08B00EC8u>(ctx, &aot_mem) && ctx.pc == 0x089078C8u) goto L_089078C8;
    return;
L_089078C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907954;
      }
      goto L_089078D4;
    }
L_089078D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(106)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907954;
      }
      goto L_089078E4;
    }
L_089078E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7116))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907954;
      }
      goto L_089078F4;
    }
L_089078F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[31] = (0x0890790Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08907FD0;
L_0890790C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x08907920u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907920u) goto L_08907920;
    return;
L_08907920:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x0890794Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0890794Cu) goto L_0890794C;
    return;
L_0890794C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_08907954;
    }
L_08907954:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(145)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089079E0;
      }
      goto L_08907960;
    }
L_08907960:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(106)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089079E0;
      }
      goto L_08907970;
    }
L_08907970:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7116))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089079E0;
      }
      goto L_08907980;
    }
L_08907980:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[31] = (0x08907998u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 290u, 0x088EE064u>(ctx, &aot_mem) && ctx.pc == 0x08907998u) goto L_08907998;
    return;
L_08907998:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x089079ACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089079ACu) goto L_089079AC;
    return;
L_089079AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x089079D8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089079D8u) goto L_089079D8;
    return;
L_089079D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_089079E0;
    }
L_089079E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(106)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907A00;
      }
      goto L_089079F0;
    }
L_089079F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7116))))));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907A08;
      }
      goto L_08907A00;
    }
L_08907A00:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907C1C;
      }
      goto L_08907A08;
    }
L_08907A08:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(145), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(6857), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(121)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2231u << 16u);
      if (branch_taken) {
          goto L_08907A60;
      }
      goto L_08907A20;
    }
L_08907A20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907A60;
      }
      goto L_08907A30;
    }
L_08907A30:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(-32446))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08907ABC;
      }
      goto L_08907A60;
    }
L_08907A60:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907A94;
      }
      goto L_08907A68;
    }
L_08907A68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2388))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08907ABC;
      }
      goto L_08907A94;
    }
L_08907A94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(7112))))));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08907ABC;
L_08907ABC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(736));
    ctx.gpr[31] = (0x08907AFCu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2448));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08907AFCu) goto L_08907AFC;
    return;
L_08907AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(752));
    ctx.gpr[31] = (0x08907B30u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2464));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08907B30u) goto L_08907B30;
    return;
L_08907B30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(768));
    ctx.gpr[31] = (0x08907B5Cu);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2480));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08907B5Cu) goto L_08907B5C;
    return;
L_08907B5C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[7] = (0u + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(418), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(784));
      if (branch_taken) {
          goto L_08907B9C;
      }
      goto L_08907B90;
    }
L_08907B90:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u - ctx.gpr[5]);
      if (branch_taken) {
          goto L_08907BA0;
      }
      goto L_08907B9C;
    }
L_08907B9C:
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08907BA0;
L_08907BA0:
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08907BC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(784));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 488u, 0x088EAB14u>(ctx, &aot_mem) && ctx.pc == 0x08907BC4u) goto L_08907BC4;
    return;
L_08907BC4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[31] = (0x08907BE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2740));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907BE0u) goto L_08907BE0;
    return;
L_08907BE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(996)));
    ctx.gpr[31] = (0x08907C0Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(996));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08907C0Cu) goto L_08907C0C;
    return;
L_08907C0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08907C1C;
L_08907C1C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(106), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(996)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907C7C;
      }
      goto L_08907C4C;
    }
L_08907C4C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2740)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(996), ctx.gpr[4]);
    goto L_08907C7C;
L_08907C7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907DDC;
      }
      goto L_08907CAC;
    }
L_08907CAC:
    ctx.gpr[31] = (0x08907CB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2740)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 413u, 0x08AF9D7Cu>(ctx, &aot_mem) && ctx.pc == 0x08907CB4u) goto L_08907CB4;
    return;
L_08907CB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907E00;
      }
      goto L_08907CBC;
    }
L_08907CBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907DDC;
      }
      goto L_08907CEC;
    }
L_08907CEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907DDC;
      }
      goto L_08907D1C;
    }
L_08907D1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 34u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907DDC;
      }
      goto L_08907D4C;
    }
L_08907D4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907DDC;
      }
      goto L_08907D7C;
    }
L_08907D7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907DDC;
      }
      goto L_08907DAC;
    }
L_08907DAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907E00;
      }
      goto L_08907DDC;
    }
L_08907DDC:
    ctx.gpr[31] = (0x08907DE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08907DE4u) goto L_08907DE4;
    return;
L_08907DE4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (65528u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08907E1C;
      }
      goto L_08907E00;
    }
L_08907E00:
    ctx.gpr[31] = (0x08907E08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08907E08u) goto L_08907E08;
    return;
L_08907E08:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08907E1C;
L_08907E1C:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907E50;
      }
      goto L_08907E28;
    }
L_08907E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907E50;
      }
      goto L_08907E38;
    }
L_08907E38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08907E44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 252u, 0x088EDCCCu>(ctx, &aot_mem) && ctx.pc == 0x08907E44u) goto L_08907E44;
    return;
L_08907E44:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[31] = (0x08907E50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 498u, 0x088EF15Cu>(ctx, &aot_mem) && ctx.pc == 0x08907E50u) goto L_08907E50;
    return;
L_08907E50:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2020)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08907EE8;
      }
      goto L_08907E80;
    }
L_08907E80:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907EE8;
      }
      goto L_08907E88;
    }
L_08907E88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907EE8;
      }
      goto L_08907EB8;
    }
L_08907EB8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907F90;
      }
      goto L_08907EE8;
    }
L_08907EE8:
    ctx.gpr[31] = (0x08907EF0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08907EF0u) goto L_08907EF0;
    return;
L_08907EF0:
    ctx.gpr[31] = (0x08907EF8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 49u, 0x08A981A4u>(ctx, &aot_mem) && ctx.pc == 0x08907EF8u) goto L_08907EF8;
    return;
L_08907EF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08907F90;
      }
      goto L_08907F00;
    }
L_08907F00:
    ctx.gpr[31] = (0x08907F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 787u, 0x08AFB568u>(ctx, &aot_mem) && ctx.pc == 0x08907F08u) goto L_08907F08;
    return;
L_08907F08:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907F90;
      }
      goto L_08907F10;
    }
L_08907F10:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(99)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
        goto L_08907F34;
    }
    goto L_08907F20;
L_08907F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907F90;
      }
      goto L_08907F30;
    }
L_08907F30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(117)));
    goto L_08907F34;
L_08907F34:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08907F90;
      }
      goto L_08907F3C;
    }
L_08907F3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907F7C;
      }
      goto L_08907F4C;
    }
L_08907F4C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(22300)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08907F90;
      }
      goto L_08907F60;
    }
L_08907F60:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (0u | 179u);
    ctx.gpr[31] = (0x08907F74u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08907F74u) goto L_08907F74;
    return;
L_08907F74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08907F90;
      }
      goto L_08907F7C;
    }
L_08907F7C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (0u | 179u);
    ctx.gpr[31] = (0x08907F90u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x08907F90u) goto L_08907F90;
    return;
L_08907F90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2048)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2052)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2056)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2060)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2064)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2072)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2076)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2092)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08907FD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    ctx.pc = 0x08908000u; return;
}

void recomp_unit_0064(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0064_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_64(Runtime &runtime) {
    runtime.register_generated_unit(64u, 0x08904000u, 16384u, &recomp_unit_0064, &recomp_unit_0064_entry);
    runtime.register_function(0x08904000u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890401Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904028u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890405Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904068u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904074u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089040DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890410Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904110u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904118u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904124u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890413Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904170u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890417Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089041F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904238u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904264u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890426Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904274u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089042F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904310u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904318u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904320u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904328u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904338u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904348u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890434Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904354u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904360u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890436Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904378u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904384u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904398u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089043F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904408u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904424u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904434u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904450u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890445Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904484u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904490u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089044FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904504u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904518u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904524u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904534u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890454Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904580u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890458Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089045D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904604u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904638u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904644u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904678u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904684u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904690u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089046E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890471Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904720u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890473Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904754u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890475Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089047FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904808u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904818u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904828u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904834u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890483Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904858u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089048F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904920u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904928u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904984u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904990u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089049F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904A70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904ACCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904AFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904B70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904BF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904C98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904CE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904D98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904DF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E6Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904E74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904ECCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904ED4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904EF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904F9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08904FF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890500Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905014u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890503Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890504Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905054u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905070u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905078u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905094u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089050FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905108u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905114u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905130u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905138u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905140u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905148u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905150u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905158u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905160u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890516Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905178u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905184u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905190u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890519Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089051F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905200u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905210u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905238u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905240u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905270u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890527Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905290u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089052F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905304u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890531Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905328u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905338u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905368u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905374u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890537Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905398u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089053F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905400u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905408u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905420u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890543Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905448u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905458u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905478u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905488u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890549Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089054F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905504u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905510u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890551Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905530u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905540u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905550u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890555Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905568u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905580u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089055F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905604u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890561Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890562Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905634u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905648u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905658u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890566Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905674u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905684u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905694u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089056FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905708u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890571Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905724u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905730u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905748u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905750u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905758u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905760u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905764u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890576Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905780u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089057E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905818u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905824u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905854u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905864u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905870u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905878u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905890u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089058F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905908u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905948u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890595Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905964u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905998u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089059FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905A64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905AD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905B74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905BF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905C90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905CE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905D90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DD0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905DF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E40u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905E9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EC0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EC8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905ED0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EF4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905EFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F2Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F58u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905F98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08905FD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906004u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890600Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906014u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906020u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906034u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906064u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906068u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890607Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890608Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906098u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060ECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089060FCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906104u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890610Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906118u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906128u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906138u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906150u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906158u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906168u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089061C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906204u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906214u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906240u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906274u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906278u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906280u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906284u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906294u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089062F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906320u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906350u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906358u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890636Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890639Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089063F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906404u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906414u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906424u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906434u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906444u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906454u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906464u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906474u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906484u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906494u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089064E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906510u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906540u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906570u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089065D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906608u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906638u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906668u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906698u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089066F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906728u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890672Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906734u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890673Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906744u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890674Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906760u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906794u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089067D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906808u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906838u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906868u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906898u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089068F8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906928u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906958u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906988u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089069E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A48u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906A78u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AA8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906AD8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B54u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906B84u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906BE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C14u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906C74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CA4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906CD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D04u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906D88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906DCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E64u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E70u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906E7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EB0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906EDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F18u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F24u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906F98u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FCCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08906FD4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890700Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890701Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907020u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890705Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907090u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907094u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089070E8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907100u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907108u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907110u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907118u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907124u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907158u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890715Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907168u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907174u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907178u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071B4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071CCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089071F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907200u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907210u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907220u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907230u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907240u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907250u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907260u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890726Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907278u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089072E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907314u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907340u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907374u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907380u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907384u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089073B0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907408u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907434u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890743Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907448u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907458u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890746Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907498u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089074F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907524u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907528u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890753Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890756Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907570u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890757Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907588u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907594u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890759Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075A4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075BCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075C4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089075E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907600u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907608u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907610u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907618u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907630u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907644u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907654u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890765Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890766Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907670u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907678u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907688u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890769Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076D0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089076E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907718u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907724u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907730u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907740u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907748u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907758u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890776Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907798u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077A0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077B8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089077DCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907810u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907818u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907828u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907838u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907848u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907850u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907858u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907860u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890786Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907878u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078A8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078C0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078C8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078D4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078E4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089078F4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890790Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907920u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x0890794Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907954u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907960u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907970u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907980u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907998u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079ACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079D8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079E0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x089079F0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A68u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907A94u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907ABCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907AFCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B5Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907B9Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BA0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BC4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907BE0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C0Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907C7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CB4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CBCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907CECu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907D7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DACu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DDCu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907DE4u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E1Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E28u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E38u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E44u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E50u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E80u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907E88u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EB8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EE8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EF0u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907EF8u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F00u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F08u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F10u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F20u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F30u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F34u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F3Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F4Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F60u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F74u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F7Cu, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907F90u, &recomp_unit_0064, "recomp_unit_0064");
    runtime.register_function(0x08907FD0u, &recomp_unit_0064, "recomp_unit_0064");
}
} // namespace psprecomp
