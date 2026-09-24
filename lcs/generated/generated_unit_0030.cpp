#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0030[4095] = {
    1, 0, 0, 0, 2, 3, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 0, 0, 0, 0, 7, 0, 0, 8, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    11, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 15, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 0, 0, 21, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 24,
    0, 0, 25, 0, 0, 26, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 0, 0,
    0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 42, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 45, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 52, 0, 0, 53, 0, 0, 0, 0, 0, 0,
    54, 0, 55, 0, 56, 0, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 0, 60, 0, 0,
    0, 0, 0, 61, 0, 62, 63, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 66, 67,
    0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 0, 71, 0, 0, 0, 72, 0, 0, 0, 73, 0, 74, 0, 0, 75, 0, 0, 0, 0, 0, 0, 0,
    0, 76, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 82, 0, 0, 83, 0, 0, 84, 0, 85, 0, 0, 86, 0,
    0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 90, 0, 0, 91, 0, 0, 92,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 95, 0, 96, 0, 0, 0, 97, 0, 98, 0, 0, 0, 99, 0, 0, 0, 0,
    0, 100, 0, 0, 0, 0, 101, 0, 102, 103, 0, 104, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 107, 0, 108, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 112, 0, 113, 0, 0, 0, 114, 115, 0, 116, 0, 0, 0, 117, 118, 0, 119, 0,
    0, 0, 120, 0, 121, 0, 122, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0,
    129, 130, 0, 0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 134, 0, 135, 0, 0, 0, 0, 0, 136, 0, 0, 0, 0,
    137, 0, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 144, 0, 145, 0, 0,
    146, 0, 147, 0, 148, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0, 0, 0,
    0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 160, 0, 0, 161, 0, 0, 162, 0, 163, 0,
    0, 0, 164, 0, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 167, 0, 168, 169, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 0,
    0, 172, 0, 0, 0, 173, 0, 0, 174, 0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0, 0, 0, 0, 0, 185, 0, 186, 0, 0, 187, 0, 188,
    0, 0, 0, 189, 0, 190, 0, 0, 191, 0, 192, 0, 193, 194, 0, 195, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0,
    0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 0,
    0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 209, 0, 0, 0, 210, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 211, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215, 0, 0,
    0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 219, 0, 220, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 221, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223, 0, 0, 224, 0, 225, 0, 0, 0, 226, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 227,
    0, 0, 0, 0, 0, 228, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0,
    0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240,
    0, 241, 0, 0, 0, 0, 0, 242, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 248, 249, 0, 250, 0, 0, 0,
    251, 252, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0,
    0, 258, 259, 0, 260, 0, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 264,
    0, 265, 0, 266, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 268, 0, 0, 269, 0, 270, 271, 0, 272, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 0, 280, 0, 0, 281, 0, 0, 282,
    0, 0, 283, 284, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0,
    0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 298, 299, 0, 300, 0, 0, 0, 301, 0, 0, 0, 0, 0, 302, 0,
    303, 0, 0, 0, 304, 305, 0, 306, 0, 0, 0, 307, 308, 0, 309, 0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 0, 0, 0, 0, 312,
    0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 314, 315, 0, 316, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 0, 326, 0, 327, 328, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0,
    0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    335, 0, 0, 336, 337, 0, 338, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0, 0, 0,
    0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0,
    0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 351, 352, 0, 353, 0, 0, 0, 354, 0, 0, 355, 0, 356, 0,
    357, 0, 358, 0, 359, 0, 0, 0, 360, 361, 0, 362, 0, 0, 0, 363, 364, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0,
    0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 0, 370, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 383, 0, 0, 0, 384, 0, 0, 0,
    0, 385, 0, 0, 386, 0, 0, 0, 0, 0, 387, 0, 388, 0, 389, 0, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 392, 0, 393, 0, 0, 0,
    0, 0, 394, 0, 395, 0, 0, 0, 396, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 401, 0, 0, 402, 0, 403, 0,
    0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 416,
    0, 417, 418, 0, 419, 0, 420, 0, 0, 0, 0, 0, 421, 0, 422, 0, 0, 423, 424, 0, 425, 0, 0, 426, 427, 0, 428, 0, 0, 0, 0, 0,
    0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 434, 0, 435, 0, 0, 0, 0,
    0, 0, 436, 0, 0, 0, 0, 0, 0, 437, 0, 438, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 440, 0, 441, 0, 442, 0, 0, 0, 0, 0,
    0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445, 0, 446, 447, 0, 448, 0, 0,
    0, 0, 449, 0, 450, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 453, 0, 0, 454, 0, 0, 455, 0, 0, 0, 0, 0, 456, 0, 0,
    457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 0, 462, 0, 0, 463, 464, 0, 465, 0, 0, 0, 0, 0, 0, 466,
    0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0,
    0, 0, 471, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 0,
    0, 0, 477, 0, 478, 479, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 482, 0, 483, 0, 0, 484, 485, 0, 486, 0, 0, 487, 488, 0, 489,
    0, 0, 0, 0, 0, 0, 0, 0, 490, 0, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 495, 0,
    496, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    0, 0, 501, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    505, 0, 0, 506, 0, 507, 508, 0, 509, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0,
    515, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 518, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 521, 0, 522, 0, 0, 0, 0, 0,
    0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0,
    0, 0, 0, 0, 528, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 533, 0, 0,
    0, 0, 0, 0, 534, 0, 535, 536, 0, 537, 0, 0, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 543, 0, 0, 544, 545, 0, 546, 0,
    0, 547, 548, 0, 549, 0, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0,
    0, 0, 554, 555, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 565, 0, 0, 566, 0, 567, 568, 0, 569, 0, 0, 0, 0, 570, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 0, 0,
    0, 574, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 580, 581, 0, 582, 0,
    0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0,
    0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 590, 0, 0, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0,
    0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 595, 596, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 601, 0, 602, 0, 603, 0, 0, 604,
    605, 0, 606, 0, 0, 607, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 0, 0, 613, 0,
    0, 0, 0, 0, 0, 0, 614, 615, 0, 616, 0, 617, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 620, 0, 0, 0, 621, 0, 622, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 0, 627, 0, 628, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0, 0, 631,
    0, 0, 632, 0, 633, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 638, 0, 639, 0, 640, 0, 0, 641, 0, 0, 0, 0, 0, 642, 0, 0, 643,
    0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649,
    0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 651, 0, 652, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 655, 0,
    0, 0, 0, 0, 656, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0,
    0, 0, 0, 662, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0, 0, 0, 0, 0, 0, 668, 0, 0,
    0, 669, 0, 670, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 674,
    0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 0, 0,
    0, 681, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0,
    0, 0, 0, 0, 687, 0, 688, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 690, 0, 0, 0, 0, 0, 691, 0, 0, 0, 0, 0, 692, 693, 0,
    0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 698, 699, 0, 700,
    0, 0, 0, 0, 701, 0, 0, 0, 0, 702, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 705, 0, 706, 0, 707, 0, 0, 0, 0, 0, 0,
    0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0,
    712, 0, 0, 713, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 717, 0, 0, 718, 0, 719, 0,
    720, 0, 721, 0, 0, 722, 0, 0, 723, 0, 724, 0, 725, 0, 726, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0,
    0, 731, 0, 732, 0, 733, 0, 0, 734, 0, 0, 0, 735, 0, 736, 0, 0, 0, 737, 0, 738, 0, 739, 0, 0, 0, 740, 0, 0, 0, 0, 0,
    741, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 0, 0, 0, 747, 0,
    748, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751, 0, 0, 0, 0, 752, 0, 0, 0, 0, 753, 0, 754, 755, 0, 756, 0, 0, 757, 0,
    0, 758, 0, 759, 0, 760, 0, 761, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 764, 0, 765, 0, 0, 0, 766, 767, 0, 768, 0, 0, 0, 0,
    0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 773, 774, 0, 775, 0, 776, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 783, 0, 784, 0,
    0, 785, 0, 0, 786, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0, 792, 0, 0,
    793, 0, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 797, 0, 798, 0, 799, 0, 800, 0, 0, 801, 0, 802, 0, 803, 0, 804, 0, 805, 0, 806,
    0, 807, 0, 0, 0, 0, 808, 0, 0, 0, 0, 0, 0, 0, 809, 0, 810, 0, 811, 0, 0, 812, 0, 0, 0, 813, 0, 814, 0, 0, 0, 815,
    0, 816, 0, 817, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 0, 0, 823, 0,
    0, 0, 0, 824, 0, 825, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0, 0, 0, 830, 0, 831, 832, 0,
    833, 0, 0, 834, 0, 0, 835, 0, 836, 0, 837, 0, 838, 0, 0, 0, 0, 0, 839, 0, 0, 840, 841, 0, 842, 0, 0, 843, 844, 0, 845, 0,
    0, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 0, 0, 848, 0, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 0, 850, 851, 0, 852,
    0, 853, 0, 0, 0, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 0, 0, 856, 0, 0, 0, 857, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 859, 0, 0, 860, 0, 861, 0, 0, 862, 0, 0,
    863, 0, 864, 0, 0, 0, 0, 865, 0, 0, 0, 0, 866, 0, 0, 0, 867, 0, 0, 868, 0, 869, 0, 0, 870, 0, 871, 0, 872, 0, 873, 0,
    874, 0, 875, 0, 0, 0, 0, 876, 0, 0, 0, 0, 0, 0, 0, 877, 0, 878, 0, 879, 0, 0, 880, 0, 0, 0, 881, 0, 882, 0, 0, 0,
    883, 0, 884, 0, 885, 0, 0, 0, 0, 0, 0, 886, 0, 0, 0, 0, 887, 0, 0, 0, 0, 888, 0, 0, 0, 0, 889, 0, 0, 0, 0, 890,
    0, 0, 0, 0, 891, 0, 0, 0, 0, 892, 0, 893, 0, 0, 0, 0, 894, 0, 0, 0, 0, 895, 0, 0, 0, 0, 896, 0, 0, 0, 0, 897,
    898, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 900, 0, 0, 0, 0, 0, 901, 0, 0, 0, 0, 902, 0, 0, 0, 0, 0, 0, 0, 903,
};
void recomp_unit_0030_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0887C004u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0030[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0887C004;
    case 2u: goto L_0887C014;
    case 3u: goto L_0887C018;
    case 4u: goto L_0887C01C;
    case 5u: goto L_0887C044;
    case 6u: goto L_0887C050;
    case 7u: goto L_0887C068;
    case 8u: goto L_0887C074;
    case 9u: goto L_0887C09C;
    case 10u: goto L_0887C0B4;
    case 11u: goto L_0887C104;
    case 12u: goto L_0887C110;
    case 13u: goto L_0887C11C;
    case 14u: goto L_0887C128;
    case 15u: goto L_0887C134;
    case 16u: goto L_0887C144;
    case 17u: goto L_0887C14C;
    case 18u: goto L_0887C158;
    case 19u: goto L_0887C160;
    case 20u: goto L_0887C168;
    case 21u: goto L_0887C178;
    case 22u: goto L_0887C1A4;
    case 23u: goto L_0887C1F4;
    case 24u: goto L_0887C200;
    case 25u: goto L_0887C20C;
    case 26u: goto L_0887C218;
    case 27u: goto L_0887C230;
    case 28u: goto L_0887C238;
    case 29u: goto L_0887C240;
    case 30u: goto L_0887C250;
    case 31u: goto L_0887C27C;
    case 32u: goto L_0887C2D4;
    case 33u: goto L_0887C2E0;
    case 34u: goto L_0887C2EC;
    case 35u: goto L_0887C2F8;
    case 36u: goto L_0887C318;
    case 37u: goto L_0887C320;
    case 38u: goto L_0887C328;
    case 39u: goto L_0887C338;
    case 40u: goto L_0887C368;
    case 41u: goto L_0887C3C8;
    case 42u: goto L_0887C3D4;
    case 43u: goto L_0887C3E0;
    case 44u: goto L_0887C3EC;
    case 45u: goto L_0887C410;
    case 46u: goto L_0887C418;
    case 47u: goto L_0887C420;
    case 48u: goto L_0887C430;
    case 49u: goto L_0887C464;
    case 50u: goto L_0887C4C4;
    case 51u: goto L_0887C4D0;
    case 52u: goto L_0887C4DC;
    case 53u: goto L_0887C4E8;
    case 54u: goto L_0887C504;
    case 55u: goto L_0887C50C;
    case 56u: goto L_0887C514;
    case 57u: goto L_0887C524;
    case 58u: goto L_0887C554;
    case 59u: goto L_0887C564;
    case 60u: goto L_0887C578;
    case 61u: goto L_0887C590;
    case 62u: goto L_0887C598;
    case 63u: goto L_0887C59C;
    case 64u: goto L_0887C5A4;
    case 65u: goto L_0887C5F0;
    case 66u: goto L_0887C5FC;
    case 67u: goto L_0887C600;
    case 68u: goto L_0887C610;
    case 69u: goto L_0887C620;
    case 70u: goto L_0887C628;
    case 71u: goto L_0887C630;
    case 72u: goto L_0887C640;
    case 73u: goto L_0887C650;
    case 74u: goto L_0887C658;
    case 75u: goto L_0887C664;
    case 76u: goto L_0887C688;
    case 77u: goto L_0887C68C;
    case 78u: goto L_0887C6A0;
    case 79u: goto L_0887C6B4;
    case 80u: goto L_0887C6C0;
    case 81u: goto L_0887C6C8;
    case 82u: goto L_0887C6D0;
    case 83u: goto L_0887C6DC;
    case 84u: goto L_0887C6E8;
    case 85u: goto L_0887C6F0;
    case 86u: goto L_0887C6FC;
    case 87u: goto L_0887C718;
    case 88u: goto L_0887C720;
    case 89u: goto L_0887C734;
    case 90u: goto L_0887C768;
    case 91u: goto L_0887C774;
    case 92u: goto L_0887C780;
    case 93u: goto L_0887C7AC;
    case 94u: goto L_0887C7B4;
    case 95u: goto L_0887C7C0;
    case 96u: goto L_0887C7C8;
    case 97u: goto L_0887C7D8;
    case 98u: goto L_0887C7E0;
    case 99u: goto L_0887C7F0;
    case 100u: goto L_0887C808;
    case 101u: goto L_0887C81C;
    case 102u: goto L_0887C824;
    case 103u: goto L_0887C828;
    case 104u: goto L_0887C830;
    case 105u: goto L_0887C850;
    case 106u: goto L_0887C85C;
    case 107u: goto L_0887C888;
    case 108u: goto L_0887C890;
    case 109u: goto L_0887C89C;
    case 110u: goto L_0887C8A8;
    case 111u: goto L_0887C8B8;
    case 112u: goto L_0887C8BC;
    case 113u: goto L_0887C8C4;
    case 114u: goto L_0887C8D4;
    case 115u: goto L_0887C8D8;
    case 116u: goto L_0887C8E0;
    case 117u: goto L_0887C8F0;
    case 118u: goto L_0887C8F4;
    case 119u: goto L_0887C8FC;
    case 120u: goto L_0887C90C;
    case 121u: goto L_0887C914;
    case 122u: goto L_0887C91C;
    case 123u: goto L_0887C924;
    case 124u: goto L_0887C934;
    case 125u: goto L_0887C93C;
    case 126u: goto L_0887C950;
    case 127u: goto L_0887C968;
    case 128u: goto L_0887C97C;
    case 129u: goto L_0887C984;
    case 130u: goto L_0887C988;
    case 131u: goto L_0887C998;
    case 132u: goto L_0887C9C4;
    case 133u: goto L_0887C9CC;
    case 134u: goto L_0887C9D0;
    case 135u: goto L_0887C9D8;
    case 136u: goto L_0887C9F0;
    case 137u: goto L_0887CA04;
    case 138u: goto L_0887CA10;
    case 139u: goto L_0887CA1C;
    case 140u: goto L_0887CA24;
    case 141u: goto L_0887CA50;
    case 142u: goto L_0887CA58;
    case 143u: goto L_0887CA68;
    case 144u: goto L_0887CA70;
    case 145u: goto L_0887CA78;
    case 146u: goto L_0887CA84;
    case 147u: goto L_0887CA8C;
    case 148u: goto L_0887CA94;
    case 149u: goto L_0887CA9C;
    case 150u: goto L_0887CAA4;
    case 151u: goto L_0887CAC0;
    case 152u: goto L_0887CAC8;
    case 153u: goto L_0887CAD8;
    case 154u: goto L_0887CAEC;
    case 155u: goto L_0887CB0C;
    case 156u: goto L_0887CB1C;
    case 157u: goto L_0887CB34;
    case 158u: goto L_0887CB44;
    case 159u: goto L_0887CB50;
    case 160u: goto L_0887CB5C;
    case 161u: goto L_0887CB68;
    case 162u: goto L_0887CB74;
    case 163u: goto L_0887CB7C;
    case 164u: goto L_0887CB8C;
    case 165u: goto L_0887CB98;
    case 166u: goto L_0887CBB4;
    case 167u: goto L_0887CBC8;
    case 168u: goto L_0887CBD0;
    case 169u: goto L_0887CBD4;
    case 170u: goto L_0887CBE4;
    case 171u: goto L_0887CBF4;
    case 172u: goto L_0887CC08;
    case 173u: goto L_0887CC18;
    case 174u: goto L_0887CC24;
    case 175u: goto L_0887CC34;
    case 176u: goto L_0887CC40;
    case 177u: goto L_0887CC48;
    case 178u: goto L_0887CC50;
    case 179u: goto L_0887CC64;
    case 180u: goto L_0887CCA8;
    case 181u: goto L_0887CCB0;
    case 182u: goto L_0887CCB8;
    case 183u: goto L_0887CCC0;
    case 184u: goto L_0887CCCC;
    case 185u: goto L_0887CCE4;
    case 186u: goto L_0887CCEC;
    case 187u: goto L_0887CCF8;
    case 188u: goto L_0887CD00;
    case 189u: goto L_0887CD10;
    case 190u: goto L_0887CD18;
    case 191u: goto L_0887CD24;
    case 192u: goto L_0887CD2C;
    case 193u: goto L_0887CD34;
    case 194u: goto L_0887CD38;
    case 195u: goto L_0887CD40;
    case 196u: goto L_0887CD50;
    case 197u: goto L_0887CD60;
    case 198u: goto L_0887CD7C;
    case 199u: goto L_0887CD90;
    case 200u: goto L_0887CDA0;
    case 201u: goto L_0887CDB8;
    case 202u: goto L_0887CDE0;
    case 203u: goto L_0887CDF0;
    case 204u: goto L_0887CDF8;
    case 205u: goto L_0887CE08;
    case 206u: goto L_0887CE4C;
    case 207u: goto L_0887CE54;
    case 208u: goto L_0887CF4C;
    case 209u: goto L_0887CF50;
    case 210u: goto L_0887CF60;
    case 211u: goto L_0887CF90;
    case 212u: goto L_0887CFB0;
    case 213u: goto L_0887CFB8;
    case 214u: goto L_0887CFEC;
    case 215u: goto L_0887CFF8;
    case 216u: goto L_0887D014;
    case 217u: goto L_0887D02C;
    case 218u: goto L_0887D04C;
    case 219u: goto L_0887D188;
    case 220u: goto L_0887D190;
    case 221u: goto L_0887D1C8;
    case 222u: goto L_0887D1D0;
    case 223u: goto L_0887D230;
    case 224u: goto L_0887D23C;
    case 225u: goto L_0887D244;
    case 226u: goto L_0887D254;
    case 227u: goto L_0887D280;
    case 228u: goto L_0887D298;
    case 229u: goto L_0887D2A0;
    case 230u: goto L_0887D2A8;
    case 231u: goto L_0887D2B0;
    case 232u: goto L_0887D2B8;
    case 233u: goto L_0887D2C0;
    case 234u: goto L_0887D2D4;
    case 235u: goto L_0887D2F0;
    case 236u: goto L_0887D308;
    case 237u: goto L_0887D31C;
    case 238u: goto L_0887D348;
    case 239u: goto L_0887D368;
    case 240u: goto L_0887D380;
    case 241u: goto L_0887D388;
    case 242u: goto L_0887D3A0;
    case 243u: goto L_0887D3A4;
    case 244u: goto L_0887D3B0;
    case 245u: goto L_0887D3B8;
    case 246u: goto L_0887D3D0;
    case 247u: goto L_0887D3D8;
    case 248u: goto L_0887D3E8;
    case 249u: goto L_0887D3EC;
    case 250u: goto L_0887D3F4;
    case 251u: goto L_0887D404;
    case 252u: goto L_0887D408;
    case 253u: goto L_0887D410;
    case 254u: goto L_0887D434;
    case 255u: goto L_0887D43C;
    case 256u: goto L_0887D454;
    case 257u: goto L_0887D468;
    case 258u: goto L_0887D488;
    case 259u: goto L_0887D48C;
    case 260u: goto L_0887D494;
    case 261u: goto L_0887D4B4;
    case 262u: goto L_0887D4CC;
    case 263u: goto L_0887D4F0;
    case 264u: goto L_0887D500;
    case 265u: goto L_0887D508;
    case 266u: goto L_0887D510;
    case 267u: goto L_0887D54C;
    case 268u: goto L_0887D594;
    case 269u: goto L_0887D5A0;
    case 270u: goto L_0887D5A8;
    case 271u: goto L_0887D5AC;
    case 272u: goto L_0887D5B4;
    case 273u: goto L_0887D5C8;
    case 274u: goto L_0887D5D0;
    case 275u: goto L_0887D5E4;
    case 276u: goto L_0887D618;
    case 277u: goto L_0887D62C;
    case 278u: goto L_0887D644;
    case 279u: goto L_0887D650;
    case 280u: goto L_0887D668;
    case 281u: goto L_0887D674;
    case 282u: goto L_0887D680;
    case 283u: goto L_0887D68C;
    case 284u: goto L_0887D690;
    case 285u: goto L_0887D698;
    case 286u: goto L_0887D6B4;
    case 287u: goto L_0887D6D0;
    case 288u: goto L_0887D6EC;
    case 289u: goto L_0887D708;
    case 290u: goto L_0887D724;
    case 291u: goto L_0887D740;
    case 292u: goto L_0887D748;
    case 293u: goto L_0887D750;
    case 294u: goto L_0887D76C;
    case 295u: goto L_0887D788;
    case 296u: goto L_0887D7A4;
    case 297u: goto L_0887D7C0;
    case 298u: goto L_0887D7C8;
    case 299u: goto L_0887D7CC;
    case 300u: goto L_0887D7D4;
    case 301u: goto L_0887D7E4;
    case 302u: goto L_0887D7FC;
    case 303u: goto L_0887D804;
    case 304u: goto L_0887D814;
    case 305u: goto L_0887D818;
    case 306u: goto L_0887D820;
    case 307u: goto L_0887D830;
    case 308u: goto L_0887D834;
    case 309u: goto L_0887D83C;
    case 310u: goto L_0887D860;
    case 311u: goto L_0887D868;
    case 312u: goto L_0887D880;
    case 313u: goto L_0887D894;
    case 314u: goto L_0887D8B4;
    case 315u: goto L_0887D8B8;
    case 316u: goto L_0887D8C0;
    case 317u: goto L_0887D8C8;
    case 318u: goto L_0887D8FC;
    case 319u: goto L_0887D904;
    case 320u: goto L_0887D934;
    case 321u: goto L_0887D944;
    case 322u: goto L_0887D94C;
    case 323u: goto L_0887D954;
    case 324u: goto L_0887D980;
    case 325u: goto L_0887D9C0;
    case 326u: goto L_0887D9CC;
    case 327u: goto L_0887D9D4;
    case 328u: goto L_0887D9D8;
    case 329u: goto L_0887D9E0;
    case 330u: goto L_0887D9F4;
    case 331u: goto L_0887D9FC;
    case 332u: goto L_0887DA10;
    case 333u: goto L_0887DA44;
    case 334u: goto L_0887DA58;
    case 335u: goto L_0887DA84;
    case 336u: goto L_0887DA90;
    case 337u: goto L_0887DA94;
    case 338u: goto L_0887DA9C;
    case 339u: goto L_0887DAB8;
    case 340u: goto L_0887DAD4;
    case 341u: goto L_0887DAF0;
    case 342u: goto L_0887DB0C;
    case 343u: goto L_0887DB28;
    case 344u: goto L_0887DB44;
    case 345u: goto L_0887DB4C;
    case 346u: goto L_0887DB54;
    case 347u: goto L_0887DB70;
    case 348u: goto L_0887DB8C;
    case 349u: goto L_0887DBA8;
    case 350u: goto L_0887DBC4;
    case 351u: goto L_0887DBCC;
    case 352u: goto L_0887DBD0;
    case 353u: goto L_0887DBD8;
    case 354u: goto L_0887DBE8;
    case 355u: goto L_0887DBF4;
    case 356u: goto L_0887DBFC;
    case 357u: goto L_0887DC04;
    case 358u: goto L_0887DC0C;
    case 359u: goto L_0887DC14;
    case 360u: goto L_0887DC24;
    case 361u: goto L_0887DC28;
    case 362u: goto L_0887DC30;
    case 363u: goto L_0887DC40;
    case 364u: goto L_0887DC44;
    case 365u: goto L_0887DC4C;
    case 366u: goto L_0887DC70;
    case 367u: goto L_0887DC78;
    case 368u: goto L_0887DC90;
    case 369u: goto L_0887DCA4;
    case 370u: goto L_0887DCC4;
    case 371u: goto L_0887DCC8;
    case 372u: goto L_0887DCD0;
    case 373u: goto L_0887DCD8;
    case 374u: goto L_0887DD0C;
    case 375u: goto L_0887DD14;
    case 376u: goto L_0887DD48;
    case 377u: goto L_0887DD58;
    case 378u: goto L_0887DD60;
    case 379u: goto L_0887DD68;
    case 380u: goto L_0887DD90;
    case 381u: goto L_0887DDD0;
    case 382u: goto L_0887DDDC;
    case 383u: goto L_0887DDE4;
    case 384u: goto L_0887DDF4;
    case 385u: goto L_0887DE08;
    case 386u: goto L_0887DE14;
    case 387u: goto L_0887DE2C;
    case 388u: goto L_0887DE34;
    case 389u: goto L_0887DE3C;
    case 390u: goto L_0887DE48;
    case 391u: goto L_0887DE60;
    case 392u: goto L_0887DE6C;
    case 393u: goto L_0887DE74;
    case 394u: goto L_0887DE8C;
    case 395u: goto L_0887DE94;
    case 396u: goto L_0887DEA4;
    case 397u: goto L_0887DEB4;
    case 398u: goto L_0887DEBC;
    case 399u: goto L_0887DEC4;
    case 400u: goto L_0887DED0;
    case 401u: goto L_0887DEE8;
    case 402u: goto L_0887DEF4;
    case 403u: goto L_0887DEFC;
    case 404u: goto L_0887DF08;
    case 405u: goto L_0887DF1C;
    case 406u: goto L_0887DF34;
    case 407u: goto L_0887DF4C;
    case 408u: goto L_0887DF64;
    case 409u: goto L_0887DF7C;
    case 410u: goto L_0887DF94;
    case 411u: goto L_0887DF9C;
    case 412u: goto L_0887DFA4;
    case 413u: goto L_0887DFB8;
    case 414u: goto L_0887DFD0;
    case 415u: goto L_0887DFE8;
    case 416u: goto L_0887E000;
    case 417u: goto L_0887E008;
    case 418u: goto L_0887E00C;
    case 419u: goto L_0887E014;
    case 420u: goto L_0887E01C;
    case 421u: goto L_0887E034;
    case 422u: goto L_0887E03C;
    case 423u: goto L_0887E048;
    case 424u: goto L_0887E04C;
    case 425u: goto L_0887E054;
    case 426u: goto L_0887E060;
    case 427u: goto L_0887E064;
    case 428u: goto L_0887E06C;
    case 429u: goto L_0887E090;
    case 430u: goto L_0887E098;
    case 431u: goto L_0887E0B0;
    case 432u: goto L_0887E0C4;
    case 433u: goto L_0887E0E4;
    case 434u: goto L_0887E0E8;
    case 435u: goto L_0887E0F0;
    case 436u: goto L_0887E10C;
    case 437u: goto L_0887E128;
    case 438u: goto L_0887E130;
    case 439u: goto L_0887E14C;
    case 440u: goto L_0887E15C;
    case 441u: goto L_0887E164;
    case 442u: goto L_0887E16C;
    case 443u: goto L_0887E190;
    case 444u: goto L_0887E1D8;
    case 445u: goto L_0887E1E4;
    case 446u: goto L_0887E1EC;
    case 447u: goto L_0887E1F0;
    case 448u: goto L_0887E1F8;
    case 449u: goto L_0887E20C;
    case 450u: goto L_0887E214;
    case 451u: goto L_0887E228;
    case 452u: goto L_0887E238;
    case 453u: goto L_0887E248;
    case 454u: goto L_0887E254;
    case 455u: goto L_0887E260;
    case 456u: goto L_0887E278;
    case 457u: goto L_0887E284;
    case 458u: goto L_0887E290;
    case 459u: goto L_0887E29C;
    case 460u: goto L_0887E2B4;
    case 461u: goto L_0887E2C0;
    case 462u: goto L_0887E2CC;
    case 463u: goto L_0887E2D8;
    case 464u: goto L_0887E2DC;
    case 465u: goto L_0887E2E4;
    case 466u: goto L_0887E300;
    case 467u: goto L_0887E31C;
    case 468u: goto L_0887E338;
    case 469u: goto L_0887E354;
    case 470u: goto L_0887E370;
    case 471u: goto L_0887E38C;
    case 472u: goto L_0887E394;
    case 473u: goto L_0887E39C;
    case 474u: goto L_0887E3B8;
    case 475u: goto L_0887E3D4;
    case 476u: goto L_0887E3F0;
    case 477u: goto L_0887E40C;
    case 478u: goto L_0887E414;
    case 479u: goto L_0887E418;
    case 480u: goto L_0887E420;
    case 481u: goto L_0887E430;
    case 482u: goto L_0887E448;
    case 483u: goto L_0887E450;
    case 484u: goto L_0887E45C;
    case 485u: goto L_0887E460;
    case 486u: goto L_0887E468;
    case 487u: goto L_0887E474;
    case 488u: goto L_0887E478;
    case 489u: goto L_0887E480;
    case 490u: goto L_0887E4A4;
    case 491u: goto L_0887E4AC;
    case 492u: goto L_0887E4C4;
    case 493u: goto L_0887E4D8;
    case 494u: goto L_0887E4F8;
    case 495u: goto L_0887E4FC;
    case 496u: goto L_0887E504;
    case 497u: goto L_0887E50C;
    case 498u: goto L_0887E540;
    case 499u: goto L_0887E548;
    case 500u: goto L_0887E57C;
    case 501u: goto L_0887E58C;
    case 502u: goto L_0887E594;
    case 503u: goto L_0887E59C;
    case 504u: goto L_0887E5C4;
    case 505u: goto L_0887E604;
    case 506u: goto L_0887E610;
    case 507u: goto L_0887E618;
    case 508u: goto L_0887E61C;
    case 509u: goto L_0887E624;
    case 510u: goto L_0887E638;
    case 511u: goto L_0887E640;
    case 512u: goto L_0887E654;
    case 513u: goto L_0887E664;
    case 514u: goto L_0887E678;
    case 515u: goto L_0887E684;
    case 516u: goto L_0887E690;
    case 517u: goto L_0887E6A8;
    case 518u: goto L_0887E6B4;
    case 519u: goto L_0887E6D4;
    case 520u: goto L_0887E6E0;
    case 521u: goto L_0887E6E4;
    case 522u: goto L_0887E6EC;
    case 523u: goto L_0887E708;
    case 524u: goto L_0887E724;
    case 525u: goto L_0887E740;
    case 526u: goto L_0887E75C;
    case 527u: goto L_0887E778;
    case 528u: goto L_0887E794;
    case 529u: goto L_0887E79C;
    case 530u: goto L_0887E7A4;
    case 531u: goto L_0887E7C0;
    case 532u: goto L_0887E7DC;
    case 533u: goto L_0887E7F8;
    case 534u: goto L_0887E814;
    case 535u: goto L_0887E81C;
    case 536u: goto L_0887E820;
    case 537u: goto L_0887E828;
    case 538u: goto L_0887E838;
    case 539u: goto L_0887E844;
    case 540u: goto L_0887E84C;
    case 541u: goto L_0887E854;
    case 542u: goto L_0887E85C;
    case 543u: goto L_0887E864;
    case 544u: goto L_0887E870;
    case 545u: goto L_0887E874;
    case 546u: goto L_0887E87C;
    case 547u: goto L_0887E888;
    case 548u: goto L_0887E88C;
    case 549u: goto L_0887E894;
    case 550u: goto L_0887E8B8;
    case 551u: goto L_0887E8C0;
    case 552u: goto L_0887E8D8;
    case 553u: goto L_0887E8EC;
    case 554u: goto L_0887E90C;
    case 555u: goto L_0887E910;
    case 556u: goto L_0887E918;
    case 557u: goto L_0887E920;
    case 558u: goto L_0887E954;
    case 559u: goto L_0887E95C;
    case 560u: goto L_0887E990;
    case 561u: goto L_0887E9A0;
    case 562u: goto L_0887E9A8;
    case 563u: goto L_0887E9B0;
    case 564u: goto L_0887E9D4;
    case 565u: goto L_0887EA14;
    case 566u: goto L_0887EA20;
    case 567u: goto L_0887EA28;
    case 568u: goto L_0887EA2C;
    case 569u: goto L_0887EA34;
    case 570u: goto L_0887EA48;
    case 571u: goto L_0887EA50;
    case 572u: goto L_0887EA64;
    case 573u: goto L_0887EA74;
    case 574u: goto L_0887EA88;
    case 575u: goto L_0887EA94;
    case 576u: goto L_0887EAA0;
    case 577u: goto L_0887EAB8;
    case 578u: goto L_0887EAC4;
    case 579u: goto L_0887EAE4;
    case 580u: goto L_0887EAF0;
    case 581u: goto L_0887EAF4;
    case 582u: goto L_0887EAFC;
    case 583u: goto L_0887EB18;
    case 584u: goto L_0887EB34;
    case 585u: goto L_0887EB50;
    case 586u: goto L_0887EB6C;
    case 587u: goto L_0887EB88;
    case 588u: goto L_0887EBA4;
    case 589u: goto L_0887EBAC;
    case 590u: goto L_0887EBB4;
    case 591u: goto L_0887EBD0;
    case 592u: goto L_0887EBEC;
    case 593u: goto L_0887EC08;
    case 594u: goto L_0887EC24;
    case 595u: goto L_0887EC2C;
    case 596u: goto L_0887EC30;
    case 597u: goto L_0887EC38;
    case 598u: goto L_0887EC48;
    case 599u: goto L_0887EC54;
    case 600u: goto L_0887EC5C;
    case 601u: goto L_0887EC64;
    case 602u: goto L_0887EC6C;
    case 603u: goto L_0887EC74;
    case 604u: goto L_0887EC80;
    case 605u: goto L_0887EC84;
    case 606u: goto L_0887EC8C;
    case 607u: goto L_0887EC98;
    case 608u: goto L_0887EC9C;
    case 609u: goto L_0887ECA4;
    case 610u: goto L_0887ECC8;
    case 611u: goto L_0887ECD0;
    case 612u: goto L_0887ECE8;
    case 613u: goto L_0887ECFC;
    case 614u: goto L_0887ED1C;
    case 615u: goto L_0887ED20;
    case 616u: goto L_0887ED28;
    case 617u: goto L_0887ED30;
    case 618u: goto L_0887ED64;
    case 619u: goto L_0887ED6C;
    case 620u: goto L_0887EDA0;
    case 621u: goto L_0887EDB0;
    case 622u: goto L_0887EDB8;
    case 623u: goto L_0887EDC0;
    case 624u: goto L_0887EDE4;
    case 625u: goto L_0887EE28;
    case 626u: goto L_0887EE34;
    case 627u: goto L_0887EE40;
    case 628u: goto L_0887EE48;
    case 629u: goto L_0887EE5C;
    case 630u: goto L_0887EE70;
    case 631u: goto L_0887EE80;
    case 632u: goto L_0887EE8C;
    case 633u: goto L_0887EE94;
    case 634u: goto L_0887EE9C;
    case 635u: goto L_0887EEA8;
    case 636u: goto L_0887EEB0;
    case 637u: goto L_0887EEB8;
    case 638u: goto L_0887EEC0;
    case 639u: goto L_0887EEC8;
    case 640u: goto L_0887EED0;
    case 641u: goto L_0887EEDC;
    case 642u: goto L_0887EEF4;
    case 643u: goto L_0887EF00;
    case 644u: goto L_0887EF08;
    case 645u: goto L_0887EF24;
    case 646u: goto L_0887EF38;
    case 647u: goto L_0887EF50;
    case 648u: goto L_0887EF68;
    case 649u: goto L_0887EF80;
    case 650u: goto L_0887EF98;
    case 651u: goto L_0887EFB0;
    case 652u: goto L_0887EFB8;
    case 653u: goto L_0887EFCC;
    case 654u: goto L_0887EFE4;
    case 655u: goto L_0887EFFC;
    case 656u: goto L_0887F014;
    case 657u: goto L_0887F018;
    case 658u: goto L_0887F03C;
    case 659u: goto L_0887F044;
    case 660u: goto L_0887F05C;
    case 661u: goto L_0887F070;
    case 662u: goto L_0887F090;
    case 663u: goto L_0887F094;
    case 664u: goto L_0887F09C;
    case 665u: goto L_0887F0B8;
    case 666u: goto L_0887F0D4;
    case 667u: goto L_0887F0DC;
    case 668u: goto L_0887F0F8;
    case 669u: goto L_0887F108;
    case 670u: goto L_0887F110;
    case 671u: goto L_0887F118;
    case 672u: goto L_0887F140;
    case 673u: goto L_0887F174;
    case 674u: goto L_0887F180;
    case 675u: goto L_0887F188;
    case 676u: goto L_0887F19C;
    case 677u: goto L_0887F1B0;
    case 678u: goto L_0887F1C0;
    case 679u: goto L_0887F1DC;
    case 680u: goto L_0887F1EC;
    case 681u: goto L_0887F208;
    case 682u: goto L_0887F21C;
    case 683u: goto L_0887F234;
    case 684u: goto L_0887F24C;
    case 685u: goto L_0887F264;
    case 686u: goto L_0887F27C;
    case 687u: goto L_0887F294;
    case 688u: goto L_0887F29C;
    case 689u: goto L_0887F2B0;
    case 690u: goto L_0887F2C8;
    case 691u: goto L_0887F2E0;
    case 692u: goto L_0887F2F8;
    case 693u: goto L_0887F2FC;
    case 694u: goto L_0887F320;
    case 695u: goto L_0887F328;
    case 696u: goto L_0887F340;
    case 697u: goto L_0887F354;
    case 698u: goto L_0887F374;
    case 699u: goto L_0887F378;
    case 700u: goto L_0887F380;
    case 701u: goto L_0887F394;
    case 702u: goto L_0887F3A8;
    case 703u: goto L_0887F3B0;
    case 704u: goto L_0887F3C8;
    case 705u: goto L_0887F3D8;
    case 706u: goto L_0887F3E0;
    case 707u: goto L_0887F3E8;
    case 708u: goto L_0887F408;
    case 709u: goto L_0887F464;
    case 710u: goto L_0887F470;
    case 711u: goto L_0887F478;
    case 712u: goto L_0887F484;
    case 713u: goto L_0887F490;
    case 714u: goto L_0887F498;
    case 715u: goto L_0887F4A8;
    case 716u: goto L_0887F4DC;
    case 717u: goto L_0887F4E8;
    case 718u: goto L_0887F4F4;
    case 719u: goto L_0887F4FC;
    case 720u: goto L_0887F504;
    case 721u: goto L_0887F50C;
    case 722u: goto L_0887F518;
    case 723u: goto L_0887F524;
    case 724u: goto L_0887F52C;
    case 725u: goto L_0887F534;
    case 726u: goto L_0887F53C;
    case 727u: goto L_0887F544;
    case 728u: goto L_0887F54C;
    case 729u: goto L_0887F554;
    case 730u: goto L_0887F568;
    case 731u: goto L_0887F588;
    case 732u: goto L_0887F590;
    case 733u: goto L_0887F598;
    case 734u: goto L_0887F5A4;
    case 735u: goto L_0887F5B4;
    case 736u: goto L_0887F5BC;
    case 737u: goto L_0887F5CC;
    case 738u: goto L_0887F5D4;
    case 739u: goto L_0887F5DC;
    case 740u: goto L_0887F5EC;
    case 741u: goto L_0887F604;
    case 742u: goto L_0887F618;
    case 743u: goto L_0887F62C;
    case 744u: goto L_0887F640;
    case 745u: goto L_0887F654;
    case 746u: goto L_0887F668;
    case 747u: goto L_0887F67C;
    case 748u: goto L_0887F684;
    case 749u: goto L_0887F68C;
    case 750u: goto L_0887F6A0;
    case 751u: goto L_0887F6B4;
    case 752u: goto L_0887F6C8;
    case 753u: goto L_0887F6DC;
    case 754u: goto L_0887F6E4;
    case 755u: goto L_0887F6E8;
    case 756u: goto L_0887F6F0;
    case 757u: goto L_0887F6FC;
    case 758u: goto L_0887F708;
    case 759u: goto L_0887F710;
    case 760u: goto L_0887F718;
    case 761u: goto L_0887F720;
    case 762u: goto L_0887F738;
    case 763u: goto L_0887F748;
    case 764u: goto L_0887F74C;
    case 765u: goto L_0887F754;
    case 766u: goto L_0887F764;
    case 767u: goto L_0887F768;
    case 768u: goto L_0887F770;
    case 769u: goto L_0887F794;
    case 770u: goto L_0887F79C;
    case 771u: goto L_0887F7B4;
    case 772u: goto L_0887F7C8;
    case 773u: goto L_0887F7E8;
    case 774u: goto L_0887F7EC;
    case 775u: goto L_0887F7F4;
    case 776u: goto L_0887F7FC;
    case 777u: goto L_0887F824;
    case 778u: goto L_0887F82C;
    case 779u: goto L_0887F84C;
    case 780u: goto L_0887F85C;
    case 781u: goto L_0887F89C;
    case 782u: goto L_0887F8E8;
    case 783u: goto L_0887F8F4;
    case 784u: goto L_0887F8FC;
    case 785u: goto L_0887F908;
    case 786u: goto L_0887F914;
    case 787u: goto L_0887F91C;
    case 788u: goto L_0887F930;
    case 789u: goto L_0887F944;
    case 790u: goto L_0887F954;
    case 791u: goto L_0887F960;
    case 792u: goto L_0887F978;
    case 793u: goto L_0887F984;
    case 794u: goto L_0887F994;
    case 795u: goto L_0887F9A0;
    case 796u: goto L_0887F9AC;
    case 797u: goto L_0887F9B4;
    case 798u: goto L_0887F9BC;
    case 799u: goto L_0887F9C4;
    case 800u: goto L_0887F9CC;
    case 801u: goto L_0887F9D8;
    case 802u: goto L_0887F9E0;
    case 803u: goto L_0887F9E8;
    case 804u: goto L_0887F9F0;
    case 805u: goto L_0887F9F8;
    case 806u: goto L_0887FA00;
    case 807u: goto L_0887FA08;
    case 808u: goto L_0887FA1C;
    case 809u: goto L_0887FA3C;
    case 810u: goto L_0887FA44;
    case 811u: goto L_0887FA4C;
    case 812u: goto L_0887FA58;
    case 813u: goto L_0887FA68;
    case 814u: goto L_0887FA70;
    case 815u: goto L_0887FA80;
    case 816u: goto L_0887FA88;
    case 817u: goto L_0887FA90;
    case 818u: goto L_0887FA98;
    case 819u: goto L_0887FAAC;
    case 820u: goto L_0887FAC0;
    case 821u: goto L_0887FAD4;
    case 822u: goto L_0887FAE8;
    case 823u: goto L_0887FAFC;
    case 824u: goto L_0887FB10;
    case 825u: goto L_0887FB18;
    case 826u: goto L_0887FB20;
    case 827u: goto L_0887FB34;
    case 828u: goto L_0887FB48;
    case 829u: goto L_0887FB5C;
    case 830u: goto L_0887FB70;
    case 831u: goto L_0887FB78;
    case 832u: goto L_0887FB7C;
    case 833u: goto L_0887FB84;
    case 834u: goto L_0887FB90;
    case 835u: goto L_0887FB9C;
    case 836u: goto L_0887FBA4;
    case 837u: goto L_0887FBAC;
    case 838u: goto L_0887FBB4;
    case 839u: goto L_0887FBCC;
    case 840u: goto L_0887FBD8;
    case 841u: goto L_0887FBDC;
    case 842u: goto L_0887FBE4;
    case 843u: goto L_0887FBF0;
    case 844u: goto L_0887FBF4;
    case 845u: goto L_0887FBFC;
    case 846u: goto L_0887FC20;
    case 847u: goto L_0887FC28;
    case 848u: goto L_0887FC40;
    case 849u: goto L_0887FC54;
    case 850u: goto L_0887FC74;
    case 851u: goto L_0887FC78;
    case 852u: goto L_0887FC80;
    case 853u: goto L_0887FC88;
    case 854u: goto L_0887FCB0;
    case 855u: goto L_0887FCB8;
    case 856u: goto L_0887FCD8;
    case 857u: goto L_0887FCE8;
    case 858u: goto L_0887FD14;
    case 859u: goto L_0887FD58;
    case 860u: goto L_0887FD64;
    case 861u: goto L_0887FD6C;
    case 862u: goto L_0887FD78;
    case 863u: goto L_0887FD84;
    case 864u: goto L_0887FD8C;
    case 865u: goto L_0887FDA0;
    case 866u: goto L_0887FDB4;
    case 867u: goto L_0887FDC4;
    case 868u: goto L_0887FDD0;
    case 869u: goto L_0887FDD8;
    case 870u: goto L_0887FDE4;
    case 871u: goto L_0887FDEC;
    case 872u: goto L_0887FDF4;
    case 873u: goto L_0887FDFC;
    case 874u: goto L_0887FE04;
    case 875u: goto L_0887FE0C;
    case 876u: goto L_0887FE20;
    case 877u: goto L_0887FE40;
    case 878u: goto L_0887FE48;
    case 879u: goto L_0887FE50;
    case 880u: goto L_0887FE5C;
    case 881u: goto L_0887FE6C;
    case 882u: goto L_0887FE74;
    case 883u: goto L_0887FE84;
    case 884u: goto L_0887FE8C;
    case 885u: goto L_0887FE94;
    case 886u: goto L_0887FEB0;
    case 887u: goto L_0887FEC4;
    case 888u: goto L_0887FED8;
    case 889u: goto L_0887FEEC;
    case 890u: goto L_0887FF00;
    case 891u: goto L_0887FF14;
    case 892u: goto L_0887FF28;
    case 893u: goto L_0887FF30;
    case 894u: goto L_0887FF44;
    case 895u: goto L_0887FF58;
    case 896u: goto L_0887FF6C;
    case 897u: goto L_0887FF80;
    case 898u: goto L_0887FF84;
    case 899u: goto L_0887FFA8;
    case 900u: goto L_0887FFB0;
    case 901u: goto L_0887FFC8;
    case 902u: goto L_0887FFDC;
    case 903u: goto L_0887FFFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0887C004:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
        goto L_0887C01C;
    }
    goto L_0887C014;
L_0887C014:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0887C018;
L_0887C018:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    goto L_0887C01C;
L_0887C01C:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = ctx.fpr[22] + ctx.fpr[2];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[16]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
      if (branch_taken) {
          goto L_0887C068;
      }
      goto L_0887C044;
    }
L_0887C044:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0887C050u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0887C050u) goto L_0887C050;
    return;
L_0887C050:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
      if (branch_taken) {
          goto L_0887C074;
      }
      goto L_0887C068;
    }
L_0887C068:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    goto L_0887C074;
L_0887C074:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x0887C09Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 154u, 0x0892D744u>(ctx, &aot_mem) && ctx.pc == 0x0887C09Cu) goto L_0887C09C;
    return;
L_0887C09C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C0B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[22] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[21] = (0u | 16u);
    ctx.gpr[23] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4656));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[20] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    goto L_0887C104;
L_0887C104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C168;
      }
      goto L_0887C110;
    }
L_0887C110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0887C11Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887C11Cu) goto L_0887C11C;
    return;
L_0887C11C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C160;
      }
      goto L_0887C128;
    }
L_0887C128:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[21];
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
      if (branch_taken) {
          goto L_0887C14C;
      }
      goto L_0887C134;
    }
L_0887C134:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[31] = (0x0887C144u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x0887C144u) goto L_0887C144;
    return;
L_0887C144:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C168;
      }
      goto L_0887C14C;
    }
L_0887C14C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[31] = (0x0887C158u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 884u, 0x08892F04u>(ctx, &aot_mem) && ctx.pc == 0x0887C158u) goto L_0887C158;
    return;
L_0887C158:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C168;
      }
      goto L_0887C160;
    }
L_0887C160:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C168;
L_0887C168:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C104;
      }
      goto L_0887C178;
    }
L_0887C178:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C1A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[22] = (2269u << 16u);
    ctx.gpr[20] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4656));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    goto L_0887C1F4;
L_0887C1F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_0887C240;
      }
      goto L_0887C200;
    }
L_0887C200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0887C20Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887C20Cu) goto L_0887C20C;
    return;
L_0887C20C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C238;
      }
      goto L_0887C218;
    }
L_0887C218:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    ctx.gpr[31] = (0x0887C230u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x0887C230u) goto L_0887C230;
    return;
L_0887C230:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C240;
      }
      goto L_0887C238;
    }
L_0887C238:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C240;
L_0887C240:
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C1F4;
      }
      goto L_0887C250;
    }
L_0887C250:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C27C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    ctx.gpr[20] = (2269u << 16u);
    ctx.gpr[22] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4656));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    goto L_0887C2D4;
L_0887C2D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C328;
      }
      goto L_0887C2E0;
    }
L_0887C2E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0887C2ECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887C2ECu) goto L_0887C2EC;
    return;
L_0887C2EC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C320;
      }
      goto L_0887C2F8;
    }
L_0887C2F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887C318u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1049u, 0x08893758u>(ctx, &aot_mem) && ctx.pc == 0x0887C318u) goto L_0887C318;
    return;
L_0887C318:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C328;
      }
      goto L_0887C320;
    }
L_0887C320:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C328;
L_0887C328:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C2D4;
      }
      goto L_0887C338;
    }
L_0887C338:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C368:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[20] = (2269u << 16u);
    ctx.gpr[22] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[30]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4656));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    goto L_0887C3C8;
L_0887C3C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C420;
      }
      goto L_0887C3D4;
    }
L_0887C3D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0887C3E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887C3E0u) goto L_0887C3E0;
    return;
L_0887C3E0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C418;
      }
      goto L_0887C3EC;
    }
L_0887C3EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x0887C410u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1107u, 0x08893BA8u>(ctx, &aot_mem) && ctx.pc == 0x0887C410u) goto L_0887C410;
    return;
L_0887C410:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C420;
      }
      goto L_0887C418;
    }
L_0887C418:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C420;
L_0887C420:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[19] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C3C8;
      }
      goto L_0887C430;
    }
L_0887C430:
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
L_0887C464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    ctx.gpr[18] = (ctx.gpr[6] << 16u);
    ctx.gpr[19] = (ctx.gpr[7] << 16u);
    ctx.gpr[21] = (2269u << 16u);
    ctx.gpr[23] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 16u));
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[30] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4656));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-1));
    ctx.gpr[22] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    goto L_0887C4C4;
L_0887C4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887C514;
      }
      goto L_0887C4D0;
    }
L_0887C4D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0887C4DCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887C4DCu) goto L_0887C4DC;
    return;
L_0887C4DC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C50C;
      }
      goto L_0887C4E8;
    }
L_0887C4E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887C504u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1141u, 0x08893DB4u>(ctx, &aot_mem) && ctx.pc == 0x0887C504u) goto L_0887C504;
    return;
L_0887C504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C514;
      }
      goto L_0887C50C;
    }
L_0887C50C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(4), 0u);
    goto L_0887C514;
L_0887C514:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_0887C4C4;
      }
      goto L_0887C524;
    }
L_0887C524:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C554:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4656));
    goto L_0887C564;
L_0887C564:
    ctx.gpr[6] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_0887C598;
      }
      goto L_0887C578;
    }
L_0887C578:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C564;
      }
      goto L_0887C590;
    }
L_0887C590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C59C;
      }
      goto L_0887C598;
    }
L_0887C598:
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    goto L_0887C59C;
L_0887C59C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C5A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C5FC;
      }
      goto L_0887C5F0;
    }
L_0887C5F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0887C600;
      }
      goto L_0887C5FC;
    }
L_0887C5FC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7304), 0u);
    goto L_0887C600;
L_0887C600:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0887C610u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0887C610u) goto L_0887C610;
    return;
L_0887C610:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C68C;
      }
      goto L_0887C620;
    }
L_0887C620:
    ctx.gpr[31] = (0x0887C628u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0887C628u) goto L_0887C628;
    return;
L_0887C628:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C68C;
      }
      goto L_0887C630;
    }
L_0887C630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887C68C;
      }
      goto L_0887C640;
    }
L_0887C640:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887C68C;
      }
      goto L_0887C650;
    }
L_0887C650:
    ctx.gpr[31] = (0x0887C658u);
    // nop
    goto L_0887C554;
L_0887C658:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887C68C;
      }
      goto L_0887C664;
    }
L_0887C664:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4656));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0887C688u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x0887C688u) goto L_0887C688;
    return;
L_0887C688:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    goto L_0887C68C;
L_0887C68C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (2269u << 16u);
      if (branch_taken) {
          goto L_0887C734;
      }
      goto L_0887C6A0;
    }
L_0887C6A0:
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[20] = (0u | 6u);
    ctx.gpr[30] = (ctx.gpr[17] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4656));
    ctx.gpr[22] = (2229u << 16u);
    goto L_0887C6B4;
L_0887C6B4:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C720;
      }
      goto L_0887C6C0;
    }
L_0887C6C0:
    ctx.gpr[31] = (0x0887C6C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 841u, 0x089A38A0u>(ctx, &aot_mem) && ctx.pc == 0x0887C6C8u) goto L_0887C6C8;
    return;
L_0887C6C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C720;
      }
      goto L_0887C6D0;
    }
L_0887C6D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_0887C720;
      }
      goto L_0887C6DC;
    }
L_0887C6DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_0887C720;
      }
      goto L_0887C6E8;
    }
L_0887C6E8:
    ctx.gpr[31] = (0x0887C6F0u);
    // nop
    goto L_0887C554;
L_0887C6F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0887C720;
      }
      goto L_0887C6FC;
    }
L_0887C6FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-15316)));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[31] = (0x0887C718u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x0887C718u) goto L_0887C718;
    return;
L_0887C718:
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    goto L_0887C720;
L_0887C720:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(544)));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[23] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887C6B4;
      }
      goto L_0887C734;
    }
L_0887C734:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_0887C768:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C7B4;
      }
      goto L_0887C774;
    }
L_0887C774:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C7B4;
      }
      goto L_0887C780;
    }
L_0887C780:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C824;
      }
      goto L_0887C7AC;
    }
L_0887C7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C828;
      }
      goto L_0887C7B4;
    }
L_0887C7B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C7C8;
      }
      goto L_0887C7C0;
    }
L_0887C7C0:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887C824;
      }
      goto L_0887C7C8;
    }
L_0887C7C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
      if (branch_taken) {
          goto L_0887C824;
      }
      goto L_0887C7D8;
    }
L_0887C7D8:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C824;
      }
      goto L_0887C7E0;
    }
L_0887C7E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C824;
      }
      goto L_0887C7F0;
    }
L_0887C7F0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C824;
      }
      goto L_0887C808;
    }
L_0887C808:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(756)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C824;
      }
      goto L_0887C81C;
    }
L_0887C81C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C828;
      }
      goto L_0887C824;
    }
L_0887C824:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887C828;
L_0887C828:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C830:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C890;
      }
      goto L_0887C850;
    }
L_0887C850:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C890;
      }
      goto L_0887C85C;
    }
L_0887C85C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C984;
      }
      goto L_0887C888;
    }
L_0887C888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C988;
      }
      goto L_0887C890;
    }
L_0887C890:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0887C89Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x0887C89Cu) goto L_0887C89C;
    return;
L_0887C89C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C8BC;
      }
      goto L_0887C8A8;
    }
L_0887C8A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[31] = (0x0887C8B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x0887C8B8u) goto L_0887C8B8;
    return;
L_0887C8B8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0887C8BC;
L_0887C8BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C8D8;
      }
      goto L_0887C8C4;
    }
L_0887C8C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 136u);
    ctx.gpr[31] = (0x0887C8D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x0887C8D4u) goto L_0887C8D4;
    return;
L_0887C8D4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0887C8D8;
L_0887C8D8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C8F4;
      }
      goto L_0887C8E0;
    }
L_0887C8E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 137u);
    ctx.gpr[31] = (0x0887C8F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 332u, 0x08865820u>(ctx, &aot_mem) && ctx.pc == 0x0887C8F0u) goto L_0887C8F0;
    return;
L_0887C8F0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_0887C8F4;
L_0887C8F4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C914;
      }
      goto L_0887C8FC;
    }
L_0887C8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C924;
      }
      goto L_0887C90C;
    }
L_0887C90C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C91C;
      }
      goto L_0887C914;
    }
L_0887C914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0887C988;
      }
      goto L_0887C91C;
    }
L_0887C91C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887C984;
      }
      goto L_0887C924;
    }
L_0887C924:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
      if (branch_taken) {
          goto L_0887C984;
      }
      goto L_0887C934;
    }
L_0887C934:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887C984;
      }
      goto L_0887C93C;
    }
L_0887C93C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887C984;
      }
      goto L_0887C950;
    }
L_0887C950:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(752)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C984;
      }
      goto L_0887C968;
    }
L_0887C968:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(756)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C984;
      }
      goto L_0887C97C;
    }
L_0887C97C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C988;
      }
      goto L_0887C984;
    }
L_0887C984:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887C988;
L_0887C988:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C998:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (15395u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887C9CC;
      }
      goto L_0887C9C4;
    }
L_0887C9C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0887C9D0;
      }
      goto L_0887C9CC;
    }
L_0887C9CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_0887C9D0;
L_0887C9D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887C9D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887CAD8;
      }
      goto L_0887C9F0;
    }
L_0887C9F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[17] = (ctx.gpr[4] ^ 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_0887CA94;
      }
      goto L_0887CA04;
    }
L_0887CA04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA94;
      }
      goto L_0887CA10;
    }
L_0887CA10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0887CA8C;
      }
      goto L_0887CA1C;
    }
L_0887CA1C:
    ctx.gpr[31] = (0x0887CA24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 735u, 0x0889F878u>(ctx, &aot_mem) && ctx.pc == 0x0887CA24u) goto L_0887CA24;
    return;
L_0887CA24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(660)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CA58;
      }
      goto L_0887CA50;
    }
L_0887CA50:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(660), ctx.gpr[5]);
    goto L_0887CA58;
L_0887CA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CA94;
      }
      goto L_0887CA68;
    }
L_0887CA68:
    ctx.gpr[31] = (0x0887CA70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 101u, 0x088A07B0u>(ctx, &aot_mem) && ctx.pc == 0x0887CA70u) goto L_0887CA70;
    return;
L_0887CA70:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA94;
      }
      goto L_0887CA78;
    }
L_0887CA78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0887CA84u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 95u, 0x088A0754u>(ctx, &aot_mem) && ctx.pc == 0x0887CA84u) goto L_0887CA84;
    return;
L_0887CA84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CA94;
      }
      goto L_0887CA8C;
    }
L_0887CA8C:
    ctx.gpr[31] = (0x0887CA94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 668u, 0x0889F3FCu>(ctx, &aot_mem) && ctx.pc == 0x0887CA94u) goto L_0887CA94;
    return;
L_0887CA94:
    ctx.gpr[31] = (0x0887CA9Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C3124u>(ctx, &aot_mem) && ctx.pc == 0x0887CA9Cu) goto L_0887CA9C;
    return;
L_0887CA9C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CAC0;
      }
      goto L_0887CAA4;
    }
L_0887CAA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0887CAC0u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0887CAC0u) goto L_0887CAC0;
    return;
L_0887CAC0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CAD8;
      }
      goto L_0887CAC8;
    }
L_0887CAC8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    goto L_0887CAD8;
L_0887CAD8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CAEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887CD60;
      }
      goto L_0887CB0C;
    }
L_0887CB0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CD60;
      }
      goto L_0887CB1C;
    }
L_0887CB1C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CB44;
      }
      goto L_0887CB34;
    }
L_0887CB34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1800), ctx.gpr[4]);
    goto L_0887CB44;
L_0887CB44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB50;
    }
L_0887CB50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB5C;
    }
L_0887CB5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CB8C;
      }
      goto L_0887CB68;
    }
L_0887CB68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB74;
    }
L_0887CB74:
    ctx.gpr[31] = (0x0887CB7Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 219u, 0x089ED5CCu>(ctx, &aot_mem) && ctx.pc == 0x0887CB7Cu) goto L_0887CB7C;
    return;
L_0887CB7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB8C;
    }
L_0887CB8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CB98;
    }
L_0887CB98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
        goto L_0887CBD4;
    }
    goto L_0887CBB4;
L_0887CBB4:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x0887CBC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 428u, 0x088D5E30u>(ctx, &aot_mem) && ctx.pc == 0x0887CBC8u) goto L_0887CBC8;
    return;
L_0887CBC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_0887CBE4;
      }
      goto L_0887CBD0;
    }
L_0887CBD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    goto L_0887CBD4;
L_0887CBD4:
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CC08;
      }
      goto L_0887CBE4;
    }
L_0887CBE4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887CBF4u);
    ctx.gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x0887CBF4u) goto L_0887CBF4;
    return;
L_0887CBF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-257));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887CC24;
      }
      goto L_0887CC08;
    }
L_0887CC08:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887CC18u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 927u, 0x08893114u>(ctx, &aot_mem) && ctx.pc == 0x0887CC18u) goto L_0887CC18;
    return;
L_0887CC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_0887CC24;
L_0887CC24:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0887CC40;
      }
      goto L_0887CC34;
    }
L_0887CC34:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887CC48;
      }
      goto L_0887CC40;
    }
L_0887CC40:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_0887CC48;
L_0887CC48:
    ctx.gpr[31] = (0x0887CC50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 474u, 0x088868F4u>(ctx, &aot_mem) && ctx.pc == 0x0887CC50u) goto L_0887CC50;
    return;
L_0887CC50:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0887CC64u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 549u, 0x089BA410u>(ctx, &aot_mem) && ctx.pc == 0x0887CC64u) goto L_0887CC64;
    return;
L_0887CC64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (32768u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x0887CCA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 559u, 0x08886D34u>(ctx, &aot_mem) && ctx.pc == 0x0887CCA8u) goto L_0887CCA8;
    return;
L_0887CCA8:
    ctx.gpr[31] = (0x0887CCB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 351u, 0x0899E254u>(ctx, &aot_mem) && ctx.pc == 0x0887CCB0u) goto L_0887CCB0;
    return;
L_0887CCB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CCF8;
      }
      goto L_0887CCB8;
    }
L_0887CCB8:
    ctx.gpr[31] = (0x0887CCC0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x0887CCC0u) goto L_0887CCC0;
    return;
L_0887CCC0:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_0887CCE4;
    }
    goto L_0887CCCC;
L_0887CCCC:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_0887CCEC;
      }
      goto L_0887CCE4;
    }
L_0887CCE4:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_0887CCEC;
L_0887CCEC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0887CCF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 278u, 0x089A1468u>(ctx, &aot_mem) && ctx.pc == 0x0887CCF8u) goto L_0887CCF8;
    return;
L_0887CCF8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CD50;
      }
      goto L_0887CD00;
    }
L_0887CD00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887CD40;
      }
      goto L_0887CD10;
    }
L_0887CD10:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0887CD40;
      }
      goto L_0887CD18;
    }
L_0887CD18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CD38;
      }
      goto L_0887CD24;
    }
L_0887CD24:
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0887CD38;
    }
    goto L_0887CD2C;
L_0887CD2C:
    ctx.gpr[31] = (0x0887CD34u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x0887CD34u) goto L_0887CD34;
    return;
L_0887CD34:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0887CD38;
L_0887CD38:
    ctx.gpr[31] = (0x0887CD40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x0887CD40u) goto L_0887CD40;
    return;
L_0887CD40:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887CD50u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A2520u>(ctx, &aot_mem) && ctx.pc == 0x0887CD50u) goto L_0887CD50;
    return;
L_0887CD50:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[5]);
    goto L_0887CD60;
L_0887CD60:
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
L_0887CD7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0887CDE0;
      }
      goto L_0887CD90;
    }
L_0887CD90:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0887CDE0;
      }
      goto L_0887CDA0;
    }
L_0887CDA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0887CDB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 210u, 0x089ED530u>(ctx, &aot_mem) && ctx.pc == 0x0887CDB8u) goto L_0887CDB8;
    return;
L_0887CDB8:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(596), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17448)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17456), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-17448), ctx.gpr[4]);
    goto L_0887CDE0;
L_0887CDE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CDF0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887CE4C;
      }
      goto L_0887CDF8;
    }
L_0887CDF8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0887CE4C;
      }
      goto L_0887CE08;
    }
L_0887CE08:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (305u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11520));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(440), ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(444), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3284)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3284), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_0887CE4C;
L_0887CE4C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CE54:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7296), ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29568), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[8] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(-7292), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[10]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = ((ctx.gpr[5] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-7292)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0887CFB0;
      }
      goto L_0887CF4C;
    }
L_0887CF4C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4912));
    goto L_0887CF50;
L_0887CF50:
    ctx.gpr[5] = (ctx.gpr[7] << 5u);
    ctx.gpr[11] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[11]);
    goto L_0887CF60;
L_0887CF60:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[11] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[11]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[6]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CF60;
      }
      goto L_0887CF90;
    }
L_0887CF90:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(-7292)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CF50;
      }
      goto L_0887CFB0;
    }
L_0887CFB0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887CFB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-7292)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (2269u << 16u);
      if (branch_taken) {
          goto L_0887D02C;
      }
      goto L_0887CFEC;
    }
L_0887CFEC:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4912));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    goto L_0887CFF8;
L_0887CFF8:
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[31] = (0x0887D014u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 90u, 0x08A28CB4u>(ctx, &aot_mem) && ctx.pc == 0x0887D014u) goto L_0887D014;
    return;
L_0887D014:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(-7292)));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887CFF8;
      }
      goto L_0887D02C;
    }
L_0887D02C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D04C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-7290), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-7288), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (rt.memory().aot_load_word_left(ctx.gpr[6] + static_cast<std::uint32_t>(3), ctx.gpr[7]));
    ctx.gpr[7] = (rt.memory().aot_load_word_right(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7284), ctx.gpr[7]);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = ((ctx.gpr[6] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[7] + static_cast<std::uint32_t>(-7280), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[8] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = ((ctx.gpr[4] & ~0xFFFFFF00u) | ((ctx.gpr[8] & 0x00FFFFFFu) << 8u));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-7278), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-7280))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[10] | 0u);
      if (branch_taken) {
          goto L_0887D1C8;
      }
      goto L_0887D188;
    }
L_0887D188:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13456));
    goto L_0887D190;
L_0887D190:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[9]);
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[10] + static_cast<std::uint32_t>(3), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[5]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (ctx.gpr[6] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(-7280))))));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[10]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D190;
      }
      goto L_0887D1C8;
    }
L_0887D1C8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D1D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-250));
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(-232));
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[21] < static_cast<std::uint32_t>(24) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887D23C;
      }
      goto L_0887D230;
    }
L_0887D230:
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
      if (branch_taken) {
          goto L_0887D244;
      }
      goto L_0887D23C;
    }
L_0887D23C:
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0887D244;
L_0887D244:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887D254u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B8B4u>(ctx, &aot_mem) && ctx.pc == 0x0887D254u) goto L_0887D254;
    return;
L_0887D254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887D2C0;
      }
      goto L_0887D280;
    }
L_0887D280:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1176)));
    jump_target = ctx.gpr[1];
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D298:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D2C0;
      }
      goto L_0887D2A0;
    }
L_0887D2A0:
    ctx.gpr[31] = (0x0887D2A8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_0887C830;
L_0887D2A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D2B8;
      }
      goto L_0887D2B0;
    }
L_0887D2B0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (0u | 1u);
    goto L_0887D2B8;
L_0887D2B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D2C0;
      }
      goto L_0887D2C0;
    }
L_0887D2C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[23] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0887D2F0;
      }
      goto L_0887D2D4;
    }
L_0887D2D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887D308;
      }
      goto L_0887D2F0;
    }
L_0887D2F0:
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    goto L_0887D308;
L_0887D308:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0887D31Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x0887D31Cu) goto L_0887D31C;
    return;
L_0887D31C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = ctx.gpr[20] != 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_0887D410;
      }
      goto L_0887D348;
    }
L_0887D348:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D3A4;
      }
      goto L_0887D368;
    }
L_0887D368:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D3A4;
      }
      goto L_0887D380;
    }
L_0887D380:
    if (ctx.gpr[23] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0887D3A4;
    }
    goto L_0887D388;
L_0887D388:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D3A4;
      }
      goto L_0887D3A0;
    }
L_0887D3A0:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887D3A4;
L_0887D3A4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D410;
      }
      goto L_0887D3B0;
    }
L_0887D3B0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D410;
      }
      goto L_0887D3B8;
    }
L_0887D3B8:
    ctx.gpr[21] = (ctx.gpr[21] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[21]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-1080)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D3D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D410;
      }
      goto L_0887D3D8;
    }
L_0887D3D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D3EC;
      }
      goto L_0887D3E8;
    }
L_0887D3E8:
    ctx.gpr[18] = (0u | 1u);
    goto L_0887D3EC;
L_0887D3EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D410;
      }
      goto L_0887D3F4;
    }
L_0887D3F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D408;
      }
      goto L_0887D404;
    }
L_0887D404:
    ctx.gpr[18] = (0u | 1u);
    goto L_0887D408;
L_0887D408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D410;
      }
      goto L_0887D410;
    }
L_0887D410:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887D43C;
      }
      goto L_0887D434;
    }
L_0887D434:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_0887D48C;
      }
      goto L_0887D43C;
    }
L_0887D43C:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
      if (branch_taken) {
          goto L_0887D468;
      }
      goto L_0887D454;
    }
L_0887D454:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887D48C;
      }
      goto L_0887D468;
    }
L_0887D468:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D48C;
      }
      goto L_0887D488;
    }
L_0887D488:
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887D48C;
L_0887D48C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D4F0;
      }
      goto L_0887D494;
    }
L_0887D494:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D4F0;
      }
      goto L_0887D4B4;
    }
L_0887D4B4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D4F0;
      }
      goto L_0887D4CC;
    }
L_0887D4CC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[20];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[22];
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x0887D4F0u);
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[22];
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887D4F0u) goto L_0887D4F0;
    return;
L_0887D4F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D510;
      }
      goto L_0887D500;
    }
L_0887D500:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D510;
      }
      goto L_0887D508;
    }
L_0887D508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D510;
      }
      goto L_0887D510;
    }
L_0887D510:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D54C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 256 ? 1u : 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887D5A8;
      }
      goto L_0887D594;
    }
L_0887D594:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 259 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D5A8;
      }
      goto L_0887D5A0;
    }
L_0887D5A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D5AC;
      }
      goto L_0887D5A8;
    }
L_0887D5A8:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887D5AC;
L_0887D5AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D5D0;
      }
      goto L_0887D5B4;
    }
L_0887D5B4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887D5C8u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D5C8u) goto L_0887D5C8;
    return;
L_0887D5C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D5E4;
      }
      goto L_0887D5D0;
    }
L_0887D5D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887D5E4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D5E4u) goto L_0887D5E4;
    return;
L_0887D5E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x0887D618u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887D618u) goto L_0887D618;
    return;
L_0887D618:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0887D62Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x0887D62Cu) goto L_0887D62C;
    return;
L_0887D62C:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D668;
      }
      goto L_0887D644;
    }
L_0887D644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D668;
      }
      goto L_0887D650;
    }
L_0887D650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D674;
      }
      goto L_0887D668;
    }
L_0887D668:
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0887D674;
L_0887D674:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0887D68C;
      }
      goto L_0887D680;
    }
L_0887D680:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887D690;
      }
      goto L_0887D68C;
    }
L_0887D68C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887D690;
L_0887D690:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D750;
      }
      goto L_0887D698;
    }
L_0887D698:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D748;
      }
      goto L_0887D6B4;
    }
L_0887D6B4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D748;
      }
      goto L_0887D6D0;
    }
L_0887D6D0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D748;
      }
      goto L_0887D6EC;
    }
L_0887D6EC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D748;
      }
      goto L_0887D708;
    }
L_0887D708:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D748;
      }
      goto L_0887D724;
    }
L_0887D724:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D748;
      }
      goto L_0887D740;
    }
L_0887D740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D7CC;
      }
      goto L_0887D748;
    }
L_0887D748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887D7CC;
      }
      goto L_0887D750;
    }
L_0887D750:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D7C8;
      }
      goto L_0887D76C;
    }
L_0887D76C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D7C8;
      }
      goto L_0887D788;
    }
L_0887D788:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D7C8;
      }
      goto L_0887D7A4;
    }
L_0887D7A4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887D7C8;
      }
      goto L_0887D7C0;
    }
L_0887D7C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D7CC;
      }
      goto L_0887D7C8;
    }
L_0887D7C8:
    ctx.gpr[5] = (0u | 0u);
    goto L_0887D7CC;
L_0887D7CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D83C;
      }
      goto L_0887D7D4;
    }
L_0887D7D4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-238));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D83C;
      }
      goto L_0887D7E4;
    }
L_0887D7E4:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-984)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887D7FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D83C;
      }
      goto L_0887D804;
    }
L_0887D804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887D818;
      }
      goto L_0887D814;
    }
L_0887D814:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887D818;
L_0887D818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D83C;
      }
      goto L_0887D820;
    }
L_0887D820:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D834;
      }
      goto L_0887D830;
    }
L_0887D830:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887D834;
L_0887D834:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D83C;
      }
      goto L_0887D83C;
    }
L_0887D83C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887D868;
      }
      goto L_0887D860;
    }
L_0887D860:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887D8B8;
      }
      goto L_0887D868;
    }
L_0887D868:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887D894;
      }
      goto L_0887D880;
    }
L_0887D880:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887D8B8;
      }
      goto L_0887D894;
    }
L_0887D894:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D8B8;
      }
      goto L_0887D8B4;
    }
L_0887D8B4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887D8B8;
L_0887D8B8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D934;
      }
      goto L_0887D8C0;
    }
L_0887D8C0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0887D904;
      }
      goto L_0887D8C8;
    }
L_0887D8C8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887D8FCu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887D8FCu) goto L_0887D8FC;
    return;
L_0887D8FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D934;
      }
      goto L_0887D904;
    }
L_0887D904:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.gpr[31] = (0x0887D934u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887D934u) goto L_0887D934;
    return;
L_0887D934:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D954;
      }
      goto L_0887D944;
    }
L_0887D944:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D954;
      }
      goto L_0887D94C;
    }
L_0887D94C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D954;
      }
      goto L_0887D954;
    }
L_0887D954:
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
L_0887D980:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 516 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887D9D4;
      }
      goto L_0887D9C0;
    }
L_0887D9C0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 519 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D9D4;
      }
      goto L_0887D9CC;
    }
L_0887D9CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887D9D8;
      }
      goto L_0887D9D4;
    }
L_0887D9D4:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887D9D8;
L_0887D9D8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887D9FC;
      }
      goto L_0887D9E0;
    }
L_0887D9E0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887D9F4u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887D9F4u) goto L_0887D9F4;
    return;
L_0887D9F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DA10;
      }
      goto L_0887D9FC;
    }
L_0887D9FC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887DA10u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887DA10u) goto L_0887DA10;
    return;
L_0887DA10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[19] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x0887DA44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0887DA44u) goto L_0887DA44;
    return;
L_0887DA44:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0887DA58u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x0887DA58u) goto L_0887DA58;
    return;
L_0887DA58:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DA90;
      }
      goto L_0887DA84;
    }
L_0887DA84:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887DA94;
      }
      goto L_0887DA90;
    }
L_0887DA90:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887DA94;
L_0887DA94:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0887DB54;
      }
      goto L_0887DA9C;
    }
L_0887DA9C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB4C;
      }
      goto L_0887DAB8;
    }
L_0887DAB8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB4C;
      }
      goto L_0887DAD4;
    }
L_0887DAD4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB4C;
      }
      goto L_0887DAF0;
    }
L_0887DAF0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB4C;
      }
      goto L_0887DB0C;
    }
L_0887DB0C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB4C;
      }
      goto L_0887DB28;
    }
L_0887DB28:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DB4C;
      }
      goto L_0887DB44;
    }
L_0887DB44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DBD0;
      }
      goto L_0887DB4C;
    }
L_0887DB4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887DBD0;
      }
      goto L_0887DB54;
    }
L_0887DB54:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DBCC;
      }
      goto L_0887DB70;
    }
L_0887DB70:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DBCC;
      }
      goto L_0887DB8C;
    }
L_0887DB8C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DBCC;
      }
      goto L_0887DBA8;
    }
L_0887DBA8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DBCC;
      }
      goto L_0887DBC4;
    }
L_0887DBC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DBD0;
      }
      goto L_0887DBCC;
    }
L_0887DBCC:
    ctx.gpr[5] = (0u | 0u);
    goto L_0887DBD0;
L_0887DBD0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC4C;
      }
      goto L_0887DBD8;
    }
L_0887DBD8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC4C;
      }
      goto L_0887DBE8;
    }
L_0887DBE8:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887DC14;
      }
      goto L_0887DBF4;
    }
L_0887DBF4:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887DC30;
      }
      goto L_0887DBFC;
    }
L_0887DBFC:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887DC14;
      }
      goto L_0887DC04;
    }
L_0887DC04:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887DC30;
      }
      goto L_0887DC0C;
    }
L_0887DC0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0887DC4C;
      }
      goto L_0887DC14;
    }
L_0887DC14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC28;
      }
      goto L_0887DC24;
    }
L_0887DC24:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887DC28;
L_0887DC28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC4C;
      }
      goto L_0887DC30;
    }
L_0887DC30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC44;
      }
      goto L_0887DC40;
    }
L_0887DC40:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887DC44;
L_0887DC44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DC4C;
      }
      goto L_0887DC4C;
    }
L_0887DC4C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887DC78;
      }
      goto L_0887DC70;
    }
L_0887DC70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887DCC8;
      }
      goto L_0887DC78;
    }
L_0887DC78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887DCA4;
      }
      goto L_0887DC90;
    }
L_0887DC90:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887DCC8;
      }
      goto L_0887DCA4;
    }
L_0887DCA4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DCC8;
      }
      goto L_0887DCC4;
    }
L_0887DCC4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887DCC8;
L_0887DCC8:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD48;
      }
      goto L_0887DCD0;
    }
L_0887DCD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
      if (branch_taken) {
          goto L_0887DD14;
      }
      goto L_0887DCD8;
    }
L_0887DCD8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887DD0Cu);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887DD0Cu) goto L_0887DD0C;
    return;
L_0887DD0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD48;
      }
      goto L_0887DD14;
    }
L_0887DD14:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887DD48u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887DD48u) goto L_0887DD48;
    return;
L_0887DD48:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD68;
      }
      goto L_0887DD58;
    }
L_0887DD58:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD68;
      }
      goto L_0887DD60;
    }
L_0887DD60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DD68;
      }
      goto L_0887DD68;
    }
L_0887DD68:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DD90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-259));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[21] = (2269u << 16u);
      if (branch_taken) {
          goto L_0887DDDC;
      }
      goto L_0887DDD0;
    }
L_0887DDD0:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887DDE4;
      }
      goto L_0887DDDC;
    }
L_0887DDDC:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0887DDE4;
L_0887DDE4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0887DDF4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B8B4u>(ctx, &aot_mem) && ctx.pc == 0x0887DDF4u) goto L_0887DDF4;
    return;
L_0887DDF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887DE08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887DE08u) goto L_0887DE08;
    return;
L_0887DE08:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE34;
      }
      goto L_0887DE14;
    }
L_0887DE14:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-241));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(24) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[21] + static_cast<std::uint32_t>(-2992));
      if (branch_taken) {
          goto L_0887DE3C;
      }
      goto L_0887DE2C;
    }
L_0887DE2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE60;
      }
      goto L_0887DE34;
    }
L_0887DE34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E16C;
      }
      goto L_0887DE3C;
    }
L_0887DE3C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE60;
      }
      goto L_0887DE48;
    }
L_0887DE48:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DE6C;
      }
      goto L_0887DE60;
    }
L_0887DE60:
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[8] + static_cast<std::uint32_t>(0);
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
    goto L_0887DE6C;
L_0887DE6C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DEC4;
      }
      goto L_0887DE74;
    }
L_0887DE74:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-896)));
    jump_target = ctx.gpr[1];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887DE8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DEC4;
      }
      goto L_0887DE94;
    }
L_0887DE94:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    ctx.gpr[31] = (0x0887DEA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    goto L_0887C768;
L_0887DEA4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_0887DEBC;
      }
      goto L_0887DEB4;
    }
L_0887DEB4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887DEBC;
L_0887DEBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887DEC4;
      }
      goto L_0887DEC4;
    }
L_0887DEC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887DEE8;
      }
      goto L_0887DED0;
    }
L_0887DED0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887DEF4;
      }
      goto L_0887DEE8;
    }
L_0887DEE8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    goto L_0887DEF4;
L_0887DEF4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E06C;
      }
      goto L_0887DEFC;
    }
L_0887DEFC:
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[15];
      if (branch_taken) {
          goto L_0887DFA4;
      }
      goto L_0887DF08;
    }
L_0887DF08:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF9C;
      }
      goto L_0887DF1C;
    }
L_0887DF1C:
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF9C;
      }
      goto L_0887DF34;
    }
L_0887DF34:
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF9C;
      }
      goto L_0887DF4C;
    }
L_0887DF4C:
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF9C;
      }
      goto L_0887DF64;
    }
L_0887DF64:
    ctx.fpr[18] = ctx.fpr[14] - ctx.fpr[17];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF9C;
      }
      goto L_0887DF7C;
    }
L_0887DF7C:
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887DF9C;
      }
      goto L_0887DF94;
    }
L_0887DF94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E00C;
      }
      goto L_0887DF9C;
    }
L_0887DF9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E00C;
      }
      goto L_0887DFA4;
    }
L_0887DFA4:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E008;
      }
      goto L_0887DFB8;
    }
L_0887DFB8:
    ctx.fpr[17] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E008;
      }
      goto L_0887DFD0;
    }
L_0887DFD0:
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E008;
      }
      goto L_0887DFE8;
    }
L_0887DFE8:
    ctx.fpr[17] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E008;
      }
      goto L_0887E000;
    }
L_0887E000:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[8] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E00C;
      }
      goto L_0887E008;
    }
L_0887E008:
    ctx.gpr[8] = (0u | 0u);
    goto L_0887E00C;
L_0887E00C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E06C;
      }
      goto L_0887E014;
    }
L_0887E014:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E06C;
      }
      goto L_0887E01C;
    }
L_0887E01C:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-800)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E06C;
      }
      goto L_0887E03C;
    }
L_0887E03C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E04C;
      }
      goto L_0887E048;
    }
L_0887E048:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E04C;
L_0887E04C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E06C;
      }
      goto L_0887E054;
    }
L_0887E054:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E064;
      }
      goto L_0887E060;
    }
L_0887E060:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E064;
L_0887E064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E06C;
      }
      goto L_0887E06C;
    }
L_0887E06C:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887E098;
      }
      goto L_0887E090;
    }
L_0887E090:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E0E8;
      }
      goto L_0887E098;
    }
L_0887E098:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0887E0C4;
      }
      goto L_0887E0B0;
    }
L_0887E0B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887E0E8;
      }
      goto L_0887E0C4;
    }
L_0887E0C4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E0E8;
      }
      goto L_0887E0E4;
    }
L_0887E0E4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887E0E8;
L_0887E0E8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E14C;
      }
      goto L_0887E0F0;
    }
L_0887E0F0:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
      if (branch_taken) {
          goto L_0887E130;
      }
      goto L_0887E10C;
    }
L_0887E10C:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x0887E128u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887E128u) goto L_0887E128;
    return;
L_0887E128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E14C;
      }
      goto L_0887E130;
    }
L_0887E130:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x0887E14Cu);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887E14Cu) goto L_0887E14C;
    return;
L_0887E14C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E16C;
      }
      goto L_0887E15C;
    }
L_0887E15C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E16C;
      }
      goto L_0887E164;
    }
L_0887E164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E16C;
      }
      goto L_0887E16C;
    }
L_0887E16C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E190:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 265 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887E1EC;
      }
      goto L_0887E1D8;
    }
L_0887E1D8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 268 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E1EC;
      }
      goto L_0887E1E4;
    }
L_0887E1E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E1F0;
      }
      goto L_0887E1EC;
    }
L_0887E1EC:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887E1F0;
L_0887E1F0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E214;
      }
      goto L_0887E1F8;
    }
L_0887E1F8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887E20Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E20Cu) goto L_0887E20C;
    return;
L_0887E20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E228;
      }
      goto L_0887E214;
    }
L_0887E214:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887E228u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E228u) goto L_0887E228;
    return;
L_0887E228:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[31] = (0x0887E238u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887E238u) goto L_0887E238;
    return;
L_0887E238:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887E248u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887E248u) goto L_0887E248;
    return;
L_0887E248:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887E278;
      }
      goto L_0887E254;
    }
L_0887E254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E278;
      }
      goto L_0887E260;
    }
L_0887E260:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E284;
      }
      goto L_0887E278;
    }
L_0887E278:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0887E284;
L_0887E284:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E2B4;
      }
      goto L_0887E290;
    }
L_0887E290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E2B4;
      }
      goto L_0887E29C;
    }
L_0887E29C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E2C0;
      }
      goto L_0887E2B4;
    }
L_0887E2B4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0887E2C0;
L_0887E2C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_0887E2D8;
      }
      goto L_0887E2CC;
    }
L_0887E2CC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887E2DC;
      }
      goto L_0887E2D8;
    }
L_0887E2D8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887E2DC;
L_0887E2DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E39C;
      }
      goto L_0887E2E4;
    }
L_0887E2E4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E394;
      }
      goto L_0887E300;
    }
L_0887E300:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E394;
      }
      goto L_0887E31C;
    }
L_0887E31C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E394;
      }
      goto L_0887E338;
    }
L_0887E338:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E394;
      }
      goto L_0887E354;
    }
L_0887E354:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E394;
      }
      goto L_0887E370;
    }
L_0887E370:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E394;
      }
      goto L_0887E38C;
    }
L_0887E38C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E418;
      }
      goto L_0887E394;
    }
L_0887E394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E418;
      }
      goto L_0887E39C;
    }
L_0887E39C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E414;
      }
      goto L_0887E3B8;
    }
L_0887E3B8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E414;
      }
      goto L_0887E3D4;
    }
L_0887E3D4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E414;
      }
      goto L_0887E3F0;
    }
L_0887E3F0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E414;
      }
      goto L_0887E40C;
    }
L_0887E40C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E418;
      }
      goto L_0887E414;
    }
L_0887E414:
    ctx.gpr[6] = (0u | 0u);
    goto L_0887E418;
L_0887E418:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E480;
      }
      goto L_0887E420;
    }
L_0887E420:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-247));
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E480;
      }
      goto L_0887E430;
    }
L_0887E430:
    ctx.gpr[17] = (ctx.gpr[17] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[17]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-704)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E480;
      }
      goto L_0887E450;
    }
L_0887E450:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E460;
      }
      goto L_0887E45C;
    }
L_0887E45C:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E460;
L_0887E460:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E480;
      }
      goto L_0887E468;
    }
L_0887E468:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E478;
      }
      goto L_0887E474;
    }
L_0887E474:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E478;
L_0887E478:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E480;
      }
      goto L_0887E480;
    }
L_0887E480:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887E4AC;
      }
      goto L_0887E4A4;
    }
L_0887E4A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E4FC;
      }
      goto L_0887E4AC;
    }
L_0887E4AC:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0887E4D8;
      }
      goto L_0887E4C4;
    }
L_0887E4C4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E4FC;
      }
      goto L_0887E4D8;
    }
L_0887E4D8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E4FC;
      }
      goto L_0887E4F8;
    }
L_0887E4F8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887E4FC;
L_0887E4FC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E57C;
      }
      goto L_0887E504;
    }
L_0887E504:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887E548;
      }
      goto L_0887E50C;
    }
L_0887E50C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887E540u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887E540u) goto L_0887E540;
    return;
L_0887E540:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E57C;
      }
      goto L_0887E548;
    }
L_0887E548:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[6] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887E57Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887E57Cu) goto L_0887E57C;
    return;
L_0887E57C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E59C;
      }
      goto L_0887E58C;
    }
L_0887E58C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E59C;
      }
      goto L_0887E594;
    }
L_0887E594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E59C;
      }
      goto L_0887E59C;
    }
L_0887E59C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E5C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 522 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887E618;
      }
      goto L_0887E604;
    }
L_0887E604:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 525 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E618;
      }
      goto L_0887E610;
    }
L_0887E610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E61C;
      }
      goto L_0887E618;
    }
L_0887E618:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887E61C;
L_0887E61C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E640;
      }
      goto L_0887E624;
    }
L_0887E624:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887E638u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E638u) goto L_0887E638;
    return;
L_0887E638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E654;
      }
      goto L_0887E640;
    }
L_0887E640:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887E654u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887E654u) goto L_0887E654;
    return;
L_0887E654:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0887E664u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887E664u) goto L_0887E664;
    return;
L_0887E664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887E678u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0887E678u) goto L_0887E678;
    return;
L_0887E678:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887E6A8;
      }
      goto L_0887E684;
    }
L_0887E684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E6A8;
      }
      goto L_0887E690;
    }
L_0887E690:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E6B4;
      }
      goto L_0887E6A8;
    }
L_0887E6A8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0887E6B4;
L_0887E6B4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E6E0;
      }
      goto L_0887E6D4;
    }
L_0887E6D4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887E6E4;
      }
      goto L_0887E6E0;
    }
L_0887E6E0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887E6E4;
L_0887E6E4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E7A4;
      }
      goto L_0887E6EC;
    }
L_0887E6EC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E79C;
      }
      goto L_0887E708;
    }
L_0887E708:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E79C;
      }
      goto L_0887E724;
    }
L_0887E724:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E79C;
      }
      goto L_0887E740;
    }
L_0887E740:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E79C;
      }
      goto L_0887E75C;
    }
L_0887E75C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E79C;
      }
      goto L_0887E778;
    }
L_0887E778:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E79C;
      }
      goto L_0887E794;
    }
L_0887E794:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E820;
      }
      goto L_0887E79C;
    }
L_0887E79C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0887E820;
      }
      goto L_0887E7A4;
    }
L_0887E7A4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E81C;
      }
      goto L_0887E7C0;
    }
L_0887E7C0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E81C;
      }
      goto L_0887E7DC;
    }
L_0887E7DC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E81C;
      }
      goto L_0887E7F8;
    }
L_0887E7F8:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887E81C;
      }
      goto L_0887E814;
    }
L_0887E814:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E820;
      }
      goto L_0887E81C;
    }
L_0887E81C:
    ctx.gpr[6] = (0u | 0u);
    goto L_0887E820;
L_0887E820:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E894;
      }
      goto L_0887E828;
    }
L_0887E828:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-519));
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E894;
      }
      goto L_0887E838;
    }
L_0887E838:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887E864;
      }
      goto L_0887E844;
    }
L_0887E844:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887E87C;
      }
      goto L_0887E84C;
    }
L_0887E84C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887E864;
      }
      goto L_0887E854;
    }
L_0887E854:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887E87C;
      }
      goto L_0887E85C;
    }
L_0887E85C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887E894;
      }
      goto L_0887E864;
    }
L_0887E864:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887E874;
      }
      goto L_0887E870;
    }
L_0887E870:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E874;
L_0887E874:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E894;
      }
      goto L_0887E87C;
    }
L_0887E87C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E88C;
      }
      goto L_0887E888;
    }
L_0887E888:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887E88C;
L_0887E88C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E894;
      }
      goto L_0887E894;
    }
L_0887E894:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887E8C0;
      }
      goto L_0887E8B8;
    }
L_0887E8B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E910;
      }
      goto L_0887E8C0;
    }
L_0887E8C0:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0887E8EC;
      }
      goto L_0887E8D8;
    }
L_0887E8D8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887E910;
      }
      goto L_0887E8EC;
    }
L_0887E8EC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E910;
      }
      goto L_0887E90C;
    }
L_0887E90C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887E910;
L_0887E910:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E990;
      }
      goto L_0887E918;
    }
L_0887E918:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887E95C;
      }
      goto L_0887E920;
    }
L_0887E920:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887E954u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887E954u) goto L_0887E954;
    return;
L_0887E954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E990;
      }
      goto L_0887E95C;
    }
L_0887E95C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[6] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887E990u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887E990u) goto L_0887E990;
    return;
L_0887E990:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E9B0;
      }
      goto L_0887E9A0;
    }
L_0887E9A0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E9B0;
      }
      goto L_0887E9A8;
    }
L_0887E9A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887E9B0;
      }
      goto L_0887E9B0;
    }
L_0887E9B0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887E9D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    ctx.gpr[19] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1145 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887EA28;
      }
      goto L_0887EA14;
    }
L_0887EA14:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1148 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EA28;
      }
      goto L_0887EA20;
    }
L_0887EA20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_0887EA2C;
      }
      goto L_0887EA28;
    }
L_0887EA28:
    ctx.gpr[18] = (0u | 0u);
    goto L_0887EA2C;
L_0887EA2C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EA50;
      }
      goto L_0887EA34;
    }
L_0887EA34:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0887EA48u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EA48u) goto L_0887EA48;
    return;
L_0887EA48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EA64;
      }
      goto L_0887EA50;
    }
L_0887EA50:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0887EA64u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0887EA64u) goto L_0887EA64;
    return;
L_0887EA64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0887EA74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887EA74u) goto L_0887EA74;
    return;
L_0887EA74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887EA88u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0887EA88u) goto L_0887EA88;
    return;
L_0887EA88:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887EAB8;
      }
      goto L_0887EA94;
    }
L_0887EA94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EAB8;
      }
      goto L_0887EAA0;
    }
L_0887EAA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EAC4;
      }
      goto L_0887EAB8;
    }
L_0887EAB8:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0887EAC4;
L_0887EAC4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EAF0;
      }
      goto L_0887EAE4;
    }
L_0887EAE4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887EAF4;
      }
      goto L_0887EAF0;
    }
L_0887EAF0:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    goto L_0887EAF4;
L_0887EAF4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887EBB4;
      }
      goto L_0887EAFC;
    }
L_0887EAFC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EBAC;
      }
      goto L_0887EB18;
    }
L_0887EB18:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EBAC;
      }
      goto L_0887EB34;
    }
L_0887EB34:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EBAC;
      }
      goto L_0887EB50;
    }
L_0887EB50:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EBAC;
      }
      goto L_0887EB6C;
    }
L_0887EB6C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EBAC;
      }
      goto L_0887EB88;
    }
L_0887EB88:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EBAC;
      }
      goto L_0887EBA4;
    }
L_0887EBA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887EC30;
      }
      goto L_0887EBAC;
    }
L_0887EBAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0887EC30;
      }
      goto L_0887EBB4;
    }
L_0887EBB4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EC2C;
      }
      goto L_0887EBD0;
    }
L_0887EBD0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EC2C;
      }
      goto L_0887EBEC;
    }
L_0887EBEC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EC2C;
      }
      goto L_0887EC08;
    }
L_0887EC08:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887EC2C;
      }
      goto L_0887EC24;
    }
L_0887EC24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887EC30;
      }
      goto L_0887EC2C;
    }
L_0887EC2C:
    ctx.gpr[6] = (0u | 0u);
    goto L_0887EC30;
L_0887EC30:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ECA4;
      }
      goto L_0887EC38;
    }
L_0887EC38:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1142));
    ctx.gpr[6] = (ctx.gpr[17] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ECA4;
      }
      goto L_0887EC48;
    }
L_0887EC48:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0887EC74;
      }
      goto L_0887EC54;
    }
L_0887EC54:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0887EC8C;
      }
      goto L_0887EC5C;
    }
L_0887EC5C:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_0887EC74;
      }
      goto L_0887EC64;
    }
L_0887EC64:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_0887EC8C;
      }
      goto L_0887EC6C;
    }
L_0887EC6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887ECA4;
      }
      goto L_0887EC74;
    }
L_0887EC74:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887EC84;
      }
      goto L_0887EC80;
    }
L_0887EC80:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887EC84;
L_0887EC84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ECA4;
      }
      goto L_0887EC8C;
    }
L_0887EC8C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EC9C;
      }
      goto L_0887EC98;
    }
L_0887EC98:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887EC9C;
L_0887EC9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ECA4;
      }
      goto L_0887ECA4;
    }
L_0887ECA4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887ECD0;
      }
      goto L_0887ECC8;
    }
L_0887ECC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887ED20;
      }
      goto L_0887ECD0;
    }
L_0887ECD0:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[8]));
      if (branch_taken) {
          goto L_0887ECFC;
      }
      goto L_0887ECE8;
    }
L_0887ECE8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887ED20;
      }
      goto L_0887ECFC;
    }
L_0887ECFC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[7]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887ED20;
      }
      goto L_0887ED1C;
    }
L_0887ED1C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887ED20;
L_0887ED20:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EDA0;
      }
      goto L_0887ED28;
    }
L_0887ED28:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0887ED6C;
      }
      goto L_0887ED30;
    }
L_0887ED30:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[16] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[15] - ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887ED64u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887ED64u) goto L_0887ED64;
    return;
L_0887ED64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EDA0;
      }
      goto L_0887ED6C;
    }
L_0887ED6C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[17] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.fpr[18] = ctx.fpr[15] - ctx.fpr[13];
    ctx.gpr[6] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.fpr[15] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887EDA0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887EDA0u) goto L_0887EDA0;
    return;
L_0887EDA0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EDC0;
      }
      goto L_0887EDB0;
    }
L_0887EDB0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EDC0;
      }
      goto L_0887EDB8;
    }
L_0887EDB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EDC0;
      }
      goto L_0887EDC0;
    }
L_0887EDC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887EDE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 436 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887EE40;
      }
      goto L_0887EE28;
    }
L_0887EE28:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 438 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EE40;
      }
      goto L_0887EE34;
    }
L_0887EE34:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887EE48;
      }
      goto L_0887EE40;
    }
L_0887EE40:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887EE48;
L_0887EE48:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887EE5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B8B4u>(ctx, &aot_mem) && ctx.pc == 0x0887EE5Cu) goto L_0887EE5C;
    return;
L_0887EE5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887EE70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0887EE70u) goto L_0887EE70;
    return;
L_0887EE70:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 436 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887EE9C;
      }
      goto L_0887EE80;
    }
L_0887EE80:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 434 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 435 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887EED0;
      }
      goto L_0887EE8C;
    }
L_0887EE8C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EEB0;
      }
      goto L_0887EE94;
    }
L_0887EE94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EED0;
      }
      goto L_0887EE9C;
    }
L_0887EE9C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 437 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 438 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887EE94;
      }
      goto L_0887EEA8;
    }
L_0887EEA8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EED0;
      }
      goto L_0887EEB0;
    }
L_0887EEB0:
    ctx.gpr[31] = (0x0887EEB8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0887C998;
L_0887EEB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0887EEC8;
      }
      goto L_0887EEC0;
    }
L_0887EEC0:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887EEC8;
L_0887EEC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887EED0;
      }
      goto L_0887EED0;
    }
L_0887EED0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887EEF4;
      }
      goto L_0887EEDC;
    }
L_0887EEDC:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887EF00;
      }
      goto L_0887EEF4;
    }
L_0887EEF4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_0887EF00;
L_0887EF00:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EF08;
    }
L_0887EF08:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[18] = ctx.fpr[12] - ctx.fpr[15];
      if (branch_taken) {
          goto L_0887EFB8;
      }
      goto L_0887EF24;
    }
L_0887EF24:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EF38;
    }
L_0887EF38:
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EF50;
    }
L_0887EF50:
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EF68;
    }
L_0887EF68:
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EF80;
    }
L_0887EF80:
    ctx.fpr[18] = ctx.fpr[14] - ctx.fpr[17];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EF98;
    }
L_0887EF98:
    ctx.fpr[17] = ctx.fpr[17] + ctx.fpr[14];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EFB0;
    }
L_0887EFB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EFB8;
    }
L_0887EFB8:
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EFCC;
    }
L_0887EFCC:
    ctx.fpr[17] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EFE4;
    }
L_0887EFE4:
    ctx.fpr[17] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887EFFC;
    }
L_0887EFFC:
    ctx.fpr[17] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F018;
      }
      goto L_0887F014;
    }
L_0887F014:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887F018;
L_0887F018:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F044;
      }
      goto L_0887F03C;
    }
L_0887F03C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887F094;
      }
      goto L_0887F044;
    }
L_0887F044:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887F070;
      }
      goto L_0887F05C;
    }
L_0887F05C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F094;
      }
      goto L_0887F070;
    }
L_0887F070:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F094;
      }
      goto L_0887F090;
    }
L_0887F090:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887F094;
L_0887F094:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F0F8;
      }
      goto L_0887F09C;
    }
L_0887F09C:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.fpr[15] = ctx.fpr[17] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[16] = ctx.fpr[16] + ctx.fpr[17];
      if (branch_taken) {
          goto L_0887F0DC;
      }
      goto L_0887F0B8;
    }
L_0887F0B8:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x0887F0D4u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887F0D4u) goto L_0887F0D4;
    return;
L_0887F0D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F0F8;
      }
      goto L_0887F0DC;
    }
L_0887F0DC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[31] = (0x0887F0F8u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887F0F8u) goto L_0887F0F8;
    return;
L_0887F0F8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F118;
      }
      goto L_0887F108;
    }
L_0887F108:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F118;
      }
      goto L_0887F110;
    }
L_0887F110:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F118;
      }
      goto L_0887F118;
    }
L_0887F118:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F140:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[18] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u | 1259u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887F180;
      }
      goto L_0887F174;
    }
L_0887F174:
    ctx.gpr[17] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0887F188;
      }
      goto L_0887F180;
    }
L_0887F180:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887F188;
L_0887F188:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0887F19Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B8B4u>(ctx, &aot_mem) && ctx.pc == 0x0887F19Cu) goto L_0887F19C;
    return;
L_0887F19C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887F1B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0887F1B0u) goto L_0887F1B0;
    return;
L_0887F1B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_0887F1DC;
      }
      goto L_0887F1C0;
    }
L_0887F1C0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[15];
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887F1EC;
      }
      goto L_0887F1DC;
    }
L_0887F1DC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.fpr[17] = ctx.fpr[12] - ctx.fpr[15];
    goto L_0887F1EC;
L_0887F1EC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F29C;
      }
      goto L_0887F208;
    }
L_0887F208:
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F21C;
    }
L_0887F21C:
    ctx.fpr[19] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F234;
    }
L_0887F234:
    ctx.fpr[19] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F24C;
    }
L_0887F24C:
    ctx.fpr[19] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F264;
    }
L_0887F264:
    ctx.fpr[19] = ctx.fpr[14] - ctx.fpr[18];
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F27C;
    }
L_0887F27C:
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[14];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F294;
    }
L_0887F294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F29C;
    }
L_0887F29C:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[18] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F2B0;
    }
L_0887F2B0:
    ctx.fpr[18] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F2C8;
    }
L_0887F2C8:
    ctx.fpr[18] = ctx.fpr[13] - ctx.fpr[16];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] < ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F2E0;
    }
L_0887F2E0:
    ctx.fpr[18] = ctx.fpr[16] + ctx.fpr[13];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[19] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F2FC;
      }
      goto L_0887F2F8;
    }
L_0887F2F8:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887F2FC;
L_0887F2FC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F328;
      }
      goto L_0887F320;
    }
L_0887F320:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F378;
      }
      goto L_0887F328;
    }
L_0887F328:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887F354;
      }
      goto L_0887F340;
    }
L_0887F340:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F378;
      }
      goto L_0887F354;
    }
L_0887F354:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F378;
      }
      goto L_0887F374;
    }
L_0887F374:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887F378;
L_0887F378:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3C8;
      }
      goto L_0887F380;
    }
L_0887F380:
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = ctx.fpr[15] - ctx.fpr[16];
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[15] = ctx.fpr[16] + ctx.fpr[15];
      if (branch_taken) {
          goto L_0887F3B0;
      }
      goto L_0887F394;
    }
L_0887F394:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0887F3A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887F3A8u) goto L_0887F3A8;
    return;
L_0887F3A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3C8;
      }
      goto L_0887F3B0;
    }
L_0887F3B0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[31] = (0x0887F3C8u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887F3C8u) goto L_0887F3C8;
    return;
L_0887F3C8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3E8;
      }
      goto L_0887F3D8;
    }
L_0887F3D8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3E8;
      }
      goto L_0887F3E0;
    }
L_0887F3E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F3E8;
      }
      goto L_0887F3E8;
    }
L_0887F3E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F408:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[20]);
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 417 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887F478;
      }
      goto L_0887F464;
    }
L_0887F464:
    ctx.gpr[6] = (0u | 87u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887F484;
      }
      goto L_0887F470;
    }
L_0887F470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F490;
      }
      goto L_0887F478;
    }
L_0887F478:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 422 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F490;
      }
      goto L_0887F484;
    }
L_0887F484:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887F498;
      }
      goto L_0887F490;
    }
L_0887F490:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887F498;
L_0887F498:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0887F4A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B8B4u>(ctx, &aot_mem) && ctx.pc == 0x0887F4A8u) goto L_0887F4A8;
    return;
L_0887F4A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[21] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 414 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887F50C;
      }
      goto L_0887F4DC;
    }
L_0887F4DC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 88 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 412 ? 1u : 0u);
        goto L_0887F4FC;
    }
    goto L_0887F4E8;
L_0887F4E8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F554;
      }
      goto L_0887F4F4;
    }
L_0887F4F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F554;
      }
      goto L_0887F4FC;
    }
L_0887F4FC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F4F4;
      }
      goto L_0887F504;
    }
L_0887F504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F554;
      }
      goto L_0887F50C;
    }
L_0887F50C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 419 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 422 ? 1u : 0u);
        goto L_0887F52C;
    }
    goto L_0887F518;
L_0887F518:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 417 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F4F4;
      }
      goto L_0887F524;
    }
L_0887F524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F534;
      }
      goto L_0887F52C;
    }
L_0887F52C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F554;
      }
      goto L_0887F534;
    }
L_0887F534:
    ctx.gpr[31] = (0x0887F53Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    goto L_0887C830;
L_0887F53C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F54C;
      }
      goto L_0887F544;
    }
L_0887F544:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887F54C;
L_0887F54C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F554;
      }
      goto L_0887F554;
    }
L_0887F554:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_0887F598;
      }
      goto L_0887F568;
    }
L_0887F568:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887F590;
      }
      goto L_0887F588;
    }
L_0887F588:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0887F590;
L_0887F590:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887F5A4;
      }
      goto L_0887F598;
    }
L_0887F598:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    goto L_0887F5A4;
L_0887F5A4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F5BC;
      }
      goto L_0887F5B4;
    }
L_0887F5B4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887F5BC;
L_0887F5BC:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F5D4;
      }
      goto L_0887F5CC;
    }
L_0887F5CC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_0887F5D4;
L_0887F5D4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F770;
      }
      goto L_0887F5DC;
    }
L_0887F5DC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0887F5ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x0887F5ECu) goto L_0887F5EC;
    return;
L_0887F5EC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F68C;
      }
      goto L_0887F604;
    }
L_0887F604:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F684;
      }
      goto L_0887F618;
    }
L_0887F618:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F684;
      }
      goto L_0887F62C;
    }
L_0887F62C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F684;
      }
      goto L_0887F640;
    }
L_0887F640:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F684;
      }
      goto L_0887F654;
    }
L_0887F654:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F684;
      }
      goto L_0887F668;
    }
L_0887F668:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F684;
      }
      goto L_0887F67C;
    }
L_0887F67C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887F6E8;
      }
      goto L_0887F684;
    }
L_0887F684:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887F6E8;
      }
      goto L_0887F68C;
    }
L_0887F68C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F6E4;
      }
      goto L_0887F6A0;
    }
L_0887F6A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F6E4;
      }
      goto L_0887F6B4;
    }
L_0887F6B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F6E4;
      }
      goto L_0887F6C8;
    }
L_0887F6C8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887F6E4;
      }
      goto L_0887F6DC;
    }
L_0887F6DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887F6E8;
      }
      goto L_0887F6E4;
    }
L_0887F6E4:
    ctx.gpr[5] = (0u | 0u);
    goto L_0887F6E8;
L_0887F6E8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F770;
      }
      goto L_0887F6F0;
    }
L_0887F6F0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 88 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 412 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F710;
      }
      goto L_0887F6FC;
    }
L_0887F6FC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F770;
      }
      goto L_0887F708;
    }
L_0887F708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0887F770;
      }
      goto L_0887F710;
    }
L_0887F710:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 422 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F770;
      }
      goto L_0887F718;
    }
L_0887F718:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-412));
      if (branch_taken) {
          goto L_0887F770;
      }
      goto L_0887F720;
    }
L_0887F720:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-616)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F738:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887F74C;
      }
      goto L_0887F748;
    }
L_0887F748:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887F74C;
L_0887F74C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F770;
      }
      goto L_0887F754;
    }
L_0887F754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F768;
      }
      goto L_0887F764;
    }
L_0887F764:
    ctx.gpr[4] = (0u | 1u);
    goto L_0887F768;
L_0887F768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F770;
      }
      goto L_0887F770;
    }
L_0887F770:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F79C;
      }
      goto L_0887F794;
    }
L_0887F794:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F7EC;
      }
      goto L_0887F79C;
    }
L_0887F79C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887F7C8;
      }
      goto L_0887F7B4;
    }
L_0887F7B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887F7EC;
      }
      goto L_0887F7C8;
    }
L_0887F7C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F7EC;
      }
      goto L_0887F7E8;
    }
L_0887F7E8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887F7EC;
L_0887F7EC:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F84C;
      }
      goto L_0887F7F4;
    }
L_0887F7F4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F82C;
      }
      goto L_0887F7FC;
    }
L_0887F7FC:
    ctx.fpr[16] = ctx.fpr[24] + ctx.fpr[30];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x0887F824u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887F824u) goto L_0887F824;
    return;
L_0887F824:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F84C;
      }
      goto L_0887F82C;
    }
L_0887F82C:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0887F84Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887F84Cu) goto L_0887F84C;
    return;
L_0887F84C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F85C;
      }
      goto L_0887F85C;
    }
L_0887F85C:
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
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887F89C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 427 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887F8FC;
      }
      goto L_0887F8E8;
    }
L_0887F8E8:
    ctx.gpr[6] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887F908;
      }
      goto L_0887F8F4;
    }
L_0887F8F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F914;
      }
      goto L_0887F8FC;
    }
L_0887F8FC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 432 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F914;
      }
      goto L_0887F908;
    }
L_0887F908:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887F91C;
      }
      goto L_0887F914;
    }
L_0887F914:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887F91C;
L_0887F91C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0887F930u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B8B4u>(ctx, &aot_mem) && ctx.pc == 0x0887F930u) goto L_0887F930;
    return;
L_0887F930:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887F944u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0887F944u) goto L_0887F944;
    return;
L_0887F944:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F978;
      }
      goto L_0887F954;
    }
L_0887F954:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F978;
      }
      goto L_0887F960;
    }
L_0887F960:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F984;
      }
      goto L_0887F978;
    }
L_0887F978:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_0887F984;
L_0887F984:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 424 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 429 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887F9C4;
      }
      goto L_0887F994;
    }
L_0887F994:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 165 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 422 ? 1u : 0u);
        goto L_0887F9B4;
    }
    goto L_0887F9A0;
L_0887F9A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 163 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FA08;
      }
      goto L_0887F9AC;
    }
L_0887F9AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FA08;
      }
      goto L_0887F9B4;
    }
L_0887F9B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9AC;
      }
      goto L_0887F9BC;
    }
L_0887F9BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FA08;
      }
      goto L_0887F9C4;
    }
L_0887F9C4:
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 432 ? 1u : 0u);
        goto L_0887F9E0;
    }
    goto L_0887F9CC;
L_0887F9CC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 427 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9AC;
      }
      goto L_0887F9D8;
    }
L_0887F9D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887F9E8;
      }
      goto L_0887F9E0;
    }
L_0887F9E0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FA08;
      }
      goto L_0887F9E8;
    }
L_0887F9E8:
    ctx.gpr[31] = (0x0887F9F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0887C768;
L_0887F9F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0887FA00;
      }
      goto L_0887F9F8;
    }
L_0887F9F8:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887FA00;
L_0887FA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FA08;
      }
      goto L_0887FA08;
    }
L_0887FA08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0887FA4C;
      }
      goto L_0887FA1C;
    }
L_0887FA1C:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887FA44;
      }
      goto L_0887FA3C;
    }
L_0887FA3C:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0887FA44;
L_0887FA44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887FA58;
      }
      goto L_0887FA4C;
    }
L_0887FA4C:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(20)));
    goto L_0887FA58;
L_0887FA58:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FA70;
      }
      goto L_0887FA68;
    }
L_0887FA68:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887FA70;
L_0887FA70:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FA88;
      }
      goto L_0887FA80;
    }
L_0887FA80:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0887FA88;
L_0887FA88:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBFC;
      }
      goto L_0887FA90;
    }
L_0887FA90:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FB20;
      }
      goto L_0887FA98;
    }
L_0887FA98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB18;
      }
      goto L_0887FAAC;
    }
L_0887FAAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB18;
      }
      goto L_0887FAC0;
    }
L_0887FAC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB18;
      }
      goto L_0887FAD4;
    }
L_0887FAD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB18;
      }
      goto L_0887FAE8;
    }
L_0887FAE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB18;
      }
      goto L_0887FAFC;
    }
L_0887FAFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB18;
      }
      goto L_0887FB10;
    }
L_0887FB10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FB7C;
      }
      goto L_0887FB18;
    }
L_0887FB18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0887FB7C;
      }
      goto L_0887FB20;
    }
L_0887FB20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB78;
      }
      goto L_0887FB34;
    }
L_0887FB34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB78;
      }
      goto L_0887FB48;
    }
L_0887FB48:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB78;
      }
      goto L_0887FB5C;
    }
L_0887FB5C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FB78;
      }
      goto L_0887FB70;
    }
L_0887FB70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FB7C;
      }
      goto L_0887FB78;
    }
L_0887FB78:
    ctx.gpr[6] = (0u | 0u);
    goto L_0887FB7C;
L_0887FB7C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBFC;
      }
      goto L_0887FB84;
    }
L_0887FB84:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 165 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 422 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FBA4;
      }
      goto L_0887FB90;
    }
L_0887FB90:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 163 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBFC;
      }
      goto L_0887FB9C;
    }
L_0887FB9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FBFC;
      }
      goto L_0887FBA4;
    }
L_0887FBA4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 432 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FBFC;
      }
      goto L_0887FBAC;
    }
L_0887FBAC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-422));
      if (branch_taken) {
          goto L_0887FBFC;
      }
      goto L_0887FBB4;
    }
L_0887FBB4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-576)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FBCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBDC;
      }
      goto L_0887FBD8;
    }
L_0887FBD8:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887FBDC;
L_0887FBDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBFC;
      }
      goto L_0887FBE4;
    }
L_0887FBE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBF4;
      }
      goto L_0887FBF0;
    }
L_0887FBF0:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887FBF4;
L_0887FBF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FBFC;
      }
      goto L_0887FBFC;
    }
L_0887FBFC:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FC28;
      }
      goto L_0887FC20;
    }
L_0887FC20:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_0887FC78;
      }
      goto L_0887FC28;
    }
L_0887FC28:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887FC54;
      }
      goto L_0887FC40;
    }
L_0887FC40:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0887FC78;
      }
      goto L_0887FC54;
    }
L_0887FC54:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FC78;
      }
      goto L_0887FC74;
    }
L_0887FC74:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0887FC78;
L_0887FC78:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FCD8;
      }
      goto L_0887FC80;
    }
L_0887FC80:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FCB8;
      }
      goto L_0887FC88;
    }
L_0887FC88:
    ctx.fpr[16] = ctx.fpr[17] + ctx.fpr[0];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.gpr[31] = (0x0887FCB0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887FCB0u) goto L_0887FCB0;
    return;
L_0887FCB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FCD8;
      }
      goto L_0887FCB8;
    }
L_0887FCB8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x0887FCD8u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BDA8u>(ctx, &aot_mem) && ctx.pc == 0x0887FCD8u) goto L_0887FCD8;
    return;
L_0887FCD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7276)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FCE8;
      }
      goto L_0887FCE8;
    }
L_0887FCE8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0887FD14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 178 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[20] + static_cast<std::uint32_t>(-2992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0887FD6C;
      }
      goto L_0887FD58;
    }
L_0887FD58:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 177 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FD84;
      }
      goto L_0887FD64;
    }
L_0887FD64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FD78;
      }
      goto L_0887FD6C;
    }
L_0887FD6C:
    ctx.gpr[6] = (0u | 433u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_0887FD84;
      }
      goto L_0887FD78;
    }
L_0887FD78:
    ctx.gpr[19] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_0887FD8C;
      }
      goto L_0887FD84;
    }
L_0887FD84:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    goto L_0887FD8C;
L_0887FD8C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0887FDA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 618u, 0x0887B8B4u>(ctx, &aot_mem) && ctx.pc == 0x0887FDA0u) goto L_0887FDA0;
    return;
L_0887FDA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0887FDB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0887FDB4u) goto L_0887FDB4;
    return;
L_0887FDB4:
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 178 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0887FDD8;
      }
      goto L_0887FDC4;
    }
L_0887FDC4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 176 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FE0C;
      }
      goto L_0887FDD0;
    }
L_0887FDD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FE0C;
      }
      goto L_0887FDD8;
    }
L_0887FDD8:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 432 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 434 ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FE0C;
      }
      goto L_0887FDE4;
    }
L_0887FDE4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FE0C;
      }
      goto L_0887FDEC;
    }
L_0887FDEC:
    ctx.gpr[31] = (0x0887FDF4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    goto L_0887C998;
L_0887FDF4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
      if (branch_taken) {
          goto L_0887FE04;
      }
      goto L_0887FDFC;
    }
L_0887FDFC:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[18] = (0u | 1u);
    goto L_0887FE04;
L_0887FE04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FE0C;
      }
      goto L_0887FE0C;
    }
L_0887FE0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_0887FE50;
      }
      goto L_0887FE20;
    }
L_0887FE20:
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0887FE48;
      }
      goto L_0887FE40;
    }
L_0887FE40:
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    goto L_0887FE48;
L_0887FE48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(28)));
      if (branch_taken) {
          goto L_0887FE5C;
      }
      goto L_0887FE50;
    }
L_0887FE50:
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(12)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(16)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(20)));
    goto L_0887FE5C;
L_0887FE5C:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FE74;
      }
      goto L_0887FE6C;
    }
L_0887FE6C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0887FE74;
L_0887FE74:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FE8C;
      }
      goto L_0887FE84;
    }
L_0887FE84:
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_0887FE8C;
L_0887FE8C:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FE94;
    }
L_0887FE94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0887FF30;
      }
      goto L_0887FEB0;
    }
L_0887FEB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FEC4;
    }
L_0887FEC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FED8;
    }
L_0887FED8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FEEC;
    }
L_0887FEEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FF00;
    }
L_0887FF00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FF14;
    }
L_0887FF14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FF28;
    }
L_0887FF28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FF30;
    }
L_0887FF30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FF44;
    }
L_0887FF44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[18]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FF58;
    }
L_0887FF58:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FF6C;
    }
L_0887FF6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[19]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0887FF84;
      }
      goto L_0887FF80;
    }
L_0887FF80:
    ctx.gpr[5] = (0u | 1u);
    goto L_0887FF84;
L_0887FF84:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_0887FFB0;
      }
      goto L_0887FFA8;
    }
L_0887FFA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 1u, 0x08880000u>(ctx, &aot_mem); return;
      }
      goto L_0887FFB0;
    }
L_0887FFB0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
      if (branch_taken) {
          goto L_0887FFDC;
      }
      goto L_0887FFC8;
    }
L_0887FFC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 1u, 0x08880000u>(ctx, &aot_mem); return;
      }
      goto L_0887FFDC;
    }
L_0887FFDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 1u, 0x08880000u>(ctx, &aot_mem); return;
      }
      goto L_0887FFFC;
    }
L_0887FFFC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    ctx.pc = 0x08880000u; return;
}

void recomp_unit_0030(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0030_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_30(Runtime &runtime) {
    runtime.register_generated_unit(30u, 0x0887C000u, 16384u, &recomp_unit_0030, &recomp_unit_0030_entry);
    runtime.register_function(0x0887C004u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C014u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C018u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C01Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C044u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C050u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C068u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C074u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C09Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C0B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C104u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C110u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C11Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C128u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C134u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C144u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C14Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C158u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C160u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C168u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C178u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C1F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C200u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C20Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C218u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C230u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C238u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C240u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C250u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C27Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C2F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C318u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C320u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C328u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C338u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C368u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C3ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C410u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C418u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C420u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C430u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C464u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C4E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C504u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C50Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C514u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C524u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C554u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C564u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C578u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C590u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C598u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C59Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C5FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C600u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C610u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C620u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C628u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C630u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C640u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C650u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C658u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C664u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C688u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C68Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C6FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C718u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C720u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C734u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C768u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C774u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C780u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C7F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C808u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C81Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C824u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C828u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C830u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C850u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C85Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C888u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C890u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C89Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C8FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C90Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C914u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C91Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C924u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C934u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C93Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C950u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C968u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C97Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C984u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C988u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C998u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887C9F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CA9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CAECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CB98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CBF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CC64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CCF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CD90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDE0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CDF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CE54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CF90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887CFF8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D014u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D02Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D04Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D188u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D190u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D1D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D230u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D23Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D244u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D254u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D280u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D298u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D2F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D308u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D31Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D348u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D368u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D380u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D388u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D3F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D404u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D408u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D410u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D434u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D43Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D454u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D468u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D488u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D48Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D494u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D4F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D500u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D508u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D510u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D54Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D594u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D5E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D618u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D62Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D644u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D650u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D668u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D674u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D680u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D68Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D690u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D698u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6D0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D6ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D708u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D724u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D740u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D748u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D750u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D76Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D788u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D7FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D804u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D814u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D818u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D820u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D830u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D834u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D83Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D860u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D868u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D880u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D894u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D8FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D904u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D934u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D944u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D94Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D954u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D980u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887D9FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DA9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DAF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DB8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DBFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DC90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DCD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DD90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DDF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE60u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DE94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEBCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DED0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DEFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DF9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887DFE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E000u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E008u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E00Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E014u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E01Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E034u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E03Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E048u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E04Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E054u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E060u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E064u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E06Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E090u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E098u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E0F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E10Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E128u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E130u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E14Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E15Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E164u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E16Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E190u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E1F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E20Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E214u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E228u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E238u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E248u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E254u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E260u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E278u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E284u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E290u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E29Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E2E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E300u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E31Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E338u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E354u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E370u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E38Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E394u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E39Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E3F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E40Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E414u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E418u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E420u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E430u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E448u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E450u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E45Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E460u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E468u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E474u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E478u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E480u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E4FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E504u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E50Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E540u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E548u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E57Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E58Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E594u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E59Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E5C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E604u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E610u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E618u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E61Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E624u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E638u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E640u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E654u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E664u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E678u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E684u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E690u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E6ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E708u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E724u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E740u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E75Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E778u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E794u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E79Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E7F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E814u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E81Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E820u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E828u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E838u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E844u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E84Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E854u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E85Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E864u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E870u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E874u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E87Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E888u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E88Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E894u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E8ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E90Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E910u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E918u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E920u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E954u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E95Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E990u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887E9D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EA94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EAFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EB88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EBECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC2Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EC9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ECFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887ED6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EDE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EE9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EED0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EEF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF24u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF38u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EF98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887EFFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F014u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F018u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F03Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F044u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F05Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F070u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F090u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F094u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F09Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0B8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F0F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F108u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F110u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F118u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F140u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F174u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F180u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F188u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F19Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1C0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F1ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F208u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F21Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F234u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F24Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F264u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F27Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F294u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F29Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F2FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F320u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F328u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F340u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F354u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F374u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F378u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F380u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F394u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3B0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F3E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F408u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F464u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F470u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F478u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F484u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F490u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F498u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4A8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F4FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F504u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F50Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F518u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F524u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F52Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F534u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F53Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F544u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F54Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F554u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F568u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F588u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F590u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F598u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5A4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5D4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F5ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F604u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F618u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F62Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F640u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F654u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F668u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F67Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F684u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F68Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6DCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6E4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F6FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F708u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F710u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F718u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F720u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F738u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F748u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F74Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F754u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F764u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F768u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F770u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F794u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F79Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7C8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7ECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F7FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F824u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F82Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F84Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F85Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F89Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8F4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F8FCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F908u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F914u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F91Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F930u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F944u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F954u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F960u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F978u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F984u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F994u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9A0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9ACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9B4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9BCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9C4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9CCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9D8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9E0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9E8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9F0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887F9F8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA08u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA1Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA3Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA4Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA68u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FA98u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAC0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAD4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FAFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB10u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB18u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB34u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB70u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB7Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB90u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FB9Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBA4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBACu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBCCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBF0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FBFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC54u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FC88u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCB8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FCE8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD64u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD78u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FD8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDA0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDB4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDD0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDD8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDE4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDF4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FDFCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE04u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE0Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE20u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE40u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE48u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE50u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE5Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE74u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE8Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FE94u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEC4u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FED8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FEECu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF00u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF14u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF28u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF30u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF44u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF58u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF6Cu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF80u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FF84u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFA8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFB0u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFC8u, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFDCu, &recomp_unit_0030, "recomp_unit_0030");
    runtime.register_function(0x0887FFFCu, &recomp_unit_0030, "recomp_unit_0030");
}
} // namespace psprecomp
