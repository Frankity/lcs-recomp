#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0138[4090] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 9, 0, 10, 0,
    0, 0, 11, 12, 0, 13, 0, 0, 0, 14, 15, 0, 16, 0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 20, 0, 21, 0, 0, 0, 22,
    0, 0, 0, 23, 24, 0, 25, 0, 0, 0, 26, 0, 0, 0, 27, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 32, 0, 33, 0, 0, 34,
    0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 0, 41, 0, 0, 0, 42, 0,
    0, 0, 43, 0, 0, 0, 44, 0, 0, 0, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 50, 0, 51, 0, 0, 0, 52, 0, 53,
    0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0,
    59, 0, 0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0,
    0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0, 70, 71, 0, 72, 0, 0, 73, 74, 0, 75, 0, 0, 76, 0, 77, 0, 78, 79, 0, 80,
    0, 0, 81, 0, 82, 83, 0, 84, 0, 0, 85, 0, 86, 87, 0, 88, 0, 0, 89, 0, 90, 91, 0, 92, 0, 0, 93, 0, 0, 94, 0, 95,
    0, 0, 0, 96, 0, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 0, 0, 103, 0, 104, 0, 0,
    0, 0, 105, 0, 106, 0, 0, 0, 107, 0, 108, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 112, 0, 113, 114,
    115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0,
    0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 127, 0, 128,
    0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 133, 0, 134, 0, 135, 0, 136, 0, 137, 0,
    138, 0, 0, 139, 140, 0, 141, 0, 0, 142, 143, 0, 144, 0, 0, 145, 0, 146, 0, 147, 148, 0, 149, 0, 0, 150, 0, 151, 152, 0, 153, 0,
    0, 154, 0, 155, 156, 0, 157, 0, 0, 158, 0, 159, 160, 0, 161, 0, 0, 162, 0, 0, 163, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0,
    0, 167, 0, 168, 0, 0, 0, 169, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176,
    0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 183, 184, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 185, 0, 0, 0, 186, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0,
    0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 192, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198,
    0, 199, 0, 200, 0, 201, 0, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 208, 0, 209, 0, 0,
    0, 0, 210, 0, 0, 0, 211, 0, 0, 212, 0, 213, 0, 214, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222, 0, 0, 223, 0, 224, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 0, 227, 0, 228, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 231, 0, 232, 0, 0,
    233, 0, 234, 0, 0, 0, 0, 235, 0, 236, 0, 237, 0, 0, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 241, 0, 242, 0, 0, 243,
    0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 0, 0, 246, 0, 0, 0, 247, 0, 0,
    248, 0, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 254, 0, 0, 0, 0, 255,
    0, 0, 0, 256, 0, 0, 257, 0, 258, 0, 0, 259, 0, 260, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 0, 265, 0,
    266, 0, 0, 0, 0, 267, 0, 268, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 0,
    278, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 283, 0, 284, 0, 0, 285, 0, 286, 0, 0, 0, 0, 287, 0, 288,
    0, 289, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 0, 299, 0, 0, 300, 0, 0, 301, 0, 302, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 306, 0, 0, 0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 310, 0,
    0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 314, 0, 315, 0, 0, 0, 316, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 319, 0, 320, 0, 0,
    321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0,
    0, 326, 0, 0, 327, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 330, 0, 0, 331, 0, 332, 0, 0, 0, 0,
    333, 0, 0, 0, 334, 0, 0, 335, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343,
    0, 344, 0, 0, 0, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 349, 0, 0, 0, 350, 0, 0, 0, 351, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0,
    0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 0, 0, 0, 365, 0,
    366, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 373, 0, 374, 0, 0, 375, 376, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 0, 0,
    0, 381, 0, 0, 382, 0, 0, 0, 383, 0, 384, 0, 0, 385, 0, 0, 0, 386, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 391, 0, 0, 392,
    0, 393, 0, 0, 394, 0, 0, 0, 395, 0, 0, 0, 396, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0,
    0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 414, 0, 415, 0, 416, 0,
    0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 425, 0, 0, 426, 0, 0, 0, 427, 0, 428, 429, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 433, 0, 434, 0, 0, 435, 0, 436, 0, 0, 437, 0, 438, 439, 0, 0, 440, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0,
    0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 451, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 457, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 460,
    0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0,
    0, 465, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0,
    0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 473, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    474, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0,
    0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 480, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0,
    0, 0, 483, 484, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 486, 487, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 489, 0, 0, 0, 0, 490, 0, 491, 0, 492, 0, 493, 0, 0, 494, 0, 0, 495, 0, 0, 0, 0, 496, 497, 0, 0, 0, 0, 498,
    0, 499, 0, 0, 500, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 506, 0, 0, 0, 507,
    0, 0, 0, 508, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0,
    0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0,
    519, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 524, 0, 0, 0, 525, 0, 526, 0,
    0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 0,
    0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0,
    538, 0, 0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 546, 0, 547, 0, 0, 548, 0, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 552, 0, 0, 553, 0, 554, 555, 0, 0, 0, 556, 0,
    0, 0, 0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 564, 0, 0, 565, 0, 566, 567, 0, 0,
    0, 0, 0, 568, 0, 0, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 573, 0, 574, 0, 575, 0, 576, 0, 577,
    0, 578, 0, 579, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 588, 0, 589,
    0, 590, 0, 591, 0, 0, 0, 592, 0, 0, 593, 0, 594, 595, 0, 596, 0, 597, 0, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 608, 0, 0, 609,
    0, 0, 610, 0, 0, 611, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 620, 0, 0, 621, 0, 0, 622, 0, 0,
    623, 0, 0, 624, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 633, 0, 0,
    0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 0,
    0, 644, 0, 645, 0, 646, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 649, 0, 0, 650, 0, 651, 652, 653, 0, 0, 0, 0, 0, 654,
    0, 655, 0, 656, 0, 0, 0, 657, 0, 0, 658, 0, 659, 660, 661, 0, 0, 0, 0, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0,
    665, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 671, 0, 672, 673, 674, 0, 0, 0, 0,
    0, 675, 0, 676, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 680, 681, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0,
    0, 0, 685, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0,
    692, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0,
    0, 0, 700, 0, 0, 0, 701, 0, 702, 0, 703, 0, 704, 0, 0, 705, 0, 706, 0, 707, 0, 708, 0, 0, 0, 0, 709, 0, 710, 0, 0, 0,
    0, 0, 0, 711, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0,
    723, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 725, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0,
    0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 749, 0, 750, 0, 0, 751, 0, 0, 0, 0, 0, 0, 752, 0,
    753, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 758, 0, 759, 0, 760, 0, 761, 0, 0, 762, 0, 0, 0, 0, 0,
    763, 0, 764, 0, 765, 0, 766, 0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 770, 0, 0, 771, 0, 0, 772, 0, 0, 773, 0,
    0, 774, 0, 0, 775, 0, 0, 776, 0, 0, 777, 0, 0, 778, 0, 0, 779, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 783, 0, 784, 0, 0,
    785, 0, 0, 786, 0, 0, 787, 0, 0, 788, 0, 0, 789, 0, 790, 0, 791, 0, 792, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0, 795, 0, 796,
    0, 797, 0, 0, 0, 0, 0, 798, 0, 0, 799, 0, 800, 0, 801, 802, 0, 0, 0, 803, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0, 0, 0,
    0, 807, 0, 0, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 812, 0, 0, 813, 0, 0, 814, 0, 0, 815, 0, 0, 816, 0, 817,
    818, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 821, 0, 822, 0, 823, 0, 0, 0, 824, 0, 825, 0, 826, 0, 827, 0, 828, 0, 829, 0, 0,
    830, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 0, 833, 0, 834, 0, 835, 0, 836, 0, 837, 0, 838, 0, 839, 0, 0, 0,
    0, 0, 840, 0, 0, 0, 0, 0, 841, 0, 842, 0, 0, 0, 843, 0, 844, 0, 0, 0, 0, 0, 0, 845, 0, 0, 0, 0, 0, 0, 0, 0,
    846, 0, 0, 0, 0, 847, 0, 0, 0, 0, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 849, 0, 0,
    0, 0, 0, 850, 0, 0, 0, 851, 0, 852, 853, 0, 0, 0, 0, 0, 854, 0, 0, 0, 0, 0, 0, 855, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 856, 0, 0, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 0, 860, 0,
    0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 862, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 863, 0, 0, 864, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 865, 0, 0, 866, 0, 0, 0, 0,
    0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 0, 0, 868, 0, 869, 0, 870, 0, 0, 0, 871, 0, 0, 872, 0, 873,
};
void recomp_unit_0138_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A2C000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0138[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A2C000;
    case 2u: goto L_08A2C170;
    case 3u: goto L_08A2C198;
    case 4u: goto L_08A2C1A4;
    case 5u: goto L_08A2C1D0;
    case 6u: goto L_08A2C1D8;
    case 7u: goto L_08A2C1E0;
    case 8u: goto L_08A2C1E8;
    case 9u: goto L_08A2C1F0;
    case 10u: goto L_08A2C1F8;
    case 11u: goto L_08A2C208;
    case 12u: goto L_08A2C20C;
    case 13u: goto L_08A2C214;
    case 14u: goto L_08A2C224;
    case 15u: goto L_08A2C228;
    case 16u: goto L_08A2C230;
    case 17u: goto L_08A2C240;
    case 18u: goto L_08A2C250;
    case 19u: goto L_08A2C260;
    case 20u: goto L_08A2C264;
    case 21u: goto L_08A2C26C;
    case 22u: goto L_08A2C27C;
    case 23u: goto L_08A2C28C;
    case 24u: goto L_08A2C290;
    case 25u: goto L_08A2C298;
    case 26u: goto L_08A2C2A8;
    case 27u: goto L_08A2C2B8;
    case 28u: goto L_08A2C2BC;
    case 29u: goto L_08A2C2C4;
    case 30u: goto L_08A2C2D4;
    case 31u: goto L_08A2C2E4;
    case 32u: goto L_08A2C2E8;
    case 33u: goto L_08A2C2F0;
    case 34u: goto L_08A2C2FC;
    case 35u: goto L_08A2C310;
    case 36u: goto L_08A2C320;
    case 37u: goto L_08A2C328;
    case 38u: goto L_08A2C338;
    case 39u: goto L_08A2C344;
    case 40u: goto L_08A2C358;
    case 41u: goto L_08A2C368;
    case 42u: goto L_08A2C378;
    case 43u: goto L_08A2C388;
    case 44u: goto L_08A2C398;
    case 45u: goto L_08A2C3AC;
    case 46u: goto L_08A2C3BC;
    case 47u: goto L_08A2C3D8;
    case 48u: goto L_08A2C3F0;
    case 49u: goto L_08A2C450;
    case 50u: goto L_08A2C45C;
    case 51u: goto L_08A2C464;
    case 52u: goto L_08A2C474;
    case 53u: goto L_08A2C47C;
    case 54u: goto L_08A2C48C;
    case 55u: goto L_08A2C494;
    case 56u: goto L_08A2C49C;
    case 57u: goto L_08A2C4A8;
    case 58u: goto L_08A2C4E0;
    case 59u: goto L_08A2C500;
    case 60u: goto L_08A2C514;
    case 61u: goto L_08A2C530;
    case 62u: goto L_08A2C548;
    case 63u: goto L_08A2C54C;
    case 64u: goto L_08A2C574;
    case 65u: goto L_08A2C584;
    case 66u: goto L_08A2C58C;
    case 67u: goto L_08A2C594;
    case 68u: goto L_08A2C59C;
    case 69u: goto L_08A2C5A4;
    case 70u: goto L_08A2C5B0;
    case 71u: goto L_08A2C5B4;
    case 72u: goto L_08A2C5BC;
    case 73u: goto L_08A2C5C8;
    case 74u: goto L_08A2C5CC;
    case 75u: goto L_08A2C5D4;
    case 76u: goto L_08A2C5E0;
    case 77u: goto L_08A2C5E8;
    case 78u: goto L_08A2C5F0;
    case 79u: goto L_08A2C5F4;
    case 80u: goto L_08A2C5FC;
    case 81u: goto L_08A2C608;
    case 82u: goto L_08A2C610;
    case 83u: goto L_08A2C614;
    case 84u: goto L_08A2C61C;
    case 85u: goto L_08A2C628;
    case 86u: goto L_08A2C630;
    case 87u: goto L_08A2C634;
    case 88u: goto L_08A2C63C;
    case 89u: goto L_08A2C648;
    case 90u: goto L_08A2C650;
    case 91u: goto L_08A2C654;
    case 92u: goto L_08A2C65C;
    case 93u: goto L_08A2C668;
    case 94u: goto L_08A2C674;
    case 95u: goto L_08A2C67C;
    case 96u: goto L_08A2C68C;
    case 97u: goto L_08A2C698;
    case 98u: goto L_08A2C6A8;
    case 99u: goto L_08A2C6B0;
    case 100u: goto L_08A2C6C0;
    case 101u: goto L_08A2C6CC;
    case 102u: goto L_08A2C6DC;
    case 103u: goto L_08A2C6EC;
    case 104u: goto L_08A2C6F4;
    case 105u: goto L_08A2C708;
    case 106u: goto L_08A2C710;
    case 107u: goto L_08A2C720;
    case 108u: goto L_08A2C728;
    case 109u: goto L_08A2C73C;
    case 110u: goto L_08A2C74C;
    case 111u: goto L_08A2C768;
    case 112u: goto L_08A2C770;
    case 113u: goto L_08A2C778;
    case 114u: goto L_08A2C77C;
    case 115u: goto L_08A2C780;
    case 116u: goto L_08A2C7AC;
    case 117u: goto L_08A2C7BC;
    case 118u: goto L_08A2C7D0;
    case 119u: goto L_08A2C7F4;
    case 120u: goto L_08A2C814;
    case 121u: goto L_08A2C828;
    case 122u: goto L_08A2C844;
    case 123u: goto L_08A2C854;
    case 124u: goto L_08A2C858;
    case 125u: goto L_08A2C888;
    case 126u: goto L_08A2C8E8;
    case 127u: goto L_08A2C8F4;
    case 128u: goto L_08A2C8FC;
    case 129u: goto L_08A2C90C;
    case 130u: goto L_08A2C914;
    case 131u: goto L_08A2C940;
    case 132u: goto L_08A2C950;
    case 133u: goto L_08A2C958;
    case 134u: goto L_08A2C960;
    case 135u: goto L_08A2C968;
    case 136u: goto L_08A2C970;
    case 137u: goto L_08A2C978;
    case 138u: goto L_08A2C980;
    case 139u: goto L_08A2C98C;
    case 140u: goto L_08A2C990;
    case 141u: goto L_08A2C998;
    case 142u: goto L_08A2C9A4;
    case 143u: goto L_08A2C9A8;
    case 144u: goto L_08A2C9B0;
    case 145u: goto L_08A2C9BC;
    case 146u: goto L_08A2C9C4;
    case 147u: goto L_08A2C9CC;
    case 148u: goto L_08A2C9D0;
    case 149u: goto L_08A2C9D8;
    case 150u: goto L_08A2C9E4;
    case 151u: goto L_08A2C9EC;
    case 152u: goto L_08A2C9F0;
    case 153u: goto L_08A2C9F8;
    case 154u: goto L_08A2CA04;
    case 155u: goto L_08A2CA0C;
    case 156u: goto L_08A2CA10;
    case 157u: goto L_08A2CA18;
    case 158u: goto L_08A2CA24;
    case 159u: goto L_08A2CA2C;
    case 160u: goto L_08A2CA30;
    case 161u: goto L_08A2CA38;
    case 162u: goto L_08A2CA44;
    case 163u: goto L_08A2CA50;
    case 164u: goto L_08A2CA58;
    case 165u: goto L_08A2CA68;
    case 166u: goto L_08A2CA74;
    case 167u: goto L_08A2CA84;
    case 168u: goto L_08A2CA8C;
    case 169u: goto L_08A2CA9C;
    case 170u: goto L_08A2CAA8;
    case 171u: goto L_08A2CAB8;
    case 172u: goto L_08A2CAC8;
    case 173u: goto L_08A2CAD0;
    case 174u: goto L_08A2CAE4;
    case 175u: goto L_08A2CAEC;
    case 176u: goto L_08A2CAFC;
    case 177u: goto L_08A2CB04;
    case 178u: goto L_08A2CB18;
    case 179u: goto L_08A2CB28;
    case 180u: goto L_08A2CB44;
    case 181u: goto L_08A2CB4C;
    case 182u: goto L_08A2CB54;
    case 183u: goto L_08A2CB58;
    case 184u: goto L_08A2CB5C;
    case 185u: goto L_08A2CB88;
    case 186u: goto L_08A2CB98;
    case 187u: goto L_08A2CBAC;
    case 188u: goto L_08A2CBD0;
    case 189u: goto L_08A2CBF0;
    case 190u: goto L_08A2CC04;
    case 191u: goto L_08A2CC20;
    case 192u: goto L_08A2CC30;
    case 193u: goto L_08A2CC34;
    case 194u: goto L_08A2CC64;
    case 195u: goto L_08A2CCCC;
    case 196u: goto L_08A2CCD4;
    case 197u: goto L_08A2CCF0;
    case 198u: goto L_08A2CCFC;
    case 199u: goto L_08A2CD04;
    case 200u: goto L_08A2CD0C;
    case 201u: goto L_08A2CD14;
    case 202u: goto L_08A2CD28;
    case 203u: goto L_08A2CD30;
    case 204u: goto L_08A2CD38;
    case 205u: goto L_08A2CD40;
    case 206u: goto L_08A2CD50;
    case 207u: goto L_08A2CD58;
    case 208u: goto L_08A2CD6C;
    case 209u: goto L_08A2CD74;
    case 210u: goto L_08A2CD88;
    case 211u: goto L_08A2CD98;
    case 212u: goto L_08A2CDA4;
    case 213u: goto L_08A2CDAC;
    case 214u: goto L_08A2CDB4;
    case 215u: goto L_08A2CDBC;
    case 216u: goto L_08A2CDC4;
    case 217u: goto L_08A2CDD0;
    case 218u: goto L_08A2CDDC;
    case 219u: goto L_08A2CE28;
    case 220u: goto L_08A2CE38;
    case 221u: goto L_08A2CE48;
    case 222u: goto L_08A2CE54;
    case 223u: goto L_08A2CE60;
    case 224u: goto L_08A2CE68;
    case 225u: goto L_08A2CE98;
    case 226u: goto L_08A2CEA8;
    case 227u: goto L_08A2CEB4;
    case 228u: goto L_08A2CEBC;
    case 229u: goto L_08A2CED0;
    case 230u: goto L_08A2CEE0;
    case 231u: goto L_08A2CEEC;
    case 232u: goto L_08A2CEF4;
    case 233u: goto L_08A2CF00;
    case 234u: goto L_08A2CF08;
    case 235u: goto L_08A2CF1C;
    case 236u: goto L_08A2CF24;
    case 237u: goto L_08A2CF2C;
    case 238u: goto L_08A2CF3C;
    case 239u: goto L_08A2CF4C;
    case 240u: goto L_08A2CF54;
    case 241u: goto L_08A2CF68;
    case 242u: goto L_08A2CF70;
    case 243u: goto L_08A2CF7C;
    case 244u: goto L_08A2CF88;
    case 245u: goto L_08A2CFD4;
    case 246u: goto L_08A2CFE4;
    case 247u: goto L_08A2CFF4;
    case 248u: goto L_08A2D000;
    case 249u: goto L_08A2D00C;
    case 250u: goto L_08A2D014;
    case 251u: goto L_08A2D044;
    case 252u: goto L_08A2D054;
    case 253u: goto L_08A2D060;
    case 254u: goto L_08A2D068;
    case 255u: goto L_08A2D07C;
    case 256u: goto L_08A2D08C;
    case 257u: goto L_08A2D098;
    case 258u: goto L_08A2D0A0;
    case 259u: goto L_08A2D0AC;
    case 260u: goto L_08A2D0B4;
    case 261u: goto L_08A2D0C8;
    case 262u: goto L_08A2D0D0;
    case 263u: goto L_08A2D0D8;
    case 264u: goto L_08A2D0E8;
    case 265u: goto L_08A2D0F8;
    case 266u: goto L_08A2D100;
    case 267u: goto L_08A2D114;
    case 268u: goto L_08A2D11C;
    case 269u: goto L_08A2D128;
    case 270u: goto L_08A2D134;
    case 271u: goto L_08A2D180;
    case 272u: goto L_08A2D190;
    case 273u: goto L_08A2D1A0;
    case 274u: goto L_08A2D1AC;
    case 275u: goto L_08A2D1B8;
    case 276u: goto L_08A2D1C0;
    case 277u: goto L_08A2D1F0;
    case 278u: goto L_08A2D200;
    case 279u: goto L_08A2D20C;
    case 280u: goto L_08A2D214;
    case 281u: goto L_08A2D228;
    case 282u: goto L_08A2D238;
    case 283u: goto L_08A2D244;
    case 284u: goto L_08A2D24C;
    case 285u: goto L_08A2D258;
    case 286u: goto L_08A2D260;
    case 287u: goto L_08A2D274;
    case 288u: goto L_08A2D27C;
    case 289u: goto L_08A2D284;
    case 290u: goto L_08A2D294;
    case 291u: goto L_08A2D2A4;
    case 292u: goto L_08A2D2AC;
    case 293u: goto L_08A2D2C0;
    case 294u: goto L_08A2D2C8;
    case 295u: goto L_08A2D2D4;
    case 296u: goto L_08A2D2E0;
    case 297u: goto L_08A2D32C;
    case 298u: goto L_08A2D33C;
    case 299u: goto L_08A2D34C;
    case 300u: goto L_08A2D358;
    case 301u: goto L_08A2D364;
    case 302u: goto L_08A2D36C;
    case 303u: goto L_08A2D39C;
    case 304u: goto L_08A2D3AC;
    case 305u: goto L_08A2D3B8;
    case 306u: goto L_08A2D3C0;
    case 307u: goto L_08A2D3D4;
    case 308u: goto L_08A2D3E4;
    case 309u: goto L_08A2D3F0;
    case 310u: goto L_08A2D3F8;
    case 311u: goto L_08A2D404;
    case 312u: goto L_08A2D40C;
    case 313u: goto L_08A2D420;
    case 314u: goto L_08A2D428;
    case 315u: goto L_08A2D430;
    case 316u: goto L_08A2D440;
    case 317u: goto L_08A2D450;
    case 318u: goto L_08A2D458;
    case 319u: goto L_08A2D46C;
    case 320u: goto L_08A2D474;
    case 321u: goto L_08A2D480;
    case 322u: goto L_08A2D48C;
    case 323u: goto L_08A2D4D8;
    case 324u: goto L_08A2D4E8;
    case 325u: goto L_08A2D4F8;
    case 326u: goto L_08A2D504;
    case 327u: goto L_08A2D510;
    case 328u: goto L_08A2D518;
    case 329u: goto L_08A2D548;
    case 330u: goto L_08A2D558;
    case 331u: goto L_08A2D564;
    case 332u: goto L_08A2D56C;
    case 333u: goto L_08A2D580;
    case 334u: goto L_08A2D590;
    case 335u: goto L_08A2D59C;
    case 336u: goto L_08A2D5A4;
    case 337u: goto L_08A2D5B0;
    case 338u: goto L_08A2D5B8;
    case 339u: goto L_08A2D5CC;
    case 340u: goto L_08A2D5D4;
    case 341u: goto L_08A2D5DC;
    case 342u: goto L_08A2D5EC;
    case 343u: goto L_08A2D5FC;
    case 344u: goto L_08A2D604;
    case 345u: goto L_08A2D618;
    case 346u: goto L_08A2D620;
    case 347u: goto L_08A2D62C;
    case 348u: goto L_08A2D638;
    case 349u: goto L_08A2D684;
    case 350u: goto L_08A2D694;
    case 351u: goto L_08A2D6A4;
    case 352u: goto L_08A2D6B0;
    case 353u: goto L_08A2D6BC;
    case 354u: goto L_08A2D6C4;
    case 355u: goto L_08A2D6F4;
    case 356u: goto L_08A2D704;
    case 357u: goto L_08A2D710;
    case 358u: goto L_08A2D718;
    case 359u: goto L_08A2D72C;
    case 360u: goto L_08A2D73C;
    case 361u: goto L_08A2D748;
    case 362u: goto L_08A2D750;
    case 363u: goto L_08A2D75C;
    case 364u: goto L_08A2D764;
    case 365u: goto L_08A2D778;
    case 366u: goto L_08A2D780;
    case 367u: goto L_08A2D788;
    case 368u: goto L_08A2D798;
    case 369u: goto L_08A2D7A8;
    case 370u: goto L_08A2D7B0;
    case 371u: goto L_08A2D7C4;
    case 372u: goto L_08A2D7CC;
    case 373u: goto L_08A2D7D4;
    case 374u: goto L_08A2D7DC;
    case 375u: goto L_08A2D7E8;
    case 376u: goto L_08A2D7EC;
    case 377u: goto L_08A2D81C;
    case 378u: goto L_08A2D8B8;
    case 379u: goto L_08A2D8C4;
    case 380u: goto L_08A2D8F0;
    case 381u: goto L_08A2D904;
    case 382u: goto L_08A2D910;
    case 383u: goto L_08A2D920;
    case 384u: goto L_08A2D928;
    case 385u: goto L_08A2D934;
    case 386u: goto L_08A2D944;
    case 387u: goto L_08A2D94C;
    case 388u: goto L_08A2D958;
    case 389u: goto L_08A2D9C4;
    case 390u: goto L_08A2D9E4;
    case 391u: goto L_08A2D9F0;
    case 392u: goto L_08A2D9FC;
    case 393u: goto L_08A2DA04;
    case 394u: goto L_08A2DA10;
    case 395u: goto L_08A2DA20;
    case 396u: goto L_08A2DA30;
    case 397u: goto L_08A2DA38;
    case 398u: goto L_08A2DA48;
    case 399u: goto L_08A2DA58;
    case 400u: goto L_08A2DA84;
    case 401u: goto L_08A2DAC0;
    case 402u: goto L_08A2DACC;
    case 403u: goto L_08A2DAD4;
    case 404u: goto L_08A2DADC;
    case 405u: goto L_08A2DAEC;
    case 406u: goto L_08A2DB08;
    case 407u: goto L_08A2DB10;
    case 408u: goto L_08A2DB1C;
    case 409u: goto L_08A2DB28;
    case 410u: goto L_08A2DB30;
    case 411u: goto L_08A2DB38;
    case 412u: goto L_08A2DB4C;
    case 413u: goto L_08A2DB5C;
    case 414u: goto L_08A2DB68;
    case 415u: goto L_08A2DB70;
    case 416u: goto L_08A2DB78;
    case 417u: goto L_08A2DB88;
    case 418u: goto L_08A2DB90;
    case 419u: goto L_08A2DB98;
    case 420u: goto L_08A2DBA8;
    case 421u: goto L_08A2DBB8;
    case 422u: goto L_08A2DBC0;
    case 423u: goto L_08A2DBCC;
    case 424u: goto L_08A2DBD4;
    case 425u: goto L_08A2DC0C;
    case 426u: goto L_08A2DC18;
    case 427u: goto L_08A2DC28;
    case 428u: goto L_08A2DC30;
    case 429u: goto L_08A2DC34;
    case 430u: goto L_08A2DC54;
    case 431u: goto L_08A2DC98;
    case 432u: goto L_08A2DCA0;
    case 433u: goto L_08A2DCA8;
    case 434u: goto L_08A2DCB0;
    case 435u: goto L_08A2DCBC;
    case 436u: goto L_08A2DCC4;
    case 437u: goto L_08A2DCD0;
    case 438u: goto L_08A2DCD8;
    case 439u: goto L_08A2DCDC;
    case 440u: goto L_08A2DCE8;
    case 441u: goto L_08A2DD14;
    case 442u: goto L_08A2DDA8;
    case 443u: goto L_08A2DDB8;
    case 444u: goto L_08A2DDD0;
    case 445u: goto L_08A2DDE0;
    case 446u: goto L_08A2DDF8;
    case 447u: goto L_08A2DE0C;
    case 448u: goto L_08A2DE34;
    case 449u: goto L_08A2DE40;
    case 450u: goto L_08A2DEC4;
    case 451u: goto L_08A2DED0;
    case 452u: goto L_08A2DED4;
    case 453u: goto L_08A2DF08;
    case 454u: goto L_08A2DF1C;
    case 455u: goto L_08A2DF3C;
    case 456u: goto L_08A2DF48;
    case 457u: goto L_08A2DF50;
    case 458u: goto L_08A2DF58;
    case 459u: goto L_08A2DF60;
    case 460u: goto L_08A2DF7C;
    case 461u: goto L_08A2DF90;
    case 462u: goto L_08A2DFB0;
    case 463u: goto L_08A2DFE0;
    case 464u: goto L_08A2DFF8;
    case 465u: goto L_08A2E004;
    case 466u: goto L_08A2E014;
    case 467u: goto L_08A2E020;
    case 468u: goto L_08A2E174;
    case 469u: goto L_08A2E188;
    case 470u: goto L_08A2E1A4;
    case 471u: goto L_08A2E1D0;
    case 472u: goto L_08A2E1DC;
    case 473u: goto L_08A2E1F0;
    case 474u: goto L_08A2E300;
    case 475u: goto L_08A2E314;
    case 476u: goto L_08A2E32C;
    case 477u: goto L_08A2E378;
    case 478u: goto L_08A2E384;
    case 479u: goto L_08A2E3A8;
    case 480u: goto L_08A2E3B4;
    case 481u: goto L_08A2E3B8;
    case 482u: goto L_08A2E3F4;
    case 483u: goto L_08A2E408;
    case 484u: goto L_08A2E40C;
    case 485u: goto L_08A2E42C;
    case 486u: goto L_08A2E444;
    case 487u: goto L_08A2E448;
    case 488u: goto L_08A2E458;
    case 489u: goto L_08A2E48C;
    case 490u: goto L_08A2E4A0;
    case 491u: goto L_08A2E4A8;
    case 492u: goto L_08A2E4B0;
    case 493u: goto L_08A2E4B8;
    case 494u: goto L_08A2E4C4;
    case 495u: goto L_08A2E4D0;
    case 496u: goto L_08A2E4E4;
    case 497u: goto L_08A2E4E8;
    case 498u: goto L_08A2E4FC;
    case 499u: goto L_08A2E504;
    case 500u: goto L_08A2E510;
    case 501u: goto L_08A2E51C;
    case 502u: goto L_08A2E54C;
    case 503u: goto L_08A2E594;
    case 504u: goto L_08A2E5A0;
    case 505u: goto L_08A2E5D8;
    case 506u: goto L_08A2E5EC;
    case 507u: goto L_08A2E5FC;
    case 508u: goto L_08A2E60C;
    case 509u: goto L_08A2E61C;
    case 510u: goto L_08A2E63C;
    case 511u: goto L_08A2E64C;
    case 512u: goto L_08A2E65C;
    case 513u: goto L_08A2E66C;
    case 514u: goto L_08A2E68C;
    case 515u: goto L_08A2E698;
    case 516u: goto L_08A2E6C8;
    case 517u: goto L_08A2E6D8;
    case 518u: goto L_08A2E6F4;
    case 519u: goto L_08A2E700;
    case 520u: goto L_08A2E710;
    case 521u: goto L_08A2E728;
    case 522u: goto L_08A2E738;
    case 523u: goto L_08A2E754;
    case 524u: goto L_08A2E760;
    case 525u: goto L_08A2E770;
    case 526u: goto L_08A2E778;
    case 527u: goto L_08A2E788;
    case 528u: goto L_08A2E798;
    case 529u: goto L_08A2E7B4;
    case 530u: goto L_08A2E7C4;
    case 531u: goto L_08A2E7D0;
    case 532u: goto L_08A2E7E0;
    case 533u: goto L_08A2E7F4;
    case 534u: goto L_08A2E804;
    case 535u: goto L_08A2E83C;
    case 536u: goto L_08A2E84C;
    case 537u: goto L_08A2E878;
    case 538u: goto L_08A2E880;
    case 539u: goto L_08A2E88C;
    case 540u: goto L_08A2E89C;
    case 541u: goto L_08A2E8A8;
    case 542u: goto L_08A2E8B8;
    case 543u: goto L_08A2E8C0;
    case 544u: goto L_08A2E8D4;
    case 545u: goto L_08A2E8E0;
    case 546u: goto L_08A2E908;
    case 547u: goto L_08A2E910;
    case 548u: goto L_08A2E91C;
    case 549u: goto L_08A2E92C;
    case 550u: goto L_08A2E938;
    case 551u: goto L_08A2E948;
    case 552u: goto L_08A2E950;
    case 553u: goto L_08A2E95C;
    case 554u: goto L_08A2E964;
    case 555u: goto L_08A2E968;
    case 556u: goto L_08A2E978;
    case 557u: goto L_08A2E998;
    case 558u: goto L_08A2EA74;
    case 559u: goto L_08A2EA9C;
    case 560u: goto L_08A2EAA4;
    case 561u: goto L_08A2EAC0;
    case 562u: goto L_08A2EAC8;
    case 563u: goto L_08A2EAD0;
    case 564u: goto L_08A2EADC;
    case 565u: goto L_08A2EAE8;
    case 566u: goto L_08A2EAF0;
    case 567u: goto L_08A2EAF4;
    case 568u: goto L_08A2EB0C;
    case 569u: goto L_08A2EB1C;
    case 570u: goto L_08A2EB34;
    case 571u: goto L_08A2EB4C;
    case 572u: goto L_08A2EB54;
    case 573u: goto L_08A2EB5C;
    case 574u: goto L_08A2EB64;
    case 575u: goto L_08A2EB6C;
    case 576u: goto L_08A2EB74;
    case 577u: goto L_08A2EB7C;
    case 578u: goto L_08A2EB84;
    case 579u: goto L_08A2EB8C;
    case 580u: goto L_08A2EB94;
    case 581u: goto L_08A2EB9C;
    case 582u: goto L_08A2EBA4;
    case 583u: goto L_08A2EBAC;
    case 584u: goto L_08A2EBB4;
    case 585u: goto L_08A2EBB8;
    case 586u: goto L_08A2EBC4;
    case 587u: goto L_08A2EBE0;
    case 588u: goto L_08A2EBF4;
    case 589u: goto L_08A2EBFC;
    case 590u: goto L_08A2EC04;
    case 591u: goto L_08A2EC0C;
    case 592u: goto L_08A2EC1C;
    case 593u: goto L_08A2EC28;
    case 594u: goto L_08A2EC30;
    case 595u: goto L_08A2EC34;
    case 596u: goto L_08A2EC3C;
    case 597u: goto L_08A2EC44;
    case 598u: goto L_08A2EC58;
    case 599u: goto L_08A2EC84;
    case 600u: goto L_08A2EC90;
    case 601u: goto L_08A2EC9C;
    case 602u: goto L_08A2ECA8;
    case 603u: goto L_08A2ECB4;
    case 604u: goto L_08A2ECC0;
    case 605u: goto L_08A2ECCC;
    case 606u: goto L_08A2ECD8;
    case 607u: goto L_08A2ECE4;
    case 608u: goto L_08A2ECF0;
    case 609u: goto L_08A2ECFC;
    case 610u: goto L_08A2ED08;
    case 611u: goto L_08A2ED14;
    case 612u: goto L_08A2ED20;
    case 613u: goto L_08A2ED28;
    case 614u: goto L_08A2ED4C;
    case 615u: goto L_08A2ED54;
    case 616u: goto L_08A2ED5C;
    case 617u: goto L_08A2ED94;
    case 618u: goto L_08A2EDA4;
    case 619u: goto L_08A2EDD0;
    case 620u: goto L_08A2EDDC;
    case 621u: goto L_08A2EDE8;
    case 622u: goto L_08A2EDF4;
    case 623u: goto L_08A2EE00;
    case 624u: goto L_08A2EE0C;
    case 625u: goto L_08A2EE18;
    case 626u: goto L_08A2EE24;
    case 627u: goto L_08A2EE30;
    case 628u: goto L_08A2EE3C;
    case 629u: goto L_08A2EE48;
    case 630u: goto L_08A2EE54;
    case 631u: goto L_08A2EE60;
    case 632u: goto L_08A2EE6C;
    case 633u: goto L_08A2EE74;
    case 634u: goto L_08A2EE98;
    case 635u: goto L_08A2EEA0;
    case 636u: goto L_08A2EEA8;
    case 637u: goto L_08A2EED8;
    case 638u: goto L_08A2EF10;
    case 639u: goto L_08A2EF24;
    case 640u: goto L_08A2EF38;
    case 641u: goto L_08A2EF50;
    case 642u: goto L_08A2EF5C;
    case 643u: goto L_08A2EF68;
    case 644u: goto L_08A2EF84;
    case 645u: goto L_08A2EF8C;
    case 646u: goto L_08A2EF94;
    case 647u: goto L_08A2EFA8;
    case 648u: goto L_08A2EFB8;
    case 649u: goto L_08A2EFC8;
    case 650u: goto L_08A2EFD4;
    case 651u: goto L_08A2EFDC;
    case 652u: goto L_08A2EFE0;
    case 653u: goto L_08A2EFE4;
    case 654u: goto L_08A2EFFC;
    case 655u: goto L_08A2F004;
    case 656u: goto L_08A2F00C;
    case 657u: goto L_08A2F01C;
    case 658u: goto L_08A2F028;
    case 659u: goto L_08A2F030;
    case 660u: goto L_08A2F034;
    case 661u: goto L_08A2F038;
    case 662u: goto L_08A2F050;
    case 663u: goto L_08A2F05C;
    case 664u: goto L_08A2F064;
    case 665u: goto L_08A2F080;
    case 666u: goto L_08A2F0A0;
    case 667u: goto L_08A2F0B0;
    case 668u: goto L_08A2F0B8;
    case 669u: goto L_08A2F0C0;
    case 670u: goto L_08A2F0D0;
    case 671u: goto L_08A2F0DC;
    case 672u: goto L_08A2F0E4;
    case 673u: goto L_08A2F0E8;
    case 674u: goto L_08A2F0EC;
    case 675u: goto L_08A2F104;
    case 676u: goto L_08A2F10C;
    case 677u: goto L_08A2F118;
    case 678u: goto L_08A2F128;
    case 679u: goto L_08A2F134;
    case 680u: goto L_08A2F13C;
    case 681u: goto L_08A2F140;
    case 682u: goto L_08A2F144;
    case 683u: goto L_08A2F15C;
    case 684u: goto L_08A2F174;
    case 685u: goto L_08A2F188;
    case 686u: goto L_08A2F190;
    case 687u: goto L_08A2F1A4;
    case 688u: goto L_08A2F1BC;
    case 689u: goto L_08A2F1D4;
    case 690u: goto L_08A2F1E8;
    case 691u: goto L_08A2F1F0;
    case 692u: goto L_08A2F200;
    case 693u: goto L_08A2F210;
    case 694u: goto L_08A2F218;
    case 695u: goto L_08A2F22C;
    case 696u: goto L_08A2F250;
    case 697u: goto L_08A2F260;
    case 698u: goto L_08A2F268;
    case 699u: goto L_08A2F278;
    case 700u: goto L_08A2F288;
    case 701u: goto L_08A2F298;
    case 702u: goto L_08A2F2A0;
    case 703u: goto L_08A2F2A8;
    case 704u: goto L_08A2F2B0;
    case 705u: goto L_08A2F2BC;
    case 706u: goto L_08A2F2C4;
    case 707u: goto L_08A2F2CC;
    case 708u: goto L_08A2F2D4;
    case 709u: goto L_08A2F2E8;
    case 710u: goto L_08A2F2F0;
    case 711u: goto L_08A2F30C;
    case 712u: goto L_08A2F320;
    case 713u: goto L_08A2F328;
    case 714u: goto L_08A2F344;
    case 715u: goto L_08A2F354;
    case 716u: goto L_08A2F36C;
    case 717u: goto L_08A2F398;
    case 718u: goto L_08A2F40C;
    case 719u: goto L_08A2F428;
    case 720u: goto L_08A2F43C;
    case 721u: goto L_08A2F450;
    case 722u: goto L_08A2F464;
    case 723u: goto L_08A2F480;
    case 724u: goto L_08A2F49C;
    case 725u: goto L_08A2F4B0;
    case 726u: goto L_08A2F4C4;
    case 727u: goto L_08A2F4D8;
    case 728u: goto L_08A2F504;
    case 729u: goto L_08A2F520;
    case 730u: goto L_08A2F534;
    case 731u: goto L_08A2F548;
    case 732u: goto L_08A2F55C;
    case 733u: goto L_08A2F578;
    case 734u: goto L_08A2F594;
    case 735u: goto L_08A2F5A8;
    case 736u: goto L_08A2F5BC;
    case 737u: goto L_08A2F5D0;
    case 738u: goto L_08A2F620;
    case 739u: goto L_08A2F6A8;
    case 740u: goto L_08A2F6B0;
    case 741u: goto L_08A2F6B8;
    case 742u: goto L_08A2F728;
    case 743u: goto L_08A2F760;
    case 744u: goto L_08A2F788;
    case 745u: goto L_08A2F7AC;
    case 746u: goto L_08A2F818;
    case 747u: goto L_08A2F82C;
    case 748u: goto L_08A2F840;
    case 749u: goto L_08A2F848;
    case 750u: goto L_08A2F850;
    case 751u: goto L_08A2F85C;
    case 752u: goto L_08A2F878;
    case 753u: goto L_08A2F880;
    case 754u: goto L_08A2F890;
    case 755u: goto L_08A2F898;
    case 756u: goto L_08A2F8AC;
    case 757u: goto L_08A2F8BC;
    case 758u: goto L_08A2F8C4;
    case 759u: goto L_08A2F8CC;
    case 760u: goto L_08A2F8D4;
    case 761u: goto L_08A2F8DC;
    case 762u: goto L_08A2F8E8;
    case 763u: goto L_08A2F900;
    case 764u: goto L_08A2F908;
    case 765u: goto L_08A2F910;
    case 766u: goto L_08A2F918;
    case 767u: goto L_08A2F920;
    case 768u: goto L_08A2F930;
    case 769u: goto L_08A2F948;
    case 770u: goto L_08A2F954;
    case 771u: goto L_08A2F960;
    case 772u: goto L_08A2F96C;
    case 773u: goto L_08A2F978;
    case 774u: goto L_08A2F984;
    case 775u: goto L_08A2F990;
    case 776u: goto L_08A2F99C;
    case 777u: goto L_08A2F9A8;
    case 778u: goto L_08A2F9B4;
    case 779u: goto L_08A2F9C0;
    case 780u: goto L_08A2F9CC;
    case 781u: goto L_08A2F9D8;
    case 782u: goto L_08A2F9E4;
    case 783u: goto L_08A2F9EC;
    case 784u: goto L_08A2F9F4;
    case 785u: goto L_08A2FA00;
    case 786u: goto L_08A2FA0C;
    case 787u: goto L_08A2FA18;
    case 788u: goto L_08A2FA24;
    case 789u: goto L_08A2FA30;
    case 790u: goto L_08A2FA38;
    case 791u: goto L_08A2FA40;
    case 792u: goto L_08A2FA48;
    case 793u: goto L_08A2FA54;
    case 794u: goto L_08A2FA6C;
    case 795u: goto L_08A2FA74;
    case 796u: goto L_08A2FA7C;
    case 797u: goto L_08A2FA84;
    case 798u: goto L_08A2FA9C;
    case 799u: goto L_08A2FAA8;
    case 800u: goto L_08A2FAB0;
    case 801u: goto L_08A2FAB8;
    case 802u: goto L_08A2FABC;
    case 803u: goto L_08A2FACC;
    case 804u: goto L_08A2FAD8;
    case 805u: goto L_08A2FAE0;
    case 806u: goto L_08A2FAE8;
    case 807u: goto L_08A2FB04;
    case 808u: goto L_08A2FB14;
    case 809u: goto L_08A2FB20;
    case 810u: goto L_08A2FB2C;
    case 811u: goto L_08A2FB38;
    case 812u: goto L_08A2FB44;
    case 813u: goto L_08A2FB50;
    case 814u: goto L_08A2FB5C;
    case 815u: goto L_08A2FB68;
    case 816u: goto L_08A2FB74;
    case 817u: goto L_08A2FB7C;
    case 818u: goto L_08A2FB80;
    case 819u: goto L_08A2FB88;
    case 820u: goto L_08A2FB9C;
    case 821u: goto L_08A2FBAC;
    case 822u: goto L_08A2FBB4;
    case 823u: goto L_08A2FBBC;
    case 824u: goto L_08A2FBCC;
    case 825u: goto L_08A2FBD4;
    case 826u: goto L_08A2FBDC;
    case 827u: goto L_08A2FBE4;
    case 828u: goto L_08A2FBEC;
    case 829u: goto L_08A2FBF4;
    case 830u: goto L_08A2FC00;
    case 831u: goto L_08A2FC24;
    case 832u: goto L_08A2FC30;
    case 833u: goto L_08A2FC40;
    case 834u: goto L_08A2FC48;
    case 835u: goto L_08A2FC50;
    case 836u: goto L_08A2FC58;
    case 837u: goto L_08A2FC60;
    case 838u: goto L_08A2FC68;
    case 839u: goto L_08A2FC70;
    case 840u: goto L_08A2FC88;
    case 841u: goto L_08A2FCA0;
    case 842u: goto L_08A2FCA8;
    case 843u: goto L_08A2FCB8;
    case 844u: goto L_08A2FCC0;
    case 845u: goto L_08A2FCDC;
    case 846u: goto L_08A2FD00;
    case 847u: goto L_08A2FD14;
    case 848u: goto L_08A2FD3C;
    case 849u: goto L_08A2FD74;
    case 850u: goto L_08A2FD8C;
    case 851u: goto L_08A2FD9C;
    case 852u: goto L_08A2FDA4;
    case 853u: goto L_08A2FDA8;
    case 854u: goto L_08A2FDC0;
    case 855u: goto L_08A2FDDC;
    case 856u: goto L_08A2FE04;
    case 857u: goto L_08A2FE1C;
    case 858u: goto L_08A2FE28;
    case 859u: goto L_08A2FE60;
    case 860u: goto L_08A2FE78;
    case 861u: goto L_08A2FE84;
    case 862u: goto L_08A2FEBC;
    case 863u: goto L_08A2FEE8;
    case 864u: goto L_08A2FEF4;
    case 865u: goto L_08A2FF60;
    case 866u: goto L_08A2FF6C;
    case 867u: goto L_08A2FF8C;
    case 868u: goto L_08A2FFB0;
    case 869u: goto L_08A2FFB8;
    case 870u: goto L_08A2FFC0;
    case 871u: goto L_08A2FFD0;
    case 872u: goto L_08A2FFDC;
    case 873u: goto L_08A2FFE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A2C000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[8] = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(144));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(24));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[10]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2C170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2C3BC;
      }
      goto L_08A2C198;
    }
L_08A2C198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A2C3AC;
      }
      goto L_08A2C1A4;
    }
L_08A2C1A4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1352), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1356), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 256u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2C2E8;
      }
      goto L_08A2C1D0;
    }
L_08A2C1D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2C214;
      }
      goto L_08A2C1D8;
    }
L_08A2C1D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2C230;
      }
      goto L_08A2C1E0;
    }
L_08A2C1E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C26C;
      }
      goto L_08A2C1E8;
    }
L_08A2C1E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2C298;
      }
      goto L_08A2C1F0;
    }
L_08A2C1F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2C2C4;
      }
      goto L_08A2C1F8;
    }
L_08A2C1F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C20C;
      }
      goto L_08A2C208;
    }
L_08A2C208:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C20C;
L_08A2C20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C2E8;
      }
      goto L_08A2C214;
    }
L_08A2C214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C228;
      }
      goto L_08A2C224;
    }
L_08A2C224:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C228;
L_08A2C228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C2E8;
      }
      goto L_08A2C230;
    }
L_08A2C230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C260;
      }
      goto L_08A2C240;
    }
L_08A2C240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 52u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C260;
      }
      goto L_08A2C250;
    }
L_08A2C250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C264;
      }
      goto L_08A2C260;
    }
L_08A2C260:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C264;
L_08A2C264:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C2E8;
      }
      goto L_08A2C26C;
    }
L_08A2C26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C28C;
      }
      goto L_08A2C27C;
    }
L_08A2C27C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C290;
      }
      goto L_08A2C28C;
    }
L_08A2C28C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C290;
L_08A2C290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C2E8;
      }
      goto L_08A2C298;
    }
L_08A2C298:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C2B8;
      }
      goto L_08A2C2A8;
    }
L_08A2C2A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 48u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C2BC;
      }
      goto L_08A2C2B8;
    }
L_08A2C2B8:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C2BC;
L_08A2C2BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C2E8;
      }
      goto L_08A2C2C4;
    }
L_08A2C2C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C2E4;
      }
      goto L_08A2C2D4;
    }
L_08A2C2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C2E8;
      }
      goto L_08A2C2E4;
    }
L_08A2C2E4:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2C2E8;
L_08A2C2E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C328;
      }
      goto L_08A2C2F0;
    }
L_08A2C2F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2C2FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08A2C2FCu) goto L_08A2C2FC;
    return;
L_08A2C2FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A2C310u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C310u) goto L_08A2C310;
    return;
L_08A2C310:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C320u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2C320u) goto L_08A2C320;
    return;
L_08A2C320:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C368;
      }
      goto L_08A2C328;
    }
L_08A2C328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2C344;
      }
      goto L_08A2C338;
    }
L_08A2C338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C368;
      }
      goto L_08A2C344;
    }
L_08A2C344:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A2C358u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C358u) goto L_08A2C358;
    return;
L_08A2C358:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C368u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2C368u) goto L_08A2C368;
    return;
L_08A2C368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2C398;
      }
      goto L_08A2C378;
    }
L_08A2C378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2C398;
      }
      goto L_08A2C388;
    }
L_08A2C388:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2C398u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2C398u) goto L_08A2C398;
    return;
L_08A2C398:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2C3D8;
      }
      goto L_08A2C3AC;
    }
L_08A2C3AC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2C198;
      }
      goto L_08A2C3BC;
    }
L_08A2C3BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C3D8u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C3D8u) goto L_08A2C3D8;
    return;
L_08A2C3D8:
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
L_08A2C3F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[22]) >> 2u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2C474;
      }
      goto L_08A2C450;
    }
L_08A2C450:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A2C464;
      }
      goto L_08A2C45C;
    }
L_08A2C45C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2C474;
      }
      goto L_08A2C464;
    }
L_08A2C464:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C450;
      }
      goto L_08A2C474;
    }
L_08A2C474:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[30]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2C494;
      }
      goto L_08A2C47C;
    }
L_08A2C47C:
    ctx.gpr[17] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2C49C;
      }
      goto L_08A2C48C;
    }
L_08A2C48C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1352), 0u);
      if (branch_taken) {
          goto L_08A2C54C;
      }
      goto L_08A2C494;
    }
L_08A2C494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2C858;
      }
      goto L_08A2C49C;
    }
L_08A2C49C:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[16] = (ctx.gpr[17] << 2u);
    goto L_08A2C4A8;
L_08A2C4A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[23] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C4E0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C4E0u) goto L_08A2C4E0;
    return;
L_08A2C4E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C500u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C500u) goto L_08A2C500;
    return;
L_08A2C500:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2C514u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 324u, 0x08A29CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C514u) goto L_08A2C514;
    return;
L_08A2C514:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2C530u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 144u, 0x089A4A88u>(ctx, &aot_mem) && ctx.pc == 0x08A2C530u) goto L_08A2C530;
    return;
L_08A2C530:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[22]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A2C4A8;
      }
      goto L_08A2C548;
    }
L_08A2C548:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1352), 0u);
    goto L_08A2C54C;
L_08A2C54C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(1356), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 256u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2C654;
      }
      goto L_08A2C574;
    }
L_08A2C574:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2C5BC;
      }
      goto L_08A2C584;
    }
L_08A2C584:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2C5D4;
      }
      goto L_08A2C58C;
    }
L_08A2C58C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C5FC;
      }
      goto L_08A2C594;
    }
L_08A2C594:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2C61C;
      }
      goto L_08A2C59C;
    }
L_08A2C59C:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2C63C;
      }
      goto L_08A2C5A4;
    }
L_08A2C5A4:
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C5B4;
      }
      goto L_08A2C5B0;
    }
L_08A2C5B0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C5B4;
L_08A2C5B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C654;
      }
      goto L_08A2C5BC;
    }
L_08A2C5BC:
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C5CC;
      }
      goto L_08A2C5C8;
    }
L_08A2C5C8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C5CC;
L_08A2C5CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C654;
      }
      goto L_08A2C5D4;
    }
L_08A2C5D4:
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 52u);
      if (branch_taken) {
          goto L_08A2C5F0;
      }
      goto L_08A2C5E0;
    }
L_08A2C5E0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2C5F0;
      }
      goto L_08A2C5E8;
    }
L_08A2C5E8:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C5F4;
      }
      goto L_08A2C5F0;
    }
L_08A2C5F0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C5F4;
L_08A2C5F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C654;
      }
      goto L_08A2C5FC;
    }
L_08A2C5FC:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2C610;
      }
      goto L_08A2C608;
    }
L_08A2C608:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C614;
      }
      goto L_08A2C610;
    }
L_08A2C610:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C614;
L_08A2C614:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C654;
      }
      goto L_08A2C61C;
    }
L_08A2C61C:
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08A2C630;
      }
      goto L_08A2C628;
    }
L_08A2C628:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C634;
      }
      goto L_08A2C630;
    }
L_08A2C630:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C634;
L_08A2C634:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C654;
      }
      goto L_08A2C63C;
    }
L_08A2C63C:
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 54u);
      if (branch_taken) {
          goto L_08A2C650;
      }
      goto L_08A2C648;
    }
L_08A2C648:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C654;
      }
      goto L_08A2C650;
    }
L_08A2C650:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C654;
L_08A2C654:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C710;
      }
      goto L_08A2C65C;
    }
L_08A2C65C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A2C668u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08A2C668u) goto L_08A2C668;
    return;
L_08A2C668:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[30] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A2C698;
      }
      goto L_08A2C674;
    }
L_08A2C674:
    ctx.gpr[31] = (0x08A2C67Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C67Cu) goto L_08A2C67C;
    return;
L_08A2C67C:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C68Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2C68Cu) goto L_08A2C68C;
    return;
L_08A2C68C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2C6F4;
      }
      goto L_08A2C698;
    }
L_08A2C698:
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A2C6CC;
      }
      goto L_08A2C6A8;
    }
L_08A2C6A8:
    ctx.gpr[31] = (0x08A2C6B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C6B0u) goto L_08A2C6B0;
    return;
L_08A2C6B0:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C6C0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2C6C0u) goto L_08A2C6C0;
    return;
L_08A2C6C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2C6F4;
      }
      goto L_08A2C6CC;
    }
L_08A2C6CC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A2C6DCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C6DCu) goto L_08A2C6DC;
    return;
L_08A2C6DC:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C6ECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2C6ECu) goto L_08A2C6EC;
    return;
L_08A2C6EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08A2C6F4;
L_08A2C6F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2C708u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C708u) goto L_08A2C708;
    return;
L_08A2C708:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C74C;
      }
      goto L_08A2C710;
    }
L_08A2C710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2C728;
      }
      goto L_08A2C720;
    }
L_08A2C720:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2C74C;
      }
      goto L_08A2C728;
    }
L_08A2C728:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A2C73Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2C73Cu) goto L_08A2C73C;
    return;
L_08A2C73C:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2C74Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2C74Cu) goto L_08A2C74C;
    return;
L_08A2C74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[30] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[5] == ctx.gpr[30]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
        goto L_08A2C780;
    }
    goto L_08A2C768;
L_08A2C768:
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2C77C;
      }
      goto L_08A2C770;
    }
L_08A2C770:
    ctx.gpr[31] = (0x08A2C778u);
    ctx.gpr[6] = (ctx.gpr[30] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2C778u) goto L_08A2C778;
    return;
L_08A2C778:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_08A2C77C;
L_08A2C77C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    goto L_08A2C780;
L_08A2C780:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A2C854;
      }
      goto L_08A2C7AC;
    }
L_08A2C7AC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[18] = (0u | 0u);
    goto L_08A2C7BC;
L_08A2C7BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A2C7D0u);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 308u, 0x08A29B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2C7D0u) goto L_08A2C7D0;
    return;
L_08A2C7D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C7F4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C7F4u) goto L_08A2C7F4;
    return;
L_08A2C7F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2C814u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2C814u) goto L_08A2C814;
    return;
L_08A2C814:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2C828u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 324u, 0x08A29CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2C828u) goto L_08A2C828;
    return;
L_08A2C828:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2C844u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 144u, 0x089A4A88u>(ctx, &aot_mem) && ctx.pc == 0x08A2C844u) goto L_08A2C844;
    return;
L_08A2C844:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C7BC;
      }
      goto L_08A2C854;
    }
L_08A2C854:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2C858;
L_08A2C858:
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
L_08A2C888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 2u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2C90C;
      }
      goto L_08A2C8E8;
    }
L_08A2C8E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A2C8FC;
      }
      goto L_08A2C8F4;
    }
L_08A2C8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2C90C;
      }
      goto L_08A2C8FC;
    }
L_08A2C8FC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C8E8;
      }
      goto L_08A2C90C;
    }
L_08A2C90C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2C978;
      }
      goto L_08A2C914;
    }
L_08A2C914:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1352), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1356), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 256u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2CA30;
      }
      goto L_08A2C940;
    }
L_08A2C940:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A2C998;
      }
      goto L_08A2C950;
    }
L_08A2C950:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2C980;
      }
      goto L_08A2C958;
    }
L_08A2C958:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2C9B0;
      }
      goto L_08A2C960;
    }
L_08A2C960:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2C9D8;
      }
      goto L_08A2C968;
    }
L_08A2C968:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2C9F8;
      }
      goto L_08A2C970;
    }
L_08A2C970:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2CA18;
      }
      goto L_08A2C978;
    }
L_08A2C978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2CC34;
      }
      goto L_08A2C980;
    }
L_08A2C980:
    ctx.gpr[6] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C990;
      }
      goto L_08A2C98C;
    }
L_08A2C98C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C990;
L_08A2C990:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA30;
      }
      goto L_08A2C998;
    }
L_08A2C998:
    ctx.gpr[6] = (0u | 40u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C9A8;
      }
      goto L_08A2C9A4;
    }
L_08A2C9A4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C9A8;
L_08A2C9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA30;
      }
      goto L_08A2C9B0;
    }
L_08A2C9B0:
    ctx.gpr[6] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 52u);
      if (branch_taken) {
          goto L_08A2C9CC;
      }
      goto L_08A2C9BC;
    }
L_08A2C9BC:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2C9CC;
      }
      goto L_08A2C9C4;
    }
L_08A2C9C4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C9D0;
      }
      goto L_08A2C9CC;
    }
L_08A2C9CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C9D0;
L_08A2C9D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA30;
      }
      goto L_08A2C9D8;
    }
L_08A2C9D8:
    ctx.gpr[6] = (0u | 44u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2C9EC;
      }
      goto L_08A2C9E4;
    }
L_08A2C9E4:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2C9F0;
      }
      goto L_08A2C9EC;
    }
L_08A2C9EC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2C9F0;
L_08A2C9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA30;
      }
      goto L_08A2C9F8;
    }
L_08A2C9F8:
    ctx.gpr[6] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 48u);
      if (branch_taken) {
          goto L_08A2CA0C;
      }
      goto L_08A2CA04;
    }
L_08A2CA04:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2CA10;
      }
      goto L_08A2CA0C;
    }
L_08A2CA0C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2CA10;
L_08A2CA10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CA30;
      }
      goto L_08A2CA18;
    }
L_08A2CA18:
    ctx.gpr[6] = (0u | 53u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 54u);
      if (branch_taken) {
          goto L_08A2CA2C;
      }
      goto L_08A2CA24;
    }
L_08A2CA24:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2CA30;
      }
      goto L_08A2CA2C;
    }
L_08A2CA2C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2CA30;
L_08A2CA30:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CAEC;
      }
      goto L_08A2CA38;
    }
L_08A2CA38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2CA44u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA44u) goto L_08A2CA44;
    return;
L_08A2CA44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A2CA74;
      }
      goto L_08A2CA50;
    }
L_08A2CA50:
    ctx.gpr[31] = (0x08A2CA58u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA58u) goto L_08A2CA58;
    return;
L_08A2CA58:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2CA68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA68u) goto L_08A2CA68;
    return;
L_08A2CA68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2CAD0;
      }
      goto L_08A2CA74;
    }
L_08A2CA74:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08A2CAA8;
      }
      goto L_08A2CA84;
    }
L_08A2CA84:
    ctx.gpr[31] = (0x08A2CA8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA8Cu) goto L_08A2CA8C;
    return;
L_08A2CA8C:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2CA9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2CA9Cu) goto L_08A2CA9C;
    return;
L_08A2CA9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_08A2CAD0;
      }
      goto L_08A2CAA8;
    }
L_08A2CAA8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A2CAB8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CAB8u) goto L_08A2CAB8;
    return;
L_08A2CAB8:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2CAC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2CAC8u) goto L_08A2CAC8;
    return;
L_08A2CAC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    goto L_08A2CAD0;
L_08A2CAD0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2CAE4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2CAE4u) goto L_08A2CAE4;
    return;
L_08A2CAE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CB28;
      }
      goto L_08A2CAEC;
    }
L_08A2CAEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2CB04;
      }
      goto L_08A2CAFC;
    }
L_08A2CAFC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CB28;
      }
      goto L_08A2CB04;
    }
L_08A2CB04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A2CB18u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 250u, 0x08A1D3E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CB18u) goto L_08A2CB18;
    return;
L_08A2CB18:
    ctx.gpr[5] = (ctx.gpr[2] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A2CB28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x08A2CB28u) goto L_08A2CB28;
    return;
L_08A2CB28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    if (ctx.gpr[5] == ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
        goto L_08A2CB5C;
    }
    goto L_08A2CB44;
L_08A2CB44:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A2CB58;
      }
      goto L_08A2CB4C;
    }
L_08A2CB4C:
    ctx.gpr[31] = (0x08A2CB54u);
    ctx.gpr[6] = (ctx.gpr[18] - ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2CB54u) goto L_08A2CB54;
    return;
L_08A2CB54:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_08A2CB58;
L_08A2CB58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_08A2CB5C;
L_08A2CB5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A2CC30;
      }
      goto L_08A2CB88;
    }
L_08A2CB88:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[19] = (0u | 0u);
    goto L_08A2CB98;
L_08A2CB98:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    ctx.gpr[31] = (0x08A2CBACu);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 308u, 0x08A29B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2CBACu) goto L_08A2CBAC;
    return;
L_08A2CBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2CBD0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2CBD0u) goto L_08A2CBD0;
    return;
L_08A2CBD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2CBF0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2CBF0u) goto L_08A2CBF0;
    return;
L_08A2CBF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2CC04u);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 324u, 0x08A29CF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CC04u) goto L_08A2CC04;
    return;
L_08A2CC04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A2CC20u);
    ctx.gpr[7] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 144u, 0x089A4A88u>(ctx, &aot_mem) && ctx.pc == 0x08A2CC20u) goto L_08A2CC20;
    return;
L_08A2CC20:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CB98;
      }
      goto L_08A2CC30;
    }
L_08A2CC30:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A2CC34;
L_08A2CC34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2CC64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] - ctx.gpr[9]);
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 2u));
    ctx.gpr[9] = (ctx.gpr[9] >> 30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[8] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2CD50;
      }
      goto L_08A2CCCC;
    }
L_08A2CCCC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (0u | 0u);
    goto L_08A2CCD4;
L_08A2CCD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CCF0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 678u, 0x08A2B1E0u>(ctx, &aot_mem) && ctx.pc == 0x08A2CCF0u) goto L_08A2CCF0;
    return;
L_08A2CCF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A2CD40;
      }
      goto L_08A2CCFC;
    }
L_08A2CCFC:
    ctx.gpr[31] = (0x08A2CD04u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x089274C8u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD04u) goto L_08A2CD04;
    return;
L_08A2CD04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CD40;
      }
      goto L_08A2CD0C;
    }
L_08A2CD0C:
    ctx.gpr[31] = (0x08A2CD14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 308u, 0x08A29B7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2CD14u) goto L_08A2CD14;
    return;
L_08A2CD14:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CD28u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B2B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD28u) goto L_08A2CD28;
    return;
L_08A2CD28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CD38;
      }
      goto L_08A2CD30;
    }
L_08A2CD30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A2CD50;
      }
      goto L_08A2CD38;
    }
L_08A2CD38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D7EC;
      }
      goto L_08A2CD40;
    }
L_08A2CD40:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CCD4;
      }
      goto L_08A2CD50;
    }
L_08A2CD50:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7D4;
      }
      goto L_08A2CD58;
    }
L_08A2CD58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CD6Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 682u, 0x08A2B2B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD6Cu) goto L_08A2CD6C;
    return;
L_08A2CD6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7D4;
      }
      goto L_08A2CD74;
    }
L_08A2CD74:
    ctx.gpr[16] = (2275u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2CD88u);
    ctx.gpr[5] = (0u | 19u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2CD88u) goto L_08A2CD88;
    return;
L_08A2CD88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7CC;
      }
      goto L_08A2CD98;
    }
L_08A2CD98:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A2CF70;
      }
      goto L_08A2CDA4;
    }
L_08A2CDA4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A2D11C;
      }
      goto L_08A2CDAC;
    }
L_08A2CDAC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D2C8;
      }
      goto L_08A2CDB4;
    }
L_08A2CDB4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A2D474;
      }
      goto L_08A2CDBC;
    }
L_08A2CDBC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A2D620;
      }
      goto L_08A2CDC4;
    }
L_08A2CDC4:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2CDD0u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A2CDD0u) goto L_08A2CDD0;
    return;
L_08A2CDD0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2CE38;
      }
      goto L_08A2CDDC;
    }
L_08A2CDDC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11524)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11520)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11516)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11512)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11508)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11504)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11500)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CE28u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11496)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29A00u>(ctx, &aot_mem) && ctx.pc == 0x08A2CE28u) goto L_08A2CE28;
    return;
L_08A2CE28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15676));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2CE38;
L_08A2CE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2CE68;
      }
      goto L_08A2CE48;
    }
L_08A2CE48:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CE60;
      }
      goto L_08A2CE54;
    }
L_08A2CE54:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2CE60;
L_08A2CE60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2CF68;
      }
      goto L_08A2CE68;
    }
L_08A2CE68:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2CEA8;
      }
      goto L_08A2CE98;
    }
L_08A2CE98:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2CEB4;
      }
      goto L_08A2CEA8;
    }
L_08A2CEA8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2CEB4;
L_08A2CEB4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2CEF4;
      }
      goto L_08A2CEBC;
    }
L_08A2CEBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2CED0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A2CED0u) goto L_08A2CED0;
    return;
L_08A2CED0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_08A2CEF4;
      }
      goto L_08A2CEE0;
    }
L_08A2CEE0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2CEECu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2CEECu) goto L_08A2CEEC;
    return;
L_08A2CEEC:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    goto L_08A2CEF4;
L_08A2CEF4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2CF08;
      }
      goto L_08A2CF00;
    }
L_08A2CF00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A2CF24;
      }
      goto L_08A2CF08;
    }
L_08A2CF08:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2CF1Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF1Cu) goto L_08A2CF1C;
    return;
L_08A2CF1C:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08A2CF24;
L_08A2CF24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2CF3C;
      }
      goto L_08A2CF2C;
    }
L_08A2CF2C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2CF2C;
      }
      goto L_08A2CF3C;
    }
L_08A2CF3C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2CF54;
      }
      goto L_08A2CF4C;
    }
L_08A2CF4C:
    ctx.gpr[31] = (0x08A2CF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF54u) goto L_08A2CF54;
    return;
L_08A2CF54:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2CF68;
L_08A2CF68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7CC;
      }
      goto L_08A2CF70;
    }
L_08A2CF70:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2CF7Cu);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A2CF7Cu) goto L_08A2CF7C;
    return;
L_08A2CF7C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2CFE4;
      }
      goto L_08A2CF88;
    }
L_08A2CF88:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11492)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11488)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11484)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11480)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11476)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11472)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2CFD4u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11464)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29A00u>(ctx, &aot_mem) && ctx.pc == 0x08A2CFD4u) goto L_08A2CFD4;
    return;
L_08A2CFD4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15604));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2CFE4;
L_08A2CFE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2D014;
      }
      goto L_08A2CFF4;
    }
L_08A2CFF4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D00C;
      }
      goto L_08A2D000;
    }
L_08A2D000:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2D00C;
L_08A2D00C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D114;
      }
      goto L_08A2D014;
    }
L_08A2D014:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2D054;
      }
      goto L_08A2D044;
    }
L_08A2D044:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2D060;
      }
      goto L_08A2D054;
    }
L_08A2D054:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2D060;
L_08A2D060:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D0A0;
      }
      goto L_08A2D068;
    }
L_08A2D068:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2D07Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A2D07Cu) goto L_08A2D07C;
    return;
L_08A2D07C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
      if (branch_taken) {
          goto L_08A2D0A0;
      }
      goto L_08A2D08C;
    }
L_08A2D08C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2D098u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D098u) goto L_08A2D098;
    return;
L_08A2D098:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    goto L_08A2D0A0;
L_08A2D0A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D0B4;
      }
      goto L_08A2D0AC;
    }
L_08A2D0AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08A2D0D0;
      }
      goto L_08A2D0B4;
    }
L_08A2D0B4:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D0C8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2D0C8u) goto L_08A2D0C8;
    return;
L_08A2D0C8:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08A2D0D0;
L_08A2D0D0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D0E8;
      }
      goto L_08A2D0D8;
    }
L_08A2D0D8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D0D8;
      }
      goto L_08A2D0E8;
    }
L_08A2D0E8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D100;
      }
      goto L_08A2D0F8;
    }
L_08A2D0F8:
    ctx.gpr[31] = (0x08A2D100u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D100u) goto L_08A2D100;
    return;
L_08A2D100:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D114;
L_08A2D114:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7CC;
      }
      goto L_08A2D11C;
    }
L_08A2D11C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2D128u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A2D128u) goto L_08A2D128;
    return;
L_08A2D128:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2D190;
      }
      goto L_08A2D134;
    }
L_08A2D134:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11460)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11456)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11452)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11448)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11444)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11440)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11436)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2D180u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11432)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29A00u>(ctx, &aot_mem) && ctx.pc == 0x08A2D180u) goto L_08A2D180;
    return;
L_08A2D180:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15532));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2D190;
L_08A2D190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2D1C0;
      }
      goto L_08A2D1A0;
    }
L_08A2D1A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D1B8;
      }
      goto L_08A2D1AC;
    }
L_08A2D1AC:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2D1B8;
L_08A2D1B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D2C0;
      }
      goto L_08A2D1C0;
    }
L_08A2D1C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2D200;
      }
      goto L_08A2D1F0;
    }
L_08A2D1F0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(108));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2D20C;
      }
      goto L_08A2D200;
    }
L_08A2D200:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2D20C;
L_08A2D20C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D24C;
      }
      goto L_08A2D214;
    }
L_08A2D214:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2D228u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A2D228u) goto L_08A2D228;
    return;
L_08A2D228:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_08A2D24C;
      }
      goto L_08A2D238;
    }
L_08A2D238:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2D244u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D244u) goto L_08A2D244;
    return;
L_08A2D244:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    goto L_08A2D24C;
L_08A2D24C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D260;
      }
      goto L_08A2D258;
    }
L_08A2D258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_08A2D27C;
      }
      goto L_08A2D260;
    }
L_08A2D260:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D274u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2D274u) goto L_08A2D274;
    return;
L_08A2D274:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_08A2D27C;
L_08A2D27C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D294;
      }
      goto L_08A2D284;
    }
L_08A2D284:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D284;
      }
      goto L_08A2D294;
    }
L_08A2D294:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D2AC;
      }
      goto L_08A2D2A4;
    }
L_08A2D2A4:
    ctx.gpr[31] = (0x08A2D2ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D2ACu) goto L_08A2D2AC;
    return;
L_08A2D2AC:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D2C0;
L_08A2D2C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7CC;
      }
      goto L_08A2D2C8;
    }
L_08A2D2C8:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2D2D4u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A2D2D4u) goto L_08A2D2D4;
    return;
L_08A2D2D4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2D33C;
      }
      goto L_08A2D2E0;
    }
L_08A2D2E0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11428)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11424)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11420)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11416)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11412)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11408)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11404)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2D32Cu);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11400)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29A00u>(ctx, &aot_mem) && ctx.pc == 0x08A2D32Cu) goto L_08A2D32C;
    return;
L_08A2D32C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15460));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2D33C;
L_08A2D33C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2D36C;
      }
      goto L_08A2D34C;
    }
L_08A2D34C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D364;
      }
      goto L_08A2D358;
    }
L_08A2D358:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2D364;
L_08A2D364:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D46C;
      }
      goto L_08A2D36C;
    }
L_08A2D36C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2D3AC;
      }
      goto L_08A2D39C;
    }
L_08A2D39C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2D3B8;
      }
      goto L_08A2D3AC;
    }
L_08A2D3AC:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(124));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2D3B8;
L_08A2D3B8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D3F8;
      }
      goto L_08A2D3C0;
    }
L_08A2D3C0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2D3D4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A2D3D4u) goto L_08A2D3D4;
    return;
L_08A2D3D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
      if (branch_taken) {
          goto L_08A2D3F8;
      }
      goto L_08A2D3E4;
    }
L_08A2D3E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2D3F0u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D3F0u) goto L_08A2D3F0;
    return;
L_08A2D3F0:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    goto L_08A2D3F8;
L_08A2D3F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D40C;
      }
      goto L_08A2D404;
    }
L_08A2D404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
      if (branch_taken) {
          goto L_08A2D428;
      }
      goto L_08A2D40C;
    }
L_08A2D40C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D420u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2D420u) goto L_08A2D420;
    return;
L_08A2D420:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    goto L_08A2D428;
L_08A2D428:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D440;
      }
      goto L_08A2D430;
    }
L_08A2D430:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D430;
      }
      goto L_08A2D440;
    }
L_08A2D440:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D458;
      }
      goto L_08A2D450;
    }
L_08A2D450:
    ctx.gpr[31] = (0x08A2D458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D458u) goto L_08A2D458;
    return;
L_08A2D458:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D46C;
L_08A2D46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7CC;
      }
      goto L_08A2D474;
    }
L_08A2D474:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2D480u);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A2D480u) goto L_08A2D480;
    return;
L_08A2D480:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2D4E8;
      }
      goto L_08A2D48C;
    }
L_08A2D48C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11392)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11388)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11384)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11380)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11376)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11372)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11368)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2D4D8u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11364)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29A00u>(ctx, &aot_mem) && ctx.pc == 0x08A2D4D8u) goto L_08A2D4D8;
    return;
L_08A2D4D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15388));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2D4E8;
L_08A2D4E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2D518;
      }
      goto L_08A2D4F8;
    }
L_08A2D4F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D510;
      }
      goto L_08A2D504;
    }
L_08A2D504:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2D510;
L_08A2D510:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D618;
      }
      goto L_08A2D518;
    }
L_08A2D518:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2D558;
      }
      goto L_08A2D548;
    }
L_08A2D548:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2D564;
      }
      goto L_08A2D558;
    }
L_08A2D558:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(136));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    goto L_08A2D564;
L_08A2D564:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D5A4;
      }
      goto L_08A2D56C;
    }
L_08A2D56C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2D580u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A2D580u) goto L_08A2D580;
    return;
L_08A2D580:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
      if (branch_taken) {
          goto L_08A2D5A4;
      }
      goto L_08A2D590;
    }
L_08A2D590:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2D59Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D59Cu) goto L_08A2D59C;
    return;
L_08A2D59C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    goto L_08A2D5A4;
L_08A2D5A4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D5B8;
      }
      goto L_08A2D5B0;
    }
L_08A2D5B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
      if (branch_taken) {
          goto L_08A2D5D4;
      }
      goto L_08A2D5B8;
    }
L_08A2D5B8:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D5CCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2D5CCu) goto L_08A2D5CC;
    return;
L_08A2D5CC:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    goto L_08A2D5D4;
L_08A2D5D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D5EC;
      }
      goto L_08A2D5DC;
    }
L_08A2D5DC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D5DC;
      }
      goto L_08A2D5EC;
    }
L_08A2D5EC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D604;
      }
      goto L_08A2D5FC;
    }
L_08A2D5FC:
    ctx.gpr[31] = (0x08A2D604u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D604u) goto L_08A2D604;
    return;
L_08A2D604:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D618;
L_08A2D618:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7CC;
      }
      goto L_08A2D620;
    }
L_08A2D620:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[31] = (0x08A2D62Cu);
    ctx.gpr[4] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A2D62Cu) goto L_08A2D62C;
    return;
L_08A2D62C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2D694;
      }
      goto L_08A2D638;
    }
L_08A2D638:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11360)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11356)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11352)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11348)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11344)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11340)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11336)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A2D684u);
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11332)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 296u, 0x08A29A00u>(ctx, &aot_mem) && ctx.pc == 0x08A2D684u) goto L_08A2D684;
    return;
L_08A2D684:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15316));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[17] | 0u);
    goto L_08A2D694;
L_08A2D694:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2D6C4;
      }
      goto L_08A2D6A4;
    }
L_08A2D6A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D6BC;
      }
      goto L_08A2D6B0;
    }
L_08A2D6B0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_08A2D6BC;
L_08A2D6BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2D7C4;
      }
      goto L_08A2D6C4;
    }
L_08A2D6C4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[6] >> 30u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A2D704;
      }
      goto L_08A2D6F4;
    }
L_08A2D6F4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A2D710;
      }
      goto L_08A2D704;
    }
L_08A2D704:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_08A2D710;
L_08A2D710:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2D750;
      }
      goto L_08A2D718;
    }
L_08A2D718:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A2D72Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x08A2D72Cu) goto L_08A2D72C;
    return;
L_08A2D72C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
      if (branch_taken) {
          goto L_08A2D750;
      }
      goto L_08A2D73C;
    }
L_08A2D73C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2D748u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D748u) goto L_08A2D748;
    return;
L_08A2D748:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_08A2D750;
L_08A2D750:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D764;
      }
      goto L_08A2D75C;
    }
L_08A2D75C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
      if (branch_taken) {
          goto L_08A2D780;
      }
      goto L_08A2D764;
    }
L_08A2D764:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2D778u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x08A2D778u) goto L_08A2D778;
    return;
L_08A2D778:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_08A2D780;
L_08A2D780:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2D798;
      }
      goto L_08A2D788;
    }
L_08A2D788:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2D788;
      }
      goto L_08A2D798;
    }
L_08A2D798:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(152), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7B0;
      }
      goto L_08A2D7A8;
    }
L_08A2D7A8:
    ctx.gpr[31] = (0x08A2D7B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2D7B0u) goto L_08A2D7B0;
    return;
L_08A2D7B0:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08A2D7C4;
L_08A2D7C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7CC;
      }
      goto L_08A2D7CC;
    }
L_08A2D7CC:
    ctx.gpr[31] = (0x08A2D7D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2D7D4u) goto L_08A2D7D4;
    return;
L_08A2D7D4:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2D7E8;
      }
      goto L_08A2D7DC;
    }
L_08A2D7DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x08A2D7E8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 332u, 0x08A29D94u>(ctx, &aot_mem) && ctx.pc == 0x08A2D7E8u) goto L_08A2D7E8;
    return;
L_08A2D7E8:
    ctx.gpr[2] = (ctx.gpr[23] | 0u);
    goto L_08A2D7EC;
L_08A2D7EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D81C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11548)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11552)));
    ctx.gpr[3] = (2277u << 16u);
    ctx.gpr[12] = (ctx.gpr[3] + static_cast<std::uint32_t>(22584));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(22584), 0u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[7] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(8), 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-11544), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-11536), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (16014u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-11540), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[2] = (2229u << 16u);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[11] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(-11288));
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-11532), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2D8B8u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-11528), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08A2D8B8u) goto L_08A2D8B8;
    return;
L_08A2D8B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D8C4:
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
L_08A2D8F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2D904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-11272));
    goto L_08A2D958;
L_08A2D904:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2D920u);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B874u;
    return;
L_08A2D920:
    ctx.gpr[31] = (0x08A2D928u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B874u;
    return;
L_08A2D928:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2D944u);
    ctx.gpr[4] = (0u | 2u);
    ctx.pc = 0x08B0B87Cu;
    return;
L_08A2D944:
    ctx.gpr[31] = (0x08A2D94Cu);
    ctx.gpr[4] = (0u | 1u);
    ctx.pc = 0x08B0B87Cu;
    return;
L_08A2D94C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2D958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A2DA58;
      }
      goto L_08A2D9C4;
    }
L_08A2D9C4:
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[19] = (0u | 75u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(4));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4000));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4028));
    goto L_08A2D9E4;
L_08A2D9E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A2DA04;
      }
      goto L_08A2D9F0;
    }
L_08A2D9F0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2D9FCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_08A2D8C4;
L_08A2D9FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA48;
      }
      goto L_08A2DA04;
    }
L_08A2DA04:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2DA10u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_08A2D8C4;
L_08A2DA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A2DA38;
      }
      goto L_08A2DA20;
    }
L_08A2DA20:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2DA30u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A2DA84;
L_08A2DA30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DA48;
      }
      goto L_08A2DA38;
    }
L_08A2DA38:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2DA48u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08A2DA84;
L_08A2DA48:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A2D9E4;
      }
      goto L_08A2DA58;
    }
L_08A2DA58:
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
L_08A2DA84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2DAC0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4056));
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 425u, 0x08AED7A0u>(ctx, &aot_mem) && ctx.pc == 0x08A2DAC0u) goto L_08A2DAC0;
    return;
L_08A2DAC0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A2DACCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 407u, 0x08AED6BCu>(ctx, &aot_mem) && ctx.pc == 0x08A2DACCu) goto L_08A2DACC;
    return;
L_08A2DACC:
    ctx.gpr[31] = (0x08A2DAD4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 905u, 0x08AEF368u>(ctx, &aot_mem) && ctx.pc == 0x08A2DAD4u) goto L_08A2DAD4;
    return;
L_08A2DAD4:
    ctx.gpr[31] = (0x08A2DADCu);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_08A2DADC:
    ctx.gpr[18] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-24288));
      if (branch_taken) {
          goto L_08A2DB4C;
      }
      goto L_08A2DAEC;
    }
L_08A2DAEC:
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-11240));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 139u);
    ctx.gpr[31] = (0x08A2DB08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4092));
    goto L_08A2D8C4;
L_08A2DB08:
    ctx.gpr[31] = (0x08A2DB10u);
    // nop
    ctx.pc = 0x08B0B8A4u;
    return;
L_08A2DB10:
    ctx.gpr[4] = (ctx.gpr[2] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DB38;
      }
      goto L_08A2DB1C;
    }
L_08A2DB1C:
    ctx.gpr[4] = (0u | 32u);
    ctx.gpr[31] = (0x08A2DB28u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.pc = 0x08B0B89Cu;
    return;
L_08A2DB28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2DB30;
      }
      goto L_08A2DB30;
    }
L_08A2DB30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DB08;
      }
      goto L_08A2DB38;
    }
L_08A2DB38:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 146u);
    ctx.gpr[31] = (0x08A2DB4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4128));
    goto L_08A2D8C4;
L_08A2DB4C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A2DB5Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 136u, 0x08A58C00u>(ctx, &aot_mem) && ctx.pc == 0x08A2DB5Cu) goto L_08A2DB5C;
    return;
L_08A2DB5C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2DB70;
      }
      goto L_08A2DB68;
    }
L_08A2DB68:
    ctx.gpr[31] = (0x08A2DB70u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BC14u;
    return;
L_08A2DB70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2DB4C;
      }
      goto L_08A2DB78;
    }
L_08A2DB78:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2DB88u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BD34u;
    return;
L_08A2DB88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A2DBCC;
      }
      goto L_08A2DB90;
    }
L_08A2DB90:
    ctx.gpr[20] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4164));
    goto L_08A2DB98;
L_08A2DB98:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2DBA8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0BD34u;
    return;
L_08A2DBA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A2DBB8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_08A2D8C4;
L_08A2DBB8:
    ctx.gpr[31] = (0x08A2DBC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0BC14u;
    return;
L_08A2DBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A2DB98;
      }
      goto L_08A2DBCC;
    }
L_08A2DBCC:
    ctx.gpr[31] = (0x08A2DBD4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0BDECu;
    return;
L_08A2DBD4:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2DC0Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BD3Cu;
    return;
L_08A2DC0C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2DC30;
      }
      goto L_08A2DC18;
    }
L_08A2DC18:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2DC28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4204));
    goto L_08A2D8C4;
L_08A2DC28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2DC34;
      }
      goto L_08A2DC30;
    }
L_08A2DC30:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2DC34;
L_08A2DC34:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DC54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 32u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2DC98u);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BD44u;
    return;
L_08A2DC98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_08A2DCC4;
      }
      goto L_08A2DCA0;
    }
L_08A2DCA0:
    ctx.gpr[31] = (0x08A2DCA8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x08B0BD4Cu;
    return;
L_08A2DCA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A2DCD8;
      }
      goto L_08A2DCB0;
    }
L_08A2DCB0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A2DCBCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4292));
    goto L_08A2D8C4;
L_08A2DCBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2DCDC;
      }
      goto L_08A2DCC4;
    }
L_08A2DCC4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A2DCD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4256));
    goto L_08A2D8C4;
L_08A2DCD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A2DCDC;
      }
      goto L_08A2DCD8;
    }
L_08A2DCD8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2DCDC;
L_08A2DCDC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DCE8:
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
L_08A2DD14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(19));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(23));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2DDB8;
      }
      goto L_08A2DDA8;
    }
L_08A2DDA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A2DDB8;
L_08A2DDB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2DDE0;
      }
      goto L_08A2DDD0;
    }
L_08A2DDD0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A2DDE0;
L_08A2DDE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
        goto L_08A2DE0C;
    }
    goto L_08A2DDF8;
L_08A2DDF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A2DE0C;
L_08A2DE0C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27))))));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[31] = (0x08A2DE34u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 601u, 0x08976B14u>(ctx, &aot_mem) && ctx.pc == 0x08A2DE34u) goto L_08A2DE34;
    return;
L_08A2DE34:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DE40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(7));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[1] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(15), ctx.gpr[1]));
    ctx.gpr[1] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(18), ctx.gpr[1]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[1]);
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2DED4;
      }
      goto L_08A2DEC4;
    }
L_08A2DEC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A2DED0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A2DED0u) goto L_08A2DED0;
    return;
L_08A2DED0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2DED4;
L_08A2DED4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A2DF08u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0F80u>(ctx, &aot_mem) && ctx.pc == 0x08A2DF08u) goto L_08A2DF08;
    return;
L_08A2DF08:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A2DF90;
      }
      goto L_08A2DF1C;
    }
L_08A2DF1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DF7C;
      }
      goto L_08A2DF3C;
    }
L_08A2DF3C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x08A2DF48u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2DF48u) goto L_08A2DF48;
    return;
L_08A2DF48:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A2DF7C;
      }
      goto L_08A2DF50;
    }
L_08A2DF50:
    ctx.gpr[31] = (0x08A2DF58u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2DF58u) goto L_08A2DF58;
    return;
L_08A2DF58:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2DF7C;
      }
      goto L_08A2DF60;
    }
L_08A2DF60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08A2DF7Cu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2DF7Cu) goto L_08A2DF7C;
    return;
L_08A2DF7C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2DF1C;
      }
      goto L_08A2DF90;
    }
L_08A2DF90:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2DFB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2DFE0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08A2DFE0u) goto L_08A2DFE0;
    return;
L_08A2DFE0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A2DFF8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08A2DFF8u) goto L_08A2DFF8;
    return;
L_08A2DFF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E004u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08A2E004u) goto L_08A2E004;
    return;
L_08A2E004:
    ctx.gpr[16] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A2E014u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 228u, 0x08B00EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2E014u) goto L_08A2E014;
    return;
L_08A2E014:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[31] = (0x08A2E020u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 228u, 0x08B00EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2E020u) goto L_08A2E020;
    return;
L_08A2E020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[6]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 28u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6202)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(96), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(124))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(125))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(99));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(128))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(129))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(131))))));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(132))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(133))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(134))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(135))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(136))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(137))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(111));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(138))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(139))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(140))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(141))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(142))))));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(143))))));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(145))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(146))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(147))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(123))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint16_t>(0u));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(56))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2E174u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A2DD14;
L_08A2E174:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A2E188u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2E188u) goto L_08A2E188;
    return;
L_08A2E188:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E1A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E1D0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08A2E1D0u) goto L_08A2E1D0;
    return;
L_08A2E1D0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E1DCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E1DCu) goto L_08A2E1DC;
    return;
L_08A2E1DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2E1F0u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 228u, 0x08B00EDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2E1F0u) goto L_08A2E1F0;
    return;
L_08A2E1F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(33))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(83), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(35))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(37))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(87), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(39))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(89), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(41))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(90), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(42))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(43))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(92), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(93), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(94), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 19u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6201)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(83))))));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(67));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(84))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(86))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(87))))));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(88))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(90))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(91))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(92))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(94))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[1] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(79), ctx.gpr[1]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(82), ctx.gpr[1]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A2E300u);
    ctx.gpr[7] = (0u | 0u);
    goto L_08A2DE40;
L_08A2E300:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A2E314u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2E314u) goto L_08A2E314;
    return;
L_08A2E314:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E32C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-240));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[19]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E378u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08A2E378u) goto L_08A2E378;
    return;
L_08A2E378:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E384u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E384u) goto L_08A2E384;
    return;
L_08A2E384:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
      if (branch_taken) {
          goto L_08A2E3B8;
      }
      goto L_08A2E3A8;
    }
L_08A2E3A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A2E3B4u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A2E3B4u) goto L_08A2E3B4;
    return;
L_08A2E3B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2E3B8;
L_08A2E3B8:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A2E3F4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0F80u>(ctx, &aot_mem) && ctx.pc == 0x08A2E3F4u) goto L_08A2E3F4;
    return;
L_08A2E3F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08A2E458;
      }
      goto L_08A2E408;
    }
L_08A2E408:
    ctx.gpr[8] = (2u << 16u);
    goto L_08A2E40C;
L_08A2E40C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (ctx.gpr[9] & 14u);
    ctx.gpr[9] = (ctx.gpr[9] ^ 4u);
    ctx.gpr[9] = (ctx.gpr[9] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E444;
      }
      goto L_08A2E42C;
    }
L_08A2E42C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(72)));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E448;
      }
      goto L_08A2E444;
    }
L_08A2E444:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A2E448;
L_08A2E448:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2E40C;
      }
      goto L_08A2E458;
    }
L_08A2E458:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 1u);
    ctx.gpr[31] = (0x08A2E48Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 158u, 0x088C0F80u>(ctx, &aot_mem) && ctx.pc == 0x08A2E48Cu) goto L_08A2E48C;
    return;
L_08A2E48C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A2E4FC;
      }
      goto L_08A2E4A0;
    }
L_08A2E4A0:
    ctx.gpr[19] = (ctx.gpr[29] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(5736));
    goto L_08A2E4A8;
L_08A2E4A8:
    ctx.gpr[31] = (0x08A2E4B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    goto L_08A2F85C;
L_08A2E4B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4E8;
      }
      goto L_08A2E4B8;
    }
L_08A2E4B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4E8;
      }
      goto L_08A2E4C4;
    }
L_08A2E4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E4E8;
      }
      goto L_08A2E4D0;
    }
L_08A2E4D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2E4E8;
      }
      goto L_08A2E4E4;
    }
L_08A2E4E4:
    ctx.gpr[20] = (0u | 0u);
    goto L_08A2E4E8;
L_08A2E4E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(64))))));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A2E4A8;
      }
      goto L_08A2E4FC;
    }
L_08A2E4FC:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E510;
      }
      goto L_08A2E504;
    }
L_08A2E504:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A2E510u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4532));
    goto L_08A2DCE8;
L_08A2E510:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E51Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08A2E51Cu) goto L_08A2E51C;
    return;
L_08A2E51C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E54C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2E594u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08A2E594u) goto L_08A2E594;
    return;
L_08A2E594:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E5A0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E5A0u) goto L_08A2E5A0;
    return;
L_08A2E5A0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26868)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A2E5D8u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 416u, 0x08975BA8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E5D8u) goto L_08A2E5D8;
    return;
L_08A2E5D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2E5ECu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 711u, 0x08977838u>(ctx, &aot_mem) && ctx.pc == 0x08A2E5ECu) goto L_08A2E5EC;
    return;
L_08A2E5EC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(4580));
    ctx.gpr[31] = (0x08A2E5FCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A2E5FCu) goto L_08A2E5FC;
    return;
L_08A2E5FC:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2E60Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A2E60Cu) goto L_08A2E60C;
    return;
L_08A2E60C:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2E61Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A2E61Cu) goto L_08A2E61C;
    return;
L_08A2E61C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A2E63Cu);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    goto L_08A2DCE8;
L_08A2E63C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(4628));
    ctx.gpr[31] = (0x08A2E64Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A2E64Cu) goto L_08A2E64C;
    return;
L_08A2E64C:
    ctx.gpr[21] = (ctx.gpr[3] | 0u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2E65Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A2E65Cu) goto L_08A2E65C;
    return;
L_08A2E65C:
    ctx.gpr[23] = (ctx.gpr[3] | 0u);
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A2E66Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 387u, 0x08AF5E68u>(ctx, &aot_mem) && ctx.pc == 0x08A2E66Cu) goto L_08A2E66C;
    return;
L_08A2E66C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[9] = (ctx.gpr[23] | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[11] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A2E68Cu);
    ctx.gpr[10] = (ctx.gpr[2] | 0u);
    goto L_08A2DCE8;
L_08A2E68C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2E698u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 715u, 0x089BF700u>(ctx, &aot_mem) && ctx.pc == 0x08A2E698u) goto L_08A2E698;
    return;
L_08A2E698:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E6C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E6D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E6D8u) goto L_08A2E6D8;
    return;
L_08A2E6D8:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08A2E700;
    }
    goto L_08A2E6F4;
L_08A2E6F4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2E710;
      }
      goto L_08A2E700;
    }
L_08A2E700:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A2E710;
L_08A2E710:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-17412), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E728:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E738u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E738u) goto L_08A2E738;
    return;
L_08A2E738:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08A2E760;
    }
    goto L_08A2E754;
L_08A2E754:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2E770;
      }
      goto L_08A2E760;
    }
L_08A2E760:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A2E770;
L_08A2E770:
    ctx.gpr[31] = (0x08A2E778u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 468u, 0x089EE868u>(ctx, &aot_mem) && ctx.pc == 0x08A2E778u) goto L_08A2E778;
    return;
L_08A2E778:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E788:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E798u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08A2E798u) goto L_08A2E798;
    return;
L_08A2E798:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16407), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E7B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E7C4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B928u>(ctx, &aot_mem) && ctx.pc == 0x08A2E7C4u) goto L_08A2E7C4;
    return;
L_08A2E7C4:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[31] = (0x08A2E7D0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 469u, 0x089EE874u>(ctx, &aot_mem) && ctx.pc == 0x08A2E7D0u) goto L_08A2E7D0;
    return;
L_08A2E7D0:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E7E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E7F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25056));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 677u, 0x0884EE14u>(ctx, &aot_mem) && ctx.pc == 0x08A2E7F4u) goto L_08A2E7F4;
    return;
L_08A2E7F4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2E804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5736));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2E83Cu);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6202))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A2E83Cu) goto L_08A2E83C;
    return;
L_08A2E83C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A2E878;
      }
      goto L_08A2E84C;
    }
L_08A2E84C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8940));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A2E878;
L_08A2E878:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A2E88C;
      }
      goto L_08A2E880;
    }
L_08A2E880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A2E88C;
L_08A2E88C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2E89Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E89Cu) goto L_08A2E89C;
    return;
L_08A2E89C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E8C0;
      }
      goto L_08A2E8A8;
    }
L_08A2E8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2E8C0;
      }
      goto L_08A2E8B8;
    }
L_08A2E8B8:
    ctx.gpr[31] = (0x08A2E8C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E8C0u) goto L_08A2E8C0;
    return;
L_08A2E8C0:
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08A2E8D4u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6201))))));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A2E8D4u) goto L_08A2E8D4;
    return;
L_08A2E8D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A2E908;
      }
      goto L_08A2E8E0;
    }
L_08A2E8E0:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9820));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-9804));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8640));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    goto L_08A2E908;
L_08A2E908:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A2E91C;
      }
      goto L_08A2E910;
    }
L_08A2E910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A2E91C;
L_08A2E91C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2E92Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 240u, 0x088A90D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2E92Cu) goto L_08A2E92C;
    return;
L_08A2E92C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2E950;
      }
      goto L_08A2E938;
    }
L_08A2E938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2E950;
      }
      goto L_08A2E948;
    }
L_08A2E948:
    ctx.gpr[31] = (0x08A2E950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A2E950u) goto L_08A2E950;
    return;
L_08A2E950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A2E968;
      }
      goto L_08A2E95C;
    }
L_08A2E95C:
    ctx.gpr[31] = (0x08A2E964u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08A2E964u) goto L_08A2E964;
    return;
L_08A2E964:
    ctx.gpr[5] = (2229u << 16u);
    goto L_08A2E968;
L_08A2E968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2E978u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11196));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2E978u) goto L_08A2E978;
    return;
L_08A2E978:
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
L_08A2E998:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11220)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11224)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[15] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[24] = (ctx.gpr[15] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[11] = (2232u << 16u);
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[2] = (2226u << 16u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(6008));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-11216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[24]));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6202), static_cast<std::uint8_t>(ctx.gpr[15]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6202)));
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504)));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(4676));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    aot_mem.aot_store8(ctx.gpr[9] + static_cast<std::uint32_t>(-6201), static_cast<std::uint8_t>(ctx.gpr[10]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[13] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(-6201)));
    ctx.gpr[7] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[3] = (2226u << 16u);
    ctx.gpr[12] = (2229u << 16u);
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-11208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(-29504), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (ctx.gpr[9] << 2u);
    ctx.gpr[6] = (ctx.gpr[3] + static_cast<std::uint32_t>(4688));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[14] = (2229u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-11212), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-11204), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-11200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EA74:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EA9C:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u | 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EAA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A2EAC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 136u, 0x0890CBD0u>(ctx, &aot_mem) && ctx.pc == 0x08A2EAC0u) goto L_08A2EAC0;
    return;
L_08A2EAC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EAF4;
      }
      goto L_08A2EAC8;
    }
L_08A2EAC8:
    ctx.gpr[31] = (0x08A2EAD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 191u, 0x0890D0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2EAD0u) goto L_08A2EAD0;
    return;
L_08A2EAD0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EAF4;
      }
      goto L_08A2EADC;
    }
L_08A2EADC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EAF0;
      }
      goto L_08A2EAE8;
    }
L_08A2EAE8:
    ctx.gpr[31] = (0x08A2EAF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 186u, 0x0890D06Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2EAF0u) goto L_08A2EAF0;
    return;
L_08A2EAF0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), 0u);
    goto L_08A2EAF4;
L_08A2EAF4:
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
L_08A2EB0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EB4C;
      }
      goto L_08A2EB1C;
    }
L_08A2EB1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] >> 1u);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EBB4;
      }
      goto L_08A2EB34;
    }
L_08A2EB34:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(4720)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EB4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2EBB8;
      }
      goto L_08A2EB54;
    }
L_08A2EB54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2EBB8;
      }
      goto L_08A2EB5C;
    }
L_08A2EB5C:
    ctx.gpr[31] = (0x08A2EB64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0173_entry, 173u, 110u, 0x08AB8714u>(ctx, &aot_mem) && ctx.pc == 0x08A2EB64u) goto L_08A2EB64;
    return;
L_08A2EB64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EBB8;
      }
      goto L_08A2EB6C;
    }
L_08A2EB6C:
    ctx.gpr[31] = (0x08A2EB74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 491u, 0x0889E7D8u>(ctx, &aot_mem) && ctx.pc == 0x08A2EB74u) goto L_08A2EB74;
    return;
L_08A2EB74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EBB8;
      }
      goto L_08A2EB7C;
    }
L_08A2EB7C:
    ctx.gpr[31] = (0x08A2EB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 153u, 0x0899D3B0u>(ctx, &aot_mem) && ctx.pc == 0x08A2EB84u) goto L_08A2EB84;
    return;
L_08A2EB84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EBB8;
      }
      goto L_08A2EB8C;
    }
L_08A2EB8C:
    ctx.gpr[31] = (0x08A2EB94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 176u, 0x0883CEC4u>(ctx, &aot_mem) && ctx.pc == 0x08A2EB94u) goto L_08A2EB94;
    return;
L_08A2EB94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EBB8;
      }
      goto L_08A2EB9C;
    }
L_08A2EB9C:
    ctx.gpr[31] = (0x08A2EBA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 58u, 0x0887847Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2EBA4u) goto L_08A2EBA4;
    return;
L_08A2EBA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EBB8;
      }
      goto L_08A2EBAC;
    }
L_08A2EBAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2EBB8;
      }
      goto L_08A2EBB4;
    }
L_08A2EBB4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2EBB8;
L_08A2EBB8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EBC4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A2EC44;
      }
      goto L_08A2EBE0;
    }
L_08A2EBE0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15244));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2EBF4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A2F22C;
L_08A2EBF4:
    ctx.gpr[31] = (0x08A2EBFCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 707u, 0x0883B98Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2EBFCu) goto L_08A2EBFC;
    return;
L_08A2EBFC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2EC34;
      }
      goto L_08A2EC04;
    }
L_08A2EC04:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2EC34;
      }
      goto L_08A2EC0C;
    }
L_08A2EC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A2EC34;
      }
      goto L_08A2EC1C;
    }
L_08A2EC1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_08A2EC34;
    }
    goto L_08A2EC28;
L_08A2EC28:
    ctx.gpr[31] = (0x08A2EC30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A2EC30u) goto L_08A2EC30;
    return;
L_08A2EC30:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A2EC34;
L_08A2EC34:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EC44;
      }
      goto L_08A2EC3C;
    }
L_08A2EC3C:
    ctx.gpr[31] = (0x08A2EC44u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A2EC44u) goto L_08A2EC44;
    return;
L_08A2EC44:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EC58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2EC84;
    }
L_08A2EC84:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2EC90;
    }
L_08A2EC90:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2EC9C;
    }
L_08A2EC9C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ECA8;
    }
L_08A2ECA8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ECB4;
    }
L_08A2ECB4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ECC0;
    }
L_08A2ECC0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ECCC;
    }
L_08A2ECCC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ECD8;
    }
L_08A2ECD8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ECE4;
    }
L_08A2ECE4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ECF0;
    }
L_08A2ECF0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ECFC;
    }
L_08A2ECFC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ED08;
    }
L_08A2ED08:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2ED20;
      }
      goto L_08A2ED14;
    }
L_08A2ED14:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2ED28;
      }
      goto L_08A2ED20;
    }
L_08A2ED20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2ED28;
      }
      goto L_08A2ED28;
    }
L_08A2ED28:
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2ED54;
      }
      goto L_08A2ED4C;
    }
L_08A2ED4C:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A2ED54;
L_08A2ED54:
    ctx.gpr[31] = (0x08A2ED5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A2F930;
L_08A2ED5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(56));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2ED94u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2ED94u) goto L_08A2ED94;
    return;
L_08A2ED94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EDA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(88), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EDD0;
    }
L_08A2EDD0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EDDC;
    }
L_08A2EDDC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EDE8;
    }
L_08A2EDE8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EDF4;
    }
L_08A2EDF4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE00;
    }
L_08A2EE00:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE0C;
    }
L_08A2EE0C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE18;
    }
L_08A2EE18:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE24;
    }
L_08A2EE24:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE30;
    }
L_08A2EE30:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE3C;
    }
L_08A2EE3C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE48;
    }
L_08A2EE48:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE54;
    }
L_08A2EE54:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2EE6C;
      }
      goto L_08A2EE60;
    }
L_08A2EE60:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2EE74;
      }
      goto L_08A2EE6C;
    }
L_08A2EE6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2EE74;
      }
      goto L_08A2EE74;
    }
L_08A2EE74:
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2EEA0;
      }
      goto L_08A2EE98;
    }
L_08A2EE98:
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A2EEA0;
L_08A2EEA0:
    ctx.gpr[31] = (0x08A2EEA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A2F930;
L_08A2EEA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (65535u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 15u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2EED8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 2u);
      if (branch_taken) {
          goto L_08A2EF24;
      }
      goto L_08A2EF10;
    }
L_08A2EF10:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2EF24;
L_08A2EF24:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(1824));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A2EF38u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 173u, 0x088E8DF4u>(ctx, &aot_mem) && ctx.pc == 0x08A2EF38u) goto L_08A2EF38;
    return;
L_08A2EF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2EF50u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2EF50u) goto L_08A2EF50;
    return;
L_08A2EF50:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    ctx.gpr[31] = (0x08A2EF5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 174u, 0x088E8DFCu>(ctx, &aot_mem) && ctx.pc == 0x08A2EF5Cu) goto L_08A2EF5C;
    return;
L_08A2EF5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF8C;
      }
      goto L_08A2EF68;
    }
L_08A2EF68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EF94;
      }
      goto L_08A2EF84;
    }
L_08A2EF84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2EFA8;
      }
      goto L_08A2EF8C;
    }
L_08A2EF8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F064;
      }
      goto L_08A2EF94;
    }
L_08A2EF94:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10988)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10988), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    goto L_08A2EFA8;
L_08A2EFA8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2F004;
      }
      goto L_08A2EFB8;
    }
L_08A2EFB8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08A2EFE0;
      }
      goto L_08A2EFC8;
    }
L_08A2EFC8:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_08A2EFE4;
    }
    goto L_08A2EFD4;
L_08A2EFD4:
    ctx.gpr[31] = (0x08A2EFDCu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A2EFDCu) goto L_08A2EFDC;
    return;
L_08A2EFDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08A2EFE0;
L_08A2EFE0:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A2EFE4;
L_08A2EFE4:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2EFFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2EFFCu) goto L_08A2EFFC;
    return;
L_08A2EFFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F050;
      }
      goto L_08A2F004;
    }
L_08A2F004:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A2F050;
      }
      goto L_08A2F00C;
    }
L_08A2F00C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08A2F034;
      }
      goto L_08A2F01C;
    }
L_08A2F01C:
    ctx.gpr[6] = (ctx.gpr[5] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
        goto L_08A2F038;
    }
    goto L_08A2F028;
L_08A2F028:
    ctx.gpr[31] = (0x08A2F030u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A2F030u) goto L_08A2F030;
    return;
L_08A2F030:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08A2F034;
L_08A2F034:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A2F038;
L_08A2F038:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2F050u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F050u) goto L_08A2F050;
    return;
L_08A2F050:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A2F05Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2EA9C;
L_08A2F05C:
    ctx.gpr[31] = (0x08A2F064u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 242u, 0x08A7D590u>(ctx, &aot_mem) && ctx.pc == 0x08A2F064u) goto L_08A2F064;
    return;
L_08A2F064:
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
L_08A2F080:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2F0B8;
      }
      goto L_08A2F0A0;
    }
L_08A2F0A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2F0C0;
      }
      goto L_08A2F0B0;
    }
L_08A2F0B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F10C;
      }
      goto L_08A2F0B8;
    }
L_08A2F0B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F190;
      }
      goto L_08A2F0C0;
    }
L_08A2F0C0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08A2F0E8;
      }
      goto L_08A2F0D0;
    }
L_08A2F0D0:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
        goto L_08A2F0EC;
    }
    goto L_08A2F0DC;
L_08A2F0DC:
    ctx.gpr[31] = (0x08A2F0E4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A2F0E4u) goto L_08A2F0E4;
    return;
L_08A2F0E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08A2F0E8;
L_08A2F0E8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08A2F0EC;
L_08A2F0EC:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2F104u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A2F104u) goto L_08A2F104;
    return;
L_08A2F104:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F15C;
      }
      goto L_08A2F10C;
    }
L_08A2F10C:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2F15C;
      }
      goto L_08A2F118;
    }
L_08A2F118:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
      if (branch_taken) {
          goto L_08A2F140;
      }
      goto L_08A2F128;
    }
L_08A2F128:
    ctx.gpr[6] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
        goto L_08A2F144;
    }
    goto L_08A2F134;
L_08A2F134:
    ctx.gpr[31] = (0x08A2F13Cu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A2F13Cu) goto L_08A2F13C;
    return;
L_08A2F13C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    goto L_08A2F140;
L_08A2F140:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    goto L_08A2F144;
L_08A2F144:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2F15Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A2F15Cu) goto L_08A2F15C;
    return;
L_08A2F15C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F188;
      }
      goto L_08A2F174;
    }
L_08A2F174:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2F188;
L_08A2F188:
    ctx.gpr[31] = (0x08A2F190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 242u, 0x08A7D590u>(ctx, &aot_mem) && ctx.pc == 0x08A2F190u) goto L_08A2F190;
    return;
L_08A2F190:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F1A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2F1F0;
      }
      goto L_08A2F1BC;
    }
L_08A2F1BC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F1E8;
      }
      goto L_08A2F1D4;
    }
L_08A2F1D4:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2F1E8;
L_08A2F1E8:
    ctx.gpr[31] = (0x08A2F1F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 244u, 0x08A7D5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F1F0u) goto L_08A2F1F0;
    return;
L_08A2F1F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F218;
      }
      goto L_08A2F200;
    }
L_08A2F200:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F218;
      }
      goto L_08A2F210;
    }
L_08A2F210:
    ctx.gpr[31] = (0x08A2F218u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A2F218u) goto L_08A2F218;
    return;
L_08A2F218:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F22C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F268;
      }
      goto L_08A2F250;
    }
L_08A2F250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F268;
      }
      goto L_08A2F260;
    }
L_08A2F260:
    ctx.gpr[31] = (0x08A2F268u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A2F268u) goto L_08A2F268;
    return;
L_08A2F268:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F354;
      }
      goto L_08A2F278;
    }
L_08A2F278:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2F2B0;
      }
      goto L_08A2F288;
    }
L_08A2F288:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2F298u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 103u, 0x089C889Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F298u) goto L_08A2F298;
    return;
L_08A2F298:
    ctx.gpr[31] = (0x08A2F2A0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 193u, 0x08AC8F7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F2A0u) goto L_08A2F2A0;
    return;
L_08A2F2A0:
    ctx.gpr[31] = (0x08A2F2A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 168u, 0x08A5D3C4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F2A8u) goto L_08A2F2A8;
    return;
L_08A2F2A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F2F0;
      }
      goto L_08A2F2B0;
    }
L_08A2F2B0:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2F2F0;
      }
      goto L_08A2F2BC;
    }
L_08A2F2BC:
    ctx.gpr[31] = (0x08A2F2C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 105u, 0x089C88CCu>(ctx, &aot_mem) && ctx.pc == 0x08A2F2C4u) goto L_08A2F2C4;
    return;
L_08A2F2C4:
    ctx.gpr[31] = (0x08A2F2CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 241u, 0x08A4D008u>(ctx, &aot_mem) && ctx.pc == 0x08A2F2CCu) goto L_08A2F2CC;
    return;
L_08A2F2CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F2E8;
      }
      goto L_08A2F2D4;
    }
L_08A2F2D4:
    ctx.gpr[5] = (2211u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A2F2E8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5468));
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 212u, 0x08AA5084u>(ctx, &aot_mem) && ctx.pc == 0x08A2F2E8u) goto L_08A2F2E8;
    return;
L_08A2F2E8:
    ctx.gpr[31] = (0x08A2F2F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 206u, 0x08AA5020u>(ctx, &aot_mem) && ctx.pc == 0x08A2F2F0u) goto L_08A2F2F0;
    return;
L_08A2F2F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F320;
      }
      goto L_08A2F30C;
    }
L_08A2F30C:
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A2F320;
L_08A2F320:
    ctx.gpr[31] = (0x08A2F328u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 244u, 0x08A7D5B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2F328u) goto L_08A2F328;
    return;
L_08A2F328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F354;
      }
      goto L_08A2F344;
    }
L_08A2F344:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-10988)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-10988), ctx.gpr[5]);
    goto L_08A2F354;
L_08A2F354:
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
L_08A2F36C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2F398u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 136u, 0x089FD404u>(ctx, &aot_mem) && ctx.pc == 0x08A2F398u) goto L_08A2F398;
    return;
L_08A2F398:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2F40Cu);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 639u, 0x088B7EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F40Cu) goto L_08A2F40C;
    return;
L_08A2F40C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F428;
    }
    goto L_08A2F428;
L_08A2F428:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F43C;
    }
    goto L_08A2F43C;
L_08A2F43C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F450;
    }
    goto L_08A2F450;
L_08A2F450:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F464;
    }
    goto L_08A2F464;
L_08A2F464:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2F480u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 639u, 0x088B7EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F480u) goto L_08A2F480;
    return;
L_08A2F480:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F49C;
    }
    goto L_08A2F49C;
L_08A2F49C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F4B0;
    }
    goto L_08A2F4B0;
L_08A2F4B0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F4C4;
    }
    goto L_08A2F4C4;
L_08A2F4C4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F4D8;
    }
    goto L_08A2F4D8;
L_08A2F4D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2F504u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 639u, 0x088B7EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F504u) goto L_08A2F504;
    return;
L_08A2F504:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F520;
    }
    goto L_08A2F520;
L_08A2F520:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F534;
    }
    goto L_08A2F534;
L_08A2F534:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F548;
    }
    goto L_08A2F548;
L_08A2F548:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F55C;
    }
    goto L_08A2F55C;
L_08A2F55C:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A2F578u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 639u, 0x088B7EA0u>(ctx, &aot_mem) && ctx.pc == 0x08A2F578u) goto L_08A2F578;
    return;
L_08A2F578:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F594;
    }
    goto L_08A2F594;
L_08A2F594:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A2F5A8;
    }
    goto L_08A2F5A8;
L_08A2F5A8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F5BC;
    }
    goto L_08A2F5BC;
L_08A2F5BC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A2F5D0;
    }
    goto L_08A2F5D0;
L_08A2F5D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F620:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<9u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<10u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<11u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<35u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; vfpu_value[3u] = 1.0f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<43u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
      ctx.read_vfpu_vector_ct<4u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 40u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 13u, vfpu_side); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<108u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<100u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<100u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<13u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<5u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<5u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vdot_ct<4u, 5u, 5u, 3u>();
    ctx.execute_vfpu_vcmp_ct<4u, 100u, 1u, 7u>();
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A2F6B0;
      }
      goto L_08A2F6A8;
    }
L_08A2F6A8:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[2] & 255u);
    goto L_08A2F6B0;
L_08A2F6B0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F6B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2F728u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A2EA74;
L_08A2F728:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2F760u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x08927554u>(ctx, &aot_mem) && ctx.pc == 0x08A2F760u) goto L_08A2F760;
    return;
L_08A2F760:
    ctx.gpr[4] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08A2F788;
    }
    goto L_08A2F788;
L_08A2F788:
    ctx.gpr[2] = (ctx.gpr[4] & 255u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
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
L_08A2F7AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<3u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 32u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 13u, vfpu_side); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<13u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x000000FFu;
    ctx.execute_vfpu_vcmp_ct<14u, 12u, 4u, 3u>();
    // vflush: architectural no-op that retains VFPU prefixes
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<131u>());
    ctx.gpr[2] = (ctx.gpr[4] & 32u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F818:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F840;
      }
      goto L_08A2F82C;
    }
L_08A2F82C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F848;
      }
      goto L_08A2F840;
    }
L_08A2F840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F850;
      }
      goto L_08A2F848;
    }
L_08A2F848:
    ctx.gpr[31] = (0x08A2F850u);
    // nop
    goto L_08A2F7AC;
L_08A2F850:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F85C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 12u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F880;
      }
      goto L_08A2F878;
    }
L_08A2F878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F890;
      }
      goto L_08A2F880;
    }
L_08A2F880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[2] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    goto L_08A2F890;
L_08A2F890:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F8CC;
      }
      goto L_08A2F8AC;
    }
L_08A2F8AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A2F8D4;
      }
      goto L_08A2F8BC;
    }
L_08A2F8BC:
    ctx.gpr[31] = (0x08A2F8C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x08A2F8C4u) goto L_08A2F8C4;
    return;
L_08A2F8C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F8DC;
      }
      goto L_08A2F8CC;
    }
L_08A2F8CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F8DC;
      }
      goto L_08A2F8D4;
    }
L_08A2F8D4:
    ctx.gpr[31] = (0x08A2F8DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 128u, 0x08A5D100u>(ctx, &aot_mem) && ctx.pc == 0x08A2F8DCu) goto L_08A2F8DC;
    return;
L_08A2F8DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F8E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A2F900u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 241u, 0x08A4D008u>(ctx, &aot_mem) && ctx.pc == 0x08A2F900u) goto L_08A2F900;
    return;
L_08A2F900:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F910;
      }
      goto L_08A2F908;
    }
L_08A2F908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2F920;
      }
      goto L_08A2F910;
    }
L_08A2F910:
    ctx.gpr[31] = (0x08A2F918u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 259u, 0x08A4D17Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2F918u) goto L_08A2F918;
    return;
L_08A2F918:
    ctx.gpr[31] = (0x08A2F920u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 199u, 0x0890D340u>(ctx, &aot_mem) && ctx.pc == 0x08A2F920u) goto L_08A2F920;
    return;
L_08A2F920:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2F930:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F948;
    }
L_08A2F948:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F954;
    }
L_08A2F954:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(34)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F960;
    }
L_08A2F960:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(42)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F96C;
    }
L_08A2F96C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F978;
    }
L_08A2F978:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F984;
    }
L_08A2F984:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(46)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F990;
    }
L_08A2F990:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(38)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F99C;
    }
L_08A2F99C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F9A8;
    }
L_08A2F9A8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F9B4;
    }
L_08A2F9B4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F9C0;
    }
L_08A2F9C0:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(54)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F9CC;
    }
L_08A2F9CC:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2F9E4;
      }
      goto L_08A2F9D8;
    }
L_08A2F9D8:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(58)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2F9EC;
      }
      goto L_08A2F9E4;
    }
L_08A2F9E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2F9EC;
      }
      goto L_08A2F9EC;
    }
L_08A2F9EC:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FA7C;
      }
      goto L_08A2F9F4;
    }
L_08A2F9F4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FA00;
    }
L_08A2FA00:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FA0C;
    }
L_08A2FA0C:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FA18;
    }
L_08A2FA18:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(206)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FA24;
    }
L_08A2FA24:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(218)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 273u);
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FA30;
    }
L_08A2FA30:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 270u);
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FA38;
    }
L_08A2FA38:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[7] = (0u | 272u);
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FA40;
    }
L_08A2FA40:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FA48;
    }
L_08A2FA48:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FA54;
    }
L_08A2FA54:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[9]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2FA84;
      }
      goto L_08A2FA6C;
    }
L_08A2FA6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A2FA9C;
      }
      goto L_08A2FA74;
    }
L_08A2FA74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2FB80;
      }
      goto L_08A2FA7C;
    }
L_08A2FA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2FB80;
      }
      goto L_08A2FA84;
    }
L_08A2FA84:
    ctx.gpr[7] = (ctx.gpr[8] << 2u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[7] = (ctx.gpr[8] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_08A2FA9C;
L_08A2FA9C:
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[9] = (0u | 3u);
      if (branch_taken) {
          goto L_08A2FAB8;
      }
      goto L_08A2FAA8;
    }
L_08A2FAA8:
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[9];
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A2FABC;
      }
      goto L_08A2FAB0;
    }
L_08A2FAB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2FAE0;
      }
      goto L_08A2FAB8;
    }
L_08A2FAB8:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    goto L_08A2FABC;
L_08A2FABC:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(54)));
    ctx.gpr[9] = (ctx.gpr[8] & 8192u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A2FAD8;
      }
      goto L_08A2FACC;
    }
L_08A2FACC:
    ctx.gpr[8] = (ctx.gpr[8] & 16384u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A2FAE0;
      }
      goto L_08A2FAD8;
    }
L_08A2FAD8:
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08A2FAE0;
L_08A2FAE0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FAE8;
    }
L_08A2FAE8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 14u);
    ctx.gpr[7] = (ctx.gpr[7] ^ 8u);
    ctx.gpr[7] = (ctx.gpr[7] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FB14;
      }
      goto L_08A2FB04;
    }
L_08A2FB04:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FA74;
      }
      goto L_08A2FB14;
    }
L_08A2FB14:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FB74;
      }
      goto L_08A2FB20;
    }
L_08A2FB20:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(10)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FB74;
      }
      goto L_08A2FB2C;
    }
L_08A2FB2C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FB74;
      }
      goto L_08A2FB38;
    }
L_08A2FB38:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(14)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FB74;
      }
      goto L_08A2FB44;
    }
L_08A2FB44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FB74;
      }
      goto L_08A2FB50;
    }
L_08A2FB50:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(18)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FB74;
      }
      goto L_08A2FB5C;
    }
L_08A2FB5C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FB74;
      }
      goto L_08A2FB68;
    }
L_08A2FB68:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(22)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2FB7C;
      }
      goto L_08A2FB74;
    }
L_08A2FB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A2FB80;
      }
      goto L_08A2FB7C;
    }
L_08A2FB7C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A2FB80;
L_08A2FB80:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FB88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBB4;
      }
      goto L_08A2FB9C;
    }
L_08A2FB9C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2FBBC;
      }
      goto L_08A2FBAC;
    }
L_08A2FBAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBEC;
      }
      goto L_08A2FBB4;
    }
L_08A2FBB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBF4;
      }
      goto L_08A2FBBC;
    }
L_08A2FBBC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2FBDC;
      }
      goto L_08A2FBCC;
    }
L_08A2FBCC:
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A2FBD4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A2FBD4u) goto L_08A2FBD4;
    return;
L_08A2FBD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBE4;
      }
      goto L_08A2FBDC;
    }
L_08A2FBDC:
    ctx.gpr[31] = (0x08A2FBE4u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 206u, 0x08AC9208u>(ctx, &aot_mem) && ctx.pc == 0x08A2FBE4u) goto L_08A2FBE4;
    return;
L_08A2FBE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FBF4;
      }
      goto L_08A2FBEC;
    }
L_08A2FBEC:
    ctx.gpr[31] = (0x08A2FBF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 222u, 0x08AA5144u>(ctx, &aot_mem) && ctx.pc == 0x08A2FBF4u) goto L_08A2FBF4;
    return;
L_08A2FBF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FC00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1420)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2FC68;
      }
      goto L_08A2FC24;
    }
L_08A2FC24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FC60;
      }
      goto L_08A2FC30;
    }
L_08A2FC30:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2FC58;
      }
      goto L_08A2FC40;
    }
L_08A2FC40:
    ctx.gpr[31] = (0x08A2FC48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 347u, 0x0897235Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FC48u) goto L_08A2FC48;
    return;
L_08A2FC48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FC70;
      }
      goto L_08A2FC50;
    }
L_08A2FC50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FD00;
      }
      goto L_08A2FC58;
    }
L_08A2FC58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FD00;
      }
      goto L_08A2FC60;
    }
L_08A2FC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FD00;
      }
      goto L_08A2FC68;
    }
L_08A2FC68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FD00;
      }
      goto L_08A2FC70;
    }
L_08A2FC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (16968u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A2FCA8;
      }
      goto L_08A2FC88;
    }
L_08A2FC88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8120)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[31] = (0x08A2FCA0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 259u, 0x08971C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FCA0u) goto L_08A2FCA0;
    return;
L_08A2FCA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FD00;
      }
      goto L_08A2FCA8;
    }
L_08A2FCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FCDC;
      }
      goto L_08A2FCB8;
    }
L_08A2FCB8:
    ctx.gpr[31] = (0x08A2FCC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A2F7AC;
L_08A2FCC0:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 11u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A2FCDC;
L_08A2FCDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08A2FD00u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 259u, 0x08971C3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FD00u) goto L_08A2FD00;
    return;
L_08A2FD00:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FD14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]) ^ 0x80000000u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2FD3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[31]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7200)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7168)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A2FFE4;
      }
      goto L_08A2FD74;
    }
L_08A2FD74:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A2FDA4;
      }
      goto L_08A2FD8C;
    }
L_08A2FD8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
        goto L_08A2FDA8;
    }
    goto L_08A2FD9C;
L_08A2FD9C:
    ctx.gpr[31] = (0x08A2FDA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A2FDA4u) goto L_08A2FDA4;
    return;
L_08A2FDA4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    goto L_08A2FDA8;
L_08A2FDA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2FDC0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06604u>(ctx, &aot_mem) && ctx.pc == 0x08A2FDC0u) goto L_08A2FDC0;
    return;
L_08A2FDC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7968)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2FEBC;
      }
      goto L_08A2FDDC;
    }
L_08A2FDDC:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7968)));
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2FE60;
      }
      goto L_08A2FE04;
    }
L_08A2FE04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A2FE28;
      }
      goto L_08A2FE1C;
    }
L_08A2FE1C:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A2FE28;
L_08A2FE28:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (48035u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2FF60;
      }
      goto L_08A2FE60;
    }
L_08A2FE60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A2FE84;
      }
      goto L_08A2FE78;
    }
L_08A2FE78:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A2FE84;
L_08A2FE84:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (48131u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A2FF60;
      }
      goto L_08A2FEBC;
    }
L_08A2FEBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[17] = (ctx.gpr[4] >> 12u);
    ctx.gpr[17] = (ctx.gpr[17] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] & 4095u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08A2FEF4;
      }
      goto L_08A2FEE8;
    }
L_08A2FEE8:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_08A2FEF4;
L_08A2FEF4:
    ctx.gpr[4] = (14720u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-11052));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[4] = (48245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7968)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2FF60;
L_08A2FF60:
    ctx.gpr[4] = (0u & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FF8C;
      }
      goto L_08A2FF6C;
    }
L_08A2FF6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7968)));
    ctx.gpr[4] = (48527u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A2FF8C;
L_08A2FF8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A2FFB0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 379u, 0x0886236Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2FFB0u) goto L_08A2FFB0;
    return;
L_08A2FFB0:
    ctx.gpr[31] = (0x08A2FFB8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2FFB8u) goto L_08A2FFB8;
    return;
L_08A2FFB8:
    ctx.gpr[31] = (0x08A2FFC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A2F898;
L_08A2FFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FFE4;
      }
      goto L_08A2FFD0;
    }
L_08A2FFD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2FFE4;
      }
      goto L_08A2FFDC;
    }
L_08A2FFDC:
    ctx.gpr[31] = (0x08A2FFE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A2FFE4u) goto L_08A2FFE4;
    return;
L_08A2FFE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
}

void recomp_unit_0138(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0138_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_138(Runtime &runtime) {
    runtime.register_generated_unit(138u, 0x08A2C000u, 16384u, &recomp_unit_0138, &recomp_unit_0138_entry);
    runtime.register_function(0x08A2C000u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C170u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C198u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C1F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C208u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C20Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C214u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C224u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C228u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C230u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C240u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C250u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C260u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C264u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C26Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C27Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C28Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C290u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C298u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C2FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C310u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C320u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C328u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C338u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C344u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C358u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C368u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C378u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C388u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C398u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C3F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C450u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C45Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C464u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C474u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C47Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C48Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C494u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C49Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C4E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C500u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C514u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C530u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C548u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C54Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C574u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C584u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C58Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C594u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C59Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C5FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C608u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C610u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C614u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C61Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C628u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C630u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C634u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C63Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C648u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C650u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C654u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C65Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C668u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C674u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C67Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C68Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C698u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C6F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C708u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C710u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C720u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C728u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C73Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C74Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C768u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C770u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C778u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C77Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C780u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C7F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C814u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C828u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C844u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C854u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C858u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C888u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C8FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C90Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C914u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C940u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C950u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C958u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C960u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C968u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C970u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C978u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C980u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C98Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C990u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C998u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2C9F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CA9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CAFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CB98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CBF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CC64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CCFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CD98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CDDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CE98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CED0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CEF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF70u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CF88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2CFF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D000u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D00Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D014u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D044u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D054u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D060u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D068u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D07Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D08Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D098u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D0F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D100u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D114u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D11Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D128u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D134u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D180u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D190u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D1F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D200u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D20Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D214u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D228u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D238u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D244u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D24Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D258u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D260u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D274u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D27Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D284u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D294u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D2E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D32Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D33Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D34Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D358u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D364u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D36Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D39Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D3F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D404u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D40Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D420u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D428u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D430u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D440u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D450u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D458u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D46Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D474u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D480u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D48Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D4F8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D504u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D510u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D518u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D548u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D558u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D564u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D56Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D580u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D590u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D59Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D5FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D604u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D618u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D620u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D62Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D638u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D684u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D694u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D6F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D704u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D710u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D718u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D72Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D73Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D748u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D750u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D75Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D764u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D778u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D780u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D788u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D798u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D7ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D81Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D8F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D904u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D910u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D920u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D928u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D934u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D944u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D94Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D958u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2D9FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DA84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DACCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DADCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DAECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB70u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DB98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DBD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DC98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCA0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DCE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DD14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DDF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DE40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DEC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DED0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DED4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DF90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DFB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DFE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2DFF8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E004u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E014u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E020u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E174u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E188u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E1F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E300u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E314u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E32Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E378u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E384u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E3F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E408u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E40Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E42Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E444u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E448u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E458u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E48Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E4FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E504u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E510u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E51Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E54Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E594u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E5FCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E60Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E61Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E63Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E64Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E65Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E66Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E68Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E698u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6C8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E6F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E700u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E710u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E728u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E738u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E754u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E760u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E770u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E778u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E788u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E798u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E7F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E804u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E83Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E84Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E878u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E880u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E88Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E89Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E8A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E8B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E8C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E8D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E8E0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E908u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E910u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E91Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E92Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E938u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E948u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E950u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E95Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E964u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E968u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E978u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2E998u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EA9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EADCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EAF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB64u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EB9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBC4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EBFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC34u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC90u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EC9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECF0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ECFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED08u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED4Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2ED94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EDA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EDD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EDDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EDE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EDF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EE98u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEA0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EEA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EED8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF10u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EF94u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFC8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2EFFCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F004u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F00Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F01Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F028u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F030u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F034u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F038u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F050u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F05Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F064u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F080u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F0ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F104u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F10Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F118u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F128u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F134u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F13Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F140u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F144u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F15Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F174u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F188u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F190u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1A4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F1F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F200u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F210u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F218u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F22Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F250u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F260u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F268u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F278u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F288u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F298u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2A0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F2F0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F30Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F320u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F328u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F344u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F354u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F36Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F398u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F40Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F428u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F43Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F450u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F464u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F480u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F49Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F4B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F4C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F4D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F504u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F520u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F534u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F548u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F55Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F578u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F594u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F5A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F5BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F5D0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F620u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F6A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F6B0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F6B8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F728u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F760u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F788u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F7ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F818u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F82Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F840u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F848u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F850u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F85Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F878u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F880u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F890u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F898u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8ACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8BCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8C4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8D4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8DCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F8E8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F900u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F908u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F910u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F918u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F920u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F930u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F948u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F954u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F960u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F96Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F978u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F984u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F990u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F99Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9A8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9B4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9C0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9CCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9D8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9E4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9ECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2F9F4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA0Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA18u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA54u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FA9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FABCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FACCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAD8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAE0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FAE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB20u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB2Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB38u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB44u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB5Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB7Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB80u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FB9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBACu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBB4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBCCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBD4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBE4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBECu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FBF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC24u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC30u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC40u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC48u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC50u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC58u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC68u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC70u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FC88u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCA0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FCDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD00u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD14u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD3Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD74u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FD9Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FDA4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FDA8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FDC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FDDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE04u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE1Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE28u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE78u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FE84u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEBCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEE8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FEF4u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF60u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF6Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FF8Cu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFB0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFB8u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFC0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFD0u, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFDCu, &recomp_unit_0138, "recomp_unit_0138");
    runtime.register_function(0x08A2FFE4u, &recomp_unit_0138, "recomp_unit_0138");
}
} // namespace psprecomp
