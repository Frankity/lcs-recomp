#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0157[4095] = {
    1, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7,
    0, 0, 0, 0, 8, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 12, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 17, 0, 18, 0, 19, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 0, 0,
    23, 0, 24, 0, 25, 0, 0, 0, 0, 26, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 30,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 39, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 43, 0, 44, 0, 0, 45, 46, 0, 0, 47, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0,
    0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 55, 0, 0, 0, 56, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61,
    0, 0, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67, 0, 0, 0, 68, 0, 69, 0, 0, 0, 70,
    0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 74, 0, 75, 0, 0, 0, 76, 0, 77, 0, 0, 0, 78, 0, 79, 0, 0, 0, 80, 0, 81,
    0, 0, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 87, 0, 0, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 0,
    0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 96, 0, 97, 0, 0, 0, 98, 0, 99, 0, 0, 0, 100, 0, 101, 0, 0, 0, 102,
    0, 103, 0, 0, 0, 104, 0, 105, 0, 0, 0, 106, 0, 107, 0, 0, 0, 108, 0, 109, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113,
    0, 0, 0, 114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 121, 0, 0, 0, 122, 0, 123, 0, 0,
    0, 124, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 132, 0, 133, 0, 0, 0, 134,
    0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 144, 0, 145,
    0, 0, 0, 146, 0, 147, 0, 0, 0, 148, 0, 149, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0,
    0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 0, 0, 160, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166,
    0, 167, 0, 0, 0, 168, 0, 169, 0, 0, 0, 170, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 177,
    0, 0, 0, 178, 0, 179, 0, 0, 0, 180, 0, 181, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0,
    0, 188, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 193, 0, 0, 0, 194, 0, 195, 0, 0, 0, 196, 0, 197, 0, 0, 0, 198,
    0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 205, 0, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 209,
    0, 0, 0, 210, 0, 211, 0, 0, 0, 212, 0, 213, 0, 0, 0, 214, 0, 215, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0,
    0, 220, 0, 221, 0, 0, 0, 222, 0, 223, 0, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 227, 0, 0, 0, 228, 0, 229, 0, 0, 0, 230,
    0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 0, 240, 0, 241,
    0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 244, 0, 245, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 249, 0, 0,
    0, 250, 0, 0, 0, 0, 0, 251, 0, 252, 0, 253, 0, 254, 0, 0, 0, 0, 255, 256, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0,
    0, 260, 0, 261, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 264, 0, 265, 0, 266, 0, 0, 267, 0, 0, 268, 0, 269, 0, 0, 270, 0,
    0, 271, 0, 0, 272, 0, 273, 0, 0, 0, 274, 0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 0, 277, 278, 0, 279, 0, 0, 0, 0, 0, 0,
    280, 0, 281, 0, 282, 0, 0, 283, 0, 0, 284, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 289, 0, 0, 0, 290, 0, 291, 0, 0,
    0, 292, 0, 0, 0, 0, 0, 293, 294, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 297, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0,
    302, 0, 0, 303, 0, 0, 304, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 0, 0, 0, 0, 309, 310, 0, 311, 0, 0, 0, 0,
    0, 0, 312, 0, 313, 0, 314, 0, 0, 315, 0, 0, 316, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 323,
    0, 0, 0, 324, 0, 0, 0, 0, 0, 325, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 330, 0, 0, 331, 0, 0, 332, 0, 333,
    0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 338, 0, 339, 0, 0, 0, 340, 0, 0, 0, 0, 0, 341, 342, 0, 343, 0, 0,
    0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 347, 0, 0, 348, 0, 349, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 0, 354,
    0, 355, 0, 0, 0, 356, 0, 0, 0, 0, 0, 357, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 0, 362, 363, 0, 364,
    0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 0, 368, 0, 0, 369, 0, 370, 0, 0, 371, 0, 0, 372, 0, 0, 373, 0, 374, 0, 0,
    0, 375, 0, 376, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 379, 0, 380, 0, 0, 0, 0, 0, 0, 381, 0, 382, 0, 383, 0, 0, 384, 0,
    0, 385, 0, 386, 0, 0, 387, 0, 0, 388, 0, 0, 389, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 393, 0, 394, 0, 395, 0, 0,
    396, 0, 0, 397, 0, 398, 0, 0, 399, 0, 0, 400, 0, 0, 401, 0, 402, 0, 0, 0, 403, 0, 404, 0, 0, 0, 405, 0, 0, 0, 0, 0,
    406, 407, 0, 408, 0, 0, 0, 0, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 412, 0, 0, 413, 0, 414, 0, 0, 415, 0, 0, 416, 0, 0,
    417, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 424, 0, 425, 0, 426, 0, 427, 0, 0, 428, 0, 429,
    0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0,
    435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0,
    0, 0, 0, 441, 0, 0, 442, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 446, 0, 0, 0, 447, 0, 0, 0,
    0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    460, 0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0,
    0, 0, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 481, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 510,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 513,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 516,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521,
    0, 522, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 529, 0, 0,
    0, 0, 530, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 542,
    0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    551, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 554, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 557,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0,
    0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 566,
    0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 569, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 571, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576,
    0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 581, 0, 0, 0, 0, 0, 582,
    0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 587, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 603, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605,
    0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 0,
    0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    615, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0,
    0, 0, 0, 621, 0, 622, 0, 623, 0, 624, 0, 625, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0,
    631, 0, 0, 632, 0, 0, 0, 0, 0, 633, 0, 0, 634, 0, 635, 0, 0, 0, 636, 637, 0, 0, 0, 0, 638, 0, 639, 640, 0, 0, 0, 641,
    0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 645, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0,
    653, 0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 0, 0, 659, 0, 0, 0, 660, 0, 0,
    0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 0, 668, 0,
    0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0,
    674, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 679, 0, 0,
    0, 0, 0, 0, 0, 0, 680, 681, 0, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 684, 0, 685, 0, 0, 0, 686, 0, 0,
    0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 696, 0, 697, 698, 0, 0, 0, 699, 700, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 709, 0,
    0, 0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 713, 0, 714, 0, 715, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 0, 0, 718, 0, 0,
    0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0, 723, 0, 0, 0, 0, 724, 0, 0, 0, 725,
    0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 728, 0, 0, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 731, 0,
    0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 735, 0, 0, 736, 0, 0, 737, 0, 738, 0, 739, 0, 0,
    0, 0, 0, 740, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 0, 746,
    747, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 750, 0, 0, 751, 0, 0, 752, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0,
    755, 0, 0, 0, 0, 756, 0, 757, 0, 0, 758, 0, 0, 759, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 0,
    0, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 768, 769, 0, 0, 770, 0,
    0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 780,
};
void recomp_unit_0157_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A78000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0157[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A78000;
    case 2u: goto L_08A7800C;
    case 3u: goto L_08A78018;
    case 4u: goto L_08A78020;
    case 5u: goto L_08A78030;
    case 6u: goto L_08A7803C;
    case 7u: goto L_08A7807C;
    case 8u: goto L_08A78090;
    case 9u: goto L_08A780A0;
    case 10u: goto L_08A780BC;
    case 11u: goto L_08A780C4;
    case 12u: goto L_08A780D0;
    case 13u: goto L_08A780D4;
    case 14u: goto L_08A78128;
    case 15u: goto L_08A78170;
    case 16u: goto L_08A781A0;
    case 17u: goto L_08A781AC;
    case 18u: goto L_08A781B4;
    case 19u: goto L_08A781BC;
    case 20u: goto L_08A781CC;
    case 21u: goto L_08A781E0;
    case 22u: goto L_08A781EC;
    case 23u: goto L_08A78200;
    case 24u: goto L_08A78208;
    case 25u: goto L_08A78210;
    case 26u: goto L_08A78224;
    case 27u: goto L_08A7822C;
    case 28u: goto L_08A78234;
    case 29u: goto L_08A7823C;
    case 30u: goto L_08A7827C;
    case 31u: goto L_08A782B8;
    case 32u: goto L_08A782F4;
    case 33u: goto L_08A78334;
    case 34u: goto L_08A7833C;
    case 35u: goto L_08A78350;
    case 36u: goto L_08A78360;
    case 37u: goto L_08A78398;
    case 38u: goto L_08A783A0;
    case 39u: goto L_08A783A8;
    case 40u: goto L_08A783AC;
    case 41u: goto L_08A783C0;
    case 42u: goto L_08A783D8;
    case 43u: goto L_08A78408;
    case 44u: goto L_08A78410;
    case 45u: goto L_08A7841C;
    case 46u: goto L_08A78420;
    case 47u: goto L_08A7842C;
    case 48u: goto L_08A78448;
    case 49u: goto L_08A78474;
    case 50u: goto L_08A78484;
    case 51u: goto L_08A7848C;
    case 52u: goto L_08A78494;
    case 53u: goto L_08A7849C;
    case 54u: goto L_08A784AC;
    case 55u: goto L_08A784C4;
    case 56u: goto L_08A784D4;
    case 57u: goto L_08A784DC;
    case 58u: goto L_08A784E4;
    case 59u: goto L_08A784EC;
    case 60u: goto L_08A784F4;
    case 61u: goto L_08A784FC;
    case 62u: goto L_08A7850C;
    case 63u: goto L_08A78514;
    case 64u: goto L_08A78524;
    case 65u: goto L_08A7853C;
    case 66u: goto L_08A7854C;
    case 67u: goto L_08A78554;
    case 68u: goto L_08A78564;
    case 69u: goto L_08A7856C;
    case 70u: goto L_08A7857C;
    case 71u: goto L_08A78584;
    case 72u: goto L_08A78594;
    case 73u: goto L_08A7859C;
    case 74u: goto L_08A785AC;
    case 75u: goto L_08A785B4;
    case 76u: goto L_08A785C4;
    case 77u: goto L_08A785CC;
    case 78u: goto L_08A785DC;
    case 79u: goto L_08A785E4;
    case 80u: goto L_08A785F4;
    case 81u: goto L_08A785FC;
    case 82u: goto L_08A7860C;
    case 83u: goto L_08A78614;
    case 84u: goto L_08A78624;
    case 85u: goto L_08A7862C;
    case 86u: goto L_08A7863C;
    case 87u: goto L_08A78644;
    case 88u: goto L_08A78654;
    case 89u: goto L_08A7865C;
    case 90u: goto L_08A7866C;
    case 91u: goto L_08A78674;
    case 92u: goto L_08A78684;
    case 93u: goto L_08A7868C;
    case 94u: goto L_08A7869C;
    case 95u: goto L_08A786A4;
    case 96u: goto L_08A786B4;
    case 97u: goto L_08A786BC;
    case 98u: goto L_08A786CC;
    case 99u: goto L_08A786D4;
    case 100u: goto L_08A786E4;
    case 101u: goto L_08A786EC;
    case 102u: goto L_08A786FC;
    case 103u: goto L_08A78704;
    case 104u: goto L_08A78714;
    case 105u: goto L_08A7871C;
    case 106u: goto L_08A7872C;
    case 107u: goto L_08A78734;
    case 108u: goto L_08A78744;
    case 109u: goto L_08A7874C;
    case 110u: goto L_08A7875C;
    case 111u: goto L_08A78764;
    case 112u: goto L_08A78774;
    case 113u: goto L_08A7877C;
    case 114u: goto L_08A7878C;
    case 115u: goto L_08A78794;
    case 116u: goto L_08A787A4;
    case 117u: goto L_08A787AC;
    case 118u: goto L_08A787BC;
    case 119u: goto L_08A787C4;
    case 120u: goto L_08A787D4;
    case 121u: goto L_08A787DC;
    case 122u: goto L_08A787EC;
    case 123u: goto L_08A787F4;
    case 124u: goto L_08A78804;
    case 125u: goto L_08A7880C;
    case 126u: goto L_08A7881C;
    case 127u: goto L_08A78824;
    case 128u: goto L_08A78834;
    case 129u: goto L_08A7883C;
    case 130u: goto L_08A7884C;
    case 131u: goto L_08A78854;
    case 132u: goto L_08A78864;
    case 133u: goto L_08A7886C;
    case 134u: goto L_08A7887C;
    case 135u: goto L_08A78884;
    case 136u: goto L_08A78894;
    case 137u: goto L_08A7889C;
    case 138u: goto L_08A788AC;
    case 139u: goto L_08A788B4;
    case 140u: goto L_08A788C4;
    case 141u: goto L_08A788CC;
    case 142u: goto L_08A788DC;
    case 143u: goto L_08A788E4;
    case 144u: goto L_08A788F4;
    case 145u: goto L_08A788FC;
    case 146u: goto L_08A7890C;
    case 147u: goto L_08A78914;
    case 148u: goto L_08A78924;
    case 149u: goto L_08A7892C;
    case 150u: goto L_08A7893C;
    case 151u: goto L_08A78944;
    case 152u: goto L_08A78954;
    case 153u: goto L_08A7895C;
    case 154u: goto L_08A7896C;
    case 155u: goto L_08A78974;
    case 156u: goto L_08A78984;
    case 157u: goto L_08A7898C;
    case 158u: goto L_08A7899C;
    case 159u: goto L_08A789A4;
    case 160u: goto L_08A789B4;
    case 161u: goto L_08A789BC;
    case 162u: goto L_08A789CC;
    case 163u: goto L_08A789D4;
    case 164u: goto L_08A789E4;
    case 165u: goto L_08A789EC;
    case 166u: goto L_08A789FC;
    case 167u: goto L_08A78A04;
    case 168u: goto L_08A78A14;
    case 169u: goto L_08A78A1C;
    case 170u: goto L_08A78A2C;
    case 171u: goto L_08A78A34;
    case 172u: goto L_08A78A44;
    case 173u: goto L_08A78A4C;
    case 174u: goto L_08A78A5C;
    case 175u: goto L_08A78A64;
    case 176u: goto L_08A78A74;
    case 177u: goto L_08A78A7C;
    case 178u: goto L_08A78A8C;
    case 179u: goto L_08A78A94;
    case 180u: goto L_08A78AA4;
    case 181u: goto L_08A78AAC;
    case 182u: goto L_08A78ABC;
    case 183u: goto L_08A78AC4;
    case 184u: goto L_08A78AD4;
    case 185u: goto L_08A78ADC;
    case 186u: goto L_08A78AEC;
    case 187u: goto L_08A78AF4;
    case 188u: goto L_08A78B04;
    case 189u: goto L_08A78B0C;
    case 190u: goto L_08A78B1C;
    case 191u: goto L_08A78B24;
    case 192u: goto L_08A78B34;
    case 193u: goto L_08A78B3C;
    case 194u: goto L_08A78B4C;
    case 195u: goto L_08A78B54;
    case 196u: goto L_08A78B64;
    case 197u: goto L_08A78B6C;
    case 198u: goto L_08A78B7C;
    case 199u: goto L_08A78B84;
    case 200u: goto L_08A78B94;
    case 201u: goto L_08A78B9C;
    case 202u: goto L_08A78BAC;
    case 203u: goto L_08A78BB4;
    case 204u: goto L_08A78BC4;
    case 205u: goto L_08A78BCC;
    case 206u: goto L_08A78BDC;
    case 207u: goto L_08A78BE4;
    case 208u: goto L_08A78BF4;
    case 209u: goto L_08A78BFC;
    case 210u: goto L_08A78C0C;
    case 211u: goto L_08A78C14;
    case 212u: goto L_08A78C24;
    case 213u: goto L_08A78C2C;
    case 214u: goto L_08A78C3C;
    case 215u: goto L_08A78C44;
    case 216u: goto L_08A78C54;
    case 217u: goto L_08A78C5C;
    case 218u: goto L_08A78C6C;
    case 219u: goto L_08A78C74;
    case 220u: goto L_08A78C84;
    case 221u: goto L_08A78C8C;
    case 222u: goto L_08A78C9C;
    case 223u: goto L_08A78CA4;
    case 224u: goto L_08A78CB4;
    case 225u: goto L_08A78CBC;
    case 226u: goto L_08A78CCC;
    case 227u: goto L_08A78CD4;
    case 228u: goto L_08A78CE4;
    case 229u: goto L_08A78CEC;
    case 230u: goto L_08A78CFC;
    case 231u: goto L_08A78D04;
    case 232u: goto L_08A78D14;
    case 233u: goto L_08A78D1C;
    case 234u: goto L_08A78D2C;
    case 235u: goto L_08A78D34;
    case 236u: goto L_08A78D44;
    case 237u: goto L_08A78D4C;
    case 238u: goto L_08A78D5C;
    case 239u: goto L_08A78D64;
    case 240u: goto L_08A78D74;
    case 241u: goto L_08A78D7C;
    case 242u: goto L_08A78D8C;
    case 243u: goto L_08A78D94;
    case 244u: goto L_08A78DA8;
    case 245u: goto L_08A78DB0;
    case 246u: goto L_08A78DC0;
    case 247u: goto L_08A78DC8;
    case 248u: goto L_08A78DE0;
    case 249u: goto L_08A78DF4;
    case 250u: goto L_08A78E04;
    case 251u: goto L_08A78E1C;
    case 252u: goto L_08A78E24;
    case 253u: goto L_08A78E2C;
    case 254u: goto L_08A78E34;
    case 255u: goto L_08A78E48;
    case 256u: goto L_08A78E4C;
    case 257u: goto L_08A78E54;
    case 258u: goto L_08A78E68;
    case 259u: goto L_08A78E70;
    case 260u: goto L_08A78E84;
    case 261u: goto L_08A78E8C;
    case 262u: goto L_08A78EA0;
    case 263u: goto L_08A78EA8;
    case 264u: goto L_08A78EBC;
    case 265u: goto L_08A78EC4;
    case 266u: goto L_08A78ECC;
    case 267u: goto L_08A78ED8;
    case 268u: goto L_08A78EE4;
    case 269u: goto L_08A78EEC;
    case 270u: goto L_08A78EF8;
    case 271u: goto L_08A78F04;
    case 272u: goto L_08A78F10;
    case 273u: goto L_08A78F18;
    case 274u: goto L_08A78F28;
    case 275u: goto L_08A78F30;
    case 276u: goto L_08A78F40;
    case 277u: goto L_08A78F58;
    case 278u: goto L_08A78F5C;
    case 279u: goto L_08A78F64;
    case 280u: goto L_08A78F80;
    case 281u: goto L_08A78F88;
    case 282u: goto L_08A78F90;
    case 283u: goto L_08A78F9C;
    case 284u: goto L_08A78FA8;
    case 285u: goto L_08A78FB0;
    case 286u: goto L_08A78FBC;
    case 287u: goto L_08A78FC8;
    case 288u: goto L_08A78FD4;
    case 289u: goto L_08A78FDC;
    case 290u: goto L_08A78FEC;
    case 291u: goto L_08A78FF4;
    case 292u: goto L_08A79004;
    case 293u: goto L_08A7901C;
    case 294u: goto L_08A79020;
    case 295u: goto L_08A79028;
    case 296u: goto L_08A79044;
    case 297u: goto L_08A7904C;
    case 298u: goto L_08A79054;
    case 299u: goto L_08A79060;
    case 300u: goto L_08A7906C;
    case 301u: goto L_08A79074;
    case 302u: goto L_08A79080;
    case 303u: goto L_08A7908C;
    case 304u: goto L_08A79098;
    case 305u: goto L_08A790A0;
    case 306u: goto L_08A790B0;
    case 307u: goto L_08A790B8;
    case 308u: goto L_08A790C8;
    case 309u: goto L_08A790E0;
    case 310u: goto L_08A790E4;
    case 311u: goto L_08A790EC;
    case 312u: goto L_08A79108;
    case 313u: goto L_08A79110;
    case 314u: goto L_08A79118;
    case 315u: goto L_08A79124;
    case 316u: goto L_08A79130;
    case 317u: goto L_08A79138;
    case 318u: goto L_08A79144;
    case 319u: goto L_08A79150;
    case 320u: goto L_08A7915C;
    case 321u: goto L_08A79164;
    case 322u: goto L_08A79174;
    case 323u: goto L_08A7917C;
    case 324u: goto L_08A7918C;
    case 325u: goto L_08A791A4;
    case 326u: goto L_08A791A8;
    case 327u: goto L_08A791B0;
    case 328u: goto L_08A791CC;
    case 329u: goto L_08A791D4;
    case 330u: goto L_08A791DC;
    case 331u: goto L_08A791E8;
    case 332u: goto L_08A791F4;
    case 333u: goto L_08A791FC;
    case 334u: goto L_08A79208;
    case 335u: goto L_08A79214;
    case 336u: goto L_08A79220;
    case 337u: goto L_08A79228;
    case 338u: goto L_08A79238;
    case 339u: goto L_08A79240;
    case 340u: goto L_08A79250;
    case 341u: goto L_08A79268;
    case 342u: goto L_08A7926C;
    case 343u: goto L_08A79274;
    case 344u: goto L_08A79290;
    case 345u: goto L_08A79298;
    case 346u: goto L_08A792A0;
    case 347u: goto L_08A792AC;
    case 348u: goto L_08A792B8;
    case 349u: goto L_08A792C0;
    case 350u: goto L_08A792CC;
    case 351u: goto L_08A792D8;
    case 352u: goto L_08A792E4;
    case 353u: goto L_08A792EC;
    case 354u: goto L_08A792FC;
    case 355u: goto L_08A79304;
    case 356u: goto L_08A79314;
    case 357u: goto L_08A7932C;
    case 358u: goto L_08A79330;
    case 359u: goto L_08A79338;
    case 360u: goto L_08A79348;
    case 361u: goto L_08A79358;
    case 362u: goto L_08A79370;
    case 363u: goto L_08A79374;
    case 364u: goto L_08A7937C;
    case 365u: goto L_08A79398;
    case 366u: goto L_08A793A0;
    case 367u: goto L_08A793A8;
    case 368u: goto L_08A793B4;
    case 369u: goto L_08A793C0;
    case 370u: goto L_08A793C8;
    case 371u: goto L_08A793D4;
    case 372u: goto L_08A793E0;
    case 373u: goto L_08A793EC;
    case 374u: goto L_08A793F4;
    case 375u: goto L_08A79404;
    case 376u: goto L_08A7940C;
    case 377u: goto L_08A7941C;
    case 378u: goto L_08A79434;
    case 379u: goto L_08A79438;
    case 380u: goto L_08A79440;
    case 381u: goto L_08A7945C;
    case 382u: goto L_08A79464;
    case 383u: goto L_08A7946C;
    case 384u: goto L_08A79478;
    case 385u: goto L_08A79484;
    case 386u: goto L_08A7948C;
    case 387u: goto L_08A79498;
    case 388u: goto L_08A794A4;
    case 389u: goto L_08A794B0;
    case 390u: goto L_08A794B8;
    case 391u: goto L_08A794C8;
    case 392u: goto L_08A794D0;
    case 393u: goto L_08A794E4;
    case 394u: goto L_08A794EC;
    case 395u: goto L_08A794F4;
    case 396u: goto L_08A79500;
    case 397u: goto L_08A7950C;
    case 398u: goto L_08A79514;
    case 399u: goto L_08A79520;
    case 400u: goto L_08A7952C;
    case 401u: goto L_08A79538;
    case 402u: goto L_08A79540;
    case 403u: goto L_08A79550;
    case 404u: goto L_08A79558;
    case 405u: goto L_08A79568;
    case 406u: goto L_08A79580;
    case 407u: goto L_08A79584;
    case 408u: goto L_08A7958C;
    case 409u: goto L_08A795AC;
    case 410u: goto L_08A795B4;
    case 411u: goto L_08A795BC;
    case 412u: goto L_08A795C8;
    case 413u: goto L_08A795D4;
    case 414u: goto L_08A795DC;
    case 415u: goto L_08A795E8;
    case 416u: goto L_08A795F4;
    case 417u: goto L_08A79600;
    case 418u: goto L_08A79608;
    case 419u: goto L_08A79614;
    case 420u: goto L_08A7961C;
    case 421u: goto L_08A79624;
    case 422u: goto L_08A79630;
    case 423u: goto L_08A796C8;
    case 424u: goto L_08A796D0;
    case 425u: goto L_08A796D8;
    case 426u: goto L_08A796E0;
    case 427u: goto L_08A796E8;
    case 428u: goto L_08A796F4;
    case 429u: goto L_08A796FC;
    case 430u: goto L_08A79704;
    case 431u: goto L_08A79714;
    case 432u: goto L_08A7972C;
    case 433u: goto L_08A79748;
    case 434u: goto L_08A79764;
    case 435u: goto L_08A79780;
    case 436u: goto L_08A7979C;
    case 437u: goto L_08A797B8;
    case 438u: goto L_08A797D4;
    case 439u: goto L_08A797EC;
    case 440u: goto L_08A797F8;
    case 441u: goto L_08A7980C;
    case 442u: goto L_08A79818;
    case 443u: goto L_08A79820;
    case 444u: goto L_08A79834;
    case 445u: goto L_08A79848;
    case 446u: goto L_08A79860;
    case 447u: goto L_08A79870;
    case 448u: goto L_08A79890;
    case 449u: goto L_08A798A4;
    case 450u: goto L_08A798EC;
    case 451u: goto L_08A7999C;
    case 452u: goto L_08A799B4;
    case 453u: goto L_08A799C0;
    case 454u: goto L_08A799CC;
    case 455u: goto L_08A799E4;
    case 456u: goto L_08A79A0C;
    case 457u: goto L_08A79A28;
    case 458u: goto L_08A79A30;
    case 459u: goto L_08A79A48;
    case 460u: goto L_08A79A80;
    case 461u: goto L_08A79A88;
    case 462u: goto L_08A79AAC;
    case 463u: goto L_08A79AD0;
    case 464u: goto L_08A79AE8;
    case 465u: goto L_08A79B0C;
    case 466u: goto L_08A79B28;
    case 467u: goto L_08A79B3C;
    case 468u: goto L_08A79B44;
    case 469u: goto L_08A79B5C;
    case 470u: goto L_08A79B6C;
    case 471u: goto L_08A79B9C;
    case 472u: goto L_08A79BA8;
    case 473u: goto L_08A79BD0;
    case 474u: goto L_08A79BE0;
    case 475u: goto L_08A79C3C;
    case 476u: goto L_08A79C50;
    case 477u: goto L_08A79C98;
    case 478u: goto L_08A79CC0;
    case 479u: goto L_08A79CD8;
    case 480u: goto L_08A79CE8;
    case 481u: goto L_08A79CF4;
    case 482u: goto L_08A79D28;
    case 483u: goto L_08A79D4C;
    case 484u: goto L_08A79D54;
    case 485u: goto L_08A79DA0;
    case 486u: goto L_08A79DEC;
    case 487u: goto L_08A79E38;
    case 488u: goto L_08A79E84;
    case 489u: goto L_08A79ED0;
    case 490u: goto L_08A79F1C;
    case 491u: goto L_08A79F68;
    case 492u: goto L_08A79FB4;
    case 493u: goto L_08A7A000;
    case 494u: goto L_08A7A04C;
    case 495u: goto L_08A7A098;
    case 496u: goto L_08A7A0E4;
    case 497u: goto L_08A7A130;
    case 498u: goto L_08A7A17C;
    case 499u: goto L_08A7A1D4;
    case 500u: goto L_08A7A220;
    case 501u: goto L_08A7A26C;
    case 502u: goto L_08A7A2B8;
    case 503u: goto L_08A7A308;
    case 504u: goto L_08A7A354;
    case 505u: goto L_08A7A380;
    case 506u: goto L_08A7A3C0;
    case 507u: goto L_08A7A3EC;
    case 508u: goto L_08A7A42C;
    case 509u: goto L_08A7A468;
    case 510u: goto L_08A7A47C;
    case 511u: goto L_08A7A4BC;
    case 512u: goto L_08A7A4E8;
    case 513u: goto L_08A7A4FC;
    case 514u: goto L_08A7A53C;
    case 515u: goto L_08A7A568;
    case 516u: goto L_08A7A57C;
    case 517u: goto L_08A7A5BC;
    case 518u: goto L_08A7A5C4;
    case 519u: goto L_08A7A5D0;
    case 520u: goto L_08A7A5E4;
    case 521u: goto L_08A7A5FC;
    case 522u: goto L_08A7A604;
    case 523u: goto L_08A7A60C;
    case 524u: goto L_08A7A620;
    case 525u: goto L_08A7A634;
    case 526u: goto L_08A7A648;
    case 527u: goto L_08A7A658;
    case 528u: goto L_08A7A698;
    case 529u: goto L_08A7A6F4;
    case 530u: goto L_08A7A708;
    case 531u: goto L_08A7A740;
    case 532u: goto L_08A7A770;
    case 533u: goto L_08A7A798;
    case 534u: goto L_08A7A7C8;
    case 535u: goto L_08A7A7E8;
    case 536u: goto L_08A7A818;
    case 537u: goto L_08A7A838;
    case 538u: goto L_08A7A868;
    case 539u: goto L_08A7A890;
    case 540u: goto L_08A7A8C8;
    case 541u: goto L_08A7A8EC;
    case 542u: goto L_08A7A8FC;
    case 543u: goto L_08A7A918;
    case 544u: goto L_08A7A92C;
    case 545u: goto L_08A7A934;
    case 546u: goto L_08A7A950;
    case 547u: goto L_08A7A964;
    case 548u: goto L_08A7A96C;
    case 549u: goto L_08A7A9A0;
    case 550u: goto L_08A7A9CC;
    case 551u: goto L_08A7AA00;
    case 552u: goto L_08A7AA2C;
    case 553u: goto L_08A7AA34;
    case 554u: goto L_08A7AA40;
    case 555u: goto L_08A7AA54;
    case 556u: goto L_08A7AA6C;
    case 557u: goto L_08A7AA7C;
    case 558u: goto L_08A7AAA8;
    case 559u: goto L_08A7AAC0;
    case 560u: goto L_08A7AAEC;
    case 561u: goto L_08A7AB04;
    case 562u: goto L_08A7AB3C;
    case 563u: goto L_08A7AB74;
    case 564u: goto L_08A7ABAC;
    case 565u: goto L_08A7ABE4;
    case 566u: goto L_08A7ABFC;
    case 567u: goto L_08A7AC14;
    case 568u: goto L_08A7AC3C;
    case 569u: goto L_08A7AC44;
    case 570u: goto L_08A7AC5C;
    case 571u: goto L_08A7AC74;
    case 572u: goto L_08A7AC9C;
    case 573u: goto L_08A7ACA4;
    case 574u: goto L_08A7ACBC;
    case 575u: goto L_08A7ACD4;
    case 576u: goto L_08A7ACFC;
    case 577u: goto L_08A7AD04;
    case 578u: goto L_08A7AD1C;
    case 579u: goto L_08A7AD34;
    case 580u: goto L_08A7AD5C;
    case 581u: goto L_08A7AD64;
    case 582u: goto L_08A7AD7C;
    case 583u: goto L_08A7AD94;
    case 584u: goto L_08A7ADBC;
    case 585u: goto L_08A7ADC4;
    case 586u: goto L_08A7ADDC;
    case 587u: goto L_08A7ADF4;
    case 588u: goto L_08A7AE1C;
    case 589u: goto L_08A7AE24;
    case 590u: goto L_08A7AE58;
    case 591u: goto L_08A7AE60;
    case 592u: goto L_08A7AE78;
    case 593u: goto L_08A7AEA4;
    case 594u: goto L_08A7AECC;
    case 595u: goto L_08A7AEFC;
    case 596u: goto L_08A7AF2C;
    case 597u: goto L_08A7AF5C;
    case 598u: goto L_08A7AF88;
    case 599u: goto L_08A7AFB8;
    case 600u: goto L_08A7AFE8;
    case 601u: goto L_08A7B03C;
    case 602u: goto L_08A7B044;
    case 603u: goto L_08A7B050;
    case 604u: goto L_08A7B064;
    case 605u: goto L_08A7B07C;
    case 606u: goto L_08A7B08C;
    case 607u: goto L_08A7B0AC;
    case 608u: goto L_08A7B0C8;
    case 609u: goto L_08A7B13C;
    case 610u: goto L_08A7B14C;
    case 611u: goto L_08A7B170;
    case 612u: goto L_08A7B188;
    case 613u: goto L_08A7B1B4;
    case 614u: goto L_08A7B1CC;
    case 615u: goto L_08A7B200;
    case 616u: goto L_08A7B214;
    case 617u: goto L_08A7B220;
    case 618u: goto L_08A7B230;
    case 619u: goto L_08A7B238;
    case 620u: goto L_08A7B278;
    case 621u: goto L_08A7B28C;
    case 622u: goto L_08A7B294;
    case 623u: goto L_08A7B29C;
    case 624u: goto L_08A7B2A4;
    case 625u: goto L_08A7B2AC;
    case 626u: goto L_08A7B2C4;
    case 627u: goto L_08A7B328;
    case 628u: goto L_08A7B34C;
    case 629u: goto L_08A7B360;
    case 630u: goto L_08A7B36C;
    case 631u: goto L_08A7B380;
    case 632u: goto L_08A7B38C;
    case 633u: goto L_08A7B3A4;
    case 634u: goto L_08A7B3B0;
    case 635u: goto L_08A7B3B8;
    case 636u: goto L_08A7B3C8;
    case 637u: goto L_08A7B3CC;
    case 638u: goto L_08A7B3E0;
    case 639u: goto L_08A7B3E8;
    case 640u: goto L_08A7B3EC;
    case 641u: goto L_08A7B3FC;
    case 642u: goto L_08A7B418;
    case 643u: goto L_08A7B430;
    case 644u: goto L_08A7B460;
    case 645u: goto L_08A7B46C;
    case 646u: goto L_08A7B4CC;
    case 647u: goto L_08A7B4DC;
    case 648u: goto L_08A7B514;
    case 649u: goto L_08A7B570;
    case 650u: goto L_08A7B5C4;
    case 651u: goto L_08A7B5E8;
    case 652u: goto L_08A7B5F4;
    case 653u: goto L_08A7B600;
    case 654u: goto L_08A7B608;
    case 655u: goto L_08A7B620;
    case 656u: goto L_08A7B630;
    case 657u: goto L_08A7B640;
    case 658u: goto L_08A7B654;
    case 659u: goto L_08A7B664;
    case 660u: goto L_08A7B674;
    case 661u: goto L_08A7B684;
    case 662u: goto L_08A7B694;
    case 663u: goto L_08A7B6A8;
    case 664u: goto L_08A7B6B8;
    case 665u: goto L_08A7B6C8;
    case 666u: goto L_08A7B6D8;
    case 667u: goto L_08A7B6E8;
    case 668u: goto L_08A7B6F8;
    case 669u: goto L_08A7B714;
    case 670u: goto L_08A7B728;
    case 671u: goto L_08A7B734;
    case 672u: goto L_08A7B748;
    case 673u: goto L_08A7B778;
    case 674u: goto L_08A7B780;
    case 675u: goto L_08A7B788;
    case 676u: goto L_08A7B7AC;
    case 677u: goto L_08A7B7CC;
    case 678u: goto L_08A7B7F0;
    case 679u: goto L_08A7B7F4;
    case 680u: goto L_08A7B818;
    case 681u: goto L_08A7B81C;
    case 682u: goto L_08A7B844;
    case 683u: goto L_08A7B84C;
    case 684u: goto L_08A7B85C;
    case 685u: goto L_08A7B864;
    case 686u: goto L_08A7B874;
    case 687u: goto L_08A7B888;
    case 688u: goto L_08A7B898;
    case 689u: goto L_08A7B8A8;
    case 690u: goto L_08A7B8B8;
    case 691u: goto L_08A7B8DC;
    case 692u: goto L_08A7B8EC;
    case 693u: goto L_08A7B8FC;
    case 694u: goto L_08A7B93C;
    case 695u: goto L_08A7B944;
    case 696u: goto L_08A7B94C;
    case 697u: goto L_08A7B954;
    case 698u: goto L_08A7B958;
    case 699u: goto L_08A7B968;
    case 700u: goto L_08A7B96C;
    case 701u: goto L_08A7B994;
    case 702u: goto L_08A7B9B4;
    case 703u: goto L_08A7B9F8;
    case 704u: goto L_08A7BA58;
    case 705u: goto L_08A7BA8C;
    case 706u: goto L_08A7BAC8;
    case 707u: goto L_08A7BAD4;
    case 708u: goto L_08A7BAEC;
    case 709u: goto L_08A7BAF8;
    case 710u: goto L_08A7BB0C;
    case 711u: goto L_08A7BB1C;
    case 712u: goto L_08A7BB28;
    case 713u: goto L_08A7BB30;
    case 714u: goto L_08A7BB38;
    case 715u: goto L_08A7BB40;
    case 716u: goto L_08A7BB54;
    case 717u: goto L_08A7BB60;
    case 718u: goto L_08A7BB74;
    case 719u: goto L_08A7BB88;
    case 720u: goto L_08A7BB9C;
    case 721u: goto L_08A7BBB4;
    case 722u: goto L_08A7BBC8;
    case 723u: goto L_08A7BBD8;
    case 724u: goto L_08A7BBEC;
    case 725u: goto L_08A7BBFC;
    case 726u: goto L_08A7BC14;
    case 727u: goto L_08A7BC28;
    case 728u: goto L_08A7BC38;
    case 729u: goto L_08A7BC50;
    case 730u: goto L_08A7BC64;
    case 731u: goto L_08A7BC78;
    case 732u: goto L_08A7BC8C;
    case 733u: goto L_08A7BCA0;
    case 734u: goto L_08A7BCC0;
    case 735u: goto L_08A7BCCC;
    case 736u: goto L_08A7BCD8;
    case 737u: goto L_08A7BCE4;
    case 738u: goto L_08A7BCEC;
    case 739u: goto L_08A7BCF4;
    case 740u: goto L_08A7BD0C;
    case 741u: goto L_08A7BD18;
    case 742u: goto L_08A7BD34;
    case 743u: goto L_08A7BD3C;
    case 744u: goto L_08A7BD54;
    case 745u: goto L_08A7BD60;
    case 746u: goto L_08A7BD7C;
    case 747u: goto L_08A7BD80;
    case 748u: goto L_08A7BDA4;
    case 749u: goto L_08A7BDB0;
    case 750u: goto L_08A7BDBC;
    case 751u: goto L_08A7BDC8;
    case 752u: goto L_08A7BDD4;
    case 753u: goto L_08A7BDDC;
    case 754u: goto L_08A7BDEC;
    case 755u: goto L_08A7BE00;
    case 756u: goto L_08A7BE14;
    case 757u: goto L_08A7BE1C;
    case 758u: goto L_08A7BE28;
    case 759u: goto L_08A7BE34;
    case 760u: goto L_08A7BE44;
    case 761u: goto L_08A7BE50;
    case 762u: goto L_08A7BE64;
    case 763u: goto L_08A7BE74;
    case 764u: goto L_08A7BE88;
    case 765u: goto L_08A7BEA0;
    case 766u: goto L_08A7BEC0;
    case 767u: goto L_08A7BEDC;
    case 768u: goto L_08A7BEE8;
    case 769u: goto L_08A7BEEC;
    case 770u: goto L_08A7BEF8;
    case 771u: goto L_08A7BF04;
    case 772u: goto L_08A7BF2C;
    case 773u: goto L_08A7BF5C;
    case 774u: goto L_08A7BF68;
    case 775u: goto L_08A7BF94;
    case 776u: goto L_08A7BFA0;
    case 777u: goto L_08A7BFB4;
    case 778u: goto L_08A7BFBC;
    case 779u: goto L_08A7BFF0;
    case 780u: goto L_08A7BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A78000:
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A78018;
      }
      goto L_08A7800C;
    }
L_08A7800C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A78020;
      }
      goto L_08A78018;
    }
L_08A78018:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A78020;
L_08A78020:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A78030u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A78030u) goto L_08A78030;
    return;
L_08A78030:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A780D4;
    }
    goto L_08A7803C;
L_08A7803C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 55u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
        goto L_08A780A0;
    }
    goto L_08A7807C;
L_08A7807C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
        goto L_08A780A0;
    }
    goto L_08A78090;
L_08A78090:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A780C4;
      }
      goto L_08A780A0;
    }
L_08A780A0:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(11200)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 61 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A780C4;
      }
      goto L_08A780BC;
    }
L_08A780BC:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(11200), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A780C4;
L_08A780C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A780D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A780D0u) goto L_08A780D0;
    return;
L_08A780D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A780D4;
L_08A780D4:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[23] = (ctx.gpr[23] & 65535u);
    ctx.gpr[8] = (0u | 20000u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[9] = (0u | 16500u);
    ctx.gpr[10] = (0u | 18000u);
    ctx.gpr[11] = (0u | 172u);
    ctx.gpr[2] = (0u | 171u);
    ctx.gpr[3] = (0u | 170u);
    ctx.gpr[12] = (0u | 169u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[13] = (0u | 286u);
    ctx.gpr[14] = (0u | 192u);
    ctx.gpr[24] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[15] = (32768u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 276u, 0x08A760ACu>(ctx, &aot_mem); return;
      }
      goto L_08A78128;
    }
L_08A78128:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
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
L_08A78170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A781B4;
      }
      goto L_08A781A0;
    }
L_08A781A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A781BC;
      }
      goto L_08A781AC;
    }
L_08A781AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78210;
      }
      goto L_08A781B4;
    }
L_08A781B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7842C;
      }
      goto L_08A781BC;
    }
L_08A781BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2004)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78208;
      }
      goto L_08A781CC;
    }
L_08A781CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17236), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A781E0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A78448;
L_08A781E0:
    ctx.gpr[4] = (0u | 5662u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A78200;
      }
      goto L_08A781EC;
    }
L_08A781EC:
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7833C;
      }
      goto L_08A78200;
    }
L_08A78200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7842C;
      }
      goto L_08A78208;
    }
L_08A78208:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7842C;
      }
      goto L_08A78210;
    }
L_08A78210:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17236), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 200u);
      if (branch_taken) {
          goto L_08A782B8;
      }
      goto L_08A78224;
    }
L_08A78224:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 115u);
      if (branch_taken) {
          goto L_08A7827C;
      }
      goto L_08A7822C;
    }
L_08A7822C:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 114u);
      if (branch_taken) {
          goto L_08A782F4;
      }
      goto L_08A78234;
    }
L_08A78234:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A78334;
      }
      goto L_08A7823C;
    }
L_08A7823C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (18460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3098));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7833C;
      }
      goto L_08A7827C;
    }
L_08A7827C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 51u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2615));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7833C;
      }
      goto L_08A782B8;
    }
L_08A782B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 34u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1480));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7833C;
      }
      goto L_08A782F4;
    }
L_08A782F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (18460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17352u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3069));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7833C;
      }
      goto L_08A78334;
    }
L_08A78334:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7842C;
      }
      goto L_08A7833C;
    }
L_08A7833C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7842C;
      }
      goto L_08A78350;
    }
L_08A78350:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78360u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A78360u) goto L_08A78360;
    return;
L_08A78360:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A78398u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 339u, 0x088C5B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78398u) goto L_08A78398;
    return;
L_08A78398:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A783A8;
      }
      goto L_08A783A0;
    }
L_08A783A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_08A783AC;
      }
      goto L_08A783A8;
    }
L_08A783A8:
    ctx.gpr[4] = (0u | 31u);
    goto L_08A783AC;
L_08A783AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A783C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A783C0u) goto L_08A783C0;
    return;
L_08A783C0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(85), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7842C;
      }
      goto L_08A783D8;
    }
L_08A783D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 107 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7841C;
      }
      goto L_08A78408;
    }
L_08A78408:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7841C;
      }
      goto L_08A78410;
    }
L_08A78410:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A78420;
      }
      goto L_08A7841C;
    }
L_08A7841C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(86), static_cast<std::uint8_t>(0u));
    goto L_08A78420;
L_08A78420:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(17248));
    ctx.gpr[31] = (0x08A7842Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 260u, 0x08A5DB30u>(ctx, &aot_mem) && ctx.pc == 0x08A7842Cu) goto L_08A7842C;
    return;
L_08A7842C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
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
L_08A78448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 42u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A7849C;
      }
      goto L_08A78474;
    }
L_08A78474:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 107 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A78494;
      }
      goto L_08A78484;
    }
L_08A78484:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78494;
      }
      goto L_08A7848C;
    }
L_08A7848C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7849C;
      }
      goto L_08A78494;
    }
L_08A78494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7849C;
    }
L_08A7849C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A784C4;
      }
      goto L_08A784AC;
    }
L_08A784AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1776)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A784EC;
      }
      goto L_08A784C4;
    }
L_08A784C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 104 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 107 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A784E4;
      }
      goto L_08A784D4;
    }
L_08A784D4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A784E4;
      }
      goto L_08A784DC;
    }
L_08A784DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A784EC;
      }
      goto L_08A784E4;
    }
L_08A784E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A784EC;
    }
L_08A784EC:
    ctx.gpr[31] = (0x08A784F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x08A784F4u) goto L_08A784F4;
    return;
L_08A784F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78514;
      }
      goto L_08A784FC;
    }
L_08A784FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7850Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A78DE0;
L_08A7850C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78514;
    }
L_08A78514:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(130) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DB0;
      }
      goto L_08A78524;
    }
L_08A78524:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25528)));
    jump_target = ctx.gpr[1];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7853C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7854Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_08A78DE0;
L_08A7854C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78554;
    }
L_08A78554:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78564u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 217u, 0x08A61318u>(ctx, &aot_mem) && ctx.pc == 0x08A78564u) goto L_08A78564;
    return;
L_08A78564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7856C;
    }
L_08A7856C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7857Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 255u, 0x08A6155Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7857Cu) goto L_08A7857C;
    return;
L_08A7857C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78584;
    }
L_08A78584:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78594u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 269u, 0x08A61628u>(ctx, &aot_mem) && ctx.pc == 0x08A78594u) goto L_08A78594;
    return;
L_08A78594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7859C;
    }
L_08A7859C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A785ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 282u, 0x08A616ECu>(ctx, &aot_mem) && ctx.pc == 0x08A785ACu) goto L_08A785AC;
    return;
L_08A785AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A785B4;
    }
L_08A785B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A785C4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 284u, 0x08A61708u>(ctx, &aot_mem) && ctx.pc == 0x08A785C4u) goto L_08A785C4;
    return;
L_08A785C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A785CC;
    }
L_08A785CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A785DCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 297u, 0x08A617C8u>(ctx, &aot_mem) && ctx.pc == 0x08A785DCu) goto L_08A785DC;
    return;
L_08A785DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A785E4;
    }
L_08A785E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A785F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 180u, 0x08A61078u>(ctx, &aot_mem) && ctx.pc == 0x08A785F4u) goto L_08A785F4;
    return;
L_08A785F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A785FC;
    }
L_08A785FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7860Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 432u, 0x08A6214Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7860Cu) goto L_08A7860C;
    return;
L_08A7860C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78614;
    }
L_08A78614:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78624u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 299u, 0x08A617E4u>(ctx, &aot_mem) && ctx.pc == 0x08A78624u) goto L_08A78624;
    return;
L_08A78624:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7862C;
    }
L_08A7862C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7863Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 332u, 0x08A61A3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7863Cu) goto L_08A7863C;
    return;
L_08A7863C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78644;
    }
L_08A78644:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78654u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 363u, 0x08A61C6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78654u) goto L_08A78654;
    return;
L_08A78654:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7865C;
    }
L_08A7865C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7866Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 398u, 0x08A61EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A7866Cu) goto L_08A7866C;
    return;
L_08A7866C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78674;
    }
L_08A78674:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78684u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 432u, 0x08A6214Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78684u) goto L_08A78684;
    return;
L_08A78684:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7868C;
    }
L_08A7868C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7869Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 493u, 0x08A6259Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7869Cu) goto L_08A7869C;
    return;
L_08A7869C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A786A4;
    }
L_08A786A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A786B4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 493u, 0x08A6259Cu>(ctx, &aot_mem) && ctx.pc == 0x08A786B4u) goto L_08A786B4;
    return;
L_08A786B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A786BC;
    }
L_08A786BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A786CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 526u, 0x08A627F4u>(ctx, &aot_mem) && ctx.pc == 0x08A786CCu) goto L_08A786CC;
    return;
L_08A786CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A786D4;
    }
L_08A786D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A786E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 554u, 0x08A629F0u>(ctx, &aot_mem) && ctx.pc == 0x08A786E4u) goto L_08A786E4;
    return;
L_08A786E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A786EC;
    }
L_08A786EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A786FCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 586u, 0x08A62C34u>(ctx, &aot_mem) && ctx.pc == 0x08A786FCu) goto L_08A786FC;
    return;
L_08A786FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78704;
    }
L_08A78704:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78714u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 467u, 0x08A623C4u>(ctx, &aot_mem) && ctx.pc == 0x08A78714u) goto L_08A78714;
    return;
L_08A78714:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7871C;
    }
L_08A7871C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7872Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 619u, 0x08A62E88u>(ctx, &aot_mem) && ctx.pc == 0x08A7872Cu) goto L_08A7872C;
    return;
L_08A7872C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78734;
    }
L_08A78734:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78744u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 652u, 0x08A630DCu>(ctx, &aot_mem) && ctx.pc == 0x08A78744u) goto L_08A78744;
    return;
L_08A78744:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7874C;
    }
L_08A7874C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7875Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 682u, 0x08A632FCu>(ctx, &aot_mem) && ctx.pc == 0x08A7875Cu) goto L_08A7875C;
    return;
L_08A7875C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78764;
    }
L_08A78764:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78774u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 711u, 0x08A63508u>(ctx, &aot_mem) && ctx.pc == 0x08A78774u) goto L_08A78774;
    return;
L_08A78774:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7877C;
    }
L_08A7877C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7878Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 744u, 0x08A6375Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7878Cu) goto L_08A7878C;
    return;
L_08A7878C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78794;
    }
L_08A78794:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A787A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 774u, 0x08A6397Cu>(ctx, &aot_mem) && ctx.pc == 0x08A787A4u) goto L_08A787A4;
    return;
L_08A787A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A787AC;
    }
L_08A787AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A787BCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 99u, 0x08A6C6C4u>(ctx, &aot_mem) && ctx.pc == 0x08A787BCu) goto L_08A787BC;
    return;
L_08A787BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A787C4;
    }
L_08A787C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A787D4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 804u, 0x08A63B9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A787D4u) goto L_08A787D4;
    return;
L_08A787D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A787DC;
    }
L_08A787DC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A787ECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 66u, 0x08A6C470u>(ctx, &aot_mem) && ctx.pc == 0x08A787ECu) goto L_08A787EC;
    return;
L_08A787EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A787F4;
    }
L_08A787F4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78804u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 836u, 0x08A63DE0u>(ctx, &aot_mem) && ctx.pc == 0x08A78804u) goto L_08A78804;
    return;
L_08A78804:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7880C;
    }
L_08A7880C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7881Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 11u, 0x08A640A4u>(ctx, &aot_mem) && ctx.pc == 0x08A7881Cu) goto L_08A7881C;
    return;
L_08A7881C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78824;
    }
L_08A78824:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78834u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 45u, 0x08A6430Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78834u) goto L_08A78834;
    return;
L_08A78834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7883C;
    }
L_08A7883C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7884Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 77u, 0x08A64550u>(ctx, &aot_mem) && ctx.pc == 0x08A7884Cu) goto L_08A7884C;
    return;
L_08A7884C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78854;
    }
L_08A78854:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78864u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 111u, 0x08A647B8u>(ctx, &aot_mem) && ctx.pc == 0x08A78864u) goto L_08A78864;
    return;
L_08A78864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7886C;
    }
L_08A7886C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7887Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 144u, 0x08A64A0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7887Cu) goto L_08A7887C;
    return;
L_08A7887C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78884;
    }
L_08A78884:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78894u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 182u, 0x08A64CBCu>(ctx, &aot_mem) && ctx.pc == 0x08A78894u) goto L_08A78894;
    return;
L_08A78894:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7889C;
    }
L_08A7889C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A788ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 182u, 0x08A64CBCu>(ctx, &aot_mem) && ctx.pc == 0x08A788ACu) goto L_08A788AC;
    return;
L_08A788AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A788B4;
    }
L_08A788B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A788C4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 216u, 0x08A64F24u>(ctx, &aot_mem) && ctx.pc == 0x08A788C4u) goto L_08A788C4;
    return;
L_08A788C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A788CC;
    }
L_08A788CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A788DCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 255u, 0x08A651E8u>(ctx, &aot_mem) && ctx.pc == 0x08A788DCu) goto L_08A788DC;
    return;
L_08A788DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A788E4;
    }
L_08A788E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A788F4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 290u, 0x08A6545Cu>(ctx, &aot_mem) && ctx.pc == 0x08A788F4u) goto L_08A788F4;
    return;
L_08A788F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A788FC;
    }
L_08A788FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7890Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 320u, 0x08A6567Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7890Cu) goto L_08A7890C;
    return;
L_08A7890C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78914;
    }
L_08A78914:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78924u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 350u, 0x08A6589Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78924u) goto L_08A78924;
    return;
L_08A78924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7892C;
    }
L_08A7892C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7893Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 383u, 0x08A65AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A7893Cu) goto L_08A7893C;
    return;
L_08A7893C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78944;
    }
L_08A78944:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78954u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 417u, 0x08A65D58u>(ctx, &aot_mem) && ctx.pc == 0x08A78954u) goto L_08A78954;
    return;
L_08A78954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7895C;
    }
L_08A7895C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7896Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 448u, 0x08A65F88u>(ctx, &aot_mem) && ctx.pc == 0x08A7896Cu) goto L_08A7896C;
    return;
L_08A7896C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78974;
    }
L_08A78974:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78984u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 484u, 0x08A66214u>(ctx, &aot_mem) && ctx.pc == 0x08A78984u) goto L_08A78984;
    return;
L_08A78984:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A7898C;
    }
L_08A7898C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7899Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 519u, 0x08A6648Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7899Cu) goto L_08A7899C;
    return;
L_08A7899C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A789A4;
    }
L_08A789A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A789B4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 564u, 0x08A667BCu>(ctx, &aot_mem) && ctx.pc == 0x08A789B4u) goto L_08A789B4;
    return;
L_08A789B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A789BC;
    }
L_08A789BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A789CCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 598u, 0x08A66A24u>(ctx, &aot_mem) && ctx.pc == 0x08A789CCu) goto L_08A789CC;
    return;
L_08A789CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A789D4;
    }
L_08A789D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A789E4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 634u, 0x08A66CACu>(ctx, &aot_mem) && ctx.pc == 0x08A789E4u) goto L_08A789E4;
    return;
L_08A789E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A789EC;
    }
L_08A789EC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A789FCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 666u, 0x08A66EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A789FCu) goto L_08A789FC;
    return;
L_08A789FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78A04;
    }
L_08A78A04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A14u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 705u, 0x08A671B0u>(ctx, &aot_mem) && ctx.pc == 0x08A78A14u) goto L_08A78A14;
    return;
L_08A78A14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78A1C;
    }
L_08A78A1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A2Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 744u, 0x08A67470u>(ctx, &aot_mem) && ctx.pc == 0x08A78A2Cu) goto L_08A78A2C;
    return;
L_08A78A2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78A34;
    }
L_08A78A34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A44u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 779u, 0x08A676E8u>(ctx, &aot_mem) && ctx.pc == 0x08A78A44u) goto L_08A78A44;
    return;
L_08A78A44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78A4C;
    }
L_08A78A4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A5Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 810u, 0x08A67918u>(ctx, &aot_mem) && ctx.pc == 0x08A78A5Cu) goto L_08A78A5C;
    return;
L_08A78A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78A64;
    }
L_08A78A64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A74u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 843u, 0x08A67B6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78A74u) goto L_08A78A74;
    return;
L_08A78A74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78A7C;
    }
L_08A78A7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78A8Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 880u, 0x08A67E0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78A8Cu) goto L_08A78A8C;
    return;
L_08A78A8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78A94;
    }
L_08A78A94:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78AA4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 3u, 0x08A68018u>(ctx, &aot_mem) && ctx.pc == 0x08A78AA4u) goto L_08A78AA4;
    return;
L_08A78AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78AAC;
    }
L_08A78AAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78ABCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 38u, 0x08A68294u>(ctx, &aot_mem) && ctx.pc == 0x08A78ABCu) goto L_08A78ABC;
    return;
L_08A78ABC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78AC4;
    }
L_08A78AC4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78AD4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 69u, 0x08A684C8u>(ctx, &aot_mem) && ctx.pc == 0x08A78AD4u) goto L_08A78AD4;
    return;
L_08A78AD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78ADC;
    }
L_08A78ADC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78AECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 106u, 0x08A68768u>(ctx, &aot_mem) && ctx.pc == 0x08A78AECu) goto L_08A78AEC;
    return;
L_08A78AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78AF4;
    }
L_08A78AF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B04u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 141u, 0x08A689E0u>(ctx, &aot_mem) && ctx.pc == 0x08A78B04u) goto L_08A78B04;
    return;
L_08A78B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78B0C;
    }
L_08A78B0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B1Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 175u, 0x08A68C48u>(ctx, &aot_mem) && ctx.pc == 0x08A78B1Cu) goto L_08A78B1C;
    return;
L_08A78B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78B24;
    }
L_08A78B24:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B34u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 205u, 0x08A68E68u>(ctx, &aot_mem) && ctx.pc == 0x08A78B34u) goto L_08A78B34;
    return;
L_08A78B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78B3C;
    }
L_08A78B3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B4Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 236u, 0x08A69098u>(ctx, &aot_mem) && ctx.pc == 0x08A78B4Cu) goto L_08A78B4C;
    return;
L_08A78B4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78B54;
    }
L_08A78B54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B64u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 906u, 0x08A6BFECu>(ctx, &aot_mem) && ctx.pc == 0x08A78B64u) goto L_08A78B64;
    return;
L_08A78B64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78B6C;
    }
L_08A78B6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B7Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 24u, 0x08A6C190u>(ctx, &aot_mem) && ctx.pc == 0x08A78B7Cu) goto L_08A78B7C;
    return;
L_08A78B7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78B84;
    }
L_08A78B84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78B94u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 263u, 0x08A69280u>(ctx, &aot_mem) && ctx.pc == 0x08A78B94u) goto L_08A78B94;
    return;
L_08A78B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78B9C;
    }
L_08A78B9C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78BACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 264u, 0x08A69288u>(ctx, &aot_mem) && ctx.pc == 0x08A78BACu) goto L_08A78BAC;
    return;
L_08A78BAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78BB4;
    }
L_08A78BB4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78BC4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 265u, 0x08A69290u>(ctx, &aot_mem) && ctx.pc == 0x08A78BC4u) goto L_08A78BC4;
    return;
L_08A78BC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78BCC;
    }
L_08A78BCC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78BDCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 290u, 0x08A69458u>(ctx, &aot_mem) && ctx.pc == 0x08A78BDCu) goto L_08A78BDC;
    return;
L_08A78BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78BE4;
    }
L_08A78BE4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78BF4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 315u, 0x08A69620u>(ctx, &aot_mem) && ctx.pc == 0x08A78BF4u) goto L_08A78BF4;
    return;
L_08A78BF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78BFC;
    }
L_08A78BFC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C0Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 338u, 0x08A697C4u>(ctx, &aot_mem) && ctx.pc == 0x08A78C0Cu) goto L_08A78C0C;
    return;
L_08A78C0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78C14;
    }
L_08A78C14:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C24u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 363u, 0x08A6998Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78C24u) goto L_08A78C24;
    return;
L_08A78C24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78C2C;
    }
L_08A78C2C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C3Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 388u, 0x08A69B54u>(ctx, &aot_mem) && ctx.pc == 0x08A78C3Cu) goto L_08A78C3C;
    return;
L_08A78C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78C44;
    }
L_08A78C44:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 413u, 0x08A69D1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78C54u) goto L_08A78C54;
    return;
L_08A78C54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78C5C;
    }
L_08A78C5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C6Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 438u, 0x08A69EE4u>(ctx, &aot_mem) && ctx.pc == 0x08A78C6Cu) goto L_08A78C6C;
    return;
L_08A78C6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78C74;
    }
L_08A78C74:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C84u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 463u, 0x08A6A0ACu>(ctx, &aot_mem) && ctx.pc == 0x08A78C84u) goto L_08A78C84;
    return;
L_08A78C84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78C8C;
    }
L_08A78C8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78C9Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 488u, 0x08A6A274u>(ctx, &aot_mem) && ctx.pc == 0x08A78C9Cu) goto L_08A78C9C;
    return;
L_08A78C9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78CA4;
    }
L_08A78CA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78CB4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 513u, 0x08A6A43Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78CB4u) goto L_08A78CB4;
    return;
L_08A78CB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78CBC;
    }
L_08A78CBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78CCCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 538u, 0x08A6A604u>(ctx, &aot_mem) && ctx.pc == 0x08A78CCCu) goto L_08A78CCC;
    return;
L_08A78CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78CD4;
    }
L_08A78CD4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78CE4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 563u, 0x08A6A7CCu>(ctx, &aot_mem) && ctx.pc == 0x08A78CE4u) goto L_08A78CE4;
    return;
L_08A78CE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78CEC;
    }
L_08A78CEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78CFCu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 588u, 0x08A6A994u>(ctx, &aot_mem) && ctx.pc == 0x08A78CFCu) goto L_08A78CFC;
    return;
L_08A78CFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78D04;
    }
L_08A78D04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78D14u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 613u, 0x08A6AB5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78D14u) goto L_08A78D14;
    return;
L_08A78D14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78D1C;
    }
L_08A78D1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78D2Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 638u, 0x08A6AD24u>(ctx, &aot_mem) && ctx.pc == 0x08A78D2Cu) goto L_08A78D2C;
    return;
L_08A78D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78D34;
    }
L_08A78D34:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78D44u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 663u, 0x08A6AEECu>(ctx, &aot_mem) && ctx.pc == 0x08A78D44u) goto L_08A78D44;
    return;
L_08A78D44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78D4C;
    }
L_08A78D4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78D5Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0153_entry, 153u, 688u, 0x08A6B0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A78D5Cu) goto L_08A78D5C;
    return;
L_08A78D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78D64;
    }
L_08A78D64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78D74u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 47u, 0x08A6C334u>(ctx, &aot_mem) && ctx.pc == 0x08A78D74u) goto L_08A78D74;
    return;
L_08A78D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78D7C;
    }
L_08A78D7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78D8Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 57u, 0x08A6C3E4u>(ctx, &aot_mem) && ctx.pc == 0x08A78D8Cu) goto L_08A78D8C;
    return;
L_08A78D8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78D94;
    }
L_08A78D94:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78DA8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 138u, 0x08A6C988u>(ctx, &aot_mem) && ctx.pc == 0x08A78DA8u) goto L_08A78DA8;
    return;
L_08A78DA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78DB0;
    }
L_08A78DB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A78DC0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A78DC0u) goto L_08A78DC0;
    return;
L_08A78DC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78DC8;
      }
      goto L_08A78DC8;
    }
L_08A78DC8:
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
L_08A78DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
      if (branch_taken) {
          goto L_08A78E1C;
      }
      goto L_08A78DF4;
    }
L_08A78DF4:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-103));
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(46) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7961C;
      }
      goto L_08A78E04;
    }
L_08A78E04:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-25008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A78E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A78E24;
    }
L_08A78E24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A78E2C;
    }
L_08A78E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A78E34;
    }
L_08A78E34:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 4797u);
    ctx.gpr[31] = (0x08A78E48u);
    ctx.gpr[8] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A78E48u) goto L_08A78E48;
    return;
L_08A78E48:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A78E4C;
L_08A78E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A78E54;
    }
L_08A78E54:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 4813u);
    ctx.gpr[31] = (0x08A78E68u);
    ctx.gpr[8] = (0u | 15u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A78E68u) goto L_08A78E68;
    return;
L_08A78E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A78E70;
    }
L_08A78E70:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 4785u);
    ctx.gpr[31] = (0x08A78E84u);
    ctx.gpr[8] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A78E84u) goto L_08A78E84;
    return;
L_08A78E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A78E8C;
    }
L_08A78E8C:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (0u | 4828u);
    ctx.gpr[31] = (0x08A78EA0u);
    ctx.gpr[8] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A78EA0u) goto L_08A78EA0;
    return;
L_08A78EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A78EA8;
    }
L_08A78EA8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A78ED8;
      }
      goto L_08A78EBC;
    }
L_08A78EBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A78F10;
      }
      goto L_08A78EC4;
    }
L_08A78EC4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A78EF8;
      }
      goto L_08A78ECC;
    }
L_08A78ECC:
    ctx.gpr[7] = (0u | 4482u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A78F18;
      }
      goto L_08A78ED8;
    }
L_08A78ED8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A78F04;
      }
      goto L_08A78EE4;
    }
L_08A78EE4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78F10;
      }
      goto L_08A78EEC;
    }
L_08A78EEC:
    ctx.gpr[7] = (0u | 4482u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A78F18;
      }
      goto L_08A78EF8;
    }
L_08A78EF8:
    ctx.gpr[7] = (0u | 4835u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_08A78F18;
      }
      goto L_08A78F04;
    }
L_08A78F04:
    ctx.gpr[7] = (0u | 4229u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 16u);
      if (branch_taken) {
          goto L_08A78F18;
      }
      goto L_08A78F10;
    }
L_08A78F10:
    ctx.gpr[7] = (0u | 4482u);
    ctx.gpr[6] = (0u | 25u);
    goto L_08A78F18;
L_08A78F18:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A78F28u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A78F28u) goto L_08A78F28;
    return;
L_08A78F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A78F30;
    }
L_08A78F30:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11209)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78F64;
      }
      goto L_08A78F40;
    }
L_08A78F40:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11209), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11209)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A78F5C;
      }
      goto L_08A78F58;
    }
L_08A78F58:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11209), static_cast<std::uint8_t>(0u));
    goto L_08A78F5C;
L_08A78F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A78F64;
    }
L_08A78F64:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11209), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A78F9C;
      }
      goto L_08A78F80;
    }
L_08A78F80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A78FD4;
      }
      goto L_08A78F88;
    }
L_08A78F88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A78FBC;
      }
      goto L_08A78F90;
    }
L_08A78F90:
    ctx.gpr[7] = (0u | 4506u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_08A78FDC;
      }
      goto L_08A78F9C;
    }
L_08A78F9C:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A78FC8;
      }
      goto L_08A78FA8;
    }
L_08A78FA8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A78FD4;
      }
      goto L_08A78FB0;
    }
L_08A78FB0:
    ctx.gpr[7] = (0u | 4506u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_08A78FDC;
      }
      goto L_08A78FBC;
    }
L_08A78FBC:
    ctx.gpr[7] = (0u | 4847u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A78FDC;
      }
      goto L_08A78FC8;
    }
L_08A78FC8:
    ctx.gpr[7] = (0u | 4245u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A78FDC;
      }
      goto L_08A78FD4;
    }
L_08A78FD4:
    ctx.gpr[7] = (0u | 4506u);
    ctx.gpr[6] = (0u | 20u);
    goto L_08A78FDC;
L_08A78FDC:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A78FECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A78FECu) goto L_08A78FEC;
    return;
L_08A78FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A78FF4;
    }
L_08A78FF4:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11210)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79028;
      }
      goto L_08A79004;
    }
L_08A79004:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11210), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11210)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79020;
      }
      goto L_08A7901C;
    }
L_08A7901C:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11210), static_cast<std::uint8_t>(0u));
    goto L_08A79020;
L_08A79020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A79028;
    }
L_08A79028:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11210), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A79060;
      }
      goto L_08A79044;
    }
L_08A79044:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A79098;
      }
      goto L_08A7904C;
    }
L_08A7904C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A79080;
      }
      goto L_08A79054;
    }
L_08A79054:
    ctx.gpr[7] = (0u | 4526u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 31u);
      if (branch_taken) {
          goto L_08A790A0;
      }
      goto L_08A79060;
    }
L_08A79060:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7908C;
      }
      goto L_08A7906C;
    }
L_08A7906C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79098;
      }
      goto L_08A79074;
    }
L_08A79074:
    ctx.gpr[7] = (0u | 5009u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 17u);
      if (branch_taken) {
          goto L_08A790A0;
      }
      goto L_08A79080;
    }
L_08A79080:
    ctx.gpr[7] = (0u | 4872u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A790A0;
      }
      goto L_08A7908C;
    }
L_08A7908C:
    ctx.gpr[7] = (0u | 4270u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 29u);
      if (branch_taken) {
          goto L_08A790A0;
      }
      goto L_08A79098;
    }
L_08A79098:
    ctx.gpr[7] = (0u | 4526u);
    ctx.gpr[6] = (0u | 31u);
    goto L_08A790A0;
L_08A790A0:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A790B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A790B0u) goto L_08A790B0;
    return;
L_08A790B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A790B8;
    }
L_08A790B8:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11211)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A790EC;
      }
      goto L_08A790C8;
    }
L_08A790C8:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11211), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11211)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A790E4;
      }
      goto L_08A790E0;
    }
L_08A790E0:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11211), static_cast<std::uint8_t>(0u));
    goto L_08A790E4;
L_08A790E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A790EC;
    }
L_08A790EC:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11211), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A79124;
      }
      goto L_08A79108;
    }
L_08A79108:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7915C;
      }
      goto L_08A79110;
    }
L_08A79110:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A79144;
      }
      goto L_08A79118;
    }
L_08A79118:
    ctx.gpr[7] = (0u | 4557u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 42u);
      if (branch_taken) {
          goto L_08A79164;
      }
      goto L_08A79124;
    }
L_08A79124:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A79150;
      }
      goto L_08A79130;
    }
L_08A79130:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7915C;
      }
      goto L_08A79138;
    }
L_08A79138:
    ctx.gpr[7] = (0u | 5026u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 20u);
      if (branch_taken) {
          goto L_08A79164;
      }
      goto L_08A79144;
    }
L_08A79144:
    ctx.gpr[7] = (0u | 4897u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 18u);
      if (branch_taken) {
          goto L_08A79164;
      }
      goto L_08A79150;
    }
L_08A79150:
    ctx.gpr[7] = (0u | 4299u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 39u);
      if (branch_taken) {
          goto L_08A79164;
      }
      goto L_08A7915C;
    }
L_08A7915C:
    ctx.gpr[7] = (0u | 4557u);
    ctx.gpr[6] = (0u | 42u);
    goto L_08A79164;
L_08A79164:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A79174u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A79174u) goto L_08A79174;
    return;
L_08A79174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A7917C;
    }
L_08A7917C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11212)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A791B0;
      }
      goto L_08A7918C;
    }
L_08A7918C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11212), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11212)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A791A8;
      }
      goto L_08A791A4;
    }
L_08A791A4:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11212), static_cast<std::uint8_t>(0u));
    goto L_08A791A8;
L_08A791A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A791B0;
    }
L_08A791B0:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11212), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A791E8;
      }
      goto L_08A791CC;
    }
L_08A791CC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A79220;
      }
      goto L_08A791D4;
    }
L_08A791D4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A79208;
      }
      goto L_08A791DC;
    }
L_08A791DC:
    ctx.gpr[7] = (0u | 4599u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 23u);
      if (branch_taken) {
          goto L_08A79228;
      }
      goto L_08A791E8;
    }
L_08A791E8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A79214;
      }
      goto L_08A791F4;
    }
L_08A791F4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79220;
      }
      goto L_08A791FC;
    }
L_08A791FC:
    ctx.gpr[7] = (0u | 5046u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 17u);
      if (branch_taken) {
          goto L_08A79228;
      }
      goto L_08A79208;
    }
L_08A79208:
    ctx.gpr[7] = (0u | 4915u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08A79228;
      }
      goto L_08A79214;
    }
L_08A79214:
    ctx.gpr[7] = (0u | 4338u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 16u);
      if (branch_taken) {
          goto L_08A79228;
      }
      goto L_08A79220;
    }
L_08A79220:
    ctx.gpr[7] = (0u | 4599u);
    ctx.gpr[6] = (0u | 23u);
    goto L_08A79228;
L_08A79228:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A79238u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A79238u) goto L_08A79238;
    return;
L_08A79238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A79240;
    }
L_08A79240:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11213)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79274;
      }
      goto L_08A79250;
    }
L_08A79250:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11213), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11213)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A7926C;
      }
      goto L_08A79268;
    }
L_08A79268:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11213), static_cast<std::uint8_t>(0u));
    goto L_08A7926C;
L_08A7926C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A79274;
    }
L_08A79274:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11213), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A792AC;
      }
      goto L_08A79290;
    }
L_08A79290:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A792E4;
      }
      goto L_08A79298;
    }
L_08A79298:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A792CC;
      }
      goto L_08A792A0;
    }
L_08A792A0:
    ctx.gpr[7] = (0u | 4622u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 39u);
      if (branch_taken) {
          goto L_08A792EC;
      }
      goto L_08A792AC;
    }
L_08A792AC:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A792D8;
      }
      goto L_08A792B8;
    }
L_08A792B8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A792E4;
      }
      goto L_08A792C0;
    }
L_08A792C0:
    ctx.gpr[7] = (0u | 5063u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 12u);
      if (branch_taken) {
          goto L_08A792EC;
      }
      goto L_08A792CC;
    }
L_08A792CC:
    ctx.gpr[7] = (0u | 4926u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 25u);
      if (branch_taken) {
          goto L_08A792EC;
      }
      goto L_08A792D8;
    }
L_08A792D8:
    ctx.gpr[7] = (0u | 4354u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 33u);
      if (branch_taken) {
          goto L_08A792EC;
      }
      goto L_08A792E4;
    }
L_08A792E4:
    ctx.gpr[7] = (0u | 4622u);
    ctx.gpr[6] = (0u | 39u);
    goto L_08A792EC;
L_08A792EC:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A792FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A792FCu) goto L_08A792FC;
    return;
L_08A792FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A79304;
    }
L_08A79304:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11214)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79338;
      }
      goto L_08A79314;
    }
L_08A79314:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11214), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11214)));
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A79330;
      }
      goto L_08A7932C;
    }
L_08A7932C:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11214), static_cast<std::uint8_t>(0u));
    goto L_08A79330;
L_08A79330:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A79338;
    }
L_08A79338:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11214), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A79348;
    }
L_08A79348:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11215)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7937C;
      }
      goto L_08A79358;
    }
L_08A79358:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11215), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11215)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79374;
      }
      goto L_08A79370;
    }
L_08A79370:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11215), static_cast<std::uint8_t>(0u));
    goto L_08A79374;
L_08A79374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A7937C;
    }
L_08A7937C:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11215), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A793B4;
      }
      goto L_08A79398;
    }
L_08A79398:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A793EC;
      }
      goto L_08A793A0;
    }
L_08A793A0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A793D4;
      }
      goto L_08A793A8;
    }
L_08A793A8:
    ctx.gpr[7] = (0u | 4677u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 18u);
      if (branch_taken) {
          goto L_08A793F4;
      }
      goto L_08A793B4;
    }
L_08A793B4:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A793E0;
      }
      goto L_08A793C0;
    }
L_08A793C0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A793EC;
      }
      goto L_08A793C8;
    }
L_08A793C8:
    ctx.gpr[7] = (0u | 5090u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08A793F4;
      }
      goto L_08A793D4;
    }
L_08A793D4:
    ctx.gpr[7] = (0u | 4399u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_08A793F4;
      }
      goto L_08A793E0;
    }
L_08A793E0:
    ctx.gpr[7] = (0u | 4399u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 8u);
      if (branch_taken) {
          goto L_08A793F4;
      }
      goto L_08A793EC;
    }
L_08A793EC:
    ctx.gpr[7] = (0u | 4677u);
    ctx.gpr[6] = (0u | 18u);
    goto L_08A793F4;
L_08A793F4:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A79404u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A79404u) goto L_08A79404;
    return;
L_08A79404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A7940C;
    }
L_08A7940C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11216)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79440;
      }
      goto L_08A7941C;
    }
L_08A7941C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11216), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11216)));
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79438;
      }
      goto L_08A79434;
    }
L_08A79434:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11216), static_cast<std::uint8_t>(0u));
    goto L_08A79438;
L_08A79438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A79440;
    }
L_08A79440:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11216), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A79478;
      }
      goto L_08A7945C;
    }
L_08A7945C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A794B0;
      }
      goto L_08A79464;
    }
L_08A79464:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A79498;
      }
      goto L_08A7946C;
    }
L_08A7946C:
    ctx.gpr[7] = (0u | 4695u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 35u);
      if (branch_taken) {
          goto L_08A794B8;
      }
      goto L_08A79478;
    }
L_08A79478:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A794A4;
      }
      goto L_08A79484;
    }
L_08A79484:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A794B0;
      }
      goto L_08A7948C;
    }
L_08A7948C:
    ctx.gpr[7] = (0u | 5101u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 19u);
      if (branch_taken) {
          goto L_08A794B8;
      }
      goto L_08A79498;
    }
L_08A79498:
    ctx.gpr[7] = (0u | 4960u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 18u);
      if (branch_taken) {
          goto L_08A794B8;
      }
      goto L_08A794A4;
    }
L_08A794A4:
    ctx.gpr[7] = (0u | 4407u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 29u);
      if (branch_taken) {
          goto L_08A794B8;
      }
      goto L_08A794B0;
    }
L_08A794B0:
    ctx.gpr[7] = (0u | 4695u);
    ctx.gpr[6] = (0u | 35u);
    goto L_08A794B8;
L_08A794B8:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A794C8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A794C8u) goto L_08A794C8;
    return;
L_08A794C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A794D0;
    }
L_08A794D0:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[2] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A79500;
      }
      goto L_08A794E4;
    }
L_08A794E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A79538;
      }
      goto L_08A794EC;
    }
L_08A794EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A7952C;
      }
      goto L_08A794F4;
    }
L_08A794F4:
    ctx.gpr[7] = (0u | 4730u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08A79540;
      }
      goto L_08A79500;
    }
L_08A79500:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A79520;
      }
      goto L_08A7950C;
    }
L_08A7950C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79538;
      }
      goto L_08A79514;
    }
L_08A79514:
    ctx.gpr[7] = (0u | 5120u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08A79540;
      }
      goto L_08A79520;
    }
L_08A79520:
    ctx.gpr[7] = (0u | 4436u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08A79540;
      }
      goto L_08A7952C;
    }
L_08A7952C:
    ctx.gpr[7] = (0u | 4436u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 10u);
      if (branch_taken) {
          goto L_08A79540;
      }
      goto L_08A79538;
    }
L_08A79538:
    ctx.gpr[7] = (0u | 4730u);
    ctx.gpr[6] = (0u | 10u);
    goto L_08A79540;
L_08A79540:
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A79550u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A79550u) goto L_08A79550;
    return;
L_08A79550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A79558;
    }
L_08A79558:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11217)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7958C;
      }
      goto L_08A79568;
    }
L_08A79568:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11217), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(11217)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A79584;
      }
      goto L_08A79580;
    }
L_08A79580:
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11217), static_cast<std::uint8_t>(0u));
    goto L_08A79584;
L_08A79584:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79624;
      }
      goto L_08A7958C;
    }
L_08A7958C:
    ctx.gpr[7] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11217), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17225)));
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[6] = (ctx.gpr[8] + static_cast<std::uint32_t>(2008));
      if (branch_taken) {
          goto L_08A795C8;
      }
      goto L_08A795AC;
    }
L_08A795AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A79600;
      }
      goto L_08A795B4;
    }
L_08A795B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A795F4;
      }
      goto L_08A795BC;
    }
L_08A795BC:
    ctx.gpr[2] = (0u | 4741u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 30u);
      if (branch_taken) {
          goto L_08A79608;
      }
      goto L_08A795C8;
    }
L_08A795C8:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A795E8;
      }
      goto L_08A795D4;
    }
L_08A795D4:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79600;
      }
      goto L_08A795DC;
    }
L_08A795DC:
    ctx.gpr[2] = (0u | 5130u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 26u);
      if (branch_taken) {
          goto L_08A79608;
      }
      goto L_08A795E8;
    }
L_08A795E8:
    ctx.gpr[2] = (0u | 4446u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 36u);
      if (branch_taken) {
          goto L_08A79608;
      }
      goto L_08A795F4;
    }
L_08A795F4:
    ctx.gpr[2] = (0u | 4978u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 31u);
      if (branch_taken) {
          goto L_08A79608;
      }
      goto L_08A79600;
    }
L_08A79600:
    ctx.gpr[2] = (0u | 4730u);
    ctx.gpr[7] = (0u | 30u);
    goto L_08A79608;
L_08A79608:
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A79614u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0151_entry, 151u, 174u, 0x08A61010u>(ctx, &aot_mem) && ctx.pc == 0x08A79614u) goto L_08A79614;
    return;
L_08A79614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A78E4C;
      }
      goto L_08A7961C;
    }
L_08A7961C:
    ctx.gpr[31] = (0x08A79624u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A79624u) goto L_08A79624;
    return;
L_08A79624:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79630:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (18204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18095u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51200u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[21] = (2233u << 16u);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[30]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[30] = (0u | 166u);
    ctx.gpr[23] = (0u | 6u);
    ctx.gpr[22] = (0u | 10u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    goto L_08A796C8;
L_08A796C8:
    ctx.gpr[31] = (0x08A796D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 372u, 0x08A46800u>(ctx, &aot_mem) && ctx.pc == 0x08A796D0u) goto L_08A796D0;
    return;
L_08A796D0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A796E0;
      }
      goto L_08A796D8;
    }
L_08A796D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79890;
      }
      goto L_08A796E0;
    }
L_08A796E0:
    ctx.gpr[31] = (0x08A796E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 370u, 0x08A467B8u>(ctx, &aot_mem) && ctx.pc == 0x08A796E8u) goto L_08A796E8;
    return;
L_08A796E8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A79890;
      }
      goto L_08A796F4;
    }
L_08A796F4:
    ctx.gpr[31] = (0x08A796FCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 371u, 0x08A467DCu>(ctx, &aot_mem) && ctx.pc == 0x08A796FCu) goto L_08A796FC;
    return;
L_08A796FC:
    ctx.gpr[31] = (0x08A79704u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 373u, 0x08A46824u>(ctx, &aot_mem) && ctx.pc == 0x08A79704u) goto L_08A79704;
    return;
L_08A79704:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(12) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A797D4;
      }
      goto L_08A79714;
    }
L_08A79714:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24824)));
    jump_target = ctx.gpr[1];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7972C:
    ctx.gpr[4] = (0u | 167u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79748u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A79748u) goto L_08A79748;
    return;
L_08A79748:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 127u);
      if (branch_taken) {
          goto L_08A79818;
      }
      goto L_08A79764;
    }
L_08A79764:
    ctx.gpr[4] = (0u | 266u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79780u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A79780u) goto L_08A79780;
    return;
L_08A79780:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(12347));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[19]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 127u);
      if (branch_taken) {
          goto L_08A79818;
      }
      goto L_08A7979C;
    }
L_08A7979C:
    ctx.gpr[4] = (0u | 168u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A797B8u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A797B8u) goto L_08A797B8;
    return;
L_08A797B8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 127u);
      if (branch_taken) {
          goto L_08A79818;
      }
      goto L_08A797D4;
    }
L_08A797D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A797ECu);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A797ECu) goto L_08A797EC;
    return;
L_08A797EC:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19500));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[23];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7980C;
      }
      goto L_08A797F8;
    }
L_08A797F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[22]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A7980C;
L_08A7980C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[17] = (0u | 127u);
    goto L_08A79818;
L_08A79818:
    ctx.gpr[31] = (0x08A79820u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 374u, 0x08A46848u>(ctx, &aot_mem) && ctx.pc == 0x08A79820u) goto L_08A79820;
    return;
L_08A79820:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79834u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08A79834u) goto L_08A79834;
    return;
L_08A79834:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A79890;
      }
      goto L_08A79848;
    }
L_08A79848:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79860u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A79860u) goto L_08A79860;
    return;
L_08A79860:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A79890;
      }
      goto L_08A79870;
    }
L_08A79870:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A79890u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A79890u) goto L_08A79890;
    return;
L_08A79890:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A796C8;
      }
      goto L_08A798A4;
    }
L_08A798A4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A798EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (17864u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[4] = (17056u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25056));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[4] = (16840u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (2233u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[23] = (0u | 71u);
    ctx.gpr[21] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-25456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    goto L_08A7999C;
L_08A7999C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[20] = (ctx.gpr[18] << 6u);
    ctx.gpr[19] = (ctx.gpr[20] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79C3C;
      }
      goto L_08A799B4;
    }
L_08A799B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(19)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79C3C;
      }
      goto L_08A799C0;
    }
L_08A799C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A79A0C;
      }
      goto L_08A799CC;
    }
L_08A799CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A799E4u);
    ctx.gpr[5] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A799E4u) goto L_08A799E4;
    return;
L_08A799E4:
    ctx.gpr[4] = (ctx.gpr[2] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 80u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A79B0C;
      }
      goto L_08A79A0C;
    }
L_08A79A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_08A79A80;
      }
      goto L_08A79A28;
    }
L_08A79A28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A79AD0;
      }
      goto L_08A79A30;
    }
L_08A79A30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A79A48u);
    ctx.gpr[5] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A79A48u) goto L_08A79A48;
    return;
L_08A79A48:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 100u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[4] >> 8u);
    // nop
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A79B0C;
      }
      goto L_08A79A80;
    }
L_08A79A80:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A79AD0;
      }
      goto L_08A79A88;
    }
L_08A79A88:
    ctx.gpr[4] = (0u | 239u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 239u);
    ctx.gpr[31] = (0x08A79AACu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A79AACu) goto L_08A79AAC;
    return;
L_08A79AAC:
    ctx.gpr[4] = (ctx.gpr[2] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[21]);
    ctx.gpr[17] = (0u | 60u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A79B0C;
      }
      goto L_08A79AD0;
    }
L_08A79AD0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A79AE8u);
    ctx.gpr[5] = (0u | 71u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A79AE8u) goto L_08A79AE8;
    return;
L_08A79AE8:
    ctx.gpr[4] = (ctx.gpr[2] >> 8u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 80u);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A79B0C;
L_08A79B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A79B28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08A79B28u) goto L_08A79B28;
    return;
L_08A79B28:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[30] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A79B9C;
      }
      goto L_08A79B3C;
    }
L_08A79B3C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79B9C;
      }
      goto L_08A79B44;
    }
L_08A79B44:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A79B5Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A79B5Cu) goto L_08A79B5C;
    return;
L_08A79B5C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A79B9C;
      }
      goto L_08A79B6C;
    }
L_08A79B6C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A79B9Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A79B9Cu) goto L_08A79B9C;
    return;
L_08A79B9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(76)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A79C3C;
      }
      goto L_08A79BA8;
    }
L_08A79BA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A79BD0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A79BD0u) goto L_08A79BD0;
    return;
L_08A79BD0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 211u);
      if (branch_taken) {
          goto L_08A79C3C;
      }
      goto L_08A79BE0;
    }
L_08A79BE0:
    ctx.gpr[6] = (ctx.gpr[18] << 4u);
    ctx.gpr[7] = (ctx.gpr[18] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] << 2u);
    ctx.gpr[5] = (0u | 19591u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19591));
    ctx.gpr[5] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A79C3Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A79C3Cu) goto L_08A79C3C;
    return;
L_08A79C3C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7999C;
      }
      goto L_08A79C50;
    }
L_08A79C50:
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
L_08A79C98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(88) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AA2C;
      }
      goto L_08A79CC0;
    }
L_08A79CC0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A79CD8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[31] = (0x08A79CE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A79CE8u) goto L_08A79CE8;
    return;
L_08A79CE8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (17530u << 16u);
      if (branch_taken) {
          goto L_08A79D4C;
      }
      goto L_08A79CF4;
    }
L_08A79CF4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5598u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 35u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9216u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A79D28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A79D28u) goto L_08A79D28;
    return;
L_08A79D28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 100u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A79D4C;
    }
L_08A79D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AAA8;
      }
      goto L_08A79D54;
    }
L_08A79D54:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A79DA0;
    }
L_08A79DA0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A79DEC;
    }
L_08A79DEC:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A79E38;
    }
L_08A79E38:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A79E84;
    }
L_08A79E84:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 155u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A79ED0;
    }
L_08A79ED0:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 156u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A79F1C;
    }
L_08A79F1C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A79F68;
    }
L_08A79F68:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 158u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A79FB4;
    }
L_08A79FB4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A000;
    }
L_08A7A000:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 157u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A04C;
    }
L_08A7A04C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 160u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A098;
    }
L_08A7A098:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 161u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A0E4;
    }
L_08A7A0E4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 162u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A130;
    }
L_08A7A130:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A17C;
    }
L_08A7A17C:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 14000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A1D4;
    }
L_08A7A1D4:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 99u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A220;
    }
L_08A7A220:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 241u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A26C;
    }
L_08A7A26C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 272u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A2B8;
    }
L_08A7A2B8:
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 184u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 100u);
    ctx.gpr[4] = (17817u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A308;
    }
L_08A7A308:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 185u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20159u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A354;
    }
L_08A7A354:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17761u << 16u);
    ctx.gpr[4] = (0u | 312u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A380u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A380u) goto L_08A7A380;
    return;
L_08A7A380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(18600));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A3C0;
    }
L_08A7A3C0:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (17761u << 16u);
    ctx.gpr[4] = (0u | 35u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A3ECu);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A3ECu) goto L_08A7A3EC;
    return;
L_08A7A3EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(18600));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A42C;
    }
L_08A7A42C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(103));
    ctx.gpr[31] = (0x08A7A468u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7A468u) goto L_08A7A468;
    return;
L_08A7A468:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A7A47Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A47Cu) goto L_08A7A47C;
    return;
L_08A7A47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A4BC;
    }
L_08A7A4BC:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[4] = (17761u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7A4E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7A4E8u) goto L_08A7A4E8;
    return;
L_08A7A4E8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A7A4FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A4FCu) goto L_08A7A4FC;
    return;
L_08A7A4FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A53C;
    }
L_08A7A53C:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 200u);
    ctx.gpr[4] = (17761u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7A568u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7A568u) goto L_08A7A568;
    return;
L_08A7A568:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A7A57Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A57Cu) goto L_08A7A57C;
    return;
L_08A7A57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(60));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A5BC;
    }
L_08A7A5BC:
    ctx.gpr[31] = (0x08A7A5C4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7A5C4u) goto L_08A7A5C4;
    return;
L_08A7A5C4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A60C;
      }
      goto L_08A7A5D0;
    }
L_08A7A5D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(325)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_08A7A60C;
      }
      goto L_08A7A5E4;
    }
L_08A7A5E4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24424)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7A5FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7A634;
      }
      goto L_08A7A604;
    }
L_08A7A604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AAA8;
      }
      goto L_08A7A60C;
    }
L_08A7A60C:
    ctx.gpr[4] = (0u | 29u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A620u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A620u) goto L_08A7A620;
    return;
L_08A7A620:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7A658;
      }
      goto L_08A7A634;
    }
L_08A7A634:
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A648u);
    ctx.gpr[5] = (0u | 600u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A648u) goto L_08A7A648;
    return;
L_08A7A648:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10600));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_08A7A658;
L_08A7A658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 7u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A698;
    }
L_08A7A698:
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11218)));
    ctx.gpr[4] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(31));
    ctx.gpr[31] = (0x08A7A6F4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7A6F4u) goto L_08A7A6F4;
    return;
L_08A7A6F4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A7A708u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A708u) goto L_08A7A708;
    return;
L_08A7A708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A740;
    }
L_08A7A740:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 236u);
    ctx.gpr[4] = (0u | 236u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7A770u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7A770u) goto L_08A7A770;
    return;
L_08A7A770:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A798;
    }
L_08A7A798:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 191u);
    ctx.gpr[4] = (0u | 191u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7A7C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7A7C8u) goto L_08A7A7C8;
    return;
L_08A7A7C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 70u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A7E8;
    }
L_08A7A7E8:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 191u);
    ctx.gpr[4] = (0u | 191u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7A818u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7A818u) goto L_08A7A818;
    return;
L_08A7A818:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A838;
    }
L_08A7A838:
    ctx.gpr[4] = (17008u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 186u);
    ctx.gpr[4] = (0u | 186u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7A868u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7A868u) goto L_08A7A868;
    return;
L_08A7A868:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (0u | 70u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A890;
    }
L_08A7A890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    ctx.gpr[5] = (17725u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(187));
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A8C8u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A8C8u) goto L_08A7A8C8;
    return;
L_08A7A8C8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(19000));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7A8ECu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A8ECu) goto L_08A7A8EC;
    return;
L_08A7A8EC:
    ctx.gpr[17] = (ctx.gpr[2] + static_cast<std::uint32_t>(25));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A8FC;
    }
L_08A7A8FC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A7A918u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08A7A918u) goto L_08A7A918;
    return;
L_08A7A918:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A7A92Cu);
    ctx.gpr[6] = (0u | 200u);
    goto L_08A78170;
L_08A7A92C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AAA8;
      }
      goto L_08A7A934;
    }
L_08A7A934:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A7A950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08A7A950u) goto L_08A7A950;
    return;
L_08A7A950:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08A7A964u);
    ctx.gpr[6] = (0u | 201u);
    goto L_08A78170;
L_08A7A964:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AAA8;
      }
      goto L_08A7A96C;
    }
L_08A7A96C:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 10600u);
    ctx.gpr[4] = (0u | 116u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A7A9A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7A9A0u) goto L_08A7A9A0;
    return;
L_08A7A9A0:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7A9CC;
    }
L_08A7A9CC:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 22000u);
    ctx.gpr[4] = (0u | 109u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (17864u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[17] >> 5u);
    ctx.gpr[31] = (0x08A7AA00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7AA00u) goto L_08A7AA00;
    return;
L_08A7AA00:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[17] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7AA34;
      }
      goto L_08A7AA2C;
    }
L_08A7AA2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7AAA8;
      }
      goto L_08A7AA34;
    }
L_08A7AA34:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A7AA40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08A7AA40u) goto L_08A7AA40;
    return;
L_08A7AA40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7AAA8;
      }
      goto L_08A7AA54;
    }
L_08A7AA54:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7AA6Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A7AA6Cu) goto L_08A7AA6C;
    return;
L_08A7AA6C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A7AAA8;
      }
      goto L_08A7AA7C;
    }
L_08A7AA7C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11218)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11218), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A7AAA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7AAA8u) goto L_08A7AAA8;
    return;
L_08A7AAA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7AAC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(52) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B03C;
      }
      goto L_08A7AAEC;
    }
L_08A7AAEC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7AB04:
    ctx.gpr[4] = (0u | 5609u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 42u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5609u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7AB3C;
    }
L_08A7AB3C:
    ctx.gpr[4] = (0u | 5610u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 43u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5610u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7AB74;
    }
L_08A7AB74:
    ctx.gpr[4] = (0u | 5611u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 44u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5611u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7ABAC;
    }
L_08A7ABAC:
    ctx.gpr[4] = (0u | 5612u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 45u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5612u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7ABE4;
    }
L_08A7ABE4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7AC3C;
      }
      goto L_08A7ABFC;
    }
L_08A7ABFC:
    ctx.gpr[5] = (0u | 5613u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 46u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7AC14u);
    ctx.gpr[5] = (0u | 40u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 564u, 0x088BAD38u>(ctx, &aot_mem) && ctx.pc == 0x08A7AC14u) goto L_08A7AC14;
    return;
L_08A7AC14:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7AC3C;
    }
L_08A7AC3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7AC44;
    }
L_08A7AC44:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7AC9C;
      }
      goto L_08A7AC5C;
    }
L_08A7AC5C:
    ctx.gpr[5] = (0u | 5614u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7AC74u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 564u, 0x088BAD38u>(ctx, &aot_mem) && ctx.pc == 0x08A7AC74u) goto L_08A7AC74;
    return;
L_08A7AC74:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7AC9C;
    }
L_08A7AC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7ACA4;
    }
L_08A7ACA4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7ACFC;
      }
      goto L_08A7ACBC;
    }
L_08A7ACBC:
    ctx.gpr[5] = (0u | 5615u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 48u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7ACD4u);
    ctx.gpr[5] = (0u | 42u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 564u, 0x088BAD38u>(ctx, &aot_mem) && ctx.pc == 0x08A7ACD4u) goto L_08A7ACD4;
    return;
L_08A7ACD4:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7ACFC;
    }
L_08A7ACFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7AD04;
    }
L_08A7AD04:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7AD5C;
      }
      goto L_08A7AD1C;
    }
L_08A7AD1C:
    ctx.gpr[5] = (0u | 5616u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 49u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7AD34u);
    ctx.gpr[5] = (0u | 43u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 576u, 0x088BADFCu>(ctx, &aot_mem) && ctx.pc == 0x08A7AD34u) goto L_08A7AD34;
    return;
L_08A7AD34:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7AD5C;
    }
L_08A7AD5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7AD64;
    }
L_08A7AD64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7ADBC;
      }
      goto L_08A7AD7C;
    }
L_08A7AD7C:
    ctx.gpr[5] = (0u | 5617u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7AD94u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 576u, 0x088BADFCu>(ctx, &aot_mem) && ctx.pc == 0x08A7AD94u) goto L_08A7AD94;
    return;
L_08A7AD94:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7ADBC;
    }
L_08A7ADBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7ADC4;
    }
L_08A7ADC4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(846)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7AE1C;
      }
      goto L_08A7ADDC;
    }
L_08A7ADDC:
    ctx.gpr[5] = (0u | 5618u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 51u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A7ADF4u);
    ctx.gpr[5] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 576u, 0x088BADFCu>(ctx, &aot_mem) && ctx.pc == 0x08A7ADF4u) goto L_08A7ADF4;
    return;
L_08A7ADF4:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A7AE58;
      }
      goto L_08A7AE1C;
    }
L_08A7AE1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7AE24;
    }
L_08A7AE24:
    ctx.gpr[4] = (0u | 5619u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 52u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (16512u << 16u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 5619u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[17] = (0u | 15u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    goto L_08A7AE58;
L_08A7AE58:
    ctx.gpr[31] = (0x08A7AE60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7AE60u) goto L_08A7AE60;
    return;
L_08A7AE60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7AE78;
    }
L_08A7AE78:
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 5608u);
    ctx.gpr[4] = (0u | 5608u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 41u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7AEA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7AEA4u) goto L_08A7AEA4;
    return;
L_08A7AEA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7AECC;
    }
L_08A7AECC:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 5607u);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7AEFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7AEFCu) goto L_08A7AEFC;
    return;
L_08A7AEFC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 90u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A7B044;
      }
      goto L_08A7AF2C;
    }
L_08A7AF2C:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 183u);
    ctx.gpr[4] = (0u | 183u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7AF5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7AF5Cu) goto L_08A7AF5C;
    return;
L_08A7AF5C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 127u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A7B044;
      }
      goto L_08A7AF88;
    }
L_08A7AF88:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 290u);
    ctx.gpr[4] = (0u | 290u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A7AFB8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7AFB8u) goto L_08A7AFB8;
    return;
L_08A7AFB8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A7B044;
      }
      goto L_08A7AFE8;
    }
L_08A7AFE8:
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 20812u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17864u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 30u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_08A7B044;
      }
      goto L_08A7B03C;
    }
L_08A7B03C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7B044;
    }
L_08A7B044:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A7B050u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08A7B050u) goto L_08A7B050;
    return;
L_08A7B050:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7B064;
    }
L_08A7B064:
    ctx.fpr[13] = std::sqrt(ctx.fpr[12]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7B07Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B07Cu) goto L_08A7B07C;
    return;
L_08A7B07C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7B0AC;
      }
      goto L_08A7B08C;
    }
L_08A7B08C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A7B0ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7B0ACu) goto L_08A7B0AC;
    return;
L_08A7B0AC:
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
L_08A7B0C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[18] = (2232u << 16u);
    ctx.gpr[6] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(12960));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A7B278;
      }
      goto L_08A7B13C;
    }
L_08A7B13C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 183u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7B278;
      }
      goto L_08A7B14C;
    }
L_08A7B14C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (16800u << 16u);
    ctx.gpr[22] = (2233u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(10384));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A7B1B4;
      }
      goto L_08A7B170;
    }
L_08A7B170:
    ctx.gpr[4] = (0u | 167u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7B188u);
    ctx.gpr[5] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B188u) goto L_08A7B188;
    return;
L_08A7B188:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5972)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(65));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7B200;
      }
      goto L_08A7B1B4;
    }
L_08A7B1B4:
    ctx.gpr[4] = (0u | 166u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7B1CCu);
    ctx.gpr[5] = (0u | 700u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B1CCu) goto L_08A7B1CC;
    return;
L_08A7B1CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(3500));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7B200;
L_08A7B200:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(348)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B220;
      }
      goto L_08A7B214;
    }
L_08A7B214:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7B220;
L_08A7B220:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11219)));
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11219)));
        goto L_08A7B238;
    }
    goto L_08A7B230;
L_08A7B230:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11219), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11219)));
    goto L_08A7B238;
L_08A7B238:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11219), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] & 15u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A7B278u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7B278u) goto L_08A7B278;
    return;
L_08A7B278:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8088)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B328;
      }
      goto L_08A7B28C;
    }
L_08A7B28C:
    ctx.gpr[31] = (0x08A7B294u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 436u, 0x08ACA9D8u>(ctx, &aot_mem) && ctx.pc == 0x08A7B294u) goto L_08A7B294;
    return;
L_08A7B294:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B2AC;
      }
      goto L_08A7B29C;
    }
L_08A7B29C:
    ctx.gpr[31] = (0x08A7B2A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 440u, 0x08ACAA00u>(ctx, &aot_mem) && ctx.pc == 0x08A7B2A4u) goto L_08A7B2A4;
    return;
L_08A7B2A4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B328;
      }
      goto L_08A7B2AC;
    }
L_08A7B2AC:
    ctx.gpr[4] = (0u | 258u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 258u);
    ctx.gpr[31] = (0x08A7B2C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7B2C4u) goto L_08A7B2C4;
    return;
L_08A7B2C4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-8088)));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[7] = (0u | 63u);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7B328u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7B328u) goto L_08A7B328;
    return;
L_08A7B328:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A7B34Cu);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 379u, 0x0886236Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7B34Cu) goto L_08A7B34C;
    return;
L_08A7B34C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B36C;
      }
      goto L_08A7B360;
    }
L_08A7B360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7B36C;
L_08A7B36C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B38C;
      }
      goto L_08A7B380;
    }
L_08A7B380:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A7B38C;
L_08A7B38C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B3B0;
      }
      goto L_08A7B3A4;
    }
L_08A7B3A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_08A7B3B8;
      }
      goto L_08A7B3B0;
    }
L_08A7B3B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A7B3B8;
L_08A7B3B8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B3CC;
      }
      goto L_08A7B3C8;
    }
L_08A7B3C8:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A7B3CC;
L_08A7B3CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7968)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B3E8;
      }
      goto L_08A7B3E0;
    }
L_08A7B3E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B3EC;
      }
      goto L_08A7B3E8;
    }
L_08A7B3E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-7968)));
    goto L_08A7B3EC;
L_08A7B3EC:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A7B4DC;
      }
      goto L_08A7B3FC;
    }
L_08A7B3FC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3288)));
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B4DC;
      }
      goto L_08A7B418;
    }
L_08A7B418:
    ctx.gpr[4] = (0u | 232u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 232u);
    ctx.gpr[31] = (0x08A7B430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7B430u) goto L_08A7B430;
    return;
L_08A7B430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(3288)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    ctx.gpr[5] = (ctx.hi);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A7B46C;
      }
      goto L_08A7B460;
    }
L_08A7B460:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A7B46C;
L_08A7B46C:
    ctx.gpr[5] = (16948u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.gpr[5] = (0u | 5u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[6] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A7B4CCu);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7B4CCu) goto L_08A7B4CC;
    return;
L_08A7B4CC:
    ctx.gpr[4] = (18804u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 9214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A7B4DC;
L_08A7B4DC:
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
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7B514:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7000)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7B9B4;
      }
      goto L_08A7B570;
    }
L_08A7B570:
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11600));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (17864u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (0u | 109u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 32u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(10384));
    ctx.gpr[19] = (2229u << 16u);
    goto L_08A7B5C4;
L_08A7B5C4:
    ctx.gpr[17] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[5] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A7B994;
      }
      goto L_08A7B5E8;
    }
L_08A7B5E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B620;
      }
      goto L_08A7B5F4;
    }
L_08A7B5F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B608;
      }
      goto L_08A7B600;
    }
L_08A7B600:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B994;
      }
      goto L_08A7B608;
    }
L_08A7B608:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B630;
      }
      goto L_08A7B620;
    }
L_08A7B620:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    goto L_08A7B630;
L_08A7B630:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A7B640u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08A7B640u) goto L_08A7B640;
    return;
L_08A7B640:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7B7F4;
    }
    goto L_08A7B654;
L_08A7B654:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7B684;
      }
      goto L_08A7B664;
    }
L_08A7B664:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7B684;
      }
      goto L_08A7B674;
    }
L_08A7B674:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7B7F4;
    }
    goto L_08A7B684;
L_08A7B684:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A7B694u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A7B694u) goto L_08A7B694;
    return;
L_08A7B694:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7B6A8u);
    ctx.gpr[5] = (0u | 127u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B6A8u) goto L_08A7B6A8;
    return;
L_08A7B6A8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A7B7F0;
      }
      goto L_08A7B6B8;
    }
L_08A7B6B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A7B7AC;
      }
      goto L_08A7B6C8;
    }
L_08A7B6C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A7B788;
      }
      goto L_08A7B6D8;
    }
L_08A7B6D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B780;
      }
      goto L_08A7B6E8;
    }
L_08A7B6E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A7B714;
    }
    goto L_08A7B6F8;
L_08A7B6F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[4] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(103));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7B728;
      }
      goto L_08A7B714;
    }
L_08A7B714:
    ctx.gpr[4] = (0u | 6u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(108));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7B728;
L_08A7B728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A7B734u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7B734u) goto L_08A7B734;
    return;
L_08A7B734:
    ctx.gpr[17] = (ctx.gpr[2] >> 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[17] >> 4u);
    ctx.gpr[31] = (0x08A7B748u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B748u) goto L_08A7B748;
    return;
L_08A7B748:
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11220)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11220), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11220)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A7B7CC;
      }
      goto L_08A7B778;
    }
L_08A7B778:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11220), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08A7B7CC;
      }
      goto L_08A7B780;
    }
L_08A7B780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A7B7F4;
      }
      goto L_08A7B788;
    }
L_08A7B788:
    ctx.gpr[5] = (0u | 173u);
    ctx.gpr[6] = (0u | 6543u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A7B7CC;
      }
      goto L_08A7B7AC;
    }
L_08A7B7AC:
    ctx.gpr[5] = (0u | 183u);
    ctx.gpr[6] = (0u | 13961u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    goto L_08A7B7CC;
L_08A7B7CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7B7F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7B7F0u) goto L_08A7B7F0;
    return;
L_08A7B7F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A7B7F4;
L_08A7B7F4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B994;
      }
      goto L_08A7B818;
    }
L_08A7B818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A7B81C;
L_08A7B81C:
    ctx.gpr[17] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 74 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 76 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7B94C;
      }
      goto L_08A7B844;
    }
L_08A7B844:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B94C;
      }
      goto L_08A7B84C;
    }
L_08A7B84C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7B864;
      }
      goto L_08A7B85C;
    }
L_08A7B85C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A7B96C;
      }
      goto L_08A7B864;
    }
L_08A7B864:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A7B874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A7B874u) goto L_08A7B874;
    return;
L_08A7B874:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7B888u);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A7B888u) goto L_08A7B888;
    return;
L_08A7B888:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A7B944;
      }
      goto L_08A7B898;
    }
L_08A7B898:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 13u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7B8B8;
    }
    goto L_08A7B8A8;
L_08A7B8A8:
    ctx.gpr[4] = (0u | 6735u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7B8FC;
      }
      goto L_08A7B8B8;
    }
L_08A7B8B8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 75u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7B8EC;
      }
      goto L_08A7B8DC;
    }
L_08A7B8DC:
    ctx.gpr[4] = (0u | 22000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7B8FC;
      }
      goto L_08A7B8EC;
    }
L_08A7B8EC:
    ctx.gpr[4] = (0u | 115u);
    ctx.gpr[5] = (0u | 18000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A7B8FC;
L_08A7B8FC:
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11220)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11220), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(11220)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B954;
      }
      goto L_08A7B93C;
    }
L_08A7B93C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7B958;
      }
      goto L_08A7B944;
    }
L_08A7B944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A7B96C;
      }
      goto L_08A7B94C;
    }
L_08A7B94C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A7B96C;
      }
      goto L_08A7B954;
    }
L_08A7B954:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(11220), static_cast<std::uint8_t>(ctx.gpr[30]));
    goto L_08A7B958;
L_08A7B958:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7B968u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7B968u) goto L_08A7B968;
    return;
L_08A7B968:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A7B96C;
L_08A7B96C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[18] = (ctx.gpr[18] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7B81C;
    }
    goto L_08A7B994;
L_08A7B994:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7000)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7B5C4;
      }
      goto L_08A7B9B4;
    }
L_08A7B9B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
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
L_08A7B9F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2233u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 5u, 0x08A7C05Cu>(ctx, &aot_mem); return;
      }
      goto L_08A7BA58;
    }
L_08A7BA58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (2233u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[30] = (0u | 1u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(10384));
    ctx.gpr[21] = (2229u << 16u);
    goto L_08A7BA8C;
L_08A7BA8C:
    ctx.gpr[22] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    ctx.gpr[3] = (0u | 221u);
    ctx.gpr[12] = (0u | 308u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[13] = (0u | 234u);
      if (branch_taken) {
          goto L_08A7BCE4;
      }
      goto L_08A7BAC8;
    }
L_08A7BAC8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 206 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-59));
      if (branch_taken) {
          goto L_08A7BCE4;
      }
      goto L_08A7BAD4;
    }
L_08A7BAD4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A7BAEC:
    ctx.gpr[4] = (0u | 202u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BAF8;
    }
L_08A7BAF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(11232)));
      if (branch_taken) {
          goto L_08A7BB1C;
      }
      goto L_08A7BB0C;
    }
L_08A7BB0C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(258) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A7BB28;
      }
      goto L_08A7BB1C;
    }
L_08A7BB1C:
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(2));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(258) ? 1u : 0u);
    goto L_08A7BB28;
L_08A7BB28:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BB38;
      }
      goto L_08A7BB30;
    }
L_08A7BB30:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A7BB38;
L_08A7BB38:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(11232), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BB40;
    }
L_08A7BB40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(26));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BB54;
    }
L_08A7BB54:
    ctx.gpr[4] = (0u | 254u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BB60;
    }
L_08A7BB60:
    ctx.gpr[4] = (0u | 205u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BB74;
    }
L_08A7BB74:
    ctx.gpr[4] = (0u | 194u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BB88;
    }
L_08A7BB88:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BB9C;
    }
L_08A7BB9C:
    ctx.gpr[4] = (0u | 295u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(912), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BBB4;
    }
L_08A7BBB4:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BBC8;
    }
L_08A7BBC8:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BBD8;
    }
L_08A7BBD8:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[13]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BBEC;
    }
L_08A7BBEC:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BBFC;
    }
L_08A7BBFC:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BC14;
    }
L_08A7BC14:
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[12]);
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BC28;
    }
L_08A7BC28:
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[3]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BC38;
    }
L_08A7BC38:
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BC50;
    }
L_08A7BC50:
    ctx.gpr[4] = (0u | 5522u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BC64;
    }
L_08A7BC64:
    ctx.gpr[4] = (0u | 5518u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BC78;
    }
L_08A7BC78:
    ctx.gpr[4] = (0u | 5515u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BC8C;
    }
L_08A7BC8C:
    ctx.gpr[4] = (0u | 5516u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BCA0;
    }
L_08A7BCA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[4] = (0u | 3u);
    { const std::uint32_t dividend = ctx.gpr[5]; const std::uint32_t divisor = ctx.gpr[4]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5519));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BCC0;
    }
L_08A7BCC0:
    ctx.gpr[4] = (0u | 164u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BCCC;
    }
L_08A7BCCC:
    ctx.gpr[4] = (0u | 165u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BCD8;
    }
L_08A7BCD8:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BCEC;
      }
      goto L_08A7BCE4;
    }
L_08A7BCE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 4u, 0x08A7C048u>(ctx, &aot_mem); return;
      }
      goto L_08A7BCEC;
    }
L_08A7BCEC:
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BD34;
      }
      goto L_08A7BCF4;
    }
L_08A7BCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11224)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BD18;
      }
      goto L_08A7BD0C;
    }
L_08A7BD0C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(11224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BD7C;
      }
      goto L_08A7BD18;
    }
L_08A7BD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5988)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 4u, 0x08A7C048u>(ctx, &aot_mem); return;
      }
      goto L_08A7BD34;
    }
L_08A7BD34:
    if (ctx.gpr[11] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7BD80;
    }
    goto L_08A7BD3C;
L_08A7BD3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(11228)));
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BD60;
      }
      goto L_08A7BD54;
    }
L_08A7BD54:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(11228), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BD7C;
      }
      goto L_08A7BD60;
    }
L_08A7BD60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(5988)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 4u, 0x08A7C048u>(ctx, &aot_mem); return;
      }
      goto L_08A7BD7C;
    }
L_08A7BD7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A7BD80;
L_08A7BD80:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 176u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A7BDB0;
      }
      goto L_08A7BDA4;
    }
L_08A7BDA4:
    ctx.gpr[4] = (0u | 28509u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BE74;
      }
      goto L_08A7BDB0;
    }
L_08A7BDB0:
    ctx.gpr[5] = (0u | 177u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7BDC8;
      }
      goto L_08A7BDBC;
    }
L_08A7BDBC:
    ctx.gpr[4] = (0u | 32000u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BE74;
      }
      goto L_08A7BDC8;
    }
L_08A7BDC8:
    ctx.gpr[5] = (0u | 184u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 185u);
      if (branch_taken) {
          goto L_08A7BDDC;
      }
      goto L_08A7BDD4;
    }
L_08A7BDD4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7BE14;
      }
      goto L_08A7BDDC;
    }
L_08A7BDDC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A7BDECu);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7BDECu) goto L_08A7BDEC;
    return;
L_08A7BDEC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[23] >> 5u);
    ctx.gpr[31] = (0x08A7BE00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7BE00u) goto L_08A7BE00;
    return;
L_08A7BE00:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A7BE74;
      }
      goto L_08A7BE14;
    }
L_08A7BE14:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BE28;
      }
      goto L_08A7BE1C;
    }
L_08A7BE1C:
    ctx.gpr[4] = (0u | 5382u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7BE74;
      }
      goto L_08A7BE28;
    }
L_08A7BE28:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A7BE34u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7BE34u) goto L_08A7BE34;
    return;
L_08A7BE34:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(255) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A7BE74;
      }
      goto L_08A7BE44;
    }
L_08A7BE44:
    ctx.gpr[4] = (ctx.gpr[7] < static_cast<std::uint32_t>(258) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7BE74;
      }
      goto L_08A7BE50;
    }
L_08A7BE50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7BE64u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A7BE64u) goto L_08A7BE64;
    return;
L_08A7BE64:
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_08A7BE74;
L_08A7BE74:
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A7BEC0;
      }
      goto L_08A7BE88;
    }
L_08A7BE88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7968)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7BEC0;
      }
      goto L_08A7BEA0;
    }
L_08A7BEA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7BEC0;
L_08A7BEC0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08A7BEE8;
      }
      goto L_08A7BEDC;
    }
L_08A7BEDC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7BEEC;
      }
      goto L_08A7BEE8;
    }
L_08A7BEE8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A7BEEC;
L_08A7BEEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08A7BF04;
      }
      goto L_08A7BEF8;
    }
L_08A7BEF8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A7BFA0;
      }
      goto L_08A7BF04;
    }
L_08A7BF04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[16] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 184u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7BF5C;
      }
      goto L_08A7BF2C;
    }
L_08A7BF2C:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (0u | 20u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7BFA0;
      }
      goto L_08A7BF5C;
    }
L_08A7BF5C:
    ctx.gpr[5] = (0u | 185u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_08A7BF94;
      }
      goto L_08A7BF68;
    }
L_08A7BF68:
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (0u | 107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 10u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7BFA0;
      }
      goto L_08A7BF94;
    }
L_08A7BF94:
    ctx.gpr[4] = (0u | 63u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A7BFA0;
L_08A7BFA0:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7BFB4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7BFB4u) goto L_08A7BFB4;
    return;
L_08A7BFB4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_08A7BFF0;
      }
      goto L_08A7BFBC;
    }
L_08A7BFBC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11221)));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11221), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(98)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A7BFF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A7BFF0u) goto L_08A7BFF0;
    return;
L_08A7BFF0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 3u, 0x08A7C030u>(ctx, &aot_mem); return;
      }
      goto L_08A7BFF8;
    }
L_08A7BFF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11221)));
    ctx.pc = 0x08A7C000u; return;
}

void recomp_unit_0157(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0157_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_157(Runtime &runtime) {
    runtime.register_generated_unit(157u, 0x08A78000u, 16384u, &recomp_unit_0157, &recomp_unit_0157_entry);
    runtime.register_function(0x08A78000u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7800Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78018u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78020u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78030u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7803Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7807Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78090u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A780D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78128u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78170u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A781ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78200u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78208u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78210u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78224u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7822Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78234u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7823Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7827Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A782F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78334u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7833Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78350u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78360u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78398u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A783D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78408u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78410u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7841Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78420u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7842Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78448u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78474u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78484u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7848Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78494u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7849Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A784FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7850Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78514u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78524u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7853Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7854Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78554u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78564u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7856Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7857Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78584u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78594u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7859Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A785FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7860Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78614u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78624u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7862Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7863Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78644u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78654u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7865Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7866Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78674u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78684u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7868Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7869Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A786FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78704u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78714u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7871Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7872Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78734u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78744u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7874Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7875Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78764u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78774u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7877Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7878Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78794u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A787F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78804u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7880Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7881Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78824u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78834u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7883Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7884Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78854u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78864u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7886Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7887Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78884u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78894u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7889Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A788FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7890Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78914u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78924u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7892Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7893Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78944u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78954u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7895Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7896Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78974u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78984u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7898Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7899Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A789FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78A94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ABCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ADCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78AF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78B9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78BFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78C9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78CFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78D94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78DF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E70u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78E8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ECCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78ED8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78EF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F10u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F90u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78F9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A78FF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79004u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7901Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79020u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79028u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79044u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7904Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79054u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79060u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7906Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79074u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79080u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7908Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79098u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A790ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79108u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79110u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79118u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79124u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79130u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79138u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79144u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79150u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7915Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79164u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79174u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7917Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7918Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A791FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79208u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79214u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79220u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79228u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79238u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79240u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79250u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79268u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7926Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79274u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79290u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79298u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A792FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79304u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79314u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7932Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79330u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79338u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79348u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79358u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79370u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79374u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7937Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79398u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A793F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79404u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7940Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7941Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79434u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79438u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79440u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7945Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79464u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7946Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79478u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79484u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7948Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79498u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A794F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79500u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7950Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79514u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79520u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7952Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79538u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79540u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79550u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79558u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79568u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79580u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79584u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7958Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A795F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79600u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79608u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79614u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7961Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79624u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79630u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A796FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79704u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79714u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7972Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79748u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79764u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79780u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7979Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A797F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7980Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79818u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79820u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79834u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79848u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79860u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79870u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79890u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A798ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7999Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A799E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A48u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79A88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AD0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79AE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79B9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BD0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79BE0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79C98u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79CF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D4Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79D54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79DECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79E84u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79ED0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79F68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A79FB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A000u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A04Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A098u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A0E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A130u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A17Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A1D4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A220u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A26Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A2B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A308u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A354u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A380u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3C0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A3ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A42Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A468u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A47Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A4FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A53Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A568u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A57Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5BCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5D0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5E4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A5FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A604u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A60Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A620u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A634u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A648u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A658u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A698u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A6F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A708u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A740u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A770u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A798u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A7E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A818u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A838u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A868u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A890u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A8FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A918u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A92Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A934u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A950u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A964u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A96Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9A0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7A9CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA6Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AA7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAA8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AAECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AB74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ABFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AC9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ACFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AD94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADC4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7ADF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE24u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AE78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AECCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AEFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AF88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFB8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7AFE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B03Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B044u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B050u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B064u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B07Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B08Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B0C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B13Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B14Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B170u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B188u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B1B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B1CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B200u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B214u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B220u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B230u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B238u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B278u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B28Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B294u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B29Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B2C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B328u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B34Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B360u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B36Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B380u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B38Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3A4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3B0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3E0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B3FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B418u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B430u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B460u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B46Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B4DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B514u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B570u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5C4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B5F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B600u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B608u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B620u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B630u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B640u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B654u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B664u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B674u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B684u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B694u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6C8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6D8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6E8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B6F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B714u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B728u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B734u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B748u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B778u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B780u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B788u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7ACu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7CCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7F0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B7F4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B818u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B81Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B844u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B84Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B85Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B864u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B874u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B888u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B898u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8A8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8B8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8DCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8ECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B8FCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B93Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B944u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B94Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B954u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B958u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B968u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B96Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B994u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9B4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7B9F8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA58u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BA8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BAF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB30u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB40u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BB9Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BBFCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC38u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC78u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BC8Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCCCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCD8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCE4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BCF4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD0Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD18u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD3Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD54u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD60u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD7Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BD80u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDA4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDB0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDC8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDD4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BDECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE00u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE14u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE1Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE28u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE34u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE44u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE50u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE64u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE74u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BE88u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEC0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEDCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEE8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEECu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BEF8u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF04u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF2Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF5Cu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF68u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BF94u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFA0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFB4u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFBCu, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFF0u, &recomp_unit_0157, "recomp_unit_0157");
    runtime.register_function(0x08A7BFF8u, &recomp_unit_0157, "recomp_unit_0157");
}
} // namespace psprecomp
