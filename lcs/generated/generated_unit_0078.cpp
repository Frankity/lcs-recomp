#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0078[4094] = {
    1, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 5, 0, 0, 0, 0, 0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0,
    0, 9, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 16, 0, 17, 18, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0,
    26, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 32, 0, 33, 0, 0, 34, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 39, 40, 0, 41, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 47, 0, 48, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 52, 0, 53, 0, 54, 0, 0, 0, 55, 56,
    0, 0, 0, 0, 57, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    62, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 66, 0,
    0, 67, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 74, 0, 75, 0, 76, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0,
    82, 0, 83, 0, 0, 84, 0, 85, 0, 0, 0, 0, 0, 0, 0, 0, 86, 0, 87, 0, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93,
    94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 0, 0, 0, 0, 0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    99, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 102, 0, 103, 0, 104, 0, 0, 0, 105, 106, 0, 0, 0,
    0, 107, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111,
    0, 112, 0, 113, 0, 0, 0, 114, 115, 0, 0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122,
    0, 123, 0, 124, 0, 125, 0, 126, 0, 127, 0, 128, 0, 129, 0, 130, 131, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 135, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0,
    0, 144, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 151, 0, 0, 152, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 159, 0,
    0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 167, 0, 0, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 172, 0, 0, 0, 0, 0, 0, 0, 173, 0, 174, 0, 175, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 178, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 186, 0, 0, 0,
    187, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 194, 0, 0, 195, 0,
    0, 0, 196, 0, 0, 197, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 0, 203, 0, 0, 204, 0, 0,
    0, 205, 0, 0, 206, 0, 0, 207, 0, 0, 208, 0, 0, 0, 209, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    213, 0, 0, 0, 214, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 217, 0, 218, 0, 219, 0, 0, 220, 0, 0, 221, 0,
    0, 0, 222, 223, 0, 0, 0, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0,
    232, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0,
    239, 0, 0, 0, 0, 240, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0,
    247, 0, 0, 0, 0, 248, 0, 0, 249, 0, 0, 0, 250, 0, 0, 251, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 0, 254, 0, 0, 0, 0,
    0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 263,
    0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 0, 266, 0, 0, 267, 0, 0, 268, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 272, 273, 0, 0,
    0, 0, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 0, 0, 277, 0,
    278, 0, 279, 0, 0, 0, 280, 0, 281, 0, 282, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 288,
    0, 289, 0, 0, 0, 290, 0, 291, 0, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 0, 0, 297, 298, 0, 299, 0, 0, 0, 0, 0,
    300, 0, 301, 0, 0, 302, 0, 0, 303, 0, 0, 304, 0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 308, 0, 309, 0, 0, 0, 310, 0, 0, 0,
    0, 0, 0, 0, 0, 311, 0, 0, 312, 0, 313, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 322,
    0, 0, 0, 323, 0, 324, 0, 325, 0, 326, 0, 327, 0, 0, 0, 328, 0, 329, 0, 330, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 333, 0, 0, 334, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0,
    0, 339, 0, 340, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0, 0, 0, 342, 0, 343, 0, 344, 0, 345, 0, 0, 346, 0, 0, 0, 0, 347, 0,
    0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 351, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 355, 0,
    0, 0, 356, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360,
    0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0,
    0, 0, 370, 0, 0, 0, 0, 0, 0, 371, 0, 372, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 375, 0, 376, 0, 377, 0, 378, 0, 0, 0,
    379, 0, 380, 0, 381, 0, 382, 0, 383, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 387, 0, 388, 0, 0, 389, 0, 390, 0,
    0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 0, 393, 394, 0, 0, 395, 0, 396, 0, 0, 397, 0, 398, 0, 399, 0, 400, 0, 401, 0, 0,
    402, 0, 403, 0, 404, 0, 405, 0, 406, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 410, 0, 0, 411, 0, 412, 0, 0, 413,
    0, 414, 0, 0, 415, 0, 416, 0, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 0, 421, 422, 0, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0,
    426, 427, 0, 428, 0, 0, 0, 429, 0, 430, 0, 0, 0, 431, 432, 0, 433, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 436, 0, 0,
    0, 437, 438, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0,
    0, 0, 447, 0, 0, 448, 0, 0, 449, 0, 450, 451, 0, 452, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 458, 459, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0,
    0, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 468, 0, 469, 0, 0, 470, 0, 471, 0, 0, 0, 472, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 474, 0, 475, 0, 0, 0, 0, 0, 476, 0, 477, 0, 478, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0,
    0, 483, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 487, 0, 0, 0, 488, 0, 0, 489, 0, 0, 0, 0, 0,
    0, 0, 0, 490, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 495, 0, 496, 0, 497, 498, 0, 499,
    0, 500, 0, 501, 0, 502, 0, 0, 503, 0, 504, 0, 505, 0, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 510, 0, 511, 0, 512, 0, 513, 0,
    514, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0, 520, 0, 521, 0, 0, 0, 522, 0, 0,
    0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 0, 0, 0,
    0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 0, 535, 0, 536,
    0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 546, 547, 0, 548, 0, 0, 0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552,
    0, 0, 0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 0, 555, 0, 556, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 0, 559, 0, 560, 0, 561,
    0, 562, 0, 563, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 571, 0, 572, 0, 0, 573, 0, 574, 0, 0, 0, 575, 0,
    576, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0,
    0, 0, 0, 0, 582, 0, 583, 0, 0, 584, 0, 0, 0, 0, 585, 0, 586, 0, 0, 587, 0, 0, 0, 588, 0, 589, 0, 0, 0, 590, 0, 0,
    0, 591, 0, 0, 592, 0, 593, 0, 594, 0, 595, 0, 596, 0, 597, 0, 0, 0, 598, 0, 599, 0, 600, 0, 601, 0, 602, 0, 0, 0, 603, 0,
    0, 604, 0, 0, 605, 0, 606, 607, 0, 0, 608, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614,
    0, 615, 616, 0, 0, 617, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 620, 0, 621, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0,
    0, 0, 627, 0, 0, 628, 0, 0, 629, 0, 630, 631, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 636, 0, 0,
    637, 0, 0, 638, 0, 639, 640, 0, 0, 641, 0, 0, 0, 642, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 0, 646, 0, 0, 647, 0,
    648, 649, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 656,
    0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 0, 659, 0, 660, 0, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0,
    664, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 668, 0, 669, 0, 670, 0, 671, 672, 0, 673, 0, 674, 0,
    675, 0, 676, 0, 0, 0, 677, 0, 678, 0, 679, 0, 680, 0, 681, 0, 682, 0, 683, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0,
    0, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0,
    0, 0, 689, 0, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 693, 0, 0, 0, 694, 0, 695, 0, 696, 0, 0, 0, 0, 697, 0, 698, 0,
    699, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0, 703, 0, 0, 704, 0, 0, 0, 705, 0, 0, 0, 706, 0, 0, 707, 0,
    0, 0, 0, 0, 0, 0, 708, 0, 709, 0, 0, 0, 0, 710, 0, 711, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0,
    0, 0, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 718, 0, 719, 720, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 723, 724,
    0, 725, 0, 726, 0, 727, 0, 0, 728, 0, 0, 729, 0, 730, 0, 0, 731, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 733, 0, 734, 0, 735,
    0, 0, 736, 0, 0, 0, 737, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 741, 0, 742, 0, 743, 0, 744, 0, 0, 0, 745, 0, 746, 0, 747, 0, 748, 0, 749, 0, 750, 0, 751, 0, 752, 0, 753, 0, 754, 0, 0,
    755, 0, 756, 0, 757, 0, 0, 0, 758, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 761, 0, 762,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 766, 0, 0, 0, 767, 0,
    0, 768, 0, 769, 0, 770, 0, 0, 0, 771, 0, 772, 0, 773, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0,
    0, 0, 0, 0, 778, 779, 0, 780, 0, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0, 784, 785, 0, 786, 0, 0, 0, 0, 0,
    0, 787, 0, 788, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 792, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0,
    795, 0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0,
    801, 0, 802, 0, 0, 803, 0, 0, 0, 0, 804, 0, 0, 0, 0, 805, 0, 806, 0, 807, 0, 808, 0, 809, 0, 810, 0, 0, 0, 811, 0, 812,
    0, 0, 813, 0, 814, 0, 815, 0, 816, 0, 817, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 0, 0, 0,
    0, 822, 0, 823, 0, 0, 824, 0, 825, 0, 826, 0, 0, 0, 827, 0, 828, 0, 829, 0, 830, 0, 831, 0, 832, 0, 0, 833, 0, 834, 0, 835,
    0, 0, 0, 836, 0, 0, 837, 0, 0, 0, 838, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 0, 841, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 842, 0, 843, 0, 844, 0, 0, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 0, 850, 0, 851, 0, 852, 0, 853, 0, 854,
    0, 855, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0,
    0, 0, 861, 0, 862, 0, 863, 0, 864, 0, 865, 0, 866, 0, 0, 867, 0, 0, 0, 868, 0, 0, 869, 0, 0, 0, 0, 0, 0, 0, 0, 870,
    0, 0, 0, 0, 871, 0, 0, 0, 0, 0, 0, 0, 0, 0, 872, 0, 873, 0, 874, 0, 0, 0, 875, 0, 876, 0, 877, 0, 878, 0, 879, 0,
    880, 0, 881, 0, 0, 882, 0, 0, 0, 883, 0, 0, 0, 0, 884, 0, 885, 0, 0, 886, 0, 0, 887, 0, 0, 888, 0, 0, 0, 0, 889, 0,
    890, 0, 0, 891, 0, 0, 892, 0, 0, 893, 894, 0, 0, 895, 0, 896, 0, 897, 0, 0, 0, 0, 898, 0, 899, 0, 0, 0, 0, 900, 0, 901,
    0, 902, 0, 0, 0, 0, 0, 903, 0, 904, 0, 0, 0, 0, 0, 0, 905, 0, 906, 0, 0, 0, 907, 0, 0, 0, 908, 0, 0, 909, 0, 0,
    0, 0, 0, 0, 0, 910, 0, 0, 0, 0, 911, 0, 0, 0, 0, 0, 0, 912, 0, 0, 913, 0, 0, 0, 914, 0, 0, 0, 0, 915, 0, 916,
    0, 0, 917, 0, 0, 918, 0, 0, 919, 0, 920, 0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 0, 0, 0, 923, 924, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 925, 0, 0, 0, 926, 0, 0, 927, 0, 0, 0, 928, 0, 929, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 930, 0, 0, 0, 0, 0, 0, 931, 0, 932, 0, 0, 0, 0, 0, 933, 934, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 935, 0, 936, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 937, 0, 938, 0, 939, 0, 0, 0, 0, 0, 0, 940, 0, 941,
};
void recomp_unit_0078_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0893C000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0078[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0893C000;
    case 2u: goto L_0893C020;
    case 3u: goto L_0893C028;
    case 4u: goto L_0893C030;
    case 5u: goto L_0893C038;
    case 6u: goto L_0893C054;
    case 7u: goto L_0893C05C;
    case 8u: goto L_0893C064;
    case 9u: goto L_0893C084;
    case 10u: goto L_0893C08C;
    case 11u: goto L_0893C094;
    case 12u: goto L_0893C0B4;
    case 13u: goto L_0893C0BC;
    case 14u: goto L_0893C0C4;
    case 15u: goto L_0893C0E4;
    case 16u: goto L_0893C0EC;
    case 17u: goto L_0893C0F4;
    case 18u: goto L_0893C0F8;
    case 19u: goto L_0893C100;
    case 20u: goto L_0893C130;
    case 21u: goto L_0893C138;
    case 22u: goto L_0893C140;
    case 23u: goto L_0893C144;
    case 24u: goto L_0893C14C;
    case 25u: goto L_0893C178;
    case 26u: goto L_0893C180;
    case 27u: goto L_0893C184;
    case 28u: goto L_0893C18C;
    case 29u: goto L_0893C1B8;
    case 30u: goto L_0893C1EC;
    case 31u: goto L_0893C244;
    case 32u: goto L_0893C24C;
    case 33u: goto L_0893C254;
    case 34u: goto L_0893C260;
    case 35u: goto L_0893C28C;
    case 36u: goto L_0893C2BC;
    case 37u: goto L_0893C2C8;
    case 38u: goto L_0893C2D8;
    case 39u: goto L_0893C2E0;
    case 40u: goto L_0893C2E4;
    case 41u: goto L_0893C2EC;
    case 42u: goto L_0893C310;
    case 43u: goto L_0893C314;
    case 44u: goto L_0893C338;
    case 45u: goto L_0893C350;
    case 46u: goto L_0893C358;
    case 47u: goto L_0893C388;
    case 48u: goto L_0893C390;
    case 49u: goto L_0893C398;
    case 50u: goto L_0893C3A0;
    case 51u: goto L_0893C3D0;
    case 52u: goto L_0893C3D8;
    case 53u: goto L_0893C3E0;
    case 54u: goto L_0893C3E8;
    case 55u: goto L_0893C3F8;
    case 56u: goto L_0893C3FC;
    case 57u: goto L_0893C410;
    case 58u: goto L_0893C41C;
    case 59u: goto L_0893C434;
    case 60u: goto L_0893C440;
    case 61u: goto L_0893C458;
    case 62u: goto L_0893C480;
    case 63u: goto L_0893C488;
    case 64u: goto L_0893C49C;
    case 65u: goto L_0893C4DC;
    case 66u: goto L_0893C4F8;
    case 67u: goto L_0893C504;
    case 68u: goto L_0893C50C;
    case 69u: goto L_0893C51C;
    case 70u: goto L_0893C540;
    case 71u: goto L_0893C5A0;
    case 72u: goto L_0893C5B0;
    case 73u: goto L_0893C5B8;
    case 74u: goto L_0893C5C0;
    case 75u: goto L_0893C5C8;
    case 76u: goto L_0893C5D0;
    case 77u: goto L_0893C5D8;
    case 78u: goto L_0893C5E0;
    case 79u: goto L_0893C5E8;
    case 80u: goto L_0893C5F0;
    case 81u: goto L_0893C5F8;
    case 82u: goto L_0893C600;
    case 83u: goto L_0893C608;
    case 84u: goto L_0893C614;
    case 85u: goto L_0893C61C;
    case 86u: goto L_0893C640;
    case 87u: goto L_0893C648;
    case 88u: goto L_0893C654;
    case 89u: goto L_0893C664;
    case 90u: goto L_0893C698;
    case 91u: goto L_0893C6CC;
    case 92u: goto L_0893C6D4;
    case 93u: goto L_0893C6FC;
    case 94u: goto L_0893C700;
    case 95u: goto L_0893C710;
    case 96u: goto L_0893C734;
    case 97u: goto L_0893C754;
    case 98u: goto L_0893C758;
    case 99u: goto L_0893C780;
    case 100u: goto L_0893C798;
    case 101u: goto L_0893C7C4;
    case 102u: goto L_0893C7CC;
    case 103u: goto L_0893C7D4;
    case 104u: goto L_0893C7DC;
    case 105u: goto L_0893C7EC;
    case 106u: goto L_0893C7F0;
    case 107u: goto L_0893C804;
    case 108u: goto L_0893C824;
    case 109u: goto L_0893C848;
    case 110u: goto L_0893C874;
    case 111u: goto L_0893C87C;
    case 112u: goto L_0893C884;
    case 113u: goto L_0893C88C;
    case 114u: goto L_0893C89C;
    case 115u: goto L_0893C8A0;
    case 116u: goto L_0893C8B4;
    case 117u: goto L_0893C8C4;
    case 118u: goto L_0893C8DC;
    case 119u: goto L_0893C8E4;
    case 120u: goto L_0893C8EC;
    case 121u: goto L_0893C8F4;
    case 122u: goto L_0893C8FC;
    case 123u: goto L_0893C904;
    case 124u: goto L_0893C90C;
    case 125u: goto L_0893C914;
    case 126u: goto L_0893C91C;
    case 127u: goto L_0893C924;
    case 128u: goto L_0893C92C;
    case 129u: goto L_0893C934;
    case 130u: goto L_0893C93C;
    case 131u: goto L_0893C940;
    case 132u: goto L_0893C948;
    case 133u: goto L_0893C968;
    case 134u: goto L_0893C99C;
    case 135u: goto L_0893C9AC;
    case 136u: goto L_0893C9B4;
    case 137u: goto L_0893C9BC;
    case 138u: goto L_0893C9CC;
    case 139u: goto L_0893C9D4;
    case 140u: goto L_0893CA58;
    case 141u: goto L_0893CA60;
    case 142u: goto L_0893CAE8;
    case 143u: goto L_0893CAF8;
    case 144u: goto L_0893CB04;
    case 145u: goto L_0893CB14;
    case 146u: goto L_0893CB28;
    case 147u: goto L_0893CB40;
    case 148u: goto L_0893CB68;
    case 149u: goto L_0893CB9C;
    case 150u: goto L_0893CBA4;
    case 151u: goto L_0893CBA8;
    case 152u: goto L_0893CBB4;
    case 153u: goto L_0893CBBC;
    case 154u: goto L_0893CBC0;
    case 155u: goto L_0893CC48;
    case 156u: goto L_0893CC50;
    case 157u: goto L_0893CCD8;
    case 158u: goto L_0893CCE8;
    case 159u: goto L_0893CCF8;
    case 160u: goto L_0893CD08;
    case 161u: goto L_0893CD28;
    case 162u: goto L_0893CD34;
    case 163u: goto L_0893CD3C;
    case 164u: goto L_0893CD44;
    case 165u: goto L_0893CD4C;
    case 166u: goto L_0893CD5C;
    case 167u: goto L_0893CD84;
    case 168u: goto L_0893CD9C;
    case 169u: goto L_0893CDAC;
    case 170u: goto L_0893CDBC;
    case 171u: goto L_0893CDE0;
    case 172u: goto L_0893CE18;
    case 173u: goto L_0893CE38;
    case 174u: goto L_0893CE40;
    case 175u: goto L_0893CE48;
    case 176u: goto L_0893CE54;
    case 177u: goto L_0893CE68;
    case 178u: goto L_0893CE74;
    case 179u: goto L_0893CE90;
    case 180u: goto L_0893CEA0;
    case 181u: goto L_0893CEA8;
    case 182u: goto L_0893CF30;
    case 183u: goto L_0893CF3C;
    case 184u: goto L_0893CF50;
    case 185u: goto L_0893CF60;
    case 186u: goto L_0893CF70;
    case 187u: goto L_0893CF80;
    case 188u: goto L_0893CF90;
    case 189u: goto L_0893CFA0;
    case 190u: goto L_0893CFB0;
    case 191u: goto L_0893CFC0;
    case 192u: goto L_0893CFD0;
    case 193u: goto L_0893CFDC;
    case 194u: goto L_0893CFEC;
    case 195u: goto L_0893CFF8;
    case 196u: goto L_0893D008;
    case 197u: goto L_0893D014;
    case 198u: goto L_0893D024;
    case 199u: goto L_0893D030;
    case 200u: goto L_0893D03C;
    case 201u: goto L_0893D04C;
    case 202u: goto L_0893D058;
    case 203u: goto L_0893D068;
    case 204u: goto L_0893D074;
    case 205u: goto L_0893D084;
    case 206u: goto L_0893D090;
    case 207u: goto L_0893D09C;
    case 208u: goto L_0893D0A8;
    case 209u: goto L_0893D0B8;
    case 210u: goto L_0893D0C4;
    case 211u: goto L_0893D0CC;
    case 212u: goto L_0893D0D4;
    case 213u: goto L_0893D100;
    case 214u: goto L_0893D110;
    case 215u: goto L_0893D114;
    case 216u: goto L_0893D144;
    case 217u: goto L_0893D150;
    case 218u: goto L_0893D158;
    case 219u: goto L_0893D160;
    case 220u: goto L_0893D16C;
    case 221u: goto L_0893D178;
    case 222u: goto L_0893D188;
    case 223u: goto L_0893D18C;
    case 224u: goto L_0893D1A8;
    case 225u: goto L_0893D1B0;
    case 226u: goto L_0893D1B8;
    case 227u: goto L_0893D1C4;
    case 228u: goto L_0893D1D0;
    case 229u: goto L_0893D1E0;
    case 230u: goto L_0893D1E8;
    case 231u: goto L_0893D1F4;
    case 232u: goto L_0893D200;
    case 233u: goto L_0893D20C;
    case 234u: goto L_0893D21C;
    case 235u: goto L_0893D224;
    case 236u: goto L_0893D22C;
    case 237u: goto L_0893D2E4;
    case 238u: goto L_0893D2F4;
    case 239u: goto L_0893D300;
    case 240u: goto L_0893D314;
    case 241u: goto L_0893D320;
    case 242u: goto L_0893D334;
    case 243u: goto L_0893D340;
    case 244u: goto L_0893D354;
    case 245u: goto L_0893D360;
    case 246u: goto L_0893D374;
    case 247u: goto L_0893D380;
    case 248u: goto L_0893D394;
    case 249u: goto L_0893D3A0;
    case 250u: goto L_0893D3B0;
    case 251u: goto L_0893D3BC;
    case 252u: goto L_0893D3CC;
    case 253u: goto L_0893D3D8;
    case 254u: goto L_0893D3EC;
    case 255u: goto L_0893D404;
    case 256u: goto L_0893D41C;
    case 257u: goto L_0893D434;
    case 258u: goto L_0893D440;
    case 259u: goto L_0893D448;
    case 260u: goto L_0893D450;
    case 261u: goto L_0893D460;
    case 262u: goto L_0893D470;
    case 263u: goto L_0893D47C;
    case 264u: goto L_0893D494;
    case 265u: goto L_0893D4A0;
    case 266u: goto L_0893D4AC;
    case 267u: goto L_0893D4B8;
    case 268u: goto L_0893D4C4;
    case 269u: goto L_0893D4D4;
    case 270u: goto L_0893D4E0;
    case 271u: goto L_0893D4E8;
    case 272u: goto L_0893D4F0;
    case 273u: goto L_0893D4F4;
    case 274u: goto L_0893D510;
    case 275u: goto L_0893D558;
    case 276u: goto L_0893D568;
    case 277u: goto L_0893D578;
    case 278u: goto L_0893D580;
    case 279u: goto L_0893D588;
    case 280u: goto L_0893D598;
    case 281u: goto L_0893D5A0;
    case 282u: goto L_0893D5A8;
    case 283u: goto L_0893D5B4;
    case 284u: goto L_0893D5BC;
    case 285u: goto L_0893D5C4;
    case 286u: goto L_0893D5D8;
    case 287u: goto L_0893D5E4;
    case 288u: goto L_0893D5FC;
    case 289u: goto L_0893D604;
    case 290u: goto L_0893D614;
    case 291u: goto L_0893D61C;
    case 292u: goto L_0893D628;
    case 293u: goto L_0893D638;
    case 294u: goto L_0893D670;
    case 295u: goto L_0893D694;
    case 296u: goto L_0893D6B8;
    case 297u: goto L_0893D6DC;
    case 298u: goto L_0893D6E0;
    case 299u: goto L_0893D6E8;
    case 300u: goto L_0893D700;
    case 301u: goto L_0893D708;
    case 302u: goto L_0893D714;
    case 303u: goto L_0893D720;
    case 304u: goto L_0893D72C;
    case 305u: goto L_0893D734;
    case 306u: goto L_0893D73C;
    case 307u: goto L_0893D74C;
    case 308u: goto L_0893D758;
    case 309u: goto L_0893D760;
    case 310u: goto L_0893D770;
    case 311u: goto L_0893D794;
    case 312u: goto L_0893D7A0;
    case 313u: goto L_0893D7A8;
    case 314u: goto L_0893D7B8;
    case 315u: goto L_0893D7E0;
    case 316u: goto L_0893D7F0;
    case 317u: goto L_0893D7FC;
    case 318u: goto L_0893D820;
    case 319u: goto L_0893D82C;
    case 320u: goto L_0893D850;
    case 321u: goto L_0893D864;
    case 322u: goto L_0893D87C;
    case 323u: goto L_0893D88C;
    case 324u: goto L_0893D894;
    case 325u: goto L_0893D89C;
    case 326u: goto L_0893D8A4;
    case 327u: goto L_0893D8AC;
    case 328u: goto L_0893D8BC;
    case 329u: goto L_0893D8C4;
    case 330u: goto L_0893D8CC;
    case 331u: goto L_0893D8D4;
    case 332u: goto L_0893D8DC;
    case 333u: goto L_0893D910;
    case 334u: goto L_0893D91C;
    case 335u: goto L_0893D92C;
    case 336u: goto L_0893D93C;
    case 337u: goto L_0893D950;
    case 338u: goto L_0893D968;
    case 339u: goto L_0893D984;
    case 340u: goto L_0893D98C;
    case 341u: goto L_0893D9A4;
    case 342u: goto L_0893D9C0;
    case 343u: goto L_0893D9C8;
    case 344u: goto L_0893D9D0;
    case 345u: goto L_0893D9D8;
    case 346u: goto L_0893D9E4;
    case 347u: goto L_0893D9F8;
    case 348u: goto L_0893DA10;
    case 349u: goto L_0893DA3C;
    case 350u: goto L_0893DA44;
    case 351u: goto L_0893DA4C;
    case 352u: goto L_0893DA54;
    case 353u: goto L_0893DA5C;
    case 354u: goto L_0893DA68;
    case 355u: goto L_0893DA78;
    case 356u: goto L_0893DA88;
    case 357u: goto L_0893DA94;
    case 358u: goto L_0893DAB4;
    case 359u: goto L_0893DAC8;
    case 360u: goto L_0893DAFC;
    case 361u: goto L_0893DB04;
    case 362u: goto L_0893DB0C;
    case 363u: goto L_0893DB14;
    case 364u: goto L_0893DB1C;
    case 365u: goto L_0893DB24;
    case 366u: goto L_0893DB30;
    case 367u: goto L_0893DB38;
    case 368u: goto L_0893DB60;
    case 369u: goto L_0893DB68;
    case 370u: goto L_0893DB88;
    case 371u: goto L_0893DBA4;
    case 372u: goto L_0893DBAC;
    case 373u: goto L_0893DBB8;
    case 374u: goto L_0893DBC0;
    case 375u: goto L_0893DBD8;
    case 376u: goto L_0893DBE0;
    case 377u: goto L_0893DBE8;
    case 378u: goto L_0893DBF0;
    case 379u: goto L_0893DC00;
    case 380u: goto L_0893DC08;
    case 381u: goto L_0893DC10;
    case 382u: goto L_0893DC18;
    case 383u: goto L_0893DC20;
    case 384u: goto L_0893DC28;
    case 385u: goto L_0893DC3C;
    case 386u: goto L_0893DC54;
    case 387u: goto L_0893DC5C;
    case 388u: goto L_0893DC64;
    case 389u: goto L_0893DC70;
    case 390u: goto L_0893DC78;
    case 391u: goto L_0893DC88;
    case 392u: goto L_0893DC90;
    case 393u: goto L_0893DCB0;
    case 394u: goto L_0893DCB4;
    case 395u: goto L_0893DCC0;
    case 396u: goto L_0893DCC8;
    case 397u: goto L_0893DCD4;
    case 398u: goto L_0893DCDC;
    case 399u: goto L_0893DCE4;
    case 400u: goto L_0893DCEC;
    case 401u: goto L_0893DCF4;
    case 402u: goto L_0893DD00;
    case 403u: goto L_0893DD08;
    case 404u: goto L_0893DD10;
    case 405u: goto L_0893DD18;
    case 406u: goto L_0893DD20;
    case 407u: goto L_0893DD28;
    case 408u: goto L_0893DD3C;
    case 409u: goto L_0893DD54;
    case 410u: goto L_0893DD5C;
    case 411u: goto L_0893DD68;
    case 412u: goto L_0893DD70;
    case 413u: goto L_0893DD7C;
    case 414u: goto L_0893DD84;
    case 415u: goto L_0893DD90;
    case 416u: goto L_0893DD98;
    case 417u: goto L_0893DDA4;
    case 418u: goto L_0893DDAC;
    case 419u: goto L_0893DDB8;
    case 420u: goto L_0893DDC0;
    case 421u: goto L_0893DDCC;
    case 422u: goto L_0893DDD0;
    case 423u: goto L_0893DDDC;
    case 424u: goto L_0893DDE8;
    case 425u: goto L_0893DDF0;
    case 426u: goto L_0893DE00;
    case 427u: goto L_0893DE04;
    case 428u: goto L_0893DE0C;
    case 429u: goto L_0893DE1C;
    case 430u: goto L_0893DE24;
    case 431u: goto L_0893DE34;
    case 432u: goto L_0893DE38;
    case 433u: goto L_0893DE40;
    case 434u: goto L_0893DE48;
    case 435u: goto L_0893DE60;
    case 436u: goto L_0893DE74;
    case 437u: goto L_0893DE84;
    case 438u: goto L_0893DE88;
    case 439u: goto L_0893DE94;
    case 440u: goto L_0893DE9C;
    case 441u: goto L_0893DEAC;
    case 442u: goto L_0893DEB4;
    case 443u: goto L_0893DEC4;
    case 444u: goto L_0893DECC;
    case 445u: goto L_0893DEE4;
    case 446u: goto L_0893DEF8;
    case 447u: goto L_0893DF08;
    case 448u: goto L_0893DF14;
    case 449u: goto L_0893DF20;
    case 450u: goto L_0893DF28;
    case 451u: goto L_0893DF2C;
    case 452u: goto L_0893DF34;
    case 453u: goto L_0893DF40;
    case 454u: goto L_0893DF48;
    case 455u: goto L_0893E130;
    case 456u: goto L_0893E1A4;
    case 457u: goto L_0893E1A8;
    case 458u: goto L_0893E21C;
    case 459u: goto L_0893E220;
    case 460u: goto L_0893E230;
    case 461u: goto L_0893E308;
    case 462u: goto L_0893E3C4;
    case 463u: goto L_0893E3F0;
    case 464u: goto L_0893E408;
    case 465u: goto L_0893E434;
    case 466u: goto L_0893E444;
    case 467u: goto L_0893E4A8;
    case 468u: goto L_0893E4C0;
    case 469u: goto L_0893E4C8;
    case 470u: goto L_0893E4D4;
    case 471u: goto L_0893E4DC;
    case 472u: goto L_0893E4EC;
    case 473u: goto L_0893E528;
    case 474u: goto L_0893E584;
    case 475u: goto L_0893E58C;
    case 476u: goto L_0893E5A4;
    case 477u: goto L_0893E5AC;
    case 478u: goto L_0893E5B4;
    case 479u: goto L_0893E5BC;
    case 480u: goto L_0893E5CC;
    case 481u: goto L_0893E5E4;
    case 482u: goto L_0893E5EC;
    case 483u: goto L_0893E604;
    case 484u: goto L_0893E610;
    case 485u: goto L_0893E638;
    case 486u: goto L_0893E640;
    case 487u: goto L_0893E64C;
    case 488u: goto L_0893E65C;
    case 489u: goto L_0893E668;
    case 490u: goto L_0893E68C;
    case 491u: goto L_0893E6A0;
    case 492u: goto L_0893E6C8;
    case 493u: goto L_0893E6D0;
    case 494u: goto L_0893E6D8;
    case 495u: goto L_0893E6E0;
    case 496u: goto L_0893E6E8;
    case 497u: goto L_0893E6F0;
    case 498u: goto L_0893E6F4;
    case 499u: goto L_0893E6FC;
    case 500u: goto L_0893E704;
    case 501u: goto L_0893E70C;
    case 502u: goto L_0893E714;
    case 503u: goto L_0893E720;
    case 504u: goto L_0893E728;
    case 505u: goto L_0893E730;
    case 506u: goto L_0893E740;
    case 507u: goto L_0893E748;
    case 508u: goto L_0893E750;
    case 509u: goto L_0893E758;
    case 510u: goto L_0893E760;
    case 511u: goto L_0893E768;
    case 512u: goto L_0893E770;
    case 513u: goto L_0893E778;
    case 514u: goto L_0893E780;
    case 515u: goto L_0893E78C;
    case 516u: goto L_0893E798;
    case 517u: goto L_0893E7B0;
    case 518u: goto L_0893E7CC;
    case 519u: goto L_0893E7D4;
    case 520u: goto L_0893E7DC;
    case 521u: goto L_0893E7E4;
    case 522u: goto L_0893E7F4;
    case 523u: goto L_0893E804;
    case 524u: goto L_0893E838;
    case 525u: goto L_0893E848;
    case 526u: goto L_0893E858;
    case 527u: goto L_0893E86C;
    case 528u: goto L_0893E884;
    case 529u: goto L_0893E8A0;
    case 530u: goto L_0893E8A8;
    case 531u: goto L_0893E8C0;
    case 532u: goto L_0893E8DC;
    case 533u: goto L_0893E8E4;
    case 534u: goto L_0893E8EC;
    case 535u: goto L_0893E8F4;
    case 536u: goto L_0893E8FC;
    case 537u: goto L_0893E908;
    case 538u: goto L_0893E918;
    case 539u: goto L_0893E928;
    case 540u: goto L_0893E934;
    case 541u: goto L_0893E954;
    case 542u: goto L_0893E968;
    case 543u: goto L_0893E99C;
    case 544u: goto L_0893E9A4;
    case 545u: goto L_0893E9AC;
    case 546u: goto L_0893E9B4;
    case 547u: goto L_0893E9B8;
    case 548u: goto L_0893E9C0;
    case 549u: goto L_0893E9D0;
    case 550u: goto L_0893E9DC;
    case 551u: goto L_0893E9E4;
    case 552u: goto L_0893E9FC;
    case 553u: goto L_0893EA0C;
    case 554u: goto L_0893EA28;
    case 555u: goto L_0893EA34;
    case 556u: goto L_0893EA3C;
    case 557u: goto L_0893EA4C;
    case 558u: goto L_0893EA58;
    case 559u: goto L_0893EA6C;
    case 560u: goto L_0893EA74;
    case 561u: goto L_0893EA7C;
    case 562u: goto L_0893EA84;
    case 563u: goto L_0893EA8C;
    case 564u: goto L_0893EAA0;
    case 565u: goto L_0893EAA8;
    case 566u: goto L_0893EABC;
    case 567u: goto L_0893EAD4;
    case 568u: goto L_0893EB10;
    case 569u: goto L_0893EB3C;
    case 570u: goto L_0893EB44;
    case 571u: goto L_0893EB4C;
    case 572u: goto L_0893EB54;
    case 573u: goto L_0893EB60;
    case 574u: goto L_0893EB68;
    case 575u: goto L_0893EB78;
    case 576u: goto L_0893EB80;
    case 577u: goto L_0893EBAC;
    case 578u: goto L_0893EBB4;
    case 579u: goto L_0893EBCC;
    case 580u: goto L_0893EBE4;
    case 581u: goto L_0893EBEC;
    case 582u: goto L_0893EC10;
    case 583u: goto L_0893EC18;
    case 584u: goto L_0893EC24;
    case 585u: goto L_0893EC38;
    case 586u: goto L_0893EC40;
    case 587u: goto L_0893EC4C;
    case 588u: goto L_0893EC5C;
    case 589u: goto L_0893EC64;
    case 590u: goto L_0893EC74;
    case 591u: goto L_0893EC84;
    case 592u: goto L_0893EC90;
    case 593u: goto L_0893EC98;
    case 594u: goto L_0893ECA0;
    case 595u: goto L_0893ECA8;
    case 596u: goto L_0893ECB0;
    case 597u: goto L_0893ECB8;
    case 598u: goto L_0893ECC8;
    case 599u: goto L_0893ECD0;
    case 600u: goto L_0893ECD8;
    case 601u: goto L_0893ECE0;
    case 602u: goto L_0893ECE8;
    case 603u: goto L_0893ECF8;
    case 604u: goto L_0893ED04;
    case 605u: goto L_0893ED10;
    case 606u: goto L_0893ED18;
    case 607u: goto L_0893ED1C;
    case 608u: goto L_0893ED28;
    case 609u: goto L_0893ED38;
    case 610u: goto L_0893ED4C;
    case 611u: goto L_0893ED54;
    case 612u: goto L_0893ED64;
    case 613u: goto L_0893ED70;
    case 614u: goto L_0893ED7C;
    case 615u: goto L_0893ED84;
    case 616u: goto L_0893ED88;
    case 617u: goto L_0893ED94;
    case 618u: goto L_0893EDA4;
    case 619u: goto L_0893EDB8;
    case 620u: goto L_0893EDC0;
    case 621u: goto L_0893EDC8;
    case 622u: goto L_0893EDD8;
    case 623u: goto L_0893EDE0;
    case 624u: goto L_0893EDE8;
    case 625u: goto L_0893EDF0;
    case 626u: goto L_0893EDF8;
    case 627u: goto L_0893EE08;
    case 628u: goto L_0893EE14;
    case 629u: goto L_0893EE20;
    case 630u: goto L_0893EE28;
    case 631u: goto L_0893EE2C;
    case 632u: goto L_0893EE38;
    case 633u: goto L_0893EE48;
    case 634u: goto L_0893EE5C;
    case 635u: goto L_0893EE64;
    case 636u: goto L_0893EE74;
    case 637u: goto L_0893EE80;
    case 638u: goto L_0893EE8C;
    case 639u: goto L_0893EE94;
    case 640u: goto L_0893EE98;
    case 641u: goto L_0893EEA4;
    case 642u: goto L_0893EEB4;
    case 643u: goto L_0893EEC8;
    case 644u: goto L_0893EED0;
    case 645u: goto L_0893EEE0;
    case 646u: goto L_0893EEEC;
    case 647u: goto L_0893EEF8;
    case 648u: goto L_0893EF00;
    case 649u: goto L_0893EF04;
    case 650u: goto L_0893EF10;
    case 651u: goto L_0893EF20;
    case 652u: goto L_0893EF34;
    case 653u: goto L_0893EF44;
    case 654u: goto L_0893EF5C;
    case 655u: goto L_0893EF64;
    case 656u: goto L_0893EF7C;
    case 657u: goto L_0893EF84;
    case 658u: goto L_0893EF98;
    case 659u: goto L_0893EFAC;
    case 660u: goto L_0893EFB4;
    case 661u: goto L_0893EFC0;
    case 662u: goto L_0893EFD0;
    case 663u: goto L_0893EFDC;
    case 664u: goto L_0893F000;
    case 665u: goto L_0893F014;
    case 666u: goto L_0893F03C;
    case 667u: goto L_0893F044;
    case 668u: goto L_0893F04C;
    case 669u: goto L_0893F054;
    case 670u: goto L_0893F05C;
    case 671u: goto L_0893F064;
    case 672u: goto L_0893F068;
    case 673u: goto L_0893F070;
    case 674u: goto L_0893F078;
    case 675u: goto L_0893F080;
    case 676u: goto L_0893F088;
    case 677u: goto L_0893F098;
    case 678u: goto L_0893F0A0;
    case 679u: goto L_0893F0A8;
    case 680u: goto L_0893F0B0;
    case 681u: goto L_0893F0B8;
    case 682u: goto L_0893F0C0;
    case 683u: goto L_0893F0C8;
    case 684u: goto L_0893F0D0;
    case 685u: goto L_0893F0F8;
    case 686u: goto L_0893F11C;
    case 687u: goto L_0893F13C;
    case 688u: goto L_0893F174;
    case 689u: goto L_0893F188;
    case 690u: goto L_0893F194;
    case 691u: goto L_0893F19C;
    case 692u: goto L_0893F1B0;
    case 693u: goto L_0893F1BC;
    case 694u: goto L_0893F1CC;
    case 695u: goto L_0893F1D4;
    case 696u: goto L_0893F1DC;
    case 697u: goto L_0893F1F0;
    case 698u: goto L_0893F1F8;
    case 699u: goto L_0893F200;
    case 700u: goto L_0893F210;
    case 701u: goto L_0893F22C;
    case 702u: goto L_0893F234;
    case 703u: goto L_0893F240;
    case 704u: goto L_0893F24C;
    case 705u: goto L_0893F25C;
    case 706u: goto L_0893F26C;
    case 707u: goto L_0893F278;
    case 708u: goto L_0893F298;
    case 709u: goto L_0893F2A0;
    case 710u: goto L_0893F2B4;
    case 711u: goto L_0893F2BC;
    case 712u: goto L_0893F2C8;
    case 713u: goto L_0893F2D4;
    case 714u: goto L_0893F2EC;
    case 715u: goto L_0893F30C;
    case 716u: goto L_0893F318;
    case 717u: goto L_0893F324;
    case 718u: goto L_0893F338;
    case 719u: goto L_0893F340;
    case 720u: goto L_0893F344;
    case 721u: goto L_0893F34C;
    case 722u: goto L_0893F360;
    case 723u: goto L_0893F378;
    case 724u: goto L_0893F37C;
    case 725u: goto L_0893F384;
    case 726u: goto L_0893F38C;
    case 727u: goto L_0893F394;
    case 728u: goto L_0893F3A0;
    case 729u: goto L_0893F3AC;
    case 730u: goto L_0893F3B4;
    case 731u: goto L_0893F3C0;
    case 732u: goto L_0893F3D4;
    case 733u: goto L_0893F3EC;
    case 734u: goto L_0893F3F4;
    case 735u: goto L_0893F3FC;
    case 736u: goto L_0893F408;
    case 737u: goto L_0893F418;
    case 738u: goto L_0893F424;
    case 739u: goto L_0893F448;
    case 740u: goto L_0893F45C;
    case 741u: goto L_0893F484;
    case 742u: goto L_0893F48C;
    case 743u: goto L_0893F494;
    case 744u: goto L_0893F49C;
    case 745u: goto L_0893F4AC;
    case 746u: goto L_0893F4B4;
    case 747u: goto L_0893F4BC;
    case 748u: goto L_0893F4C4;
    case 749u: goto L_0893F4CC;
    case 750u: goto L_0893F4D4;
    case 751u: goto L_0893F4DC;
    case 752u: goto L_0893F4E4;
    case 753u: goto L_0893F4EC;
    case 754u: goto L_0893F4F4;
    case 755u: goto L_0893F500;
    case 756u: goto L_0893F508;
    case 757u: goto L_0893F510;
    case 758u: goto L_0893F520;
    case 759u: goto L_0893F528;
    case 760u: goto L_0893F55C;
    case 761u: goto L_0893F574;
    case 762u: goto L_0893F57C;
    case 763u: goto L_0893F5B0;
    case 764u: goto L_0893F5C8;
    case 765u: goto L_0893F5D0;
    case 766u: goto L_0893F5E8;
    case 767u: goto L_0893F5F8;
    case 768u: goto L_0893F604;
    case 769u: goto L_0893F60C;
    case 770u: goto L_0893F614;
    case 771u: goto L_0893F624;
    case 772u: goto L_0893F62C;
    case 773u: goto L_0893F634;
    case 774u: goto L_0893F648;
    case 775u: goto L_0893F650;
    case 776u: goto L_0893F664;
    case 777u: goto L_0893F678;
    case 778u: goto L_0893F690;
    case 779u: goto L_0893F694;
    case 780u: goto L_0893F69C;
    case 781u: goto L_0893F6AC;
    case 782u: goto L_0893F6B8;
    case 783u: goto L_0893F6C4;
    case 784u: goto L_0893F6DC;
    case 785u: goto L_0893F6E0;
    case 786u: goto L_0893F6E8;
    case 787u: goto L_0893F704;
    case 788u: goto L_0893F70C;
    case 789u: goto L_0893F71C;
    case 790u: goto L_0893F740;
    case 791u: goto L_0893F748;
    case 792u: goto L_0893F754;
    case 793u: goto L_0893F760;
    case 794u: goto L_0893F770;
    case 795u: goto L_0893F780;
    case 796u: goto L_0893F78C;
    case 797u: goto L_0893F7AC;
    case 798u: goto L_0893F7C0;
    case 799u: goto L_0893F7E4;
    case 800u: goto L_0893F7F0;
    case 801u: goto L_0893F800;
    case 802u: goto L_0893F808;
    case 803u: goto L_0893F814;
    case 804u: goto L_0893F828;
    case 805u: goto L_0893F83C;
    case 806u: goto L_0893F844;
    case 807u: goto L_0893F84C;
    case 808u: goto L_0893F854;
    case 809u: goto L_0893F85C;
    case 810u: goto L_0893F864;
    case 811u: goto L_0893F874;
    case 812u: goto L_0893F87C;
    case 813u: goto L_0893F888;
    case 814u: goto L_0893F890;
    case 815u: goto L_0893F898;
    case 816u: goto L_0893F8A0;
    case 817u: goto L_0893F8A8;
    case 818u: goto L_0893F8B4;
    case 819u: goto L_0893F8C8;
    case 820u: goto L_0893F8E0;
    case 821u: goto L_0893F8E8;
    case 822u: goto L_0893F904;
    case 823u: goto L_0893F90C;
    case 824u: goto L_0893F918;
    case 825u: goto L_0893F920;
    case 826u: goto L_0893F928;
    case 827u: goto L_0893F938;
    case 828u: goto L_0893F940;
    case 829u: goto L_0893F948;
    case 830u: goto L_0893F950;
    case 831u: goto L_0893F958;
    case 832u: goto L_0893F960;
    case 833u: goto L_0893F96C;
    case 834u: goto L_0893F974;
    case 835u: goto L_0893F97C;
    case 836u: goto L_0893F98C;
    case 837u: goto L_0893F998;
    case 838u: goto L_0893F9A8;
    case 839u: goto L_0893F9B4;
    case 840u: goto L_0893F9D8;
    case 841u: goto L_0893F9EC;
    case 842u: goto L_0893FA14;
    case 843u: goto L_0893FA1C;
    case 844u: goto L_0893FA24;
    case 845u: goto L_0893FA34;
    case 846u: goto L_0893FA3C;
    case 847u: goto L_0893FA44;
    case 848u: goto L_0893FA4C;
    case 849u: goto L_0893FA54;
    case 850u: goto L_0893FA5C;
    case 851u: goto L_0893FA64;
    case 852u: goto L_0893FA6C;
    case 853u: goto L_0893FA74;
    case 854u: goto L_0893FA7C;
    case 855u: goto L_0893FA84;
    case 856u: goto L_0893FA94;
    case 857u: goto L_0893FAA4;
    case 858u: goto L_0893FAB0;
    case 859u: goto L_0893FAD0;
    case 860u: goto L_0893FAE4;
    case 861u: goto L_0893FB08;
    case 862u: goto L_0893FB10;
    case 863u: goto L_0893FB18;
    case 864u: goto L_0893FB20;
    case 865u: goto L_0893FB28;
    case 866u: goto L_0893FB30;
    case 867u: goto L_0893FB3C;
    case 868u: goto L_0893FB4C;
    case 869u: goto L_0893FB58;
    case 870u: goto L_0893FB7C;
    case 871u: goto L_0893FB90;
    case 872u: goto L_0893FBB8;
    case 873u: goto L_0893FBC0;
    case 874u: goto L_0893FBC8;
    case 875u: goto L_0893FBD8;
    case 876u: goto L_0893FBE0;
    case 877u: goto L_0893FBE8;
    case 878u: goto L_0893FBF0;
    case 879u: goto L_0893FBF8;
    case 880u: goto L_0893FC00;
    case 881u: goto L_0893FC08;
    case 882u: goto L_0893FC14;
    case 883u: goto L_0893FC24;
    case 884u: goto L_0893FC38;
    case 885u: goto L_0893FC40;
    case 886u: goto L_0893FC4C;
    case 887u: goto L_0893FC58;
    case 888u: goto L_0893FC64;
    case 889u: goto L_0893FC78;
    case 890u: goto L_0893FC80;
    case 891u: goto L_0893FC8C;
    case 892u: goto L_0893FC98;
    case 893u: goto L_0893FCA4;
    case 894u: goto L_0893FCA8;
    case 895u: goto L_0893FCB4;
    case 896u: goto L_0893FCBC;
    case 897u: goto L_0893FCC4;
    case 898u: goto L_0893FCD8;
    case 899u: goto L_0893FCE0;
    case 900u: goto L_0893FCF4;
    case 901u: goto L_0893FCFC;
    case 902u: goto L_0893FD04;
    case 903u: goto L_0893FD1C;
    case 904u: goto L_0893FD24;
    case 905u: goto L_0893FD40;
    case 906u: goto L_0893FD48;
    case 907u: goto L_0893FD58;
    case 908u: goto L_0893FD68;
    case 909u: goto L_0893FD74;
    case 910u: goto L_0893FD94;
    case 911u: goto L_0893FDA8;
    case 912u: goto L_0893FDC4;
    case 913u: goto L_0893FDD0;
    case 914u: goto L_0893FDE0;
    case 915u: goto L_0893FDF4;
    case 916u: goto L_0893FDFC;
    case 917u: goto L_0893FE08;
    case 918u: goto L_0893FE14;
    case 919u: goto L_0893FE20;
    case 920u: goto L_0893FE28;
    case 921u: goto L_0893FE34;
    case 922u: goto L_0893FE54;
    case 923u: goto L_0893FE70;
    case 924u: goto L_0893FE74;
    case 925u: goto L_0893FEA4;
    case 926u: goto L_0893FEB4;
    case 927u: goto L_0893FEC0;
    case 928u: goto L_0893FED0;
    case 929u: goto L_0893FED8;
    case 930u: goto L_0893FF14;
    case 931u: goto L_0893FF30;
    case 932u: goto L_0893FF38;
    case 933u: goto L_0893FF50;
    case 934u: goto L_0893FF54;
    case 935u: goto L_0893FF84;
    case 936u: goto L_0893FF8C;
    case 937u: goto L_0893FFC0;
    case 938u: goto L_0893FFC8;
    case 939u: goto L_0893FFD0;
    case 940u: goto L_0893FFEC;
    case 941u: goto L_0893FFF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0893C000:
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_0893C0C4;
      }
      goto L_0893C020;
    }
L_0893C020:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 9u);
      if (branch_taken) {
          goto L_0893C094;
      }
      goto L_0893C028;
    }
L_0893C028:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_0893C064;
      }
      goto L_0893C030;
    }
L_0893C030:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0893C0F4;
      }
      goto L_0893C038;
    }
L_0893C038:
    ctx.gpr[6] = (2276u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30344)));
    ctx.gpr[4] = (ctx.gpr[4] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C05C;
      }
      goto L_0893C054;
    }
L_0893C054:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0F4;
      }
      goto L_0893C05C;
    }
L_0893C05C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C0F8;
      }
      goto L_0893C064;
    }
L_0893C064:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30344));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C08C;
      }
      goto L_0893C084;
    }
L_0893C084:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0F4;
      }
      goto L_0893C08C;
    }
L_0893C08C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C0F8;
      }
      goto L_0893C094;
    }
L_0893C094:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30344));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0BC;
      }
      goto L_0893C0B4;
    }
L_0893C0B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0F4;
      }
      goto L_0893C0BC;
    }
L_0893C0BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C0F8;
      }
      goto L_0893C0C4;
    }
L_0893C0C4:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30344));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0EC;
      }
      goto L_0893C0E4;
    }
L_0893C0E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C0F4;
      }
      goto L_0893C0EC;
    }
L_0893C0EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C0F8;
      }
      goto L_0893C0F4;
    }
L_0893C0F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C0F8;
L_0893C0F8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C100:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 4u);
      if (branch_taken) {
          goto L_0893C138;
      }
      goto L_0893C130;
    }
L_0893C130:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893C140;
      }
      goto L_0893C138;
    }
L_0893C138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C144;
      }
      goto L_0893C140;
    }
L_0893C140:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C144;
L_0893C144:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C14C:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C180;
      }
      goto L_0893C178;
    }
L_0893C178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C184;
      }
      goto L_0893C180;
    }
L_0893C180:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C184;
L_0893C184:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C18C:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(0u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C1B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C254;
      }
      goto L_0893C1EC;
    }
L_0893C1EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(120));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(116));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893C24C;
      }
      goto L_0893C244;
    }
L_0893C244:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893C24C;
      }
      goto L_0893C24C;
    }
L_0893C24C:
    ctx.gpr[31] = (0x0893C254u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893C254u) goto L_0893C254;
    return;
L_0893C254:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C260:
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C28C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11600));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893C2BCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 131u, 0x089388DCu>(ctx, &aot_mem) && ctx.pc == 0x0893C2BCu) goto L_0893C2BC;
    return;
L_0893C2BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C2C8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6856)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893C2E0;
      }
      goto L_0893C2D8;
    }
L_0893C2D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C2E4;
      }
      goto L_0893C2E0;
    }
L_0893C2E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C2E4;
L_0893C2E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C2EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C3F8;
      }
      goto L_0893C310;
    }
L_0893C310:
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    goto L_0893C314;
L_0893C314:
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(23) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C3A0;
      }
      goto L_0893C338;
    }
L_0893C338:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30560)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C350:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C3E8;
      }
      goto L_0893C358;
    }
L_0893C358:
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[31] = (0x0893C388u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 661u, 0x0893B5B4u>(ctx, &aot_mem) && ctx.pc == 0x0893C388u) goto L_0893C388;
    return;
L_0893C388:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C398;
      }
      goto L_0893C390;
    }
L_0893C390:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C3E8;
      }
      goto L_0893C398;
    }
L_0893C398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C3FC;
      }
      goto L_0893C3A0;
    }
L_0893C3A0:
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
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
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[31] = (0x0893C3D0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 661u, 0x0893B5B4u>(ctx, &aot_mem) && ctx.pc == 0x0893C3D0u) goto L_0893C3D0;
    return;
L_0893C3D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C3E0;
      }
      goto L_0893C3D8;
    }
L_0893C3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C3E8;
      }
      goto L_0893C3E0;
    }
L_0893C3E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C3FC;
      }
      goto L_0893C3E8;
    }
L_0893C3E8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
      if (branch_taken) {
          goto L_0893C314;
      }
      goto L_0893C3F8;
    }
L_0893C3F8:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C3FC;
L_0893C3FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C410:
    ctx.gpr[4] = (2230u << 16u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6852)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C41C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893C434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C434u) goto L_0893C434;
    return;
L_0893C434:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0893C440u);
    ctx.gpr[4] = (0u | 34u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 294u, 0x0894DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C440u) goto L_0893C440;
    return;
L_0893C440:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893C458u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x0893C458u) goto L_0893C458;
    return;
L_0893C458:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1432), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1708)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893C488;
      }
      goto L_0893C480;
    }
L_0893C480:
    ctx.gpr[4] = (0u | 34u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1708), ctx.gpr[4]);
    goto L_0893C488;
L_0893C488:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C49C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (15820u << 16u);
    ctx.fpr[0] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    jump_target = ctx.gpr[31];
    ctx.fpr[0] = ctx.fpr[0] - ctx.fpr[14];
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C4DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11600));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    goto L_0893C4F8;
L_0893C4F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C50C;
      }
      goto L_0893C504;
    }
L_0893C504:
    ctx.gpr[31] = (0x0893C50Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 390u, 0x08941B5Cu>(ctx, &aot_mem) && ctx.pc == 0x0893C50Cu) goto L_0893C50C;
    return;
L_0893C50C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893C4F8;
      }
      goto L_0893C51C;
    }
L_0893C51C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6892), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6896), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C540:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[16] = (2275u << 16u);
    ctx.gpr[18] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[30] = (0u | 27u);
    ctx.gpr[23] = (0u | 28u);
    ctx.gpr[22] = (0u | 29u);
    ctx.gpr[21] = (0u | 30u);
    ctx.gpr[20] = (0u | 31u);
    ctx.gpr[19] = (0u | 32u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(11600));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-30328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    goto L_0893C5A0;
L_0893C5A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 17u);
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5B0;
    }
L_0893C5B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 18u);
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5B8;
    }
L_0893C5B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 24u);
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5C0;
    }
L_0893C5C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 25u);
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5C8;
    }
L_0893C5C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 26u);
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5D0;
    }
L_0893C5D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5D8;
    }
L_0893C5D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5E0;
    }
L_0893C5E0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5E8;
    }
L_0893C5E8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5F0;
    }
L_0893C5F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C5F8;
    }
L_0893C5F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0893C608;
      }
      goto L_0893C600;
    }
L_0893C600:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0893C654;
      }
      goto L_0893C608;
    }
L_0893C608:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C654;
      }
      goto L_0893C614;
    }
L_0893C614:
    ctx.gpr[31] = (0x0893C61Cu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0893C8B4;
L_0893C61C:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893C640u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 549u, 0x0893AC60u>(ctx, &aot_mem) && ctx.pc == 0x0893C640u) goto L_0893C640;
    return;
L_0893C640:
    ctx.gpr[31] = (0x0893C648u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 360u, 0x08939FDCu>(ctx, &aot_mem) && ctx.pc == 0x0893C648u) goto L_0893C648;
    return;
L_0893C648:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0893C654u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893C654u) goto L_0893C654;
    return;
L_0893C654:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893C5A0;
      }
      goto L_0893C664;
    }
L_0893C664:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] & 255u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-30328));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    goto L_0893C6CC;
L_0893C6CC:
    ctx.gpr[31] = (0x0893C6D4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_0893C8B4;
L_0893C6D4:
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[2] << 7u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C700;
      }
      goto L_0893C6FC;
    }
L_0893C6FC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    goto L_0893C700;
L_0893C700:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893C6CC;
      }
      goto L_0893C710;
    }
L_0893C710:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_0893C734:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893C7EC;
      }
      goto L_0893C754;
    }
L_0893C754:
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    goto L_0893C758;
L_0893C758:
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
      if (branch_taken) {
          goto L_0893C7DC;
      }
      goto L_0893C780;
    }
L_0893C780:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30656)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C798:
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0893C7C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 647u, 0x0893B4C0u>(ctx, &aot_mem) && ctx.pc == 0x0893C7C4u) goto L_0893C7C4;
    return;
L_0893C7C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C7D4;
      }
      goto L_0893C7CC;
    }
L_0893C7CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C7DC;
      }
      goto L_0893C7D4;
    }
L_0893C7D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C7F0;
      }
      goto L_0893C7DC;
    }
L_0893C7DC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
      if (branch_taken) {
          goto L_0893C758;
      }
      goto L_0893C7EC;
    }
L_0893C7EC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C7F0;
L_0893C7F0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C804:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893C89C;
      }
      goto L_0893C824;
    }
L_0893C824:
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C88C;
      }
      goto L_0893C848;
    }
L_0893C848:
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0893C874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 647u, 0x0893B4C0u>(ctx, &aot_mem) && ctx.pc == 0x0893C874u) goto L_0893C874;
    return;
L_0893C874:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C884;
      }
      goto L_0893C87C;
    }
L_0893C87C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C88C;
      }
      goto L_0893C884;
    }
L_0893C884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C8A0;
      }
      goto L_0893C88C;
    }
L_0893C88C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893C824;
      }
      goto L_0893C89C;
    }
L_0893C89C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C8A0;
L_0893C8A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C8B4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893C93C;
      }
      goto L_0893C8C4;
    }
L_0893C8C4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C8DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C8E4;
    }
L_0893C8E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C8EC;
    }
L_0893C8EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C8F4;
    }
L_0893C8F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C8FC;
    }
L_0893C8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C904;
    }
L_0893C904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C90C;
    }
L_0893C90C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C914;
    }
L_0893C914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C91C;
    }
L_0893C91C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C924;
    }
L_0893C924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C92C;
    }
L_0893C92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C934;
    }
L_0893C934:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_0893C940;
      }
      goto L_0893C93C;
    }
L_0893C93C:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893C940;
L_0893C940:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893C948:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893C968u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0893C540;
L_0893C968:
    ctx.gpr[4] = (0u | 9668u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7000)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[18] = (2275u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6871)));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(11600));
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893C9AC;
      }
      goto L_0893C99C;
    }
L_0893C99C:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6870)));
      if (branch_taken) {
          goto L_0893C9B4;
      }
      goto L_0893C9AC;
    }
L_0893C9AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6870)));
    goto L_0893C9B4;
L_0893C9B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893C9CC;
      }
      goto L_0893C9BC;
    }
L_0893C9BC:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6868)));
      if (branch_taken) {
          goto L_0893C9D4;
      }
      goto L_0893C9CC;
    }
L_0893C9CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6868)));
    goto L_0893C9D4;
L_0893C9D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6864)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6860)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30344)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-30344));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6848)));
    ctx.gpr[7] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30328));
    goto L_0893CA58;
L_0893CA58:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] + ctx.gpr[7]);
    goto L_0893CA60;
L_0893CA60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0893CA60;
      }
      goto L_0893CAE8;
    }
L_0893CAE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893CA58;
      }
      goto L_0893CAF8;
    }
L_0893CAF8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    goto L_0893CB04;
L_0893CB04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0893CB14u);
    ctx.gpr[6] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0893CB14u) goto L_0893CB14;
    return;
L_0893CB14:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893CB04;
      }
      goto L_0893CB28;
    }
L_0893CB28:
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
L_0893CB40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893CB68u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_0893C540;
L_0893CB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7000), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (2275u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[21] = (2228u << 16u);
      if (branch_taken) {
          goto L_0893CBA4;
      }
      goto L_0893CB9C;
    }
L_0893CB9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6871), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0893CBA8;
      }
      goto L_0893CBA4;
    }
L_0893CBA4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6871), static_cast<std::uint8_t>(0u));
    goto L_0893CBA8;
L_0893CBA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893CBBC;
      }
      goto L_0893CBB4;
    }
L_0893CBB4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6870), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0893CBC0;
      }
      goto L_0893CBBC;
    }
L_0893CBBC:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6870), static_cast<std::uint8_t>(0u));
    goto L_0893CBC0;
L_0893CBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6868), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6864), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-6860), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-30344), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30344));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6848), ctx.gpr[4]);
    ctx.gpr[6] = (2276u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30328));
    goto L_0893CC48;
L_0893CC48:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_0893CC50;
L_0893CC50:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[9]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(16), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(20), ctx.gpr[11]);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(24), ctx.gpr[9]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(28), ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[11]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(40), ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(176));
      if (branch_taken) {
          goto L_0893CC50;
      }
      goto L_0893CCD8;
    }
L_0893CCD8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
      if (branch_taken) {
          goto L_0893CC48;
      }
      goto L_0893CCE8;
    }
L_0893CCE8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 13u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0893CCF8;
L_0893CCF8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893CD08u);
    ctx.gpr[6] = (0u | 224u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x0893CD08u) goto L_0893CD08;
    return;
L_0893CD08:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(156), 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(224));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893CD28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 399u, 0x0893A3A0u>(ctx, &aot_mem) && ctx.pc == 0x0893CD28u) goto L_0893CD28;
    return;
L_0893CD28:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0893CD44;
      }
      goto L_0893CD34;
    }
L_0893CD34:
    ctx.gpr[31] = (0x0893CD3Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 393u, 0x0893A344u>(ctx, &aot_mem) && ctx.pc == 0x0893CD3Cu) goto L_0893CD3C;
    return;
L_0893CD3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CD4C;
      }
      goto L_0893CD44;
    }
L_0893CD44:
    ctx.gpr[31] = (0x0893CD4Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893CD4Cu) goto L_0893CD4C;
    return;
L_0893CD4C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893CCF8;
      }
      goto L_0893CD5C;
    }
L_0893CD5C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6892), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6896), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6852), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893CDBC;
      }
      goto L_0893CD84;
    }
L_0893CD84:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x0893CD9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 96u, 0x08864718u>(ctx, &aot_mem) && ctx.pc == 0x0893CD9Cu) goto L_0893CD9C;
    return;
L_0893CD9C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(-30248), ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893CDBC;
      }
      goto L_0893CDAC;
    }
L_0893CDAC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0893CDBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 100u, 0x08864758u>(ctx, &aot_mem) && ctx.pc == 0x0893CDBCu) goto L_0893CDBC;
    return;
L_0893CDBC:
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
L_0893CDE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[6] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(213), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(213)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CE40;
      }
      goto L_0893CE18;
    }
L_0893CE18:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    ctx.gpr[31] = (0x0893CE38u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893CE38u) goto L_0893CE38;
    return;
L_0893CE38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CE48;
      }
      goto L_0893CE40;
    }
L_0893CE40:
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893CE48;
L_0893CE48:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CE54:
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11600));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[4] = (2230u << 16u);
    goto L_0893CE68;
L_0893CE68:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[5];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0893CE90;
      }
      goto L_0893CE74;
    }
L_0893CE74:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7000)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7000), ctx.gpr[8]);
    goto L_0893CE90;
L_0893CE90:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(224));
      if (branch_taken) {
          goto L_0893CE68;
      }
      goto L_0893CEA0;
    }
L_0893CEA0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893CEA8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(496)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(497)));
    ctx.gpr[7] = (16256u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(672)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(498))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(499))))));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (ctx.gpr[6] & 64u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CF3C;
      }
      goto L_0893CF30;
    }
L_0893CF30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 32768u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CF3C;
L_0893CF3C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (1024u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CF60;
      }
      goto L_0893CF50;
    }
L_0893CF50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    goto L_0893CF60;
L_0893CF60:
    ctx.gpr[7] = (2048u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CF80;
      }
      goto L_0893CF70;
    }
L_0893CF70:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    goto L_0893CF80;
L_0893CF80:
    ctx.gpr[7] = (4u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CFA0;
      }
      goto L_0893CF90;
    }
L_0893CF90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    goto L_0893CFA0;
L_0893CFA0:
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[7] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CFC0;
      }
      goto L_0893CFB0;
    }
L_0893CFB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    goto L_0893CFC0;
L_0893CFC0:
    ctx.gpr[7] = (8192u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CFDC;
      }
      goto L_0893CFD0;
    }
L_0893CFD0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CFDC;
L_0893CFDC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893CFF8;
      }
      goto L_0893CFEC;
    }
L_0893CFEC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 32u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893CFF8;
L_0893CFF8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D014;
      }
      goto L_0893D008;
    }
L_0893D008:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893D014;
L_0893D014:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D030;
      }
      goto L_0893D024;
    }
L_0893D024:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 128u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893D030;
L_0893D030:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D09C;
      }
      goto L_0893D03C;
    }
L_0893D03C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D058;
      }
      goto L_0893D04C;
    }
L_0893D04C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 256u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893D058;
L_0893D058:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D074;
      }
      goto L_0893D068;
    }
L_0893D068:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893D074;
L_0893D074:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D090;
      }
      goto L_0893D084;
    }
L_0893D084:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 1024u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893D090;
L_0893D090:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1564)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893D0CC;
      }
      goto L_0893D09C;
    }
L_0893D09C:
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_0893D0CC;
      }
      goto L_0893D0A8;
    }
L_0893D0A8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D0C4;
      }
      goto L_0893D0B8;
    }
L_0893D0B8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[6] | 256u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_0893D0C4;
L_0893D0C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1284)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0893D0CC;
L_0893D0CC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D0D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x0893D100u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x0893D100u) goto L_0893D100;
    return;
L_0893D100:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] & 32768u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0893D114;
      }
      goto L_0893D110;
    }
L_0893D110:
    ctx.gpr[17] = (0u | 2u);
    goto L_0893D114;
L_0893D114:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
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
          goto L_0893D4F0;
      }
      goto L_0893D144;
    }
L_0893D144:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(39))))));
    ctx.gpr[31] = (0x0893D150u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(40))))));
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 435u, 0x08B01C90u>(ctx, &aot_mem) && ctx.pc == 0x0893D150u) goto L_0893D150;
    return;
L_0893D150:
    ctx.gpr[31] = (0x0893D158u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 148u, 0x08A28F64u>(ctx, &aot_mem) && ctx.pc == 0x0893D158u) goto L_0893D158;
    return;
L_0893D158:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D1A8;
      }
      goto L_0893D160;
    }
L_0893D160:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893D16Cu);
    ctx.gpr[4] = (0u | 1472u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0893D16Cu) goto L_0893D16C;
    return;
L_0893D16C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D18C;
      }
      goto L_0893D178;
    }
L_0893D178:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893D188u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 577u, 0x08A379F0u>(ctx, &aot_mem) && ctx.pc == 0x0893D188u) goto L_0893D188;
    return;
L_0893D188:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_0893D18C;
L_0893D18C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893D22C;
      }
      goto L_0893D1A8;
    }
L_0893D1A8:
    ctx.gpr[31] = (0x0893D1B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 112u, 0x08A28DACu>(ctx, &aot_mem) && ctx.pc == 0x0893D1B0u) goto L_0893D1B0;
    return;
L_0893D1B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D1F4;
      }
      goto L_0893D1B8;
    }
L_0893D1B8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893D1C4u);
    ctx.gpr[4] = (0u | 1424u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0893D1C4u) goto L_0893D1C4;
    return;
L_0893D1C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0893D1E8;
    }
    goto L_0893D1D0;
L_0893D1D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893D1E0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 418u, 0x08A4DFA8u>(ctx, &aot_mem) && ctx.pc == 0x0893D1E0u) goto L_0893D1E0;
    return;
L_0893D1E0:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0893D1E8;
L_0893D1E8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0893D22C;
      }
      goto L_0893D1F4;
    }
L_0893D1F4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893D200u);
    ctx.gpr[4] = (0u | 1760u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 511u, 0x0889E8D8u>(ctx, &aot_mem) && ctx.pc == 0x0893D200u) goto L_0893D200;
    return;
L_0893D200:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[19] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_0893D224;
    }
    goto L_0893D20C;
L_0893D20C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0893D21Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 357u, 0x0880E120u>(ctx, &aot_mem) && ctx.pc == 0x0893D21Cu) goto L_0893D21C;
    return;
L_0893D21C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_0893D224;
L_0893D224:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_0893D22C;
L_0893D22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(504), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-129));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(37)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(497), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(672), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(599))))));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D2F4;
      }
      goto L_0893D2E4;
    }
L_0893D2E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 64u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D2F4;
L_0893D2F4:
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D314;
      }
      goto L_0893D300;
    }
L_0893D300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D314;
L_0893D314:
    ctx.gpr[5] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D334;
      }
      goto L_0893D320;
    }
L_0893D320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D334;
L_0893D334:
    ctx.gpr[5] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D354;
      }
      goto L_0893D340;
    }
L_0893D340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D354;
L_0893D354:
    ctx.gpr[5] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D374;
      }
      goto L_0893D360;
    }
L_0893D360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D374;
L_0893D374:
    ctx.gpr[5] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D394;
      }
      goto L_0893D380;
    }
L_0893D380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D394;
L_0893D394:
    ctx.gpr[5] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D3B0;
      }
      goto L_0893D3A0;
    }
L_0893D3A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D3B0;
L_0893D3B0:
    ctx.gpr[5] = (ctx.gpr[4] & 64u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D3CC;
      }
      goto L_0893D3BC;
    }
L_0893D3BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D3CC;
L_0893D3CC:
    ctx.gpr[5] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(322))))));
      if (branch_taken) {
          goto L_0893D41C;
      }
      goto L_0893D3D8;
    }
L_0893D3D8:
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893D3ECu);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 296u, 0x08A89F44u>(ctx, &aot_mem) && ctx.pc == 0x0893D3ECu) goto L_0893D3EC;
    return;
L_0893D3EC:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x0893D404u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 298u, 0x08A89F54u>(ctx, &aot_mem) && ctx.pc == 0x0893D404u) goto L_0893D404;
    return;
L_0893D404:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893D448;
      }
      goto L_0893D41C;
    }
L_0893D41C:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893D434u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 296u, 0x08A89F44u>(ctx, &aot_mem) && ctx.pc == 0x0893D434u) goto L_0893D434;
    return;
L_0893D434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x0893D440u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 298u, 0x08A89F54u>(ctx, &aot_mem) && ctx.pc == 0x0893D440u) goto L_0893D440;
    return;
L_0893D440:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    goto L_0893D448;
L_0893D448:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D4B8;
      }
      goto L_0893D450;
    }
L_0893D450:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0893D470;
      }
      goto L_0893D460;
    }
L_0893D460:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D470;
L_0893D470:
    ctx.gpr[6] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D494;
      }
      goto L_0893D47C;
    }
L_0893D47C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_0893D494;
L_0893D494:
    ctx.gpr[4] = (ctx.gpr[4] & 1024u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D4AC;
      }
      goto L_0893D4A0;
    }
L_0893D4A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893D4AC;
L_0893D4AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893D4E8;
      }
      goto L_0893D4B8;
    }
L_0893D4B8:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D4E8;
      }
      goto L_0893D4C4;
    }
L_0893D4C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] & 256u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0893D4E0;
      }
      goto L_0893D4D4;
    }
L_0893D4D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[5] = (ctx.gpr[5] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1332), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893D4E0;
L_0893D4E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0893D4E8;
L_0893D4E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_0893D4F4;
      }
      goto L_0893D4F0;
    }
L_0893D4F0:
    ctx.gpr[2] = (0u | 0u);
    goto L_0893D4F4;
L_0893D4F4:
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
L_0893D510:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1456));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1392), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1396), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1400), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1404), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1408), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1412), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1416), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1420), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1424), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1428), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1432), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1436), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1440), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0893D568;
      }
      goto L_0893D558;
    }
L_0893D558:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D580;
      }
      goto L_0893D568;
    }
L_0893D568:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D588;
      }
      goto L_0893D578;
    }
L_0893D578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D708;
      }
      goto L_0893D580;
    }
L_0893D580:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893D588;
    }
L_0893D588:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D708;
      }
      goto L_0893D598;
    }
L_0893D598:
    ctx.gpr[31] = (0x0893D5A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D5A0u) goto L_0893D5A0;
    return;
L_0893D5A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D700;
      }
      goto L_0893D5A8;
    }
L_0893D5A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D700;
      }
      goto L_0893D5B4;
    }
L_0893D5B4:
    ctx.gpr[31] = (0x0893D5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893D5BCu) goto L_0893D5BC;
    return;
L_0893D5BC:
    ctx.gpr[31] = (0x0893D5C4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D5C4u) goto L_0893D5C4;
    return;
L_0893D5C4:
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893D5D8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 131u, 0x089388DCu>(ctx, &aot_mem) && ctx.pc == 0x0893D5D8u) goto L_0893D5D8;
    return;
L_0893D5D8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893D5FC;
      }
      goto L_0893D5E4;
    }
L_0893D5E4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6852), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2368), ctx.gpr[16]);
    goto L_0893D5FC;
L_0893D5FC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D700;
      }
      goto L_0893D604;
    }
L_0893D604:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893D614u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 162u, 0x08938BE8u>(ctx, &aot_mem) && ctx.pc == 0x0893D614u) goto L_0893D614;
    return;
L_0893D614:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D628;
      }
      goto L_0893D61C;
    }
L_0893D61C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2372), ctx.gpr[16]);
    goto L_0893D628;
L_0893D628:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 154u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D700;
      }
      goto L_0893D638;
    }
L_0893D638:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D6E0;
      }
      goto L_0893D670;
    }
L_0893D670:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D6E0;
      }
      goto L_0893D694;
    }
L_0893D694:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D6E0;
      }
      goto L_0893D6B8;
    }
L_0893D6B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893D6E0;
      }
      goto L_0893D6DC;
    }
L_0893D6DC:
    ctx.gpr[4] = (0u | 1u);
    goto L_0893D6E0;
L_0893D6E0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D700;
      }
      goto L_0893D6E8;
    }
L_0893D6E8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6852), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2368), ctx.gpr[16]);
    goto L_0893D700;
L_0893D700:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D708;
      }
      goto L_0893D708;
    }
L_0893D708:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D720;
      }
      goto L_0893D714;
    }
L_0893D714:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D734;
      }
      goto L_0893D720;
    }
L_0893D720:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893D73C;
      }
      goto L_0893D72C;
    }
L_0893D72C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D850;
      }
      goto L_0893D734;
    }
L_0893D734:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893D73C;
    }
L_0893D73C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D7E0;
      }
      goto L_0893D74C;
    }
L_0893D74C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D794;
      }
      goto L_0893D758;
    }
L_0893D758:
    ctx.gpr[31] = (0x0893D760u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D760u) goto L_0893D760;
    return;
L_0893D760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D794;
      }
      goto L_0893D770;
    }
L_0893D770:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_0893D794;
L_0893D794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D850;
      }
      goto L_0893D7A0;
    }
L_0893D7A0:
    ctx.gpr[31] = (0x0893D7A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D7A8u) goto L_0893D7A8;
    return;
L_0893D7A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D850;
      }
      goto L_0893D7B8;
    }
L_0893D7B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0893D850;
      }
      goto L_0893D7E0;
    }
L_0893D7E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893D850;
      }
      goto L_0893D7F0;
    }
L_0893D7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D820;
      }
      goto L_0893D7FC;
    }
L_0893D7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_0893D820;
L_0893D820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D850;
      }
      goto L_0893D82C;
    }
L_0893D82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 9u);
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_0893D850;
L_0893D850:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893D864;
    }
L_0893D864:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(30800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0893D87C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA3C;
      }
      goto L_0893D88C;
    }
L_0893D88C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0893DB68;
      }
      goto L_0893D894;
    }
L_0893D894:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0893DA44;
      }
      goto L_0893D89C;
    }
L_0893D89C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893E640;
      }
      goto L_0893D8A4;
    }
L_0893D8A4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0893E6D8;
      }
      goto L_0893D8AC;
    }
L_0893D8AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893D8BCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 91u, 0x089386B8u>(ctx, &aot_mem) && ctx.pc == 0x0893D8BCu) goto L_0893D8BC;
    return;
L_0893D8BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9C0;
      }
      goto L_0893D8C4;
    }
L_0893D8C4:
    ctx.gpr[31] = (0x0893D8CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893D8CCu) goto L_0893D8CC;
    return;
L_0893D8CC:
    ctx.gpr[31] = (0x0893D8D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 757u, 0x0893BCC8u>(ctx, &aot_mem) && ctx.pc == 0x0893D8D4u) goto L_0893D8D4;
    return;
L_0893D8D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893D98C;
      }
      goto L_0893D8DC;
    }
L_0893D8DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893D91C;
      }
      goto L_0893D910;
    }
L_0893D910:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6870)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D950;
      }
      goto L_0893D91C;
    }
L_0893D91C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893D92Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893D92Cu) goto L_0893D92C;
    return;
L_0893D92C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x0893D93Cu);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893D93Cu) goto L_0893D93C;
    return;
L_0893D93C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0893D9C0;
      }
      goto L_0893D950;
    }
L_0893D950:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893D968u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30160));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893D968u) goto L_0893D968;
    return;
L_0893D968:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893D984u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0893D984u) goto L_0893D984;
    return;
L_0893D984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893D9C0;
      }
      goto L_0893D98C;
    }
L_0893D98C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893D9A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30168));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893D9A4u) goto L_0893D9A4;
    return;
L_0893D9A4:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 64u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893D9C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0893D9C0u) goto L_0893D9C0;
    return;
L_0893D9C0:
    ctx.gpr[31] = (0x0893D9C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893D9C8u) goto L_0893D9C8;
    return;
L_0893D9C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA3C;
      }
      goto L_0893D9D0;
    }
L_0893D9D0:
    ctx.gpr[31] = (0x0893D9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893D9D8u) goto L_0893D9D8;
    return;
L_0893D9D8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0893D9E4u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893D9E4u) goto L_0893D9E4;
    return;
L_0893D9E4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893D9F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 493u, 0x0893A834u>(ctx, &aot_mem) && ctx.pc == 0x0893D9F8u) goto L_0893D9F8;
    return;
L_0893D9F8:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893DA3C;
      }
      goto L_0893DA10;
    }
L_0893DA10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x0893DA3Cu);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 101u, 0x088C4734u>(ctx, &aot_mem) && ctx.pc == 0x0893DA3Cu) goto L_0893DA3C;
    return;
L_0893DA3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893DA44;
    }
L_0893DA44:
    ctx.gpr[31] = (0x0893DA4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DA4Cu) goto L_0893DA4C;
    return;
L_0893DA4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA68;
      }
      goto L_0893DA54;
    }
L_0893DA54:
    ctx.gpr[31] = (0x0893DA5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DA5Cu) goto L_0893DA5C;
    return;
L_0893DA5C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893DA68u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 295u, 0x08939888u>(ctx, &aot_mem) && ctx.pc == 0x0893DA68u) goto L_0893DA68;
    return;
L_0893DA68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893DA88;
      }
      goto L_0893DA78;
    }
L_0893DA78:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893DA94;
      }
      goto L_0893DA88;
    }
L_0893DA88:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893DA94;
L_0893DA94:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893DAB4;
    }
    goto L_0893DAB4;
L_0893DAB4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893DB04;
      }
      goto L_0893DAC8;
    }
L_0893DAC8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30248)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893DAFCu);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DAFCu) goto L_0893DAFC;
    return;
L_0893DAFC:
    ctx.gpr[31] = (0x0893DB04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 186u, 0x08844F84u>(ctx, &aot_mem) && ctx.pc == 0x0893DB04u) goto L_0893DB04;
    return;
L_0893DB04:
    ctx.gpr[31] = (0x0893DB0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893DB0Cu) goto L_0893DB0C;
    return;
L_0893DB0C:
    ctx.gpr[31] = (0x0893DB14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DB14u) goto L_0893DB14;
    return;
L_0893DB14:
    if (ctx.gpr[2] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_0893DB38;
    }
    goto L_0893DB1C;
L_0893DB1C:
    ctx.gpr[31] = (0x0893DB24u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DB24u) goto L_0893DB24;
    return;
L_0893DB24:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0893DB30u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DB30u) goto L_0893DB30;
    return;
L_0893DB30:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_0893DB38;
L_0893DB38:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x0893DB60u);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 101u, 0x088C4734u>(ctx, &aot_mem) && ctx.pc == 0x0893DB60u) goto L_0893DB60;
    return;
L_0893DB60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA3C;
      }
      goto L_0893DB68;
    }
L_0893DB68:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
        goto L_0893E610;
    }
    goto L_0893DB88;
L_0893DB88:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 65u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893DBA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0893DBA4u) goto L_0893DBA4;
    return;
L_0893DBA4:
    ctx.gpr[31] = (0x0893DBACu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DBACu) goto L_0893DBAC;
    return;
L_0893DBAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC20;
      }
      goto L_0893DBB8;
    }
L_0893DBB8:
    ctx.gpr[31] = (0x0893DBC0u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DBC0u) goto L_0893DBC0;
    return;
L_0893DBC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0893DBD8u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DBD8u) goto L_0893DBD8;
    return;
L_0893DBD8:
    ctx.gpr[31] = (0x0893DBE0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2064)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DBE0u) goto L_0893DBE0;
    return;
L_0893DBE0:
    ctx.gpr[31] = (0x0893DBE8u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2068), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DBE8u) goto L_0893DBE8;
    return;
L_0893DBE8:
    ctx.gpr[31] = (0x0893DBF0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DBF0u) goto L_0893DBF0;
    return;
L_0893DBF0:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2100), ctx.gpr[18]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x0893DC00u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DC00u) goto L_0893DC00;
    return;
L_0893DC00:
    ctx.gpr[31] = (0x0893DC08u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2080), ctx.gpr[18]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DC08u) goto L_0893DC08;
    return;
L_0893DC08:
    ctx.gpr[31] = (0x0893DC10u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2064), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DC10u) goto L_0893DC10;
    return;
L_0893DC10:
    ctx.gpr[31] = (0x0893DC18u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2096), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DC18u) goto L_0893DC18;
    return;
L_0893DC18:
    ctx.gpr[31] = (0x0893DC20u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 397u, 0x08ACD8C8u>(ctx, &aot_mem) && ctx.pc == 0x0893DC20u) goto L_0893DC20;
    return;
L_0893DC20:
    ctx.gpr[31] = (0x0893DC28u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893DC28u) goto L_0893DC28;
    return;
L_0893DC28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x0893DC3Cu);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893DC3Cu) goto L_0893DC3C;
    return;
L_0893DC3C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[31] = (0x0893DC54u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DC54u) goto L_0893DC54;
    return;
L_0893DC54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4D4;
      }
      goto L_0893DC5C;
    }
L_0893DC5C:
    ctx.gpr[31] = (0x0893DC64u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DC64u) goto L_0893DC64;
    return;
L_0893DC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DC88;
      }
      goto L_0893DC70;
    }
L_0893DC70:
    ctx.gpr[31] = (0x0893DC78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DC78u) goto L_0893DC78;
    return;
L_0893DC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893E4D4;
      }
      goto L_0893DC88;
    }
L_0893DC88:
    ctx.gpr[31] = (0x0893DC90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DC90u) goto L_0893DC90;
    return;
L_0893DC90:
    ctx.gpr[4] = (17522u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(616)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893DCB4;
      }
      goto L_0893DCB0;
    }
L_0893DCB0:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893DCB4;
L_0893DCB4:
    ctx.gpr[4] = (17530u << 16u);
    ctx.gpr[31] = (0x0893DCC0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DCC0u) goto L_0893DCC0;
    return;
L_0893DCC0:
    ctx.gpr[31] = (0x0893DCC8u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DCC8u) goto L_0893DCC8;
    return;
L_0893DCC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DD00;
      }
      goto L_0893DCD4;
    }
L_0893DCD4:
    ctx.gpr[31] = (0x0893DCDCu);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DCDCu) goto L_0893DCDC;
    return;
L_0893DCDC:
    ctx.gpr[31] = (0x0893DCE4u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1608), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DCE4u) goto L_0893DCE4;
    return;
L_0893DCE4:
    ctx.gpr[31] = (0x0893DCECu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 81u, 0x0880C5C0u>(ctx, &aot_mem) && ctx.pc == 0x0893DCECu) goto L_0893DCEC;
    return;
L_0893DCEC:
    ctx.gpr[31] = (0x0893DCF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DCF4u) goto L_0893DCF4;
    return;
L_0893DCF4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893DD28;
      }
      goto L_0893DD00;
    }
L_0893DD00:
    ctx.gpr[31] = (0x0893DD08u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD08u) goto L_0893DD08;
    return;
L_0893DD08:
    ctx.gpr[31] = (0x0893DD10u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1356), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD10u) goto L_0893DD10;
    return;
L_0893DD10:
    ctx.gpr[31] = (0x0893DD18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 502u, 0x08A36F88u>(ctx, &aot_mem) && ctx.pc == 0x0893DD18u) goto L_0893DD18;
    return;
L_0893DD18:
    ctx.gpr[31] = (0x0893DD20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD20u) goto L_0893DD20;
    return;
L_0893DD20:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(660), ctx.gpr[4]);
    goto L_0893DD28;
L_0893DD28:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7804)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x0893DD3Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7804), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD3Cu) goto L_0893DD3C;
    return;
L_0893DD3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893DDD0;
      }
      goto L_0893DD54;
    }
L_0893DD54:
    ctx.gpr[31] = (0x0893DD5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD5Cu) goto L_0893DD5C;
    return;
L_0893DD5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x0893DD68u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD68u) goto L_0893DD68;
    return;
L_0893DD68:
    ctx.gpr[31] = (0x0893DD70u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD70u) goto L_0893DD70;
    return;
L_0893DD70:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x0893DD7Cu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD7Cu) goto L_0893DD7C;
    return;
L_0893DD7C:
    ctx.gpr[31] = (0x0893DD84u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD84u) goto L_0893DD84;
    return;
L_0893DD84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x0893DD90u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD90u) goto L_0893DD90;
    return;
L_0893DD90:
    ctx.gpr[31] = (0x0893DD98u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DD98u) goto L_0893DD98;
    return;
L_0893DD98:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0893DDA4u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DDA4u) goto L_0893DDA4;
    return;
L_0893DDA4:
    ctx.gpr[31] = (0x0893DDACu);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DDACu) goto L_0893DDAC;
    return;
L_0893DDAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893DDB8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DDB8u) goto L_0893DDB8;
    return;
L_0893DDB8:
    ctx.gpr[31] = (0x0893DDC0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DDC0u) goto L_0893DDC0;
    return;
L_0893DDC0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x0893DDCCu);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DDCCu) goto L_0893DDCC;
    return;
L_0893DDCC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_0893DDD0;
L_0893DDD0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x0893DDDCu);
    ctx.gpr[19] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DDDCu) goto L_0893DDDC;
    return;
L_0893DDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DE04;
      }
      goto L_0893DDE8;
    }
L_0893DDE8:
    ctx.gpr[31] = (0x0893DDF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DDF0u) goto L_0893DDF0;
    return;
L_0893DDF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DE04;
      }
      goto L_0893DE00;
    }
L_0893DE00:
    ctx.gpr[19] = (0u | 0u);
    goto L_0893DE04;
L_0893DE04:
    ctx.gpr[31] = (0x0893DE0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DE0Cu) goto L_0893DE0C;
    return;
L_0893DE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893DE38;
      }
      goto L_0893DE1C;
    }
L_0893DE1C:
    ctx.gpr[31] = (0x0893DE24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DE24u) goto L_0893DE24;
    return;
L_0893DE24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1332))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DE38;
      }
      goto L_0893DE34;
    }
L_0893DE34:
    ctx.gpr[19] = (0u | 0u);
    goto L_0893DE38;
L_0893DE38:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4C0;
      }
      goto L_0893DE40;
    }
L_0893DE40:
    ctx.gpr[31] = (0x0893DE48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DE48u) goto L_0893DE48;
    return;
L_0893DE48:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DE74;
      }
      goto L_0893DE60;
    }
L_0893DE60:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0893DE74;
L_0893DE74:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(49));
    ctx.gpr[31] = (0x0893DE84u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 276u, 0x08876860u>(ctx, &aot_mem) && ctx.pc == 0x0893DE84u) goto L_0893DE84;
    return;
L_0893DE84:
    ctx.gpr[18] = (0u | 0u);
    goto L_0893DE88;
L_0893DE88:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DF14;
      }
      goto L_0893DE94;
    }
L_0893DE94:
    ctx.gpr[31] = (0x0893DE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DE9Cu) goto L_0893DE9C;
    return;
L_0893DE9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(496)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893DF14;
      }
      goto L_0893DEAC;
    }
L_0893DEAC:
    ctx.gpr[31] = (0x0893DEB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DEB4u) goto L_0893DEB4;
    return;
L_0893DEB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(497)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893DF14;
      }
      goto L_0893DEC4;
    }
L_0893DEC4:
    ctx.gpr[31] = (0x0893DECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DECCu) goto L_0893DECC;
    return;
L_0893DECC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DEF8;
      }
      goto L_0893DEE4;
    }
L_0893DEE4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_0893DEF8;
L_0893DEF8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0893DF08u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(49));
    if (rt.invoke_chained_direct<&recomp_unit_0028_entry, 28u, 276u, 0x08876860u>(ctx, &aot_mem) && ctx.pc == 0x0893DF08u) goto L_0893DF08;
    return;
L_0893DF08:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
      if (branch_taken) {
          goto L_0893DE88;
      }
      goto L_0893DF14;
    }
L_0893DF14:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893DF28;
      }
      goto L_0893DF20;
    }
L_0893DF20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_0893DF2C;
      }
      goto L_0893DF28;
    }
L_0893DF28:
    ctx.gpr[18] = (0u | 1u);
    goto L_0893DF2C;
L_0893DF2C:
    ctx.gpr[31] = (0x0893DF34u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DF34u) goto L_0893DF34;
    return;
L_0893DF34:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(496), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[31] = (0x0893DF40u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(49)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893DF40u) goto L_0893DF40;
    return;
L_0893DF40:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(497), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_0893E4C0;
      }
      goto L_0893DF48;
    }
L_0893DF48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E230;
      }
      goto L_0893E130;
    }
L_0893E130:
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893E1A8;
      }
      goto L_0893E1A4;
    }
L_0893E1A4:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_0893E1A8;
L_0893E1A8:
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[29] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893E220;
      }
      goto L_0893E21C;
    }
L_0893E21C:
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    goto L_0893E220;
L_0893E220:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E130;
      }
      goto L_0893E230;
    }
L_0893E230:
    ctx.gpr[4] = (ctx.gpr[20] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15184)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(320), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(321), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 150u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E4C0;
      }
      goto L_0893E308;
    }
L_0893E308:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[20] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1388), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(192));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0893E3C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0893E3C4u) goto L_0893E3C4;
    return;
L_0893E3C4:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0893E3F0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E3F0u) goto L_0893E3F0;
    return;
L_0893E3F0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49344u << 16u);
    ctx.gpr[31] = (0x0893E408u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0893E408u) goto L_0893E408;
    return;
L_0893E408:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x0893E434u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E434u) goto L_0893E434;
    return;
L_0893E434:
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x0893E444u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x0893E444u) goto L_0893E444;
    return;
L_0893E444:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[4] = (0u | 24u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x0893E4A8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x0893E4A8u) goto L_0893E4A8;
    return;
L_0893E4A8:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[4] << 16u);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1388)));
      if (branch_taken) {
          goto L_0893E308;
      }
      goto L_0893E4C0;
    }
L_0893E4C0:
    ctx.gpr[31] = (0x0893E4C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893E4C8u) goto L_0893E4C8;
    return;
L_0893E4C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893E4D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 632u, 0x0893B320u>(ctx, &aot_mem) && ctx.pc == 0x0893E4D4u) goto L_0893E4D4;
    return;
L_0893E4D4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E5AC;
      }
      goto L_0893E4DC;
    }
L_0893E4DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6870)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893E58C;
      }
      goto L_0893E4EC;
    }
L_0893E4EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-100));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0893E528;
    }
    goto L_0893E528;
L_0893E528:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7676)));
    ctx.gpr[8] = (17096u << 16u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (2225u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7676), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30176));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[31] = (0x0893E584u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893E584u) goto L_0893E584;
    return;
L_0893E584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E604;
      }
      goto L_0893E58C;
    }
L_0893E58C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E5A4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30184));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893E5A4u) goto L_0893E5A4;
    return;
L_0893E5A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E604;
      }
      goto L_0893E5AC;
    }
L_0893E5AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E604;
      }
      goto L_0893E5B4;
    }
L_0893E5B4:
    ctx.gpr[31] = (0x0893E5BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0893E5BCu) goto L_0893E5BC;
    return;
L_0893E5BC:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E5EC;
      }
      goto L_0893E5CC;
    }
L_0893E5CC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E5E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30192));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893E5E4u) goto L_0893E5E4;
    return;
L_0893E5E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E604;
      }
      goto L_0893E5EC;
    }
L_0893E5EC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E604u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30200));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893E604u) goto L_0893E604;
    return;
L_0893E604:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(6), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    goto L_0893E610;
L_0893E610:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[31] = (0x0893E638u);
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 101u, 0x088C4734u>(ctx, &aot_mem) && ctx.pc == 0x0893E638u) goto L_0893E638;
    return;
L_0893E638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA3C;
      }
      goto L_0893E640;
    }
L_0893E640:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893E65C;
      }
      goto L_0893E64C;
    }
L_0893E64C:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893E668;
      }
      goto L_0893E65C;
    }
L_0893E65C:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893E668;
L_0893E668:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893E68C;
    }
    goto L_0893E68C;
L_0893E68C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893E6C8;
      }
      goto L_0893E6A0;
    }
L_0893E6A0:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893E6C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E6C8u) goto L_0893E6C8;
    return;
L_0893E6C8:
    ctx.gpr[31] = (0x0893E6D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893E6D0u) goto L_0893E6D0;
    return;
L_0893E6D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA3C;
      }
      goto L_0893E6D8;
    }
L_0893E6D8:
    ctx.gpr[31] = (0x0893E6E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893E6E0u) goto L_0893E6E0;
    return;
L_0893E6E0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E6F4;
      }
      goto L_0893E6E8;
    }
L_0893E6E8:
    ctx.gpr[31] = (0x0893E6F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893E6F0u) goto L_0893E6F0;
    return;
L_0893E6F0:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(0u));
    goto L_0893E6F4;
L_0893E6F4:
    ctx.gpr[31] = (0x0893E6FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 237u, 0x089392F8u>(ctx, &aot_mem) && ctx.pc == 0x0893E6FCu) goto L_0893E6FC;
    return;
L_0893E6FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E70C;
      }
      goto L_0893E704;
    }
L_0893E704:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893E70C;
L_0893E70C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893DA3C;
      }
      goto L_0893E714;
    }
L_0893E714:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(213)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E730;
      }
      goto L_0893E720;
    }
L_0893E720:
    ctx.gpr[31] = (0x0893E728u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893E728u) goto L_0893E728;
    return;
L_0893E728:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893E730;
    }
L_0893E730:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(5) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E728;
      }
      goto L_0893E740;
    }
L_0893E740:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0893E9E4;
      }
      goto L_0893E748;
    }
L_0893E748:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_0893E8E4;
      }
      goto L_0893E750;
    }
L_0893E750:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0893EFB4;
      }
      goto L_0893E758;
    }
L_0893E758:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0893F04C;
      }
      goto L_0893E760;
    }
L_0893E760:
    ctx.gpr[31] = (0x0893E768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893E768u) goto L_0893E768;
    return;
L_0893E768:
    ctx.gpr[31] = (0x0893E770u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 91u, 0x089386B8u>(ctx, &aot_mem) && ctx.pc == 0x0893E770u) goto L_0893E770;
    return;
L_0893E770:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E8DC;
      }
      goto L_0893E778;
    }
L_0893E778:
    ctx.gpr[31] = (0x0893E780u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893E780u) goto L_0893E780;
    return;
L_0893E780:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0893E78Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0893E78Cu) goto L_0893E78C;
    return;
L_0893E78C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893E7D4;
      }
      goto L_0893E798;
    }
L_0893E798:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E7B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30208));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893E7B0u) goto L_0893E7B0;
    return;
L_0893E7B0:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893E7CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0893E7CCu) goto L_0893E7CC;
    return;
L_0893E7CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E8DC;
      }
      goto L_0893E7D4;
    }
L_0893E7D4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E8A8;
      }
      goto L_0893E7DC;
    }
L_0893E7DC:
    ctx.gpr[31] = (0x0893E7E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893E7E4u) goto L_0893E7E4;
    return;
L_0893E7E4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E8A8;
      }
      goto L_0893E7F4;
    }
L_0893E7F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6871)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893E838;
      }
      goto L_0893E804;
    }
L_0893E804:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 500 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893E86C;
      }
      goto L_0893E838;
    }
L_0893E838:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893E848u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893E848u) goto L_0893E848;
    return;
L_0893E848:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x0893E858u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E858u) goto L_0893E858;
    return;
L_0893E858:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0893E8DC;
      }
      goto L_0893E86C;
    }
L_0893E86C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E884u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30216));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893E884u) goto L_0893E884;
    return;
L_0893E884:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893E8A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0893E8A0u) goto L_0893E8A0;
    return;
L_0893E8A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E8DC;
      }
      goto L_0893E8A8;
    }
L_0893E8A8:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893E8C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30224));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893E8C0u) goto L_0893E8C0;
    return;
L_0893E8C0:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 66u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893E8DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0893E8DCu) goto L_0893E8DC;
    return;
L_0893E8DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E728;
      }
      goto L_0893E8E4;
    }
L_0893E8E4:
    ctx.gpr[31] = (0x0893E8ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893E8ECu) goto L_0893E8EC;
    return;
L_0893E8EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E908;
      }
      goto L_0893E8F4;
    }
L_0893E8F4:
    ctx.gpr[31] = (0x0893E8FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893E8FCu) goto L_0893E8FC;
    return;
L_0893E8FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893E908u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 295u, 0x08939888u>(ctx, &aot_mem) && ctx.pc == 0x0893E908u) goto L_0893E908;
    return;
L_0893E908:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893E928;
      }
      goto L_0893E918;
    }
L_0893E918:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893E934;
      }
      goto L_0893E928;
    }
L_0893E928:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893E934;
L_0893E934:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893E954;
    }
    goto L_0893E954;
L_0893E954:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893E99C;
      }
      goto L_0893E968;
    }
L_0893E968:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(148), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30248)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893E99Cu);
    ctx.gpr[6] = (0u | 74u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893E99Cu) goto L_0893E99C;
    return;
L_0893E99C:
    ctx.gpr[31] = (0x0893E9A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893E9A4u) goto L_0893E9A4;
    return;
L_0893E9A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E9B8;
      }
      goto L_0893E9AC;
    }
L_0893E9AC:
    ctx.gpr[31] = (0x0893E9B4u);
    ctx.gpr[17] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893E9B4u) goto L_0893E9B4;
    return;
L_0893E9B4:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(ctx.gpr[17]));
    goto L_0893E9B8;
L_0893E9B8:
    ctx.gpr[31] = (0x0893E9C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893E9C0u) goto L_0893E9C0;
    return;
L_0893E9C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893E9DC;
      }
      goto L_0893E9D0;
    }
L_0893E9D0:
    ctx.gpr[4] = (0u | 291u);
    ctx.gpr[31] = (0x0893E9DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x0893E9DCu) goto L_0893E9DC;
    return;
L_0893E9DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E728;
      }
      goto L_0893E9E4;
    }
L_0893E9E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EFAC;
      }
      goto L_0893E9FC;
    }
L_0893E9FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0893EA3C;
      }
      goto L_0893EA0C;
    }
L_0893EA0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5832)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EA3C;
      }
      goto L_0893EA28;
    }
L_0893EA28:
    ctx.gpr[4] = (0u | 291u);
    ctx.gpr[31] = (0x0893EA34u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x0893EA34u) goto L_0893EA34;
    return;
L_0893EA34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EFAC;
      }
      goto L_0893EA3C;
    }
L_0893EA3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893EA74;
      }
      goto L_0893EA4C;
    }
L_0893EA4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EABC;
      }
      goto L_0893EA58;
    }
L_0893EA58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 67u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893EA6Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0893EA6Cu) goto L_0893EA6C;
    return;
L_0893EA6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EABC;
      }
      goto L_0893EA74;
    }
L_0893EA74:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893EA8C;
      }
      goto L_0893EA7C;
    }
L_0893EA7C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EAA8;
      }
      goto L_0893EA84;
    }
L_0893EA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EABC;
      }
      goto L_0893EA8C;
    }
L_0893EA8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 68u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893EAA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0893EAA0u) goto L_0893EAA0;
    return;
L_0893EAA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EABC;
      }
      goto L_0893EAA8;
    }
L_0893EAA8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 69u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0893EABCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x0893EABCu) goto L_0893EABC;
    return;
L_0893EABC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6871)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0893EB3C;
      }
      goto L_0893EAD4;
    }
L_0893EAD4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-500));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
        goto L_0893EB10;
    }
    goto L_0893EB10;
L_0893EB10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    goto L_0893EB3C;
L_0893EB3C:
    ctx.gpr[31] = (0x0893EB44u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893EB44u) goto L_0893EB44;
    return;
L_0893EB44:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC74;
      }
      goto L_0893EB4C;
    }
L_0893EB4C:
    ctx.gpr[31] = (0x0893EB54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893EB54u) goto L_0893EB54;
    return;
L_0893EB54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EB78;
      }
      goto L_0893EB60;
    }
L_0893EB60:
    ctx.gpr[31] = (0x0893EB68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893EB68u) goto L_0893EB68;
    return;
L_0893EB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893EC74;
      }
      goto L_0893EB78;
    }
L_0893EB78:
    ctx.gpr[31] = (0x0893EB80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893EB80u) goto L_0893EB80;
    return;
L_0893EB80:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1509));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] & 7u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    ctx.gpr[31] = (0x0893EBACu);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EBACu) goto L_0893EBAC;
    return;
L_0893EBAC:
    ctx.gpr[31] = (0x0893EBB4u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893EBB4u) goto L_0893EBB4;
    return;
L_0893EBB4:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1512), ctx.gpr[17]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893EC4C;
      }
      goto L_0893EBCC;
    }
L_0893EBCC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 128u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
      if (branch_taken) {
          goto L_0893EBEC;
      }
      goto L_0893EBE4;
    }
L_0893EBE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0893EC10;
      }
      goto L_0893EBEC;
    }
L_0893EBEC:
    ctx.gpr[7] = (0u - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] << 1u);
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] + ctx.gpr[6]);
    goto L_0893EC10;
L_0893EC10:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC40;
      }
      goto L_0893EC18;
    }
L_0893EC18:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EC40;
      }
      goto L_0893EC24;
    }
L_0893EC24:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (0u | 80u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_0893EC40;
      }
      goto L_0893EC38;
    }
L_0893EC38:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(648), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1512), 0u);
    goto L_0893EC40;
L_0893EC40:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0893EBCC;
      }
      goto L_0893EC4C;
    }
L_0893EC4C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893EC64;
      }
      goto L_0893EC5C;
    }
L_0893EC5C:
    ctx.gpr[31] = (0x0893EC64u);
    // nop
    goto L_0893C41C;
L_0893EC64:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840), ctx.gpr[5]);
    goto L_0893EC74;
L_0893EC74:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893EC98;
      }
      goto L_0893EC84;
    }
L_0893EC84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF34;
      }
      goto L_0893EC90;
    }
L_0893EC90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ECB0;
      }
      goto L_0893EC98;
    }
L_0893EC98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893EDC0;
      }
      goto L_0893ECA0;
    }
L_0893ECA0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EED0;
      }
      goto L_0893ECA8;
    }
L_0893ECA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF34;
      }
      goto L_0893ECB0;
    }
L_0893ECB0:
    ctx.gpr[31] = (0x0893ECB8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893ECB8u) goto L_0893ECB8;
    return;
L_0893ECB8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_0893ECD8;
    }
    goto L_0893ECC8;
L_0893ECC8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893EDB8;
      }
      goto L_0893ECD0;
    }
L_0893ECD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ECE8;
      }
      goto L_0893ECD8;
    }
L_0893ECD8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED54;
      }
      goto L_0893ECE0;
    }
L_0893ECE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EDB8;
      }
      goto L_0893ECE8;
    }
L_0893ECE8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893ED28;
      }
      goto L_0893ECF8;
    }
L_0893ECF8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893ED04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0893ED04u) goto L_0893ED04;
    return;
L_0893ED04:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED1C;
      }
      goto L_0893ED10;
    }
L_0893ED10:
    ctx.gpr[31] = (0x0893ED18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0893ED18u) goto L_0893ED18;
    return;
L_0893ED18:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893ED1C;
L_0893ED1C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893ED28;
L_0893ED28:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0893ED38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30232));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0893ED38u) goto L_0893ED38;
    return;
L_0893ED38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893ED4Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x0893ED4Cu) goto L_0893ED4C;
    return;
L_0893ED4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EDB8;
      }
      goto L_0893ED54;
    }
L_0893ED54:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893ED94;
      }
      goto L_0893ED64;
    }
L_0893ED64:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893ED70u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0893ED70u) goto L_0893ED70;
    return;
L_0893ED70:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893ED88;
      }
      goto L_0893ED7C;
    }
L_0893ED7C:
    ctx.gpr[31] = (0x0893ED84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0893ED84u) goto L_0893ED84;
    return;
L_0893ED84:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893ED88;
L_0893ED88:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893ED94;
L_0893ED94:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0893EDA4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30240));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0893EDA4u) goto L_0893EDA4;
    return;
L_0893EDA4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893EDB8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x0893EDB8u) goto L_0893EDB8;
    return;
L_0893EDB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF34;
      }
      goto L_0893EDC0;
    }
L_0893EDC0:
    ctx.gpr[31] = (0x0893EDC8u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893EDC8u) goto L_0893EDC8;
    return;
L_0893EDC8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
        goto L_0893EDE8;
    }
    goto L_0893EDD8;
L_0893EDD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893EEC8;
      }
      goto L_0893EDE0;
    }
L_0893EDE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EDF8;
      }
      goto L_0893EDE8;
    }
L_0893EDE8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE64;
      }
      goto L_0893EDF0;
    }
L_0893EDF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEC8;
      }
      goto L_0893EDF8;
    }
L_0893EDF8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893EE38;
      }
      goto L_0893EE08;
    }
L_0893EE08:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893EE14u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0893EE14u) goto L_0893EE14;
    return;
L_0893EE14:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE2C;
      }
      goto L_0893EE20;
    }
L_0893EE20:
    ctx.gpr[31] = (0x0893EE28u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0893EE28u) goto L_0893EE28;
    return;
L_0893EE28:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893EE2C;
L_0893EE2C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893EE38;
L_0893EE38:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0893EE48u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30248));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0893EE48u) goto L_0893EE48;
    return;
L_0893EE48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893EE5Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x0893EE5Cu) goto L_0893EE5C;
    return;
L_0893EE5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EEC8;
      }
      goto L_0893EE64;
    }
L_0893EE64:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893EEA4;
      }
      goto L_0893EE74;
    }
L_0893EE74:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893EE80u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0893EE80u) goto L_0893EE80;
    return;
L_0893EE80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EE98;
      }
      goto L_0893EE8C;
    }
L_0893EE8C:
    ctx.gpr[31] = (0x0893EE94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0893EE94u) goto L_0893EE94;
    return;
L_0893EE94:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893EE98;
L_0893EE98:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893EEA4;
L_0893EEA4:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0893EEB4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30256));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0893EEB4u) goto L_0893EEB4;
    return;
L_0893EEB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893EEC8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x0893EEC8u) goto L_0893EEC8;
    return;
L_0893EEC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF34;
      }
      goto L_0893EED0;
    }
L_0893EED0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_0893EF10;
      }
      goto L_0893EEE0;
    }
L_0893EEE0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x0893EEECu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x0893EEECu) goto L_0893EEEC;
    return;
L_0893EEEC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF04;
      }
      goto L_0893EEF8;
    }
L_0893EEF8:
    ctx.gpr[31] = (0x0893EF00u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x0893EF00u) goto L_0893EF00;
    return;
L_0893EF00:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_0893EF04;
L_0893EF04:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_0893EF10;
L_0893EF10:
    ctx.gpr[5] = (2225u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x0893EF20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(30264));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x0893EF20u) goto L_0893EF20;
    return;
L_0893EF20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0893EF34u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x0893EF34u) goto L_0893EF34;
    return;
L_0893EF34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6871)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF64;
      }
      goto L_0893EF44;
    }
L_0893EF44:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893EF5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30272));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893EF5Cu) goto L_0893EF5C;
    return;
L_0893EF5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893EF7C;
      }
      goto L_0893EF64;
    }
L_0893EF64:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0893EF7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30280));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 762u, 0x0893BD08u>(ctx, &aot_mem) && ctx.pc == 0x0893EF7Cu) goto L_0893EF7C;
    return;
L_0893EF7C:
    ctx.gpr[31] = (0x0893EF84u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893EF84u) goto L_0893EF84;
    return;
L_0893EF84:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x0893EF98u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893EF98u) goto L_0893EF98;
    return;
L_0893EF98:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893EFAC;
L_0893EFAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E728;
      }
      goto L_0893EFB4;
    }
L_0893EFB4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893EFD0;
      }
      goto L_0893EFC0;
    }
L_0893EFC0:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893EFDC;
      }
      goto L_0893EFD0;
    }
L_0893EFD0:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893EFDC;
L_0893EFDC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893F000;
    }
    goto L_0893F000;
L_0893F000:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893F03C;
      }
      goto L_0893F014;
    }
L_0893F014:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893F03Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F03Cu) goto L_0893F03C;
    return;
L_0893F03C:
    ctx.gpr[31] = (0x0893F044u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893F044u) goto L_0893F044;
    return;
L_0893F044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E728;
      }
      goto L_0893F04C;
    }
L_0893F04C:
    ctx.gpr[31] = (0x0893F054u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F054u) goto L_0893F054;
    return;
L_0893F054:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F068;
      }
      goto L_0893F05C;
    }
L_0893F05C:
    ctx.gpr[31] = (0x0893F064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F064u) goto L_0893F064;
    return;
L_0893F064:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(608), static_cast<std::uint8_t>(0u));
    goto L_0893F068;
L_0893F068:
    ctx.gpr[31] = (0x0893F070u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 237u, 0x089392F8u>(ctx, &aot_mem) && ctx.pc == 0x0893F070u) goto L_0893F070;
    return;
L_0893F070:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F080;
      }
      goto L_0893F078;
    }
L_0893F078:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893F080;
L_0893F080:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893E728;
      }
      goto L_0893F088;
    }
L_0893F088:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F0B0;
      }
      goto L_0893F098;
    }
L_0893F098:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893F0C0;
      }
      goto L_0893F0A0;
    }
L_0893F0A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893F38C;
      }
      goto L_0893F0A8;
    }
L_0893F0A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F0C8;
      }
      goto L_0893F0B0;
    }
L_0893F0B0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F234;
      }
      goto L_0893F0B8;
    }
L_0893F0B8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F3FC;
      }
      goto L_0893F0C0;
    }
L_0893F0C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893F0C8;
    }
L_0893F0C8:
    ctx.gpr[31] = (0x0893F0D0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0893F0D0u) goto L_0893F0D0;
    return;
L_0893F0D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x0893F0F8u);
    ctx.fpr[22] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0893F0F8u) goto L_0893F0F8;
    return;
L_0893F0F8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[13];
    ctx.gpr[31] = (0x0893F11Cu);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0893F11Cu) goto L_0893F11C;
    return;
L_0893F11C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[31] = (0x0893F13Cu);
    ctx.fpr[24] = ctx.fpr[17] - ctx.fpr[13];
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0893F13Cu) goto L_0893F13C;
    return;
L_0893F13C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F1B0;
      }
      goto L_0893F174;
    }
L_0893F174:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F22C;
      }
      goto L_0893F188;
    }
L_0893F188:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893F194u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 276u, 0x0893969Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F194u) goto L_0893F194;
    return;
L_0893F194:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F22C;
      }
      goto L_0893F19C;
    }
L_0893F19C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893F22C;
      }
      goto L_0893F1B0;
    }
L_0893F1B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F22C;
      }
      goto L_0893F1BC;
    }
L_0893F1BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0893F1CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 131u, 0x089388DCu>(ctx, &aot_mem) && ctx.pc == 0x0893F1CCu) goto L_0893F1CC;
    return;
L_0893F1CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F22C;
      }
      goto L_0893F1D4;
    }
L_0893F1D4:
    ctx.gpr[31] = (0x0893F1DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F1DCu) goto L_0893F1DC;
    return;
L_0893F1DC:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893F1F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 162u, 0x08938BE8u>(ctx, &aot_mem) && ctx.pc == 0x0893F1F0u) goto L_0893F1F0;
    return;
L_0893F1F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F22C;
      }
      goto L_0893F1F8;
    }
L_0893F1F8:
    ctx.gpr[31] = (0x0893F200u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893F200u) goto L_0893F200;
    return;
L_0893F200:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x0893F210u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F210u) goto L_0893F210;
    return;
L_0893F210:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(0u));
    goto L_0893F22C;
L_0893F22C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F0C0;
      }
      goto L_0893F234;
    }
L_0893F234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F24C;
      }
      goto L_0893F240;
    }
L_0893F240:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x0893F24Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 295u, 0x08939888u>(ctx, &aot_mem) && ctx.pc == 0x0893F24Cu) goto L_0893F24C;
    return;
L_0893F24C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893F26C;
      }
      goto L_0893F25C;
    }
L_0893F25C:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893F278;
      }
      goto L_0893F26C;
    }
L_0893F26C:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893F278;
L_0893F278:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893F298;
    }
    goto L_0893F298;
L_0893F298:
    ctx.gpr[31] = (0x0893F2A0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F2A0u) goto L_0893F2A0;
    return;
L_0893F2A0:
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893F2B4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 162u, 0x08938BE8u>(ctx, &aot_mem) && ctx.pc == 0x0893F2B4u) goto L_0893F2B4;
    return;
L_0893F2B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F2D4;
      }
      goto L_0893F2BC;
    }
L_0893F2BC:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0893F2C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30288));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 89u, 0x08938664u>(ctx, &aot_mem) && ctx.pc == 0x0893F2C8u) goto L_0893F2C8;
    return;
L_0893F2C8:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0893F37C;
      }
      goto L_0893F2D4;
    }
L_0893F2D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F37C;
      }
      goto L_0893F2EC;
    }
L_0893F2EC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893F30Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F30Cu) goto L_0893F30C;
    return;
L_0893F30C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F378;
      }
      goto L_0893F318;
    }
L_0893F318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F340;
      }
      goto L_0893F324;
    }
L_0893F324:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0893F338u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 479u, 0x0889E6ECu>(ctx, &aot_mem) && ctx.pc == 0x0893F338u) goto L_0893F338;
    return;
L_0893F338:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
      if (branch_taken) {
          goto L_0893F344;
      }
      goto L_0893F340;
    }
L_0893F340:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0893F344;
L_0893F344:
    ctx.gpr[31] = (0x0893F34Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893F34Cu) goto L_0893F34C;
    return;
L_0893F34C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x0893F360u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F360u) goto L_0893F360;
    return;
L_0893F360:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0893F37C;
      }
      goto L_0893F378;
    }
L_0893F378:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    goto L_0893F37C;
L_0893F37C:
    ctx.gpr[31] = (0x0893F384u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893F384u) goto L_0893F384;
    return;
L_0893F384:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F0C0;
      }
      goto L_0893F38C;
    }
L_0893F38C:
    ctx.gpr[31] = (0x0893F394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F394u) goto L_0893F394;
    return;
L_0893F394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893F3F4;
      }
      goto L_0893F3A0;
    }
L_0893F3A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F3F4;
      }
      goto L_0893F3AC;
    }
L_0893F3AC:
    ctx.gpr[31] = (0x0893F3B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F3B4u) goto L_0893F3B4;
    return;
L_0893F3B4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0893F3C0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F3C0u) goto L_0893F3C0;
    return;
L_0893F3C0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893F3D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 493u, 0x0893A834u>(ctx, &aot_mem) && ctx.pc == 0x0893F3D4u) goto L_0893F3D4;
    return;
L_0893F3D4:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F3F4;
      }
      goto L_0893F3EC;
    }
L_0893F3EC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893F3F4;
L_0893F3F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F0C0;
      }
      goto L_0893F3FC;
    }
L_0893F3FC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893F418;
      }
      goto L_0893F408;
    }
L_0893F408:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893F424;
      }
      goto L_0893F418;
    }
L_0893F418:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893F424;
L_0893F424:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893F448;
    }
    goto L_0893F448;
L_0893F448:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893F484;
      }
      goto L_0893F45C;
    }
L_0893F45C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893F484u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F484u) goto L_0893F484;
    return;
L_0893F484:
    ctx.gpr[31] = (0x0893F48Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893F48Cu) goto L_0893F48C;
    return;
L_0893F48C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F0C0;
      }
      goto L_0893F494;
    }
L_0893F494:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893F49C;
    }
L_0893F49C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F4C4;
      }
      goto L_0893F4AC;
    }
L_0893F4AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893F4D4;
      }
      goto L_0893F4B4;
    }
L_0893F4B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893F84C;
      }
      goto L_0893F4BC;
    }
L_0893F4BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F4DC;
      }
      goto L_0893F4C4;
    }
L_0893F4C4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893F748;
      }
      goto L_0893F4CC;
    }
L_0893F4CC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F948;
      }
      goto L_0893F4D4;
    }
L_0893F4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893F4DC;
    }
L_0893F4DC:
    ctx.gpr[31] = (0x0893F4E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F4E4u) goto L_0893F4E4;
    return;
L_0893F4E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F520;
      }
      goto L_0893F4EC;
    }
L_0893F4EC:
    ctx.gpr[31] = (0x0893F4F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F4F4u) goto L_0893F4F4;
    return;
L_0893F4F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0893F500u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 445u, 0x0893A5E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F500u) goto L_0893F500;
    return;
L_0893F500:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F520;
      }
      goto L_0893F508;
    }
L_0893F508:
    ctx.gpr[31] = (0x0893F510u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F510u) goto L_0893F510;
    return;
L_0893F510:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[31] = (0x0893F520u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0893F520u) goto L_0893F520;
    return;
L_0893F520:
    ctx.gpr[31] = (0x0893F528u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(576));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0893F528u) goto L_0893F528;
    return;
L_0893F528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0893F55C;
    }
    goto L_0893F55C;
L_0893F55C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F5E8;
      }
      goto L_0893F574;
    }
L_0893F574:
    ctx.gpr[31] = (0x0893F57Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(608));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0893F57Cu) goto L_0893F57C;
    return;
L_0893F57C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_0893F5B0;
    }
    goto L_0893F5B0;
L_0893F5B0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F5E8;
      }
      goto L_0893F5C8;
    }
L_0893F5C8:
    ctx.gpr[31] = (0x0893F5D0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x0893F5D0u) goto L_0893F5D0;
    return;
L_0893F5D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F5F8;
      }
      goto L_0893F5E8;
    }
L_0893F5E8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
      if (branch_taken) {
          goto L_0893F740;
      }
      goto L_0893F5F8;
    }
L_0893F5F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F740;
      }
      goto L_0893F604;
    }
L_0893F604:
    ctx.gpr[31] = (0x0893F60Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F60Cu) goto L_0893F60C;
    return;
L_0893F60C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F740;
      }
      goto L_0893F614;
    }
L_0893F614:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x0893F624u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 131u, 0x089388DCu>(ctx, &aot_mem) && ctx.pc == 0x0893F624u) goto L_0893F624;
    return;
L_0893F624:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F740;
      }
      goto L_0893F62C;
    }
L_0893F62C:
    ctx.gpr[31] = (0x0893F634u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F634u) goto L_0893F634;
    return;
L_0893F634:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893F648u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 162u, 0x08938BE8u>(ctx, &aot_mem) && ctx.pc == 0x0893F648u) goto L_0893F648;
    return;
L_0893F648:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F740;
      }
      goto L_0893F650;
    }
L_0893F650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0893F69C;
      }
      goto L_0893F664;
    }
L_0893F664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F694;
      }
      goto L_0893F678;
    }
L_0893F678:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1356)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F694;
      }
      goto L_0893F690;
    }
L_0893F690:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893F694;
L_0893F694:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6E0;
      }
      goto L_0893F69C;
    }
L_0893F69C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6E0;
      }
      goto L_0893F6AC;
    }
L_0893F6AC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x0893F6B8u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 220u, 0x08A293F4u>(ctx, &aot_mem) && ctx.pc == 0x0893F6B8u) goto L_0893F6B8;
    return;
L_0893F6B8:
    ctx.gpr[4] = (ctx.gpr[2] < static_cast<std::uint32_t>(226) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F6E0;
      }
      goto L_0893F6C4;
    }
L_0893F6C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1608)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F6E0;
      }
      goto L_0893F6DC;
    }
L_0893F6DC:
    ctx.gpr[17] = (0u | 1u);
    goto L_0893F6E0;
L_0893F6E0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F740;
      }
      goto L_0893F6E8;
    }
L_0893F6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893F740;
      }
      goto L_0893F704;
    }
L_0893F704:
    ctx.gpr[31] = (0x0893F70Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893F70Cu) goto L_0893F70C;
    return;
L_0893F70C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.gpr[31] = (0x0893F71Cu);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F71Cu) goto L_0893F71C;
    return;
L_0893F71C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x0893F740u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 498u, 0x088EF15Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F740u) goto L_0893F740;
    return;
L_0893F740:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F4D4;
      }
      goto L_0893F748;
    }
L_0893F748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F760;
      }
      goto L_0893F754;
    }
L_0893F754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (0x0893F760u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 295u, 0x08939888u>(ctx, &aot_mem) && ctx.pc == 0x0893F760u) goto L_0893F760;
    return;
L_0893F760:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893F780;
      }
      goto L_0893F770;
    }
L_0893F770:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893F78C;
      }
      goto L_0893F780;
    }
L_0893F780:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893F78C;
L_0893F78C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893F7AC;
    }
    goto L_0893F7AC;
L_0893F7AC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893F83C;
      }
      goto L_0893F7C0;
    }
L_0893F7C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893F7E4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F7E4u) goto L_0893F7E4;
    return;
L_0893F7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F83C;
      }
      goto L_0893F7F0;
    }
L_0893F7F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893F800u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 464u, 0x0893A6D8u>(ctx, &aot_mem) && ctx.pc == 0x0893F800u) goto L_0893F800;
    return;
L_0893F800:
    ctx.gpr[31] = (0x0893F808u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(156)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 479u, 0x0889E6ECu>(ctx, &aot_mem) && ctx.pc == 0x0893F808u) goto L_0893F808;
    return;
L_0893F808:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
    ctx.gpr[31] = (0x0893F814u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893F814u) goto L_0893F814;
    return;
L_0893F814:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x0893F828u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F828u) goto L_0893F828;
    return;
L_0893F828:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2094));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0893F83C;
L_0893F83C:
    ctx.gpr[31] = (0x0893F844u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893F844u) goto L_0893F844;
    return;
L_0893F844:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F4D4;
      }
      goto L_0893F84C;
    }
L_0893F84C:
    ctx.gpr[31] = (0x0893F854u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 33u, 0x08958280u>(ctx, &aot_mem) && ctx.pc == 0x0893F854u) goto L_0893F854;
    return;
L_0893F854:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F940;
      }
      goto L_0893F85C;
    }
L_0893F85C:
    ctx.gpr[31] = (0x0893F864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893F864u) goto L_0893F864;
    return;
L_0893F864:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893F874u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 162u, 0x08938BE8u>(ctx, &aot_mem) && ctx.pc == 0x0893F874u) goto L_0893F874;
    return;
L_0893F874:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893F890;
      }
      goto L_0893F87C;
    }
L_0893F87C:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0893F888u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30288));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 89u, 0x08938664u>(ctx, &aot_mem) && ctx.pc == 0x0893F888u) goto L_0893F888;
    return;
L_0893F888:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893F890;
L_0893F890:
    ctx.gpr[31] = (0x0893F898u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F898u) goto L_0893F898;
    return;
L_0893F898:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F940;
      }
      goto L_0893F8A0;
    }
L_0893F8A0:
    ctx.gpr[31] = (0x0893F8A8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F8A8u) goto L_0893F8A8;
    return;
L_0893F8A8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0893F8B4u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F8B4u) goto L_0893F8B4;
    return;
L_0893F8B4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0893F8C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 504u, 0x0893A8D4u>(ctx, &aot_mem) && ctx.pc == 0x0893F8C8u) goto L_0893F8C8;
    return;
L_0893F8C8:
    ctx.gpr[4] = (17024u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F940;
      }
      goto L_0893F8E0;
    }
L_0893F8E0:
    ctx.gpr[31] = (0x0893F8E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F8E8u) goto L_0893F8E8;
    return;
L_0893F8E8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893F940;
      }
      goto L_0893F904;
    }
L_0893F904:
    ctx.gpr[31] = (0x0893F90Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F90Cu) goto L_0893F90C;
    return;
L_0893F90C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0893F918u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 445u, 0x0893A5E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F918u) goto L_0893F918;
    return;
L_0893F918:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F940;
      }
      goto L_0893F920;
    }
L_0893F920:
    ctx.gpr[31] = (0x0893F928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F928u) goto L_0893F928;
    return;
L_0893F928:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0893F940;
      }
      goto L_0893F938;
    }
L_0893F938:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893F940;
L_0893F940:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), 0u);
      if (branch_taken) {
          goto L_0893F4D4;
      }
      goto L_0893F948;
    }
L_0893F948:
    ctx.gpr[31] = (0x0893F950u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F950u) goto L_0893F950;
    return;
L_0893F950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F98C;
      }
      goto L_0893F958;
    }
L_0893F958:
    ctx.gpr[31] = (0x0893F960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F960u) goto L_0893F960;
    return;
L_0893F960:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x0893F96Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 445u, 0x0893A5E8u>(ctx, &aot_mem) && ctx.pc == 0x0893F96Cu) goto L_0893F96C;
    return;
L_0893F96C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F98C;
      }
      goto L_0893F974;
    }
L_0893F974:
    ctx.gpr[31] = (0x0893F97Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893F97Cu) goto L_0893F97C;
    return;
L_0893F97C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(156), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(156));
    ctx.gpr[31] = (0x0893F98Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0893F98Cu) goto L_0893F98C;
    return;
L_0893F98C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893F9A8;
      }
      goto L_0893F998;
    }
L_0893F998:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893F9B4;
      }
      goto L_0893F9A8;
    }
L_0893F9A8:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893F9B4;
L_0893F9B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893F9D8;
    }
    goto L_0893F9D8;
L_0893F9D8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893FA14;
      }
      goto L_0893F9EC;
    }
L_0893F9EC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893FA14u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FA14u) goto L_0893FA14;
    return;
L_0893FA14:
    ctx.gpr[31] = (0x0893FA1Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893FA1Cu) goto L_0893FA1C;
    return;
L_0893FA1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893F4D4;
      }
      goto L_0893FA24;
    }
L_0893FA24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893FA4C;
      }
      goto L_0893FA34;
    }
L_0893FA34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893FA44;
      }
      goto L_0893FA3C;
    }
L_0893FA3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_0893FA64;
      }
      goto L_0893FA44;
    }
L_0893FA44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893FA4C;
    }
L_0893FA4C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893FA84;
      }
      goto L_0893FA54;
    }
L_0893FA54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA44;
      }
      goto L_0893FA5C;
    }
L_0893FA5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FB30;
      }
      goto L_0893FA64;
    }
L_0893FA64:
    ctx.gpr[31] = (0x0893FA6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 229u, 0x08939210u>(ctx, &aot_mem) && ctx.pc == 0x0893FA6Cu) goto L_0893FA6C;
    return;
L_0893FA6C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA7C;
      }
      goto L_0893FA74;
    }
L_0893FA74:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893FA7C;
L_0893FA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA44;
      }
      goto L_0893FA84;
    }
L_0893FA84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893FAA4;
      }
      goto L_0893FA94;
    }
L_0893FA94:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893FAB0;
      }
      goto L_0893FAA4;
    }
L_0893FAA4:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893FAB0;
L_0893FAB0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893FAD0;
    }
    goto L_0893FAD0;
L_0893FAD0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893FB08;
      }
      goto L_0893FAE4;
    }
L_0893FAE4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893FB08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FB08u) goto L_0893FB08;
    return;
L_0893FB08:
    ctx.gpr[31] = (0x0893FB10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893FB10u) goto L_0893FB10;
    return;
L_0893FB10:
    ctx.gpr[31] = (0x0893FB18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 229u, 0x08939210u>(ctx, &aot_mem) && ctx.pc == 0x0893FB18u) goto L_0893FB18;
    return;
L_0893FB18:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FB28;
      }
      goto L_0893FB20;
    }
L_0893FB20:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893FB28;
L_0893FB28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA44;
      }
      goto L_0893FB30;
    }
L_0893FB30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893FB4C;
      }
      goto L_0893FB3C;
    }
L_0893FB3C:
    ctx.gpr[4] = (15477u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893FB58;
      }
      goto L_0893FB4C;
    }
L_0893FB4C:
    ctx.gpr[4] = (15631u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893FB58;
L_0893FB58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
        goto L_0893FB7C;
    }
    goto L_0893FB7C;
L_0893FB7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0893FBB8;
      }
      goto L_0893FB90;
    }
L_0893FB90:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 75u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893FBB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FBB8u) goto L_0893FBB8;
    return;
L_0893FBB8:
    ctx.gpr[31] = (0x0893FBC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893FBC0u) goto L_0893FBC0;
    return;
L_0893FBC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FA44;
      }
      goto L_0893FBC8;
    }
L_0893FBC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893FBF0;
      }
      goto L_0893FBD8;
    }
L_0893FBD8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0893FC00;
      }
      goto L_0893FBE0;
    }
L_0893FBE0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0893FFD0;
      }
      goto L_0893FBE8;
    }
L_0893FBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC08;
      }
      goto L_0893FBF0;
    }
L_0893FBF0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_0893FD48;
      }
      goto L_0893FBF8;
    }
L_0893FBF8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 5u, 0x0894003Cu>(ctx, &aot_mem); return;
      }
      goto L_0893FC00;
    }
L_0893FC00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 358u, 0x089417C4u>(ctx, &aot_mem); return;
      }
      goto L_0893FC08;
    }
L_0893FC08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FD40;
      }
      goto L_0893FC14;
    }
L_0893FC14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC80;
      }
      goto L_0893FC24;
    }
L_0893FC24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893FC38u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 131u, 0x089388DCu>(ctx, &aot_mem) && ctx.pc == 0x0893FC38u) goto L_0893FC38;
    return;
L_0893FC38:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC80;
      }
      goto L_0893FC40;
    }
L_0893FC40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC64;
      }
      goto L_0893FC4C;
    }
L_0893FC4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC64;
      }
      goto L_0893FC58;
    }
L_0893FC58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0893FC64u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0893FC64u) goto L_0893FC64;
    return;
L_0893FC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x0893FC78u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0893FC78u) goto L_0893FC78;
    return;
L_0893FC78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FCA8;
      }
      goto L_0893FC80;
    }
L_0893FC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FCA4;
      }
      goto L_0893FC8C;
    }
L_0893FC8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FCA4;
      }
      goto L_0893FC98;
    }
L_0893FC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0893FCA4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0893FCA4u) goto L_0893FCA4;
    return;
L_0893FCA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_0893FCA8;
L_0893FCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FD40;
      }
      goto L_0893FCB4;
    }
L_0893FCB4:
    ctx.gpr[31] = (0x0893FCBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x0893FCBCu) goto L_0893FCBC;
    return;
L_0893FCBC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FD40;
      }
      goto L_0893FCC4;
    }
L_0893FCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893FD40;
      }
      goto L_0893FCD8;
    }
L_0893FCD8:
    ctx.gpr[31] = (0x0893FCE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FCE0u) goto L_0893FCE0;
    return;
L_0893FCE0:
    ctx.gpr[6] = (16576u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x0893FCF4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 162u, 0x08938BE8u>(ctx, &aot_mem) && ctx.pc == 0x0893FCF4u) goto L_0893FCF4;
    return;
L_0893FCF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FD40;
      }
      goto L_0893FCFC;
    }
L_0893FCFC:
    ctx.gpr[31] = (0x0893FD04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FD04u) goto L_0893FD04;
    return;
L_0893FD04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0893FD40;
      }
      goto L_0893FD1C;
    }
L_0893FD1C:
    ctx.gpr[31] = (0x0893FD24u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893FD24u) goto L_0893FD24;
    return;
L_0893FD24:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0893FD40;
L_0893FD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC00;
      }
      goto L_0893FD48;
    }
L_0893FD48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(25)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
      if (branch_taken) {
          goto L_0893FD68;
      }
      goto L_0893FD58;
    }
L_0893FD58:
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0893FD74;
      }
      goto L_0893FD68;
    }
L_0893FD68:
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_0893FD74;
L_0893FD74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_0893FD94;
    }
    goto L_0893FD94;
L_0893FD94:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0893FFC0;
      }
      goto L_0893FDA8;
    }
L_0893FDA8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FE74;
      }
      goto L_0893FDC4;
    }
L_0893FDC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FE74;
      }
      goto L_0893FDD0;
    }
L_0893FDD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FE74;
      }
      goto L_0893FDE0;
    }
L_0893FDE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893FDF4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(104)));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 131u, 0x089388DCu>(ctx, &aot_mem) && ctx.pc == 0x0893FDF4u) goto L_0893FDF4;
    return;
L_0893FDF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FE74;
      }
      goto L_0893FDFC;
    }
L_0893FDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FE20;
      }
      goto L_0893FE08;
    }
L_0893FE08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FE20;
      }
      goto L_0893FE14;
    }
L_0893FE14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (0x0893FE20u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0893FE20u) goto L_0893FE20;
    return;
L_0893FE20:
    ctx.gpr[31] = (0x0893FE28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x0893FE28u) goto L_0893FE28;
    return;
L_0893FE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FE54;
      }
      goto L_0893FE34;
    }
L_0893FE34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0893FE54u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0893FE54u) goto L_0893FE54;
    return;
L_0893FE54:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(212), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0893FE70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30324));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 89u, 0x08938664u>(ctx, &aot_mem) && ctx.pc == 0x0893FE70u) goto L_0893FE70;
    return;
L_0893FE70:
    ctx.gpr[4] = (2232u << 16u);
    goto L_0893FE74;
L_0893FE74:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FF84;
      }
      goto L_0893FEA4;
    }
L_0893FEA4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0893FEB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 648u, 0x088A7DE0u>(ctx, &aot_mem) && ctx.pc == 0x0893FEB4u) goto L_0893FEB4;
    return;
L_0893FEB4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FF54;
      }
      goto L_0893FEC0;
    }
L_0893FEC0:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0893FED0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 184u, 0x08938E7Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FED0u) goto L_0893FED0;
    return;
L_0893FED0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0893FF54;
      }
      goto L_0893FED8;
    }
L_0893FED8:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7204)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(656), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(658), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(659), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(662), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0893FF38;
      }
      goto L_0893FF14;
    }
L_0893FF14:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(664), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(659), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(662), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(664))))));
    ctx.gpr[31] = (0x0893FF30u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 434u, 0x08982520u>(ctx, &aot_mem) && ctx.pc == 0x0893FF30u) goto L_0893FF30;
    return;
L_0893FF30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FF50;
      }
      goto L_0893FF38;
    }
L_0893FF38:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(659), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(662), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x0893FF50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87C4u>(ctx, &aot_mem) && ctx.pc == 0x0893FF50u) goto L_0893FF50;
    return;
L_0893FF50:
    ctx.gpr[4] = (2232u << 16u);
    goto L_0893FF54;
L_0893FF54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0893FEA4;
      }
      goto L_0893FF84;
    }
L_0893FF84:
    ctx.gpr[31] = (0x0893FF8Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x0893FF8Cu) goto L_0893FF8C;
    return;
L_0893FF8C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30248)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[6] = (0u | 74u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x0893FFC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FFC0u) goto L_0893FFC0;
    return;
L_0893FFC0:
    ctx.gpr[31] = (0x0893FFC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 378u, 0x0893A108u>(ctx, &aot_mem) && ctx.pc == 0x0893FFC8u) goto L_0893FFC8;
    return;
L_0893FFC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0893FC00;
      }
      goto L_0893FFD0;
    }
L_0893FFD0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 4u, 0x08940034u>(ctx, &aot_mem); return;
      }
      goto L_0893FFEC;
    }
L_0893FFEC:
    ctx.gpr[31] = (0x0893FFF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x0893FFF4u) goto L_0893FFF4;
    return;
L_0893FFF4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08940000u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0078(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0078_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_78(Runtime &runtime) {
    runtime.register_generated_unit(78u, 0x0893C000u, 16384u, &recomp_unit_0078, &recomp_unit_0078_entry);
    runtime.register_function(0x0893C000u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C020u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C028u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C030u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C038u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C054u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C05Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C064u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C084u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C08Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C094u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C0F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C100u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C130u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C138u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C140u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C144u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C14Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C178u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C180u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C184u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C18Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C1ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C244u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C24Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C254u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C260u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C28Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C2ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C310u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C314u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C338u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C350u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C358u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C388u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C390u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C398u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C3FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C410u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C41Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C434u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C440u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C458u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C480u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C488u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C49Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C4F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C504u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C50Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C51Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C540u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C5F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C600u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C608u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C614u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C61Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C640u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C648u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C654u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C664u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C698u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C6FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C700u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C710u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C734u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C754u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C758u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C780u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C798u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C7F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C804u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C824u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C848u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C874u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C87Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C884u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C88Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C89Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C8FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C904u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C90Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C914u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C91Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C924u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C92Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C934u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C93Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C940u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C948u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C968u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C99Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893C9D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CA60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CAE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CAF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CB9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CBC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CC50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CCF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CD9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CDE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CE90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CEA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CF90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893CFF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D008u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D014u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D024u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D030u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D03Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D04Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D058u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D068u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D074u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D084u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D090u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D09Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D0D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D100u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D110u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D114u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D144u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D150u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D158u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D160u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D16Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D178u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D188u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D18Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D1F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D200u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D20Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D21Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D224u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D22Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D2F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D300u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D314u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D320u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D334u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D340u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D354u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D360u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D374u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D380u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D394u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D3ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D404u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D41Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D434u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D440u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D448u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D450u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D460u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D470u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D47Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D494u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D4F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D510u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D558u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D568u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D578u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D580u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D588u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D598u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D5FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D604u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D614u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D61Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D628u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D638u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D670u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D694u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D6E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D700u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D708u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D714u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D720u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D72Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D734u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D73Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D74Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D758u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D760u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D770u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D794u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D7FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D820u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D82Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D850u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D864u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D87Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D88Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D894u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D89Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D8DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D910u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D91Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D92Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D93Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D950u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D968u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D984u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D98Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893D9F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DA94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DAFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DB88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DBF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DC90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DCF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DD98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DDF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DE9Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DECCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DEF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893DF48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E130u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E1A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E1A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E21Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E220u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E230u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E308u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E3F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E408u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E434u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E444u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E4ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E528u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E584u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E58Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E5ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E604u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E610u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E638u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E640u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E64Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E65Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E668u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E68Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E6FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E704u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E70Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E714u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E720u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E728u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E730u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E740u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E748u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E750u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E758u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E760u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E768u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E770u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E778u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E780u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E78Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E798u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E7F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E804u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E838u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E848u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E858u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E86Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E884u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E8FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E908u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E918u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E928u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E934u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E954u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E968u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E99Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9A4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893E9FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA0Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EA8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EABCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EAD4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB60u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EB80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBCCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EBECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EC98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECA0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ECF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED88u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893ED94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EDF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE2Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EE98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EED0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EEF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EF98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893EFDCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F000u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F014u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F03Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F044u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F04Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F054u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F05Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F064u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F068u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F070u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F078u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F080u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F088u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F098u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F0F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F11Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F13Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F174u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F188u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F194u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F19Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F1F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F200u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F210u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F22Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F234u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F240u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F24Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F25Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F26Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F278u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F298u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F2ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F30Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F318u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F324u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F338u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F340u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F344u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F34Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F360u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F378u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F37Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F384u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F38Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F394u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F3FCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F408u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F418u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F424u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F448u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F45Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F484u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F48Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F494u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F49Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4BCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4CCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4D4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F4F4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F500u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F508u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F510u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F520u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F528u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F55Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F574u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F57Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5B0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5D0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F5F8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F604u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F60Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F614u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F624u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F62Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F634u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F648u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F650u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F664u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F678u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F690u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F694u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F69Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6B8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6C4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6DCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F6E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F704u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F70Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F71Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F740u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F748u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F754u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F760u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F770u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F780u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F78Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7ACu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7C0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7E4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F7F0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F800u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F808u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F814u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F828u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F83Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F844u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F84Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F854u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F85Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F864u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F874u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F87Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F888u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F890u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F898u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8A0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8C8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8E0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F8E8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F904u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F90Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F918u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F920u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F928u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F938u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F940u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F948u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F950u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F958u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F960u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F96Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F974u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F97Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F98Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F998u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9A8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9B4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9D8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893F9ECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA44u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA5Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA6Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FA94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAB0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FAE4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB10u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB18u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB3Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB7Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FB90u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBB8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBE8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBF0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FBF8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC00u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC4Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC64u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC78u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC80u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FC98u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCBCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCD8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FCFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD04u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD1Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD24u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD40u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD48u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD58u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD68u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FD94u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDA8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDC4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDE0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDF4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FDFCu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE08u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE20u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE28u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE34u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE70u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FE74u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEA4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEB4u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FEC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FED0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FED8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF14u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF30u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF38u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF50u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF54u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF84u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FF8Cu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFC0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFC8u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFD0u, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFECu, &recomp_unit_0078, "recomp_unit_0078");
    runtime.register_function(0x0893FFF4u, &recomp_unit_0078, "recomp_unit_0078");
}
} // namespace psprecomp
