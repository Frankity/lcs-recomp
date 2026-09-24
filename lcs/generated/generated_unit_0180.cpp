#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0180[4095] = {
    1, 0, 2, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 10, 0, 0, 0, 0, 11,
    0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 0, 18, 0, 0, 19, 0, 0, 20, 0, 0, 0,
    0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 26, 0, 0, 27, 0, 0, 28, 0,
    0, 29, 0, 0, 0, 30, 0, 0, 31, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 35, 0, 0, 36, 0, 0, 0, 0, 37, 0, 0, 38, 0,
    0, 39, 0, 0, 40, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 0, 51, 0, 52,
    53, 0, 54, 0, 0, 55, 0, 0, 0, 0, 56, 0, 57, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 62,
    0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 0, 66, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 70, 0, 71, 0, 0,
    0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 79, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 0,
    0, 0, 84, 0, 0, 0, 0, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 87, 0, 88, 89, 0, 90, 0, 0, 91, 0, 0, 0, 0, 92,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 97, 0, 98, 99, 0,
    100, 0, 0, 101, 0, 0, 0, 0, 102, 0, 0, 103, 0, 104, 0, 105, 0, 0, 106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 110, 0, 0, 0,
    0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 113, 0, 0, 114, 0, 115, 116, 0, 117, 0, 0, 118, 0, 0, 0, 0,
    119, 0, 120, 0, 121, 0, 0, 0, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0,
    126, 0, 0, 127, 0, 128, 0, 129, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 0, 0, 138, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0,
    0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 145, 0, 146, 0,
    0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0,
    0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 157, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0,
    162, 0, 0, 0, 0, 163, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    168, 0, 0, 0, 0, 169, 0, 170, 0, 171, 0, 0, 0, 172, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 175, 0, 176, 0, 177,
    0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 0,
    0, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0,
    0, 0, 197, 0, 0, 0, 198, 0, 0, 0, 199, 0, 0, 0, 0, 0, 200, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0,
    0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 216, 0, 217,
    0, 218, 0, 219, 0, 220, 0, 221, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 0, 231, 0, 232, 0, 233, 0, 234, 235, 0, 236, 0, 237, 0, 238, 0, 239, 0,
    240, 241, 0, 0, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0,
    0, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0, 0, 248, 0, 249, 0, 0, 0, 250, 0, 251, 0, 0, 252,
    0, 253, 0, 0, 254, 0, 255, 0, 0, 256, 0, 257, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 261, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 266, 267, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 269, 0, 0, 0, 0, 270, 0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0,
    0, 278, 0, 279, 0, 0, 280, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 0, 287, 0, 288, 0,
    0, 289, 0, 290, 0, 291, 0, 0, 292, 0, 0, 293, 0, 294, 0, 0, 0, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 299, 0,
    0, 0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 306, 0, 0, 0, 0, 0, 307, 0, 0, 308,
    0, 0, 0, 309, 0, 310, 311, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 314, 0,
    0, 315, 0, 316, 0, 0, 317, 0, 0, 0, 318, 0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 0, 0, 0, 322, 0, 323, 0, 0, 324, 0,
    325, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 328, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 333,
    0, 334, 0, 0, 0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 339, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 344, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 352, 0, 353, 0, 0, 354, 0, 355, 0, 0, 356, 0,
    0, 0, 357, 0, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 362, 0, 0, 363, 0, 364, 0, 0,
    0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 369, 0, 370, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 374, 0, 0, 375, 0, 0, 376, 0, 0,
    377, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 380, 0, 0, 381, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 0, 387, 0,
    388, 0, 389, 0, 390, 391, 0, 392, 0, 0, 0, 393, 0, 394, 395, 0, 0, 396, 0, 0, 397, 0, 0, 398, 0, 0, 399, 0, 400, 0, 401, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 0, 406, 0, 0, 0, 407, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0,
    412, 0, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 0,
    425, 0, 426, 0, 0, 427, 0, 428, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 432, 0, 0, 0, 0, 433, 0, 0, 434, 0, 0, 0, 435,
    0, 436, 0, 0, 0, 437, 0, 438, 0, 439, 0, 440, 0, 441, 0, 442, 0, 443, 0, 444, 0, 445, 0, 446, 0, 447, 0, 448, 0, 449, 0, 0,
    0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0, 0, 0, 457, 0, 0,
    458, 0, 0, 459, 0, 0, 460, 0, 461, 0, 462, 0, 0, 0, 463, 0, 0, 0, 464, 0, 465, 0, 466, 0, 467, 0, 468, 0, 469, 0, 470, 0,
    471, 0, 472, 0, 473, 0, 474, 0, 475, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 480, 0, 481, 482, 0, 483, 0, 484, 0, 0, 0, 0, 0,
    0, 485, 0, 0, 486, 0, 0, 0, 487, 0, 488, 0, 0, 489, 0, 0, 490, 0, 0, 491, 0, 492, 0, 0, 493, 0, 494, 0, 495, 0, 496, 0,
    497, 0, 0, 498, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502,
    0, 503, 0, 504, 0, 505, 0, 506, 0, 0, 0, 507, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 511, 0, 0,
    512, 513, 0, 0, 0, 0, 514, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0,
    0, 0, 0, 518, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 521, 0, 0, 522, 0, 523, 0, 524, 0, 525, 0, 0,
    0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 533,
    0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 536, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0,
    0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0, 548, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0,
    0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0,
    0, 567, 0, 568, 0, 569, 0, 0, 0, 0, 570, 0, 571, 0, 572, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576, 0, 0, 577, 0, 0, 578, 0, 579, 580, 581, 0, 0, 0, 582, 0, 0, 0, 0, 583, 0, 584,
    0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 588,
    0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 596, 0, 597,
    0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 602, 603, 604, 0, 0,
    0, 605, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609,
    0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0,
    0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 616, 0, 0, 0, 617, 618, 0, 619, 0, 0, 620, 0, 0,
    0, 621, 0, 622, 0, 623, 0, 0, 624, 0, 625, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 0, 0,
    0, 630, 631, 0, 632, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0, 0,
    0, 0, 0, 0, 0, 638, 0, 0, 639, 0, 0, 640, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0,
    0, 0, 645, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0,
    0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651, 0, 652, 0, 653, 0, 654, 0, 0, 655, 0, 0, 0, 0, 656, 657, 658, 0, 659, 0, 660,
    0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0,
    0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 0, 0,
    668, 0, 669, 0, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 0, 674, 0, 0,
    0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 676, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 680, 0, 0, 681, 0, 682, 683,
    0, 684, 0, 0, 685, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0, 0, 689, 0, 690, 691, 692, 0, 0, 693,
    0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 699, 0, 700,
    701, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 706, 0, 0, 707, 0, 708, 709, 710, 0, 0,
    711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 714, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 718, 719, 0, 720, 0, 0,
    721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 725, 0, 726, 727, 728, 0, 0, 729,
    0, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 735, 0, 736, 737, 0, 738, 0, 0, 739, 0,
    0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 744, 745, 746, 0, 0, 747, 0, 0, 0, 0, 748,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753, 0, 754, 755,
    0, 756, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 760, 0, 0, 761, 0, 762, 763, 764, 0, 0,
    765, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0,
    770, 0, 0, 771, 0, 772, 773, 0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 778, 0, 0,
    779, 0, 780, 781, 782, 0, 0, 783, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 790, 791, 0, 792, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 795, 0, 0, 796, 0, 0, 797, 0, 798, 799, 800, 0, 0, 801, 0, 0, 0, 0, 802, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 807, 0, 0, 808, 0, 809, 810, 0, 811, 0, 0, 812, 0, 0, 813,
};
void recomp_unit_0180_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AD4000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0180[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AD4000;
    case 2u: goto L_08AD4008;
    case 3u: goto L_08AD4014;
    case 4u: goto L_08AD4020;
    case 5u: goto L_08AD402C;
    case 6u: goto L_08AD4038;
    case 7u: goto L_08AD4048;
    case 8u: goto L_08AD4054;
    case 9u: goto L_08AD405C;
    case 10u: goto L_08AD4068;
    case 11u: goto L_08AD407C;
    case 12u: goto L_08AD4088;
    case 13u: goto L_08AD4094;
    case 14u: goto L_08AD40A0;
    case 15u: goto L_08AD40B0;
    case 16u: goto L_08AD40C0;
    case 17u: goto L_08AD40CC;
    case 18u: goto L_08AD40D8;
    case 19u: goto L_08AD40E4;
    case 20u: goto L_08AD40F0;
    case 21u: goto L_08AD4104;
    case 22u: goto L_08AD4110;
    case 23u: goto L_08AD411C;
    case 24u: goto L_08AD4128;
    case 25u: goto L_08AD4154;
    case 26u: goto L_08AD4160;
    case 27u: goto L_08AD416C;
    case 28u: goto L_08AD4178;
    case 29u: goto L_08AD4184;
    case 30u: goto L_08AD4194;
    case 31u: goto L_08AD41A0;
    case 32u: goto L_08AD41AC;
    case 33u: goto L_08AD41B8;
    case 34u: goto L_08AD41C4;
    case 35u: goto L_08AD41CC;
    case 36u: goto L_08AD41D8;
    case 37u: goto L_08AD41EC;
    case 38u: goto L_08AD41F8;
    case 39u: goto L_08AD4204;
    case 40u: goto L_08AD4210;
    case 41u: goto L_08AD422C;
    case 42u: goto L_08AD4278;
    case 43u: goto L_08AD42A8;
    case 44u: goto L_08AD43BC;
    case 45u: goto L_08AD44EC;
    case 46u: goto L_08AD46CC;
    case 47u: goto L_08AD48A4;
    case 48u: goto L_08AD4938;
    case 49u: goto L_08AD495C;
    case 50u: goto L_08AD4968;
    case 51u: goto L_08AD4974;
    case 52u: goto L_08AD497C;
    case 53u: goto L_08AD4980;
    case 54u: goto L_08AD4988;
    case 55u: goto L_08AD4994;
    case 56u: goto L_08AD49A8;
    case 57u: goto L_08AD49B0;
    case 58u: goto L_08AD49C4;
    case 59u: goto L_08AD49CC;
    case 60u: goto L_08AD49E0;
    case 61u: goto L_08AD49E8;
    case 62u: goto L_08AD49FC;
    case 63u: goto L_08AD4A04;
    case 64u: goto L_08AD4A18;
    case 65u: goto L_08AD4A20;
    case 66u: goto L_08AD4A34;
    case 67u: goto L_08AD4A3C;
    case 68u: goto L_08AD4A50;
    case 69u: goto L_08AD4A58;
    case 70u: goto L_08AD4A6C;
    case 71u: goto L_08AD4A74;
    case 72u: goto L_08AD4A88;
    case 73u: goto L_08AD4A90;
    case 74u: goto L_08AD4AA4;
    case 75u: goto L_08AD4AC0;
    case 76u: goto L_08AD4B20;
    case 77u: goto L_08AD4B2C;
    case 78u: goto L_08AD4B38;
    case 79u: goto L_08AD4B40;
    case 80u: goto L_08AD4B44;
    case 81u: goto L_08AD4B4C;
    case 82u: goto L_08AD4B58;
    case 83u: goto L_08AD4B6C;
    case 84u: goto L_08AD4B88;
    case 85u: goto L_08AD4BB0;
    case 86u: goto L_08AD4BBC;
    case 87u: goto L_08AD4BC8;
    case 88u: goto L_08AD4BD0;
    case 89u: goto L_08AD4BD4;
    case 90u: goto L_08AD4BDC;
    case 91u: goto L_08AD4BE8;
    case 92u: goto L_08AD4BFC;
    case 93u: goto L_08AD4C08;
    case 94u: goto L_08AD4C2C;
    case 95u: goto L_08AD4C54;
    case 96u: goto L_08AD4C60;
    case 97u: goto L_08AD4C6C;
    case 98u: goto L_08AD4C74;
    case 99u: goto L_08AD4C78;
    case 100u: goto L_08AD4C80;
    case 101u: goto L_08AD4C8C;
    case 102u: goto L_08AD4CA0;
    case 103u: goto L_08AD4CAC;
    case 104u: goto L_08AD4CB4;
    case 105u: goto L_08AD4CBC;
    case 106u: goto L_08AD4CC8;
    case 107u: goto L_08AD4CD0;
    case 108u: goto L_08AD4CDC;
    case 109u: goto L_08AD4CE4;
    case 110u: goto L_08AD4CF0;
    case 111u: goto L_08AD4D10;
    case 112u: goto L_08AD4D34;
    case 113u: goto L_08AD4D40;
    case 114u: goto L_08AD4D4C;
    case 115u: goto L_08AD4D54;
    case 116u: goto L_08AD4D58;
    case 117u: goto L_08AD4D60;
    case 118u: goto L_08AD4D6C;
    case 119u: goto L_08AD4D80;
    case 120u: goto L_08AD4D88;
    case 121u: goto L_08AD4D90;
    case 122u: goto L_08AD4DA8;
    case 123u: goto L_08AD4DB4;
    case 124u: goto L_08AD4DD0;
    case 125u: goto L_08AD4DF8;
    case 126u: goto L_08AD4E00;
    case 127u: goto L_08AD4E0C;
    case 128u: goto L_08AD4E14;
    case 129u: goto L_08AD4E1C;
    case 130u: goto L_08AD4E28;
    case 131u: goto L_08AD4E30;
    case 132u: goto L_08AD4E60;
    case 133u: goto L_08AD4E74;
    case 134u: goto L_08AD4E9C;
    case 135u: goto L_08AD4EA8;
    case 136u: goto L_08AD4EB4;
    case 137u: goto L_08AD4EC0;
    case 138u: goto L_08AD4ECC;
    case 139u: goto L_08AD4ED0;
    case 140u: goto L_08AD4ED8;
    case 141u: goto L_08AD4F78;
    case 142u: goto L_08AD4F8C;
    case 143u: goto L_08AD4FB0;
    case 144u: goto L_08AD4FD4;
    case 145u: goto L_08AD4FF0;
    case 146u: goto L_08AD4FF8;
    case 147u: goto L_08AD5010;
    case 148u: goto L_08AD5024;
    case 149u: goto L_08AD5030;
    case 150u: goto L_08AD5040;
    case 151u: goto L_08AD5054;
    case 152u: goto L_08AD5060;
    case 153u: goto L_08AD5070;
    case 154u: goto L_08AD5084;
    case 155u: goto L_08AD5090;
    case 156u: goto L_08AD50A0;
    case 157u: goto L_08AD50B4;
    case 158u: goto L_08AD50C0;
    case 159u: goto L_08AD50D0;
    case 160u: goto L_08AD50E4;
    case 161u: goto L_08AD50F0;
    case 162u: goto L_08AD5100;
    case 163u: goto L_08AD5114;
    case 164u: goto L_08AD5120;
    case 165u: goto L_08AD5130;
    case 166u: goto L_08AD51A8;
    case 167u: goto L_08AD51D4;
    case 168u: goto L_08AD5200;
    case 169u: goto L_08AD5214;
    case 170u: goto L_08AD521C;
    case 171u: goto L_08AD5224;
    case 172u: goto L_08AD5234;
    case 173u: goto L_08AD5248;
    case 174u: goto L_08AD525C;
    case 175u: goto L_08AD526C;
    case 176u: goto L_08AD5274;
    case 177u: goto L_08AD527C;
    case 178u: goto L_08AD5288;
    case 179u: goto L_08AD52B0;
    case 180u: goto L_08AD5328;
    case 181u: goto L_08AD5330;
    case 182u: goto L_08AD533C;
    case 183u: goto L_08AD5358;
    case 184u: goto L_08AD5360;
    case 185u: goto L_08AD536C;
    case 186u: goto L_08AD5388;
    case 187u: goto L_08AD5390;
    case 188u: goto L_08AD539C;
    case 189u: goto L_08AD53A4;
    case 190u: goto L_08AD53B0;
    case 191u: goto L_08AD53C0;
    case 192u: goto L_08AD53C8;
    case 193u: goto L_08AD53D4;
    case 194u: goto L_08AD53E4;
    case 195u: goto L_08AD53EC;
    case 196u: goto L_08AD53F8;
    case 197u: goto L_08AD5408;
    case 198u: goto L_08AD5418;
    case 199u: goto L_08AD5428;
    case 200u: goto L_08AD5440;
    case 201u: goto L_08AD544C;
    case 202u: goto L_08AD5460;
    case 203u: goto L_08AD546C;
    case 204u: goto L_08AD5494;
    case 205u: goto L_08AD54A0;
    case 206u: goto L_08AD54B0;
    case 207u: goto L_08AD54D8;
    case 208u: goto L_08AD54E4;
    case 209u: goto L_08AD54F4;
    case 210u: goto L_08AD5514;
    case 211u: goto L_08AD551C;
    case 212u: goto L_08AD552C;
    case 213u: goto L_08AD5548;
    case 214u: goto L_08AD5564;
    case 215u: goto L_08AD556C;
    case 216u: goto L_08AD5574;
    case 217u: goto L_08AD557C;
    case 218u: goto L_08AD5584;
    case 219u: goto L_08AD558C;
    case 220u: goto L_08AD5594;
    case 221u: goto L_08AD559C;
    case 222u: goto L_08AD55A4;
    case 223u: goto L_08AD55B4;
    case 224u: goto L_08AD55C4;
    case 225u: goto L_08AD55D4;
    case 226u: goto L_08AD55E4;
    case 227u: goto L_08AD5610;
    case 228u: goto L_08AD561C;
    case 229u: goto L_08AD5628;
    case 230u: goto L_08AD5630;
    case 231u: goto L_08AD563C;
    case 232u: goto L_08AD5644;
    case 233u: goto L_08AD564C;
    case 234u: goto L_08AD5654;
    case 235u: goto L_08AD5658;
    case 236u: goto L_08AD5660;
    case 237u: goto L_08AD5668;
    case 238u: goto L_08AD5670;
    case 239u: goto L_08AD5678;
    case 240u: goto L_08AD5680;
    case 241u: goto L_08AD5684;
    case 242u: goto L_08AD56A0;
    case 243u: goto L_08AD56F4;
    case 244u: goto L_08AD5714;
    case 245u: goto L_08AD571C;
    case 246u: goto L_08AD5730;
    case 247u: goto L_08AD5740;
    case 248u: goto L_08AD5750;
    case 249u: goto L_08AD5758;
    case 250u: goto L_08AD5768;
    case 251u: goto L_08AD5770;
    case 252u: goto L_08AD577C;
    case 253u: goto L_08AD5784;
    case 254u: goto L_08AD5790;
    case 255u: goto L_08AD5798;
    case 256u: goto L_08AD57A4;
    case 257u: goto L_08AD57AC;
    case 258u: goto L_08AD57C0;
    case 259u: goto L_08AD57E0;
    case 260u: goto L_08AD57EC;
    case 261u: goto L_08AD57F4;
    case 262u: goto L_08AD57F8;
    case 263u: goto L_08AD5820;
    case 264u: goto L_08AD5864;
    case 265u: goto L_08AD5880;
    case 266u: goto L_08AD5890;
    case 267u: goto L_08AD5894;
    case 268u: goto L_08AD58B4;
    case 269u: goto L_08AD590C;
    case 270u: goto L_08AD5920;
    case 271u: goto L_08AD5928;
    case 272u: goto L_08AD5934;
    case 273u: goto L_08AD593C;
    case 274u: goto L_08AD594C;
    case 275u: goto L_08AD5954;
    case 276u: goto L_08AD5960;
    case 277u: goto L_08AD5968;
    case 278u: goto L_08AD5984;
    case 279u: goto L_08AD598C;
    case 280u: goto L_08AD5998;
    case 281u: goto L_08AD59A0;
    case 282u: goto L_08AD59B0;
    case 283u: goto L_08AD59C0;
    case 284u: goto L_08AD59CC;
    case 285u: goto L_08AD59D4;
    case 286u: goto L_08AD59E0;
    case 287u: goto L_08AD59F0;
    case 288u: goto L_08AD59F8;
    case 289u: goto L_08AD5A04;
    case 290u: goto L_08AD5A0C;
    case 291u: goto L_08AD5A14;
    case 292u: goto L_08AD5A20;
    case 293u: goto L_08AD5A2C;
    case 294u: goto L_08AD5A34;
    case 295u: goto L_08AD5A48;
    case 296u: goto L_08AD5A54;
    case 297u: goto L_08AD5A64;
    case 298u: goto L_08AD5A6C;
    case 299u: goto L_08AD5A78;
    case 300u: goto L_08AD5A88;
    case 301u: goto L_08AD5A94;
    case 302u: goto L_08AD5AA4;
    case 303u: goto L_08AD5AAC;
    case 304u: goto L_08AD5ABC;
    case 305u: goto L_08AD5ACC;
    case 306u: goto L_08AD5AD8;
    case 307u: goto L_08AD5AF0;
    case 308u: goto L_08AD5AFC;
    case 309u: goto L_08AD5B0C;
    case 310u: goto L_08AD5B14;
    case 311u: goto L_08AD5B18;
    case 312u: goto L_08AD5B58;
    case 313u: goto L_08AD5B70;
    case 314u: goto L_08AD5B78;
    case 315u: goto L_08AD5B84;
    case 316u: goto L_08AD5B8C;
    case 317u: goto L_08AD5B98;
    case 318u: goto L_08AD5BA8;
    case 319u: goto L_08AD5BB8;
    case 320u: goto L_08AD5BC4;
    case 321u: goto L_08AD5BCC;
    case 322u: goto L_08AD5BE4;
    case 323u: goto L_08AD5BEC;
    case 324u: goto L_08AD5BF8;
    case 325u: goto L_08AD5C00;
    case 326u: goto L_08AD5C1C;
    case 327u: goto L_08AD5C24;
    case 328u: goto L_08AD5C30;
    case 329u: goto L_08AD5C38;
    case 330u: goto L_08AD5C4C;
    case 331u: goto L_08AD5C68;
    case 332u: goto L_08AD5C70;
    case 333u: goto L_08AD5C7C;
    case 334u: goto L_08AD5C84;
    case 335u: goto L_08AD5C98;
    case 336u: goto L_08AD5CA0;
    case 337u: goto L_08AD5CAC;
    case 338u: goto L_08AD5CB4;
    case 339u: goto L_08AD5CBC;
    case 340u: goto L_08AD5CC8;
    case 341u: goto L_08AD5CEC;
    case 342u: goto L_08AD5D14;
    case 343u: goto L_08AD5D24;
    case 344u: goto L_08AD5D48;
    case 345u: goto L_08AD5D4C;
    case 346u: goto L_08AD5D60;
    case 347u: goto L_08AD5D74;
    case 348u: goto L_08AD5DA0;
    case 349u: goto L_08AD5DAC;
    case 350u: goto L_08AD5DB4;
    case 351u: goto L_08AD5DC0;
    case 352u: goto L_08AD5DD0;
    case 353u: goto L_08AD5DD8;
    case 354u: goto L_08AD5DE4;
    case 355u: goto L_08AD5DEC;
    case 356u: goto L_08AD5DF8;
    case 357u: goto L_08AD5E08;
    case 358u: goto L_08AD5E18;
    case 359u: goto L_08AD5E28;
    case 360u: goto L_08AD5E4C;
    case 361u: goto L_08AD5E54;
    case 362u: goto L_08AD5E60;
    case 363u: goto L_08AD5E6C;
    case 364u: goto L_08AD5E74;
    case 365u: goto L_08AD5E84;
    case 366u: goto L_08AD5E8C;
    case 367u: goto L_08AD5E94;
    case 368u: goto L_08AD5EA0;
    case 369u: goto L_08AD5EA8;
    case 370u: goto L_08AD5EB0;
    case 371u: goto L_08AD5EBC;
    case 372u: goto L_08AD5EC8;
    case 373u: goto L_08AD5ED0;
    case 374u: goto L_08AD5EDC;
    case 375u: goto L_08AD5EE8;
    case 376u: goto L_08AD5EF4;
    case 377u: goto L_08AD5F00;
    case 378u: goto L_08AD5F14;
    case 379u: goto L_08AD5F1C;
    case 380u: goto L_08AD5F2C;
    case 381u: goto L_08AD5F38;
    case 382u: goto L_08AD5F44;
    case 383u: goto L_08AD5F50;
    case 384u: goto L_08AD5F5C;
    case 385u: goto L_08AD5F68;
    case 386u: goto L_08AD5F70;
    case 387u: goto L_08AD5F78;
    case 388u: goto L_08AD5F80;
    case 389u: goto L_08AD5F88;
    case 390u: goto L_08AD5F90;
    case 391u: goto L_08AD5F94;
    case 392u: goto L_08AD5F9C;
    case 393u: goto L_08AD5FAC;
    case 394u: goto L_08AD5FB4;
    case 395u: goto L_08AD5FB8;
    case 396u: goto L_08AD5FC4;
    case 397u: goto L_08AD5FD0;
    case 398u: goto L_08AD5FDC;
    case 399u: goto L_08AD5FE8;
    case 400u: goto L_08AD5FF0;
    case 401u: goto L_08AD5FF8;
    case 402u: goto L_08AD6028;
    case 403u: goto L_08AD609C;
    case 404u: goto L_08AD60A4;
    case 405u: goto L_08AD60AC;
    case 406u: goto L_08AD60B8;
    case 407u: goto L_08AD60C8;
    case 408u: goto L_08AD60D0;
    case 409u: goto L_08AD60E0;
    case 410u: goto L_08AD60EC;
    case 411u: goto L_08AD60F8;
    case 412u: goto L_08AD6100;
    case 413u: goto L_08AD6110;
    case 414u: goto L_08AD6118;
    case 415u: goto L_08AD6124;
    case 416u: goto L_08AD6130;
    case 417u: goto L_08AD6138;
    case 418u: goto L_08AD6140;
    case 419u: goto L_08AD6148;
    case 420u: goto L_08AD6154;
    case 421u: goto L_08AD615C;
    case 422u: goto L_08AD6164;
    case 423u: goto L_08AD616C;
    case 424u: goto L_08AD6174;
    case 425u: goto L_08AD6180;
    case 426u: goto L_08AD6188;
    case 427u: goto L_08AD6194;
    case 428u: goto L_08AD619C;
    case 429u: goto L_08AD61A4;
    case 430u: goto L_08AD61B8;
    case 431u: goto L_08AD61C0;
    case 432u: goto L_08AD61CC;
    case 433u: goto L_08AD61E0;
    case 434u: goto L_08AD61EC;
    case 435u: goto L_08AD61FC;
    case 436u: goto L_08AD6204;
    case 437u: goto L_08AD6214;
    case 438u: goto L_08AD621C;
    case 439u: goto L_08AD6224;
    case 440u: goto L_08AD622C;
    case 441u: goto L_08AD6234;
    case 442u: goto L_08AD623C;
    case 443u: goto L_08AD6244;
    case 444u: goto L_08AD624C;
    case 445u: goto L_08AD6254;
    case 446u: goto L_08AD625C;
    case 447u: goto L_08AD6264;
    case 448u: goto L_08AD626C;
    case 449u: goto L_08AD6274;
    case 450u: goto L_08AD6288;
    case 451u: goto L_08AD6294;
    case 452u: goto L_08AD62A0;
    case 453u: goto L_08AD62C0;
    case 454u: goto L_08AD62CC;
    case 455u: goto L_08AD62DC;
    case 456u: goto L_08AD62E4;
    case 457u: goto L_08AD62F4;
    case 458u: goto L_08AD6300;
    case 459u: goto L_08AD630C;
    case 460u: goto L_08AD6318;
    case 461u: goto L_08AD6320;
    case 462u: goto L_08AD6328;
    case 463u: goto L_08AD6338;
    case 464u: goto L_08AD6348;
    case 465u: goto L_08AD6350;
    case 466u: goto L_08AD6358;
    case 467u: goto L_08AD6360;
    case 468u: goto L_08AD6368;
    case 469u: goto L_08AD6370;
    case 470u: goto L_08AD6378;
    case 471u: goto L_08AD6380;
    case 472u: goto L_08AD6388;
    case 473u: goto L_08AD6390;
    case 474u: goto L_08AD6398;
    case 475u: goto L_08AD63A0;
    case 476u: goto L_08AD63A8;
    case 477u: goto L_08AD63B0;
    case 478u: goto L_08AD63B8;
    case 479u: goto L_08AD63C0;
    case 480u: goto L_08AD63CC;
    case 481u: goto L_08AD63D4;
    case 482u: goto L_08AD63D8;
    case 483u: goto L_08AD63E0;
    case 484u: goto L_08AD63E8;
    case 485u: goto L_08AD6404;
    case 486u: goto L_08AD6410;
    case 487u: goto L_08AD6420;
    case 488u: goto L_08AD6428;
    case 489u: goto L_08AD6434;
    case 490u: goto L_08AD6440;
    case 491u: goto L_08AD644C;
    case 492u: goto L_08AD6454;
    case 493u: goto L_08AD6460;
    case 494u: goto L_08AD6468;
    case 495u: goto L_08AD6470;
    case 496u: goto L_08AD6478;
    case 497u: goto L_08AD6480;
    case 498u: goto L_08AD648C;
    case 499u: goto L_08AD6494;
    case 500u: goto L_08AD64A0;
    case 501u: goto L_08AD64D4;
    case 502u: goto L_08AD64FC;
    case 503u: goto L_08AD6504;
    case 504u: goto L_08AD650C;
    case 505u: goto L_08AD6514;
    case 506u: goto L_08AD651C;
    case 507u: goto L_08AD652C;
    case 508u: goto L_08AD6540;
    case 509u: goto L_08AD6564;
    case 510u: goto L_08AD656C;
    case 511u: goto L_08AD6574;
    case 512u: goto L_08AD6580;
    case 513u: goto L_08AD6584;
    case 514u: goto L_08AD6598;
    case 515u: goto L_08AD65A0;
    case 516u: goto L_08AD6650;
    case 517u: goto L_08AD6670;
    case 518u: goto L_08AD668C;
    case 519u: goto L_08AD669C;
    case 520u: goto L_08AD66C0;
    case 521u: goto L_08AD66D0;
    case 522u: goto L_08AD66DC;
    case 523u: goto L_08AD66E4;
    case 524u: goto L_08AD66EC;
    case 525u: goto L_08AD66F4;
    case 526u: goto L_08AD670C;
    case 527u: goto L_08AD6720;
    case 528u: goto L_08AD673C;
    case 529u: goto L_08AD6744;
    case 530u: goto L_08AD6750;
    case 531u: goto L_08AD6758;
    case 532u: goto L_08AD6774;
    case 533u: goto L_08AD677C;
    case 534u: goto L_08AD6794;
    case 535u: goto L_08AD67C0;
    case 536u: goto L_08AD67CC;
    case 537u: goto L_08AD67D4;
    case 538u: goto L_08AD67DC;
    case 539u: goto L_08AD67F4;
    case 540u: goto L_08AD6828;
    case 541u: goto L_08AD6830;
    case 542u: goto L_08AD6868;
    case 543u: goto L_08AD6870;
    case 544u: goto L_08AD688C;
    case 545u: goto L_08AD68A8;
    case 546u: goto L_08AD68B0;
    case 547u: goto L_08AD68D8;
    case 548u: goto L_08AD68E4;
    case 549u: goto L_08AD690C;
    case 550u: goto L_08AD6920;
    case 551u: goto L_08AD6928;
    case 552u: goto L_08AD693C;
    case 553u: goto L_08AD6944;
    case 554u: goto L_08AD694C;
    case 555u: goto L_08AD6978;
    case 556u: goto L_08AD6990;
    case 557u: goto L_08AD69A8;
    case 558u: goto L_08AD69D4;
    case 559u: goto L_08AD69EC;
    case 560u: goto L_08AD6A18;
    case 561u: goto L_08AD6A34;
    case 562u: goto L_08AD6A40;
    case 563u: goto L_08AD6A70;
    case 564u: goto L_08AD6AB8;
    case 565u: goto L_08AD6AD8;
    case 566u: goto L_08AD6AE8;
    case 567u: goto L_08AD6B04;
    case 568u: goto L_08AD6B0C;
    case 569u: goto L_08AD6B14;
    case 570u: goto L_08AD6B28;
    case 571u: goto L_08AD6B30;
    case 572u: goto L_08AD6B38;
    case 573u: goto L_08AD6B50;
    case 574u: goto L_08AD6B58;
    case 575u: goto L_08AD6B60;
    case 576u: goto L_08AD6BA8;
    case 577u: goto L_08AD6BB4;
    case 578u: goto L_08AD6BC0;
    case 579u: goto L_08AD6BC8;
    case 580u: goto L_08AD6BCC;
    case 581u: goto L_08AD6BD0;
    case 582u: goto L_08AD6BE0;
    case 583u: goto L_08AD6BF4;
    case 584u: goto L_08AD6BFC;
    case 585u: goto L_08AD6C04;
    case 586u: goto L_08AD6C14;
    case 587u: goto L_08AD6C5C;
    case 588u: goto L_08AD6C7C;
    case 589u: goto L_08AD6C8C;
    case 590u: goto L_08AD6CA8;
    case 591u: goto L_08AD6CB0;
    case 592u: goto L_08AD6CB8;
    case 593u: goto L_08AD6CCC;
    case 594u: goto L_08AD6CD4;
    case 595u: goto L_08AD6CDC;
    case 596u: goto L_08AD6CF4;
    case 597u: goto L_08AD6CFC;
    case 598u: goto L_08AD6D04;
    case 599u: goto L_08AD6D4C;
    case 600u: goto L_08AD6D58;
    case 601u: goto L_08AD6D64;
    case 602u: goto L_08AD6D6C;
    case 603u: goto L_08AD6D70;
    case 604u: goto L_08AD6D74;
    case 605u: goto L_08AD6D84;
    case 606u: goto L_08AD6D98;
    case 607u: goto L_08AD6DA0;
    case 608u: goto L_08AD6DC4;
    case 609u: goto L_08AD6DFC;
    case 610u: goto L_08AD6E08;
    case 611u: goto L_08AD6E30;
    case 612u: goto L_08AD6E48;
    case 613u: goto L_08AD6EF8;
    case 614u: goto L_08AD6F0C;
    case 615u: goto L_08AD6F38;
    case 616u: goto L_08AD6F4C;
    case 617u: goto L_08AD6F5C;
    case 618u: goto L_08AD6F60;
    case 619u: goto L_08AD6F68;
    case 620u: goto L_08AD6F74;
    case 621u: goto L_08AD6F84;
    case 622u: goto L_08AD6F8C;
    case 623u: goto L_08AD6F94;
    case 624u: goto L_08AD6FA0;
    case 625u: goto L_08AD6FA8;
    case 626u: goto L_08AD6FB8;
    case 627u: goto L_08AD6FD8;
    case 628u: goto L_08AD6FE0;
    case 629u: goto L_08AD6FE8;
    case 630u: goto L_08AD7004;
    case 631u: goto L_08AD7008;
    case 632u: goto L_08AD7010;
    case 633u: goto L_08AD7020;
    case 634u: goto L_08AD7028;
    case 635u: goto L_08AD704C;
    case 636u: goto L_08AD7068;
    case 637u: goto L_08AD7074;
    case 638u: goto L_08AD7094;
    case 639u: goto L_08AD70A0;
    case 640u: goto L_08AD70AC;
    case 641u: goto L_08AD70B4;
    case 642u: goto L_08AD70C8;
    case 643u: goto L_08AD713C;
    case 644u: goto L_08AD716C;
    case 645u: goto L_08AD7188;
    case 646u: goto L_08AD7194;
    case 647u: goto L_08AD71B0;
    case 648u: goto L_08AD71C0;
    case 649u: goto L_08AD71F8;
    case 650u: goto L_08AD721C;
    case 651u: goto L_08AD722C;
    case 652u: goto L_08AD7234;
    case 653u: goto L_08AD723C;
    case 654u: goto L_08AD7244;
    case 655u: goto L_08AD7250;
    case 656u: goto L_08AD7264;
    case 657u: goto L_08AD7268;
    case 658u: goto L_08AD726C;
    case 659u: goto L_08AD7274;
    case 660u: goto L_08AD727C;
    case 661u: goto L_08AD7284;
    case 662u: goto L_08AD729C;
    case 663u: goto L_08AD72F0;
    case 664u: goto L_08AD7308;
    case 665u: goto L_08AD7348;
    case 666u: goto L_08AD7358;
    case 667u: goto L_08AD7370;
    case 668u: goto L_08AD7380;
    case 669u: goto L_08AD7388;
    case 670u: goto L_08AD7394;
    case 671u: goto L_08AD73AC;
    case 672u: goto L_08AD73D0;
    case 673u: goto L_08AD73DC;
    case 674u: goto L_08AD73F4;
    case 675u: goto L_08AD7414;
    case 676u: goto L_08AD742C;
    case 677u: goto L_08AD743C;
    case 678u: goto L_08AD7470;
    case 679u: goto L_08AD74D8;
    case 680u: goto L_08AD74E4;
    case 681u: goto L_08AD74F0;
    case 682u: goto L_08AD74F8;
    case 683u: goto L_08AD74FC;
    case 684u: goto L_08AD7504;
    case 685u: goto L_08AD7510;
    case 686u: goto L_08AD751C;
    case 687u: goto L_08AD7548;
    case 688u: goto L_08AD7554;
    case 689u: goto L_08AD7560;
    case 690u: goto L_08AD7568;
    case 691u: goto L_08AD756C;
    case 692u: goto L_08AD7570;
    case 693u: goto L_08AD757C;
    case 694u: goto L_08AD7590;
    case 695u: goto L_08AD75B4;
    case 696u: goto L_08AD75F4;
    case 697u: goto L_08AD765C;
    case 698u: goto L_08AD7668;
    case 699u: goto L_08AD7674;
    case 700u: goto L_08AD767C;
    case 701u: goto L_08AD7680;
    case 702u: goto L_08AD7688;
    case 703u: goto L_08AD7694;
    case 704u: goto L_08AD76A0;
    case 705u: goto L_08AD76CC;
    case 706u: goto L_08AD76D8;
    case 707u: goto L_08AD76E4;
    case 708u: goto L_08AD76EC;
    case 709u: goto L_08AD76F0;
    case 710u: goto L_08AD76F4;
    case 711u: goto L_08AD7700;
    case 712u: goto L_08AD7714;
    case 713u: goto L_08AD7738;
    case 714u: goto L_08AD7778;
    case 715u: goto L_08AD77C8;
    case 716u: goto L_08AD77D4;
    case 717u: goto L_08AD77E0;
    case 718u: goto L_08AD77E8;
    case 719u: goto L_08AD77EC;
    case 720u: goto L_08AD77F4;
    case 721u: goto L_08AD7800;
    case 722u: goto L_08AD780C;
    case 723u: goto L_08AD7848;
    case 724u: goto L_08AD7854;
    case 725u: goto L_08AD7860;
    case 726u: goto L_08AD7868;
    case 727u: goto L_08AD786C;
    case 728u: goto L_08AD7870;
    case 729u: goto L_08AD787C;
    case 730u: goto L_08AD7890;
    case 731u: goto L_08AD78A0;
    case 732u: goto L_08AD78D8;
    case 733u: goto L_08AD7940;
    case 734u: goto L_08AD794C;
    case 735u: goto L_08AD7958;
    case 736u: goto L_08AD7960;
    case 737u: goto L_08AD7964;
    case 738u: goto L_08AD796C;
    case 739u: goto L_08AD7978;
    case 740u: goto L_08AD7984;
    case 741u: goto L_08AD79B4;
    case 742u: goto L_08AD79C0;
    case 743u: goto L_08AD79CC;
    case 744u: goto L_08AD79D4;
    case 745u: goto L_08AD79D8;
    case 746u: goto L_08AD79DC;
    case 747u: goto L_08AD79E8;
    case 748u: goto L_08AD79FC;
    case 749u: goto L_08AD7A24;
    case 750u: goto L_08AD7A64;
    case 751u: goto L_08AD7AD8;
    case 752u: goto L_08AD7AE4;
    case 753u: goto L_08AD7AF0;
    case 754u: goto L_08AD7AF8;
    case 755u: goto L_08AD7AFC;
    case 756u: goto L_08AD7B04;
    case 757u: goto L_08AD7B10;
    case 758u: goto L_08AD7B1C;
    case 759u: goto L_08AD7B4C;
    case 760u: goto L_08AD7B58;
    case 761u: goto L_08AD7B64;
    case 762u: goto L_08AD7B6C;
    case 763u: goto L_08AD7B70;
    case 764u: goto L_08AD7B74;
    case 765u: goto L_08AD7B80;
    case 766u: goto L_08AD7B94;
    case 767u: goto L_08AD7BBC;
    case 768u: goto L_08AD7C00;
    case 769u: goto L_08AD7C74;
    case 770u: goto L_08AD7C80;
    case 771u: goto L_08AD7C8C;
    case 772u: goto L_08AD7C94;
    case 773u: goto L_08AD7C98;
    case 774u: goto L_08AD7CA0;
    case 775u: goto L_08AD7CAC;
    case 776u: goto L_08AD7CB8;
    case 777u: goto L_08AD7CE8;
    case 778u: goto L_08AD7CF4;
    case 779u: goto L_08AD7D00;
    case 780u: goto L_08AD7D08;
    case 781u: goto L_08AD7D0C;
    case 782u: goto L_08AD7D10;
    case 783u: goto L_08AD7D1C;
    case 784u: goto L_08AD7D30;
    case 785u: goto L_08AD7D58;
    case 786u: goto L_08AD7D9C;
    case 787u: goto L_08AD7E10;
    case 788u: goto L_08AD7E1C;
    case 789u: goto L_08AD7E28;
    case 790u: goto L_08AD7E30;
    case 791u: goto L_08AD7E34;
    case 792u: goto L_08AD7E3C;
    case 793u: goto L_08AD7E48;
    case 794u: goto L_08AD7E54;
    case 795u: goto L_08AD7E84;
    case 796u: goto L_08AD7E90;
    case 797u: goto L_08AD7E9C;
    case 798u: goto L_08AD7EA4;
    case 799u: goto L_08AD7EA8;
    case 800u: goto L_08AD7EAC;
    case 801u: goto L_08AD7EB8;
    case 802u: goto L_08AD7ECC;
    case 803u: goto L_08AD7EF4;
    case 804u: goto L_08AD7F38;
    case 805u: goto L_08AD7FA8;
    case 806u: goto L_08AD7FB4;
    case 807u: goto L_08AD7FC0;
    case 808u: goto L_08AD7FCC;
    case 809u: goto L_08AD7FD4;
    case 810u: goto L_08AD7FD8;
    case 811u: goto L_08AD7FE0;
    case 812u: goto L_08AD7FEC;
    case 813u: goto L_08AD7FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AD4000:
    ctx.gpr[31] = (0x08AD4008u);
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    goto L_08AD43BC;
L_08AD4008:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD4014u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4014u) goto L_08AD4014;
    return;
L_08AD4014:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD4020u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4020u) goto L_08AD4020;
    return;
L_08AD4020:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD402Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD402Cu) goto L_08AD402C;
    return;
L_08AD402C:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD4038u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4038u) goto L_08AD4038;
    return;
L_08AD4038:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD405C;
      }
      goto L_08AD4048;
    }
L_08AD4048:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD4054u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4054u) goto L_08AD4054;
    return;
L_08AD4054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4068;
      }
      goto L_08AD405C;
    }
L_08AD405C:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD4068u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4068u) goto L_08AD4068;
    return;
L_08AD4068:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD407Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08AD407Cu) goto L_08AD407C;
    return;
L_08AD407C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD4088u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4088u) goto L_08AD4088;
    return;
L_08AD4088:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD4094u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4094u) goto L_08AD4094;
    return;
L_08AD4094:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD40A0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD40A0u) goto L_08AD40A0;
    return;
L_08AD40A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD40B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD40C0u);
    ctx.gpr[9] = (0u | 1u);
    goto L_08AD422C;
L_08AD40C0:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD40CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD40CCu) goto L_08AD40CC;
    return;
L_08AD40CC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD40D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD40D8u) goto L_08AD40D8;
    return;
L_08AD40D8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD40E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD40E4u) goto L_08AD40E4;
    return;
L_08AD40E4:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD40F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD40F0u) goto L_08AD40F0;
    return;
L_08AD40F0:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD4104u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08AD4104u) goto L_08AD4104;
    return;
L_08AD4104:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD4110u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4110u) goto L_08AD4110;
    return;
L_08AD4110:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD411Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD411Cu) goto L_08AD411C;
    return;
L_08AD411C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD4154u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08AD43BC;
L_08AD4154:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08AD4160u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4160u) goto L_08AD4160;
    return;
L_08AD4160:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD416Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD416Cu) goto L_08AD416C;
    return;
L_08AD416C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD4178u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4178u) goto L_08AD4178;
    return;
L_08AD4178:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD4184u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4184u) goto L_08AD4184;
    return;
L_08AD4184:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (0u | 255u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD41CC;
      }
      goto L_08AD4194;
    }
L_08AD4194:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD41CC;
      }
      goto L_08AD41A0;
    }
L_08AD41A0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD41CC;
      }
      goto L_08AD41AC;
    }
L_08AD41AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD41CC;
      }
      goto L_08AD41B8;
    }
L_08AD41B8:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD41C4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD41C4u) goto L_08AD41C4;
    return;
L_08AD41C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD41D8;
      }
      goto L_08AD41CC;
    }
L_08AD41CC:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08AD41D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD41D8u) goto L_08AD41D8;
    return;
L_08AD41D8:
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD41ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15520));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 3u, 0x08868084u>(ctx, &aot_mem) && ctx.pc == 0x08AD41ECu) goto L_08AD41EC;
    return;
L_08AD41EC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x08AD41F8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD41F8u) goto L_08AD41F8;
    return;
L_08AD41F8:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x08AD4204u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4204u) goto L_08AD4204;
    return;
L_08AD4204:
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[31] = (0x08AD4210u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 593u, 0x088B7AF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4210u) goto L_08AD4210;
    return;
L_08AD4210:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD422C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[10]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08AD42A8;
      }
      goto L_08AD4278;
    }
L_08AD4278:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29420)));
    ctx.gpr[4] = (2230u << 16u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29416)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08AD42A8;
L_08AD42A8:
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5924)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (2277u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15520));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-15520), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u | 32768u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD43BC:
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[8] = (2230u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-5924)));
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[17]));
    ctx.gpr[8] = (2277u << 16u);
    ctx.gpr[9] = (ctx.gpr[8] + static_cast<std::uint32_t>(-15520));
    ctx.fpr[0] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-15520), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[18]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[19] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[19]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[6] = (0u | 32768u);
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[11]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[9] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD44EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29420)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-29416)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.gpr[4] = (18176u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.gpr[10] = (2277u << 16u);
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[1]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(-15520));
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[7];
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-5924)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[7];
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[10] + static_cast<std::uint32_t>(-15520), static_cast<std::uint16_t>(ctx.gpr[3]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[7];
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[7];
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[7];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = ctx.fpr[19] + ctx.fpr[7];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[7]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[6]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[7];
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[7];
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[11] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[11] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD46CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[11] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (2230u << 16u);
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-29420)));
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(-29416)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[1]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[1] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[1] = fs * ft; }
    ctx.fpr[5] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const float fs = ctx.fpr[2]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[2] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[2] = fs * ft; }
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[6] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-5924)));
    ctx.gpr[5] = (18176u << 16u);
    { const float fs = ctx.fpr[5]; const float ft = ctx.fpr[3]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[7] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16128u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[8] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[1] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[1]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[8];
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[2]));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[8];
    ctx.fpr[5] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[10]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(12), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[2]));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[2] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[3]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[8];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[8];
    ctx.gpr[3] = (std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(7), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(28), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const float fs = ctx.fpr[19]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[8];
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = ctx.fpr[19] + ctx.fpr[8];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(3)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[3]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[8]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(ctx.gpr[11]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[7]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(34), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[8];
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[8];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(1)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(58), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD48A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29452)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29456)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29428)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29448), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2230u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29440), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29444), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29436), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29432), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-29424), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4988;
      }
      goto L_08AD495C;
    }
L_08AD495C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4968u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD4968u) goto L_08AD4968;
    return;
L_08AD4968:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4980;
      }
      goto L_08AD4974;
    }
L_08AD4974:
    ctx.gpr[31] = (0x08AD497Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD497Cu) goto L_08AD497C;
    return;
L_08AD497C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD4980;
L_08AD4980:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4988;
L_08AD4988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AD4994u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11552));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD4994u) goto L_08AD4994;
    return;
L_08AD4994:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD49A8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08AD49A8u) goto L_08AD49A8;
    return;
L_08AD49A8:
    ctx.gpr[31] = (0x08AD49B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD49B0u) goto L_08AD49B0;
    return;
L_08AD49B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD49C4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD49C4u) goto L_08AD49C4;
    return;
L_08AD49C4:
    ctx.gpr[31] = (0x08AD49CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD49CCu) goto L_08AD49CC;
    return;
L_08AD49CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08AD49E0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD49E0u) goto L_08AD49E0;
    return;
L_08AD49E0:
    ctx.gpr[31] = (0x08AD49E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD49E8u) goto L_08AD49E8;
    return;
L_08AD49E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08AD49FCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD49FCu) goto L_08AD49FC;
    return;
L_08AD49FC:
    ctx.gpr[31] = (0x08AD4A04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4A04u) goto L_08AD4A04;
    return;
L_08AD4A04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[31] = (0x08AD4A18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A18u) goto L_08AD4A18;
    return;
L_08AD4A18:
    ctx.gpr[31] = (0x08AD4A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4A20u) goto L_08AD4A20;
    return;
L_08AD4A20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD4A34u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A34u) goto L_08AD4A34;
    return;
L_08AD4A34:
    ctx.gpr[31] = (0x08AD4A3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4A3Cu) goto L_08AD4A3C;
    return;
L_08AD4A3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD4A50u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A50u) goto L_08AD4A50;
    return;
L_08AD4A50:
    ctx.gpr[31] = (0x08AD4A58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4A58u) goto L_08AD4A58;
    return;
L_08AD4A58:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD4A6Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A6Cu) goto L_08AD4A6C;
    return;
L_08AD4A6C:
    ctx.gpr[31] = (0x08AD4A74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4A74u) goto L_08AD4A74;
    return;
L_08AD4A74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08AD4A88u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4A88u) goto L_08AD4A88;
    return;
L_08AD4A88:
    ctx.gpr[31] = (0x08AD4A90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4A90u) goto L_08AD4A90;
    return;
L_08AD4A90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[6] = (0u | 200u);
    ctx.gpr[31] = (0x08AD4AA4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4AA4u) goto L_08AD4AA4;
    return;
L_08AD4AA4:
    ctx.gpr[2] = (0u | 0u);
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
L_08AD4AC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-12144));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4B4C;
      }
      goto L_08AD4B20;
    }
L_08AD4B20:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4B2Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B2Cu) goto L_08AD4B2C;
    return;
L_08AD4B2C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4B44;
      }
      goto L_08AD4B38;
    }
L_08AD4B38:
    ctx.gpr[31] = (0x08AD4B40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4B40u) goto L_08AD4B40;
    return;
L_08AD4B40:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD4B44;
L_08AD4B44:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4B4C;
L_08AD4B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AD4B58u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11544));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B58u) goto L_08AD4B58;
    return;
L_08AD4B58:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4B6Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08AD4B6Cu) goto L_08AD4B6C;
    return;
L_08AD4B6C:
    ctx.gpr[2] = (0u | 0u);
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
L_08AD4B88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4BDC;
      }
      goto L_08AD4BB0;
    }
L_08AD4BB0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4BBCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD4BBCu) goto L_08AD4BBC;
    return;
L_08AD4BBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4BD4;
      }
      goto L_08AD4BC8;
    }
L_08AD4BC8:
    ctx.gpr[31] = (0x08AD4BD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4BD0u) goto L_08AD4BD0;
    return;
L_08AD4BD0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD4BD4;
L_08AD4BD4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4BDC;
L_08AD4BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AD4BE8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11536));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD4BE8u) goto L_08AD4BE8;
    return;
L_08AD4BE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4BFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08AD4BFCu) goto L_08AD4BFC;
    return;
L_08AD4BFC:
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[31] = (0x08AD4C08u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4C08u) goto L_08AD4C08;
    return;
L_08AD4C08:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (0u | 0u);
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
L_08AD4C2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4C80;
      }
      goto L_08AD4C54;
    }
L_08AD4C54:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4C60u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C60u) goto L_08AD4C60;
    return;
L_08AD4C60:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4C78;
      }
      goto L_08AD4C6C;
    }
L_08AD4C6C:
    ctx.gpr[31] = (0x08AD4C74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4C74u) goto L_08AD4C74;
    return;
L_08AD4C74:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08AD4C78;
L_08AD4C78:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4C80;
L_08AD4C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AD4C8Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11528));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD4C8Cu) goto L_08AD4C8C;
    return;
L_08AD4C8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4CA0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CA0u) goto L_08AD4CA0;
    return;
L_08AD4CA0:
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[31] = (0x08AD4CACu);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4CACu) goto L_08AD4CAC;
    return;
L_08AD4CAC:
    ctx.gpr[31] = (0x08AD4CB4u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CB4u) goto L_08AD4CB4;
    return;
L_08AD4CB4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4CF0;
      }
      goto L_08AD4CBC;
    }
L_08AD4CBC:
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[31] = (0x08AD4CC8u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CC8u) goto L_08AD4CC8;
    return;
L_08AD4CC8:
    ctx.gpr[31] = (0x08AD4CD0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CD0u) goto L_08AD4CD0;
    return;
L_08AD4CD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4CF0;
      }
      goto L_08AD4CDC;
    }
L_08AD4CDC:
    ctx.gpr[31] = (0x08AD4CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CE4u) goto L_08AD4CE4;
    return;
L_08AD4CE4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08AD4CF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 216u, 0x08A293D0u>(ctx, &aot_mem) && ctx.pc == 0x08AD4CF0u) goto L_08AD4CF0;
    return;
L_08AD4CF0:
    ctx.gpr[2] = (0u | 0u);
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
L_08AD4D10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AD4D60;
      }
      goto L_08AD4D34;
    }
L_08AD4D34:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4D40u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD4D40u) goto L_08AD4D40;
    return;
L_08AD4D40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4D58;
      }
      goto L_08AD4D4C;
    }
L_08AD4D4C:
    ctx.gpr[31] = (0x08AD4D54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4D54u) goto L_08AD4D54;
    return;
L_08AD4D54:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08AD4D58;
L_08AD4D58:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08AD4D60;
L_08AD4D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08AD4D6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11520));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD4D6Cu) goto L_08AD4D6C;
    return;
L_08AD4D6C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4D80u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x08AD4D80u) goto L_08AD4D80;
    return;
L_08AD4D80:
    ctx.gpr[31] = (0x08AD4D88u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4D88u) goto L_08AD4D88;
    return;
L_08AD4D88:
    ctx.gpr[31] = (0x08AD4D90u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4D90u) goto L_08AD4D90;
    return;
L_08AD4D90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_08AD4DA8;
    }
    goto L_08AD4DA8;
L_08AD4DA8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AD4DB4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 213u, 0x08944E84u>(ctx, &aot_mem) && ctx.pc == 0x08AD4DB4u) goto L_08AD4DB4;
    return;
L_08AD4DB4:
    ctx.gpr[2] = (0u | 0u);
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
L_08AD4DD0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD4DF8u);
    ctx.gpr[19] = (0u | 162u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08AD4DF8u) goto L_08AD4DF8;
    return;
L_08AD4DF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4E14;
      }
      goto L_08AD4E00;
    }
L_08AD4E00:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4E0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08AD4E0Cu) goto L_08AD4E0C;
    return;
L_08AD4E0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08AD4E14;
L_08AD4E14:
    ctx.gpr[31] = (0x08AD4E1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 568u, 0x089C66D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4E1Cu) goto L_08AD4E1C;
    return;
L_08AD4E1C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD4E28u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4E28u) goto L_08AD4E28;
    return;
L_08AD4E28:
    ctx.gpr[31] = (0x08AD4E30u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 719u, 0x089CB020u>(ctx, &aot_mem) && ctx.pc == 0x08AD4E30u) goto L_08AD4E30;
    return;
L_08AD4E30:
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4FB0;
      }
      goto L_08AD4E60;
    }
L_08AD4E60:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4E74u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26868)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08AD4E74u) goto L_08AD4E74;
    return;
L_08AD4E74:
    ctx.gpr[11] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4E9Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 376u, 0x089757BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD4E9Cu) goto L_08AD4E9C;
    return;
L_08AD4E9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AD4FB0;
      }
      goto L_08AD4EA8;
    }
L_08AD4EA8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AD4EB4u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD4EB4u) goto L_08AD4EB4;
    return;
L_08AD4EB4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AD4ED0;
      }
      goto L_08AD4EC0;
    }
L_08AD4EC0:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD4ECCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x08AD4ECCu) goto L_08AD4ECC;
    return;
L_08AD4ECC:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    goto L_08AD4ED0;
L_08AD4ED0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4FB0;
      }
      goto L_08AD4ED8;
    }
L_08AD4ED8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16479u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD4F78u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F78u) goto L_08AD4F78;
    return;
L_08AD4F78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x08AD4F8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08AD4F8Cu) goto L_08AD4F8C;
    return;
L_08AD4F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD4FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD4FB0u) goto L_08AD4FB0;
    return;
L_08AD4FB0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD4FD4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD4FF8;
      }
      goto L_08AD4FF0;
    }
L_08AD4FF0:
    ctx.gpr[31] = (0x08AD4FF8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08AD4FF8u) goto L_08AD4FF8;
    return;
L_08AD4FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11512));
    ctx.gpr[31] = (0x08AD5010u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5010u) goto L_08AD5010;
    return;
L_08AD5010:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD5024u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18744));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08AD5024u) goto L_08AD5024;
    return;
L_08AD5024:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5030u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08AD5030u) goto L_08AD5030;
    return;
L_08AD5030:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5040u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11496));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5040u) goto L_08AD5040;
    return;
L_08AD5040:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD5054u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19136));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08AD5054u) goto L_08AD5054;
    return;
L_08AD5054:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5060u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08AD5060u) goto L_08AD5060;
    return;
L_08AD5060:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5070u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11484));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5070u) goto L_08AD5070;
    return;
L_08AD5070:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD5084u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19336));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08AD5084u) goto L_08AD5084;
    return;
L_08AD5084:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5090u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08AD5090u) goto L_08AD5090;
    return;
L_08AD5090:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD50A0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11472));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08AD50A0u) goto L_08AD50A0;
    return;
L_08AD50A0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD50B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19500));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08AD50B4u) goto L_08AD50B4;
    return;
L_08AD50B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD50C0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08AD50C0u) goto L_08AD50C0;
    return;
L_08AD50C0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD50D0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11460));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08AD50D0u) goto L_08AD50D0;
    return;
L_08AD50D0:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD50E4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19728));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08AD50E4u) goto L_08AD50E4;
    return;
L_08AD50E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD50F0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08AD50F0u) goto L_08AD50F0;
    return;
L_08AD50F0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5100u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11448));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BCB0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5100u) goto L_08AD5100;
    return;
L_08AD5100:
    ctx.gpr[5] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD5114u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(19920));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08AD5114u) goto L_08AD5114;
    return;
L_08AD5114:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD5120u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 25u, 0x0890C210u>(ctx, &aot_mem) && ctx.pc == 0x08AD5120u) goto L_08AD5120;
    return;
L_08AD5120:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5130:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29404)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29408)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (2230u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29400), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29392), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29396), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD51A8:
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
L_08AD51D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 11u);
    ctx.gpr[8] = (0u + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (0u | 2048u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD5200u);
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 43u, 0x088B8324u>(ctx, &aot_mem) && ctx.pc == 0x08AD5200u) goto L_08AD5200;
    return;
L_08AD5200:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD521C;
      }
      goto L_08AD5214;
    }
L_08AD5214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD5224;
      }
      goto L_08AD521C;
    }
L_08AD521C:
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[16]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (ctx.lo);
    goto L_08AD5224;
L_08AD5224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD5248u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08AD5288;
L_08AD5248:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD525C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08AD527C;
      }
      goto L_08AD526C;
    }
L_08AD526C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD527C;
      }
      goto L_08AD5274;
    }
L_08AD5274:
    ctx.gpr[31] = (0x08AD527Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD527Cu) goto L_08AD527C;
    return;
L_08AD527C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5288:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD52B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11424));
    goto L_08AD51A8;
L_08AD52B0:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (90u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(464), 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(468), 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(472), 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(464));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD5328u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11404));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 400u, 0x08A2DA84u>(ctx, &aot_mem) && ctx.pc == 0x08AD5328u) goto L_08AD5328;
    return;
L_08AD5328:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08AD533C;
      }
      goto L_08AD5330;
    }
L_08AD5330:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD533Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11384));
    goto L_08AD51A8;
L_08AD533C:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(468));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD5358u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11340));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 400u, 0x08A2DA84u>(ctx, &aot_mem) && ctx.pc == 0x08AD5358u) goto L_08AD5358;
    return;
L_08AD5358:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD536C;
      }
      goto L_08AD5360;
    }
L_08AD5360:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD536Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11320));
    goto L_08AD51A8;
L_08AD536C:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(472));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x08AD5388u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11280));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 400u, 0x08A2DA84u>(ctx, &aot_mem) && ctx.pc == 0x08AD5388u) goto L_08AD5388;
    return;
L_08AD5388:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD539C;
      }
      goto L_08AD5390;
    }
L_08AD5390:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD539Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11264));
    goto L_08AD51A8;
L_08AD539C:
    ctx.gpr[31] = (0x08AD53A4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.pc = 0x08B0B8D4u;
    return;
L_08AD53A4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD53C0;
      }
      goto L_08AD53B0;
    }
L_08AD53B0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD53C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11228));
    goto L_08AD51A8;
L_08AD53C0:
    ctx.gpr[31] = (0x08AD53C8u);
    ctx.gpr[4] = (0u | 640u);
    ctx.pc = 0x08B0B95Cu;
    return;
L_08AD53C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD53E4;
      }
      goto L_08AD53D4;
    }
L_08AD53D4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD53E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11192));
    goto L_08AD51A8;
L_08AD53E4:
    ctx.gpr[31] = (0x08AD53ECu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B8E4u;
    return;
L_08AD53EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(152), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5408;
      }
      goto L_08AD53F8;
    }
L_08AD53F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5408u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11140));
    goto L_08AD51A8;
L_08AD5408:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (0x08AD5418u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11100));
    goto L_08AD51A8;
L_08AD5418:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x08AD5428u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11080));
    goto L_08AD51A8;
L_08AD5428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (21u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1028));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD544C;
      }
      goto L_08AD5440;
    }
L_08AD5440:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD544Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11060));
    goto L_08AD51A8;
L_08AD544C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (0u | 46043u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD546C;
      }
      goto L_08AD5460;
    }
L_08AD5460:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD546Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11012));
    goto L_08AD51A8;
L_08AD546C:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16752));
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[16] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 640u);
    ctx.gpr[31] = (0x08AD5494u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(20948));
    ctx.pc = 0x08B0B964u;
    return;
L_08AD5494:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD54B0;
      }
      goto L_08AD54A0;
    }
L_08AD54A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD54B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10968));
    goto L_08AD51A8;
L_08AD54B0:
    ctx.gpr[5] = (89u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17780));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(152)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 512u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AD54D8u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = 0x08B0B8ECu;
    return;
L_08AD54D8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD54F4;
      }
      goto L_08AD54E4;
    }
L_08AD54E4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD54F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10916));
    goto L_08AD51A8;
L_08AD54F4:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16676), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10880));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD5514u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5514u) goto L_08AD5514;
    return;
L_08AD5514:
    ctx.gpr[31] = (0x08AD551Cu);
    ctx.gpr[17] = (ctx.gpr[2] >> 10u);
    ctx.pc = 0x08B0BCD4u;
    return;
L_08AD551C:
    ctx.gpr[6] = (ctx.gpr[2] >> 10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD552Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AD51A8;
L_08AD552C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5548:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD5564u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10864));
    goto L_08AD51A8;
L_08AD5564:
    ctx.gpr[31] = (0x08AD556Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 733u, 0x08AF7538u>(ctx, &aot_mem) && ctx.pc == 0x08AD556Cu) goto L_08AD556C;
    return;
L_08AD556C:
    ctx.gpr[31] = (0x08AD5574u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.pc = 0x08B0B8F4u;
    return;
L_08AD5574:
    ctx.gpr[31] = (0x08AD557Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0B96Cu;
    return;
L_08AD557C:
    ctx.gpr[31] = (0x08AD5584u);
    // nop
    ctx.pc = 0x08B0B8DCu;
    return;
L_08AD5584:
    ctx.gpr[31] = (0x08AD558Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BC04u;
    return;
L_08AD558C:
    ctx.gpr[31] = (0x08AD5594u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BC04u;
    return;
L_08AD5594:
    ctx.gpr[31] = (0x08AD559Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08B0BC04u;
    return;
L_08AD559C:
    ctx.gpr[31] = (0x08AD55A4u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B9BCu;
    return;
L_08AD55A4:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(472));
    ctx.gpr[31] = (0x08AD55B4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 430u, 0x08A2DC54u>(ctx, &aot_mem) && ctx.pc == 0x08AD55B4u) goto L_08AD55B4;
    return;
L_08AD55B4:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(468));
    ctx.gpr[31] = (0x08AD55C4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 430u, 0x08A2DC54u>(ctx, &aot_mem) && ctx.pc == 0x08AD55C4u) goto L_08AD55C4;
    return;
L_08AD55C4:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(464));
    ctx.gpr[31] = (0x08AD55D4u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 430u, 0x08A2DC54u>(ctx, &aot_mem) && ctx.pc == 0x08AD55D4u) goto L_08AD55D4;
    return;
L_08AD55D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD55E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD5610u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 713u, 0x08A07A28u>(ctx, &aot_mem) && ctx.pc == 0x08AD5610u) goto L_08AD5610;
    return;
L_08AD5610:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD561Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x088782ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD561Cu) goto L_08AD561C;
    return;
L_08AD561C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AD5660;
      }
      goto L_08AD5628;
    }
L_08AD5628:
    ctx.gpr[31] = (0x08AD5630u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 353u, 0x08839858u>(ctx, &aot_mem) && ctx.pc == 0x08AD5630u) goto L_08AD5630;
    return;
L_08AD5630:
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5654;
      }
      goto L_08AD563C;
    }
L_08AD563C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5654;
      }
      goto L_08AD5644;
    }
L_08AD5644:
    ctx.gpr[31] = (0x08AD564Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 119u, 0x08868CFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD564Cu) goto L_08AD564C;
    return;
L_08AD564C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5658;
      }
      goto L_08AD5654;
    }
L_08AD5654:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD5658;
L_08AD5658:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5684;
      }
      goto L_08AD5660;
    }
L_08AD5660:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5680;
      }
      goto L_08AD5668;
    }
L_08AD5668:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5680;
      }
      goto L_08AD5670;
    }
L_08AD5670:
    ctx.gpr[31] = (0x08AD5678u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 119u, 0x08868CFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD5678u) goto L_08AD5678;
    return;
L_08AD5678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD5684;
      }
      goto L_08AD5680;
    }
L_08AD5680:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08AD5684;
L_08AD5684:
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
L_08AD56A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-2112));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2100), ctx.gpr[21]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29372)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2096), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2084), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2088), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2080), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2092), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(2108), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD56F4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 45u, 0x088B8340u>(ctx, &aot_mem) && ctx.pc == 0x08AD56F4u) goto L_08AD56F4;
    return;
L_08AD56F4:
    ctx.gpr[4] = (ctx.gpr[3] ^ ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD571C;
      }
      goto L_08AD5714;
    }
L_08AD5714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD57F8;
      }
      goto L_08AD571C;
    }
L_08AD571C:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD5730u);
    ctx.gpr[6] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 43u, 0x088B8324u>(ctx, &aot_mem) && ctx.pc == 0x08AD5730u) goto L_08AD5730;
    return;
L_08AD5730:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2048 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5758;
      }
      goto L_08AD5740;
    }
L_08AD5740:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5750u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10840));
    goto L_08AD51A8;
L_08AD5750:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD57F8;
      }
      goto L_08AD5758;
    }
L_08AD5758:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD5768u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B8C4u;
    return;
L_08AD5768:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5784;
      }
      goto L_08AD5770;
    }
L_08AD5770:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD577Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10804));
    goto L_08AD51A8;
L_08AD577C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD57F8;
      }
      goto L_08AD5784;
    }
L_08AD5784:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD5790u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0B8CCu;
    return;
L_08AD5790:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD57AC;
      }
      goto L_08AD5798;
    }
L_08AD5798:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD57A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10760));
    goto L_08AD51A8;
L_08AD57A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD57F8;
      }
      goto L_08AD57AC;
    }
L_08AD57AC:
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD57C0u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 45u, 0x088B8340u>(ctx, &aot_mem) && ctx.pc == 0x08AD57C0u) goto L_08AD57C0;
    return;
L_08AD57C0:
    ctx.gpr[4] = (ctx.gpr[3] ^ ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[2] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD57F4;
      }
      goto L_08AD57E0;
    }
L_08AD57E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD57ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10720));
    goto L_08AD51A8;
L_08AD57EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD57F8;
      }
      goto L_08AD57F4;
    }
L_08AD57F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD57F8;
L_08AD57F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2080)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2088)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2092)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(2108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(2112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD5820:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (90u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(452)));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD5864u);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0B9C4u;
    return;
L_08AD5864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5890;
      }
      goto L_08AD5880;
    }
L_08AD5880:
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AD5894;
      }
      goto L_08AD5890;
    }
L_08AD5890:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AD5894;
L_08AD5894:
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
L_08AD58B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(456), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(460), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD590Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10688));
    goto L_08AD51A8;
L_08AD590C:
    ctx.gpr[30] = (ctx.gpr[16] + static_cast<std::uint32_t>(132));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD5920u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 26u, 0x088B8234u>(ctx, &aot_mem) && ctx.pc == 0x08AD5920u) goto L_08AD5920;
    return;
L_08AD5920:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD593C;
      }
      goto L_08AD5928;
    }
L_08AD5928:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5934u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10664));
    goto L_08AD51A8;
L_08AD5934:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5FE8;
      }
      goto L_08AD593C;
    }
L_08AD593C:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD594Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 27u, 0x088B823Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD594Cu) goto L_08AD594C;
    return;
L_08AD594C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5968;
      }
      goto L_08AD5954;
    }
L_08AD5954:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5960u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10632));
    goto L_08AD51A8;
L_08AD5960:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5FE8;
      }
      goto L_08AD5968;
    }
L_08AD5968:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[8] = (ctx.gpr[16] + static_cast<std::uint32_t>(168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD5984u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    goto L_08AD56A0;
L_08AD5984:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD59A0;
      }
      goto L_08AD598C;
    }
L_08AD598C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10600));
    goto L_08AD51A8;
L_08AD5998:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5FE8;
      }
      goto L_08AD59A0;
    }
L_08AD59A0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08AD59B0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0B8FCu;
    return;
L_08AD59B0:
    ctx.gpr[22] = (68u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[2]);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[22] = (ctx.gpr[16] + ctx.gpr[22]);
      if (branch_taken) {
          goto L_08AD59D4;
      }
      goto L_08AD59C0;
    }
L_08AD59C0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD59CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10572));
    goto L_08AD51A8;
L_08AD59CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5FB8;
      }
      goto L_08AD59D4;
    }
L_08AD59D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5A0C;
      }
      goto L_08AD59E0;
    }
L_08AD59E0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08AD59F0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0B8FCu;
    return;
L_08AD59F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5A0C;
      }
      goto L_08AD59F8;
    }
L_08AD59F8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5A04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10528));
    goto L_08AD51A8;
L_08AD5A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5FB8;
      }
      goto L_08AD5A0C;
    }
L_08AD5A0C:
    ctx.gpr[31] = (0x08AD5A14u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B90Cu;
    return;
L_08AD5A14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16744), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5A34;
      }
      goto L_08AD5A20;
    }
L_08AD5A20:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5A2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10484));
    goto L_08AD51A8;
L_08AD5A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5FB8;
      }
      goto L_08AD5A34;
    }
L_08AD5A34:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD5A48u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0B924u;
    return;
L_08AD5A48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5A6C;
      }
      goto L_08AD5A54;
    }
L_08AD5A54:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5A64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10444));
    goto L_08AD51A8;
L_08AD5A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5FB8;
      }
      goto L_08AD5A6C;
    }
L_08AD5A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
        goto L_08AD5B18;
    }
    goto L_08AD5A78;
L_08AD5A78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(160));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(164));
    ctx.gpr[31] = (0x08AD5A88u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B91Cu;
    return;
L_08AD5A88:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5AAC;
      }
      goto L_08AD5A94;
    }
L_08AD5A94:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5AA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10404));
    goto L_08AD51A8;
L_08AD5AA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5FB8;
      }
      goto L_08AD5AAC;
    }
L_08AD5AAC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (0x08AD5ABCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10360));
    goto L_08AD51A8;
L_08AD5ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2117 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5AD8;
      }
      goto L_08AD5ACC;
    }
L_08AD5ACC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5AD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10340));
    goto L_08AD51A8;
L_08AD5AD8:
    ctx.gpr[4] = (90u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1664));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[31] = (0x08AD5AF0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B924u;
    return;
L_08AD5AF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5B14;
      }
      goto L_08AD5AFC;
    }
L_08AD5AFC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5B0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10296));
    goto L_08AD51A8;
L_08AD5B0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
      if (branch_taken) {
          goto L_08AD5FB8;
      }
      goto L_08AD5B14;
    }
L_08AD5B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    goto L_08AD5B18;
L_08AD5B18:
    ctx.gpr[5] = (68u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16728), ctx.gpr[4]);
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16736), ctx.gpr[6]);
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16732), ctx.gpr[23]);
    ctx.gpr[5] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16740), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD5B58u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0B9BCu;
    return;
L_08AD5B58:
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (9u << 16u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08AD5B70u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 690u, 0x08A07700u>(ctx, &aot_mem) && ctx.pc == 0x08AD5B70u) goto L_08AD5B70;
    return;
L_08AD5B70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5B8C;
      }
      goto L_08AD5B78;
    }
L_08AD5B78:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5B84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10260));
    goto L_08AD51A8;
L_08AD5B84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5FAC;
      }
      goto L_08AD5B8C;
    }
L_08AD5B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5C00;
      }
      goto L_08AD5B98;
    }
L_08AD5B98:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[31] = (0x08AD5BA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10228));
    goto L_08AD51A8;
L_08AD5BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8193 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5BCC;
      }
      goto L_08AD5BB8;
    }
L_08AD5BB8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5BC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10204));
    goto L_08AD51A8;
L_08AD5BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AD5F94;
      }
      goto L_08AD5BCC;
    }
L_08AD5BCC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD5BE4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 325u, 0x08839594u>(ctx, &aot_mem) && ctx.pc == 0x08AD5BE4u) goto L_08AD5BE4;
    return;
L_08AD5BE4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5C00;
      }
      goto L_08AD5BEC;
    }
L_08AD5BEC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5BF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10160));
    goto L_08AD51A8;
L_08AD5BF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08AD5F94;
      }
      goto L_08AD5C00;
    }
L_08AD5C00:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.gpr[20] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD5C1Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 9u, 0x0887814Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5C1Cu) goto L_08AD5C1C;
    return;
L_08AD5C1C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5C38;
      }
      goto L_08AD5C24;
    }
L_08AD5C24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5C30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10128));
    goto L_08AD51A8;
L_08AD5C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F88;
      }
      goto L_08AD5C38;
    }
L_08AD5C38:
    ctx.gpr[5] = (68u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[5] + static_cast<std::uint32_t>(16688));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD5C84;
      }
      goto L_08AD5C4C;
    }
L_08AD5C4C:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AD5C68u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 115u, 0x08868CBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD5C68u) goto L_08AD5C68;
    return;
L_08AD5C68:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5CB4;
      }
      goto L_08AD5C70;
    }
L_08AD5C70:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5C7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10100));
    goto L_08AD51A8;
L_08AD5C7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F80;
      }
      goto L_08AD5C84;
    }
L_08AD5C84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD5C98u);
    ctx.gpr[7] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 115u, 0x08868CBCu>(ctx, &aot_mem) && ctx.pc == 0x08AD5C98u) goto L_08AD5C98;
    return;
L_08AD5C98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5CB4;
      }
      goto L_08AD5CA0;
    }
L_08AD5CA0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5CACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10100));
    goto L_08AD51A8;
L_08AD5CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F80;
      }
      goto L_08AD5CB4;
    }
L_08AD5CB4:
    ctx.gpr[31] = (0x08AD5CBCu);
    // nop
    ctx.pc = 0x08B0BBDCu;
    return;
L_08AD5CBC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD5CC8u);
    ctx.gpr[5] = (0u | 19u);
    ctx.pc = 0x08B0BBD4u;
    return;
L_08AD5CC8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2208u << 16u);
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10068));
    ctx.gpr[31] = (0x08AD5CECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31412));
    ctx.pc = 0x08B0BBA4u;
    return;
L_08AD5CEC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2184u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10048));
    ctx.gpr[31] = (0x08AD5D14u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31964));
    ctx.pc = 0x08B0BBA4u;
    return;
L_08AD5D14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5D4C;
      }
      goto L_08AD5D24;
    }
L_08AD5D24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (2180u << 16u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 2048u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10032));
    ctx.gpr[31] = (0x08AD5D48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26436));
    ctx.pc = 0x08B0BBA4u;
    return;
L_08AD5D48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[2]);
    goto L_08AD5D4C;
L_08AD5D4C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08AD5D60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10016));
    goto L_08AD51A8;
L_08AD5D60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 31u));
    ctx.gpr[31] = (0x08AD5D74u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 45u, 0x088B8340u>(ctx, &aot_mem) && ctx.pc == 0x08AD5D74u) goto L_08AD5D74;
    return;
L_08AD5D74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29372)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29376)));
    ctx.gpr[6] = (ctx.gpr[3] ^ ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[3]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5DB4;
      }
      goto L_08AD5DA0;
    }
L_08AD5DA0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5DACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10720));
    goto L_08AD51A8;
L_08AD5DAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F00;
      }
      goto L_08AD5DB4;
    }
L_08AD5DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5DD0;
      }
      goto L_08AD5DC0;
    }
L_08AD5DC0:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x08AD5DD0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 336u, 0x088396A4u>(ctx, &aot_mem) && ctx.pc == 0x08AD5DD0u) goto L_08AD5DD0;
    return;
L_08AD5DD0:
    ctx.gpr[31] = (0x08AD5DD8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 694u, 0x08A07804u>(ctx, &aot_mem) && ctx.pc == 0x08AD5DD8u) goto L_08AD5DD8;
    return;
L_08AD5DD8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x08AD5DE4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 11u, 0x088781A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5DE4u) goto L_08AD5DE4;
    return;
L_08AD5DE4:
    ctx.gpr[31] = (0x08AD5DECu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 116u, 0x08868CD0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5DECu) goto L_08AD5DEC;
    return;
L_08AD5DEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5E08;
      }
      goto L_08AD5DF8;
    }
L_08AD5DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x08AD5E08u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_08AD5E08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u | 40u);
    ctx.gpr[31] = (0x08AD5E18u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_08AD5E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x08AD5E28u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = 0x08B0BBACu;
    return;
L_08AD5E28:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16728));
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AD5E4Cu);
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    goto L_08AD6028;
L_08AD5E4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(172), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD5ED0;
      }
      goto L_08AD5E54;
    }
L_08AD5E54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(172)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08AD5E74;
      }
      goto L_08AD5E60;
    }
L_08AD5E60:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5E6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9976));
    goto L_08AD51A8;
L_08AD5E6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F00;
      }
      goto L_08AD5E74;
    }
L_08AD5E74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD5EB0;
      }
      goto L_08AD5E84;
    }
L_08AD5E84:
    ctx.gpr[31] = (0x08AD5E8Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B93Cu;
    return;
L_08AD5E8C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5EA8;
      }
      goto L_08AD5E94;
    }
L_08AD5E94:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5EA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9948));
    goto L_08AD51A8;
L_08AD5EA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F00;
      }
      goto L_08AD5EA8;
    }
L_08AD5EA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), 0u);
      if (branch_taken) {
          goto L_08AD5ED0;
      }
      goto L_08AD5EB0;
    }
L_08AD5EB0:
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD5ED0;
      }
      goto L_08AD5EBC;
    }
L_08AD5EBC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD5EC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9908));
    goto L_08AD51A8;
L_08AD5EC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F00;
      }
      goto L_08AD5ED0;
    }
L_08AD5ED0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5EE8;
      }
      goto L_08AD5EDC;
    }
L_08AD5EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AD5EE8u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC0Cu;
    return;
L_08AD5EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AD5EF4u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC0Cu;
    return;
L_08AD5EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AD5F00u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC0Cu;
    return;
L_08AD5F00:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-10880));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08AD5F14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 838u, 0x08AA3F6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5F14u) goto L_08AD5F14;
    return;
L_08AD5F14:
    ctx.gpr[31] = (0x08AD5F1Cu);
    ctx.gpr[21] = (ctx.gpr[2] >> 10u);
    ctx.pc = 0x08B0BCD4u;
    return;
L_08AD5F1C:
    ctx.gpr[6] = (ctx.gpr[2] >> 10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD5F2Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08AD51A8;
L_08AD5F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F44;
      }
      goto L_08AD5F38;
    }
L_08AD5F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AD5F44u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC0Cu;
    return;
L_08AD5F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08AD5F50u);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC0Cu;
    return;
L_08AD5F50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08AD5F5Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC0Cu;
    return;
L_08AD5F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5F70;
      }
      goto L_08AD5F68;
    }
L_08AD5F68:
    ctx.gpr[31] = (0x08AD5F70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.pc = 0x08B0BBC4u;
    return;
L_08AD5F70:
    ctx.gpr[31] = (0x08AD5F78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BBC4u;
    return;
L_08AD5F78:
    ctx.gpr[31] = (0x08AD5F80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.pc = 0x08B0BBC4u;
    return;
L_08AD5F80:
    ctx.gpr[31] = (0x08AD5F88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 118u, 0x08868CF4u>(ctx, &aot_mem) && ctx.pc == 0x08AD5F88u) goto L_08AD5F88;
    return;
L_08AD5F88:
    ctx.gpr[31] = (0x08AD5F90u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 13u, 0x088781C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5F90u) goto L_08AD5F90;
    return;
L_08AD5F90:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_08AD5F94;
L_08AD5F94:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5FAC;
      }
      goto L_08AD5F9C;
    }
L_08AD5F9C:
    ctx.gpr[4] = (68u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(240));
    ctx.gpr[31] = (0x08AD5FACu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 338u, 0x08839704u>(ctx, &aot_mem) && ctx.pc == 0x08AD5FACu) goto L_08AD5FAC;
    return;
L_08AD5FAC:
    ctx.gpr[31] = (0x08AD5FB4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 699u, 0x08A078A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5FB4u) goto L_08AD5FB4;
    return;
L_08AD5FB4:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16744)));
    goto L_08AD5FB8;
L_08AD5FB8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AD5FC4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.pc = 0x08B0B914u;
    return;
L_08AD5FC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08AD5FD0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B904u;
    return;
L_08AD5FD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD5FE8;
      }
      goto L_08AD5FDC;
    }
L_08AD5FDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AD5FE8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B904u;
    return;
L_08AD5FE8:
    ctx.gpr[31] = (0x08AD5FF0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 40u, 0x088B82F0u>(ctx, &aot_mem) && ctx.pc == 0x08AD5FF0u) goto L_08AD5FF0;
    return;
L_08AD5FF0:
    ctx.gpr[31] = (0x08AD5FF8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 42u, 0x088B831Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD5FF8u) goto L_08AD5FF8;
    return;
L_08AD5FF8:
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
L_08AD6028:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (90u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[10]);
    ctx.gpr[11] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[10] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(-9888));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[30]);
    ctx.gpr[30] = (90u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 1u);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[18] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    goto L_08AD609C;
L_08AD609C:
    ctx.gpr[31] = (0x08AD60A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0171_entry, 171u, 595u, 0x08AB35BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD60A4u) goto L_08AD60A4;
    return;
L_08AD60A4:
    ctx.gpr[31] = (0x08AD60ACu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB54u;
    return;
L_08AD60AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD60D0;
      }
      goto L_08AD60B8;
    }
L_08AD60B8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD60C8u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08AD55E4;
L_08AD60C8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AD6138;
      }
      goto L_08AD60D0;
    }
L_08AD60D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6100;
      }
      goto L_08AD60E0;
    }
L_08AD60E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD60ECu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08AD5820;
L_08AD60EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6138;
      }
      goto L_08AD60F8;
    }
L_08AD60F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63B0;
      }
      goto L_08AD6100;
    }
L_08AD6100:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(460)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD6138;
      }
      goto L_08AD6110;
    }
L_08AD6110:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD6124;
      }
      goto L_08AD6118;
    }
L_08AD6118:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD6138;
      }
      goto L_08AD6124;
    }
L_08AD6124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08AD6130u);
    ctx.gpr[16] = (0u | 1u);
    goto L_08AD51A8;
L_08AD6130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(456), static_cast<std::uint8_t>(ctx.gpr[16]));
    goto L_08AD6138;
L_08AD6138:
    ctx.gpr[31] = (0x08AD6140u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 26u, 0x08878298u>(ctx, &aot_mem) && ctx.pc == 0x08AD6140u) goto L_08AD6140;
    return;
L_08AD6140:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD6164;
      }
      goto L_08AD6148;
    }
L_08AD6148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08AD6154u);
    ctx.gpr[16] = (0u | 640u);
    ctx.pc = 0x08B0B97Cu;
    return;
L_08AD6154:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08AD6164;
      }
      goto L_08AD615C;
    }
L_08AD615C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD63B0;
      }
      goto L_08AD6164;
    }
L_08AD6164:
    ctx.gpr[31] = (0x08AD616Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 12u, 0x088781B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD616Cu) goto L_08AD616C;
    return;
L_08AD616C:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD6188;
      }
      goto L_08AD6174;
    }
L_08AD6174:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08AD6180u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9868));
    goto L_08AD51A8;
L_08AD6180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD6478;
      }
      goto L_08AD6188;
    }
L_08AD6188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD624C;
      }
      goto L_08AD6194;
    }
L_08AD6194:
    ctx.gpr[31] = (0x08AD619Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 353u, 0x08839858u>(ctx, &aot_mem) && ctx.pc == 0x08AD619Cu) goto L_08AD619C;
    return;
L_08AD619C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD624C;
      }
      goto L_08AD61A4;
    }
L_08AD61A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD61B8u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.pc = 0x08B0B934u;
    return;
L_08AD61B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD622C;
      }
      goto L_08AD61C0;
    }
L_08AD61C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD61CCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 341u, 0x08839738u>(ctx, &aot_mem) && ctx.pc == 0x08AD61CCu) goto L_08AD61CC;
    return;
L_08AD61CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD61E0u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    ctx.pc = 0x08B0B954u;
    return;
L_08AD61E0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6204;
      }
      goto L_08AD61EC;
    }
L_08AD61EC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD61FCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9860));
    goto L_08AD51A8;
L_08AD61FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6478;
      }
      goto L_08AD6204;
    }
L_08AD6204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08AD6214u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 346u, 0x08839794u>(ctx, &aot_mem) && ctx.pc == 0x08AD6214u) goto L_08AD6214;
    return;
L_08AD6214:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6224;
      }
      goto L_08AD621C;
    }
L_08AD621C:
    ctx.gpr[31] = (0x08AD6224u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 350u, 0x088397E8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6224u) goto L_08AD6224;
    return;
L_08AD6224:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD6264;
      }
      goto L_08AD622C;
    }
L_08AD622C:
    ctx.gpr[31] = (0x08AD6234u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x088782ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD6234u) goto L_08AD6234;
    return;
L_08AD6234:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6264;
      }
      goto L_08AD623C;
    }
L_08AD623C:
    ctx.gpr[31] = (0x08AD6244u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6244u) goto L_08AD6244;
    return;
L_08AD6244:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6264;
      }
      goto L_08AD624C;
    }
L_08AD624C:
    ctx.gpr[31] = (0x08AD6254u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x088782ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD6254u) goto L_08AD6254;
    return;
L_08AD6254:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6264;
      }
      goto L_08AD625C;
    }
L_08AD625C:
    ctx.gpr[31] = (0x08AD6264u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6264u) goto L_08AD6264;
    return;
L_08AD6264:
    ctx.gpr[31] = (0x08AD626Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 713u, 0x08A07A28u>(ctx, &aot_mem) && ctx.pc == 0x08AD626Cu) goto L_08AD626C;
    return;
L_08AD626C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD6370;
      }
      goto L_08AD6274;
    }
L_08AD6274:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD6288u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0B92Cu;
    return;
L_08AD6288:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6328;
      }
      goto L_08AD6294;
    }
L_08AD6294:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD62A0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 703u, 0x08A078DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD62A0u) goto L_08AD62A0;
    return;
L_08AD62A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (0u | 512u);
    ctx.gpr[31] = (0x08AD62C0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0B944u;
    return;
L_08AD62C0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD62E4;
      }
      goto L_08AD62CC;
    }
L_08AD62CC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD62DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9816));
    goto L_08AD51A8;
L_08AD62DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6478;
      }
      goto L_08AD62E4;
    }
L_08AD62E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD62F4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 124u, 0x08868D50u>(ctx, &aot_mem) && ctx.pc == 0x08AD62F4u) goto L_08AD62F4;
    return;
L_08AD62F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08AD6388;
      }
      goto L_08AD6300;
    }
L_08AD6300:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AD630Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 127u, 0x08868DA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD630Cu) goto L_08AD630C;
    return;
L_08AD630C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD6318u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 708u, 0x08A07944u>(ctx, &aot_mem) && ctx.pc == 0x08AD6318u) goto L_08AD6318;
    return;
L_08AD6318:
    ctx.gpr[31] = (0x08AD6320u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 710u, 0x08A079A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6320u) goto L_08AD6320;
    return;
L_08AD6320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6388;
      }
      goto L_08AD6328;
    }
L_08AD6328:
    ctx.gpr[4] = (32866u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32767));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AD6350;
      }
      goto L_08AD6338;
    }
L_08AD6338:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD6348u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9776));
    goto L_08AD51A8;
L_08AD6348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AD6478;
      }
      goto L_08AD6350;
    }
L_08AD6350:
    ctx.gpr[31] = (0x08AD6358u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x088782ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD6358u) goto L_08AD6358;
    return;
L_08AD6358:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6388;
      }
      goto L_08AD6360;
    }
L_08AD6360:
    ctx.gpr[31] = (0x08AD6368u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6368u) goto L_08AD6368;
    return;
L_08AD6368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6388;
      }
      goto L_08AD6370;
    }
L_08AD6370:
    ctx.gpr[31] = (0x08AD6378u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x088782ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD6378u) goto L_08AD6378;
    return;
L_08AD6378:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6388;
      }
      goto L_08AD6380;
    }
L_08AD6380:
    ctx.gpr[31] = (0x08AD6388u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6388u) goto L_08AD6388;
    return;
L_08AD6388:
    ctx.gpr[31] = (0x08AD6390u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 27u, 0x088782ACu>(ctx, &aot_mem) && ctx.pc == 0x08AD6390u) goto L_08AD6390;
    return;
L_08AD6390:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63A0;
      }
      goto L_08AD6398;
    }
L_08AD6398:
    ctx.gpr[31] = (0x08AD63A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 15u, 0x088781E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD63A0u) goto L_08AD63A0;
    return;
L_08AD63A0:
    ctx.gpr[31] = (0x08AD63A8u);
    // nop
    ctx.pc = 0x08B0BB9Cu;
    return;
L_08AD63A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD609C;
      }
      goto L_08AD63B0;
    }
L_08AD63B0:
    ctx.gpr[31] = (0x08AD63B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 119u, 0x08868CFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD63B8u) goto L_08AD63B8;
    return;
L_08AD63B8:
    ctx.gpr[31] = (0x08AD63C0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 32u, 0x088782F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD63C0u) goto L_08AD63C0;
    return;
L_08AD63C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD63D4;
      }
      goto L_08AD63CC;
    }
L_08AD63CC:
    ctx.gpr[31] = (0x08AD63D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 355u, 0x0883987Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD63D4u) goto L_08AD63D4;
    return;
L_08AD63D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AD63D8;
L_08AD63D8:
    ctx.gpr[31] = (0x08AD63E0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 703u, 0x08A078DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD63E0u) goto L_08AD63E0;
    return;
L_08AD63E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD6468;
      }
      goto L_08AD63E8;
    }
L_08AD63E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[5] = (0u | 512u);
    ctx.gpr[31] = (0x08AD6404u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = 0x08B0B94Cu;
    return;
L_08AD6404:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6428;
      }
      goto L_08AD6410;
    }
L_08AD6410:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD6420u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-9736));
    goto L_08AD51A8;
L_08AD6420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_08AD6478;
      }
      goto L_08AD6428;
    }
L_08AD6428:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AD6454;
      }
      goto L_08AD6434;
    }
L_08AD6434:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[31] = (0x08AD6440u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 127u, 0x08868DA0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6440u) goto L_08AD6440;
    return;
L_08AD6440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD644Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 708u, 0x08A07944u>(ctx, &aot_mem) && ctx.pc == 0x08AD644Cu) goto L_08AD644C;
    return;
L_08AD644C:
    ctx.gpr[31] = (0x08AD6454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 710u, 0x08A079A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6454u) goto L_08AD6454;
    return;
L_08AD6454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD6460u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 717u, 0x08A07A88u>(ctx, &aot_mem) && ctx.pc == 0x08AD6460u) goto L_08AD6460;
    return;
L_08AD6460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD64A0;
      }
      goto L_08AD6468;
    }
L_08AD6468:
    ctx.gpr[31] = (0x08AD6470u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 755u, 0x08A07CCCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6470u) goto L_08AD6470;
    return;
L_08AD6470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AD63D8;
      }
      goto L_08AD6478;
    }
L_08AD6478:
    ctx.gpr[31] = (0x08AD6480u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 32u, 0x088782F4u>(ctx, &aot_mem) && ctx.pc == 0x08AD6480u) goto L_08AD6480;
    return;
L_08AD6480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6494;
      }
      goto L_08AD648C;
    }
L_08AD648C:
    ctx.gpr[31] = (0x08AD6494u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 355u, 0x0883987Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6494u) goto L_08AD6494;
    return;
L_08AD6494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08AD64A0u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 717u, 0x08A07A88u>(ctx, &aot_mem) && ctx.pc == 0x08AD64A0u) goto L_08AD64A0;
    return;
L_08AD64A0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD64D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD64FCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9688));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 393u, 0x08AED604u>(ctx, &aot_mem) && ctx.pc == 0x08AD64FCu) goto L_08AD64FC;
    return;
L_08AD64FC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD650C;
      }
      goto L_08AD6504;
    }
L_08AD6504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD652C;
      }
      goto L_08AD650C;
    }
L_08AD650C:
    ctx.gpr[31] = (0x08AD6514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6514u) goto L_08AD6514;
    return;
L_08AD6514:
    ctx.gpr[31] = (0x08AD651Cu);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08AD651Cu) goto L_08AD651C;
    return;
L_08AD651C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(60), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD652Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08AD652Cu) goto L_08AD652C;
    return;
L_08AD652C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AD656C;
      }
      goto L_08AD6564;
    }
L_08AD6564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6584;
      }
      goto L_08AD656C;
    }
L_08AD656C:
    ctx.gpr[31] = (0x08AD6574u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 542u, 0x08A8B30Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6574u) goto L_08AD6574;
    return;
L_08AD6574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08AD6580u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6580u) goto L_08AD6580;
    return;
L_08AD6580:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    goto L_08AD6584;
L_08AD6584:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6598:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD65A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29364)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29368)));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-29340)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2278u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(-6576));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[10] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29356), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2230u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29348), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[3] = (2230u << 16u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-29344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6650u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-29336), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 239u, 0x08A7D51Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6650u) goto L_08AD6650;
    return;
L_08AD6650:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11920));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[31] = (0x08AD6670u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29332));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08AD6670u) goto L_08AD6670;
    return;
L_08AD6670:
    ctx.gpr[4] = (2278u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6512));
    ctx.gpr[31] = (0x08AD668Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9680));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AF04u>(ctx, &aot_mem) && ctx.pc == 0x08AD668Cu) goto L_08AD668C;
    return;
L_08AD668C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD669C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AD66EC;
      }
      goto L_08AD66C0;
    }
L_08AD66C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD66D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29320));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 336u, 0x08A36104u>(ctx, &aot_mem) && ctx.pc == 0x08AD66D0u) goto L_08AD66D0;
    return;
L_08AD66D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD66DCu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08AD6720;
L_08AD66DC:
    ctx.gpr[31] = (0x08AD66E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD66E4u) goto L_08AD66E4;
    return;
L_08AD66E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD66F4;
      }
      goto L_08AD66EC;
    }
L_08AD66EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08AD66F4;
L_08AD66F4:
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
L_08AD670C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6720:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD6744;
      }
      goto L_08AD673C;
    }
L_08AD673C:
    ctx.gpr[31] = (0x08AD6744u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 80u, 0x08A0CFF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6744u) goto L_08AD6744;
    return;
L_08AD6744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6758;
      }
      goto L_08AD6750;
    }
L_08AD6750:
    ctx.gpr[31] = (0x08AD6758u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 115u, 0x08A0D1E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6758u) goto L_08AD6758;
    return;
L_08AD6758:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
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
L_08AD6774:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD677C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29296)));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6794:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD67DC;
      }
      goto L_08AD67C0;
    }
L_08AD67C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD67D4;
      }
      goto L_08AD67CC;
    }
L_08AD67CC:
    ctx.gpr[31] = (0x08AD67D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 115u, 0x08A0D1E0u>(ctx, &aot_mem) && ctx.pc == 0x08AD67D4u) goto L_08AD67D4;
    return;
L_08AD67D4:
    ctx.gpr[31] = (0x08AD67DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD67DCu) goto L_08AD67DC;
    return;
L_08AD67DC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD67F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29296)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6870;
      }
      goto L_08AD6828;
    }
L_08AD6828:
    ctx.gpr[31] = (0x08AD6830u);
    ctx.gpr[4] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD6830u) goto L_08AD6830;
    return;
L_08AD6830:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6870;
      }
      goto L_08AD6868;
    }
L_08AD6868:
    ctx.gpr[31] = (0x08AD6870u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 80u, 0x08A0CFF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6870u) goto L_08AD6870;
    return;
L_08AD6870:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08AD688C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29296)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
        goto L_08AD68A8;
    }
    goto L_08AD68A8;
L_08AD68A8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD68B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[9] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD68D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29320));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 296u, 0x08A35E54u>(ctx, &aot_mem) && ctx.pc == 0x08AD68D8u) goto L_08AD68D8;
    return;
L_08AD68D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD68E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD694C;
      }
      goto L_08AD690C;
    }
L_08AD690C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AD693C;
      }
      goto L_08AD6920;
    }
L_08AD6920:
    ctx.gpr[31] = (0x08AD6928u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08AD669C;
L_08AD6928:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AD6920;
      }
      goto L_08AD693C;
    }
L_08AD693C:
    ctx.gpr[31] = (0x08AD6944u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6944u) goto L_08AD6944;
    return;
L_08AD6944:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD694C;
L_08AD694C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08AD6978:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29296)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6990:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29296)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD69A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (2221u << 16u);
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[8] = (2221u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (0u | 288u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(26492));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(26516));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD69D4u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(26612));
    goto L_08AD68B0;
L_08AD69D4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29296), ctx.gpr[2]);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD69EC:
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
L_08AD6A18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6A34u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 115u, 0x08AF8A48u>(ctx, &aot_mem) && ctx.pc == 0x08AD6A34u) goto L_08AD6A34;
    return;
L_08AD6A34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6A40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AD6C04;
      }
      goto L_08AD6A70;
    }
L_08AD6A70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17172u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 37450u);
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AD6AB8u);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AD6AB8u) goto L_08AD6AB8;
    return;
L_08AD6AB8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x08AD6AD8u);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6AD8u) goto L_08AD6AD8;
    return;
L_08AD6AD8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD6AE8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6AE8u) goto L_08AD6AE8;
    return;
L_08AD6AE8:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AD6B04u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B04u) goto L_08AD6B04;
    return;
L_08AD6B04:
    ctx.gpr[31] = (0x08AD6B0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B0Cu) goto L_08AD6B0C;
    return;
L_08AD6B0C:
    ctx.gpr[31] = (0x08AD6B14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B14u) goto L_08AD6B14;
    return;
L_08AD6B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD6B28u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6B28u) goto L_08AD6B28;
    return;
L_08AD6B28:
    ctx.gpr[31] = (0x08AD6B30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6B30u) goto L_08AD6B30;
    return;
L_08AD6B30:
    ctx.gpr[31] = (0x08AD6B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B38u) goto L_08AD6B38;
    return;
L_08AD6B38:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x08AD6B50u);
    ctx.gpr[8] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6B50u) goto L_08AD6B50;
    return;
L_08AD6B50:
    ctx.gpr[31] = (0x08AD6B58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B58u) goto L_08AD6B58;
    return;
L_08AD6B58:
    ctx.gpr[31] = (0x08AD6B60u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AD6B60u) goto L_08AD6B60;
    return;
L_08AD6B60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AD6BD0;
      }
      goto L_08AD6BA8;
    }
L_08AD6BA8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD6BB4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD6BB4u) goto L_08AD6BB4;
    return;
L_08AD6BB4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6BCC;
      }
      goto L_08AD6BC0;
    }
L_08AD6BC0:
    ctx.gpr[31] = (0x08AD6BC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6BC8u) goto L_08AD6BC8;
    return;
L_08AD6BC8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AD6BCC;
L_08AD6BCC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08AD6BD0;
L_08AD6BD0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6BE0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8904));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD6BE0u) goto L_08AD6BE0;
    return;
L_08AD6BE0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AD6BF4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD6BF4u) goto L_08AD6BF4;
    return;
L_08AD6BF4:
    ctx.gpr[31] = (0x08AD6BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6BFCu) goto L_08AD6BFC;
    return;
L_08AD6BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6DA0;
      }
      goto L_08AD6C04;
    }
L_08AD6C04:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6106)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AD6DA0;
      }
      goto L_08AD6C14;
    }
L_08AD6C14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17161u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 9363u);
    ctx.gpr[6] = (16800u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (17184u << 16u);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08AD6C5Cu);
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AD6C5Cu) goto L_08AD6C5C;
    return;
L_08AD6C5C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[7] = (0u | 50u);
    ctx.gpr[31] = (0x08AD6C7Cu);
    ctx.gpr[8] = (0u | 210u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6C7Cu) goto L_08AD6C7C;
    return;
L_08AD6C7C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD6C8Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6C8Cu) goto L_08AD6C8C;
    return;
L_08AD6C8C:
    ctx.gpr[4] = (16079u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16882u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.gpr[31] = (0x08AD6CA8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54F28u>(ctx, &aot_mem) && ctx.pc == 0x08AD6CA8u) goto L_08AD6CA8;
    return;
L_08AD6CA8:
    ctx.gpr[31] = (0x08AD6CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54FE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6CB0u) goto L_08AD6CB0;
    return;
L_08AD6CB0:
    ctx.gpr[31] = (0x08AD6CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A55100u>(ctx, &aot_mem) && ctx.pc == 0x08AD6CB8u) goto L_08AD6CB8;
    return;
L_08AD6CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-50));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AD6CCCu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A550DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6CCCu) goto L_08AD6CCC;
    return;
L_08AD6CCC:
    ctx.gpr[31] = (0x08AD6CD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6CD4u) goto L_08AD6CD4;
    return;
L_08AD6CD4:
    ctx.gpr[31] = (0x08AD6CDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55160u>(ctx, &aot_mem) && ctx.pc == 0x08AD6CDCu) goto L_08AD6CDC;
    return;
L_08AD6CDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 200u);
    ctx.gpr[31] = (0x08AD6CF4u);
    ctx.gpr[8] = (0u | 200u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6CF4u) goto L_08AD6CF4;
    return;
L_08AD6CF4:
    ctx.gpr[31] = (0x08AD6CFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54F60u>(ctx, &aot_mem) && ctx.pc == 0x08AD6CFCu) goto L_08AD6CFC;
    return;
L_08AD6CFC:
    ctx.gpr[31] = (0x08AD6D04u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55184u>(ctx, &aot_mem) && ctx.pc == 0x08AD6D04u) goto L_08AD6D04;
    return;
L_08AD6D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(27020)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(27024)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 1u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (ctx.gpr[6] >> 31u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
    ctx.gpr[16] = (2227u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AD6D74;
      }
      goto L_08AD6D4C;
    }
L_08AD6D4C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD6D58u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD6D58u) goto L_08AD6D58;
    return;
L_08AD6D58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD6D70;
      }
      goto L_08AD6D64;
    }
L_08AD6D64:
    ctx.gpr[31] = (0x08AD6D6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6D6Cu) goto L_08AD6D6C;
    return;
L_08AD6D6C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AD6D70;
L_08AD6D70:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08AD6D74;
L_08AD6D74:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6D84u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8896));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD6D84u) goto L_08AD6D84;
    return;
L_08AD6D84:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08AD6D98u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD6D98u) goto L_08AD6D98;
    return;
L_08AD6D98:
    ctx.gpr[31] = (0x08AD6DA0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 194u, 0x08A54EFCu>(ctx, &aot_mem) && ctx.pc == 0x08AD6DA0u) goto L_08AD6DA0;
    return;
L_08AD6DA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6DC4:
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[12];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6DFC:
    ctx.gpr[5] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(25332), static_cast<std::uint8_t>(ctx.gpr[4]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD6E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD6E30u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1160));
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 871u, 0x08AD3780u>(ctx, &aot_mem) && ctx.pc == 0x08AD6E30u) goto L_08AD6E30;
    return;
L_08AD6E30:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1168));
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08AD6E48u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14208));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08AD6E48u) goto L_08AD6E48;
    return;
L_08AD6E48:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1364), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1368), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1372), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1131), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1130), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1164), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1133), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1134), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(309), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1412), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1104), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1124), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1116), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-99));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17174u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1156), static_cast<std::uint8_t>(0u));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1140), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (17110u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1144), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1373), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1374), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1376), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(311), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25796)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6EF8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 110u, 0x088647F8u>(ctx, &aot_mem) && ctx.pc == 0x08AD6EF8u) goto L_08AD6EF8;
    return;
L_08AD6EF8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-25800)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD6F0Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 106u, 0x088647C0u>(ctx, &aot_mem) && ctx.pc == 0x08AD6F0Cu) goto L_08AD6F0C;
    return;
L_08AD6F0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29288));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29288)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08AD6F38u);
    ctx.gpr[4] = (0u | 20u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD6F38u) goto L_08AD6F38;
    return;
L_08AD6F38:
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-26464));
      if (branch_taken) {
          goto L_08AD6F60;
      }
      goto L_08AD6F4C;
    }
L_08AD6F4C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD6F5Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 542u, 0x08B0B608u>(ctx, &aot_mem) && ctx.pc == 0x08AD6F5Cu) goto L_08AD6F5C;
    return;
L_08AD6F5C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08AD6F60;
L_08AD6F60:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AD6F74;
      }
      goto L_08AD6F68;
    }
L_08AD6F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD6F74;
L_08AD6F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AD6FB8;
      }
      goto L_08AD6F84;
    }
L_08AD6F84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AD6FA8;
      }
      goto L_08AD6F8C;
    }
L_08AD6F8C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AD6FA0;
      }
      goto L_08AD6F94;
    }
L_08AD6F94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08AD6FA0;
L_08AD6FA0:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(304)));
    goto L_08AD6FA8;
L_08AD6FA8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(297)));
      if (branch_taken) {
          goto L_08AD6FE0;
      }
      goto L_08AD6FB8;
    }
L_08AD6FB8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(300));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08AD6FD8u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 151u, 0x08B00A6Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD6FD8u) goto L_08AD6FD8;
    return;
L_08AD6FD8:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(297)));
    goto L_08AD6FE0;
L_08AD6FE0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7008;
      }
      goto L_08AD6FE8;
    }
L_08AD6FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08AD7004u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AD7004u) goto L_08AD7004;
    return;
L_08AD7004:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08AD7008;
L_08AD7008:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7028;
      }
      goto L_08AD7010;
    }
L_08AD7010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AD7028;
      }
      goto L_08AD7020;
    }
L_08AD7020:
    ctx.gpr[31] = (0x08AD7028u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD7028u) goto L_08AD7028;
    return;
L_08AD7028:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD704C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AD70B4;
      }
      goto L_08AD7068;
    }
L_08AD7068:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AD7074u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 401u, 0x08AD9B08u>(ctx, &aot_mem) && ctx.pc == 0x08AD7074u) goto L_08AD7074;
    return;
L_08AD7074:
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1168));
    ctx.gpr[5] = (0u | 39u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7094u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(14220));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 366u, 0x08AF5CA4u>(ctx, &aot_mem) && ctx.pc == 0x08AD7094u) goto L_08AD7094;
    return;
L_08AD7094:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1160));
    ctx.gpr[31] = (0x08AD70A0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 872u, 0x08AD378Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD70A0u) goto L_08AD70A0;
    return;
L_08AD70A0:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD70B4;
      }
      goto L_08AD70AC;
    }
L_08AD70AC:
    ctx.gpr[31] = (0x08AD70B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08AD70B4u) goto L_08AD70B4;
    return;
L_08AD70B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD70C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16640u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (16608u << 16u);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    ctx.fpr[22] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[17] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    goto L_08AD713C;
L_08AD713C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[30];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[28];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08AD7194;
      }
      goto L_08AD716C;
    }
L_08AD716C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD7188u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AD729C;
L_08AD7188:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08AD71B0;
      }
      goto L_08AD7194;
    }
L_08AD7194:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD71B0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08AD729C;
L_08AD71B0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08AD713C;
      }
      goto L_08AD71C0;
    }
L_08AD71C0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD71F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD721Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1157), static_cast<std::uint8_t>(ctx.gpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 587u, 0x08ADA66Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD721Cu) goto L_08AD721C;
    return;
L_08AD721C:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
        goto L_08AD723C;
    }
    goto L_08AD722C;
L_08AD722C:
    ctx.gpr[31] = (0x08AD7234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD7234u) goto L_08AD7234;
    return;
L_08AD7234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    goto L_08AD723C;
L_08AD723C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AD7264;
      }
      goto L_08AD7244;
    }
L_08AD7244:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AD7268;
    }
    goto L_08AD7250;
L_08AD7250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26392));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08AD726C;
      }
      goto L_08AD7264;
    }
L_08AD7264:
    ctx.gpr[5] = (0u | 1u);
    goto L_08AD7268;
L_08AD7268:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08AD726C;
L_08AD726C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AD727C;
      }
      goto L_08AD7274;
    }
L_08AD7274:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-8008), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_08AD727C;
L_08AD727C:
    ctx.gpr[31] = (0x08AD7284u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(0u));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 763u, 0x0891B780u>(ctx, &aot_mem) && ctx.pc == 0x08AD7284u) goto L_08AD7284;
    return;
L_08AD7284:
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
L_08AD729C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AD72F0u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD72F0u) goto L_08AD72F0;
    return;
L_08AD72F0:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7308u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7308u) goto L_08AD7308;
    return;
L_08AD7308:
    ctx.fpr[26] = ctx.fpr[26] + ctx.fpr[22];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[20];
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[30] = ctx.fpr[26] + ctx.fpr[28];
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[15];
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[28];
    ctx.fpr[14] = ctx.fpr[30] + ctx.fpr[15];
    ctx.gpr[31] = (0x08AD7348u);
    ctx.fpr[15] = ctx.fpr[24] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AD7348u) goto L_08AD7348;
    return;
L_08AD7348:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD7358u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD7358u) goto L_08AD7358;
    return;
L_08AD7358:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[28];
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[28];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x08AD7370u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AD7370u) goto L_08AD7370;
    return;
L_08AD7370:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD7380u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD7380u) goto L_08AD7380;
    return;
L_08AD7380:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08AD73D0;
      }
      goto L_08AD7388;
    }
L_08AD7388:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD7394u);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7394u) goto L_08AD7394;
    return;
L_08AD7394:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[5] = (0u | 118u);
    ctx.gpr[6] = (0u | 176u);
    ctx.gpr[31] = (0x08AD73ACu);
    ctx.gpr[7] = (0u | 220u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD73ACu) goto L_08AD73AC;
    return;
L_08AD73AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08AD7414;
      }
      goto L_08AD73D0;
    }
L_08AD73D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AD73DCu);
    ctx.gpr[5] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 372u, 0x08AD98FCu>(ctx, &aot_mem) && ctx.pc == 0x08AD73DCu) goto L_08AD73DC;
    return;
L_08AD73DC:
    ctx.gpr[8] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 35u);
    ctx.gpr[31] = (0x08AD73F4u);
    ctx.gpr[7] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 439u, 0x088629DCu>(ctx, &aot_mem) && ctx.pc == 0x08AD73F4u) goto L_08AD73F4;
    return;
L_08AD73F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08AD7414;
L_08AD7414:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD742Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 137u, 0x089FD434u>(ctx, &aot_mem) && ctx.pc == 0x08AD742Cu) goto L_08AD742C;
    return;
L_08AD742C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AD743Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 949u, 0x08AD3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08AD743Cu) goto L_08AD743C;
    return;
L_08AD743C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7470:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8888));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7504;
      }
      goto L_08AD74D8;
    }
L_08AD74D8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD74E4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD74E4u) goto L_08AD74E4;
    return;
L_08AD74E4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD74FC;
      }
      goto L_08AD74F0;
    }
L_08AD74F0:
    ctx.gpr[31] = (0x08AD74F8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD74F8u) goto L_08AD74F8;
    return;
L_08AD74F8:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD74FC;
L_08AD74FC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD7504;
L_08AD7504:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7510u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7510u) goto L_08AD7510;
    return;
L_08AD7510:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD751Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD751Cu) goto L_08AD751C;
    return;
L_08AD751C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD7570;
      }
      goto L_08AD7548;
    }
L_08AD7548:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7554u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7554u) goto L_08AD7554;
    return;
L_08AD7554:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD756C;
      }
      goto L_08AD7560;
    }
L_08AD7560:
    ctx.gpr[31] = (0x08AD7568u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7568u) goto L_08AD7568;
    return;
L_08AD7568:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD756C;
L_08AD756C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD7570;
L_08AD7570:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD757Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD757Cu) goto L_08AD757C;
    return;
L_08AD757C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD7590u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD7590u) goto L_08AD7590;
    return;
L_08AD7590:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD75B4u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 184u, 0x08AD8AF0u>(ctx, &aot_mem) && ctx.pc == 0x08AD75B4u) goto L_08AD75B4;
    return;
L_08AD75B4:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD75F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8880));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7688;
      }
      goto L_08AD765C;
    }
L_08AD765C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7668u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7668u) goto L_08AD7668;
    return;
L_08AD7668:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7680;
      }
      goto L_08AD7674;
    }
L_08AD7674:
    ctx.gpr[31] = (0x08AD767Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD767Cu) goto L_08AD767C;
    return;
L_08AD767C:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD7680;
L_08AD7680:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD7688;
L_08AD7688:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7694u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7694u) goto L_08AD7694;
    return;
L_08AD7694:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD76A0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD76A0u) goto L_08AD76A0;
    return;
L_08AD76A0:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD76F4;
      }
      goto L_08AD76CC;
    }
L_08AD76CC:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD76D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD76D8u) goto L_08AD76D8;
    return;
L_08AD76D8:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD76F0;
      }
      goto L_08AD76E4;
    }
L_08AD76E4:
    ctx.gpr[31] = (0x08AD76ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD76ECu) goto L_08AD76EC;
    return;
L_08AD76EC:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD76F0;
L_08AD76F0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD76F4;
L_08AD76F4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7700u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7700u) goto L_08AD7700;
    return;
L_08AD7700:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD7714u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD7714u) goto L_08AD7714;
    return;
L_08AD7714:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD7738u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 187u, 0x08AD8B74u>(ctx, &aot_mem) && ctx.pc == 0x08AD7738u) goto L_08AD7738;
    return;
L_08AD7738:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7778:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8872));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD77F4;
      }
      goto L_08AD77C8;
    }
L_08AD77C8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD77D4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD77D4u) goto L_08AD77D4;
    return;
L_08AD77D4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD77EC;
      }
      goto L_08AD77E0;
    }
L_08AD77E0:
    ctx.gpr[31] = (0x08AD77E8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD77E8u) goto L_08AD77E8;
    return;
L_08AD77E8:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD77EC;
L_08AD77EC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD77F4;
L_08AD77F4:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7800u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7800u) goto L_08AD7800;
    return;
L_08AD7800:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD780Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD780Cu) goto L_08AD780C;
    return;
L_08AD780C:
    ctx.gpr[4] = (16864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[22] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[22])));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_08AD7870;
      }
      goto L_08AD7848;
    }
L_08AD7848:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7854u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7854u) goto L_08AD7854;
    return;
L_08AD7854:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD786C;
      }
      goto L_08AD7860;
    }
L_08AD7860:
    ctx.gpr[31] = (0x08AD7868u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7868u) goto L_08AD7868;
    return;
L_08AD7868:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD786C;
L_08AD786C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD7870;
L_08AD7870:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD787Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD787Cu) goto L_08AD787C;
    return;
L_08AD787C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08AD7890u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD7890u) goto L_08AD7890;
    return;
L_08AD7890:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-27));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[31] = (0x08AD78A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 193u, 0x08AD8C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD78A0u) goto L_08AD78A0;
    return;
L_08AD78A0:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD78D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8864));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD796C;
      }
      goto L_08AD7940;
    }
L_08AD7940:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD794Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD794Cu) goto L_08AD794C;
    return;
L_08AD794C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7964;
      }
      goto L_08AD7958;
    }
L_08AD7958:
    ctx.gpr[31] = (0x08AD7960u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7960u) goto L_08AD7960;
    return;
L_08AD7960:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD7964;
L_08AD7964:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD796C;
L_08AD796C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7978u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7978u) goto L_08AD7978;
    return;
L_08AD7978:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7984u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD7984u) goto L_08AD7984;
    return;
L_08AD7984:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[24] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[24])));
      if (branch_taken) {
          goto L_08AD79DC;
      }
      goto L_08AD79B4;
    }
L_08AD79B4:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD79C0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD79C0u) goto L_08AD79C0;
    return;
L_08AD79C0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD79D8;
      }
      goto L_08AD79CC;
    }
L_08AD79CC:
    ctx.gpr[31] = (0x08AD79D4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD79D4u) goto L_08AD79D4;
    return;
L_08AD79D4:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD79D8;
L_08AD79D8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD79DC;
L_08AD79DC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD79E8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD79E8u) goto L_08AD79E8;
    return;
L_08AD79E8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08AD79FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD79FCu) goto L_08AD79FC;
    return;
L_08AD79FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD7A24u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 205u, 0x08AD8E9Cu>(ctx, &aot_mem) && ctx.pc == 0x08AD7A24u) goto L_08AD7A24;
    return;
L_08AD7A24:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
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
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7A64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17032u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8856));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7B04;
      }
      goto L_08AD7AD8;
    }
L_08AD7AD8:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7AE4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7AE4u) goto L_08AD7AE4;
    return;
L_08AD7AE4:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7AFC;
      }
      goto L_08AD7AF0;
    }
L_08AD7AF0:
    ctx.gpr[31] = (0x08AD7AF8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7AF8u) goto L_08AD7AF8;
    return;
L_08AD7AF8:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD7AFC;
L_08AD7AFC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD7B04;
L_08AD7B04:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7B10u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B10u) goto L_08AD7B10;
    return;
L_08AD7B10:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7B1Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B1Cu) goto L_08AD7B1C;
    return;
L_08AD7B1C:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
      if (branch_taken) {
          goto L_08AD7B74;
      }
      goto L_08AD7B4C;
    }
L_08AD7B4C:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7B58u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B58u) goto L_08AD7B58;
    return;
L_08AD7B58:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7B70;
      }
      goto L_08AD7B64;
    }
L_08AD7B64:
    ctx.gpr[31] = (0x08AD7B6Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7B6Cu) goto L_08AD7B6C;
    return;
L_08AD7B6C:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7B70;
L_08AD7B70:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD7B74;
L_08AD7B74:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7B80u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B80u) goto L_08AD7B80;
    return;
L_08AD7B80:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08AD7B94u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD7B94u) goto L_08AD7B94;
    return;
L_08AD7B94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD7BBCu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 196u, 0x08AD8D10u>(ctx, &aot_mem) && ctx.pc == 0x08AD7BBCu) goto L_08AD7BBC;
    return;
L_08AD7BBC:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7C00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16904u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16448u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7CA0;
      }
      goto L_08AD7C74;
    }
L_08AD7C74:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7C80u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7C80u) goto L_08AD7C80;
    return;
L_08AD7C80:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7C98;
      }
      goto L_08AD7C8C;
    }
L_08AD7C8C:
    ctx.gpr[31] = (0x08AD7C94u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7C94u) goto L_08AD7C94;
    return;
L_08AD7C94:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD7C98;
L_08AD7C98:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD7CA0;
L_08AD7CA0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7CACu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7CACu) goto L_08AD7CAC;
    return;
L_08AD7CAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7CB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD7CB8u) goto L_08AD7CB8;
    return;
L_08AD7CB8:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
      if (branch_taken) {
          goto L_08AD7D10;
      }
      goto L_08AD7CE8;
    }
L_08AD7CE8:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7CF4u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7CF4u) goto L_08AD7CF4;
    return;
L_08AD7CF4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7D0C;
      }
      goto L_08AD7D00;
    }
L_08AD7D00:
    ctx.gpr[31] = (0x08AD7D08u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7D08u) goto L_08AD7D08;
    return;
L_08AD7D08:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7D0C;
L_08AD7D0C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD7D10;
L_08AD7D10:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7D1Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7D1Cu) goto L_08AD7D1C;
    return;
L_08AD7D1C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08AD7D30u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD7D30u) goto L_08AD7D30;
    return;
L_08AD7D30:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD7D58u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 210u, 0x08AD8F88u>(ctx, &aot_mem) && ctx.pc == 0x08AD7D58u) goto L_08AD7D58;
    return;
L_08AD7D58:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7D9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17032u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-8848));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AD7E3C;
      }
      goto L_08AD7E10;
    }
L_08AD7E10:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7E1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7E1Cu) goto L_08AD7E1C;
    return;
L_08AD7E1C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7E34;
      }
      goto L_08AD7E28;
    }
L_08AD7E28:
    ctx.gpr[31] = (0x08AD7E30u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7E30u) goto L_08AD7E30;
    return;
L_08AD7E30:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_08AD7E34;
L_08AD7E34:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[21]);
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08AD7E3C;
L_08AD7E3C:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7E48u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7E48u) goto L_08AD7E48;
    return;
L_08AD7E48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7E54u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD7E54u) goto L_08AD7E54;
    return;
L_08AD7E54:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24444)));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[28] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[28])));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
      if (branch_taken) {
          goto L_08AD7EAC;
      }
      goto L_08AD7E84;
    }
L_08AD7E84:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7E90u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7E90u) goto L_08AD7E90;
    return;
L_08AD7E90:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7EA8;
      }
      goto L_08AD7E9C;
    }
L_08AD7E9C:
    ctx.gpr[31] = (0x08AD7EA4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7EA4u) goto L_08AD7EA4;
    return;
L_08AD7EA4:
    ctx.gpr[22] = (ctx.gpr[23] | 0u);
    goto L_08AD7EA8;
L_08AD7EA8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(24444), ctx.gpr[22]);
    goto L_08AD7EAC;
L_08AD7EAC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7EB8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7EB8u) goto L_08AD7EB8;
    return;
L_08AD7EB8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08AD7ECCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56C04u>(ctx, &aot_mem) && ctx.pc == 0x08AD7ECCu) goto L_08AD7ECC;
    return;
L_08AD7ECC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AD7EF4u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 196u, 0x08AD8D10u>(ctx, &aot_mem) && ctx.pc == 0x08AD7EF4u) goto L_08AD7EF4;
    return;
L_08AD7EF4:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AD7F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (16776u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-25824)));
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    ctx.fpr[26] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[26])));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0181_entry, 181u, 10u, 0x08AD806Cu>(ctx, &aot_mem); return;
      }
      goto L_08AD7FA8;
    }
L_08AD7FA8:
    ctx.gpr[21] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-8840));
      if (branch_taken) {
          goto L_08AD7FE0;
      }
      goto L_08AD7FB4;
    }
L_08AD7FB4:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08AD7FC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FC0u) goto L_08AD7FC0;
    return;
L_08AD7FC0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AD7FD8;
      }
      goto L_08AD7FCC;
    }
L_08AD7FCC:
    ctx.gpr[31] = (0x08AD7FD4u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08AD7FD4u) goto L_08AD7FD4;
    return;
L_08AD7FD4:
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
    goto L_08AD7FD8;
L_08AD7FD8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    ctx.gpr[22] = (ctx.gpr[19] | 0u);
    goto L_08AD7FE0;
L_08AD7FE0:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AD7FECu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FECu) goto L_08AD7FEC;
    return;
L_08AD7FEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AD7FF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 129u, 0x08A54B88u>(ctx, &aot_mem) && ctx.pc == 0x08AD7FF8u) goto L_08AD7FF8;
    return;
L_08AD7FF8:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    ctx.pc = 0x08AD8000u; return;
}

void recomp_unit_0180(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0180_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_180(Runtime &runtime) {
    runtime.register_generated_unit(180u, 0x08AD4000u, 16384u, &recomp_unit_0180, &recomp_unit_0180_entry);
    runtime.register_function(0x08AD4000u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4008u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4014u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4020u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD402Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4038u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4048u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4054u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD405Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4068u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD407Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4088u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4094u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD40F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4104u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4110u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD411Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4128u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4154u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4160u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD416Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4178u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4184u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4194u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD41F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4204u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4210u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD422Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4278u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD42A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD43BCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD44ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD46CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD48A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4938u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD495Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4968u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4974u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD497Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4980u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4988u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4994u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD49FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4A90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4AC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4B88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4BFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4C8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4CF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4D90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4DF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4E9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4EC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4ECCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4ED0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4ED8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4F8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD4FF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5010u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5024u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5030u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5040u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5054u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5060u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5070u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5084u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5090u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD50F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5100u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5114u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5120u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5130u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD51D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5200u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5214u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD521Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5224u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5234u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5248u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD525Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD526Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5274u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD527Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5288u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD52B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5328u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5330u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD533Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5358u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5360u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD536Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5388u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5390u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD539Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD53F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5408u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5418u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5428u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5440u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD544Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5460u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD546Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5494u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD54F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5514u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD551Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD552Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5548u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5564u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD556Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5574u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD557Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5584u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD558Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5594u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD559Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55C4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD55E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5610u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD561Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5628u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5630u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD563Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5644u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD564Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5654u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5658u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5660u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5668u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5670u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5678u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5680u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5684u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD56F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5714u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD571Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5730u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5740u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5750u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5758u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5768u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5770u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD577Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5784u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5790u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5798u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD57F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5820u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5864u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5880u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5890u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5894u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD58B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD590Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5920u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5928u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5934u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD593Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD594Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5954u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5960u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5968u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5984u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD598Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5998u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD59F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A20u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5A94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ABCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ACCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5AFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5B98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5BF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5C98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5CECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5D74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5DF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5E94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5ED0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5EF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F2Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F44u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F78u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F88u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5F9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD5FF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6028u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD609Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD60F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6100u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6110u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6118u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6124u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6130u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6138u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6140u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6148u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6154u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD615Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6164u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD616Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6174u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6180u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6188u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6194u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD619Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61A4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD61FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6204u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6214u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD621Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6224u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD622Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6234u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD623Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6244u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD624Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6254u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD625Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6264u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD626Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6274u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6288u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6294u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD62F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6300u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD630Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6318u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6320u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6328u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6338u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6348u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6350u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6358u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6360u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6368u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6370u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6378u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6380u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6388u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6390u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6398u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63B8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD63E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6404u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6410u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6420u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6428u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6434u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6440u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD644Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6454u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6460u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6468u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6470u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6478u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6480u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD648Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6494u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD64FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6504u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD650Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6514u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD651Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD652Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6540u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6564u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD656Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6574u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6580u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6584u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6598u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD65A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6650u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6670u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD668Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD669Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD66F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD670Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6720u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD673Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6744u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6750u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6758u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6774u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD677Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6794u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD67F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6828u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6830u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6868u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6870u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD688Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD68E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD690Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6920u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6928u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD693Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6944u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD694Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6978u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6990u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69A8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD69ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A18u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A40u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6A70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6AE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B50u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6B60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BC8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BD0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6BFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C14u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C7Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6C8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CB0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CDCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6CFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6D98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DC4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6DFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6E48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6EF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F5Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F60u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F68u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6F94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD6FE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7004u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7008u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7010u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7020u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7028u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD704Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7068u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7074u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7094u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD70C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD713Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD716Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7188u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7194u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71B0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD71F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD721Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD722Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7234u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD723Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7244u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7250u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7264u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7268u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD726Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7274u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD727Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7284u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD729Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD72F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7308u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7348u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7358u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7370u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7380u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7388u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7394u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73ACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73D0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD73F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7414u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD742Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD743Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7470u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74F8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD74FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7504u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7510u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD751Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7548u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7554u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7560u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7568u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD756Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7570u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD757Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7590u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD75F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD765Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7668u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7674u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD767Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7680u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7688u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7694u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76E4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76F0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD76F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7700u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7714u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7738u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7778u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77C8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77E0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77ECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD77F4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7800u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD780Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7848u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7854u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7860u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7868u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD786Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7870u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD787Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7890u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78A0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD78D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7940u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD794Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7958u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7960u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7964u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD796Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7978u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7984u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79B4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79C0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79CCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79D4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79D8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79DCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79E8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD79FCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A24u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7A64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AE4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AF0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AF8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7AFCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B04u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B4Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B64u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B6Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B70u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7B94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7BBCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C74u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C80u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C8Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C94u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7C98u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CA0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CE8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7CF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D00u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D08u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D0Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D58u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7D9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E10u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E1Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E28u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E30u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E34u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E3Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E48u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E54u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E84u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E90u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7E9Cu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EA4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EACu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EB8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7ECCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7EF4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7F38u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FA8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FB4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FC0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FCCu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FD4u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FD8u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FE0u, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FECu, &recomp_unit_0180, "recomp_unit_0180");
    runtime.register_function(0x08AD7FF8u, &recomp_unit_0180, "recomp_unit_0180");
}
} // namespace psprecomp
