#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0135[4094] = {
    1, 2, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 5, 0, 6, 0, 0, 7, 0, 0, 8, 0, 0, 9, 0, 10, 0, 0, 0,
    0, 0, 11, 0, 0, 12, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 14, 0, 15, 0, 0, 0,
    16, 0, 17, 18, 0, 0, 0, 0, 0, 19, 0, 0, 20, 0, 21, 22, 0, 0, 0, 23, 0, 24, 25, 0, 0, 0, 0, 0, 0, 0, 0, 26,
    0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 31, 0, 32, 0, 0, 0, 0, 0, 33, 0, 0,
    34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 36, 0, 37, 0, 38, 0, 39, 0, 40, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0,
    42, 0, 0, 0, 0, 43, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0,
    48, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55, 0, 56, 0, 57,
    0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 66, 0,
    0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0,
    0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 79, 80, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 85, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0,
    0, 89, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 92, 0, 0, 93, 0, 94, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0,
    0, 96, 0, 0, 97, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 100, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0,
    0, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 112, 0, 113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0,
    116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121,
    0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127,
    0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 139, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 145, 0,
    0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 150, 0, 151,
    0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 158,
    0, 159, 0, 160, 0, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167,
    0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0, 0, 0, 0, 0, 0, 0, 172, 0, 0, 0,
    0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 176, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 0,
    0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 186, 0, 187,
    0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 0, 204, 0,
    0, 0, 0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 212,
    0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 218, 0,
    219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 223, 0, 0, 224, 0, 0, 225, 0, 0, 0,
    0, 0, 0, 226, 0, 0, 227, 0, 0, 0, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 0, 0, 232, 233, 0, 234, 0, 0, 0, 235, 0, 236, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 242,
    0, 0, 0, 243, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 247, 0, 0, 0, 0, 0, 0,
    0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 255,
    0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0,
    0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 0, 0, 265, 0, 0, 0, 266, 0, 0, 0, 0, 267, 0, 0, 268, 0,
    269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 275, 276, 0, 0,
    0, 0, 0, 0, 0, 0, 277, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 282, 0, 283, 0,
    0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292,
    0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 300,
    0, 0, 301, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 305, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    306, 0, 0, 0, 0, 307, 0, 308, 0, 309, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0,
    0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 317, 0, 0, 0, 318, 0, 0, 319, 0, 0, 320, 321, 0, 0, 0, 0, 0, 0, 0, 0,
    322, 0, 323, 0, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 326, 327, 0, 328, 0, 0, 0, 0, 0, 329, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 337, 338, 0, 339, 0, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 0, 342, 0, 343,
    344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 350,
    0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 0,
    358, 0, 359, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364, 0, 365,
    0, 0, 366, 0, 367, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 371, 0, 372, 0, 0, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 0, 377, 0, 378, 0, 0, 379, 0, 0, 0, 0, 0, 0,
    0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0,
    0, 0, 387, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 393, 0, 0,
    0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 400, 0, 0,
    0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0,
    0, 0, 414, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 0, 0, 417, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 420, 0,
    0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 426, 0, 0, 0,
    0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 432, 0, 433, 434, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 0, 0, 0,
    0, 438, 0, 0, 0, 439, 0, 0, 0, 440, 0, 0, 0, 441, 442, 0, 0, 0, 0, 0, 0, 0, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0,
    445, 0, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 447, 448, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 451,
    0, 0, 452, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 459, 460,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464,
    0, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 468, 469, 0, 470, 0, 0, 0, 0, 0,
    0, 0, 0, 471, 0, 472, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 477, 0,
    478, 0, 0, 0, 0, 0, 479, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 483, 484, 0, 0,
    0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 489, 490, 0, 491, 0,
    0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 497, 0, 0, 0, 0,
    0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 502, 503, 0, 504, 0, 0, 0,
    0, 0, 505, 0, 0, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 509, 510, 0, 0, 0, 0, 0, 0,
    0, 0, 511, 0, 512, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 515, 516, 0, 517, 0, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 522,
    0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 526, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 528, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 533, 534, 0, 0, 0, 0, 0, 0,
    0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 540, 0, 541, 0, 0, 0, 0, 0,
    542, 0, 0, 0, 0, 0, 543, 0, 544, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 0,
    0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0, 0, 0,
    0, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 556, 0, 557, 558, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 560,
    0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 570, 571, 0, 0, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 575, 0, 0,
    0, 0, 0, 0, 576, 577, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 582, 0, 0,
    0, 0, 0, 0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 588, 0, 589, 0,
    0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    594, 0, 595, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 602, 0, 0,
    0, 603, 0, 0, 0, 604, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611,
    0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0, 617, 0, 0,
    0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 621, 0, 0,
    0, 0, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0,
    0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 631, 0, 632, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0, 0,
    0, 636, 0, 637, 0, 0, 0, 638, 0, 0, 0, 639, 0, 0, 0, 640, 0, 641, 0, 642, 0, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 645,
    0, 0, 0, 0, 0, 0, 0, 646, 0, 647, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0,
    0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 655, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 666, 667, 0, 0, 0, 0,
    0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 673, 0, 674, 0, 0, 0,
    0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 677, 0, 0, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0,
    0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 683, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0,
    0, 0, 0, 0, 687, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0,
    0, 0, 0, 693, 694, 0, 695, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0,
    700, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 0,
    0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0,
    0, 710, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0,
    0, 0, 0, 715, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0,
    0, 723, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 727, 0, 728, 0, 729, 0, 730, 0, 0, 0,
    0, 0, 731, 0, 732, 0, 733, 0, 734, 0, 0, 0, 735, 0, 736, 737, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0,
    0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 742, 743, 0, 744, 0, 0, 745, 0, 746, 0, 747, 0, 0, 0, 748, 0, 749, 0, 0,
    0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 752, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    754, 0, 755, 0, 0, 0, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 0,
    0, 759, 0, 0, 0, 0, 760, 761, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 765, 0,
    0, 0, 0, 0, 0, 766, 767, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0,
    0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 779, 0, 0, 0, 0, 780,
    0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0,
    0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0,
    0, 0, 787, 0, 0, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 0, 0, 0, 791, 0, 0,
    0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 794, 0, 0, 0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 0, 796,
    0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 803, 0, 804, 0, 0, 0, 805,
};
void recomp_unit_0135_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A20000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0135[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A20000;
    case 2u: goto L_08A20004;
    case 3u: goto L_08A20024;
    case 4u: goto L_08A20030;
    case 5u: goto L_08A2003C;
    case 6u: goto L_08A20044;
    case 7u: goto L_08A20050;
    case 8u: goto L_08A2005C;
    case 9u: goto L_08A20068;
    case 10u: goto L_08A20070;
    case 11u: goto L_08A20088;
    case 12u: goto L_08A20094;
    case 13u: goto L_08A200B4;
    case 14u: goto L_08A200E8;
    case 15u: goto L_08A200F0;
    case 16u: goto L_08A20100;
    case 17u: goto L_08A20108;
    case 18u: goto L_08A2010C;
    case 19u: goto L_08A20124;
    case 20u: goto L_08A20130;
    case 21u: goto L_08A20138;
    case 22u: goto L_08A2013C;
    case 23u: goto L_08A2014C;
    case 24u: goto L_08A20154;
    case 25u: goto L_08A20158;
    case 26u: goto L_08A2017C;
    case 27u: goto L_08A20184;
    case 28u: goto L_08A201A0;
    case 29u: goto L_08A201B4;
    case 30u: goto L_08A201D0;
    case 31u: goto L_08A201D4;
    case 32u: goto L_08A201DC;
    case 33u: goto L_08A201F4;
    case 34u: goto L_08A20200;
    case 35u: goto L_08A20220;
    case 36u: goto L_08A2022C;
    case 37u: goto L_08A20234;
    case 38u: goto L_08A2023C;
    case 39u: goto L_08A20244;
    case 40u: goto L_08A2024C;
    case 41u: goto L_08A2026C;
    case 42u: goto L_08A20280;
    case 43u: goto L_08A20294;
    case 44u: goto L_08A2029C;
    case 45u: goto L_08A202B4;
    case 46u: goto L_08A202DC;
    case 47u: goto L_08A202E4;
    case 48u: goto L_08A20300;
    case 49u: goto L_08A20320;
    case 50u: goto L_08A20344;
    case 51u: goto L_08A20350;
    case 52u: goto L_08A20360;
    case 53u: goto L_08A203DC;
    case 54u: goto L_08A203E4;
    case 55u: goto L_08A203EC;
    case 56u: goto L_08A203F4;
    case 57u: goto L_08A203FC;
    case 58u: goto L_08A20404;
    case 59u: goto L_08A2040C;
    case 60u: goto L_08A20414;
    case 61u: goto L_08A2041C;
    case 62u: goto L_08A20424;
    case 63u: goto L_08A20440;
    case 64u: goto L_08A20468;
    case 65u: goto L_08A20474;
    case 66u: goto L_08A20478;
    case 67u: goto L_08A20490;
    case 68u: goto L_08A204C4;
    case 69u: goto L_08A204D0;
    case 70u: goto L_08A204D8;
    case 71u: goto L_08A204E0;
    case 72u: goto L_08A204F8;
    case 73u: goto L_08A2052C;
    case 74u: goto L_08A20530;
    case 75u: goto L_08A20554;
    case 76u: goto L_08A2055C;
    case 77u: goto L_08A20578;
    case 78u: goto L_08A2058C;
    case 79u: goto L_08A205A8;
    case 80u: goto L_08A205AC;
    case 81u: goto L_08A205B4;
    case 82u: goto L_08A205CC;
    case 83u: goto L_08A205D8;
    case 84u: goto L_08A205E0;
    case 85u: goto L_08A205E4;
    case 86u: goto L_08A20614;
    case 87u: goto L_08A20650;
    case 88u: goto L_08A2066C;
    case 89u: goto L_08A20684;
    case 90u: goto L_08A20690;
    case 91u: goto L_08A20698;
    case 92u: goto L_08A206B0;
    case 93u: goto L_08A206BC;
    case 94u: goto L_08A206C4;
    case 95u: goto L_08A206E0;
    case 96u: goto L_08A20704;
    case 97u: goto L_08A20710;
    case 98u: goto L_08A20714;
    case 99u: goto L_08A20734;
    case 100u: goto L_08A2073C;
    case 101u: goto L_08A20758;
    case 102u: goto L_08A20778;
    case 103u: goto L_08A20784;
    case 104u: goto L_08A20794;
    case 105u: goto L_08A207A4;
    case 106u: goto L_08A207CC;
    case 107u: goto L_08A207E8;
    case 108u: goto L_08A207F0;
    case 109u: goto L_08A20810;
    case 110u: goto L_08A20818;
    case 111u: goto L_08A20830;
    case 112u: goto L_08A2083C;
    case 113u: goto L_08A20844;
    case 114u: goto L_08A20860;
    case 115u: goto L_08A20870;
    case 116u: goto L_08A20880;
    case 117u: goto L_08A20888;
    case 118u: goto L_08A208A4;
    case 119u: goto L_08A208D8;
    case 120u: goto L_08A208E0;
    case 121u: goto L_08A208FC;
    case 122u: goto L_08A2090C;
    case 123u: goto L_08A2091C;
    case 124u: goto L_08A20924;
    case 125u: goto L_08A20940;
    case 126u: goto L_08A20974;
    case 127u: goto L_08A2097C;
    case 128u: goto L_08A20998;
    case 129u: goto L_08A209A8;
    case 130u: goto L_08A209B8;
    case 131u: goto L_08A209C0;
    case 132u: goto L_08A209DC;
    case 133u: goto L_08A20A10;
    case 134u: goto L_08A20A18;
    case 135u: goto L_08A20A34;
    case 136u: goto L_08A20A44;
    case 137u: goto L_08A20A54;
    case 138u: goto L_08A20A5C;
    case 139u: goto L_08A20A78;
    case 140u: goto L_08A20AAC;
    case 141u: goto L_08A20AB4;
    case 142u: goto L_08A20AD0;
    case 143u: goto L_08A20AE0;
    case 144u: goto L_08A20AF0;
    case 145u: goto L_08A20AF8;
    case 146u: goto L_08A20B14;
    case 147u: goto L_08A20B48;
    case 148u: goto L_08A20B50;
    case 149u: goto L_08A20B68;
    case 150u: goto L_08A20B74;
    case 151u: goto L_08A20B7C;
    case 152u: goto L_08A20B98;
    case 153u: goto L_08A20BA8;
    case 154u: goto L_08A20BB8;
    case 155u: goto L_08A20BC0;
    case 156u: goto L_08A20BDC;
    case 157u: goto L_08A20BEC;
    case 158u: goto L_08A20BFC;
    case 159u: goto L_08A20C04;
    case 160u: goto L_08A20C0C;
    case 161u: goto L_08A20C14;
    case 162u: goto L_08A20C1C;
    case 163u: goto L_08A20C38;
    case 164u: goto L_08A20C48;
    case 165u: goto L_08A20C58;
    case 166u: goto L_08A20C60;
    case 167u: goto L_08A20C7C;
    case 168u: goto L_08A20C9C;
    case 169u: goto L_08A20CA8;
    case 170u: goto L_08A20CB8;
    case 171u: goto L_08A20CC8;
    case 172u: goto L_08A20CF0;
    case 173u: goto L_08A20D0C;
    case 174u: goto L_08A20D14;
    case 175u: goto L_08A20D38;
    case 176u: goto L_08A20D40;
    case 177u: goto L_08A20D48;
    case 178u: goto L_08A20D50;
    case 179u: goto L_08A20D58;
    case 180u: goto L_08A20D74;
    case 181u: goto L_08A20D98;
    case 182u: goto L_08A20DA0;
    case 183u: goto L_08A20DBC;
    case 184u: goto L_08A20DD0;
    case 185u: goto L_08A20DEC;
    case 186u: goto L_08A20DF4;
    case 187u: goto L_08A20DFC;
    case 188u: goto L_08A20E18;
    case 189u: goto L_08A20E38;
    case 190u: goto L_08A20E44;
    case 191u: goto L_08A20E54;
    case 192u: goto L_08A20E64;
    case 193u: goto L_08A20E8C;
    case 194u: goto L_08A20EA8;
    case 195u: goto L_08A20EB0;
    case 196u: goto L_08A20ED4;
    case 197u: goto L_08A20EDC;
    case 198u: goto L_08A20EF8;
    case 199u: goto L_08A20F0C;
    case 200u: goto L_08A20F28;
    case 201u: goto L_08A20F30;
    case 202u: goto L_08A20F50;
    case 203u: goto L_08A20F64;
    case 204u: goto L_08A20F78;
    case 205u: goto L_08A20F8C;
    case 206u: goto L_08A20F94;
    case 207u: goto L_08A20FB0;
    case 208u: goto L_08A20FB8;
    case 209u: goto L_08A20FCC;
    case 210u: goto L_08A20FD4;
    case 211u: goto L_08A20FEC;
    case 212u: goto L_08A20FFC;
    case 213u: goto L_08A21020;
    case 214u: goto L_08A2103C;
    case 215u: goto L_08A2104C;
    case 216u: goto L_08A21054;
    case 217u: goto L_08A2106C;
    case 218u: goto L_08A21078;
    case 219u: goto L_08A21080;
    case 220u: goto L_08A21088;
    case 221u: goto L_08A210AC;
    case 222u: goto L_08A210CC;
    case 223u: goto L_08A210D8;
    case 224u: goto L_08A210E4;
    case 225u: goto L_08A210F0;
    case 226u: goto L_08A2110C;
    case 227u: goto L_08A21118;
    case 228u: goto L_08A2113C;
    case 229u: goto L_08A21144;
    case 230u: goto L_08A21160;
    case 231u: goto L_08A21174;
    case 232u: goto L_08A21190;
    case 233u: goto L_08A21194;
    case 234u: goto L_08A2119C;
    case 235u: goto L_08A211AC;
    case 236u: goto L_08A211B4;
    case 237u: goto L_08A211C4;
    case 238u: goto L_08A211CC;
    case 239u: goto L_08A211DC;
    case 240u: goto L_08A211E4;
    case 241u: goto L_08A211F4;
    case 242u: goto L_08A211FC;
    case 243u: goto L_08A2120C;
    case 244u: goto L_08A21214;
    case 245u: goto L_08A2122C;
    case 246u: goto L_08A21240;
    case 247u: goto L_08A21264;
    case 248u: goto L_08A21284;
    case 249u: goto L_08A2128C;
    case 250u: goto L_08A21294;
    case 251u: goto L_08A212B0;
    case 252u: goto L_08A212C0;
    case 253u: goto L_08A212D8;
    case 254u: goto L_08A212E0;
    case 255u: goto L_08A212FC;
    case 256u: goto L_08A2130C;
    case 257u: goto L_08A2131C;
    case 258u: goto L_08A21344;
    case 259u: goto L_08A21368;
    case 260u: goto L_08A21370;
    case 261u: goto L_08A21378;
    case 262u: goto L_08A21394;
    case 263u: goto L_08A2139C;
    case 264u: goto L_08A213B8;
    case 265u: goto L_08A213C8;
    case 266u: goto L_08A213D8;
    case 267u: goto L_08A213EC;
    case 268u: goto L_08A213F8;
    case 269u: goto L_08A21400;
    case 270u: goto L_08A21418;
    case 271u: goto L_08A21428;
    case 272u: goto L_08A21440;
    case 273u: goto L_08A21450;
    case 274u: goto L_08A21460;
    case 275u: goto L_08A21470;
    case 276u: goto L_08A21474;
    case 277u: goto L_08A21498;
    case 278u: goto L_08A214A0;
    case 279u: goto L_08A214BC;
    case 280u: goto L_08A214D0;
    case 281u: goto L_08A214EC;
    case 282u: goto L_08A214F0;
    case 283u: goto L_08A214F8;
    case 284u: goto L_08A21510;
    case 285u: goto L_08A21528;
    case 286u: goto L_08A21534;
    case 287u: goto L_08A2153C;
    case 288u: goto L_08A21548;
    case 289u: goto L_08A21550;
    case 290u: goto L_08A21558;
    case 291u: goto L_08A21560;
    case 292u: goto L_08A2157C;
    case 293u: goto L_08A21584;
    case 294u: goto L_08A21598;
    case 295u: goto L_08A215A0;
    case 296u: goto L_08A215B8;
    case 297u: goto L_08A215C4;
    case 298u: goto L_08A215E4;
    case 299u: goto L_08A215F0;
    case 300u: goto L_08A215FC;
    case 301u: goto L_08A21608;
    case 302u: goto L_08A2160C;
    case 303u: goto L_08A21640;
    case 304u: goto L_08A2164C;
    case 305u: goto L_08A21650;
    case 306u: goto L_08A21680;
    case 307u: goto L_08A21694;
    case 308u: goto L_08A2169C;
    case 309u: goto L_08A216A4;
    case 310u: goto L_08A216BC;
    case 311u: goto L_08A216C4;
    case 312u: goto L_08A216D4;
    case 313u: goto L_08A216EC;
    case 314u: goto L_08A216F8;
    case 315u: goto L_08A21710;
    case 316u: goto L_08A21718;
    case 317u: goto L_08A21730;
    case 318u: goto L_08A21740;
    case 319u: goto L_08A2174C;
    case 320u: goto L_08A21758;
    case 321u: goto L_08A2175C;
    case 322u: goto L_08A21780;
    case 323u: goto L_08A21788;
    case 324u: goto L_08A217A4;
    case 325u: goto L_08A217B8;
    case 326u: goto L_08A217D4;
    case 327u: goto L_08A217D8;
    case 328u: goto L_08A217E0;
    case 329u: goto L_08A217F8;
    case 330u: goto L_08A2182C;
    case 331u: goto L_08A21834;
    case 332u: goto L_08A21838;
    case 333u: goto L_08A2185C;
    case 334u: goto L_08A21864;
    case 335u: goto L_08A21880;
    case 336u: goto L_08A21894;
    case 337u: goto L_08A218B0;
    case 338u: goto L_08A218B4;
    case 339u: goto L_08A218BC;
    case 340u: goto L_08A218D4;
    case 341u: goto L_08A218E4;
    case 342u: goto L_08A218F4;
    case 343u: goto L_08A218FC;
    case 344u: goto L_08A21900;
    case 345u: goto L_08A21924;
    case 346u: goto L_08A2192C;
    case 347u: goto L_08A21948;
    case 348u: goto L_08A2195C;
    case 349u: goto L_08A21978;
    case 350u: goto L_08A2197C;
    case 351u: goto L_08A21984;
    case 352u: goto L_08A219A0;
    case 353u: goto L_08A219C0;
    case 354u: goto L_08A219C8;
    case 355u: goto L_08A219D0;
    case 356u: goto L_08A219E8;
    case 357u: goto L_08A219F4;
    case 358u: goto L_08A21A00;
    case 359u: goto L_08A21A08;
    case 360u: goto L_08A21A20;
    case 361u: goto L_08A21A28;
    case 362u: goto L_08A21A44;
    case 363u: goto L_08A21A68;
    case 364u: goto L_08A21A74;
    case 365u: goto L_08A21A7C;
    case 366u: goto L_08A21A88;
    case 367u: goto L_08A21A90;
    case 368u: goto L_08A21A9C;
    case 369u: goto L_08A21ABC;
    case 370u: goto L_08A21AD4;
    case 371u: goto L_08A21AE8;
    case 372u: goto L_08A21AF0;
    case 373u: goto L_08A21B0C;
    case 374u: goto L_08A21B30;
    case 375u: goto L_08A21B3C;
    case 376u: goto L_08A21B44;
    case 377u: goto L_08A21B50;
    case 378u: goto L_08A21B58;
    case 379u: goto L_08A21B64;
    case 380u: goto L_08A21B84;
    case 381u: goto L_08A21B9C;
    case 382u: goto L_08A21BB0;
    case 383u: goto L_08A21BB8;
    case 384u: goto L_08A21BD4;
    case 385u: goto L_08A21BE4;
    case 386u: goto L_08A21BF4;
    case 387u: goto L_08A21C08;
    case 388u: goto L_08A21C1C;
    case 389u: goto L_08A21C24;
    case 390u: goto L_08A21C40;
    case 391u: goto L_08A21C50;
    case 392u: goto L_08A21C60;
    case 393u: goto L_08A21C74;
    case 394u: goto L_08A21C88;
    case 395u: goto L_08A21C90;
    case 396u: goto L_08A21CAC;
    case 397u: goto L_08A21CBC;
    case 398u: goto L_08A21CCC;
    case 399u: goto L_08A21CE0;
    case 400u: goto L_08A21CF4;
    case 401u: goto L_08A21D08;
    case 402u: goto L_08A21D1C;
    case 403u: goto L_08A21D30;
    case 404u: goto L_08A21D44;
    case 405u: goto L_08A21D58;
    case 406u: goto L_08A21D6C;
    case 407u: goto L_08A21D80;
    case 408u: goto L_08A21D94;
    case 409u: goto L_08A21DA8;
    case 410u: goto L_08A21DBC;
    case 411u: goto L_08A21DD0;
    case 412u: goto L_08A21DE4;
    case 413u: goto L_08A21DEC;
    case 414u: goto L_08A21E08;
    case 415u: goto L_08A21E18;
    case 416u: goto L_08A21E28;
    case 417u: goto L_08A21E3C;
    case 418u: goto L_08A21E50;
    case 419u: goto L_08A21E64;
    case 420u: goto L_08A21E78;
    case 421u: goto L_08A21E8C;
    case 422u: goto L_08A21EA0;
    case 423u: goto L_08A21EB4;
    case 424u: goto L_08A21EC8;
    case 425u: goto L_08A21EDC;
    case 426u: goto L_08A21EF0;
    case 427u: goto L_08A21F04;
    case 428u: goto L_08A21F18;
    case 429u: goto L_08A21F2C;
    case 430u: goto L_08A21F40;
    case 431u: goto L_08A21F48;
    case 432u: goto L_08A21F58;
    case 433u: goto L_08A21F60;
    case 434u: goto L_08A21F64;
    case 435u: goto L_08A21F90;
    case 436u: goto L_08A21FD0;
    case 437u: goto L_08A21FEC;
    case 438u: goto L_08A22004;
    case 439u: goto L_08A22014;
    case 440u: goto L_08A22024;
    case 441u: goto L_08A22034;
    case 442u: goto L_08A22038;
    case 443u: goto L_08A2205C;
    case 444u: goto L_08A22064;
    case 445u: goto L_08A22080;
    case 446u: goto L_08A22094;
    case 447u: goto L_08A220B0;
    case 448u: goto L_08A220B4;
    case 449u: goto L_08A220BC;
    case 450u: goto L_08A220D8;
    case 451u: goto L_08A220FC;
    case 452u: goto L_08A22108;
    case 453u: goto L_08A2210C;
    case 454u: goto L_08A22144;
    case 455u: goto L_08A221A4;
    case 456u: goto L_08A221AC;
    case 457u: goto L_08A221C8;
    case 458u: goto L_08A221EC;
    case 459u: goto L_08A221F8;
    case 460u: goto L_08A221FC;
    case 461u: goto L_08A22234;
    case 462u: goto L_08A22244;
    case 463u: goto L_08A22274;
    case 464u: goto L_08A2227C;
    case 465u: goto L_08A22298;
    case 466u: goto L_08A222A8;
    case 467u: goto L_08A222D0;
    case 468u: goto L_08A222DC;
    case 469u: goto L_08A222E0;
    case 470u: goto L_08A222E8;
    case 471u: goto L_08A2230C;
    case 472u: goto L_08A22314;
    case 473u: goto L_08A22320;
    case 474u: goto L_08A22328;
    case 475u: goto L_08A2235C;
    case 476u: goto L_08A2236C;
    case 477u: goto L_08A22378;
    case 478u: goto L_08A22380;
    case 479u: goto L_08A22398;
    case 480u: goto L_08A223A8;
    case 481u: goto L_08A22460;
    case 482u: goto L_08A22468;
    case 483u: goto L_08A22470;
    case 484u: goto L_08A22474;
    case 485u: goto L_08A22498;
    case 486u: goto L_08A224A0;
    case 487u: goto L_08A224BC;
    case 488u: goto L_08A224D0;
    case 489u: goto L_08A224EC;
    case 490u: goto L_08A224F0;
    case 491u: goto L_08A224F8;
    case 492u: goto L_08A22510;
    case 493u: goto L_08A22520;
    case 494u: goto L_08A225D8;
    case 495u: goto L_08A225E0;
    case 496u: goto L_08A225E8;
    case 497u: goto L_08A225EC;
    case 498u: goto L_08A22610;
    case 499u: goto L_08A22618;
    case 500u: goto L_08A22634;
    case 501u: goto L_08A22648;
    case 502u: goto L_08A22664;
    case 503u: goto L_08A22668;
    case 504u: goto L_08A22670;
    case 505u: goto L_08A22688;
    case 506u: goto L_08A22698;
    case 507u: goto L_08A22750;
    case 508u: goto L_08A22758;
    case 509u: goto L_08A22760;
    case 510u: goto L_08A22764;
    case 511u: goto L_08A22788;
    case 512u: goto L_08A22790;
    case 513u: goto L_08A227AC;
    case 514u: goto L_08A227C0;
    case 515u: goto L_08A227DC;
    case 516u: goto L_08A227E0;
    case 517u: goto L_08A227E8;
    case 518u: goto L_08A22800;
    case 519u: goto L_08A22830;
    case 520u: goto L_08A22850;
    case 521u: goto L_08A22864;
    case 522u: goto L_08A2287C;
    case 523u: goto L_08A22884;
    case 524u: goto L_08A228A0;
    case 525u: goto L_08A228C4;
    case 526u: goto L_08A228D0;
    case 527u: goto L_08A228D4;
    case 528u: goto L_08A22904;
    case 529u: goto L_08A2291C;
    case 530u: goto L_08A22924;
    case 531u: goto L_08A2293C;
    case 532u: goto L_08A22958;
    case 533u: goto L_08A22960;
    case 534u: goto L_08A22964;
    case 535u: goto L_08A22988;
    case 536u: goto L_08A22990;
    case 537u: goto L_08A229AC;
    case 538u: goto L_08A229C0;
    case 539u: goto L_08A229DC;
    case 540u: goto L_08A229E0;
    case 541u: goto L_08A229E8;
    case 542u: goto L_08A22A00;
    case 543u: goto L_08A22A18;
    case 544u: goto L_08A22A20;
    case 545u: goto L_08A22A3C;
    case 546u: goto L_08A22A4C;
    case 547u: goto L_08A22A74;
    case 548u: goto L_08A22A8C;
    case 549u: goto L_08A22AD8;
    case 550u: goto L_08A22AF0;
    case 551u: goto L_08A22B08;
    case 552u: goto L_08A22B18;
    case 553u: goto L_08A22B4C;
    case 554u: goto L_08A22B64;
    case 555u: goto L_08A22BA4;
    case 556u: goto L_08A22BC4;
    case 557u: goto L_08A22BCC;
    case 558u: goto L_08A22BD0;
    case 559u: goto L_08A22BF4;
    case 560u: goto L_08A22BFC;
    case 561u: goto L_08A22C18;
    case 562u: goto L_08A22C2C;
    case 563u: goto L_08A22C48;
    case 564u: goto L_08A22C4C;
    case 565u: goto L_08A22C60;
    case 566u: goto L_08A22C8C;
    case 567u: goto L_08A22C9C;
    case 568u: goto L_08A22CA4;
    case 569u: goto L_08A22CC0;
    case 570u: goto L_08A22D14;
    case 571u: goto L_08A22D18;
    case 572u: goto L_08A22D3C;
    case 573u: goto L_08A22D44;
    case 574u: goto L_08A22D60;
    case 575u: goto L_08A22D74;
    case 576u: goto L_08A22D90;
    case 577u: goto L_08A22D94;
    case 578u: goto L_08A22D9C;
    case 579u: goto L_08A22DB8;
    case 580u: goto L_08A22DC8;
    case 581u: goto L_08A22DF0;
    case 582u: goto L_08A22DF4;
    case 583u: goto L_08A22E18;
    case 584u: goto L_08A22E20;
    case 585u: goto L_08A22E3C;
    case 586u: goto L_08A22E50;
    case 587u: goto L_08A22E6C;
    case 588u: goto L_08A22E70;
    case 589u: goto L_08A22E78;
    case 590u: goto L_08A22E94;
    case 591u: goto L_08A22EA4;
    case 592u: goto L_08A22EBC;
    case 593u: goto L_08A22ED8;
    case 594u: goto L_08A22F00;
    case 595u: goto L_08A22F08;
    case 596u: goto L_08A22F10;
    case 597u: goto L_08A22F1C;
    case 598u: goto L_08A22F3C;
    case 599u: goto L_08A22F44;
    case 600u: goto L_08A22F5C;
    case 601u: goto L_08A22F64;
    case 602u: goto L_08A22F74;
    case 603u: goto L_08A22F84;
    case 604u: goto L_08A22F94;
    case 605u: goto L_08A22F9C;
    case 606u: goto L_08A22FA4;
    case 607u: goto L_08A22FB4;
    case 608u: goto L_08A22FC8;
    case 609u: goto L_08A22FD4;
    case 610u: goto L_08A22FF4;
    case 611u: goto L_08A22FFC;
    case 612u: goto L_08A2300C;
    case 613u: goto L_08A23018;
    case 614u: goto L_08A23030;
    case 615u: goto L_08A23038;
    case 616u: goto L_08A2305C;
    case 617u: goto L_08A23074;
    case 618u: goto L_08A23084;
    case 619u: goto L_08A230D8;
    case 620u: goto L_08A230EC;
    case 621u: goto L_08A230F4;
    case 622u: goto L_08A2310C;
    case 623u: goto L_08A23114;
    case 624u: goto L_08A23134;
    case 625u: goto L_08A23148;
    case 626u: goto L_08A23158;
    case 627u: goto L_08A23164;
    case 628u: goto L_08A23174;
    case 629u: goto L_08A23190;
    case 630u: goto L_08A231A8;
    case 631u: goto L_08A231B0;
    case 632u: goto L_08A231B8;
    case 633u: goto L_08A231C4;
    case 634u: goto L_08A231E4;
    case 635u: goto L_08A231EC;
    case 636u: goto L_08A23204;
    case 637u: goto L_08A2320C;
    case 638u: goto L_08A2321C;
    case 639u: goto L_08A2322C;
    case 640u: goto L_08A2323C;
    case 641u: goto L_08A23244;
    case 642u: goto L_08A2324C;
    case 643u: goto L_08A2325C;
    case 644u: goto L_08A23270;
    case 645u: goto L_08A2327C;
    case 646u: goto L_08A2329C;
    case 647u: goto L_08A232A4;
    case 648u: goto L_08A232B4;
    case 649u: goto L_08A232C0;
    case 650u: goto L_08A232E4;
    case 651u: goto L_08A232EC;
    case 652u: goto L_08A23308;
    case 653u: goto L_08A23320;
    case 654u: goto L_08A23330;
    case 655u: goto L_08A23384;
    case 656u: goto L_08A23398;
    case 657u: goto L_08A233A0;
    case 658u: goto L_08A233B8;
    case 659u: goto L_08A233C0;
    case 660u: goto L_08A233D8;
    case 661u: goto L_08A23410;
    case 662u: goto L_08A23420;
    case 663u: goto L_08A23438;
    case 664u: goto L_08A23448;
    case 665u: goto L_08A23458;
    case 666u: goto L_08A23468;
    case 667u: goto L_08A2346C;
    case 668u: goto L_08A23490;
    case 669u: goto L_08A23498;
    case 670u: goto L_08A234B4;
    case 671u: goto L_08A234C8;
    case 672u: goto L_08A234E4;
    case 673u: goto L_08A234E8;
    case 674u: goto L_08A234F0;
    case 675u: goto L_08A23508;
    case 676u: goto L_08A23548;
    case 677u: goto L_08A2354C;
    case 678u: goto L_08A23570;
    case 679u: goto L_08A23578;
    case 680u: goto L_08A23594;
    case 681u: goto L_08A235A8;
    case 682u: goto L_08A235C4;
    case 683u: goto L_08A235C8;
    case 684u: goto L_08A235D0;
    case 685u: goto L_08A235E8;
    case 686u: goto L_08A235F8;
    case 687u: goto L_08A23610;
    case 688u: goto L_08A23614;
    case 689u: goto L_08A23638;
    case 690u: goto L_08A23640;
    case 691u: goto L_08A2365C;
    case 692u: goto L_08A23670;
    case 693u: goto L_08A2368C;
    case 694u: goto L_08A23690;
    case 695u: goto L_08A23698;
    case 696u: goto L_08A236B4;
    case 697u: goto L_08A236D8;
    case 698u: goto L_08A236E4;
    case 699u: goto L_08A236F4;
    case 700u: goto L_08A23700;
    case 701u: goto L_08A23708;
    case 702u: goto L_08A23714;
    case 703u: goto L_08A23750;
    case 704u: goto L_08A23764;
    case 705u: goto L_08A2376C;
    case 706u: goto L_08A23788;
    case 707u: goto L_08A23798;
    case 708u: goto L_08A237D4;
    case 709u: goto L_08A237E8;
    case 710u: goto L_08A23804;
    case 711u: goto L_08A23814;
    case 712u: goto L_08A23850;
    case 713u: goto L_08A23858;
    case 714u: goto L_08A23878;
    case 715u: goto L_08A2388C;
    case 716u: goto L_08A23894;
    case 717u: goto L_08A2389C;
    case 718u: goto L_08A238B8;
    case 719u: goto L_08A238C0;
    case 720u: goto L_08A238D0;
    case 721u: goto L_08A238E4;
    case 722u: goto L_08A238EC;
    case 723u: goto L_08A23904;
    case 724u: goto L_08A23914;
    case 725u: goto L_08A23938;
    case 726u: goto L_08A23950;
    case 727u: goto L_08A23958;
    case 728u: goto L_08A23960;
    case 729u: goto L_08A23968;
    case 730u: goto L_08A23970;
    case 731u: goto L_08A23988;
    case 732u: goto L_08A23990;
    case 733u: goto L_08A23998;
    case 734u: goto L_08A239A0;
    case 735u: goto L_08A239B0;
    case 736u: goto L_08A239B8;
    case 737u: goto L_08A239BC;
    case 738u: goto L_08A239E0;
    case 739u: goto L_08A239E8;
    case 740u: goto L_08A23A04;
    case 741u: goto L_08A23A18;
    case 742u: goto L_08A23A34;
    case 743u: goto L_08A23A38;
    case 744u: goto L_08A23A40;
    case 745u: goto L_08A23A4C;
    case 746u: goto L_08A23A54;
    case 747u: goto L_08A23A5C;
    case 748u: goto L_08A23A6C;
    case 749u: goto L_08A23A74;
    case 750u: goto L_08A23A90;
    case 751u: goto L_08A23AB4;
    case 752u: goto L_08A23AC0;
    case 753u: goto L_08A23ACC;
    case 754u: goto L_08A23B00;
    case 755u: goto L_08A23B08;
    case 756u: goto L_08A23B20;
    case 757u: goto L_08A23B58;
    case 758u: goto L_08A23B74;
    case 759u: goto L_08A23B84;
    case 760u: goto L_08A23B98;
    case 761u: goto L_08A23B9C;
    case 762u: goto L_08A23BC0;
    case 763u: goto L_08A23BC8;
    case 764u: goto L_08A23BE4;
    case 765u: goto L_08A23BF8;
    case 766u: goto L_08A23C14;
    case 767u: goto L_08A23C18;
    case 768u: goto L_08A23C20;
    case 769u: goto L_08A23C38;
    case 770u: goto L_08A23C54;
    case 771u: goto L_08A23C64;
    case 772u: goto L_08A23C78;
    case 773u: goto L_08A23C88;
    case 774u: goto L_08A23C98;
    case 775u: goto L_08A23CAC;
    case 776u: goto L_08A23CB8;
    case 777u: goto L_08A23CCC;
    case 778u: goto L_08A23CD4;
    case 779u: goto L_08A23CE8;
    case 780u: goto L_08A23CFC;
    case 781u: goto L_08A23D18;
    case 782u: goto L_08A23D6C;
    case 783u: goto L_08A23D74;
    case 784u: goto L_08A23D90;
    case 785u: goto L_08A23DE4;
    case 786u: goto L_08A23DEC;
    case 787u: goto L_08A23E08;
    case 788u: goto L_08A23E18;
    case 789u: goto L_08A23E50;
    case 790u: goto L_08A23E58;
    case 791u: goto L_08A23E74;
    case 792u: goto L_08A23E84;
    case 793u: goto L_08A23EBC;
    case 794u: goto L_08A23EC4;
    case 795u: goto L_08A23EE0;
    case 796u: goto L_08A23EFC;
    case 797u: goto L_08A23F04;
    case 798u: goto L_08A23F20;
    case 799u: goto L_08A23F48;
    case 800u: goto L_08A23F54;
    case 801u: goto L_08A23F64;
    case 802u: goto L_08A23F74;
    case 803u: goto L_08A23FDC;
    case 804u: goto L_08A23FE4;
    case 805u: goto L_08A23FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A20000:
    // nop
    goto L_08A20004;
L_08A20004:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A20024;
L_08A20024:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20044;
      }
      goto L_08A20030;
    }
L_08A20030:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2003Cu);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2003Cu) goto L_08A2003C;
    return;
L_08A2003C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20050;
      }
      goto L_08A20044;
    }
L_08A20044:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20050u);
    ctx.gpr[5] = (0u | 148u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A20050u) goto L_08A20050;
    return;
L_08A20050:
    ctx.gpr[4] = (0u | 290u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A20068;
      }
      goto L_08A2005C;
    }
L_08A2005C:
    ctx.gpr[4] = (0u | 294u);
    ctx.gpr[31] = (0x08A20068u);
    ctx.gpr[5] = (0u | 22u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08A20068u) goto L_08A20068;
    return;
L_08A20068:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A20070;
    }
L_08A20070:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20088u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20088u) goto L_08A20088;
    return;
L_08A20088:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A200B4;
      }
      goto L_08A20094;
    }
L_08A20094:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A200B4;
L_08A200B4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
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
          goto L_08A200F0;
      }
      goto L_08A200E8;
    }
L_08A200E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A20158;
      }
      goto L_08A200F0;
    }
L_08A200F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A2010C;
      }
      goto L_08A20100;
    }
L_08A20100:
    ctx.gpr[31] = (0x08A20108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A20108u) goto L_08A20108;
    return;
L_08A20108:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A2010C;
L_08A2010C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A20158;
      }
      goto L_08A20124;
    }
L_08A20124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A2013C;
      }
      goto L_08A20130;
    }
L_08A20130:
    ctx.gpr[31] = (0x08A20138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 465u, 0x08AFDEA0u>(ctx, &aot_mem) && ctx.pc == 0x08A20138u) goto L_08A20138;
    return;
L_08A20138:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A2013C;
L_08A2013C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20436)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2014Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 91u, 0x089507FCu>(ctx, &aot_mem) && ctx.pc == 0x08A2014Cu) goto L_08A2014C;
    return;
L_08A2014C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20158;
      }
      goto L_08A20154;
    }
L_08A20154:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A20158;
L_08A20158:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A20184;
      }
      goto L_08A2017C;
    }
L_08A2017C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A201D4;
      }
      goto L_08A20184;
    }
L_08A20184:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A201B4;
    }
    goto L_08A201A0;
L_08A201A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A201D4;
      }
      goto L_08A201B4;
    }
L_08A201B4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A201D4;
      }
      goto L_08A201D0;
    }
L_08A201D0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A201D4;
L_08A201D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A201DC;
    }
L_08A201DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A201F4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A201F4u) goto L_08A201F4;
    return;
L_08A201F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A20220;
      }
      goto L_08A20200;
    }
L_08A20200:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A20220;
L_08A20220:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2023C;
      }
      goto L_08A2022C;
    }
L_08A2022C:
    ctx.gpr[31] = (0x08A20234u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 631u, 0x089C6AC4u>(ctx, &aot_mem) && ctx.pc == 0x08A20234u) goto L_08A20234;
    return;
L_08A20234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20244;
      }
      goto L_08A2023C;
    }
L_08A2023C:
    ctx.gpr[31] = (0x08A20244u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 648u, 0x089C6BE8u>(ctx, &aot_mem) && ctx.pc == 0x08A20244u) goto L_08A20244;
    return;
L_08A20244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A2024C;
    }
L_08A2024C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A2026Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2026Cu) goto L_08A2026C;
    return;
L_08A2026C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x08A20280u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19376));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 59u, 0x08930468u>(ctx, &aot_mem) && ctx.pc == 0x08A20280u) goto L_08A20280;
    return;
L_08A20280:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20294u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A20294u) goto L_08A20294;
    return;
L_08A20294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A2029C;
    }
L_08A2029C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A202B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A202B4u) goto L_08A202B4;
    return;
L_08A202B4:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19376));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A202DCu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 72u, 0x08930628u>(ctx, &aot_mem) && ctx.pc == 0x08A202DCu) goto L_08A202DC;
    return;
L_08A202DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A202E4;
    }
L_08A202E4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20300u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 544u, 0x089578F8u>(ctx, &aot_mem) && ctx.pc == 0x08A20300u) goto L_08A20300;
    return;
L_08A20300:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08A20320u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20320u) goto L_08A20320;
    return;
L_08A20320:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20360;
      }
      goto L_08A20344;
    }
L_08A20344:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A20350u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A20350u) goto L_08A20350;
    return;
L_08A20350:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_08A20360;
L_08A20360:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[8] = (17377u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08A203DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 328u, 0x089FA154u>(ctx, &aot_mem) && ctx.pc == 0x08A203DCu) goto L_08A203DC;
    return;
L_08A203DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A203E4;
    }
L_08A203E4:
    ctx.gpr[31] = (0x08A203ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 673u, 0x08933A90u>(ctx, &aot_mem) && ctx.pc == 0x08A203ECu) goto L_08A203EC;
    return;
L_08A203EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A203F4;
    }
L_08A203F4:
    ctx.gpr[31] = (0x08A203FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 674u, 0x08933AF0u>(ctx, &aot_mem) && ctx.pc == 0x08A203FCu) goto L_08A203FC;
    return;
L_08A203FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A20404;
    }
L_08A20404:
    ctx.gpr[31] = (0x08A2040Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 90u, 0x0883C650u>(ctx, &aot_mem) && ctx.pc == 0x08A2040Cu) goto L_08A2040C;
    return;
L_08A2040C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A20414;
    }
L_08A20414:
    ctx.gpr[31] = (0x08A2041Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 91u, 0x0883C690u>(ctx, &aot_mem) && ctx.pc == 0x08A2041Cu) goto L_08A2041C;
    return;
L_08A2041C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A20424;
    }
L_08A20424:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A20440u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20440u) goto L_08A20440;
    return;
L_08A20440:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20478;
      }
      goto L_08A20468;
    }
L_08A20468:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A20474u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A20474u) goto L_08A20474;
    return;
L_08A20474:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A20478;
L_08A20478:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x08A20490u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 251u, 0x08A25644u>(ctx, &aot_mem) && ctx.pc == 0x08A20490u) goto L_08A20490;
    return;
L_08A20490:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A204D0;
      }
      goto L_08A204C4;
    }
L_08A204C4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A204D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2164));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A204D0u) goto L_08A204D0;
    return;
L_08A204D0:
    ctx.gpr[31] = (0x08A204D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 453u, 0x089D70D8u>(ctx, &aot_mem) && ctx.pc == 0x08A204D8u) goto L_08A204D8;
    return;
L_08A204D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A204E0;
    }
L_08A204E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A204F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A204F8u) goto L_08A204F8;
    return;
L_08A204F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20530;
      }
      goto L_08A2052C;
    }
L_08A2052C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A20530;
L_08A20530:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2055C;
      }
      goto L_08A20554;
    }
L_08A20554:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A205AC;
      }
      goto L_08A2055C;
    }
L_08A2055C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A2058C;
    }
    goto L_08A20578;
L_08A20578:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A205AC;
      }
      goto L_08A2058C;
    }
L_08A2058C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A205AC;
      }
      goto L_08A205A8;
    }
L_08A205A8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A205AC;
L_08A205AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A205B4;
    }
L_08A205B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A205CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A205CCu) goto L_08A205CC;
    return;
L_08A205CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A205D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 10u, 0x0887C0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A205D8u) goto L_08A205D8;
    return;
L_08A205D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A205E4;
      }
      goto L_08A205E0;
    }
L_08A205E0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A205E4;
L_08A205E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-605));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(97) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A21F60;
      }
      goto L_08A20650;
    }
L_08A20650:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-605));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(2784)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A2066C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20684u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20684u) goto L_08A20684;
    return;
L_08A20684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A20690u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 10u, 0x0887C0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A20690u) goto L_08A20690;
    return;
L_08A20690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20698;
    }
L_08A20698:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A206B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A206B0u) goto L_08A206B0;
    return;
L_08A206B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A206BCu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 10u, 0x0887C0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A206BCu) goto L_08A206BC;
    return;
L_08A206BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A206C4;
    }
L_08A206C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A206E0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A206E0u) goto L_08A206E0;
    return;
L_08A206E0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20714;
      }
      goto L_08A20704;
    }
L_08A20704:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A20710u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A20710u) goto L_08A20710;
    return;
L_08A20710:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    goto L_08A20714;
L_08A20714:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A20734u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 31u, 0x0887C27Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20734u) goto L_08A20734;
    return;
L_08A20734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A2073C;
    }
L_08A2073C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A20758u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20758u) goto L_08A20758;
    return;
L_08A20758:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20784;
      }
      goto L_08A20778;
    }
L_08A20778:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A20784;
L_08A20784:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A207A4;
    }
    goto L_08A20794;
L_08A20794:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A207A4;
L_08A207A4:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A207CCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A207CCu) goto L_08A207CC;
    return;
L_08A207CC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A207F0;
      }
      goto L_08A207E8;
    }
L_08A207E8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A207F0;
      }
      goto L_08A207F0;
    }
L_08A207F0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A20810u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 40u, 0x0887C368u>(ctx, &aot_mem) && ctx.pc == 0x08A20810u) goto L_08A20810;
    return;
L_08A20810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20818;
    }
L_08A20818:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20830u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20830u) goto L_08A20830;
    return;
L_08A20830:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A2083Cu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 10u, 0x0887C0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A2083Cu) goto L_08A2083C;
    return;
L_08A2083C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20844;
    }
L_08A20844:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20860u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20860u) goto L_08A20860;
    return;
L_08A20860:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A20870u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A20870u) goto L_08A20870;
    return;
L_08A20870:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08A20880u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20880u) goto L_08A20880;
    return;
L_08A20880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20888;
    }
L_08A20888:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A208A4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A208A4u) goto L_08A208A4;
    return;
L_08A208A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A208D8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A208D8u) goto L_08A208D8;
    return;
L_08A208D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A208E0;
    }
L_08A208E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A208FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A208FCu) goto L_08A208FC;
    return;
L_08A208FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A2090Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A2090Cu) goto L_08A2090C;
    return;
L_08A2090C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A2091Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A2091Cu) goto L_08A2091C;
    return;
L_08A2091C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20924;
    }
L_08A20924:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20940u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20940u) goto L_08A20940;
    return;
L_08A20940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A20974u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20974u) goto L_08A20974;
    return;
L_08A20974:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A2097C;
    }
L_08A2097C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20998u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20998u) goto L_08A20998;
    return;
L_08A20998:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A209A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A209A8u) goto L_08A209A8;
    return;
L_08A209A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08A209B8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A209B8u) goto L_08A209B8;
    return;
L_08A209B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A209C0;
    }
L_08A209C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A209DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A209DCu) goto L_08A209DC;
    return;
L_08A209DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A20A10u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20A10u) goto L_08A20A10;
    return;
L_08A20A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20A18;
    }
L_08A20A18:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20A34u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A34u) goto L_08A20A34;
    return;
L_08A20A34:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A20A44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A20A44u) goto L_08A20A44;
    return;
L_08A20A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x08A20A54u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20A54u) goto L_08A20A54;
    return;
L_08A20A54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20A5C;
    }
L_08A20A5C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20A78u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20A78u) goto L_08A20A78;
    return;
L_08A20A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A20AACu);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20AACu) goto L_08A20AAC;
    return;
L_08A20AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20AB4;
    }
L_08A20AB4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20AD0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20AD0u) goto L_08A20AD0;
    return;
L_08A20AD0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A20AE0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A20AE0u) goto L_08A20AE0;
    return;
L_08A20AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x08A20AF0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20AF0u) goto L_08A20AF0;
    return;
L_08A20AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20AF8;
    }
L_08A20AF8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20B14u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20B14u) goto L_08A20B14;
    return;
L_08A20B14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A20B48u);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20B48u) goto L_08A20B48;
    return;
L_08A20B48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20B50;
    }
L_08A20B50:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20B68u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20B68u) goto L_08A20B68;
    return;
L_08A20B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A20B74u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 10u, 0x0887C0B4u>(ctx, &aot_mem) && ctx.pc == 0x08A20B74u) goto L_08A20B74;
    return;
L_08A20B74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20B7C;
    }
L_08A20B7C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20B98u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20B98u) goto L_08A20B98;
    return;
L_08A20B98:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A20BA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A20BA8u) goto L_08A20BA8;
    return;
L_08A20BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08A20BB8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20BB8u) goto L_08A20BB8;
    return;
L_08A20BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20BC0;
    }
L_08A20BC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20BDCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20BDCu) goto L_08A20BDC;
    return;
L_08A20BDC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A20BECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A20BECu) goto L_08A20BEC;
    return;
L_08A20BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A20BFCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20BFCu) goto L_08A20BFC;
    return;
L_08A20BFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20C04;
    }
L_08A20C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20C0C;
    }
L_08A20C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20C14;
    }
L_08A20C14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20C1C;
    }
L_08A20C1C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20C38u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20C38u) goto L_08A20C38;
    return;
L_08A20C38:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A20C48u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A20C48u) goto L_08A20C48;
    return;
L_08A20C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x08A20C58u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 22u, 0x0887C1A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20C58u) goto L_08A20C58;
    return;
L_08A20C58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20C60;
    }
L_08A20C60:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A20C7Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20C7Cu) goto L_08A20C7C;
    return;
L_08A20C7C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20CA8;
      }
      goto L_08A20C9C;
    }
L_08A20C9C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A20CA8;
L_08A20CA8:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A20CC8;
    }
    goto L_08A20CB8;
L_08A20CB8:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A20CC8;
L_08A20CC8:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A20CF0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A20CF0u) goto L_08A20CF0;
    return;
L_08A20CF0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20D14;
      }
      goto L_08A20D0C;
    }
L_08A20D0C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A20D14;
      }
      goto L_08A20D14;
    }
L_08A20D14:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x08A20D38u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 40u, 0x0887C368u>(ctx, &aot_mem) && ctx.pc == 0x08A20D38u) goto L_08A20D38;
    return;
L_08A20D38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20D40;
    }
L_08A20D40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20D48;
    }
L_08A20D48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20D50;
    }
L_08A20D50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20D58;
    }
L_08A20D58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A20D74u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20D74u) goto L_08A20D74;
    return;
L_08A20D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[31] = (0x08A20D98u);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 49u, 0x0887C464u>(ctx, &aot_mem) && ctx.pc == 0x08A20D98u) goto L_08A20D98;
    return;
L_08A20D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20DA0;
    }
L_08A20DA0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A20DBCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20DBCu) goto L_08A20DBC;
    return;
L_08A20DBC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A20DD0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A20DD0u) goto L_08A20DD0;
    return;
L_08A20DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A20DECu);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 31u, 0x0887C27Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20DECu) goto L_08A20DEC;
    return;
L_08A20DEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20DF4;
    }
L_08A20DF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20DFC;
    }
L_08A20DFC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A20E18u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20E18u) goto L_08A20E18;
    return;
L_08A20E18:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20E44;
      }
      goto L_08A20E38;
    }
L_08A20E38:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A20E44;
L_08A20E44:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A20E64;
    }
    goto L_08A20E54;
L_08A20E54:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A20E64;
L_08A20E64:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A20E8Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A20E8Cu) goto L_08A20E8C;
    return;
L_08A20E8C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20EB0;
      }
      goto L_08A20EA8;
    }
L_08A20EA8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A20EB0;
      }
      goto L_08A20EB0;
    }
L_08A20EB0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08A20ED4u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 40u, 0x0887C368u>(ctx, &aot_mem) && ctx.pc == 0x08A20ED4u) goto L_08A20ED4;
    return;
L_08A20ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20EDC;
    }
L_08A20EDC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A20EF8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20EF8u) goto L_08A20EF8;
    return;
L_08A20EF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A20F0Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A20F0Cu) goto L_08A20F0C;
    return;
L_08A20F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A20F28u);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 31u, 0x0887C27Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20F28u) goto L_08A20F28;
    return;
L_08A20F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20F30;
    }
L_08A20F30:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A20F50u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20F50u) goto L_08A20F50;
    return;
L_08A20F50:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A20F64u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A20F64u) goto L_08A20F64;
    return;
L_08A20F64:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A20F78u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 563u, 0x088829D0u>(ctx, &aot_mem) && ctx.pc == 0x08A20F78u) goto L_08A20F78;
    return;
L_08A20F78:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20F8Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A20F8Cu) goto L_08A20F8C;
    return;
L_08A20F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20F94;
    }
L_08A20F94:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20FB0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20FB0u) goto L_08A20FB0;
    return;
L_08A20FB0:
    ctx.gpr[31] = (0x08A20FB8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 64u, 0x0887C5A4u>(ctx, &aot_mem) && ctx.pc == 0x08A20FB8u) goto L_08A20FB8;
    return;
L_08A20FB8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20FCCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A20FCCu) goto L_08A20FCC;
    return;
L_08A20FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A20FD4;
    }
L_08A20FD4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20FECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20FECu) goto L_08A20FEC;
    return;
L_08A20FEC:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2104C;
      }
      goto L_08A20FFC;
    }
L_08A20FFC:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4656));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2103C;
      }
      goto L_08A21020;
    }
L_08A21020:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4656));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A2103C;
L_08A2103C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20FFC;
      }
      goto L_08A2104C;
    }
L_08A2104C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21054;
    }
L_08A21054:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2106Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2106Cu) goto L_08A2106C;
    return;
L_08A2106C:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    goto L_08A21078;
L_08A21078:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21118;
      }
      goto L_08A21080;
    }
L_08A21080:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21118;
      }
      goto L_08A21088;
    }
L_08A21088:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4656));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2110C;
      }
      goto L_08A210AC;
    }
L_08A210AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4656));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A210CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A210CCu) goto L_08A210CC;
    return;
L_08A210CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A210F0;
      }
      goto L_08A210D8;
    }
L_08A210D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2110C;
      }
      goto L_08A210E4;
    }
L_08A210E4:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21118;
      }
      goto L_08A210F0;
    }
L_08A210F0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4656));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A2110C;
L_08A2110C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A21078;
      }
      goto L_08A21118;
    }
L_08A21118:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A21144;
      }
      goto L_08A2113C;
    }
L_08A2113C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A21194;
      }
      goto L_08A21144;
    }
L_08A21144:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A21174;
    }
    goto L_08A21160;
L_08A21160:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A21194;
      }
      goto L_08A21174;
    }
L_08A21174:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21194;
      }
      goto L_08A21190;
    }
L_08A21190:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A21194;
L_08A21194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A2119C;
    }
L_08A2119C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A211ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 110u, 0x088809ECu>(ctx, &aot_mem) && ctx.pc == 0x08A211ACu) goto L_08A211AC;
    return;
L_08A211AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A211B4;
    }
L_08A211B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A211C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 183u, 0x08880EBCu>(ctx, &aot_mem) && ctx.pc == 0x08A211C4u) goto L_08A211C4;
    return;
L_08A211C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A211CC;
    }
L_08A211CC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A211DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 254u, 0x08881380u>(ctx, &aot_mem) && ctx.pc == 0x08A211DCu) goto L_08A211DC;
    return;
L_08A211DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A211E4;
    }
L_08A211E4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A211F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 322u, 0x08881824u>(ctx, &aot_mem) && ctx.pc == 0x08A211F4u) goto L_08A211F4;
    return;
L_08A211F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A211FC;
    }
L_08A211FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A2120Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 390u, 0x08881CE4u>(ctx, &aot_mem) && ctx.pc == 0x08A2120Cu) goto L_08A2120C;
    return;
L_08A2120C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21214;
    }
L_08A21214:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2122Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2122Cu) goto L_08A2122C;
    return;
L_08A2122C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A212C0;
      }
      goto L_08A21240;
    }
L_08A21240:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4656));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A212B0;
      }
      goto L_08A21264;
    }
L_08A21264:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4656));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A21284u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A21284u) goto L_08A21284;
    return;
L_08A21284:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21294;
      }
      goto L_08A2128C;
    }
L_08A2128C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A212B0;
      }
      goto L_08A21294;
    }
L_08A21294:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4656));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A212B0;
L_08A212B0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21240;
      }
      goto L_08A212C0;
    }
L_08A212C0:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A212D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A212D8u) goto L_08A212D8;
    return;
L_08A212D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A212E0;
    }
L_08A212E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A212FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A212FCu) goto L_08A212FC;
    return;
L_08A212FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A2130Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A2130Cu) goto L_08A2130C;
    return;
L_08A2130C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21344;
      }
      goto L_08A2131C;
    }
L_08A2131C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21368;
      }
      goto L_08A21344;
    }
L_08A21344:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08A21368;
L_08A21368:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21370;
    }
L_08A21370:
    ctx.gpr[31] = (0x08A21378u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A21378u) goto L_08A21378;
    return;
L_08A21378:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21394u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A21394u) goto L_08A21394;
    return;
L_08A21394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A2139C;
    }
L_08A2139C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A213B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A213B8u) goto L_08A213B8;
    return;
L_08A213B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A213C8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A213C8u) goto L_08A213C8;
    return;
L_08A213C8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A213EC;
      }
      goto L_08A213D8;
    }
L_08A213D8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A213F8;
      }
      goto L_08A213EC;
    }
L_08A213EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A213F8;
L_08A213F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21400;
    }
L_08A21400:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21418u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21418u) goto L_08A21418;
    return;
L_08A21418:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A21428u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A21428u) goto L_08A21428;
    return;
L_08A21428:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 151u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A21470;
      }
      goto L_08A21440;
    }
L_08A21440:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 166u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A21470;
      }
      goto L_08A21450;
    }
L_08A21450:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 181u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A21470;
      }
      goto L_08A21460;
    }
L_08A21460:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-967));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A21474;
      }
      goto L_08A21470;
    }
L_08A21470:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A21474;
L_08A21474:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A214A0;
      }
      goto L_08A21498;
    }
L_08A21498:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A214F0;
      }
      goto L_08A214A0;
    }
L_08A214A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A214D0;
    }
    goto L_08A214BC;
L_08A214BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A214F0;
      }
      goto L_08A214D0;
    }
L_08A214D0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A214F0;
      }
      goto L_08A214EC;
    }
L_08A214EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A214F0;
L_08A214F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A214F8;
    }
L_08A214F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21510u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21510u) goto L_08A21510;
    return;
L_08A21510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2153C;
      }
      goto L_08A21528;
    }
L_08A21528:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08A21534u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 889u, 0x089C7A28u>(ctx, &aot_mem) && ctx.pc == 0x08A21534u) goto L_08A21534;
    return;
L_08A21534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21548;
      }
      goto L_08A2153C;
    }
L_08A2153C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08A21548u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 891u, 0x089C7A44u>(ctx, &aot_mem) && ctx.pc == 0x08A21548u) goto L_08A21548;
    return;
L_08A21548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21550;
    }
L_08A21550:
    ctx.gpr[31] = (0x08A21558u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 87u, 0x089185DCu>(ctx, &aot_mem) && ctx.pc == 0x08A21558u) goto L_08A21558;
    return;
L_08A21558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21560;
    }
L_08A21560:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2157Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2157Cu) goto L_08A2157C;
    return;
L_08A2157C:
    ctx.gpr[31] = (0x08A21584u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 90u, 0x08918614u>(ctx, &aot_mem) && ctx.pc == 0x08A21584u) goto L_08A21584;
    return;
L_08A21584:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A21598u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A21598u) goto L_08A21598;
    return;
L_08A21598:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A215A0;
    }
L_08A215A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A215B8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A215B8u) goto L_08A215B8;
    return;
L_08A215B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A215E4;
      }
      goto L_08A215C4;
    }
L_08A215C4:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A215E4;
L_08A215E4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A215F0u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A215F0u) goto L_08A215F0;
    return;
L_08A215F0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A2160C;
      }
      goto L_08A215FC;
    }
L_08A215FC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A21608u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08A21608u) goto L_08A21608;
    return;
L_08A21608:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A2160C;
L_08A2160C:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A21650;
      }
      goto L_08A21640;
    }
L_08A21640:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A2164Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A2164Cu) goto L_08A2164C;
    return;
L_08A2164C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A21650;
L_08A21650:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A21680u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 500u, 0x08A060E4u>(ctx, &aot_mem) && ctx.pc == 0x08A21680u) goto L_08A21680;
    return;
L_08A21680:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A21694u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 523u, 0x08A06750u>(ctx, &aot_mem) && ctx.pc == 0x08A21694u) goto L_08A21694;
    return;
L_08A21694:
    ctx.gpr[31] = (0x08A2169Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 513u, 0x08A065D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2169Cu) goto L_08A2169C;
    return;
L_08A2169C:
    ctx.gpr[31] = (0x08A216A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F898u>(ctx, &aot_mem) && ctx.pc == 0x08A216A4u) goto L_08A216A4;
    return;
L_08A216A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A216BCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 509u, 0x08882624u>(ctx, &aot_mem) && ctx.pc == 0x08A216BCu) goto L_08A216BC;
    return;
L_08A216BC:
    ctx.gpr[31] = (0x08A216C4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x08A216C4u) goto L_08A216C4;
    return;
L_08A216C4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x08A216D4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 804u, 0x08AFB74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A216D4u) goto L_08A216D4;
    return;
L_08A216D4:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A216ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A216ECu) goto L_08A216EC;
    return;
L_08A216EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21710;
      }
      goto L_08A216F8;
    }
L_08A216F8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[31] = (0x08A21710u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x08A21710u) goto L_08A21710;
    return;
L_08A21710:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21718;
    }
L_08A21718:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21730u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21730u) goto L_08A21730;
    return;
L_08A21730:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A21740u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A21740u) goto L_08A21740;
    return;
L_08A21740:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A2174Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08A2174Cu) goto L_08A2174C;
    return;
L_08A2174C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2175C;
      }
      goto L_08A21758;
    }
L_08A21758:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A2175C;
L_08A2175C:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A21788;
      }
      goto L_08A21780;
    }
L_08A21780:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A217D8;
      }
      goto L_08A21788;
    }
L_08A21788:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A217B8;
    }
    goto L_08A217A4;
L_08A217A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A217D8;
      }
      goto L_08A217B8;
    }
L_08A217B8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A217D8;
      }
      goto L_08A217D4;
    }
L_08A217D4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A217D8;
L_08A217D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A217E0;
    }
L_08A217E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A217F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A217F8u) goto L_08A217F8;
    return;
L_08A217F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A2182Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 104u, 0x0887C830u>(ctx, &aot_mem) && ctx.pc == 0x08A2182Cu) goto L_08A2182C;
    return;
L_08A2182C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A21838;
      }
      goto L_08A21834;
    }
L_08A21834:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A21838;
L_08A21838:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A21864;
      }
      goto L_08A2185C;
    }
L_08A2185C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A218B4;
      }
      goto L_08A21864;
    }
L_08A21864:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A21894;
    }
    goto L_08A21880;
L_08A21880:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A218B4;
      }
      goto L_08A21894;
    }
L_08A21894:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A218B4;
      }
      goto L_08A218B0;
    }
L_08A218B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A218B4;
L_08A218B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A218BC;
    }
L_08A218BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A218D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A218D4u) goto L_08A218D4;
    return;
L_08A218D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A218E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A218E4u) goto L_08A218E4;
    return;
L_08A218E4:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A218F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 90u, 0x0887C768u>(ctx, &aot_mem) && ctx.pc == 0x08A218F4u) goto L_08A218F4;
    return;
L_08A218F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A21900;
      }
      goto L_08A218FC;
    }
L_08A218FC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A21900;
L_08A21900:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2192C;
      }
      goto L_08A21924;
    }
L_08A21924:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2197C;
      }
      goto L_08A2192C;
    }
L_08A2192C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A2195C;
    }
    goto L_08A21948;
L_08A21948:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2197C;
      }
      goto L_08A2195C;
    }
L_08A2195C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2197C;
      }
      goto L_08A21978;
    }
L_08A21978:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A2197C;
L_08A2197C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21984;
    }
L_08A21984:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A219A0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A219A0u) goto L_08A219A0;
    return;
L_08A219A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A219C8;
      }
      goto L_08A219C0;
    }
L_08A219C0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(527), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A219C8;
L_08A219C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A219D0;
    }
L_08A219D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A219E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A219E8u) goto L_08A219E8;
    return;
L_08A219E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A08;
      }
      goto L_08A219F4;
    }
L_08A219F4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08A21A00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 281u, 0x088EDFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A21A00u) goto L_08A21A00;
    return;
L_08A21A00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21A20;
      }
      goto L_08A21A08;
    }
L_08A21A08:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6860), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A21A20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 282u, 0x088EDFE8u>(ctx, &aot_mem) && ctx.pc == 0x08A21A20u) goto L_08A21A20;
    return;
L_08A21A20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21A28;
    }
L_08A21A28:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A21A44u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21A44u) goto L_08A21A44;
    return;
L_08A21A44:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A21A7C;
    }
    goto L_08A21A68;
L_08A21A68:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A21A74u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A21A74u) goto L_08A21A74;
    return;
L_08A21A74:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A21A7C;
L_08A21A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A21A88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A21A88u) goto L_08A21A88;
    return;
L_08A21A88:
    ctx.gpr[31] = (0x08A21A90u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08A21A90u) goto L_08A21A90;
    return;
L_08A21A90:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08A21A9C;
      }
      goto L_08A21A9C;
    }
L_08A21A9C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A21ABCu);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x08A21ABCu) goto L_08A21ABC;
    return;
L_08A21ABC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A21AD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 81u, 0x089685DCu>(ctx, &aot_mem) && ctx.pc == 0x08A21AD4u) goto L_08A21AD4;
    return;
L_08A21AD4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21AE8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A21AE8u) goto L_08A21AE8;
    return;
L_08A21AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21AF0;
    }
L_08A21AF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A21B0Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21B0Cu) goto L_08A21B0C;
    return;
L_08A21B0C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A21B44;
    }
    goto L_08A21B30;
L_08A21B30:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A21B3Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A21B3Cu) goto L_08A21B3C;
    return;
L_08A21B3C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A21B44;
L_08A21B44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A21B50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A21B50u) goto L_08A21B50;
    return;
L_08A21B50:
    ctx.gpr[31] = (0x08A21B58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08A21B58u) goto L_08A21B58;
    return;
L_08A21B58:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08A21B64;
      }
      goto L_08A21B64;
    }
L_08A21B64:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A21B84u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 828u, 0x08967ED0u>(ctx, &aot_mem) && ctx.pc == 0x08A21B84u) goto L_08A21B84;
    return;
L_08A21B84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A21B9Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 81u, 0x089685DCu>(ctx, &aot_mem) && ctx.pc == 0x08A21B9Cu) goto L_08A21B9C;
    return;
L_08A21B9C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21BB0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A21BB0u) goto L_08A21BB0;
    return;
L_08A21BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21BB8;
    }
L_08A21BB8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A21BD4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21BD4u) goto L_08A21BD4;
    return;
L_08A21BD4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A21BE4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A21BE4u) goto L_08A21BE4;
    return;
L_08A21BE4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21C08;
      }
      goto L_08A21BF4;
    }
L_08A21BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21C1C;
      }
      goto L_08A21C08;
    }
L_08A21C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21C1C;
L_08A21C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21C24;
    }
L_08A21C24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A21C40u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21C40u) goto L_08A21C40;
    return;
L_08A21C40:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A21C50u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A21C50u) goto L_08A21C50;
    return;
L_08A21C50:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21C74;
      }
      goto L_08A21C60;
    }
L_08A21C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21C88;
      }
      goto L_08A21C74;
    }
L_08A21C74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21C88;
L_08A21C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21C90;
    }
L_08A21C90:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A21CACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21CACu) goto L_08A21CAC;
    return;
L_08A21CAC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A21CBCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A21CBCu) goto L_08A21CBC;
    return;
L_08A21CBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21CE0;
      }
      goto L_08A21CCC;
    }
L_08A21CCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21CF4;
      }
      goto L_08A21CE0;
    }
L_08A21CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21CF4;
L_08A21CF4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D1C;
      }
      goto L_08A21D08;
    }
L_08A21D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21D30;
      }
      goto L_08A21D1C;
    }
L_08A21D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21D30;
L_08A21D30:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D58;
      }
      goto L_08A21D44;
    }
L_08A21D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21D6C;
      }
      goto L_08A21D58;
    }
L_08A21D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21D6C;
L_08A21D6C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D94;
      }
      goto L_08A21D80;
    }
L_08A21D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21DA8;
      }
      goto L_08A21D94;
    }
L_08A21D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21DA8;
L_08A21DA8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21DD0;
      }
      goto L_08A21DBC;
    }
L_08A21DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21DE4;
      }
      goto L_08A21DD0;
    }
L_08A21DD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21DE4;
L_08A21DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21DEC;
    }
L_08A21DEC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A21E08u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21E08u) goto L_08A21E08;
    return;
L_08A21E08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A21E18u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A21E18u) goto L_08A21E18;
    return;
L_08A21E18:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21E3C;
      }
      goto L_08A21E28;
    }
L_08A21E28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21E50;
      }
      goto L_08A21E3C;
    }
L_08A21E3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21E50;
L_08A21E50:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21E78;
      }
      goto L_08A21E64;
    }
L_08A21E64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21E8C;
      }
      goto L_08A21E78;
    }
L_08A21E78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21E8C;
L_08A21E8C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21EB4;
      }
      goto L_08A21EA0;
    }
L_08A21EA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21EC8;
      }
      goto L_08A21EB4;
    }
L_08A21EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21EC8;
L_08A21EC8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21EF0;
      }
      goto L_08A21EDC;
    }
L_08A21EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21F04;
      }
      goto L_08A21EF0;
    }
L_08A21EF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21F04;
L_08A21F04:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21F2C;
      }
      goto L_08A21F18;
    }
L_08A21F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21F40;
      }
      goto L_08A21F2C;
    }
L_08A21F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21F40;
L_08A21F40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21F48;
    }
L_08A21F48:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A21F58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 48u, 0x08880388u>(ctx, &aot_mem) && ctx.pc == 0x08A21F58u) goto L_08A21F58;
    return;
L_08A21F58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21F64;
      }
      goto L_08A21F60;
    }
L_08A21F60:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A21F64;
L_08A21F64:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21F90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-708));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(97) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 178u, 0x08A24CD8u>(ctx, &aot_mem); return;
      }
      goto L_08A21FD0;
    }
L_08A21FD0:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-708));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(3176)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21FEC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22004u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22004u) goto L_08A22004;
    return;
L_08A22004:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A22014u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A22014u) goto L_08A22014;
    return;
L_08A22014:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22038;
      }
      goto L_08A22024;
    }
L_08A22024:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22038;
      }
      goto L_08A22034;
    }
L_08A22034:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A22038;
L_08A22038:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22064;
      }
      goto L_08A2205C;
    }
L_08A2205C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A220B4;
      }
      goto L_08A22064;
    }
L_08A22064:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A22094;
    }
    goto L_08A22080;
L_08A22080:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A220B4;
      }
      goto L_08A22094;
    }
L_08A22094:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A220B4;
      }
      goto L_08A220B0;
    }
L_08A220B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A220B4;
L_08A220B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A220BC;
    }
L_08A220BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A220D8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A220D8u) goto L_08A220D8;
    return;
L_08A220D8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2210C;
      }
      goto L_08A220FC;
    }
L_08A220FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A22108u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A22108u) goto L_08A22108;
    return;
L_08A22108:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2210C;
L_08A2210C:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (17480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A22144u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 376u, 0x089757BCu>(ctx, &aot_mem) && ctx.pc == 0x08A22144u) goto L_08A22144;
    return;
L_08A22144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[6] = (ctx.gpr[2] << 2u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A221A4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A221A4u) goto L_08A221A4;
    return;
L_08A221A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A221AC;
    }
L_08A221AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A221C8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A221C8u) goto L_08A221C8;
    return;
L_08A221C8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A221FC;
      }
      goto L_08A221EC;
    }
L_08A221EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A221F8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A221F8u) goto L_08A221F8;
    return;
L_08A221F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A221FC;
L_08A221FC:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[6] = (17480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A22234u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 376u, 0x089757BCu>(ctx, &aot_mem) && ctx.pc == 0x08A22234u) goto L_08A22234;
    return;
L_08A22234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26868)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[31] = (0x08A22244u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 711u, 0x08977838u>(ctx, &aot_mem) && ctx.pc == 0x08A22244u) goto L_08A22244;
    return;
L_08A22244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22274u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A22274u) goto L_08A22274;
    return;
L_08A22274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A2227C;
    }
L_08A2227C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A22298u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22298u) goto L_08A22298;
    return;
L_08A22298:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A222A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A222A8u) goto L_08A222A8;
    return;
L_08A222A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A222E0;
      }
      goto L_08A222D0;
    }
L_08A222D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A222DCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A222DCu) goto L_08A222DC;
    return;
L_08A222DC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A222E0;
L_08A222E0:
    ctx.gpr[31] = (0x08A222E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FD14u>(ctx, &aot_mem) && ctx.pc == 0x08A222E8u) goto L_08A222E8;
    return;
L_08A222E8:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2230Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 235u, 0x089ED82Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2230Cu) goto L_08A2230C;
    return;
L_08A2230C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22320;
      }
      goto L_08A22314;
    }
L_08A22314:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22328;
      }
      goto L_08A22320;
    }
L_08A22320:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A22328;
L_08A22328:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_08A2235C;
    }
    goto L_08A2235C;
L_08A2235C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A22378;
      }
      goto L_08A2236C;
    }
L_08A2236C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_08A22378;
L_08A22378:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22380;
    }
L_08A22380:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22398u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22398u) goto L_08A22398;
    return;
L_08A22398:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A223A8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A223A8u) goto L_08A223A8;
    return;
L_08A223A8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A22468;
      }
      goto L_08A22460;
    }
L_08A22460:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A22468;
L_08A22468:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22474;
      }
      goto L_08A22470;
    }
L_08A22470:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A22474;
L_08A22474:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A224A0;
      }
      goto L_08A22498;
    }
L_08A22498:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A224F0;
      }
      goto L_08A224A0;
    }
L_08A224A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A224D0;
    }
    goto L_08A224BC;
L_08A224BC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A224F0;
      }
      goto L_08A224D0;
    }
L_08A224D0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A224F0;
      }
      goto L_08A224EC;
    }
L_08A224EC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A224F0;
L_08A224F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A224F8;
    }
L_08A224F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22510u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22510u) goto L_08A22510;
    return;
L_08A22510:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A22520u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A22520u) goto L_08A22520;
    return;
L_08A22520:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A225E0;
      }
      goto L_08A225D8;
    }
L_08A225D8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A225E0;
L_08A225E0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A225EC;
      }
      goto L_08A225E8;
    }
L_08A225E8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A225EC;
L_08A225EC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22618;
      }
      goto L_08A22610;
    }
L_08A22610:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22668;
      }
      goto L_08A22618;
    }
L_08A22618:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A22648;
    }
    goto L_08A22634;
L_08A22634:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22668;
      }
      goto L_08A22648;
    }
L_08A22648:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22668;
      }
      goto L_08A22664;
    }
L_08A22664:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A22668;
L_08A22668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22670;
    }
L_08A22670:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22688u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22688u) goto L_08A22688;
    return;
L_08A22688:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x08A22698u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08A22698u) goto L_08A22698;
    return;
L_08A22698:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-720));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A22758;
      }
      goto L_08A22750;
    }
L_08A22750:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A22758;
L_08A22758:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22764;
      }
      goto L_08A22760;
    }
L_08A22760:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A22764;
L_08A22764:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22790;
      }
      goto L_08A22788;
    }
L_08A22788:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A227E0;
      }
      goto L_08A22790;
    }
L_08A22790:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A227C0;
    }
    goto L_08A227AC;
L_08A227AC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A227E0;
      }
      goto L_08A227C0;
    }
L_08A227C0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A227E0;
      }
      goto L_08A227DC;
    }
L_08A227DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A227E0;
L_08A227E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A227E8;
    }
L_08A227E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22800u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22800u) goto L_08A22800;
    return;
L_08A22800:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22830;
    }
L_08A22830:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A22850u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22850u) goto L_08A22850;
    return;
L_08A22850:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A22864u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2F78u>(ctx, &aot_mem) && ctx.pc == 0x08A22864u) goto L_08A22864;
    return;
L_08A22864:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2287Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A2287Cu) goto L_08A2287C;
    return;
L_08A2287C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22884;
    }
L_08A22884:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A228A0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A228A0u) goto L_08A228A0;
    return;
L_08A228A0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A228D4;
      }
      goto L_08A228C4;
    }
L_08A228C4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A228D0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A228D0u) goto L_08A228D0;
    return;
L_08A228D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A228D4;
L_08A228D4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (16204u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A22904u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 610u, 0x0884E768u>(ctx, &aot_mem) && ctx.pc == 0x08A22904u) goto L_08A22904;
    return;
L_08A22904:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2291Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A2291Cu) goto L_08A2291C;
    return;
L_08A2291C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22924;
    }
L_08A22924:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2293Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2293Cu) goto L_08A2293C;
    return;
L_08A2293C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25056));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08A22958u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 668u, 0x0884ED5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22958u) goto L_08A22958;
    return;
L_08A22958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22964;
      }
      goto L_08A22960;
    }
L_08A22960:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A22964;
L_08A22964:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22990;
      }
      goto L_08A22988;
    }
L_08A22988:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A229E0;
      }
      goto L_08A22990;
    }
L_08A22990:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A229C0;
    }
    goto L_08A229AC;
L_08A229AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A229E0;
      }
      goto L_08A229C0;
    }
L_08A229C0:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A229E0;
      }
      goto L_08A229DC;
    }
L_08A229DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A229E0;
L_08A229E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A229E8;
    }
L_08A229E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22A00u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22A00u) goto L_08A22A00;
    return;
L_08A22A00:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25056));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08A22A18u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 669u, 0x0884ED78u>(ctx, &aot_mem) && ctx.pc == 0x08A22A18u) goto L_08A22A18;
    return;
L_08A22A18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22A20;
    }
L_08A22A20:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A22A3Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22A3Cu) goto L_08A22A3C;
    return;
L_08A22A3C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A22A4Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A22A4Cu) goto L_08A22A4C;
    return;
L_08A22A4C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A22A8C;
      }
      goto L_08A22A74;
    }
L_08A22A74:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A22A8Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 292u, 0x0890DE48u>(ctx, &aot_mem) && ctx.pc == 0x08A22A8Cu) goto L_08A22A8C;
    return;
L_08A22A8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_08A22AD8;
    }
    goto L_08A22AD8;
L_08A22AD8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22AF0;
    }
L_08A22AF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22B08u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22B08u) goto L_08A22B08;
    return;
L_08A22B08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A22B18u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A22B18u) goto L_08A22B18;
    return;
L_08A22B18:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22B4C;
    }
L_08A22B4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22B64u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22B64u) goto L_08A22B64;
    return;
L_08A22B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22BD0;
      }
      goto L_08A22BA4;
    }
L_08A22BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A22BC4u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x08A22BC4u) goto L_08A22BC4;
    return;
L_08A22BC4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22BD0;
      }
      goto L_08A22BCC;
    }
L_08A22BCC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A22BD0;
L_08A22BD0:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22BFC;
      }
      goto L_08A22BF4;
    }
L_08A22BF4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A22C4C;
      }
      goto L_08A22BFC;
    }
L_08A22BFC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A22C2C;
    }
    goto L_08A22C18;
L_08A22C18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22C4C;
      }
      goto L_08A22C2C;
    }
L_08A22C2C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22C4C;
      }
      goto L_08A22C48;
    }
L_08A22C48:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A22C4C;
L_08A22C4C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22C8C;
      }
      goto L_08A22C60;
    }
L_08A22C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x08A22C8Cu);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x08A22C8Cu) goto L_08A22C8C;
    return;
L_08A22C8C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22C9C;
      }
      goto L_08A22C9C;
    }
L_08A22C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22CA4;
    }
L_08A22CA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A22CC0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22CC0u) goto L_08A22CC0;
    return;
L_08A22CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A22D18;
      }
      goto L_08A22D14;
    }
L_08A22D14:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A22D18;
L_08A22D18:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22D44;
      }
      goto L_08A22D3C;
    }
L_08A22D3C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22D94;
      }
      goto L_08A22D44;
    }
L_08A22D44:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A22D74;
    }
    goto L_08A22D60;
L_08A22D60:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22D94;
      }
      goto L_08A22D74;
    }
L_08A22D74:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22D94;
      }
      goto L_08A22D90;
    }
L_08A22D90:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A22D94;
L_08A22D94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22D9C;
    }
L_08A22D9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A22DB8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22DB8u) goto L_08A22DB8;
    return;
L_08A22DB8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A22DC8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A22DC8u) goto L_08A22DC8;
    return;
L_08A22DC8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A22DF4;
      }
      goto L_08A22DF0;
    }
L_08A22DF0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A22DF4;
L_08A22DF4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22E20;
      }
      goto L_08A22E18;
    }
L_08A22E18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22E70;
      }
      goto L_08A22E20;
    }
L_08A22E20:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A22E50;
    }
    goto L_08A22E3C;
L_08A22E3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22E70;
      }
      goto L_08A22E50;
    }
L_08A22E50:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22E70;
      }
      goto L_08A22E6C;
    }
L_08A22E6C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A22E70;
L_08A22E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22E78;
    }
L_08A22E78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A22E94u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22E94u) goto L_08A22E94;
    return;
L_08A22E94:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A22EA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A22EA4u) goto L_08A22EA4;
    return;
L_08A22EA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A22EBC;
    }
L_08A22EBC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08A22ED8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22ED8u) goto L_08A22ED8;
    return;
L_08A22ED8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A22F00u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A22F00u) goto L_08A22F00;
    return;
L_08A22F00:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A22F08;
L_08A22F08:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A230F4;
      }
      goto L_08A22F10;
    }
L_08A22F10:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A230F4;
      }
      goto L_08A22F1C;
    }
L_08A22F1C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A22F44;
      }
      goto L_08A22F3C;
    }
L_08A22F3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A22F5C;
      }
      goto L_08A22F44;
    }
L_08A22F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A22F5C;
L_08A22F5C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A22F64;
    }
L_08A22F64:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A22F74u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08A22F74u) goto L_08A22F74;
    return;
L_08A22F74:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A22F84;
    }
L_08A22F84:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A22F94;
    }
L_08A22F94:
    ctx.gpr[31] = (0x08A22F9Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A22F9Cu) goto L_08A22F9C;
    return;
L_08A22F9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A22FA4;
    }
L_08A22FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A22FB4;
    }
L_08A22FB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A22FC8;
    }
L_08A22FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A22FD4;
    }
L_08A22FD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A22FF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 34u, 0x088E4250u>(ctx, &aot_mem) && ctx.pc == 0x08A22FF4u) goto L_08A22FF4;
    return;
L_08A22FF4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A22FFC;
    }
L_08A22FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A2300C;
    }
L_08A2300C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A23018;
    }
L_08A23018:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A23030u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x08A23030u) goto L_08A23030;
    return;
L_08A23030:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A23038;
    }
L_08A23038:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A2305C;
    }
L_08A2305C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A23074;
    }
L_08A23074:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A23084u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08A23084u) goto L_08A23084;
    return;
L_08A23084:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A230EC;
      }
      goto L_08A230D8;
    }
L_08A230D8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A230ECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x08A230ECu) goto L_08A230EC;
    return;
L_08A230EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A22F08;
      }
      goto L_08A230F4;
    }
L_08A230F4:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2310Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A2310Cu) goto L_08A2310C;
    return;
L_08A2310C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23114;
    }
L_08A23114:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23134u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08A23134u) goto L_08A23134;
    return;
L_08A23134:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23148u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 222u, 0x08871740u>(ctx, &aot_mem) && ctx.pc == 0x08A23148u) goto L_08A23148;
    return;
L_08A23148:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A23164;
      }
      goto L_08A23158;
    }
L_08A23158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A23164;
L_08A23164:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x08A23174u);
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 381u, 0x0887240Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23174u) goto L_08A23174;
    return;
L_08A23174:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23190u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23190u) goto L_08A23190;
    return;
L_08A23190:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A231A8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 170u, 0x089D5748u>(ctx, &aot_mem) && ctx.pc == 0x08A231A8u) goto L_08A231A8;
    return;
L_08A231A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A231B0;
L_08A231B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A233A0;
      }
      goto L_08A231B8;
    }
L_08A231B8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A233A0;
      }
      goto L_08A231C4;
    }
L_08A231C4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A231EC;
      }
      goto L_08A231E4;
    }
L_08A231E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A23204;
      }
      goto L_08A231EC;
    }
L_08A231EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08A23204;
L_08A23204:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A2320C;
    }
L_08A2320C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A2321Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08A2321Cu) goto L_08A2321C;
    return;
L_08A2321C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A2322C;
    }
L_08A2322C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A2323C;
    }
L_08A2323C:
    ctx.gpr[31] = (0x08A23244u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x08A23244u) goto L_08A23244;
    return;
L_08A23244:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A2324C;
    }
L_08A2324C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A2325C;
    }
L_08A2325C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A23270;
    }
L_08A23270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A2327C;
    }
L_08A2327C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A2329Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 34u, 0x088E4250u>(ctx, &aot_mem) && ctx.pc == 0x08A2329Cu) goto L_08A2329C;
    return;
L_08A2329C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A232A4;
    }
L_08A232A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A232B4;
    }
L_08A232B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A232C0;
    }
L_08A232C0:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x08A232E4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 213u, 0x088716A8u>(ctx, &aot_mem) && ctx.pc == 0x08A232E4u) goto L_08A232E4;
    return;
L_08A232E4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A232EC;
    }
L_08A232EC:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A23308;
    }
L_08A23308:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A23320;
    }
L_08A23320:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A23330u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08A23330u) goto L_08A23330;
    return;
L_08A23330:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7124), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23398;
      }
      goto L_08A23384;
    }
L_08A23384:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A23398u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x08A23398u) goto L_08A23398;
    return;
L_08A23398:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A231B0;
      }
      goto L_08A233A0;
    }
L_08A233A0:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A233B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A233B8u) goto L_08A233B8;
    return;
L_08A233B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A233C0;
    }
L_08A233C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A233D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A233D8u) goto L_08A233D8;
    return;
L_08A233D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2346C;
      }
      goto L_08A23410;
    }
L_08A23410:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2346C;
      }
      goto L_08A23420;
    }
L_08A23420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 151u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A23468;
      }
      goto L_08A23438;
    }
L_08A23438:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 166u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A23468;
      }
      goto L_08A23448;
    }
L_08A23448:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 181u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A23468;
      }
      goto L_08A23458;
    }
L_08A23458:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-967));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A2346C;
      }
      goto L_08A23468;
    }
L_08A23468:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A2346C;
L_08A2346C:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A23498;
      }
      goto L_08A23490;
    }
L_08A23490:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A234E8;
      }
      goto L_08A23498;
    }
L_08A23498:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A234C8;
    }
    goto L_08A234B4;
L_08A234B4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A234E8;
      }
      goto L_08A234C8;
    }
L_08A234C8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A234E8;
      }
      goto L_08A234E4;
    }
L_08A234E4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A234E8;
L_08A234E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A234F0;
    }
L_08A234F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23508u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23508u) goto L_08A23508;
    return;
L_08A23508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2354C;
      }
      goto L_08A23548;
    }
L_08A23548:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2354C;
L_08A2354C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A23578;
      }
      goto L_08A23570;
    }
L_08A23570:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A235C8;
      }
      goto L_08A23578;
    }
L_08A23578:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A235A8;
    }
    goto L_08A23594;
L_08A23594:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A235C8;
      }
      goto L_08A235A8;
    }
L_08A235A8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A235C8;
      }
      goto L_08A235C4;
    }
L_08A235C4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A235C8;
L_08A235C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A235D0;
    }
L_08A235D0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A235E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A235E8u) goto L_08A235E8;
    return;
L_08A235E8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A235F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A235F8u) goto L_08A235F8;
    return;
L_08A235F8:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23614;
      }
      goto L_08A23610;
    }
L_08A23610:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A23614;
L_08A23614:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A23640;
      }
      goto L_08A23638;
    }
L_08A23638:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A23690;
      }
      goto L_08A23640;
    }
L_08A23640:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A23670;
    }
    goto L_08A2365C;
L_08A2365C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A23690;
      }
      goto L_08A23670;
    }
L_08A23670:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23690;
      }
      goto L_08A2368C;
    }
L_08A2368C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A23690;
L_08A23690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23698;
    }
L_08A23698:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A236B4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A236B4u) goto L_08A236B4;
    return;
L_08A236B4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A236F4;
    }
    goto L_08A236D8;
L_08A236D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A236E4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A236E4u) goto L_08A236E4;
    return;
L_08A236E4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A236F4;
L_08A236F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A23700u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x08A23700u) goto L_08A23700;
    return;
L_08A23700:
    ctx.gpr[31] = (0x08A23708u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A823DCu>(ctx, &aot_mem) && ctx.pc == 0x08A23708u) goto L_08A23708;
    return;
L_08A23708:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
      if (branch_taken) {
          goto L_08A23714;
      }
      goto L_08A23714;
    }
L_08A23714:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A23750u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 210u, 0x08A84FC8u>(ctx, &aot_mem) && ctx.pc == 0x08A23750u) goto L_08A23750;
    return;
L_08A23750:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23764u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A23764u) goto L_08A23764;
    return;
L_08A23764:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A2376C;
    }
L_08A2376C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A23788u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23788u) goto L_08A23788;
    return;
L_08A23788:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A23798u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A23798u) goto L_08A23798;
    return;
L_08A23798:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A237D4;
    }
    goto L_08A237D4;
L_08A237D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A237E8;
    }
L_08A237E8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23804u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23804u) goto L_08A23804;
    return;
L_08A23804:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A23814u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A23814u) goto L_08A23814;
    return;
L_08A23814:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23850u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A23850u) goto L_08A23850;
    return;
L_08A23850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23858;
    }
L_08A23858:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23878u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08A23878u) goto L_08A23878;
    return;
L_08A23878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A2388Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 397u, 0x089864D0u>(ctx, &aot_mem) && ctx.pc == 0x08A2388Cu) goto L_08A2388C;
    return;
L_08A2388C:
    ctx.gpr[31] = (0x08A23894u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 39u, 0x088245A4u>(ctx, &aot_mem) && ctx.pc == 0x08A23894u) goto L_08A23894;
    return;
L_08A23894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A2389C;
    }
L_08A2389C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A238B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A238B8u) goto L_08A238B8;
    return;
L_08A238B8:
    ctx.gpr[31] = (0x08A238C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 526u, 0x08AE72ECu>(ctx, &aot_mem) && ctx.pc == 0x08A238C0u) goto L_08A238C0;
    return;
L_08A238C0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x08A238D0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 804u, 0x08AFB74Cu>(ctx, &aot_mem) && ctx.pc == 0x08A238D0u) goto L_08A238D0;
    return;
L_08A238D0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A238E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A238E4u) goto L_08A238E4;
    return;
L_08A238E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A238EC;
    }
L_08A238EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23904u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23904u) goto L_08A23904;
    return;
L_08A23904:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[31] = (0x08A23914u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08A23914u) goto L_08A23914;
    return;
L_08A23914:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A23938u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08A23938u) goto L_08A23938;
    return;
L_08A23938:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A23950u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 544u, 0x08AE745Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23950u) goto L_08A23950;
    return;
L_08A23950:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23958;
    }
L_08A23958:
    ctx.gpr[31] = (0x08A23960u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 554u, 0x08AE7540u>(ctx, &aot_mem) && ctx.pc == 0x08A23960u) goto L_08A23960;
    return;
L_08A23960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23968;
    }
L_08A23968:
    ctx.gpr[31] = (0x08A23970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 587u, 0x08AE78A0u>(ctx, &aot_mem) && ctx.pc == 0x08A23970u) goto L_08A23970;
    return;
L_08A23970:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23988u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A23988u) goto L_08A23988;
    return;
L_08A23988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23990;
    }
L_08A23990:
    ctx.gpr[31] = (0x08A23998u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 591u, 0x08AE78F0u>(ctx, &aot_mem) && ctx.pc == 0x08A23998u) goto L_08A23998;
    return;
L_08A23998:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A239B8;
      }
      goto L_08A239A0;
    }
L_08A239A0:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A239B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2220));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 313u, 0x08A1E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A239B0u) goto L_08A239B0;
    return;
L_08A239B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A239BC;
      }
      goto L_08A239B8;
    }
L_08A239B8:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A239BC;
L_08A239BC:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A239E8;
      }
      goto L_08A239E0;
    }
L_08A239E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A23A38;
      }
      goto L_08A239E8;
    }
L_08A239E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A23A18;
    }
    goto L_08A23A04;
L_08A23A04:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A23A38;
      }
      goto L_08A23A18;
    }
L_08A23A18:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23A38;
      }
      goto L_08A23A34;
    }
L_08A23A34:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A23A38;
L_08A23A38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23A40;
    }
L_08A23A40:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A23A4Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2248));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 313u, 0x08A1E0C0u>(ctx, &aot_mem) && ctx.pc == 0x08A23A4Cu) goto L_08A23A4C;
    return;
L_08A23A4C:
    ctx.gpr[31] = (0x08A23A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 41u, 0x088245C0u>(ctx, &aot_mem) && ctx.pc == 0x08A23A54u) goto L_08A23A54;
    return;
L_08A23A54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23A5C;
    }
L_08A23A5C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08A23A6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 252u, 0x088EDCCCu>(ctx, &aot_mem) && ctx.pc == 0x08A23A6Cu) goto L_08A23A6C;
    return;
L_08A23A6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23A74;
    }
L_08A23A74:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A23A90u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23A90u) goto L_08A23A90;
    return;
L_08A23A90:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A23ACC;
      }
      goto L_08A23AB4;
    }
L_08A23AB4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A23AC0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08A23AC0u) goto L_08A23AC0;
    return;
L_08A23AC0:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_08A23ACC;
L_08A23ACC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A23B00u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 210u, 0x08A84FC8u>(ctx, &aot_mem) && ctx.pc == 0x08A23B00u) goto L_08A23B00;
    return;
L_08A23B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23B08;
    }
L_08A23B08:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23B20u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23B20u) goto L_08A23B20;
    return;
L_08A23B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-8108)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23B58;
    }
L_08A23B58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A23B74u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23B74u) goto L_08A23B74;
    return;
L_08A23B74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08A23B84u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08A23B84u) goto L_08A23B84;
    return;
L_08A23B84:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A23B9C;
      }
      goto L_08A23B98;
    }
L_08A23B98:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A23B9C;
L_08A23B9C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A23BC8;
      }
      goto L_08A23BC0;
    }
L_08A23BC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A23C18;
      }
      goto L_08A23BC8;
    }
L_08A23BC8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A23BF8;
    }
    goto L_08A23BE4;
L_08A23BE4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A23C18;
      }
      goto L_08A23BF8;
    }
L_08A23BF8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23C18;
      }
      goto L_08A23C14;
    }
L_08A23C14:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A23C18;
L_08A23C18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23C20;
    }
L_08A23C20:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23C38u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23C38u) goto L_08A23C38;
    return;
L_08A23C38:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A23C54u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08A23C54u) goto L_08A23C54;
    return;
L_08A23C54:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23CAC;
      }
      goto L_08A23C64;
    }
L_08A23C64:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A23C98;
      }
      goto L_08A23C78;
    }
L_08A23C78:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23C98;
      }
      goto L_08A23C88;
    }
L_08A23C88:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A23C98;
L_08A23C98:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23C64;
      }
      goto L_08A23CAC;
    }
L_08A23CAC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23CD4;
      }
      goto L_08A23CB8;
    }
L_08A23CB8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A23CCCu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 667u, 0x089C6D48u>(ctx, &aot_mem) && ctx.pc == 0x08A23CCCu) goto L_08A23CCC;
    return;
L_08A23CCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23CE8;
      }
      goto L_08A23CD4;
    }
L_08A23CD4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A23CE8u);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 667u, 0x089C6D48u>(ctx, &aot_mem) && ctx.pc == 0x08A23CE8u) goto L_08A23CE8;
    return;
L_08A23CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23CFC;
    }
L_08A23CFC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23D18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23D18u) goto L_08A23D18;
    return;
L_08A23D18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23D6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A23D6Cu) goto L_08A23D6C;
    return;
L_08A23D6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23D74;
    }
L_08A23D74:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23D90u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23D90u) goto L_08A23D90;
    return;
L_08A23D90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23DE4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A23DE4u) goto L_08A23DE4;
    return;
L_08A23DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23DEC;
    }
L_08A23DEC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23E08u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23E08u) goto L_08A23E08;
    return;
L_08A23E08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A23E18u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A23E18u) goto L_08A23E18;
    return;
L_08A23E18:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23E50u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A23E50u) goto L_08A23E50;
    return;
L_08A23E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23E58;
    }
L_08A23E58:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23E74u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23E74u) goto L_08A23E74;
    return;
L_08A23E74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x08A23E84u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08A23E84u) goto L_08A23E84;
    return;
L_08A23E84:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23EBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08A23EBCu) goto L_08A23EBC;
    return;
L_08A23EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23EC4;
    }
L_08A23EC4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A23EE0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23EE0u) goto L_08A23EE0;
    return;
L_08A23EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08A23EFCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 710u, 0x0893B9DCu>(ctx, &aot_mem) && ctx.pc == 0x08A23EFCu) goto L_08A23EFC;
    return;
L_08A23EFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23F04;
    }
L_08A23F04:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08A23F20u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23F20u) goto L_08A23F20;
    return;
L_08A23F20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A23F54;
      }
      goto L_08A23F48;
    }
L_08A23F48:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08A23F54;
L_08A23F54:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A23F74;
    }
    goto L_08A23F64;
L_08A23F64:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A23F74;
L_08A23F74:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[4];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[31] = (0x08A23FDCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 19u, 0x0897C26Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23FDCu) goto L_08A23FDC;
    return;
L_08A23FDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 179u, 0x08A24CDCu>(ctx, &aot_mem); return;
      }
      goto L_08A23FE4;
    }
L_08A23FE4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 5u, 0x08A24024u>(ctx, &aot_mem); return;
      }
      goto L_08A23FF4;
    }
L_08A23FF4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A24000u);
    ctx.gpr[4] = (0u | 2452u);
    (void)rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0135(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0135_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_135(Runtime &runtime) {
    runtime.register_generated_unit(135u, 0x08A20000u, 16384u, &recomp_unit_0135, &recomp_unit_0135_entry);
    runtime.register_function(0x08A20000u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20004u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20024u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20030u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2003Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20044u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20050u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2005Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20068u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20070u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20088u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20094u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20100u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20108u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2010Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20124u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20130u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20138u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2013Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2014Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20154u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20158u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2017Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20184u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20200u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20220u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2022Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20234u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2023Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20244u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2024Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2026Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20280u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20294u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2029Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20300u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20320u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20344u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20350u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20360u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20404u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2040Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20414u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2041Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20424u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20440u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20468u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20474u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20478u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20490u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2052Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20530u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20554u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2055Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20578u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2058Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20614u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20650u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2066Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20684u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20690u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20698u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20704u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20710u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20714u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20734u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2073Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20758u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20778u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20784u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20794u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20810u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20818u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20830u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2083Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20844u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20860u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20870u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20880u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20888u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2090Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2091Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20924u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20940u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20974u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2097Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20998u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20ED4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21020u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2103Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2104Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21054u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2106Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21078u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21080u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21088u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2110Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21118u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2113Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21144u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21160u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21174u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21190u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21194u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2119Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2120Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21214u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2122Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21240u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21264u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21284u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2128Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21294u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2130Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2131Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21344u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21368u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21370u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21378u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21394u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2139Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21400u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21418u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21428u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21440u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21450u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21460u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21470u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21474u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21498u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21510u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21528u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21534u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2153Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21548u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21550u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21558u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21560u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2157Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21584u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21598u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21608u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2160Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21640u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2164Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21650u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21680u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21694u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2169Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21710u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21718u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21730u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21740u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2174Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21758u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2175Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21780u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21788u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2182Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21834u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21838u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2185Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21864u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21880u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21894u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21900u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21924u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2192Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21948u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2195Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21978u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2197Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21984u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21ABCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22004u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22014u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22024u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22034u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22038u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2205Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22064u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22080u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22094u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22108u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2210Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22144u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22234u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22244u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22274u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2227Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22298u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2230Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22314u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22320u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22328u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2235Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2236Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22378u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22380u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22398u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22460u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22468u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22470u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22474u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22498u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22510u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22520u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A225D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A225E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A225E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A225ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22610u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22618u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22634u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22648u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22664u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22668u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22670u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22688u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22698u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22750u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22758u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22760u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22764u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22788u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22790u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22800u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22830u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22850u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22864u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2287Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22884u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22904u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2291Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22924u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2293Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22958u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22960u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22964u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22988u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22990u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22ED8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2300Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23018u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23030u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23038u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2305Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23074u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23084u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2310Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23114u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23134u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23148u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23158u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23164u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23174u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23190u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23204u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2320Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2321Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2322Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2323Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23244u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2324Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2325Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23270u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2327Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2329Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23308u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23320u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23330u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23384u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23398u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23410u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23420u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23438u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23448u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23458u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23468u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2346Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23490u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23498u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23508u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23548u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2354Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23570u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23578u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23594u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23610u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23614u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23638u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23640u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2365Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23670u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2368Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23690u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23698u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23700u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23708u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23714u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23750u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23764u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2376Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23788u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23798u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23804u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23814u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23850u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23858u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23878u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2388Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23894u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2389Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23904u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23914u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23938u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23950u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23958u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23960u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23968u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23970u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23988u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23990u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23998u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23ACCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FF4u, &recomp_unit_0135, "recomp_unit_0135");
}
} // namespace psprecomp
