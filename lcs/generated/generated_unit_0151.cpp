#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0151[4094] = {
    1, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 9, 10, 0,
    0, 0, 0, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 17, 0, 18,
    0, 0, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0,
    0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 29, 0,
    30, 0, 31, 0, 0, 32, 0, 33, 0, 34, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 41,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 0, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 49, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 53,
    0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 0, 60, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0,
    0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 70, 0, 0, 0, 71, 0, 72, 0, 0, 0, 0, 0, 0, 0,
    73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0,
    0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 86, 0, 0, 0, 0, 0, 0, 0, 0, 87, 0, 0,
    0, 0, 0, 88, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 95, 0, 0, 0, 0, 0, 96, 0, 0, 97, 0, 0, 0,
    98, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 107, 108, 0, 0, 0, 0, 0, 109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 110, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 113, 0, 114, 115, 0, 0, 0, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 120, 0, 121, 122, 0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 125, 0, 0, 0,
    126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 129, 130, 0, 0, 0, 0,
    0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0,
    138, 139, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0,
    143, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0,
    147, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0,
    0, 0, 153, 0, 154, 0, 155, 156, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 159, 0, 0, 160, 0, 0, 0, 161, 0, 0, 162,
    0, 163, 0, 164, 0, 0, 165, 0, 0, 166, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 0, 170, 0, 171, 0, 172, 173,
    0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 179, 0, 180, 0,
    0, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 0, 0, 0, 183, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0,
    187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0,
    0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 201,
    0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0,
    0, 208, 0, 209, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0,
    0, 0, 0, 216, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 0, 0, 220, 221, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 224, 0, 0, 225, 0, 0, 0, 0, 0, 226, 0, 227, 0, 228, 0, 229, 0, 0, 0,
    0, 230, 0, 0, 0, 231, 0, 0, 0, 232, 0, 0, 0, 0, 0, 233, 0, 234, 0, 235, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239,
    0, 0, 0, 0, 0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 0, 0, 0, 247, 0,
    248, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 253, 0, 0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0,
    256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 0, 260, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 264, 0, 265, 0,
    266, 0, 267, 0, 0, 0, 268, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0,
    274, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 277, 0, 278, 0, 0, 279, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 282, 0, 0, 0, 283,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 0, 0, 289, 0, 290, 0, 291,
    0, 0, 0, 0, 0, 292, 0, 293, 0, 294, 0, 295, 0, 0, 296, 0, 0, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0, 0,
    0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 314,
    0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0,
    0, 321, 0, 322, 0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 328, 0,
    0, 0, 0, 0, 0, 329, 0, 330, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 335, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0,
    0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 349, 0,
    0, 0, 0, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 355, 0, 0, 0, 0, 0, 0,
    356, 0, 357, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 361, 0, 0, 0, 0, 362, 0, 0, 363, 0, 0, 0, 0,
    0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 367, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0, 0,
    0, 0, 0, 0, 371, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0, 0, 0, 0, 0, 0, 377,
    0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 380, 0, 0, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0,
    385, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 391, 0, 0, 0, 0,
    0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 398, 0, 0, 0, 0, 0, 0,
    0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 402, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0, 0,
    0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0, 413,
    0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 0, 0,
    0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 423, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0,
    0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0,
    0, 0, 434, 0, 0, 0, 0, 0, 0, 435, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0,
    0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0, 0,
    448, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 0, 0, 454, 0, 455, 0, 0,
    0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 0, 0, 0, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 0, 0,
    0, 0, 0, 463, 0, 464, 0, 0, 0, 465, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0,
    469, 0, 0, 0, 0, 0, 0, 470, 471, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0,
    0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 0, 0, 479, 0, 480, 0, 0, 0, 0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0,
    484, 0, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 488, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 490, 0, 491,
    0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 496, 497, 0,
    498, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0, 0,
    0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 512,
    0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0,
    0, 519, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 525, 0, 0, 526, 0, 0,
    0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 530, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 533,
    0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0,
    0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 545, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0,
    0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 554, 0, 0, 0,
    0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 557, 558, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 561, 0,
    0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0,
    568, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0,
    0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 582, 0, 0, 0,
    0, 0, 0, 583, 0, 584, 0, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0,
    0, 0, 0, 589, 590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 596,
    0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0, 0,
    0, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0,
    611, 0, 0, 0, 0, 0, 0, 612, 0, 613, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 618,
    0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 622, 623, 0, 624, 0, 0, 0, 0,
    0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0, 632,
    0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 0, 0,
    0, 639, 0, 640, 0, 0, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0,
    0, 0, 0, 0, 0, 647, 0, 648, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0,
    653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 656, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 0,
    660, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0,
    0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 673, 0, 0, 0, 0, 0, 0, 674,
    0, 675, 0, 0, 0, 0, 0, 0, 676, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 682,
    0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 686, 0, 687, 0, 0, 0, 0, 0, 0, 688,
    0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0,
    0, 0, 0, 696, 0, 697, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 701, 0, 0, 0, 0, 0, 0, 702, 0,
    703, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 0, 0, 0, 710,
    0, 0, 711, 0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 0, 0, 714, 715, 0, 716, 0, 0, 0, 0,
    0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 724,
    0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0,
    0, 731, 0, 732, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 737, 0, 738, 0,
    0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0,
    745, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 748, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0, 0,
    752, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0, 0, 0, 758, 0, 759, 0, 0,
    0, 0, 0, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 0, 0, 764, 0, 765, 0, 0, 0, 0, 0, 0, 766,
    0, 767, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 773, 0, 0, 774,
    0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 777, 778, 0, 779, 0, 0, 0, 0, 0, 0, 780,
    0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0,
    0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 793, 0, 0, 0, 0, 0, 0, 794, 0,
    795, 0, 0, 0, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 798, 0, 799, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 802,
    0, 0, 0, 0, 803, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 807, 808, 0,
    809, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0,
    0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 823,
    0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0, 0, 0, 0, 826, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 829, 0, 0, 0, 0, 0,
    0, 830, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 836, 0, 0, 0, 0, 0, 0, 0,
    0, 837, 0, 0, 0, 0, 0, 838, 0, 0, 0, 0, 0, 0, 839, 840, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 843, 0, 0, 0, 0, 0,
    0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 0, 0, 0, 0, 850, 0, 851, 0,
    0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0, 0,
    858, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 0, 0, 864, 0, 865,
};
void recomp_unit_0151_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A60000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0151[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A60000;
    case 2u: goto L_08A60014;
    case 3u: goto L_08A6003C;
    case 4u: goto L_08A6004C;
    case 5u: goto L_08A60090;
    case 6u: goto L_08A600A0;
    case 7u: goto L_08A600B4;
    case 8u: goto L_08A600EC;
    case 9u: goto L_08A600F4;
    case 10u: goto L_08A600F8;
    case 11u: goto L_08A60110;
    case 12u: goto L_08A60134;
    case 13u: goto L_08A60140;
    case 14u: goto L_08A60150;
    case 15u: goto L_08A60158;
    case 16u: goto L_08A60164;
    case 17u: goto L_08A60174;
    case 18u: goto L_08A6017C;
    case 19u: goto L_08A60188;
    case 20u: goto L_08A601B8;
    case 21u: goto L_08A601C4;
    case 22u: goto L_08A601CC;
    case 23u: goto L_08A601F8;
    case 24u: goto L_08A60214;
    case 25u: goto L_08A60234;
    case 26u: goto L_08A60244;
    case 27u: goto L_08A60264;
    case 28u: goto L_08A60270;
    case 29u: goto L_08A60278;
    case 30u: goto L_08A60280;
    case 31u: goto L_08A60288;
    case 32u: goto L_08A60294;
    case 33u: goto L_08A6029C;
    case 34u: goto L_08A602A4;
    case 35u: goto L_08A602AC;
    case 36u: goto L_08A602B8;
    case 37u: goto L_08A602C0;
    case 38u: goto L_08A602E0;
    case 39u: goto L_08A602EC;
    case 40u: goto L_08A602F4;
    case 41u: goto L_08A602FC;
    case 42u: goto L_08A60310;
    case 43u: goto L_08A60328;
    case 44u: goto L_08A60330;
    case 45u: goto L_08A6033C;
    case 46u: goto L_08A60344;
    case 47u: goto L_08A60354;
    case 48u: goto L_08A60364;
    case 49u: goto L_08A60394;
    case 50u: goto L_08A6039C;
    case 51u: goto L_08A603DC;
    case 52u: goto L_08A603F4;
    case 53u: goto L_08A603FC;
    case 54u: goto L_08A60420;
    case 55u: goto L_08A60428;
    case 56u: goto L_08A6044C;
    case 57u: goto L_08A6045C;
    case 58u: goto L_08A6048C;
    case 59u: goto L_08A6049C;
    case 60u: goto L_08A604B4;
    case 61u: goto L_08A604C4;
    case 62u: goto L_08A604D4;
    case 63u: goto L_08A604E4;
    case 64u: goto L_08A604F8;
    case 65u: goto L_08A60508;
    case 66u: goto L_08A6052C;
    case 67u: goto L_08A6059C;
    case 68u: goto L_08A605A4;
    case 69u: goto L_08A605C0;
    case 70u: goto L_08A605C8;
    case 71u: goto L_08A605D8;
    case 72u: goto L_08A605E0;
    case 73u: goto L_08A60600;
    case 74u: goto L_08A60614;
    case 75u: goto L_08A6062C;
    case 76u: goto L_08A60634;
    case 77u: goto L_08A60644;
    case 78u: goto L_08A60654;
    case 79u: goto L_08A606BC;
    case 80u: goto L_08A606C4;
    case 81u: goto L_08A606EC;
    case 82u: goto L_08A606F4;
    case 83u: goto L_08A60704;
    case 84u: goto L_08A6072C;
    case 85u: goto L_08A6073C;
    case 86u: goto L_08A60750;
    case 87u: goto L_08A60774;
    case 88u: goto L_08A6078C;
    case 89u: goto L_08A607AC;
    case 90u: goto L_08A607B4;
    case 91u: goto L_08A607C0;
    case 92u: goto L_08A607C8;
    case 93u: goto L_08A60808;
    case 94u: goto L_08A6083C;
    case 95u: goto L_08A6084C;
    case 96u: goto L_08A60864;
    case 97u: goto L_08A60870;
    case 98u: goto L_08A60880;
    case 99u: goto L_08A60894;
    case 100u: goto L_08A608C4;
    case 101u: goto L_08A60908;
    case 102u: goto L_08A60934;
    case 103u: goto L_08A60948;
    case 104u: goto L_08A60958;
    case 105u: goto L_08A60978;
    case 106u: goto L_08A609B0;
    case 107u: goto L_08A609B8;
    case 108u: goto L_08A609BC;
    case 109u: goto L_08A609D4;
    case 110u: goto L_08A60A0C;
    case 111u: goto L_08A60A20;
    case 112u: goto L_08A60A30;
    case 113u: goto L_08A60A84;
    case 114u: goto L_08A60A8C;
    case 115u: goto L_08A60A90;
    case 116u: goto L_08A60AAC;
    case 117u: goto L_08A60AE4;
    case 118u: goto L_08A60B20;
    case 119u: goto L_08A60B30;
    case 120u: goto L_08A60B84;
    case 121u: goto L_08A60B8C;
    case 122u: goto L_08A60B90;
    case 123u: goto L_08A60BAC;
    case 124u: goto L_08A60BDC;
    case 125u: goto L_08A60BF0;
    case 126u: goto L_08A60C00;
    case 127u: goto L_08A60C28;
    case 128u: goto L_08A60C60;
    case 129u: goto L_08A60C68;
    case 130u: goto L_08A60C6C;
    case 131u: goto L_08A60C84;
    case 132u: goto L_08A60CBC;
    case 133u: goto L_08A60CD0;
    case 134u: goto L_08A60CE0;
    case 135u: goto L_08A60D0C;
    case 136u: goto L_08A60D4C;
    case 137u: goto L_08A60D78;
    case 138u: goto L_08A60D80;
    case 139u: goto L_08A60D84;
    case 140u: goto L_08A60DA4;
    case 141u: goto L_08A60DDC;
    case 142u: goto L_08A60DEC;
    case 143u: goto L_08A60E00;
    case 144u: goto L_08A60E08;
    case 145u: goto L_08A60E54;
    case 146u: goto L_08A60E68;
    case 147u: goto L_08A60E80;
    case 148u: goto L_08A60EB4;
    case 149u: goto L_08A60EC8;
    case 150u: goto L_08A60EDC;
    case 151u: goto L_08A60EE8;
    case 152u: goto L_08A60EF4;
    case 153u: goto L_08A60F08;
    case 154u: goto L_08A60F10;
    case 155u: goto L_08A60F18;
    case 156u: goto L_08A60F1C;
    case 157u: goto L_08A60F24;
    case 158u: goto L_08A60F4C;
    case 159u: goto L_08A60F54;
    case 160u: goto L_08A60F60;
    case 161u: goto L_08A60F70;
    case 162u: goto L_08A60F7C;
    case 163u: goto L_08A60F84;
    case 164u: goto L_08A60F8C;
    case 165u: goto L_08A60F98;
    case 166u: goto L_08A60FA4;
    case 167u: goto L_08A60FB8;
    case 168u: goto L_08A60FC4;
    case 169u: goto L_08A60FDC;
    case 170u: goto L_08A60FE8;
    case 171u: goto L_08A60FF0;
    case 172u: goto L_08A60FF8;
    case 173u: goto L_08A60FFC;
    case 174u: goto L_08A61010;
    case 175u: goto L_08A61018;
    case 176u: goto L_08A61028;
    case 177u: goto L_08A61054;
    case 178u: goto L_08A61068;
    case 179u: goto L_08A61070;
    case 180u: goto L_08A61078;
    case 181u: goto L_08A6109C;
    case 182u: goto L_08A610B4;
    case 183u: goto L_08A610D0;
    case 184u: goto L_08A610D4;
    case 185u: goto L_08A610DC;
    case 186u: goto L_08A610F8;
    case 187u: goto L_08A61100;
    case 188u: goto L_08A6111C;
    case 189u: goto L_08A61124;
    case 190u: goto L_08A61140;
    case 191u: goto L_08A61148;
    case 192u: goto L_08A61164;
    case 193u: goto L_08A6116C;
    case 194u: goto L_08A61188;
    case 195u: goto L_08A61190;
    case 196u: goto L_08A611AC;
    case 197u: goto L_08A611B4;
    case 198u: goto L_08A611D0;
    case 199u: goto L_08A611D8;
    case 200u: goto L_08A611F4;
    case 201u: goto L_08A611FC;
    case 202u: goto L_08A61218;
    case 203u: goto L_08A61220;
    case 204u: goto L_08A6123C;
    case 205u: goto L_08A61244;
    case 206u: goto L_08A61260;
    case 207u: goto L_08A61268;
    case 208u: goto L_08A61284;
    case 209u: goto L_08A6128C;
    case 210u: goto L_08A612A8;
    case 211u: goto L_08A612B0;
    case 212u: goto L_08A612CC;
    case 213u: goto L_08A612D4;
    case 214u: goto L_08A612F0;
    case 215u: goto L_08A612F8;
    case 216u: goto L_08A6130C;
    case 217u: goto L_08A61318;
    case 218u: goto L_08A61340;
    case 219u: goto L_08A6135C;
    case 220u: goto L_08A61374;
    case 221u: goto L_08A61378;
    case 222u: goto L_08A613A4;
    case 223u: goto L_08A613AC;
    case 224u: goto L_08A613B4;
    case 225u: goto L_08A613C0;
    case 226u: goto L_08A613D8;
    case 227u: goto L_08A613E0;
    case 228u: goto L_08A613E8;
    case 229u: goto L_08A613F0;
    case 230u: goto L_08A61404;
    case 231u: goto L_08A61414;
    case 232u: goto L_08A61424;
    case 233u: goto L_08A6143C;
    case 234u: goto L_08A61444;
    case 235u: goto L_08A6144C;
    case 236u: goto L_08A61454;
    case 237u: goto L_08A6145C;
    case 238u: goto L_08A61474;
    case 239u: goto L_08A6147C;
    case 240u: goto L_08A61494;
    case 241u: goto L_08A6149C;
    case 242u: goto L_08A614A4;
    case 243u: goto L_08A614AC;
    case 244u: goto L_08A614BC;
    case 245u: goto L_08A614DC;
    case 246u: goto L_08A614E4;
    case 247u: goto L_08A614F8;
    case 248u: goto L_08A61500;
    case 249u: goto L_08A61508;
    case 250u: goto L_08A61510;
    case 251u: goto L_08A61518;
    case 252u: goto L_08A61530;
    case 253u: goto L_08A61538;
    case 254u: goto L_08A61548;
    case 255u: goto L_08A6155C;
    case 256u: goto L_08A61580;
    case 257u: goto L_08A61588;
    case 258u: goto L_08A61590;
    case 259u: goto L_08A615A8;
    case 260u: goto L_08A615B4;
    case 261u: goto L_08A615BC;
    case 262u: goto L_08A615D4;
    case 263u: goto L_08A615E0;
    case 264u: goto L_08A615F0;
    case 265u: goto L_08A615F8;
    case 266u: goto L_08A61600;
    case 267u: goto L_08A61608;
    case 268u: goto L_08A61618;
    case 269u: goto L_08A61628;
    case 270u: goto L_08A61650;
    case 271u: goto L_08A61668;
    case 272u: goto L_08A61670;
    case 273u: goto L_08A61678;
    case 274u: goto L_08A61680;
    case 275u: goto L_08A61688;
    case 276u: goto L_08A616A0;
    case 277u: goto L_08A616AC;
    case 278u: goto L_08A616B4;
    case 279u: goto L_08A616C0;
    case 280u: goto L_08A616C8;
    case 281u: goto L_08A616DC;
    case 282u: goto L_08A616EC;
    case 283u: goto L_08A616FC;
    case 284u: goto L_08A61708;
    case 285u: goto L_08A6172C;
    case 286u: goto L_08A61738;
    case 287u: goto L_08A61750;
    case 288u: goto L_08A6175C;
    case 289u: goto L_08A6176C;
    case 290u: goto L_08A61774;
    case 291u: goto L_08A6177C;
    case 292u: goto L_08A61794;
    case 293u: goto L_08A6179C;
    case 294u: goto L_08A617A4;
    case 295u: goto L_08A617AC;
    case 296u: goto L_08A617B8;
    case 297u: goto L_08A617C8;
    case 298u: goto L_08A617D8;
    case 299u: goto L_08A617E4;
    case 300u: goto L_08A61808;
    case 301u: goto L_08A61820;
    case 302u: goto L_08A6183C;
    case 303u: goto L_08A61840;
    case 304u: goto L_08A61848;
    case 305u: goto L_08A61864;
    case 306u: goto L_08A6186C;
    case 307u: goto L_08A61888;
    case 308u: goto L_08A61890;
    case 309u: goto L_08A618AC;
    case 310u: goto L_08A618B4;
    case 311u: goto L_08A618D0;
    case 312u: goto L_08A618D8;
    case 313u: goto L_08A618F4;
    case 314u: goto L_08A618FC;
    case 315u: goto L_08A61918;
    case 316u: goto L_08A61920;
    case 317u: goto L_08A6193C;
    case 318u: goto L_08A61944;
    case 319u: goto L_08A61960;
    case 320u: goto L_08A61968;
    case 321u: goto L_08A61984;
    case 322u: goto L_08A6198C;
    case 323u: goto L_08A619A8;
    case 324u: goto L_08A619B0;
    case 325u: goto L_08A619CC;
    case 326u: goto L_08A619D4;
    case 327u: goto L_08A619F0;
    case 328u: goto L_08A619F8;
    case 329u: goto L_08A61A14;
    case 330u: goto L_08A61A1C;
    case 331u: goto L_08A61A30;
    case 332u: goto L_08A61A3C;
    case 333u: goto L_08A61A60;
    case 334u: goto L_08A61A78;
    case 335u: goto L_08A61A94;
    case 336u: goto L_08A61A98;
    case 337u: goto L_08A61AA0;
    case 338u: goto L_08A61ABC;
    case 339u: goto L_08A61AC4;
    case 340u: goto L_08A61AE0;
    case 341u: goto L_08A61AE8;
    case 342u: goto L_08A61B04;
    case 343u: goto L_08A61B0C;
    case 344u: goto L_08A61B28;
    case 345u: goto L_08A61B30;
    case 346u: goto L_08A61B4C;
    case 347u: goto L_08A61B54;
    case 348u: goto L_08A61B70;
    case 349u: goto L_08A61B78;
    case 350u: goto L_08A61B94;
    case 351u: goto L_08A61B9C;
    case 352u: goto L_08A61BB8;
    case 353u: goto L_08A61BC0;
    case 354u: goto L_08A61BDC;
    case 355u: goto L_08A61BE4;
    case 356u: goto L_08A61C00;
    case 357u: goto L_08A61C08;
    case 358u: goto L_08A61C18;
    case 359u: goto L_08A61C34;
    case 360u: goto L_08A61C3C;
    case 361u: goto L_08A61C4C;
    case 362u: goto L_08A61C60;
    case 363u: goto L_08A61C6C;
    case 364u: goto L_08A61C90;
    case 365u: goto L_08A61CA8;
    case 366u: goto L_08A61CC4;
    case 367u: goto L_08A61CC8;
    case 368u: goto L_08A61CD0;
    case 369u: goto L_08A61CEC;
    case 370u: goto L_08A61CF4;
    case 371u: goto L_08A61D10;
    case 372u: goto L_08A61D18;
    case 373u: goto L_08A61D34;
    case 374u: goto L_08A61D3C;
    case 375u: goto L_08A61D58;
    case 376u: goto L_08A61D60;
    case 377u: goto L_08A61D7C;
    case 378u: goto L_08A61D84;
    case 379u: goto L_08A61DA0;
    case 380u: goto L_08A61DA8;
    case 381u: goto L_08A61DB8;
    case 382u: goto L_08A61DD4;
    case 383u: goto L_08A61DDC;
    case 384u: goto L_08A61DF8;
    case 385u: goto L_08A61E00;
    case 386u: goto L_08A61E1C;
    case 387u: goto L_08A61E24;
    case 388u: goto L_08A61E40;
    case 389u: goto L_08A61E48;
    case 390u: goto L_08A61E64;
    case 391u: goto L_08A61E6C;
    case 392u: goto L_08A61E88;
    case 393u: goto L_08A61E90;
    case 394u: goto L_08A61EAC;
    case 395u: goto L_08A61EB4;
    case 396u: goto L_08A61EC4;
    case 397u: goto L_08A61ED8;
    case 398u: goto L_08A61EE4;
    case 399u: goto L_08A61F08;
    case 400u: goto L_08A61F20;
    case 401u: goto L_08A61F3C;
    case 402u: goto L_08A61F40;
    case 403u: goto L_08A61F48;
    case 404u: goto L_08A61F64;
    case 405u: goto L_08A61F6C;
    case 406u: goto L_08A61F88;
    case 407u: goto L_08A61F90;
    case 408u: goto L_08A61FAC;
    case 409u: goto L_08A61FB4;
    case 410u: goto L_08A61FD0;
    case 411u: goto L_08A61FD8;
    case 412u: goto L_08A61FF4;
    case 413u: goto L_08A61FFC;
    case 414u: goto L_08A62018;
    case 415u: goto L_08A62020;
    case 416u: goto L_08A6203C;
    case 417u: goto L_08A62044;
    case 418u: goto L_08A62060;
    case 419u: goto L_08A62068;
    case 420u: goto L_08A62084;
    case 421u: goto L_08A6208C;
    case 422u: goto L_08A620A8;
    case 423u: goto L_08A620B0;
    case 424u: goto L_08A620CC;
    case 425u: goto L_08A620D4;
    case 426u: goto L_08A620F0;
    case 427u: goto L_08A620F8;
    case 428u: goto L_08A62114;
    case 429u: goto L_08A6211C;
    case 430u: goto L_08A6212C;
    case 431u: goto L_08A62140;
    case 432u: goto L_08A6214C;
    case 433u: goto L_08A62170;
    case 434u: goto L_08A62188;
    case 435u: goto L_08A621A4;
    case 436u: goto L_08A621A8;
    case 437u: goto L_08A621B0;
    case 438u: goto L_08A621CC;
    case 439u: goto L_08A621D4;
    case 440u: goto L_08A621F0;
    case 441u: goto L_08A621F8;
    case 442u: goto L_08A62214;
    case 443u: goto L_08A6221C;
    case 444u: goto L_08A62238;
    case 445u: goto L_08A62240;
    case 446u: goto L_08A6225C;
    case 447u: goto L_08A62264;
    case 448u: goto L_08A62280;
    case 449u: goto L_08A62288;
    case 450u: goto L_08A622A4;
    case 451u: goto L_08A622AC;
    case 452u: goto L_08A622C8;
    case 453u: goto L_08A622D0;
    case 454u: goto L_08A622EC;
    case 455u: goto L_08A622F4;
    case 456u: goto L_08A62310;
    case 457u: goto L_08A62318;
    case 458u: goto L_08A62334;
    case 459u: goto L_08A6233C;
    case 460u: goto L_08A62358;
    case 461u: goto L_08A62360;
    case 462u: goto L_08A62370;
    case 463u: goto L_08A6238C;
    case 464u: goto L_08A62394;
    case 465u: goto L_08A623A4;
    case 466u: goto L_08A623B8;
    case 467u: goto L_08A623C4;
    case 468u: goto L_08A623E8;
    case 469u: goto L_08A62400;
    case 470u: goto L_08A6241C;
    case 471u: goto L_08A62420;
    case 472u: goto L_08A62428;
    case 473u: goto L_08A62444;
    case 474u: goto L_08A6244C;
    case 475u: goto L_08A62468;
    case 476u: goto L_08A62470;
    case 477u: goto L_08A6248C;
    case 478u: goto L_08A62494;
    case 479u: goto L_08A624B0;
    case 480u: goto L_08A624B8;
    case 481u: goto L_08A624D4;
    case 482u: goto L_08A624DC;
    case 483u: goto L_08A624F8;
    case 484u: goto L_08A62500;
    case 485u: goto L_08A6251C;
    case 486u: goto L_08A62524;
    case 487u: goto L_08A62540;
    case 488u: goto L_08A62548;
    case 489u: goto L_08A62558;
    case 490u: goto L_08A62574;
    case 491u: goto L_08A6257C;
    case 492u: goto L_08A62590;
    case 493u: goto L_08A6259C;
    case 494u: goto L_08A625C0;
    case 495u: goto L_08A625D8;
    case 496u: goto L_08A625F4;
    case 497u: goto L_08A625F8;
    case 498u: goto L_08A62600;
    case 499u: goto L_08A6261C;
    case 500u: goto L_08A62624;
    case 501u: goto L_08A62640;
    case 502u: goto L_08A62648;
    case 503u: goto L_08A62664;
    case 504u: goto L_08A6266C;
    case 505u: goto L_08A62688;
    case 506u: goto L_08A62690;
    case 507u: goto L_08A626AC;
    case 508u: goto L_08A626B4;
    case 509u: goto L_08A626D0;
    case 510u: goto L_08A626D8;
    case 511u: goto L_08A626F4;
    case 512u: goto L_08A626FC;
    case 513u: goto L_08A62718;
    case 514u: goto L_08A62720;
    case 515u: goto L_08A6273C;
    case 516u: goto L_08A62744;
    case 517u: goto L_08A62760;
    case 518u: goto L_08A62768;
    case 519u: goto L_08A62784;
    case 520u: goto L_08A6278C;
    case 521u: goto L_08A627A8;
    case 522u: goto L_08A627B0;
    case 523u: goto L_08A627CC;
    case 524u: goto L_08A627D4;
    case 525u: goto L_08A627E8;
    case 526u: goto L_08A627F4;
    case 527u: goto L_08A62818;
    case 528u: goto L_08A62830;
    case 529u: goto L_08A6284C;
    case 530u: goto L_08A62850;
    case 531u: goto L_08A62858;
    case 532u: goto L_08A62874;
    case 533u: goto L_08A6287C;
    case 534u: goto L_08A62898;
    case 535u: goto L_08A628A0;
    case 536u: goto L_08A628BC;
    case 537u: goto L_08A628C4;
    case 538u: goto L_08A628E0;
    case 539u: goto L_08A628E8;
    case 540u: goto L_08A62904;
    case 541u: goto L_08A6290C;
    case 542u: goto L_08A62928;
    case 543u: goto L_08A62930;
    case 544u: goto L_08A6294C;
    case 545u: goto L_08A62954;
    case 546u: goto L_08A62970;
    case 547u: goto L_08A62978;
    case 548u: goto L_08A62994;
    case 549u: goto L_08A6299C;
    case 550u: goto L_08A629B8;
    case 551u: goto L_08A629C0;
    case 552u: goto L_08A629D0;
    case 553u: goto L_08A629E4;
    case 554u: goto L_08A629F0;
    case 555u: goto L_08A62A14;
    case 556u: goto L_08A62A2C;
    case 557u: goto L_08A62A48;
    case 558u: goto L_08A62A4C;
    case 559u: goto L_08A62A54;
    case 560u: goto L_08A62A70;
    case 561u: goto L_08A62A78;
    case 562u: goto L_08A62A94;
    case 563u: goto L_08A62A9C;
    case 564u: goto L_08A62AB8;
    case 565u: goto L_08A62AC0;
    case 566u: goto L_08A62ADC;
    case 567u: goto L_08A62AE4;
    case 568u: goto L_08A62B00;
    case 569u: goto L_08A62B08;
    case 570u: goto L_08A62B24;
    case 571u: goto L_08A62B2C;
    case 572u: goto L_08A62B48;
    case 573u: goto L_08A62B50;
    case 574u: goto L_08A62B6C;
    case 575u: goto L_08A62B74;
    case 576u: goto L_08A62B90;
    case 577u: goto L_08A62B98;
    case 578u: goto L_08A62BB4;
    case 579u: goto L_08A62BBC;
    case 580u: goto L_08A62BCC;
    case 581u: goto L_08A62BE8;
    case 582u: goto L_08A62BF0;
    case 583u: goto L_08A62C0C;
    case 584u: goto L_08A62C14;
    case 585u: goto L_08A62C28;
    case 586u: goto L_08A62C34;
    case 587u: goto L_08A62C58;
    case 588u: goto L_08A62C70;
    case 589u: goto L_08A62C8C;
    case 590u: goto L_08A62C90;
    case 591u: goto L_08A62C98;
    case 592u: goto L_08A62CB4;
    case 593u: goto L_08A62CBC;
    case 594u: goto L_08A62CD8;
    case 595u: goto L_08A62CE0;
    case 596u: goto L_08A62CFC;
    case 597u: goto L_08A62D04;
    case 598u: goto L_08A62D20;
    case 599u: goto L_08A62D28;
    case 600u: goto L_08A62D44;
    case 601u: goto L_08A62D4C;
    case 602u: goto L_08A62D68;
    case 603u: goto L_08A62D70;
    case 604u: goto L_08A62D8C;
    case 605u: goto L_08A62D94;
    case 606u: goto L_08A62DB0;
    case 607u: goto L_08A62DB8;
    case 608u: goto L_08A62DD4;
    case 609u: goto L_08A62DDC;
    case 610u: goto L_08A62DF8;
    case 611u: goto L_08A62E00;
    case 612u: goto L_08A62E1C;
    case 613u: goto L_08A62E24;
    case 614u: goto L_08A62E34;
    case 615u: goto L_08A62E50;
    case 616u: goto L_08A62E58;
    case 617u: goto L_08A62E68;
    case 618u: goto L_08A62E7C;
    case 619u: goto L_08A62E88;
    case 620u: goto L_08A62EAC;
    case 621u: goto L_08A62EC4;
    case 622u: goto L_08A62EE0;
    case 623u: goto L_08A62EE4;
    case 624u: goto L_08A62EEC;
    case 625u: goto L_08A62F08;
    case 626u: goto L_08A62F10;
    case 627u: goto L_08A62F2C;
    case 628u: goto L_08A62F34;
    case 629u: goto L_08A62F50;
    case 630u: goto L_08A62F58;
    case 631u: goto L_08A62F74;
    case 632u: goto L_08A62F7C;
    case 633u: goto L_08A62F98;
    case 634u: goto L_08A62FA0;
    case 635u: goto L_08A62FBC;
    case 636u: goto L_08A62FC4;
    case 637u: goto L_08A62FE0;
    case 638u: goto L_08A62FE8;
    case 639u: goto L_08A63004;
    case 640u: goto L_08A6300C;
    case 641u: goto L_08A63028;
    case 642u: goto L_08A63030;
    case 643u: goto L_08A6304C;
    case 644u: goto L_08A63054;
    case 645u: goto L_08A63070;
    case 646u: goto L_08A63078;
    case 647u: goto L_08A63094;
    case 648u: goto L_08A6309C;
    case 649u: goto L_08A630AC;
    case 650u: goto L_08A630BC;
    case 651u: goto L_08A630D0;
    case 652u: goto L_08A630DC;
    case 653u: goto L_08A63100;
    case 654u: goto L_08A63118;
    case 655u: goto L_08A63134;
    case 656u: goto L_08A63138;
    case 657u: goto L_08A63140;
    case 658u: goto L_08A6315C;
    case 659u: goto L_08A63164;
    case 660u: goto L_08A63180;
    case 661u: goto L_08A63188;
    case 662u: goto L_08A631A4;
    case 663u: goto L_08A631AC;
    case 664u: goto L_08A631C8;
    case 665u: goto L_08A631D0;
    case 666u: goto L_08A631EC;
    case 667u: goto L_08A631F4;
    case 668u: goto L_08A63210;
    case 669u: goto L_08A63218;
    case 670u: goto L_08A63234;
    case 671u: goto L_08A6323C;
    case 672u: goto L_08A63258;
    case 673u: goto L_08A63260;
    case 674u: goto L_08A6327C;
    case 675u: goto L_08A63284;
    case 676u: goto L_08A632A0;
    case 677u: goto L_08A632A8;
    case 678u: goto L_08A632C4;
    case 679u: goto L_08A632CC;
    case 680u: goto L_08A632DC;
    case 681u: goto L_08A632F0;
    case 682u: goto L_08A632FC;
    case 683u: goto L_08A63320;
    case 684u: goto L_08A63338;
    case 685u: goto L_08A63354;
    case 686u: goto L_08A63358;
    case 687u: goto L_08A63360;
    case 688u: goto L_08A6337C;
    case 689u: goto L_08A63384;
    case 690u: goto L_08A633A0;
    case 691u: goto L_08A633A8;
    case 692u: goto L_08A633C4;
    case 693u: goto L_08A633CC;
    case 694u: goto L_08A633E8;
    case 695u: goto L_08A633F0;
    case 696u: goto L_08A6340C;
    case 697u: goto L_08A63414;
    case 698u: goto L_08A63430;
    case 699u: goto L_08A63438;
    case 700u: goto L_08A63454;
    case 701u: goto L_08A6345C;
    case 702u: goto L_08A63478;
    case 703u: goto L_08A63480;
    case 704u: goto L_08A6349C;
    case 705u: goto L_08A634A4;
    case 706u: goto L_08A634B4;
    case 707u: goto L_08A634D0;
    case 708u: goto L_08A634D8;
    case 709u: goto L_08A634E8;
    case 710u: goto L_08A634FC;
    case 711u: goto L_08A63508;
    case 712u: goto L_08A6352C;
    case 713u: goto L_08A63544;
    case 714u: goto L_08A63560;
    case 715u: goto L_08A63564;
    case 716u: goto L_08A6356C;
    case 717u: goto L_08A63588;
    case 718u: goto L_08A63590;
    case 719u: goto L_08A635AC;
    case 720u: goto L_08A635B4;
    case 721u: goto L_08A635D0;
    case 722u: goto L_08A635D8;
    case 723u: goto L_08A635F4;
    case 724u: goto L_08A635FC;
    case 725u: goto L_08A63618;
    case 726u: goto L_08A63620;
    case 727u: goto L_08A6363C;
    case 728u: goto L_08A63644;
    case 729u: goto L_08A63660;
    case 730u: goto L_08A63668;
    case 731u: goto L_08A63684;
    case 732u: goto L_08A6368C;
    case 733u: goto L_08A636A8;
    case 734u: goto L_08A636B0;
    case 735u: goto L_08A636CC;
    case 736u: goto L_08A636D4;
    case 737u: goto L_08A636F0;
    case 738u: goto L_08A636F8;
    case 739u: goto L_08A63708;
    case 740u: goto L_08A63724;
    case 741u: goto L_08A6372C;
    case 742u: goto L_08A6373C;
    case 743u: goto L_08A63750;
    case 744u: goto L_08A6375C;
    case 745u: goto L_08A63780;
    case 746u: goto L_08A63798;
    case 747u: goto L_08A637B4;
    case 748u: goto L_08A637B8;
    case 749u: goto L_08A637C0;
    case 750u: goto L_08A637DC;
    case 751u: goto L_08A637E4;
    case 752u: goto L_08A63800;
    case 753u: goto L_08A63808;
    case 754u: goto L_08A63824;
    case 755u: goto L_08A6382C;
    case 756u: goto L_08A63848;
    case 757u: goto L_08A63850;
    case 758u: goto L_08A6386C;
    case 759u: goto L_08A63874;
    case 760u: goto L_08A63890;
    case 761u: goto L_08A63898;
    case 762u: goto L_08A638B4;
    case 763u: goto L_08A638BC;
    case 764u: goto L_08A638D8;
    case 765u: goto L_08A638E0;
    case 766u: goto L_08A638FC;
    case 767u: goto L_08A63904;
    case 768u: goto L_08A63914;
    case 769u: goto L_08A63930;
    case 770u: goto L_08A63938;
    case 771u: goto L_08A63954;
    case 772u: goto L_08A6395C;
    case 773u: goto L_08A63970;
    case 774u: goto L_08A6397C;
    case 775u: goto L_08A639A0;
    case 776u: goto L_08A639B8;
    case 777u: goto L_08A639D4;
    case 778u: goto L_08A639D8;
    case 779u: goto L_08A639E0;
    case 780u: goto L_08A639FC;
    case 781u: goto L_08A63A04;
    case 782u: goto L_08A63A20;
    case 783u: goto L_08A63A28;
    case 784u: goto L_08A63A44;
    case 785u: goto L_08A63A4C;
    case 786u: goto L_08A63A68;
    case 787u: goto L_08A63A70;
    case 788u: goto L_08A63A8C;
    case 789u: goto L_08A63A94;
    case 790u: goto L_08A63AB0;
    case 791u: goto L_08A63AB8;
    case 792u: goto L_08A63AD4;
    case 793u: goto L_08A63ADC;
    case 794u: goto L_08A63AF8;
    case 795u: goto L_08A63B00;
    case 796u: goto L_08A63B1C;
    case 797u: goto L_08A63B24;
    case 798u: goto L_08A63B40;
    case 799u: goto L_08A63B48;
    case 800u: goto L_08A63B64;
    case 801u: goto L_08A63B6C;
    case 802u: goto L_08A63B7C;
    case 803u: goto L_08A63B90;
    case 804u: goto L_08A63B9C;
    case 805u: goto L_08A63BC0;
    case 806u: goto L_08A63BD8;
    case 807u: goto L_08A63BF4;
    case 808u: goto L_08A63BF8;
    case 809u: goto L_08A63C00;
    case 810u: goto L_08A63C1C;
    case 811u: goto L_08A63C24;
    case 812u: goto L_08A63C40;
    case 813u: goto L_08A63C48;
    case 814u: goto L_08A63C64;
    case 815u: goto L_08A63C6C;
    case 816u: goto L_08A63C88;
    case 817u: goto L_08A63C90;
    case 818u: goto L_08A63CAC;
    case 819u: goto L_08A63CB4;
    case 820u: goto L_08A63CD0;
    case 821u: goto L_08A63CD8;
    case 822u: goto L_08A63CF4;
    case 823u: goto L_08A63CFC;
    case 824u: goto L_08A63D18;
    case 825u: goto L_08A63D20;
    case 826u: goto L_08A63D3C;
    case 827u: goto L_08A63D44;
    case 828u: goto L_08A63D60;
    case 829u: goto L_08A63D68;
    case 830u: goto L_08A63D84;
    case 831u: goto L_08A63D8C;
    case 832u: goto L_08A63DA8;
    case 833u: goto L_08A63DB0;
    case 834u: goto L_08A63DC0;
    case 835u: goto L_08A63DD4;
    case 836u: goto L_08A63DE0;
    case 837u: goto L_08A63E04;
    case 838u: goto L_08A63E1C;
    case 839u: goto L_08A63E38;
    case 840u: goto L_08A63E3C;
    case 841u: goto L_08A63E44;
    case 842u: goto L_08A63E60;
    case 843u: goto L_08A63E68;
    case 844u: goto L_08A63E84;
    case 845u: goto L_08A63E8C;
    case 846u: goto L_08A63EA8;
    case 847u: goto L_08A63EB0;
    case 848u: goto L_08A63ECC;
    case 849u: goto L_08A63ED4;
    case 850u: goto L_08A63EF0;
    case 851u: goto L_08A63EF8;
    case 852u: goto L_08A63F14;
    case 853u: goto L_08A63F1C;
    case 854u: goto L_08A63F38;
    case 855u: goto L_08A63F40;
    case 856u: goto L_08A63F5C;
    case 857u: goto L_08A63F64;
    case 858u: goto L_08A63F80;
    case 859u: goto L_08A63F88;
    case 860u: goto L_08A63FA4;
    case 861u: goto L_08A63FAC;
    case 862u: goto L_08A63FC8;
    case 863u: goto L_08A63FD0;
    case 864u: goto L_08A63FEC;
    case 865u: goto L_08A63FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A60000:
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A60014u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A60014u) goto L_08A60014;
    return;
L_08A60014:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A6003Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6003Cu) goto L_08A6003C;
    return;
L_08A6003C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_08A600EC;
      }
      goto L_08A6004C;
    }
L_08A6004C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17853u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
        goto L_08A600A0;
    }
    goto L_08A60090;
L_08A60090:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08A600B4;
      }
      goto L_08A600A0;
    }
L_08A600A0:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    goto L_08A600B4;
L_08A600B4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A600ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A600ECu) goto L_08A600EC;
    return;
L_08A600EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A600F8;
      }
      goto L_08A600F4;
    }
L_08A600F4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A600F8;
L_08A600F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60110:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(130));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < 201 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A60158;
      }
      goto L_08A60134;
    }
L_08A60134:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6017C;
      }
      goto L_08A60140;
    }
L_08A60140:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A60150u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A60188;
L_08A60150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6017C;
      }
      goto L_08A60158;
    }
L_08A60158:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 202 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6017C;
      }
      goto L_08A60164;
    }
L_08A60164:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A60174u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 503u, 0x08A5EBE8u>(ctx, &aot_mem) && ctx.pc == 0x08A60174u) goto L_08A60174;
    return;
L_08A60174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6017C;
      }
      goto L_08A6017C;
    }
L_08A6017C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60188:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (18493u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A602FC;
      }
      goto L_08A601B8;
    }
L_08A601B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A601C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A601C4u) goto L_08A601C4;
    return;
L_08A601C4:
    ctx.gpr[31] = (0x08A601CCu);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 240u, 0x08A5DA0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A601CCu) goto L_08A601CC;
    return;
L_08A601CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A602C0;
      }
      goto L_08A601F8;
    }
L_08A601F8:
    ctx.gpr[5] = (17302u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A602AC;
      }
      goto L_08A60214;
    }
L_08A60214:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (17327u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6029C;
      }
      goto L_08A60234;
    }
L_08A60234:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60288;
      }
      goto L_08A60244;
    }
L_08A60244:
    ctx.gpr[4] = (15827u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (ctx.gpr[4] | 42501u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60278;
      }
      goto L_08A60264;
    }
L_08A60264:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A60270u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A6078C;
L_08A60270:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602FC;
      }
      goto L_08A60278;
    }
L_08A60278:
    ctx.gpr[31] = (0x08A60280u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A60310;
L_08A60280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602FC;
      }
      goto L_08A60288;
    }
L_08A60288:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A60294u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A60654;
L_08A60294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602FC;
      }
      goto L_08A6029C;
    }
L_08A6029C:
    ctx.gpr[31] = (0x08A602A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A60614;
L_08A602A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602FC;
      }
      goto L_08A602AC;
    }
L_08A602AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A602B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A6052C;
L_08A602B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602FC;
      }
      goto L_08A602C0;
    }
L_08A602C0:
    ctx.gpr[4] = (15827u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (ctx.gpr[4] | 42501u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A602F4;
      }
      goto L_08A602E0;
    }
L_08A602E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A602ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A60364;
L_08A602EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A602FC;
      }
      goto L_08A602F4;
    }
L_08A602F4:
    ctx.gpr[31] = (0x08A602FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A60310;
L_08A602FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60310:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A60328u);
    ctx.gpr[5] = (0u | 20u);
    goto L_08A60BAC;
L_08A60328:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60354;
      }
      goto L_08A60330;
    }
L_08A60330:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6033Cu);
    ctx.gpr[5] = (0u | 75u);
    goto L_08A60894;
L_08A6033C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60354;
      }
      goto L_08A60344;
    }
L_08A60344:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A60354u);
    ctx.gpr[6] = (0u | 29500u);
    goto L_08A609D4;
L_08A60354:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60364:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A60394u);
    ctx.gpr[5] = (0u | 20u);
    goto L_08A60BAC;
L_08A60394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15827u << 16u);
      if (branch_taken) {
          goto L_08A60508;
      }
      goto L_08A6039C;
    }
L_08A6039C:
    ctx.gpr[4] = (ctx.gpr[4] | 42501u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (16152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48754u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A603DC;
    }
    goto L_08A603DC;
L_08A603DC:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A603F4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60C84;
L_08A603F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60508;
      }
      goto L_08A603FC;
    }
L_08A603FC:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A60420u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60894;
L_08A60420:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A60508;
      }
      goto L_08A60428;
    }
L_08A60428:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18020u << 16u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6045C;
      }
      goto L_08A6044C;
    }
L_08A6044C:
    ctx.gpr[4] = (0u | 127u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 22050u);
      if (branch_taken) {
          goto L_08A604B4;
      }
      goto L_08A6045C;
    }
L_08A6045C:
    ctx.fpr[20] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[4] = (17853u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A6049C;
      }
      goto L_08A6048C;
    }
L_08A6048C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08A604B4;
      }
      goto L_08A6049C;
    }
L_08A6049C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16000));
    goto L_08A604B4;
L_08A604B4:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A604C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A60AAC;
L_08A604C4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[26];
        goto L_08A604E4;
    }
    goto L_08A604D4;
L_08A604D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29500));
      if (branch_taken) {
          goto L_08A604F8;
      }
      goto L_08A604E4;
    }
L_08A604E4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29500));
    goto L_08A604F8;
L_08A604F8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60508u);
    ctx.gpr[5] = (0u | 18u);
    goto L_08A609D4;
L_08A60508:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6052C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (17302u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (17110u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A6059Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60BAC;
L_08A6059C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (17150u << 16u);
      if (branch_taken) {
          goto L_08A60600;
      }
      goto L_08A605A4;
    }
L_08A605A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A605C0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60C84;
L_08A605C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60600;
      }
      goto L_08A605C8;
    }
L_08A605C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x08A605D8u);
    ctx.gpr[6] = (0u | 22050u);
    goto L_08A60AAC;
L_08A605D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16784u << 16u);
      if (branch_taken) {
          goto L_08A60600;
      }
      goto L_08A605E0;
    }
L_08A605E0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 44100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A60600u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A609D4;
L_08A60600:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60614:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A6062Cu);
    ctx.gpr[5] = (0u | 127u);
    goto L_08A60BAC;
L_08A6062C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60644;
      }
      goto L_08A60634;
    }
L_08A60634:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[31] = (0x08A60644u);
    ctx.gpr[6] = (0u | 22050u);
    goto L_08A60AAC;
L_08A60644:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60654:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25988)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (17327u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[5] = (17110u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A606BCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60BAC;
L_08A606BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A60774;
      }
      goto L_08A606C4;
    }
L_08A606C4:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A606ECu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60894;
L_08A606EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60774;
      }
      goto L_08A606F4;
    }
L_08A606F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x08A60704u);
    ctx.gpr[6] = (0u | 22050u);
    goto L_08A60AAC;
L_08A60704:
    ctx.gpr[4] = (18020u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_08A6073C;
    }
    goto L_08A6072C;
L_08A6072C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29500));
      if (branch_taken) {
          goto L_08A60750;
      }
      goto L_08A6073C;
    }
L_08A6073C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29500));
    goto L_08A60750;
L_08A60750:
    ctx.gpr[5] = (16784u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A60774u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A609D4;
L_08A60774:
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
L_08A6078C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A607ACu);
    ctx.gpr[5] = (0u | 20u);
    goto L_08A60BAC;
L_08A607AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60880;
      }
      goto L_08A607B4;
    }
L_08A607B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A607C0u);
    ctx.gpr[5] = (0u | 75u);
    goto L_08A60894;
L_08A607C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15827u << 16u);
      if (branch_taken) {
          goto L_08A60880;
      }
      goto L_08A607C8;
    }
L_08A607C8:
    ctx.gpr[4] = (ctx.gpr[4] | 42501u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (16152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48754u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A60808;
    }
    goto L_08A60808;
L_08A60808:
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (17853u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6084C;
      }
      goto L_08A6083C;
    }
L_08A6083C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08A60864;
      }
      goto L_08A6084C;
    }
L_08A6084C:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    goto L_08A60864;
L_08A60864:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A60870u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A60AAC;
L_08A60870:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A60880u);
    ctx.gpr[6] = (0u | 29500u);
    goto L_08A609D4;
L_08A60880:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60894:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A609B8;
      }
      goto L_08A608C4;
    }
L_08A608C4:
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A60934;
      }
      goto L_08A60908;
    }
L_08A60908:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11001)));
    ctx.gpr[6] = (0u | 100u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A60934;
L_08A60934:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60948u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A60948u) goto L_08A60948;
    return;
L_08A60948:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A609B0;
      }
      goto L_08A60958;
    }
L_08A60958:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 211u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[31] = (0x08A60978u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A60DA4;
L_08A60978:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A609B0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A609B0u) goto L_08A609B0;
    return;
L_08A609B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A609BC;
      }
      goto L_08A609B8;
    }
L_08A609B8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A609BC;
L_08A609BC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A609D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17194u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A60A8C;
      }
      goto L_08A60A0C;
    }
L_08A60A0C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A60A20u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A60A20u) goto L_08A60A20;
    return;
L_08A60A20:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A60A84;
      }
      goto L_08A60A30;
    }
L_08A60A30:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 212u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A60A84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A60A84u) goto L_08A60A84;
    return;
L_08A60A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A60A90;
      }
      goto L_08A60A8C;
    }
L_08A60A8C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A60A90;
L_08A60A90:
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
L_08A60AAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A60B8C;
      }
      goto L_08A60AE4;
    }
L_08A60AE4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11001)));
    ctx.gpr[5] = (0u | 100u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08A60B20u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A60B20u) goto L_08A60B20;
    return;
L_08A60B20:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A60B84;
      }
      goto L_08A60B30;
    }
L_08A60B30:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 208u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A60B84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A60B84u) goto L_08A60B84;
    return;
L_08A60B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A60B90;
      }
      goto L_08A60B8C;
    }
L_08A60B8C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A60B90;
L_08A60B90:
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
L_08A60BAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17372u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A60C68;
      }
      goto L_08A60BDC;
    }
L_08A60BDC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A60BF0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A60BF0u) goto L_08A60BF0;
    return;
L_08A60BF0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A60C60;
      }
      goto L_08A60C00;
    }
L_08A60C00:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 207u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 207u);
    ctx.gpr[31] = (0x08A60C28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A60C28u) goto L_08A60C28;
    return;
L_08A60C28:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A60C60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A60C60u) goto L_08A60C60;
    return;
L_08A60C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A60C6C;
      }
      goto L_08A60C68;
    }
L_08A60C68:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A60C6C;
L_08A60C6C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60C84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A60D80;
      }
      goto L_08A60CBC;
    }
L_08A60CBC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A60CD0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A60CD0u) goto L_08A60CD0;
    return;
L_08A60CD0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A60D78;
      }
      goto L_08A60CE0;
    }
L_08A60CE0:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 210u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 210u);
    ctx.gpr[31] = (0x08A60D0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A60D0Cu) goto L_08A60D0C;
    return;
L_08A60D0C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A60D4Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A60D4Cu) goto L_08A60D4C;
    return;
L_08A60D4C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A60D78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A60D78u) goto L_08A60D78;
    return;
L_08A60D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A60D84;
      }
      goto L_08A60D80;
    }
L_08A60D80:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A60D84;
L_08A60D84:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_08A60DA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17963u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 6144u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08A60DEC;
    }
    goto L_08A60DDC;
L_08A60DDC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A60E00;
      }
      goto L_08A60DEC;
    }
L_08A60DEC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22050));
    goto L_08A60E00;
L_08A60E00:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A60E54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08A60E54u) goto L_08A60E54;
    return;
L_08A60E54:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A60E68u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 274u, 0x08A75FBCu>(ctx, &aot_mem) && ctx.pc == 0x08A60E68u) goto L_08A60E68;
    return;
L_08A60E68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60E80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A60EB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 321u, 0x08A6D618u>(ctx, &aot_mem) && ctx.pc == 0x08A60EB4u) goto L_08A60EB4;
    return;
L_08A60EB4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A60EC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 66u, 0x08A744D0u>(ctx, &aot_mem) && ctx.pc == 0x08A60EC8u) goto L_08A60EC8;
    return;
L_08A60EC8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60EDC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A60F08;
      }
      goto L_08A60EE8;
    }
L_08A60EE8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F08;
      }
      goto L_08A60EF4;
    }
L_08A60EF4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17228), ctx.gpr[5]);
    goto L_08A60F08;
L_08A60F08:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60F10:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A60F1C;
      }
      goto L_08A60F18;
    }
L_08A60F18:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2004), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A60F1C;
L_08A60F1C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60F24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A60F84;
      }
      goto L_08A60F4C;
    }
L_08A60F4C:
    ctx.gpr[31] = (0x08A60F54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A60F54u) goto L_08A60F54;
    return;
L_08A60F54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F7C;
      }
      goto L_08A60F60;
    }
L_08A60F60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60F8C;
      }
      goto L_08A60F70;
    }
L_08A60F70:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A60FFC;
      }
      goto L_08A60F7C;
    }
L_08A60F7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FFC;
      }
      goto L_08A60F84;
    }
L_08A60F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FFC;
      }
      goto L_08A60F8C;
    }
L_08A60F8C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A60F98;
    }
L_08A60F98:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A60FFC;
      }
      goto L_08A60FA4;
    }
L_08A60FA4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7268)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A60FF8;
      }
      goto L_08A60FB8;
    }
L_08A60FB8:
    ctx.gpr[6] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FF0;
      }
      goto L_08A60FC4;
    }
L_08A60FC4:
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16608));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60FE8;
      }
      goto L_08A60FDC;
    }
L_08A60FDC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A60FFC;
      }
      goto L_08A60FE8;
    }
L_08A60FE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A60FFC;
      }
      goto L_08A60FF0;
    }
L_08A60FF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7268), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A60FFC;
      }
      goto L_08A60FF8;
    }
L_08A60FF8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(0u));
    goto L_08A60FFC;
L_08A60FFC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61010:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08A61028;
    }
    goto L_08A61018;
L_08A61018:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61070;
      }
      goto L_08A61028;
    }
L_08A61028:
    ctx.gpr[9] = (ctx.gpr[9] & 3u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A61070;
      }
      goto L_08A61054;
    }
L_08A61054:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A61070;
      }
      goto L_08A61068;
    }
L_08A61068:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08A61070;
L_08A61070:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61078:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A612F8;
      }
      goto L_08A6109C;
    }
L_08A6109C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24264)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A610B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2532u);
    ctx.gpr[31] = (0x08A610D0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A610D0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A610D4;
L_08A610D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6130C;
      }
      goto L_08A610DC;
    }
L_08A610DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2523u);
    ctx.gpr[31] = (0x08A610F8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A610F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A61100;
    }
L_08A61100:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2530u);
    ctx.gpr[31] = (0x08A6111Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A6111C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A61124;
    }
L_08A61124:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2526u);
    ctx.gpr[31] = (0x08A61140u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A61140:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A61148;
    }
L_08A61148:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61164u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61164:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A6116C;
    }
L_08A6116C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61188u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A61190;
    }
L_08A61190:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2534u);
    ctx.gpr[31] = (0x08A611ACu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A611AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A611B4;
    }
L_08A611B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A611D0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A611D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A611D8;
    }
L_08A611D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2537u);
    ctx.gpr[31] = (0x08A611F4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A611F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A611FC;
    }
L_08A611FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2539u);
    ctx.gpr[31] = (0x08A61218u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A61220;
    }
L_08A61220:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6123Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A6123C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A61244;
    }
L_08A61244:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61260u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A61268;
    }
L_08A61268:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61284u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A6128C;
    }
L_08A6128C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A612A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A612A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A612B0;
    }
L_08A612B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2541u);
    ctx.gpr[31] = (0x08A612CCu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A612CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A612D4;
    }
L_08A612D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A612F0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A612F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A610D4;
      }
      goto L_08A612F8;
    }
L_08A612F8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A6130Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6130Cu) goto L_08A6130C;
    return;
L_08A6130C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61318:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-110));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(47) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A61538;
      }
      goto L_08A61340;
    }
L_08A61340:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-110));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24424)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6135C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 766u);
    ctx.gpr[31] = (0x08A61374u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_08A61378;
L_08A61378:
    ctx.gpr[5] = (0u | 6u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A613A4;
    }
L_08A613A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A613AC;
    }
L_08A613AC:
    ctx.gpr[31] = (0x08A613B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A613B4u) goto L_08A613B4;
    return;
L_08A613B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A613E0;
      }
      goto L_08A613C0;
    }
L_08A613C0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 768u);
    ctx.gpr[31] = (0x08A613D8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A613D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61378;
      }
      goto L_08A613E0;
    }
L_08A613E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A613E8;
    }
L_08A613E8:
    ctx.gpr[31] = (0x08A613F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 198u, 0x089D596Cu>(ctx, &aot_mem) && ctx.pc == 0x08A613F0u) goto L_08A613F0;
    return;
L_08A613F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A61444;
      }
      goto L_08A61404;
    }
L_08A61404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A61444;
      }
      goto L_08A61414;
    }
L_08A61414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A61444;
      }
      goto L_08A61424;
    }
L_08A61424:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 771u);
    ctx.gpr[31] = (0x08A6143Cu);
    ctx.gpr[8] = (0u | 6u);
    goto L_08A61010;
L_08A6143C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6144C;
      }
      goto L_08A61444;
    }
L_08A61444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A6144C;
    }
L_08A6144C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61378;
      }
      goto L_08A61454;
    }
L_08A61454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A6145C;
    }
L_08A6145C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 777u);
    ctx.gpr[31] = (0x08A61474u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61474:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61378;
      }
      goto L_08A6147C;
    }
L_08A6147C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 779u);
    ctx.gpr[31] = (0x08A61494u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61378;
      }
      goto L_08A6149C;
    }
L_08A6149C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A614A4;
    }
L_08A614A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A614AC;
    }
L_08A614AC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11048)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A614E4;
      }
      goto L_08A614BC;
    }
L_08A614BC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11048)));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11048), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11048)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A614F8;
      }
      goto L_08A614DC;
    }
L_08A614DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61500;
      }
      goto L_08A614E4;
    }
L_08A614E4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11048), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A614F8;
    }
L_08A614F8:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11048), static_cast<std::uint8_t>(0u));
    goto L_08A61500;
L_08A61500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A61508;
    }
L_08A61508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A61510;
    }
L_08A61510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61548;
      }
      goto L_08A61518;
    }
L_08A61518:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 782u);
    ctx.gpr[31] = (0x08A61530u);
    ctx.gpr[8] = (0u | 6u);
    goto L_08A61010;
L_08A61530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61378;
      }
      goto L_08A61538;
    }
L_08A61538:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A61548u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61548u) goto L_08A61548;
    return;
L_08A61548:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6155C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (0u | 142u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 129u);
      if (branch_taken) {
          goto L_08A615B4;
      }
      goto L_08A61580;
    }
L_08A61580:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 112u);
      if (branch_taken) {
          goto L_08A615BC;
      }
      goto L_08A61588;
    }
L_08A61588:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A615E0;
      }
      goto L_08A61590;
    }
L_08A61590:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 4189u);
    ctx.gpr[31] = (0x08A615A8u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A615A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A615F8;
      }
      goto L_08A615B4;
    }
L_08A615B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61618;
      }
      goto L_08A615BC;
    }
L_08A615BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 4191u);
    ctx.gpr[31] = (0x08A615D4u);
    ctx.gpr[8] = (0u | 5u);
    goto L_08A61010;
L_08A615D4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A615F8;
      }
      goto L_08A615E0;
    }
L_08A615E0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A615F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A615F0u) goto L_08A615F0;
    return;
L_08A615F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61618;
      }
      goto L_08A615F8;
    }
L_08A615F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A61608;
      }
      goto L_08A61600;
    }
L_08A61600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A61608;
      }
      goto L_08A61608;
    }
L_08A61608:
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A61618;
L_08A61618:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61628:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-129));
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A616B4;
      }
      goto L_08A61650;
    }
L_08A61650:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24616)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A616DC;
      }
      goto L_08A61670;
    }
L_08A61670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A616DC;
      }
      goto L_08A61678;
    }
L_08A61678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A616DC;
      }
      goto L_08A61680;
    }
L_08A61680:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A616DC;
      }
      goto L_08A61688;
    }
L_08A61688:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1390u);
    ctx.gpr[31] = (0x08A616A0u);
    ctx.gpr[8] = (0u | 5u);
    goto L_08A61010;
L_08A616A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08A616C8;
      }
      goto L_08A616AC;
    }
L_08A616AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A616C8;
      }
      goto L_08A616B4;
    }
L_08A616B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A616C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A616C0u) goto L_08A616C0;
    return;
L_08A616C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A616DC;
      }
      goto L_08A616C8;
    }
L_08A616C8:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A616DC;
L_08A616DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A616EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A616FCu);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A616FCu) goto L_08A616FC;
    return;
L_08A616FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 141 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 142 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A61774;
      }
      goto L_08A6172C;
    }
L_08A6172C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 140 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6175C;
      }
      goto L_08A61738;
    }
L_08A61738:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 318u);
    ctx.gpr[31] = (0x08A61750u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A61750:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6179C;
      }
      goto L_08A6175C;
    }
L_08A6175C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A6176Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A6176Cu) goto L_08A6176C;
    return;
L_08A6176C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A617B8;
      }
      goto L_08A61774;
    }
L_08A61774:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6175C;
      }
      goto L_08A6177C;
    }
L_08A6177C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 314u);
    ctx.gpr[31] = (0x08A61794u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A61794:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6179C;
L_08A6179C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A617AC;
      }
      goto L_08A617A4;
    }
L_08A617A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A617AC;
      }
      goto L_08A617AC;
    }
L_08A617AC:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A617B8;
L_08A617B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A617C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A617D8u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A617D8u) goto L_08A617D8;
    return;
L_08A617D8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A617E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A61A1C;
      }
      goto L_08A61808;
    }
L_08A61808:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24688)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61820:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3143u);
    ctx.gpr[31] = (0x08A6183Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A6183C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A61840;
L_08A61840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61A30;
      }
      goto L_08A61848;
    }
L_08A61848:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3148u);
    ctx.gpr[31] = (0x08A61864u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A61864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A6186C;
    }
L_08A6186C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3138u);
    ctx.gpr[31] = (0x08A61888u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A61890;
    }
L_08A61890:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3127u);
    ctx.gpr[31] = (0x08A618ACu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A618AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A618B4;
    }
L_08A618B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3134u);
    ctx.gpr[31] = (0x08A618D0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A618D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A618D8;
    }
L_08A618D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3130u);
    ctx.gpr[31] = (0x08A618F4u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A618F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A618FC;
    }
L_08A618FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3136u);
    ctx.gpr[31] = (0x08A61918u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A61920;
    }
L_08A61920:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3140u);
    ctx.gpr[31] = (0x08A6193Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A6193C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A61944;
    }
L_08A61944:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61960u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A61968;
    }
L_08A61968:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61984u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A6198C;
    }
L_08A6198C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3145u);
    ctx.gpr[31] = (0x08A619A8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A619A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A619B0;
    }
L_08A619B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A619CCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A619CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A619D4;
    }
L_08A619D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A619F0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A619F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A619F8;
    }
L_08A619F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61A14u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61840;
      }
      goto L_08A61A1C;
    }
L_08A61A1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A61A30u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61A30u) goto L_08A61A30;
    return;
L_08A61A30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61A3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A61C4C;
      }
      goto L_08A61A60;
    }
L_08A61A60:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24848)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61A78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 905u);
    ctx.gpr[31] = (0x08A61A94u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61A94:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A61A98;
L_08A61A98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61C60;
      }
      goto L_08A61AA0;
    }
L_08A61AA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 909u);
    ctx.gpr[31] = (0x08A61ABCu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61AC4;
    }
L_08A61AC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 911u);
    ctx.gpr[31] = (0x08A61AE0u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61AE8;
    }
L_08A61AE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 916u);
    ctx.gpr[31] = (0x08A61B04u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61B0C;
    }
L_08A61B0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 898u);
    ctx.gpr[31] = (0x08A61B28u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61B28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61B30;
    }
L_08A61B30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 901u);
    ctx.gpr[31] = (0x08A61B4Cu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A61B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61B54;
    }
L_08A61B54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 907u);
    ctx.gpr[31] = (0x08A61B70u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61B70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61B78;
    }
L_08A61B78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61B94u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61B94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61B9C;
    }
L_08A61B9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61BB8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61BC0;
    }
L_08A61BC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 914u);
    ctx.gpr[31] = (0x08A61BDCu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61BDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61BE4;
    }
L_08A61BE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61C00u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61C00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61C08;
    }
L_08A61C08:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61C18;
    }
L_08A61C18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 919u);
    ctx.gpr[31] = (0x08A61C34u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A61C34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61C3C;
    }
L_08A61C3C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61A98;
      }
      goto L_08A61C4C;
    }
L_08A61C4C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A61C60u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61C60u) goto L_08A61C60;
    return;
L_08A61C60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A61EC4;
      }
      goto L_08A61C90;
    }
L_08A61C90:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25008)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61CA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 936u);
    ctx.gpr[31] = (0x08A61CC4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61CC4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A61CC8;
L_08A61CC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61ED8;
      }
      goto L_08A61CD0;
    }
L_08A61CD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 941u);
    ctx.gpr[31] = (0x08A61CECu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A61CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61CF4;
    }
L_08A61CF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 931u);
    ctx.gpr[31] = (0x08A61D10u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61D18;
    }
L_08A61D18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 920u);
    ctx.gpr[31] = (0x08A61D34u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61D3C;
    }
L_08A61D3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 927u);
    ctx.gpr[31] = (0x08A61D58u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61D60;
    }
L_08A61D60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 923u);
    ctx.gpr[31] = (0x08A61D7Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61D84;
    }
L_08A61D84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 929u);
    ctx.gpr[31] = (0x08A61DA0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61DA8;
    }
L_08A61DA8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61DB8;
    }
L_08A61DB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 933u);
    ctx.gpr[31] = (0x08A61DD4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61DDC;
    }
L_08A61DDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61DF8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61E00;
    }
L_08A61E00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61E1Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61E24;
    }
L_08A61E24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 938u);
    ctx.gpr[31] = (0x08A61E40u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61E48;
    }
L_08A61E48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61E64u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61E64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61E6C;
    }
L_08A61E6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61E88u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61E88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61E90;
    }
L_08A61E90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61EACu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A61EAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61EB4;
    }
L_08A61EB4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61CC8;
      }
      goto L_08A61EC4;
    }
L_08A61EC4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A61ED8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A61ED8u) goto L_08A61ED8;
    return;
L_08A61ED8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61EE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6212C;
      }
      goto L_08A61F08;
    }
L_08A61F08:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25168)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61F20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2555u);
    ctx.gpr[31] = (0x08A61F3Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61F3C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A61F40;
L_08A61F40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62140;
      }
      goto L_08A61F48;
    }
L_08A61F48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2545u);
    ctx.gpr[31] = (0x08A61F64u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A61F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A61F6C;
    }
L_08A61F6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2558u);
    ctx.gpr[31] = (0x08A61F88u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A61F90;
    }
L_08A61F90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2553u);
    ctx.gpr[31] = (0x08A61FACu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61FAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A61FB4;
    }
L_08A61FB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2542u);
    ctx.gpr[31] = (0x08A61FD0u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A61FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A61FD8;
    }
L_08A61FD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2549u);
    ctx.gpr[31] = (0x08A61FF4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A61FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A61FFC;
    }
L_08A61FFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2551u);
    ctx.gpr[31] = (0x08A62018u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62018:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A62020;
    }
L_08A62020:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6203Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A6203C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A62044;
    }
L_08A62044:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2560u);
    ctx.gpr[31] = (0x08A62060u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A62068;
    }
L_08A62068:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62084u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A6208C;
    }
L_08A6208C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A620A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A620A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A620B0;
    }
L_08A620B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A620CCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A620CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A620D4;
    }
L_08A620D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A620F0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A620F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A620F8;
    }
L_08A620F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2563u);
    ctx.gpr[31] = (0x08A62114u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A62114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A6211C;
    }
L_08A6211C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61F40;
      }
      goto L_08A6212C;
    }
L_08A6212C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62140u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A62140u) goto L_08A62140;
    return;
L_08A62140:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6214C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A623A4;
      }
      goto L_08A62170;
    }
L_08A62170:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25328)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62188:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2578u);
    ctx.gpr[31] = (0x08A621A4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A621A4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A621A8;
L_08A621A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A623B8;
      }
      goto L_08A621B0;
    }
L_08A621B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2569u);
    ctx.gpr[31] = (0x08A621CCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A621CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A621D4;
    }
L_08A621D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2576u);
    ctx.gpr[31] = (0x08A621F0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A621F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A621F8;
    }
L_08A621F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2566u);
    ctx.gpr[31] = (0x08A62214u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A6221C;
    }
L_08A6221C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2572u);
    ctx.gpr[31] = (0x08A62238u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A62240;
    }
L_08A62240:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2574u);
    ctx.gpr[31] = (0x08A6225Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A6225C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A62264;
    }
L_08A62264:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62280u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62280:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A62288;
    }
L_08A62288:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A622A4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A622A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A622AC;
    }
L_08A622AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2581u);
    ctx.gpr[31] = (0x08A622C8u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A622C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A622D0;
    }
L_08A622D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2583u);
    ctx.gpr[31] = (0x08A622ECu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A622EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A622F4;
    }
L_08A622F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62310u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A62318;
    }
L_08A62318:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62334u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62334:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A6233C;
    }
L_08A6233C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62358u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A62360;
    }
L_08A62360:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A62370;
    }
L_08A62370:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2586u);
    ctx.gpr[31] = (0x08A6238Cu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A6238C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A62394;
    }
L_08A62394:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A621A8;
      }
      goto L_08A623A4;
    }
L_08A623A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A623B8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A623B8u) goto L_08A623B8;
    return;
L_08A623B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A623C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(38) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6257C;
      }
      goto L_08A623E8;
    }
L_08A623E8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25488)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62400:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1340u);
    ctx.gpr[31] = (0x08A6241Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A6241C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A62420;
L_08A62420:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62590;
      }
      goto L_08A62428;
    }
L_08A62428:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1334u);
    ctx.gpr[31] = (0x08A62444u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A6244C;
    }
L_08A6244C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1323u);
    ctx.gpr[31] = (0x08A62468u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62468:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A62470;
    }
L_08A62470:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1330u);
    ctx.gpr[31] = (0x08A6248Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A6248C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A62494;
    }
L_08A62494:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1332u);
    ctx.gpr[31] = (0x08A624B0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A624B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A624B8;
    }
L_08A624B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1336u);
    ctx.gpr[31] = (0x08A624D4u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A624D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A624DC;
    }
L_08A624DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A624F8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A624F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A62500;
    }
L_08A62500:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1342u);
    ctx.gpr[31] = (0x08A6251Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A6251C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A62524;
    }
L_08A62524:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62540u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A62548;
    }
L_08A62548:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A62558;
    }
L_08A62558:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1345u);
    ctx.gpr[31] = (0x08A62574u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A62574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62420;
      }
      goto L_08A6257C;
    }
L_08A6257C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62590u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A62590u) goto L_08A62590;
    return;
L_08A62590:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6259C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A627D4;
      }
      goto L_08A625C0;
    }
L_08A625C0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25640)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A625D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1389u);
    ctx.gpr[31] = (0x08A625F4u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A625F4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A625F8;
L_08A625F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A627E8;
      }
      goto L_08A62600;
    }
L_08A62600:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1381u);
    ctx.gpr[31] = (0x08A6261Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A6261C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A62624;
    }
L_08A62624:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1379u);
    ctx.gpr[31] = (0x08A62640u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A62648;
    }
L_08A62648:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1368u);
    ctx.gpr[31] = (0x08A62664u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62664:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A6266C;
    }
L_08A6266C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1375u);
    ctx.gpr[31] = (0x08A62688u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A62690;
    }
L_08A62690:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1371u);
    ctx.gpr[31] = (0x08A626ACu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A626AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A626B4;
    }
L_08A626B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1377u);
    ctx.gpr[31] = (0x08A626D0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A626D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A626D8;
    }
L_08A626D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A626F4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A626F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A626FC;
    }
L_08A626FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1384u);
    ctx.gpr[31] = (0x08A62718u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A62720;
    }
L_08A62720:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1386u);
    ctx.gpr[31] = (0x08A6273Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A6273C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A62744;
    }
L_08A62744:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62760u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A62768;
    }
L_08A62768:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62784u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A6278C;
    }
L_08A6278C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A627A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A627A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A627B0;
    }
L_08A627B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A627CCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A627CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A625F8;
      }
      goto L_08A627D4;
    }
L_08A627D4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A627E8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A627E8u) goto L_08A627E8;
    return;
L_08A627E8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A627F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A629D0;
      }
      goto L_08A62818;
    }
L_08A62818:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62830:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1415u);
    ctx.gpr[31] = (0x08A6284Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A6284C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A62850;
L_08A62850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A629E4;
      }
      goto L_08A62858;
    }
L_08A62858:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1417u);
    ctx.gpr[31] = (0x08A62874u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62874:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A6287C;
    }
L_08A6287C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1420u);
    ctx.gpr[31] = (0x08A62898u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A628A0;
    }
L_08A628A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1404u);
    ctx.gpr[31] = (0x08A628BCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A628BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A628C4;
    }
L_08A628C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1411u);
    ctx.gpr[31] = (0x08A628E0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A628E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A628E8;
    }
L_08A628E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1407u);
    ctx.gpr[31] = (0x08A62904u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A62904:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A6290C;
    }
L_08A6290C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1413u);
    ctx.gpr[31] = (0x08A62928u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62928:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A62930;
    }
L_08A62930:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6294Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A6294C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A62954;
    }
L_08A62954:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62970u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A62978;
    }
L_08A62978:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62994u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62994:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A6299C;
    }
L_08A6299C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1422u);
    ctx.gpr[31] = (0x08A629B8u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A629B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A629C0;
    }
L_08A629C0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62850;
      }
      goto L_08A629D0;
    }
L_08A629D0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A629E4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A629E4u) goto L_08A629E4;
    return;
L_08A629E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A629F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A62C14;
      }
      goto L_08A62A14;
    }
L_08A62A14:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25960)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62A2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1436u);
    ctx.gpr[31] = (0x08A62A48u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62A48:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A62A4C;
L_08A62A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62C28;
      }
      goto L_08A62A54;
    }
L_08A62A54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1434u);
    ctx.gpr[31] = (0x08A62A70u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62A78;
    }
L_08A62A78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1426u);
    ctx.gpr[31] = (0x08A62A94u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62A9C;
    }
L_08A62A9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1431u);
    ctx.gpr[31] = (0x08A62AB8u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A62AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62AC0;
    }
L_08A62AC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1428u);
    ctx.gpr[31] = (0x08A62ADCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62AE4;
    }
L_08A62AE4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1432u);
    ctx.gpr[31] = (0x08A62B00u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62B08;
    }
L_08A62B08:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62B24u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62B24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62B2C;
    }
L_08A62B2C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1438u);
    ctx.gpr[31] = (0x08A62B48u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62B48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62B50;
    }
L_08A62B50:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1440u);
    ctx.gpr[31] = (0x08A62B6Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62B6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62B74;
    }
L_08A62B74:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62B90u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62B90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62B98;
    }
L_08A62B98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62BB4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62BB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62BBC;
    }
L_08A62BBC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62BCC;
    }
L_08A62BCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1443u);
    ctx.gpr[31] = (0x08A62BE8u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A62BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62BF0;
    }
L_08A62BF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62C0Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62A4C;
      }
      goto L_08A62C14;
    }
L_08A62C14:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62C28u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A62C28u) goto L_08A62C28;
    return;
L_08A62C28:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62C34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A62E68;
      }
      goto L_08A62C58;
    }
L_08A62C58:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26120)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62C70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1454u);
    ctx.gpr[31] = (0x08A62C8Cu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A62C8C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A62C90;
L_08A62C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62E7C;
      }
      goto L_08A62C98;
    }
L_08A62C98:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1444u);
    ctx.gpr[31] = (0x08A62CB4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62CB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62CBC;
    }
L_08A62CBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1449u);
    ctx.gpr[31] = (0x08A62CD8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62CD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62CE0;
    }
L_08A62CE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1447u);
    ctx.gpr[31] = (0x08A62CFCu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62CFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62D04;
    }
L_08A62D04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1452u);
    ctx.gpr[31] = (0x08A62D20u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62D28;
    }
L_08A62D28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62D44u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62D44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62D4C;
    }
L_08A62D4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1455u);
    ctx.gpr[31] = (0x08A62D68u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62D68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62D70;
    }
L_08A62D70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62D8Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62D8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62D94;
    }
L_08A62D94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1458u);
    ctx.gpr[31] = (0x08A62DB0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62DB8;
    }
L_08A62DB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62DD4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62DDC;
    }
L_08A62DDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1460u);
    ctx.gpr[31] = (0x08A62DF8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62E00;
    }
L_08A62E00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62E1Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62E24;
    }
L_08A62E24:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62E34;
    }
L_08A62E34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1463u);
    ctx.gpr[31] = (0x08A62E50u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A62E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62E58;
    }
L_08A62E58:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62C90;
      }
      goto L_08A62E68;
    }
L_08A62E68:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62E7Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A62E7Cu) goto L_08A62E7C;
    return;
L_08A62E7C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62E88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A630BC;
      }
      goto L_08A62EAC;
    }
L_08A62EAC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26280)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62EC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1367u);
    ctx.gpr[31] = (0x08A62EE0u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A62EE0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A62EE4;
L_08A62EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A630D0;
      }
      goto L_08A62EEC;
    }
L_08A62EEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1349u);
    ctx.gpr[31] = (0x08A62F08u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A62F08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A62F10;
    }
L_08A62F10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1357u);
    ctx.gpr[31] = (0x08A62F2Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62F2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A62F34;
    }
L_08A62F34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1346u);
    ctx.gpr[31] = (0x08A62F50u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A62F58;
    }
L_08A62F58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1353u);
    ctx.gpr[31] = (0x08A62F74u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A62F7C;
    }
L_08A62F7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1355u);
    ctx.gpr[31] = (0x08A62F98u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A62F98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A62FA0;
    }
L_08A62FA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1359u);
    ctx.gpr[31] = (0x08A62FBCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A62FBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A62FC4;
    }
L_08A62FC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62FE0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A62FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A62FE8;
    }
L_08A62FE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1362u);
    ctx.gpr[31] = (0x08A63004u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63004:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A6300C;
    }
L_08A6300C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1364u);
    ctx.gpr[31] = (0x08A63028u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63028:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A63030;
    }
L_08A63030:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6304Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A6304C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A63054;
    }
L_08A63054:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63070u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A63078;
    }
L_08A63078:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63094u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A6309C;
    }
L_08A6309C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A630AC;
    }
L_08A630AC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62EE4;
      }
      goto L_08A630BC;
    }
L_08A630BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A630D0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A630D0u) goto L_08A630D0;
    return;
L_08A630D0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A630DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A632DC;
      }
      goto L_08A63100;
    }
L_08A63100:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26440)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63118:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3217u);
    ctx.gpr[31] = (0x08A63134u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A63134:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63138;
L_08A63138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A632F0;
      }
      goto L_08A63140;
    }
L_08A63140:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3213u);
    ctx.gpr[31] = (0x08A6315Cu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A6315C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A63164;
    }
L_08A63164:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3207u);
    ctx.gpr[31] = (0x08A63180u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63180:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A63188;
    }
L_08A63188:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3203u);
    ctx.gpr[31] = (0x08A631A4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A631A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A631AC;
    }
L_08A631AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3199u);
    ctx.gpr[31] = (0x08A631C8u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A631C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A631D0;
    }
L_08A631D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3196u);
    ctx.gpr[31] = (0x08A631ECu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A631EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A631F4;
    }
L_08A631F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3205u);
    ctx.gpr[31] = (0x08A63210u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63210:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A63218;
    }
L_08A63218:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3209u);
    ctx.gpr[31] = (0x08A63234u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A6323C;
    }
L_08A6323C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3211u);
    ctx.gpr[31] = (0x08A63258u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63258:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A63260;
    }
L_08A63260:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6327Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A6327C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A63284;
    }
L_08A63284:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A632A0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A632A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A632A8;
    }
L_08A632A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3193u);
    ctx.gpr[31] = (0x08A632C4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A632C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A632CC;
    }
L_08A632CC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63138;
      }
      goto L_08A632DC;
    }
L_08A632DC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A632F0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A632F0u) goto L_08A632F0;
    return;
L_08A632F0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A632FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A634E8;
      }
      goto L_08A63320;
    }
L_08A63320:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63338:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3190u);
    ctx.gpr[31] = (0x08A63354u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63354:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63358;
L_08A63358:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A634FC;
      }
      goto L_08A63360;
    }
L_08A63360:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3179u);
    ctx.gpr[31] = (0x08A6337Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A6337C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A63384;
    }
L_08A63384:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3183u);
    ctx.gpr[31] = (0x08A633A0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A633A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A633A8;
    }
L_08A633A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3185u);
    ctx.gpr[31] = (0x08A633C4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A633C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A633CC;
    }
L_08A633CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3175u);
    ctx.gpr[31] = (0x08A633E8u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A633E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A633F0;
    }
L_08A633F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3172u);
    ctx.gpr[31] = (0x08A6340Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A6340C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A63414;
    }
L_08A63414:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3181u);
    ctx.gpr[31] = (0x08A63430u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A63438;
    }
L_08A63438:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3188u);
    ctx.gpr[31] = (0x08A63454u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A6345C;
    }
L_08A6345C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63478u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A63480;
    }
L_08A63480:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6349Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A6349C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A634A4;
    }
L_08A634A4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A634B4;
    }
L_08A634B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3193u);
    ctx.gpr[31] = (0x08A634D0u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A634D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A634D8;
    }
L_08A634D8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63358;
      }
      goto L_08A634E8;
    }
L_08A634E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A634FCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A634FCu) goto L_08A634FC;
    return;
L_08A634FC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63508:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6373C;
      }
      goto L_08A6352C;
    }
L_08A6352C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26760)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63544:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3237u);
    ctx.gpr[31] = (0x08A63560u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63560:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63564;
L_08A63564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63750;
      }
      goto L_08A6356C;
    }
L_08A6356C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3235u);
    ctx.gpr[31] = (0x08A63588u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63588:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A63590;
    }
L_08A63590:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3226u);
    ctx.gpr[31] = (0x08A635ACu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A635AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A635B4;
    }
L_08A635B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3230u);
    ctx.gpr[31] = (0x08A635D0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A635D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A635D8;
    }
L_08A635D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3220u);
    ctx.gpr[31] = (0x08A635F4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A635F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A635FC;
    }
L_08A635FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3223u);
    ctx.gpr[31] = (0x08A63618u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63618:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A63620;
    }
L_08A63620:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3228u);
    ctx.gpr[31] = (0x08A6363Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A6363C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A63644;
    }
L_08A63644:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63660u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A63668;
    }
L_08A63668:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3232u);
    ctx.gpr[31] = (0x08A63684u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A6368C;
    }
L_08A6368C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A636A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A636A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A636B0;
    }
L_08A636B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A636CCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A636CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A636D4;
    }
L_08A636D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A636F0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A636F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A636F8;
    }
L_08A636F8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A63708;
    }
L_08A63708:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63724u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63724:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A6372C;
    }
L_08A6372C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63564;
      }
      goto L_08A6373C;
    }
L_08A6373C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A63750u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63750u) goto L_08A63750;
    return;
L_08A63750:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6375C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6395C;
      }
      goto L_08A63780;
    }
L_08A63780:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26920)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63798:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3257u);
    ctx.gpr[31] = (0x08A637B4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A637B4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A637B8;
L_08A637B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63970;
      }
      goto L_08A637C0;
    }
L_08A637C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3259u);
    ctx.gpr[31] = (0x08A637DCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A637DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A637E4;
    }
L_08A637E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3251u);
    ctx.gpr[31] = (0x08A63800u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A63808;
    }
L_08A63808:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3247u);
    ctx.gpr[31] = (0x08A63824u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A6382C;
    }
L_08A6382C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3240u);
    ctx.gpr[31] = (0x08A63848u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63848:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A63850;
    }
L_08A63850:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3243u);
    ctx.gpr[31] = (0x08A6386Cu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A6386C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A63874;
    }
L_08A63874:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3249u);
    ctx.gpr[31] = (0x08A63890u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A63898;
    }
L_08A63898:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3253u);
    ctx.gpr[31] = (0x08A638B4u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A638B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A638BC;
    }
L_08A638BC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A638D8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A638D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A638E0;
    }
L_08A638E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A638FCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A638FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A63904;
    }
L_08A63904:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A63914;
    }
L_08A63914:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3262u);
    ctx.gpr[31] = (0x08A63930u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A63930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A63938;
    }
L_08A63938:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63954u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A637B8;
      }
      goto L_08A6395C;
    }
L_08A6395C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A63970u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63970u) goto L_08A63970;
    return;
L_08A63970:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6397C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A63B7C;
      }
      goto L_08A639A0;
    }
L_08A639A0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A639B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3281u);
    ctx.gpr[31] = (0x08A639D4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A639D4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A639D8;
L_08A639D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63B90;
      }
      goto L_08A639E0;
    }
L_08A639E0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3279u);
    ctx.gpr[31] = (0x08A639FCu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A639FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63A04;
    }
L_08A63A04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3274u);
    ctx.gpr[31] = (0x08A63A20u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63A20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63A28;
    }
L_08A63A28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3270u);
    ctx.gpr[31] = (0x08A63A44u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63A44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63A4C;
    }
L_08A63A4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3263u);
    ctx.gpr[31] = (0x08A63A68u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63A70;
    }
L_08A63A70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3266u);
    ctx.gpr[31] = (0x08A63A8Cu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A63A8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63A94;
    }
L_08A63A94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3272u);
    ctx.gpr[31] = (0x08A63AB0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63AB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63AB8;
    }
L_08A63AB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3276u);
    ctx.gpr[31] = (0x08A63AD4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63AD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63ADC;
    }
L_08A63ADC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63AF8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63AF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63B00;
    }
L_08A63B00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63B1Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63B24;
    }
L_08A63B24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3284u);
    ctx.gpr[31] = (0x08A63B40u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A63B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63B48;
    }
L_08A63B48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63B64u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63B64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63B6C;
    }
L_08A63B6C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A639D8;
      }
      goto L_08A63B7C;
    }
L_08A63B7C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A63B90u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 207u, 0x08A6CD04u>(ctx, &aot_mem) && ctx.pc == 0x08A63B90u) goto L_08A63B90;
    return;
L_08A63B90:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63B9C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A63DC0;
      }
      goto L_08A63BC0;
    }
L_08A63BC0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63BD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 953u);
    ctx.gpr[31] = (0x08A63BF4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63BF4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63BF8;
L_08A63BF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63DD4;
      }
      goto L_08A63C00;
    }
L_08A63C00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 944u);
    ctx.gpr[31] = (0x08A63C1Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63C24;
    }
L_08A63C24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 957u);
    ctx.gpr[31] = (0x08A63C40u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63C48;
    }
L_08A63C48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 965u);
    ctx.gpr[31] = (0x08A63C64u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A63C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63C6C;
    }
L_08A63C6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 955u);
    ctx.gpr[31] = (0x08A63C88u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63C88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63C90;
    }
L_08A63C90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 951u);
    ctx.gpr[31] = (0x08A63CACu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63CAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63CB4;
    }
L_08A63CB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 947u);
    ctx.gpr[31] = (0x08A63CD0u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A63CD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63CD8;
    }
L_08A63CD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63CF4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63CFC;
    }
L_08A63CFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 960u);
    ctx.gpr[31] = (0x08A63D18u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63D18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63D20;
    }
L_08A63D20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 962u);
    ctx.gpr[31] = (0x08A63D3Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63D44;
    }
L_08A63D44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63D60u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63D60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63D68;
    }
L_08A63D68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63D84u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63D84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63D8C;
    }
L_08A63D8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63DA8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63DA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63DB0;
    }
L_08A63DB0:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63BF8;
      }
      goto L_08A63DC0;
    }
L_08A63DC0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A63DD4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 194u, 0x08A6CC1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A63DD4u) goto L_08A63DD4;
    return;
L_08A63DD4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 9u, 0x08A64084u>(ctx, &aot_mem); return;
      }
      goto L_08A63E04;
    }
L_08A63E04:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27400)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63E1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1012u);
    ctx.gpr[31] = (0x08A63E38u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A61010;
L_08A63E38:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63E3C;
L_08A63E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 10u, 0x08A64098u>(ctx, &aot_mem); return;
      }
      goto L_08A63E44;
    }
L_08A63E44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1007u);
    ctx.gpr[31] = (0x08A63E60u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63E60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63E68;
    }
L_08A63E68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 994u);
    ctx.gpr[31] = (0x08A63E84u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A61010;
L_08A63E84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63E8C;
    }
L_08A63E8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1002u);
    ctx.gpr[31] = (0x08A63EA8u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63EA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63EB0;
    }
L_08A63EB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 991u);
    ctx.gpr[31] = (0x08A63ECCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63ED4;
    }
L_08A63ED4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 998u);
    ctx.gpr[31] = (0x08A63EF0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63EF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63EF8;
    }
L_08A63EF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1000u);
    ctx.gpr[31] = (0x08A63F14u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A61010;
L_08A63F14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63F1C;
    }
L_08A63F1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63F38u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63F38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63F40;
    }
L_08A63F40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1004u);
    ctx.gpr[31] = (0x08A63F5Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63F5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63F64;
    }
L_08A63F64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63F80u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63F80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63F88;
    }
L_08A63F88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63FA4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63FA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63FAC;
    }
L_08A63FAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63FC8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A61010;
L_08A63FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63FD0;
    }
L_08A63FD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1009u);
    ctx.gpr[31] = (0x08A63FECu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A61010;
L_08A63FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63E3C;
      }
      goto L_08A63FF4;
    }
L_08A63FF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = 0x08A64000u; return;
}

void recomp_unit_0151(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0151_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_151(Runtime &runtime) {
    runtime.register_generated_unit(151u, 0x08A60000u, 16384u, &recomp_unit_0151, &recomp_unit_0151_entry);
    runtime.register_function(0x08A60000u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60014u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6003Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6004Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60090u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60110u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60134u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60140u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60150u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60158u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60164u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60174u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6017Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60188u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60214u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60234u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60244u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60264u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60270u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60278u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60280u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60288u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60294u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6029Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60310u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60328u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60330u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6033Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60344u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60354u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60364u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60394u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6039Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60420u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60428u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6044Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6045Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6048Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6049Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60508u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6052Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6059Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60600u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60614u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6062Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60634u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60644u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60654u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60704u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6072Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6073Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60750u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60774u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6078Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60808u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6083Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6084Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60864u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60870u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60880u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60894u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60908u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60934u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60948u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60958u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60978u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61010u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61018u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61028u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61054u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61068u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61070u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61078u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6109Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61100u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6111Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61124u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61140u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61148u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61164u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6116Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61188u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61190u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61218u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61220u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6123Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61244u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61260u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61268u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61284u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6128Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6130Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61318u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61340u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6135Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61374u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61378u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61404u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61414u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61424u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6143Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61444u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6144Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61454u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6145Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61474u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6147Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61494u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6149Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61500u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61508u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61510u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61518u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61530u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61538u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61548u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6155Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61580u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61588u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61590u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61600u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61608u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61618u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61628u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61650u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61668u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61670u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61678u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61680u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61688u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61708u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6172Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61738u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61750u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6175Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6176Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61774u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6177Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61794u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6179Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61808u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61820u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6183Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61840u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61848u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61864u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6186Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61888u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61890u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61918u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61920u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6193Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61944u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61960u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61968u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61984u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6198Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61ABCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61ED8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62018u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62020u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6203Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62044u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62060u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62068u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62084u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6208Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62114u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6211Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6212Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62140u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6214Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62170u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62188u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62214u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6221Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62238u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62240u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6225Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62264u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62280u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62288u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62310u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62318u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62334u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6233Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62358u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62360u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62370u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6238Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62394u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62400u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6241Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62420u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62428u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62444u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6244Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62468u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62470u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6248Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62494u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62500u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6251Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62524u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62540u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62548u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62558u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62574u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6257Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62590u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6259Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62600u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6261Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62624u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62640u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62648u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62664u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6266Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62688u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62690u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62718u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62720u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6273Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62744u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62760u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62768u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62784u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6278Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62818u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62830u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6284Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62850u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62858u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62874u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6287Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62898u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62904u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6290Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62928u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62930u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6294Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62954u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62970u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62978u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62994u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6299Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62ADCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63004u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6300Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63028u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63030u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6304Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63054u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63070u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63078u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63094u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6309Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63100u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63118u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63134u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63138u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63140u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6315Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63164u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63180u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63188u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63210u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63218u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63234u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6323Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63258u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63260u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6327Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63284u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63320u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63338u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63354u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63358u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63360u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6337Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63384u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6340Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63414u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63430u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63438u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63454u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6345Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63478u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63480u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6349Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63508u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6352Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63544u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63560u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63564u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6356Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63588u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63590u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63618u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63620u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6363Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63644u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63660u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63668u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63684u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6368Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63708u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63724u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6372Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6373Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63750u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6375Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63780u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63798u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63800u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63808u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63824u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6382Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63848u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63850u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6386Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63874u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63890u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63898u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63904u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63914u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63930u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63938u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63954u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6395Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63970u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6397Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63ADCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63ECCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63ED4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FF4u, &recomp_unit_0151, "recomp_unit_0151");
}
} // namespace psprecomp
