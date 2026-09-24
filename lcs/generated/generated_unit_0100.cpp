#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0100[4087] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 0, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0, 0, 7, 0, 0,
    8, 9, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14,
    15, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 0, 20, 0, 0, 0, 21,
    0, 0, 0, 22, 0, 0, 0, 0, 23, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 0,
    0, 0, 27, 0, 0, 28, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 0, 32, 0, 0, 0, 0, 33, 0, 0,
    0, 0, 0, 0, 34, 35, 0, 36, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 40, 0,
    41, 0, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 48, 0, 49, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0, 0, 53, 0, 0, 0, 54, 0, 55, 0, 56, 0, 0, 0, 0, 0, 57,
    0, 0, 0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 62, 0, 63, 0, 0, 0, 0, 0, 0, 0, 64,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0,
    0, 0, 73, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0,
    0, 79, 80, 0, 81, 0, 0, 0, 0, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 84, 0, 0, 85, 0, 0, 0, 0, 0, 0, 86, 0,
    0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 88, 0, 89, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0,
    0, 0, 0, 93, 0, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 95, 96, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 101, 102,
    0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 107, 0, 108,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 117, 0, 118, 0, 119,
    0, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0,
    0, 0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 129, 0, 0, 130, 0, 0, 131, 0, 0, 132, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 136, 0, 137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0,
    140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 143, 0, 0, 144, 0, 0, 145, 0, 146, 147, 0, 0, 148, 0, 0,
    149, 0, 0, 150, 0, 151, 0, 0, 152, 153, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 0, 0, 155, 0, 156, 0,
    0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0,
    0, 0, 0, 0, 163, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 168, 169, 0, 0, 170, 0, 0, 0, 171, 0, 172,
    0, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 0, 0,
    178, 179, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 0, 0, 182, 0, 0, 0, 0, 183, 0, 0, 184, 0, 0, 185, 0, 0, 186, 0, 187, 0,
    0, 188, 0, 0, 0, 0, 0, 0, 0, 0, 189, 0, 190, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193,
    194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 199, 0, 0, 200, 0, 0, 201, 202, 0, 0, 203,
    0, 0, 0, 204, 0, 205, 0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 210,
    0, 0, 0, 0, 0, 0, 211, 212, 0, 213, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0,
    0, 219, 0, 220, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 0, 222, 0, 223, 0, 0, 0, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 0,
    0, 0, 0, 0, 226, 227, 0, 228, 0, 0, 229, 0, 0, 0, 230, 0, 231, 0, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0, 235, 0, 0, 0,
    0, 0, 236, 0, 0, 0, 237, 0, 0, 238, 0, 0, 0, 0, 239, 240, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 0, 0, 0, 0,
    0, 243, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 245, 246, 0, 247, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0,
    250, 0, 251, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0,
    0, 257, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0,
    265, 0, 0, 0, 266, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 0,
    0, 271, 0, 0, 0, 272, 0, 0, 273, 0, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 278, 0, 279, 0,
    0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 283, 0, 0, 284, 0, 285, 0, 286, 0, 287, 0, 288, 0, 0, 0,
    0, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 291, 0, 292, 0, 0, 0, 0,
    0, 293, 0, 294, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 297, 0, 298, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302,
    0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 309,
    0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 321, 0, 0, 322, 0, 323, 0, 0, 324, 0, 0, 0, 0, 0, 325, 0, 0,
    0, 326, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 329, 0, 0, 0, 330, 331, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0,
    0, 0, 0, 0, 0, 335, 0, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0,
    0, 347, 0, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 349, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    0, 0, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0, 0, 0, 358, 0, 359, 0, 360, 0, 0, 0,
    0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 366, 0, 0, 0,
    0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 371, 0, 0, 372, 0, 373, 374, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 376, 0,
    0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 0, 379, 380, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0, 0, 0, 0, 387,
    0, 0, 0, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 392, 0, 393, 0, 0, 0, 0, 0, 394, 0,
    395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 398, 0, 399, 400, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0,
    402, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 407, 0, 408, 0, 0, 0, 0, 0, 409, 0,
    0, 0, 410, 0, 0, 0, 0, 411, 0, 412, 0, 413, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 416, 0, 0, 417, 0, 0, 0, 0,
    418, 0, 0, 0, 0, 419, 0, 420, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 422, 0, 0, 0, 0, 423, 0, 0, 424, 0, 425, 0, 0, 0,
    0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 428, 0, 0, 429, 0, 430, 431, 0, 0, 432, 0, 0, 433, 0, 434, 0, 0, 0, 0,
    0, 435, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 437, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0,
    443, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 447, 0, 448, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 0, 451, 0, 0, 0,
    0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 456, 0, 0, 0, 457, 0, 458, 0, 459, 0,
    0, 0, 0, 0, 460, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 463, 0, 464, 0, 465, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0,
    0, 0, 0, 0, 471, 0, 0, 472, 0, 0, 473, 0, 0, 0, 474, 0, 475, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 477, 0, 0, 0, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482,
    483, 0, 484, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0,
    0, 0, 0, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 492, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 496, 0, 0, 497, 498, 0, 499, 0, 0,
    0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0, 0, 0, 0,
    0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 0, 0, 0, 510, 0, 0, 0, 511,
    0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0,
    514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 519, 0, 0,
    0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524, 525, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 528,
    0, 0, 529, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 535, 0, 0, 0,
    536, 0, 537, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0,
    0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0,
    0, 546, 0, 0, 547, 0, 548, 0, 0, 0, 0, 0, 549, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 557, 0, 0, 0,
    0, 0, 0, 558, 0, 0, 0, 559, 0, 0, 560, 0, 0, 0, 561, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 0, 0,
    0, 565, 0, 566, 0, 0, 0, 567, 568, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572,
    0, 0, 0, 0, 0, 0, 573, 574, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 0, 0, 579, 0, 0, 0, 580,
    0, 581, 0, 0, 0, 0, 0, 582, 0, 0, 0, 583, 0, 0, 0, 584, 0, 0, 585, 0, 586, 0, 587, 0, 0, 0, 0, 588, 589, 0, 0, 0,
    0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 593, 0, 0, 0, 0, 0, 0, 594, 595, 0, 596, 0, 0,
    0, 0, 0, 597, 0, 0, 0, 598, 0, 599, 600, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0,
    0, 604, 0, 0, 0, 0, 0, 0, 605, 606, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0,
    0, 612, 613, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 617, 0, 0, 0, 0, 0, 0,
    618, 619, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 623, 624, 0, 0, 0, 625, 0, 626, 0, 0, 627,
    0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0,
    0, 0, 634, 635, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0,
    0, 640, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 644, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0,
    649, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 653,
    0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0, 659, 0, 660,
    0, 0, 0, 0, 0, 0, 0, 661, 0, 662, 663, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0,
    0, 670, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 675, 0, 0,
    676, 0, 677, 0, 0, 0, 0, 678, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0,
    0, 681, 0, 682, 0, 0, 683, 684, 0, 0, 0, 685, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 690, 0, 691, 0,
    0, 692, 693, 0, 694, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 698, 0, 699, 0, 0, 700, 701, 0, 702, 0, 703, 0, 0, 0,
    0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 0, 708, 0, 0, 0, 0,
    0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 715,
    716, 0, 717, 0, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 721, 0, 0, 722, 0, 723, 0, 0, 724, 725, 0, 0, 0, 0,
    0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 729, 0, 730, 0, 0, 731, 0, 0, 0,
    0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 0,
    0, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 739, 0,
    740, 0, 741, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 744, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 746, 0, 747,
    0, 748, 0, 0, 0, 749, 0, 0, 750, 0, 751, 0, 752, 0, 0, 753, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0,
    0, 0, 757, 0, 758, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0, 761, 0, 0, 0, 0, 0, 0, 762, 0, 0, 763, 0, 764, 0, 765, 0, 766,
    0, 767, 0, 768, 0, 769, 0, 0, 0, 770, 0, 0, 0, 771, 0, 772, 0, 773, 0, 0, 0, 774, 0, 0, 0, 775, 0, 776, 0, 777, 0, 0,
    0, 778, 0, 0, 0, 779, 0, 780, 0, 781, 0, 0, 0, 782, 0, 0, 0, 783, 0, 784, 0, 785, 0, 0, 0, 786, 0, 0, 0, 787, 0, 788,
    0, 789, 0, 0, 0, 790, 0, 0, 0, 791, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 0, 0,
    0, 0, 0, 795, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0, 0, 798, 0, 799, 0, 0, 800, 0, 801, 0, 802, 0, 803, 0, 804, 0, 0, 805,
    0, 0, 806, 0, 0, 807, 0, 808, 0, 0, 809, 0, 0, 810, 0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 814, 0, 0, 0, 0, 0, 815, 0, 0, 816, 0, 0, 817, 0, 0, 818, 0, 0, 0, 0, 819, 0, 0, 0, 820, 0,
    0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 825, 0, 826, 0, 0, 0, 0, 0, 0, 827, 0, 0,
    0, 828, 0, 0, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 830, 0, 0, 0, 0, 831, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 832,
    0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 0, 0, 0, 834, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 835, 0, 0, 0,
    0, 0, 836, 0, 0, 0, 0, 837, 0, 838, 0, 0, 0, 839, 0, 0, 0, 0, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 0, 842, 0, 0,
    0, 843, 0, 0, 0, 0, 844, 0, 0, 845, 0, 0, 0, 0, 846, 0, 0, 0, 0, 847, 0, 848, 0, 849, 0, 0, 0, 850, 0, 0, 0, 0,
    851, 0, 852, 0, 0, 0, 853, 0, 0, 0, 0, 854, 0, 0, 0, 0, 855, 0, 856, 0, 0, 0, 857, 0, 0, 0, 0, 858, 0, 0, 0, 859,
    0, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 0, 0, 861, 0, 0, 0, 0, 0, 0, 0, 0, 862,
};
void recomp_unit_0100_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08994000u;
        entry_id = (entry_delta < 16348u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0100[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08994000;
    case 2u: goto L_08994008;
    case 3u: goto L_08994034;
    case 4u: goto L_0899403C;
    case 5u: goto L_08994054;
    case 6u: goto L_08994064;
    case 7u: goto L_08994074;
    case 8u: goto L_08994080;
    case 9u: goto L_08994084;
    case 10u: goto L_089940A8;
    case 11u: goto L_089940B0;
    case 12u: goto L_089940CC;
    case 13u: goto L_089940E0;
    case 14u: goto L_089940FC;
    case 15u: goto L_08994100;
    case 16u: goto L_08994108;
    case 17u: goto L_08994120;
    case 18u: goto L_0899413C;
    case 19u: goto L_08994158;
    case 20u: goto L_0899416C;
    case 21u: goto L_0899417C;
    case 22u: goto L_0899418C;
    case 23u: goto L_089941A0;
    case 24u: goto L_089941A4;
    case 25u: goto L_089941E4;
    case 26u: goto L_089941F8;
    case 27u: goto L_08994208;
    case 28u: goto L_08994214;
    case 29u: goto L_08994218;
    case 30u: goto L_0899423C;
    case 31u: goto L_08994244;
    case 32u: goto L_08994260;
    case 33u: goto L_08994274;
    case 34u: goto L_08994290;
    case 35u: goto L_08994294;
    case 36u: goto L_0899429C;
    case 37u: goto L_089942B8;
    case 38u: goto L_089942E8;
    case 39u: goto L_089942F4;
    case 40u: goto L_089942F8;
    case 41u: goto L_08994300;
    case 42u: goto L_0899431C;
    case 43u: goto L_0899432C;
    case 44u: goto L_08994344;
    case 45u: goto L_08994384;
    case 46u: goto L_0899438C;
    case 47u: goto L_089943A8;
    case 48u: goto L_089943C8;
    case 49u: goto L_089943D0;
    case 50u: goto L_089943EC;
    case 51u: goto L_08994420;
    case 52u: goto L_08994438;
    case 53u: goto L_08994444;
    case 54u: goto L_08994454;
    case 55u: goto L_0899445C;
    case 56u: goto L_08994464;
    case 57u: goto L_0899447C;
    case 58u: goto L_0899448C;
    case 59u: goto L_08994494;
    case 60u: goto L_0899449C;
    case 61u: goto L_089944BC;
    case 62u: goto L_08994554;
    case 63u: goto L_0899455C;
    case 64u: goto L_0899457C;
    case 65u: goto L_08994610;
    case 66u: goto L_08994618;
    case 67u: goto L_08994630;
    case 68u: goto L_08994640;
    case 69u: goto L_08994648;
    case 70u: goto L_08994650;
    case 71u: goto L_08994668;
    case 72u: goto L_08994678;
    case 73u: goto L_08994688;
    case 74u: goto L_0899468C;
    case 75u: goto L_089946B0;
    case 76u: goto L_089946B8;
    case 77u: goto L_089946D4;
    case 78u: goto L_089946E8;
    case 79u: goto L_08994704;
    case 80u: goto L_08994708;
    case 81u: goto L_08994710;
    case 82u: goto L_0899472C;
    case 83u: goto L_0899473C;
    case 84u: goto L_08994750;
    case 85u: goto L_0899475C;
    case 86u: goto L_08994778;
    case 87u: goto L_08994788;
    case 88u: goto L_089947B8;
    case 89u: goto L_089947C0;
    case 90u: goto L_089947C4;
    case 91u: goto L_089947E8;
    case 92u: goto L_089947F0;
    case 93u: goto L_0899480C;
    case 94u: goto L_08994820;
    case 95u: goto L_0899483C;
    case 96u: goto L_08994840;
    case 97u: goto L_08994848;
    case 98u: goto L_08994858;
    case 99u: goto L_08994864;
    case 100u: goto L_08994870;
    case 101u: goto L_08994878;
    case 102u: goto L_0899487C;
    case 103u: goto L_08994888;
    case 104u: goto L_089948A4;
    case 105u: goto L_089948C8;
    case 106u: goto L_089948D8;
    case 107u: goto L_089948F4;
    case 108u: goto L_089948FC;
    case 109u: goto L_08994900;
    case 110u: goto L_08994928;
    case 111u: goto L_08994968;
    case 112u: goto L_08994984;
    case 113u: goto L_089949A0;
    case 114u: goto L_089949B0;
    case 115u: goto L_089949CC;
    case 116u: goto L_089949DC;
    case 117u: goto L_089949EC;
    case 118u: goto L_089949F4;
    case 119u: goto L_089949FC;
    case 120u: goto L_08994A18;
    case 121u: goto L_08994A38;
    case 122u: goto L_08994A44;
    case 123u: goto L_08994A50;
    case 124u: goto L_08994A6C;
    case 125u: goto L_08994A88;
    case 126u: goto L_08994A94;
    case 127u: goto L_08994AA0;
    case 128u: goto L_08994AA8;
    case 129u: goto L_08994AAC;
    case 130u: goto L_08994AB8;
    case 131u: goto L_08994AC4;
    case 132u: goto L_08994AD0;
    case 133u: goto L_08994AD8;
    case 134u: goto L_08994AE4;
    case 135u: goto L_08994B18;
    case 136u: goto L_08994B30;
    case 137u: goto L_08994B38;
    case 138u: goto L_08994B54;
    case 139u: goto L_08994B74;
    case 140u: goto L_08994B80;
    case 141u: goto L_08994B8C;
    case 142u: goto L_08994BA8;
    case 143u: goto L_08994BC4;
    case 144u: goto L_08994BD0;
    case 145u: goto L_08994BDC;
    case 146u: goto L_08994BE4;
    case 147u: goto L_08994BE8;
    case 148u: goto L_08994BF4;
    case 149u: goto L_08994C00;
    case 150u: goto L_08994C0C;
    case 151u: goto L_08994C14;
    case 152u: goto L_08994C20;
    case 153u: goto L_08994C24;
    case 154u: goto L_08994C5C;
    case 155u: goto L_08994C70;
    case 156u: goto L_08994C78;
    case 157u: goto L_08994C94;
    case 158u: goto L_08994CA4;
    case 159u: goto L_08994CB0;
    case 160u: goto L_08994CCC;
    case 161u: goto L_08994CEC;
    case 162u: goto L_08994CF4;
    case 163u: goto L_08994D10;
    case 164u: goto L_08994D20;
    case 165u: goto L_08994D30;
    case 166u: goto L_08994D3C;
    case 167u: goto L_08994D48;
    case 168u: goto L_08994D54;
    case 169u: goto L_08994D58;
    case 170u: goto L_08994D64;
    case 171u: goto L_08994D74;
    case 172u: goto L_08994D7C;
    case 173u: goto L_08994D88;
    case 174u: goto L_08994DAC;
    case 175u: goto L_08994DB4;
    case 176u: goto L_08994DD0;
    case 177u: goto L_08994DE4;
    case 178u: goto L_08994E00;
    case 179u: goto L_08994E04;
    case 180u: goto L_08994E0C;
    case 181u: goto L_08994E28;
    case 182u: goto L_08994E38;
    case 183u: goto L_08994E4C;
    case 184u: goto L_08994E58;
    case 185u: goto L_08994E64;
    case 186u: goto L_08994E70;
    case 187u: goto L_08994E78;
    case 188u: goto L_08994E84;
    case 189u: goto L_08994EA8;
    case 190u: goto L_08994EB0;
    case 191u: goto L_08994ECC;
    case 192u: goto L_08994EE0;
    case 193u: goto L_08994EFC;
    case 194u: goto L_08994F00;
    case 195u: goto L_08994F08;
    case 196u: goto L_08994F24;
    case 197u: goto L_08994F34;
    case 198u: goto L_08994F48;
    case 199u: goto L_08994F54;
    case 200u: goto L_08994F60;
    case 201u: goto L_08994F6C;
    case 202u: goto L_08994F70;
    case 203u: goto L_08994F7C;
    case 204u: goto L_08994F8C;
    case 205u: goto L_08994F94;
    case 206u: goto L_08994FA0;
    case 207u: goto L_08994FC4;
    case 208u: goto L_08994FCC;
    case 209u: goto L_08994FE8;
    case 210u: goto L_08994FFC;
    case 211u: goto L_08995018;
    case 212u: goto L_0899501C;
    case 213u: goto L_08995024;
    case 214u: goto L_08995040;
    case 215u: goto L_08995050;
    case 216u: goto L_08995060;
    case 217u: goto L_0899506C;
    case 218u: goto L_08995078;
    case 219u: goto L_08995084;
    case 220u: goto L_0899508C;
    case 221u: goto L_08995098;
    case 222u: goto L_089950BC;
    case 223u: goto L_089950C4;
    case 224u: goto L_089950E0;
    case 225u: goto L_089950F4;
    case 226u: goto L_08995110;
    case 227u: goto L_08995114;
    case 228u: goto L_0899511C;
    case 229u: goto L_08995128;
    case 230u: goto L_08995138;
    case 231u: goto L_08995140;
    case 232u: goto L_0899514C;
    case 233u: goto L_08995158;
    case 234u: goto L_08995168;
    case 235u: goto L_08995170;
    case 236u: goto L_08995188;
    case 237u: goto L_08995198;
    case 238u: goto L_089951A4;
    case 239u: goto L_089951B8;
    case 240u: goto L_089951BC;
    case 241u: goto L_089951E0;
    case 242u: goto L_089951E8;
    case 243u: goto L_08995204;
    case 244u: goto L_08995218;
    case 245u: goto L_08995234;
    case 246u: goto L_08995238;
    case 247u: goto L_08995240;
    case 248u: goto L_08995250;
    case 249u: goto L_0899526C;
    case 250u: goto L_08995280;
    case 251u: goto L_08995288;
    case 252u: goto L_0899528C;
    case 253u: goto L_089952B0;
    case 254u: goto L_089952B8;
    case 255u: goto L_089952D4;
    case 256u: goto L_089952E8;
    case 257u: goto L_08995304;
    case 258u: goto L_08995308;
    case 259u: goto L_08995310;
    case 260u: goto L_0899532C;
    case 261u: goto L_0899533C;
    case 262u: goto L_0899534C;
    case 263u: goto L_0899535C;
    case 264u: goto L_08995364;
    case 265u: goto L_08995380;
    case 266u: goto L_08995390;
    case 267u: goto L_089953A0;
    case 268u: goto L_089953C4;
    case 269u: goto L_089953E0;
    case 270u: goto L_089953E8;
    case 271u: goto L_08995404;
    case 272u: goto L_08995414;
    case 273u: goto L_08995420;
    case 274u: goto L_08995434;
    case 275u: goto L_08995448;
    case 276u: goto L_08995450;
    case 277u: goto L_08995468;
    case 278u: goto L_08995470;
    case 279u: goto L_08995478;
    case 280u: goto L_08995490;
    case 281u: goto L_08995498;
    case 282u: goto L_089954B4;
    case 283u: goto L_089954C4;
    case 284u: goto L_089954D0;
    case 285u: goto L_089954D8;
    case 286u: goto L_089954E0;
    case 287u: goto L_089954E8;
    case 288u: goto L_089954F0;
    case 289u: goto L_0899550C;
    case 290u: goto L_08995554;
    case 291u: goto L_08995564;
    case 292u: goto L_0899556C;
    case 293u: goto L_08995584;
    case 294u: goto L_0899558C;
    case 295u: goto L_089955A4;
    case 296u: goto L_089955AC;
    case 297u: goto L_089955C4;
    case 298u: goto L_089955CC;
    case 299u: goto L_089955D4;
    case 300u: goto L_089955EC;
    case 301u: goto L_089955F4;
    case 302u: goto L_089955FC;
    case 303u: goto L_08995618;
    case 304u: goto L_08995628;
    case 305u: goto L_08995634;
    case 306u: goto L_0899564C;
    case 307u: goto L_0899565C;
    case 308u: goto L_08995664;
    case 309u: goto L_0899567C;
    case 310u: goto L_0899568C;
    case 311u: goto L_08995694;
    case 312u: goto L_0899569C;
    case 313u: goto L_089956B4;
    case 314u: goto L_089956C8;
    case 315u: goto L_089956D0;
    case 316u: goto L_089956DC;
    case 317u: goto L_089956F8;
    case 318u: goto L_08995700;
    case 319u: goto L_0899572C;
    case 320u: goto L_08995734;
    case 321u: goto L_0899573C;
    case 322u: goto L_08995748;
    case 323u: goto L_08995750;
    case 324u: goto L_0899575C;
    case 325u: goto L_08995774;
    case 326u: goto L_08995784;
    case 327u: goto L_08995794;
    case 328u: goto L_089957B4;
    case 329u: goto L_089957BC;
    case 330u: goto L_089957CC;
    case 331u: goto L_089957D0;
    case 332u: goto L_089957D8;
    case 333u: goto L_089957F0;
    case 334u: goto L_089957F8;
    case 335u: goto L_08995814;
    case 336u: goto L_08995824;
    case 337u: goto L_08995830;
    case 338u: goto L_08995844;
    case 339u: goto L_08995850;
    case 340u: goto L_08995858;
    case 341u: goto L_08995874;
    case 342u: goto L_089958A4;
    case 343u: goto L_089958BC;
    case 344u: goto L_089958D4;
    case 345u: goto L_089958DC;
    case 346u: goto L_089958F4;
    case 347u: goto L_08995904;
    case 348u: goto L_08995924;
    case 349u: goto L_08995938;
    case 350u: goto L_089959C0;
    case 351u: goto L_089959F4;
    case 352u: goto L_08995A0C;
    case 353u: goto L_08995A18;
    case 354u: goto L_08995A20;
    case 355u: goto L_08995A38;
    case 356u: goto L_08995A40;
    case 357u: goto L_08995A48;
    case 358u: goto L_08995A60;
    case 359u: goto L_08995A68;
    case 360u: goto L_08995A70;
    case 361u: goto L_08995A88;
    case 362u: goto L_08995A90;
    case 363u: goto L_08995A98;
    case 364u: goto L_08995AA0;
    case 365u: goto L_08995ABC;
    case 366u: goto L_08995AF0;
    case 367u: goto L_08995B04;
    case 368u: goto L_08995B14;
    case 369u: goto L_08995B24;
    case 370u: goto L_08995B2C;
    case 371u: goto L_08995B34;
    case 372u: goto L_08995B40;
    case 373u: goto L_08995B48;
    case 374u: goto L_08995B4C;
    case 375u: goto L_08995B70;
    case 376u: goto L_08995B78;
    case 377u: goto L_08995B94;
    case 378u: goto L_08995BA8;
    case 379u: goto L_08995BC4;
    case 380u: goto L_08995BC8;
    case 381u: goto L_08995BD0;
    case 382u: goto L_08995BEC;
    case 383u: goto L_08995C2C;
    case 384u: goto L_08995C40;
    case 385u: goto L_08995C54;
    case 386u: goto L_08995C68;
    case 387u: goto L_08995C7C;
    case 388u: goto L_08995C90;
    case 389u: goto L_08995CAC;
    case 390u: goto L_08995CB4;
    case 391u: goto L_08995CBC;
    case 392u: goto L_08995CD8;
    case 393u: goto L_08995CE0;
    case 394u: goto L_08995CF8;
    case 395u: goto L_08995D00;
    case 396u: goto L_08995D18;
    case 397u: goto L_08995D2C;
    case 398u: goto L_08995D48;
    case 399u: goto L_08995D50;
    case 400u: goto L_08995D54;
    case 401u: goto L_08995D5C;
    case 402u: goto L_08995D80;
    case 403u: goto L_08995D88;
    case 404u: goto L_08995DA4;
    case 405u: goto L_08995DB8;
    case 406u: goto L_08995DD4;
    case 407u: goto L_08995DD8;
    case 408u: goto L_08995DE0;
    case 409u: goto L_08995DF8;
    case 410u: goto L_08995E08;
    case 411u: goto L_08995E1C;
    case 412u: goto L_08995E24;
    case 413u: goto L_08995E2C;
    case 414u: goto L_08995E34;
    case 415u: goto L_08995E50;
    case 416u: goto L_08995E60;
    case 417u: goto L_08995E6C;
    case 418u: goto L_08995E80;
    case 419u: goto L_08995E94;
    case 420u: goto L_08995E9C;
    case 421u: goto L_08995EB8;
    case 422u: goto L_08995EC8;
    case 423u: goto L_08995EDC;
    case 424u: goto L_08995EE8;
    case 425u: goto L_08995EF0;
    case 426u: goto L_08995F0C;
    case 427u: goto L_08995F28;
    case 428u: goto L_08995F34;
    case 429u: goto L_08995F40;
    case 430u: goto L_08995F48;
    case 431u: goto L_08995F4C;
    case 432u: goto L_08995F58;
    case 433u: goto L_08995F64;
    case 434u: goto L_08995F6C;
    case 435u: goto L_08995F84;
    case 436u: goto L_08995F98;
    case 437u: goto L_08995FB0;
    case 438u: goto L_08995FC0;
    case 439u: goto L_08995FCC;
    case 440u: goto L_08995FD4;
    case 441u: goto L_08995FE0;
    case 442u: goto L_08995FE8;
    case 443u: goto L_08996000;
    case 444u: goto L_08996010;
    case 445u: goto L_0899601C;
    case 446u: goto L_08996024;
    case 447u: goto L_08996030;
    case 448u: goto L_08996038;
    case 449u: goto L_08996054;
    case 450u: goto L_08996064;
    case 451u: goto L_08996070;
    case 452u: goto L_0899608C;
    case 453u: goto L_089960AC;
    case 454u: goto L_089960B4;
    case 455u: goto L_089960CC;
    case 456u: goto L_089960D8;
    case 457u: goto L_089960E8;
    case 458u: goto L_089960F0;
    case 459u: goto L_089960F8;
    case 460u: goto L_08996110;
    case 461u: goto L_08996124;
    case 462u: goto L_08996140;
    case 463u: goto L_08996188;
    case 464u: goto L_08996190;
    case 465u: goto L_08996198;
    case 466u: goto L_089961A0;
    case 467u: goto L_089961A8;
    case 468u: goto L_089961C0;
    case 469u: goto L_089961D4;
    case 470u: goto L_089961F0;
    case 471u: goto L_08996210;
    case 472u: goto L_0899621C;
    case 473u: goto L_08996228;
    case 474u: goto L_08996238;
    case 475u: goto L_08996240;
    case 476u: goto L_0899624C;
    case 477u: goto L_08996288;
    case 478u: goto L_0899629C;
    case 479u: goto L_089962A4;
    case 480u: goto L_089962C0;
    case 481u: goto L_089962F0;
    case 482u: goto L_089962FC;
    case 483u: goto L_08996300;
    case 484u: goto L_08996308;
    case 485u: goto L_08996324;
    case 486u: goto L_08996380;
    case 487u: goto L_0899639C;
    case 488u: goto L_089963F8;
    case 489u: goto L_08996410;
    case 490u: goto L_08996420;
    case 491u: goto L_08996430;
    case 492u: goto L_08996490;
    case 493u: goto L_089964A4;
    case 494u: goto L_089964C4;
    case 495u: goto L_089964D0;
    case 496u: goto L_089964DC;
    case 497u: goto L_089964E8;
    case 498u: goto L_089964EC;
    case 499u: goto L_089964F4;
    case 500u: goto L_0899650C;
    case 501u: goto L_0899651C;
    case 502u: goto L_08996548;
    case 503u: goto L_08996550;
    case 504u: goto L_0899656C;
    case 505u: goto L_08996590;
    case 506u: goto L_089965A8;
    case 507u: goto L_089965B4;
    case 508u: goto L_089965CC;
    case 509u: goto L_089965D4;
    case 510u: goto L_089965EC;
    case 511u: goto L_089965FC;
    case 512u: goto L_0899660C;
    case 513u: goto L_0899666C;
    case 514u: goto L_08996680;
    case 515u: goto L_089966AC;
    case 516u: goto L_089966C4;
    case 517u: goto L_089966D0;
    case 518u: goto L_089966D8;
    case 519u: goto L_089966F4;
    case 520u: goto L_08996704;
    case 521u: goto L_0899671C;
    case 522u: goto L_08996728;
    case 523u: goto L_08996734;
    case 524u: goto L_08996740;
    case 525u: goto L_08996744;
    case 526u: goto L_0899674C;
    case 527u: goto L_08996764;
    case 528u: goto L_0899677C;
    case 529u: goto L_08996788;
    case 530u: goto L_089967A0;
    case 531u: goto L_089967A8;
    case 532u: goto L_089967C4;
    case 533u: goto L_089967D4;
    case 534u: goto L_089967E0;
    case 535u: goto L_089967F0;
    case 536u: goto L_08996800;
    case 537u: goto L_08996808;
    case 538u: goto L_08996820;
    case 539u: goto L_08996854;
    case 540u: goto L_08996864;
    case 541u: goto L_08996884;
    case 542u: goto L_089968A8;
    case 543u: goto L_089968B0;
    case 544u: goto L_089968CC;
    case 545u: goto L_089968E0;
    case 546u: goto L_08996904;
    case 547u: goto L_08996910;
    case 548u: goto L_08996918;
    case 549u: goto L_08996930;
    case 550u: goto L_08996940;
    case 551u: goto L_08996954;
    case 552u: goto L_08996970;
    case 553u: goto L_089969AC;
    case 554u: goto L_089969B4;
    case 555u: goto L_089969D0;
    case 556u: goto L_089969E0;
    case 557u: goto L_089969F0;
    case 558u: goto L_08996A0C;
    case 559u: goto L_08996A1C;
    case 560u: goto L_08996A28;
    case 561u: goto L_08996A38;
    case 562u: goto L_08996A48;
    case 563u: goto L_08996A50;
    case 564u: goto L_08996A70;
    case 565u: goto L_08996A84;
    case 566u: goto L_08996A8C;
    case 567u: goto L_08996A9C;
    case 568u: goto L_08996AA0;
    case 569u: goto L_08996AC4;
    case 570u: goto L_08996ACC;
    case 571u: goto L_08996AE8;
    case 572u: goto L_08996AFC;
    case 573u: goto L_08996B18;
    case 574u: goto L_08996B1C;
    case 575u: goto L_08996B24;
    case 576u: goto L_08996B40;
    case 577u: goto L_08996B50;
    case 578u: goto L_08996B5C;
    case 579u: goto L_08996B6C;
    case 580u: goto L_08996B7C;
    case 581u: goto L_08996B84;
    case 582u: goto L_08996B9C;
    case 583u: goto L_08996BAC;
    case 584u: goto L_08996BBC;
    case 585u: goto L_08996BC8;
    case 586u: goto L_08996BD0;
    case 587u: goto L_08996BD8;
    case 588u: goto L_08996BEC;
    case 589u: goto L_08996BF0;
    case 590u: goto L_08996C14;
    case 591u: goto L_08996C1C;
    case 592u: goto L_08996C38;
    case 593u: goto L_08996C4C;
    case 594u: goto L_08996C68;
    case 595u: goto L_08996C6C;
    case 596u: goto L_08996C74;
    case 597u: goto L_08996C8C;
    case 598u: goto L_08996C9C;
    case 599u: goto L_08996CA4;
    case 600u: goto L_08996CA8;
    case 601u: goto L_08996CCC;
    case 602u: goto L_08996CD4;
    case 603u: goto L_08996CF0;
    case 604u: goto L_08996D04;
    case 605u: goto L_08996D20;
    case 606u: goto L_08996D24;
    case 607u: goto L_08996D2C;
    case 608u: goto L_08996D44;
    case 609u: goto L_08996D54;
    case 610u: goto L_08996D5C;
    case 611u: goto L_08996D70;
    case 612u: goto L_08996D84;
    case 613u: goto L_08996D88;
    case 614u: goto L_08996DAC;
    case 615u: goto L_08996DB4;
    case 616u: goto L_08996DD0;
    case 617u: goto L_08996DE4;
    case 618u: goto L_08996E00;
    case 619u: goto L_08996E04;
    case 620u: goto L_08996E0C;
    case 621u: goto L_08996E28;
    case 622u: goto L_08996E48;
    case 623u: goto L_08996E54;
    case 624u: goto L_08996E58;
    case 625u: goto L_08996E68;
    case 626u: goto L_08996E70;
    case 627u: goto L_08996E7C;
    case 628u: goto L_08996E9C;
    case 629u: goto L_08996EB4;
    case 630u: goto L_08996EC8;
    case 631u: goto L_08996ED0;
    case 632u: goto L_08996EE8;
    case 633u: goto L_08996EF8;
    case 634u: goto L_08996F08;
    case 635u: goto L_08996F0C;
    case 636u: goto L_08996F30;
    case 637u: goto L_08996F38;
    case 638u: goto L_08996F54;
    case 639u: goto L_08996F68;
    case 640u: goto L_08996F84;
    case 641u: goto L_08996F88;
    case 642u: goto L_08996F90;
    case 643u: goto L_08996FA8;
    case 644u: goto L_08996FB4;
    case 645u: goto L_08996FC4;
    case 646u: goto L_08996FCC;
    case 647u: goto L_08996FD4;
    case 648u: goto L_08996FF0;
    case 649u: goto L_08997000;
    case 650u: goto L_0899700C;
    case 651u: goto L_08997040;
    case 652u: goto L_08997074;
    case 653u: goto L_0899707C;
    case 654u: goto L_08997098;
    case 655u: goto L_089970A8;
    case 656u: goto L_089970B4;
    case 657u: goto L_089970D8;
    case 658u: goto L_089970E0;
    case 659u: goto L_089970F4;
    case 660u: goto L_089970FC;
    case 661u: goto L_0899711C;
    case 662u: goto L_08997124;
    case 663u: goto L_08997128;
    case 664u: goto L_0899715C;
    case 665u: goto L_089971F0;
    case 666u: goto L_0899721C;
    case 667u: goto L_08997250;
    case 668u: goto L_0899725C;
    case 669u: goto L_08997270;
    case 670u: goto L_08997284;
    case 671u: goto L_08997294;
    case 672u: goto L_089972B0;
    case 673u: goto L_089972CC;
    case 674u: goto L_089972E0;
    case 675u: goto L_089972F4;
    case 676u: goto L_08997300;
    case 677u: goto L_08997308;
    case 678u: goto L_0899731C;
    case 679u: goto L_08997334;
    case 680u: goto L_08997360;
    case 681u: goto L_08997384;
    case 682u: goto L_0899738C;
    case 683u: goto L_08997398;
    case 684u: goto L_0899739C;
    case 685u: goto L_089973AC;
    case 686u: goto L_089973B8;
    case 687u: goto L_089973C4;
    case 688u: goto L_089973D4;
    case 689u: goto L_089973E4;
    case 690u: goto L_089973F0;
    case 691u: goto L_089973F8;
    case 692u: goto L_08997404;
    case 693u: goto L_08997408;
    case 694u: goto L_08997410;
    case 695u: goto L_0899741C;
    case 696u: goto L_0899742C;
    case 697u: goto L_08997440;
    case 698u: goto L_08997448;
    case 699u: goto L_08997450;
    case 700u: goto L_0899745C;
    case 701u: goto L_08997460;
    case 702u: goto L_08997468;
    case 703u: goto L_08997470;
    case 704u: goto L_08997484;
    case 705u: goto L_089974AC;
    case 706u: goto L_089974CC;
    case 707u: goto L_089974E0;
    case 708u: goto L_089974EC;
    case 709u: goto L_08997504;
    case 710u: goto L_08997528;
    case 711u: goto L_0899753C;
    case 712u: goto L_08997548;
    case 713u: goto L_0899756C;
    case 714u: goto L_08997574;
    case 715u: goto L_0899757C;
    case 716u: goto L_08997580;
    case 717u: goto L_08997588;
    case 718u: goto L_08997594;
    case 719u: goto L_0899759C;
    case 720u: goto L_089975C0;
    case 721u: goto L_089975C8;
    case 722u: goto L_089975D4;
    case 723u: goto L_089975DC;
    case 724u: goto L_089975E8;
    case 725u: goto L_089975EC;
    case 726u: goto L_08997604;
    case 727u: goto L_08997624;
    case 728u: goto L_08997650;
    case 729u: goto L_0899765C;
    case 730u: goto L_08997664;
    case 731u: goto L_08997670;
    case 732u: goto L_08997688;
    case 733u: goto L_089976A8;
    case 734u: goto L_089976DC;
    case 735u: goto L_089976F4;
    case 736u: goto L_0899770C;
    case 737u: goto L_08997720;
    case 738u: goto L_08997758;
    case 739u: goto L_08997778;
    case 740u: goto L_08997780;
    case 741u: goto L_08997788;
    case 742u: goto L_08997794;
    case 743u: goto L_089977C0;
    case 744u: goto L_089977C4;
    case 745u: goto L_089977D8;
    case 746u: goto L_089977F4;
    case 747u: goto L_089977FC;
    case 748u: goto L_08997804;
    case 749u: goto L_08997814;
    case 750u: goto L_08997820;
    case 751u: goto L_08997828;
    case 752u: goto L_08997830;
    case 753u: goto L_0899783C;
    case 754u: goto L_0899784C;
    case 755u: goto L_089978C4;
    case 756u: goto L_089978F0;
    case 757u: goto L_08997908;
    case 758u: goto L_08997910;
    case 759u: goto L_08997914;
    case 760u: goto L_08997930;
    case 761u: goto L_0899793C;
    case 762u: goto L_08997958;
    case 763u: goto L_08997964;
    case 764u: goto L_0899796C;
    case 765u: goto L_08997974;
    case 766u: goto L_0899797C;
    case 767u: goto L_08997984;
    case 768u: goto L_0899798C;
    case 769u: goto L_08997994;
    case 770u: goto L_089979A4;
    case 771u: goto L_089979B4;
    case 772u: goto L_089979BC;
    case 773u: goto L_089979C4;
    case 774u: goto L_089979D4;
    case 775u: goto L_089979E4;
    case 776u: goto L_089979EC;
    case 777u: goto L_089979F4;
    case 778u: goto L_08997A04;
    case 779u: goto L_08997A14;
    case 780u: goto L_08997A1C;
    case 781u: goto L_08997A24;
    case 782u: goto L_08997A34;
    case 783u: goto L_08997A44;
    case 784u: goto L_08997A4C;
    case 785u: goto L_08997A54;
    case 786u: goto L_08997A64;
    case 787u: goto L_08997A74;
    case 788u: goto L_08997A7C;
    case 789u: goto L_08997A84;
    case 790u: goto L_08997A94;
    case 791u: goto L_08997AA4;
    case 792u: goto L_08997AA8;
    case 793u: goto L_08997ABC;
    case 794u: goto L_08997AE8;
    case 795u: goto L_08997B0C;
    case 796u: goto L_08997B14;
    case 797u: goto L_08997B30;
    case 798u: goto L_08997B3C;
    case 799u: goto L_08997B44;
    case 800u: goto L_08997B50;
    case 801u: goto L_08997B58;
    case 802u: goto L_08997B60;
    case 803u: goto L_08997B68;
    case 804u: goto L_08997B70;
    case 805u: goto L_08997B7C;
    case 806u: goto L_08997B88;
    case 807u: goto L_08997B94;
    case 808u: goto L_08997B9C;
    case 809u: goto L_08997BA8;
    case 810u: goto L_08997BB4;
    case 811u: goto L_08997BC0;
    case 812u: goto L_08997BCC;
    case 813u: goto L_08997BF0;
    case 814u: goto L_08997C18;
    case 815u: goto L_08997C30;
    case 816u: goto L_08997C3C;
    case 817u: goto L_08997C48;
    case 818u: goto L_08997C54;
    case 819u: goto L_08997C68;
    case 820u: goto L_08997C78;
    case 821u: goto L_08997C88;
    case 822u: goto L_08997CA4;
    case 823u: goto L_08997CB8;
    case 824u: goto L_08997CC0;
    case 825u: goto L_08997CD0;
    case 826u: goto L_08997CD8;
    case 827u: goto L_08997CF4;
    case 828u: goto L_08997D04;
    case 829u: goto L_08997D14;
    case 830u: goto L_08997D38;
    case 831u: goto L_08997D4C;
    case 832u: goto L_08997D7C;
    case 833u: goto L_08997D98;
    case 834u: goto L_08997DB8;
    case 835u: goto L_08997DF0;
    case 836u: goto L_08997E08;
    case 837u: goto L_08997E1C;
    case 838u: goto L_08997E24;
    case 839u: goto L_08997E34;
    case 840u: goto L_08997E54;
    case 841u: goto L_08997E64;
    case 842u: goto L_08997E74;
    case 843u: goto L_08997E84;
    case 844u: goto L_08997E98;
    case 845u: goto L_08997EA4;
    case 846u: goto L_08997EB8;
    case 847u: goto L_08997ECC;
    case 848u: goto L_08997ED4;
    case 849u: goto L_08997EDC;
    case 850u: goto L_08997EEC;
    case 851u: goto L_08997F00;
    case 852u: goto L_08997F08;
    case 853u: goto L_08997F18;
    case 854u: goto L_08997F2C;
    case 855u: goto L_08997F40;
    case 856u: goto L_08997F48;
    case 857u: goto L_08997F58;
    case 858u: goto L_08997F6C;
    case 859u: goto L_08997F7C;
    case 860u: goto L_08997F90;
    case 861u: goto L_08997FB4;
    case 862u: goto L_08997FD8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08994000:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08994034;
      }
      goto L_08994008;
    }
L_08994008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(296));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08994034u);
    ctx.gpr[6] = (0u | 1u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08994034u) goto L_08994034;
    return;
L_08994034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_0899403C;
    }
L_0899403C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08994054u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994054u) goto L_08994054;
    return;
L_08994054:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994064u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08994064u) goto L_08994064;
    return;
L_08994064:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08994084;
      }
      goto L_08994074;
    }
L_08994074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08994084;
      }
      goto L_08994080;
    }
L_08994080:
    ctx.gpr[5] = (0u | 1u);
    goto L_08994084;
L_08994084:
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
          goto L_089940B0;
      }
      goto L_089940A8;
    }
L_089940A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08994100;
      }
      goto L_089940B0;
    }
L_089940B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089940E0;
    }
    goto L_089940CC;
L_089940CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994100;
      }
      goto L_089940E0;
    }
L_089940E0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994100;
      }
      goto L_089940FC;
    }
L_089940FC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994100;
L_08994100:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_08994108;
    }
L_08994108:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08994120u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994120u) goto L_08994120;
    return;
L_08994120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x0899413Cu);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x0899413Cu) goto L_0899413C;
    return;
L_0899413C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (2269u << 16u);
        goto L_089941A4;
    }
    goto L_08994158;
L_08994158:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(132))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899418C;
      }
      goto L_0899416C;
    }
L_0899416C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(132))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899418C;
      }
      goto L_0899417C;
    }
L_0899417C:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(132))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(132), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_0899418C;
L_0899418C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08994158;
      }
      goto L_089941A0;
    }
L_089941A0:
    ctx.gpr[4] = (2269u << 16u);
    goto L_089941A4;
L_089941A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8152)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_089941F8;
      }
      goto L_089941E4;
    }
L_089941E4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11604)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_089941F8;
L_089941F8:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08994208u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(132));
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 410u, 0x089866B8u>(ctx, &aot_mem) && ctx.pc == 0x08994208u) goto L_08994208;
    return;
L_08994208:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994218;
      }
      goto L_08994214;
    }
L_08994214:
    ctx.gpr[17] = (0u | 1u);
    goto L_08994218;
L_08994218:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08994244;
      }
      goto L_0899423C;
    }
L_0899423C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08994294;
      }
      goto L_08994244;
    }
L_08994244:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08994274;
    }
    goto L_08994260;
L_08994260:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994294;
      }
      goto L_08994274;
    }
L_08994274:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994294;
      }
      goto L_08994290;
    }
L_08994290:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994294;
L_08994294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_0899429C;
    }
L_0899429C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089942B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089942B8u) goto L_089942B8;
    return;
L_089942B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089942F4;
      }
      goto L_089942E8;
    }
L_089942E8:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(363), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089942F8;
      }
      goto L_089942F4;
    }
L_089942F4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(363), static_cast<std::uint8_t>(0u));
    goto L_089942F8;
L_089942F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_08994300;
    }
L_08994300:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0899431Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899431Cu) goto L_0899431C;
    return;
L_0899431C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899432Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0899432Cu) goto L_0899432C;
    return;
L_0899432C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08994344u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08994344u) goto L_08994344;
    return;
L_08994344:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08994384u);
    ctx.gpr[5] = (0u | 49u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1049u, 0x08893758u>(ctx, &aot_mem) && ctx.pc == 0x08994384u) goto L_08994384;
    return;
L_08994384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_0899438C;
    }
L_0899438C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089943A8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089943A8u) goto L_089943A8;
    return;
L_089943A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x089943C8u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 163u, 0x089F9418u>(ctx, &aot_mem) && ctx.pc == 0x089943C8u) goto L_089943C8;
    return;
L_089943C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_089943D0;
    }
L_089943D0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089943ECu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089943ECu) goto L_089943EC;
    return;
L_089943EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15184)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(1030), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] << 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(15184)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1031), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_08994420;
    }
L_08994420:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08994438u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994438u) goto L_08994438;
    return;
L_08994438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994454;
      }
      goto L_08994444;
    }
L_08994444:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1413), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899445C;
      }
      goto L_08994454;
    }
L_08994454:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1413), static_cast<std::uint8_t>(0u));
    goto L_0899445C;
L_0899445C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_08994464;
    }
L_08994464:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899447Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899447Cu) goto L_0899447C;
    return;
L_0899447C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899448Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x0899448Cu) goto L_0899448C;
    return;
L_0899448C:
    ctx.gpr[31] = (0x08994494u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 211u, 0x0880CFA8u>(ctx, &aot_mem) && ctx.pc == 0x08994494u) goto L_08994494;
    return;
L_08994494:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_0899449C;
    }
L_0899449C:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089944BCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089944BCu) goto L_089944BC;
    return;
L_089944BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08994554u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08994554u) goto L_08994554;
    return;
L_08994554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_0899455C;
    }
L_0899455C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0899457Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899457Cu) goto L_0899457C;
    return;
L_0899457C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08994610u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08994610u) goto L_08994610;
    return;
L_08994610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_08994618;
    }
L_08994618:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08994630u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994630u) goto L_08994630;
    return;
L_08994630:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994640u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08994640u) goto L_08994640;
    return;
L_08994640:
    ctx.gpr[31] = (0x08994648u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0002_entry, 2u, 176u, 0x0880CD10u>(ctx, &aot_mem) && ctx.pc == 0x08994648u) goto L_08994648;
    return;
L_08994648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_08994650;
    }
L_08994650:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08994668u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994668u) goto L_08994668;
    return;
L_08994668:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994678u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08994678u) goto L_08994678;
    return;
L_08994678:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(592)));
    ctx.gpr[6] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0899468C;
      }
      goto L_08994688;
    }
L_08994688:
    ctx.gpr[4] = (0u | 1u);
    goto L_0899468C;
L_0899468C:
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
          goto L_089946B8;
      }
      goto L_089946B0;
    }
L_089946B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994708;
      }
      goto L_089946B8;
    }
L_089946B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089946E8;
    }
    goto L_089946D4;
L_089946D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994708;
      }
      goto L_089946E8;
    }
L_089946E8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994708;
      }
      goto L_08994704;
    }
L_08994704:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994708;
L_08994708:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_08994710;
    }
L_08994710:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899472Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899472Cu) goto L_0899472C;
    return;
L_0899472C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899473Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0899473Cu) goto L_0899473C;
    return;
L_0899473C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08994750u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08994750u) goto L_08994750;
    return;
L_08994750:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(452), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_0899475C;
    }
L_0899475C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08994778u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994778u) goto L_08994778;
    return;
L_08994778:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994788u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08994788u) goto L_08994788;
    return;
L_08994788:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[31] = (0x089947B8u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 106u, 0x088C093Cu>(ctx, &aot_mem) && ctx.pc == 0x089947B8u) goto L_089947B8;
    return;
L_089947B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089947C4;
      }
      goto L_089947C0;
    }
L_089947C0:
    ctx.gpr[17] = (0u | 1u);
    goto L_089947C4;
L_089947C4:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089947F0;
      }
      goto L_089947E8;
    }
L_089947E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08994840;
      }
      goto L_089947F0;
    }
L_089947F0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08994820;
    }
    goto L_0899480C;
L_0899480C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994840;
      }
      goto L_08994820;
    }
L_08994820:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994840;
      }
      goto L_0899483C;
    }
L_0899483C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994840;
L_08994840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_08994848;
    }
L_08994848:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08994888;
      }
      goto L_08994858;
    }
L_08994858:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08994864u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08994864u) goto L_08994864;
    return;
L_08994864:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899487C;
      }
      goto L_08994870;
    }
L_08994870:
    ctx.gpr[31] = (0x08994878u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08994878u) goto L_08994878;
    return;
L_08994878:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0899487C;
L_0899487C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08994888;
L_08994888:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089948A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24444)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x089948A4u) goto L_089948A4;
    return;
L_089948A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089948C8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986B94u>(ctx, &aot_mem) && ctx.pc == 0x089948C8u) goto L_089948C8;
    return;
L_089948C8:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24900)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089948F4;
      }
      goto L_089948D8;
    }
L_089948D8:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-24900), ctx.gpr[16]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 179u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089948F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 139u, 0x088649FCu>(ctx, &aot_mem) && ctx.pc == 0x089948F4u) goto L_089948F4;
    return;
L_089948F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08994900;
      }
      goto L_089948FC;
    }
L_089948FC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08994900;
L_08994900:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(560)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(564)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(568)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(572)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(592));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1305));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(97) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08997124;
      }
      goto L_08994968;
    }
L_08994968:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1305));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20808)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08994984:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089949A0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089949A0u) goto L_089949A0;
    return;
L_089949A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089949B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089949B0u) goto L_089949B0;
    return;
L_089949B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[16] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
      if (branch_taken) {
          goto L_089949DC;
      }
      goto L_089949CC;
    }
L_089949CC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(418)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(418), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_089949EC;
      }
      goto L_089949DC;
    }
L_089949DC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(418)));
    ctx.gpr[6] = (~(ctx.gpr[16] | 0u));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(418), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089949EC;
L_089949EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089949F4;
    }
L_089949F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089949FC;
    }
L_089949FC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08994A18u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994A18u) goto L_08994A18;
    return;
L_08994A18:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08994A50;
      }
      goto L_08994A38;
    }
L_08994A38:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08994A44u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08994A44u) goto L_08994A44;
    return;
L_08994A44:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    goto L_08994A50;
L_08994A50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08994A6Cu);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08994A6Cu) goto L_08994A6C;
    return;
L_08994A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08994AB8;
      }
      goto L_08994A88;
    }
L_08994A88:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08994A94u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08994A94u) goto L_08994A94;
    return;
L_08994A94:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994AAC;
      }
      goto L_08994AA0;
    }
L_08994AA0:
    ctx.gpr[31] = (0x08994AA8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08994AA8u) goto L_08994AA8;
    return;
L_08994AA8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08994AAC;
L_08994AAC:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08994AB8;
L_08994AB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08994AC4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08994AC4u) goto L_08994AC4;
    return;
L_08994AC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08994AD0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x08994AD0u) goto L_08994AD0;
    return;
L_08994AD0:
    ctx.gpr[31] = (0x08994AD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A823DCu>(ctx, &aot_mem) && ctx.pc == 0x08994AD8u) goto L_08994AD8;
    return;
L_08994AD8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994AE4;
      }
      goto L_08994AE4;
    }
L_08994AE4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(302)));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994B18u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 210u, 0x08A84FC8u>(ctx, &aot_mem) && ctx.pc == 0x08994B18u) goto L_08994B18;
    return;
L_08994B18:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08994B30u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08994B30u) goto L_08994B30;
    return;
L_08994B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08994B38;
    }
L_08994B38:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08994B54u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994B54u) goto L_08994B54;
    return;
L_08994B54:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08994B8C;
      }
      goto L_08994B74;
    }
L_08994B74:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08994B80u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08994B80u) goto L_08994B80;
    return;
L_08994B80:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    goto L_08994B8C;
L_08994B8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08994BA8u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08994BA8u) goto L_08994BA8;
    return;
L_08994BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08994BF4;
      }
      goto L_08994BC4;
    }
L_08994BC4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08994BD0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08994BD0u) goto L_08994BD0;
    return;
L_08994BD0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994BE8;
      }
      goto L_08994BDC;
    }
L_08994BDC:
    ctx.gpr[31] = (0x08994BE4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08994BE4u) goto L_08994BE4;
    return;
L_08994BE4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08994BE8;
L_08994BE8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08994BF4;
L_08994BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08994C00u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08994C00u) goto L_08994C00;
    return;
L_08994C00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08994C0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x08994C0Cu) goto L_08994C0C;
    return;
L_08994C0C:
    ctx.gpr[31] = (0x08994C14u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A823DCu>(ctx, &aot_mem) && ctx.pc == 0x08994C14u) goto L_08994C14;
    return;
L_08994C14:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[2] == ctx.gpr[4]) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08994C24;
    }
    goto L_08994C20;
L_08994C20:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_08994C24;
L_08994C24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[10] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08994C5Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 210u, 0x08A84FC8u>(ctx, &aot_mem) && ctx.pc == 0x08994C5Cu) goto L_08994C5C;
    return;
L_08994C5C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08994C70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08994C70u) goto L_08994C70;
    return;
L_08994C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08994C78;
    }
L_08994C78:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994C94u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994C94u) goto L_08994C94;
    return;
L_08994C94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994CA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08994CA4u) goto L_08994CA4;
    return;
L_08994CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08994CCC;
      }
      goto L_08994CB0;
    }
L_08994CB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994CEC;
      }
      goto L_08994CCC;
    }
L_08994CCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08994CEC;
L_08994CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08994CF4;
    }
L_08994CF4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994D10u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994D10u) goto L_08994D10;
    return;
L_08994D10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x08994D20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08994D20u) goto L_08994D20;
    return;
L_08994D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08994D30u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08994D30u) goto L_08994D30;
    return;
L_08994D30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08994D7C;
      }
      goto L_08994D3C;
    }
L_08994D3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994D88;
      }
      goto L_08994D48;
    }
L_08994D48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994D58;
      }
      goto L_08994D54;
    }
L_08994D54:
    ctx.gpr[17] = (0u | 1u);
    goto L_08994D58;
L_08994D58:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994D88;
      }
      goto L_08994D64;
    }
L_08994D64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994D88;
      }
      goto L_08994D74;
    }
L_08994D74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08994D88;
      }
      goto L_08994D7C;
    }
L_08994D7C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08994D88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21548));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08994D88u) goto L_08994D88;
    return;
L_08994D88:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08994DB4;
      }
      goto L_08994DAC;
    }
L_08994DAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08994E04;
      }
      goto L_08994DB4;
    }
L_08994DB4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08994DE4;
    }
    goto L_08994DD0;
L_08994DD0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994E04;
      }
      goto L_08994DE4;
    }
L_08994DE4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994E04;
      }
      goto L_08994E00;
    }
L_08994E00:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994E04;
L_08994E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08994E0C;
    }
L_08994E0C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994E28u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994E28u) goto L_08994E28;
    return;
L_08994E28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994E38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08994E38u) goto L_08994E38;
    return;
L_08994E38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08994E4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08994E4Cu) goto L_08994E4C;
    return;
L_08994E4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08994E78;
      }
      goto L_08994E58;
    }
L_08994E58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994E84;
      }
      goto L_08994E64;
    }
L_08994E64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1920)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994E84;
      }
      goto L_08994E70;
    }
L_08994E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08994E84;
      }
      goto L_08994E78;
    }
L_08994E78:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08994E84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21484));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08994E84u) goto L_08994E84;
    return;
L_08994E84:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08994EB0;
      }
      goto L_08994EA8;
    }
L_08994EA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08994F00;
      }
      goto L_08994EB0;
    }
L_08994EB0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08994EE0;
    }
    goto L_08994ECC;
L_08994ECC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08994F00;
      }
      goto L_08994EE0;
    }
L_08994EE0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994F00;
      }
      goto L_08994EFC;
    }
L_08994EFC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08994F00;
L_08994F00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08994F08;
    }
L_08994F08:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08994F24u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08994F24u) goto L_08994F24;
    return;
L_08994F24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08994F34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08994F34u) goto L_08994F34;
    return;
L_08994F34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08994F48u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08994F48u) goto L_08994F48;
    return;
L_08994F48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08994F94;
      }
      goto L_08994F54;
    }
L_08994F54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994FA0;
      }
      goto L_08994F60;
    }
L_08994F60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994F70;
      }
      goto L_08994F6C;
    }
L_08994F6C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08994F70;
L_08994F70:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08994FA0;
      }
      goto L_08994F7C;
    }
L_08994F7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08994FA0;
      }
      goto L_08994F8C;
    }
L_08994F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08994FA0;
      }
      goto L_08994F94;
    }
L_08994F94:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08994FA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21428));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08994FA0u) goto L_08994FA0;
    return;
L_08994FA0:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08994FCC;
      }
      goto L_08994FC4;
    }
L_08994FC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0899501C;
      }
      goto L_08994FCC;
    }
L_08994FCC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08994FFC;
    }
    goto L_08994FE8;
L_08994FE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0899501C;
      }
      goto L_08994FFC;
    }
L_08994FFC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899501C;
      }
      goto L_08995018;
    }
L_08995018:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0899501C;
L_0899501C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995024;
    }
L_08995024:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995040u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995040u) goto L_08995040;
    return;
L_08995040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x08995050u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08995050u) goto L_08995050;
    return;
L_08995050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08995060u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08995060u) goto L_08995060;
    return;
L_08995060:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0899508C;
      }
      goto L_0899506C;
    }
L_0899506C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995098;
      }
      goto L_08995078;
    }
L_08995078:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(664)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08995098;
      }
      goto L_08995084;
    }
L_08995084:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08995098;
      }
      goto L_0899508C;
    }
L_0899508C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08995098u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21376));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08995098u) goto L_08995098;
    return;
L_08995098:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089950C4;
      }
      goto L_089950BC;
    }
L_089950BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08995114;
      }
      goto L_089950C4;
    }
L_089950C4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089950F4;
    }
    goto L_089950E0;
L_089950E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995114;
      }
      goto L_089950F4;
    }
L_089950F4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995114;
      }
      goto L_08995110;
    }
L_08995110:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995114;
L_08995114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_0899511C;
    }
L_0899511C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08995128u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 189u, 0x08864D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08995128u) goto L_08995128;
    return;
L_08995128:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 65u);
      if (branch_taken) {
          goto L_08995140;
      }
      goto L_08995138;
    }
L_08995138:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899514C;
      }
      goto L_08995140;
    }
L_08995140:
    ctx.gpr[5] = (2269u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08995158;
      }
      goto L_0899514C;
    }
L_0899514C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992), ctx.gpr[4]);
    goto L_08995158;
L_08995158:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08995168u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08995168u) goto L_08995168;
    return;
L_08995168:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995170;
    }
L_08995170:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995188u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995188u) goto L_08995188;
    return;
L_08995188:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995198u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08995198u) goto L_08995198;
    return;
L_08995198:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089951BC;
      }
      goto L_089951A4;
    }
L_089951A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(412)));
    ctx.gpr[6] = (1u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089951BC;
      }
      goto L_089951B8;
    }
L_089951B8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089951BC;
L_089951BC:
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
          goto L_089951E8;
      }
      goto L_089951E0;
    }
L_089951E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995238;
      }
      goto L_089951E8;
    }
L_089951E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08995218;
    }
    goto L_08995204;
L_08995204:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995238;
      }
      goto L_08995218;
    }
L_08995218:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995238;
      }
      goto L_08995234;
    }
L_08995234:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995238;
L_08995238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995240;
    }
L_08995240:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(682), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995250;
    }
L_08995250:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0899526Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899526Cu) goto L_0899526C;
    return;
L_0899526C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08995280u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0000_entry, 0u, 770u, 0x0880747Cu>(ctx, &aot_mem) && ctx.pc == 0x08995280u) goto L_08995280;
    return;
L_08995280:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899528C;
      }
      goto L_08995288;
    }
L_08995288:
    ctx.gpr[17] = (0u | 1u);
    goto L_0899528C;
L_0899528C:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089952B8;
      }
      goto L_089952B0;
    }
L_089952B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08995308;
      }
      goto L_089952B8;
    }
L_089952B8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089952E8;
    }
    goto L_089952D4;
L_089952D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995308;
      }
      goto L_089952E8;
    }
L_089952E8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995308;
      }
      goto L_08995304;
    }
L_08995304:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995308;
L_08995308:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995310;
    }
L_08995310:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0899532Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899532Cu) goto L_0899532C;
    return;
L_0899532C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[16] = (2229u << 16u);
    ctx.gpr[31] = (0x0899533Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0899533Cu) goto L_0899533C;
    return;
L_0899533C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0899534Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x0899534Cu) goto L_0899534C;
    return;
L_0899534C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899535Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 597u, 0x08AE7950u>(ctx, &aot_mem) && ctx.pc == 0x0899535Cu) goto L_0899535C;
    return;
L_0899535C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995364;
    }
L_08995364:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995380u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995380u) goto L_08995380;
    return;
L_08995380:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[31] = (0x08995390u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08995390u) goto L_08995390;
    return;
L_08995390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-15300)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089953A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089953A0u) goto L_089953A0;
    return;
L_089953A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(60));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089953C4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x089953C4u) goto L_089953C4;
    return;
L_089953C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089953E0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 600u, 0x08AE79A4u>(ctx, &aot_mem) && ctx.pc == 0x089953E0u) goto L_089953E0;
    return;
L_089953E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089953E8;
    }
L_089953E8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995404u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995404u) goto L_08995404;
    return;
L_08995404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995414u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08995414u) goto L_08995414;
    return;
L_08995414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08995434;
      }
      goto L_08995420;
    }
L_08995420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08995448;
      }
      goto L_08995434;
    }
L_08995434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08995448;
L_08995448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995450;
    }
L_08995450:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995468u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995468u) goto L_08995468;
    return;
L_08995468:
    ctx.gpr[31] = (0x08995470u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 185u, 0x08844F68u>(ctx, &aot_mem) && ctx.pc == 0x08995470u) goto L_08995470;
    return;
L_08995470:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995478;
    }
L_08995478:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995490u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995490u) goto L_08995490;
    return;
L_08995490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995498;
    }
L_08995498:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089954B4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089954B4u) goto L_089954B4;
    return;
L_089954B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089954C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089954C4u) goto L_089954C4;
    return;
L_089954C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089954E0;
      }
      goto L_089954D0;
    }
L_089954D0:
    ctx.gpr[31] = (0x089954D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 476u, 0x089A2154u>(ctx, &aot_mem) && ctx.pc == 0x089954D8u) goto L_089954D8;
    return;
L_089954D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089954E8;
      }
      goto L_089954E0;
    }
L_089954E0:
    ctx.gpr[31] = (0x089954E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 495u, 0x089A2280u>(ctx, &aot_mem) && ctx.pc == 0x089954E8u) goto L_089954E8;
    return;
L_089954E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089954F0;
    }
L_089954F0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899550Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899550Cu) goto L_0899550C;
    return;
L_0899550C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2993), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2992)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08995564;
      }
      goto L_08995554;
    }
L_08995554:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.gpr[31] = (0x08995564u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 375u, 0x088EA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08995564u) goto L_08995564;
    return;
L_08995564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_0899556C;
    }
L_0899556C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995584u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995584u) goto L_08995584;
    return;
L_08995584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_0899558C;
    }
L_0899558C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089955A4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089955A4u) goto L_089955A4;
    return;
L_089955A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089955AC;
    }
L_089955AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089955C4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089955C4u) goto L_089955C4;
    return;
L_089955C4:
    ctx.gpr[31] = (0x089955CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 260u, 0x088453A8u>(ctx, &aot_mem) && ctx.pc == 0x089955CCu) goto L_089955CC;
    return;
L_089955CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089955D4;
    }
L_089955D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089955ECu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089955ECu) goto L_089955EC;
    return;
L_089955EC:
    ctx.gpr[31] = (0x089955F4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 261u, 0x088453C4u>(ctx, &aot_mem) && ctx.pc == 0x089955F4u) goto L_089955F4;
    return;
L_089955F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089955FC;
    }
L_089955FC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995618u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995618u) goto L_08995618;
    return;
L_08995618:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995628u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08995628u) goto L_08995628;
    return;
L_08995628:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0899564C;
      }
      goto L_08995634;
    }
L_08995634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65024u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0899565C;
      }
      goto L_0899564C;
    }
L_0899564C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_0899565C;
L_0899565C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995664;
    }
L_08995664:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0899567Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899567Cu) goto L_0899567C;
    return;
L_0899567C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0899568Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x0899568Cu) goto L_0899568C;
    return;
L_0899568C:
    ctx.gpr[31] = (0x08995694u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 477u, 0x089BA0ACu>(ctx, &aot_mem) && ctx.pc == 0x08995694u) goto L_08995694;
    return;
L_08995694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_0899569C;
    }
L_0899569C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089956B4u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089956B4u) goto L_089956B4;
    return;
L_089956B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089956C8;
L_089956C8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089957D8;
      }
      goto L_089956D0;
    }
L_089956D0:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089957D8;
      }
      goto L_089956DC;
    }
L_089956DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_08995700;
      }
      goto L_089956F8;
    }
L_089956F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0899572C;
      }
      goto L_08995700;
    }
L_08995700:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0899572C;
L_0899572C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089957D0;
      }
      goto L_08995734;
    }
L_08995734:
    ctx.gpr[31] = (0x0899573Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x0899573Cu) goto L_0899573C;
    return;
L_0899573C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0899575C;
      }
      goto L_08995748;
    }
L_08995748:
    ctx.gpr[31] = (0x08995750u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08995750u) goto L_08995750;
    return;
L_08995750:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089957D0;
      }
      goto L_0899575C;
    }
L_0899575C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08995784;
      }
      goto L_08995774;
    }
L_08995774:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089957D0;
      }
      goto L_08995784;
    }
L_08995784:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089957D0;
      }
      goto L_08995794;
    }
L_08995794:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x089957B4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A288F4u>(ctx, &aot_mem) && ctx.pc == 0x089957B4u) goto L_089957B4;
    return;
L_089957B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089957D0;
      }
      goto L_089957BC;
    }
L_089957BC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    ctx.gpr[31] = (0x089957CCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 530u, 0x08AFE33Cu>(ctx, &aot_mem) && ctx.pc == 0x089957CCu) goto L_089957CC;
    return;
L_089957CC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089957D0;
L_089957D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_089956C8;
      }
      goto L_089957D8;
    }
L_089957D8:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089957F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089957F0u) goto L_089957F0;
    return;
L_089957F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089957F8;
    }
L_089957F8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995814u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995814u) goto L_08995814;
    return;
L_08995814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995824u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08995824u) goto L_08995824;
    return;
L_08995824:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08995844;
      }
      goto L_08995830;
    }
L_08995830:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995850;
      }
      goto L_08995844;
    }
L_08995844:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(603), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08995850;
L_08995850:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995858;
    }
L_08995858:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995874u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995874u) goto L_08995874;
    return;
L_08995874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089958BC;
      }
      goto L_089958A4;
    }
L_089958A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089958D4;
      }
      goto L_089958BC;
    }
L_089958BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(412), ctx.gpr[5]);
    goto L_089958D4;
L_089958D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089958DC;
    }
L_089958DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089958F4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089958F4u) goto L_089958F4;
    return;
L_089958F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995904u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08995904u) goto L_08995904;
    return;
L_08995904:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(636)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(150));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995A18;
      }
      goto L_08995924;
    }
L_08995924:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(200));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 35u);
    ctx.gpr[31] = (0x08995938u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 110u, 0x08850BA4u>(ctx, &aot_mem) && ctx.pc == 0x08995938u) goto L_08995938;
    return;
L_08995938:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8144)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089959C0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 776u, 0x08857F08u>(ctx, &aot_mem) && ctx.pc == 0x089959C0u) goto L_089959C0;
    return;
L_089959C0:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (15564u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089959F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 278u, 0x08851A80u>(ctx, &aot_mem) && ctx.pc == 0x089959F4u) goto L_089959F4;
    return;
L_089959F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 55u);
    ctx.gpr[31] = (0x08995A0Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 102u, 0x0886477Cu>(ctx, &aot_mem) && ctx.pc == 0x08995A0Cu) goto L_08995A0C;
    return;
L_08995A0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    goto L_08995A18;
L_08995A18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995A20;
    }
L_08995A20:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995A38u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995A38u) goto L_08995A38;
    return;
L_08995A38:
    ctx.gpr[31] = (0x08995A40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 262u, 0x088453E0u>(ctx, &aot_mem) && ctx.pc == 0x08995A40u) goto L_08995A40;
    return;
L_08995A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995A48;
    }
L_08995A48:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995A60u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995A60u) goto L_08995A60;
    return;
L_08995A60:
    ctx.gpr[31] = (0x08995A68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 269u, 0x08845450u>(ctx, &aot_mem) && ctx.pc == 0x08995A68u) goto L_08995A68;
    return;
L_08995A68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995A70;
    }
L_08995A70:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995A88u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995A88u) goto L_08995A88;
    return;
L_08995A88:
    ctx.gpr[31] = (0x08995A90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 270u, 0x08845464u>(ctx, &aot_mem) && ctx.pc == 0x08995A90u) goto L_08995A90;
    return;
L_08995A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995A98;
    }
L_08995A98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995AA0;
    }
L_08995AA0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995ABCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995ABCu) goto L_08995ABC;
    return;
L_08995ABC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995AF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08995AF0u) goto L_08995AF0;
    return;
L_08995AF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08995B34;
      }
      goto L_08995B04;
    }
L_08995B04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995B34;
      }
      goto L_08995B14;
    }
L_08995B14:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08995B24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 269u, 0x08A0E174u>(ctx, &aot_mem) && ctx.pc == 0x08995B24u) goto L_08995B24;
    return;
L_08995B24:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995B4C;
      }
      goto L_08995B2C;
    }
L_08995B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08995B4C;
      }
      goto L_08995B34;
    }
L_08995B34:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08995B40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 269u, 0x08A0E174u>(ctx, &aot_mem) && ctx.pc == 0x08995B40u) goto L_08995B40;
    return;
L_08995B40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995B4C;
      }
      goto L_08995B48;
    }
L_08995B48:
    ctx.gpr[18] = (0u | 1u);
    goto L_08995B4C;
L_08995B4C:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08995B78;
      }
      goto L_08995B70;
    }
L_08995B70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08995BC8;
      }
      goto L_08995B78;
    }
L_08995B78:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08995BA8;
    }
    goto L_08995B94;
L_08995B94:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995BC8;
      }
      goto L_08995BA8;
    }
L_08995BA8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995BC8;
      }
      goto L_08995BC4;
    }
L_08995BC4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995BC8;
L_08995BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995BD0;
    }
L_08995BD0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08995BECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995BECu) goto L_08995BEC;
    return;
L_08995BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08995C2Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08995C2Cu) goto L_08995C2C;
    return;
L_08995C2C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[26];
    ctx.gpr[31] = (0x08995C40u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08995C40u) goto L_08995C40;
    return;
L_08995C40:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[28];
    ctx.gpr[31] = (0x08995C54u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08995C54u) goto L_08995C54;
    return;
L_08995C54:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[30];
    ctx.gpr[31] = (0x08995C68u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08995C68u) goto L_08995C68;
    return;
L_08995C68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[26] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[31] = (0x08995C7Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08995C7Cu) goto L_08995C7C;
    return;
L_08995C7C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[28] = ctx.fpr[13] + ctx.fpr[28];
    ctx.gpr[31] = (0x08995C90u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 299u, 0x089D62A8u>(ctx, &aot_mem) && ctx.pc == 0x08995C90u) goto L_08995C90;
    return;
L_08995C90:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.fpr[30] = ctx.fpr[14] + ctx.fpr[30];
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08995CAC;
L_08995CAC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08995D5C;
      }
      goto L_08995CB4;
    }
L_08995CB4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08995D5C;
      }
      goto L_08995CBC;
    }
L_08995CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
      if (branch_taken) {
          goto L_08995CE0;
      }
      goto L_08995CD8;
    }
L_08995CD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08995CF8;
      }
      goto L_08995CE0;
    }
L_08995CE0:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08995CF8;
L_08995CF8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995D54;
      }
      goto L_08995D00;
    }
L_08995D00:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (2269u << 16u);
      if (branch_taken) {
          goto L_08995D2C;
      }
      goto L_08995D18;
    }
L_08995D18:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08995D54;
      }
      goto L_08995D2C;
    }
L_08995D2C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08995D48u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28984u>(ctx, &aot_mem) && ctx.pc == 0x08995D48u) goto L_08995D48;
    return;
L_08995D48:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995D54;
      }
      goto L_08995D50;
    }
L_08995D50:
    ctx.gpr[18] = (0u | 1u);
    goto L_08995D54;
L_08995D54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08995CAC;
      }
      goto L_08995D5C;
    }
L_08995D5C:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08995D88;
      }
      goto L_08995D80;
    }
L_08995D80:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08995DD8;
      }
      goto L_08995D88;
    }
L_08995D88:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08995DB8;
    }
    goto L_08995DA4;
L_08995DA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08995DD8;
      }
      goto L_08995DB8;
    }
L_08995DB8:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995DD8;
      }
      goto L_08995DD4;
    }
L_08995DD4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08995DD8;
L_08995DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995DE0;
    }
L_08995DE0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995DF8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995DF8u) goto L_08995DF8;
    return;
L_08995DF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995E08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08995E08u) goto L_08995E08;
    return;
L_08995E08:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08995E2C;
      }
      goto L_08995E1C;
    }
L_08995E1C:
    ctx.gpr[31] = (0x08995E24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 233u, 0x089AD7C0u>(ctx, &aot_mem) && ctx.pc == 0x08995E24u) goto L_08995E24;
    return;
L_08995E24:
    ctx.gpr[31] = (0x08995E2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x08995E2Cu) goto L_08995E2C;
    return;
L_08995E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995E34;
    }
L_08995E34:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995E50u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995E50u) goto L_08995E50;
    return;
L_08995E50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995E60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08995E60u) goto L_08995E60;
    return;
L_08995E60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08995E80;
      }
      goto L_08995E6C;
    }
L_08995E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08995E94;
      }
      goto L_08995E80;
    }
L_08995E80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_08995E94;
L_08995E94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995E9C;
    }
L_08995E9C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08995EB8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995EB8u) goto L_08995EB8;
    return;
L_08995EB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995EC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08995EC8u) goto L_08995EC8;
    return;
L_08995EC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08995EDCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08995EDCu) goto L_08995EDC;
    return;
L_08995EDC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08995EE8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 602u, 0x08AE79DCu>(ctx, &aot_mem) && ctx.pc == 0x08995EE8u) goto L_08995EE8;
    return;
L_08995EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995EF0;
    }
L_08995EF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08995F0Cu);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08995F0Cu) goto L_08995F0C;
    return;
L_08995F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08995F58;
      }
      goto L_08995F28;
    }
L_08995F28:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08995F34u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08995F34u) goto L_08995F34;
    return;
L_08995F34:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995F4C;
      }
      goto L_08995F40;
    }
L_08995F40:
    ctx.gpr[31] = (0x08995F48u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08995F48u) goto L_08995F48;
    return;
L_08995F48:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    goto L_08995F4C;
L_08995F4C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24444), ctx.gpr[16]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08995F58;
L_08995F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[31] = (0x08995F64u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0068_entry, 68u, 2u, 0x0891402Cu>(ctx, &aot_mem) && ctx.pc == 0x08995F64u) goto L_08995F64;
    return;
L_08995F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995F6C;
    }
L_08995F6C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995F84u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995F84u) goto L_08995F84;
    return;
L_08995F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-30836), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995F98;
    }
L_08995F98:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08995FB0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08995FB0u) goto L_08995FB0;
    return;
L_08995FB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08995FC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08995FC0u) goto L_08995FC0;
    return;
L_08995FC0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08995FD4;
      }
      goto L_08995FCC;
    }
L_08995FCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1920), 0u);
      if (branch_taken) {
          goto L_08995FE0;
      }
      goto L_08995FD4;
    }
L_08995FD4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08995FE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21320));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08995FE0u) goto L_08995FE0;
    return;
L_08995FE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08995FE8;
    }
L_08995FE8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996000u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996000u) goto L_08996000;
    return;
L_08996000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996010u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08996010u) goto L_08996010;
    return;
L_08996010:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996024;
      }
      goto L_0899601C;
    }
L_0899601C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(664), 0u);
      if (branch_taken) {
          goto L_08996030;
      }
      goto L_08996024;
    }
L_08996024:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08996030u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21264));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08996030u) goto L_08996030;
    return;
L_08996030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996038;
    }
L_08996038:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996054u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996054u) goto L_08996054;
    return;
L_08996054:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996064u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x08996064u) goto L_08996064;
    return;
L_08996064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0899608C;
      }
      goto L_08996070;
    }
L_08996070:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089960AC;
      }
      goto L_0899608C;
    }
L_0899608C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089960AC;
L_089960AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089960B4;
    }
L_089960B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089960CCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089960CCu) goto L_089960CC;
    return;
L_089960CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089960E8;
      }
      goto L_089960D8;
    }
L_089960D8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7263), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089960F0;
      }
      goto L_089960E8;
    }
L_089960E8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-7263), static_cast<std::uint8_t>(0u));
    goto L_089960F0;
L_089960F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089960F8;
    }
L_089960F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996110u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996110u) goto L_08996110;
    return;
L_08996110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7148), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996124;
    }
L_08996124:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[31] = (0x08996140u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996140u) goto L_08996140;
    return;
L_08996140:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[31] = (0x08996188u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 87u, 0x08A8C644u>(ctx, &aot_mem) && ctx.pc == 0x08996188u) goto L_08996188;
    return;
L_08996188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996190;
    }
L_08996190:
    ctx.gpr[31] = (0x08996198u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 91u, 0x08A8C6E0u>(ctx, &aot_mem) && ctx.pc == 0x08996198u) goto L_08996198;
    return;
L_08996198:
    ctx.gpr[31] = (0x089961A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 129u, 0x08A8C9F8u>(ctx, &aot_mem) && ctx.pc == 0x089961A0u) goto L_089961A0;
    return;
L_089961A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089961A8;
    }
L_089961A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089961C0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089961C0u) goto L_089961C0;
    return;
L_089961C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7532), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089961D4;
    }
L_089961D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089961F0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089961F0u) goto L_089961F0;
    return;
L_089961F0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08996228;
      }
      goto L_08996210;
    }
L_08996210:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x0899621Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x0899621Cu) goto L_0899621C;
    return;
L_0899621C:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_08996228;
L_08996228:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08996238u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x08996238u) goto L_08996238;
    return;
L_08996238:
    ctx.gpr[31] = (0x08996240u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A823DCu>(ctx, &aot_mem) && ctx.pc == 0x08996240u) goto L_08996240;
    return;
L_08996240:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_0899624C;
      }
      goto L_0899624C;
    }
L_0899624C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-31116)));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(306)));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08996288u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 210u, 0x08A84FC8u>(ctx, &aot_mem) && ctx.pc == 0x08996288u) goto L_08996288;
    return;
L_08996288:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899629Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0899629Cu) goto L_0899629C;
    return;
L_0899629C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089962A4;
    }
L_089962A4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089962C0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089962C0u) goto L_089962C0;
    return;
L_089962C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089962FC;
      }
      goto L_089962F0;
    }
L_089962F0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(358), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996300;
      }
      goto L_089962FC;
    }
L_089962FC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(358), static_cast<std::uint8_t>(0u));
    goto L_08996300;
L_08996300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996308;
    }
L_08996308:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996324u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996324u) goto L_08996324;
    return;
L_08996324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(359)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(359), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(359)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6800), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996380;
    }
L_08996380:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0899639Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x0899639Cu) goto L_0899639C;
    return;
L_0899639C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(360), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[2] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(-6800), static_cast<std::uint16_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089963F8;
    }
L_089963F8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996410u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996410u) goto L_08996410;
    return;
L_08996410:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996420u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08996420u) goto L_08996420;
    return;
L_08996420:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08996430u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 48u, 0x08AA02A0u>(ctx, &aot_mem) && ctx.pc == 0x08996430u) goto L_08996430;
    return;
L_08996430:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (65504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089964A4;
      }
      goto L_08996490;
    }
L_08996490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089964A4;
L_089964A4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089964F4;
      }
      goto L_089964C4;
    }
L_089964C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089964EC;
      }
      goto L_089964D0;
    }
L_089964D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_089964EC;
    }
    goto L_089964DC;
L_089964DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089964E8u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089964E8u) goto L_089964E8;
    return;
L_089964E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_089964EC;
L_089964EC:
    ctx.gpr[31] = (0x089964F4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x089964F4u) goto L_089964F4;
    return;
L_089964F4:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(504), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(504));
    ctx.gpr[31] = (0x0899650Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0899650Cu) goto L_0899650C;
    return;
L_0899650C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x0899651Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0899651Cu) goto L_0899651C;
    return;
L_0899651C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08996550;
      }
      goto L_08996548;
    }
L_08996548:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08996550;
L_08996550:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(13564)));
    ctx.gpr[31] = (0x0899656Cu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x0899656Cu) goto L_0899656C;
    return;
L_0899656C:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7300), ctx.gpr[6]);
    ctx.gpr[31] = (0x08996590u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08996590u) goto L_08996590;
    return;
L_08996590:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089965A8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x089965A8u) goto L_089965A8;
    return;
L_089965A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089965CC;
      }
      goto L_089965B4;
    }
L_089965B4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089965CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x089965CCu) goto L_089965CC;
    return;
L_089965CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089965D4;
    }
L_089965D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089965ECu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089965ECu) goto L_089965EC;
    return;
L_089965EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089965FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089965FCu) goto L_089965FC;
    return;
L_089965FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0899660Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 48u, 0x08AA02A0u>(ctx, &aot_mem) && ctx.pc == 0x0899660Cu) goto L_0899660C;
    return;
L_0899660C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (65504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996680;
      }
      goto L_0899666C;
    }
L_0899666C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08996680;
L_08996680:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7300), ctx.gpr[6]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x089966ACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13564)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 282u, 0x08871B18u>(ctx, &aot_mem) && ctx.pc == 0x089966ACu) goto L_089966AC;
    return;
L_089966AC:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089966D8;
      }
      goto L_089966C4;
    }
L_089966C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089966D0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 644u, 0x0889F144u>(ctx, &aot_mem) && ctx.pc == 0x089966D0u) goto L_089966D0;
    return;
L_089966D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089966F4;
      }
      goto L_089966D8;
    }
L_089966D8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089966F4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 655u, 0x0889F294u>(ctx, &aot_mem) && ctx.pc == 0x089966F4u) goto L_089966F4;
    return;
L_089966F4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1332), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x08996704u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08996704u) goto L_08996704;
    return;
L_08996704:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0899674C;
      }
      goto L_0899671C;
    }
L_0899671C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996744;
      }
      goto L_08996728;
    }
L_08996728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_08996744;
    }
    goto L_08996734;
L_08996734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08996740u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08996740u) goto L_08996740;
    return;
L_08996740:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_08996744;
L_08996744:
    ctx.gpr[31] = (0x0899674Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 412u, 0x089A1D00u>(ctx, &aot_mem) && ctx.pc == 0x0899674Cu) goto L_0899674C;
    return;
L_0899674C:
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    ctx.gpr[31] = (0x08996764u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 493u, 0x08AFE0A8u>(ctx, &aot_mem) && ctx.pc == 0x08996764u) goto L_08996764;
    return;
L_08996764:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899677Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0899677Cu) goto L_0899677C;
    return;
L_0899677C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089967A0;
      }
      goto L_08996788;
    }
L_08996788:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089967A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16256));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 459u, 0x089571E0u>(ctx, &aot_mem) && ctx.pc == 0x089967A0u) goto L_089967A0;
    return;
L_089967A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089967A8;
    }
L_089967A8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089967C4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089967C4u) goto L_089967C4;
    return;
L_089967C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089967D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x089967D4u) goto L_089967D4;
    return;
L_089967D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089967F0;
      }
      goto L_089967E0;
    }
L_089967E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08996800;
      }
      goto L_089967F0;
    }
L_089967F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08996800;
L_08996800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996808;
    }
L_08996808:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996820u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996820u) goto L_08996820;
    return;
L_08996820:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26096));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996910;
      }
      goto L_08996854;
    }
L_08996854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1568)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089968B0;
      }
      goto L_08996864;
    }
L_08996864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1580)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996910;
      }
      goto L_08996884;
    }
L_08996884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1568));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089968A8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 679u, 0x0899F80Cu>(ctx, &aot_mem) && ctx.pc == 0x089968A8u) goto L_089968A8;
    return;
L_089968A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08996910;
      }
      goto L_089968B0;
    }
L_089968B0:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 23u);
    ctx.gpr[31] = (0x089968CCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 612u, 0x0899F3A8u>(ctx, &aot_mem) && ctx.pc == 0x089968CCu) goto L_089968CC;
    return;
L_089968CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 45u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1708)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08996904;
      }
      goto L_089968E0;
    }
L_089968E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1708), ctx.gpr[5]);
    goto L_08996904;
L_08996904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08996910u);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 609u, 0x0899F378u>(ctx, &aot_mem) && ctx.pc == 0x08996910u) goto L_08996910;
    return;
L_08996910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996918;
    }
L_08996918:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996930u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996930u) goto L_08996930;
    return;
L_08996930:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996940u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08996940u) goto L_08996940;
    return;
L_08996940:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(1510), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996954;
    }
L_08996954:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08996970u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996970u) goto L_08996970;
    return;
L_08996970:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x089969ACu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 413u, 0x08A46B40u>(ctx, &aot_mem) && ctx.pc == 0x089969ACu) goto L_089969AC;
    return;
L_089969AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089969B4;
    }
L_089969B4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089969D0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x089969D0u) goto L_089969D0;
    return;
L_089969D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089969E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15300)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 832u, 0x08AFB9BCu>(ctx, &aot_mem) && ctx.pc == 0x089969E0u) goto L_089969E0;
    return;
L_089969E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(91), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_089969F0;
    }
L_089969F0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996A0Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996A0Cu) goto L_08996A0C;
    return;
L_08996A0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996A1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08996A1Cu) goto L_08996A1C;
    return;
L_08996A1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08996A38;
      }
      goto L_08996A28;
    }
L_08996A28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08996A48;
      }
      goto L_08996A38;
    }
L_08996A38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08996A48;
L_08996A48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996A50;
    }
L_08996A50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29572)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08996A70u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 563u, 0x08AEE024u>(ctx, &aot_mem) && ctx.pc == 0x08996A70u) goto L_08996A70;
    return;
L_08996A70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08996A84u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 67u, 0x0882477Cu>(ctx, &aot_mem) && ctx.pc == 0x08996A84u) goto L_08996A84;
    return;
L_08996A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996A8C;
    }
L_08996A8C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(683)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08996AA0;
      }
      goto L_08996A9C;
    }
L_08996A9C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08996AA0;
L_08996AA0:
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
          goto L_08996ACC;
      }
      goto L_08996AC4;
    }
L_08996AC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996B1C;
      }
      goto L_08996ACC;
    }
L_08996ACC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996AFC;
    }
    goto L_08996AE8;
L_08996AE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996B1C;
      }
      goto L_08996AFC;
    }
L_08996AFC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996B1C;
      }
      goto L_08996B18;
    }
L_08996B18:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996B1C;
L_08996B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996B24;
    }
L_08996B24:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996B40u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996B40u) goto L_08996B40;
    return;
L_08996B40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996B50u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08996B50u) goto L_08996B50;
    return;
L_08996B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08996B6C;
      }
      goto L_08996B5C;
    }
L_08996B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08996B7C;
      }
      goto L_08996B6C;
    }
L_08996B6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08996B7C;
L_08996B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996B84;
    }
L_08996B84:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996B9Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996B9Cu) goto L_08996B9C;
    return;
L_08996B9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996BACu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08996BACu) goto L_08996BAC;
    return;
L_08996BAC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08996BF0;
      }
      goto L_08996BBC;
    }
L_08996BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996BF0;
      }
      goto L_08996BC8;
    }
L_08996BC8:
    ctx.gpr[31] = (0x08996BD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 101u, 0x088A07B0u>(ctx, &aot_mem) && ctx.pc == 0x08996BD0u) goto L_08996BD0;
    return;
L_08996BD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996BF0;
      }
      goto L_08996BD8;
    }
L_08996BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08996BF0;
      }
      goto L_08996BEC;
    }
L_08996BEC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08996BF0;
L_08996BF0:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08996C1C;
      }
      goto L_08996C14;
    }
L_08996C14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08996C6C;
      }
      goto L_08996C1C;
    }
L_08996C1C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996C4C;
    }
    goto L_08996C38;
L_08996C38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996C6C;
      }
      goto L_08996C4C;
    }
L_08996C4C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996C6C;
      }
      goto L_08996C68;
    }
L_08996C68:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996C6C;
L_08996C6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996C74;
    }
L_08996C74:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996C8Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996C8Cu) goto L_08996C8C;
    return;
L_08996C8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996C9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08996C9Cu) goto L_08996C9C;
    return;
L_08996C9C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08996CA8;
      }
      goto L_08996CA4;
    }
L_08996CA4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08996CA8;
L_08996CA8:
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
          goto L_08996CD4;
      }
      goto L_08996CCC;
    }
L_08996CCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996D24;
      }
      goto L_08996CD4;
    }
L_08996CD4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996D04;
    }
    goto L_08996CF0;
L_08996CF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996D24;
      }
      goto L_08996D04;
    }
L_08996D04:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996D24;
      }
      goto L_08996D20;
    }
L_08996D20:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996D24;
L_08996D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996D2C;
    }
L_08996D2C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996D44u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996D44u) goto L_08996D44;
    return;
L_08996D44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996D54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x08996D54u) goto L_08996D54;
    return;
L_08996D54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08996D88;
      }
      goto L_08996D5C;
    }
L_08996D5C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_08996D88;
      }
      goto L_08996D70;
    }
L_08996D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 60 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996D88;
      }
      goto L_08996D84;
    }
L_08996D84:
    ctx.gpr[4] = (0u | 1u);
    goto L_08996D88;
L_08996D88:
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
          goto L_08996DB4;
      }
      goto L_08996DAC;
    }
L_08996DAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996E04;
      }
      goto L_08996DB4;
    }
L_08996DB4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996DE4;
    }
    goto L_08996DD0;
L_08996DD0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996E04;
      }
      goto L_08996DE4;
    }
L_08996DE4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996E04;
      }
      goto L_08996E00;
    }
L_08996E00:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996E04;
L_08996E04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996E0C;
    }
L_08996E0C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08996E28u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996E28u) goto L_08996E28;
    return;
L_08996E28:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08996E58;
      }
      goto L_08996E48;
    }
L_08996E48:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08996E54u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x08996E54u) goto L_08996E54;
    return;
L_08996E54:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08996E58;
L_08996E58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08996E68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 639u, 0x08957DB8u>(ctx, &aot_mem) && ctx.pc == 0x08996E68u) goto L_08996E68;
    return;
L_08996E68:
    ctx.gpr[31] = (0x08996E70u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08996E70u) goto L_08996E70;
    return;
L_08996E70:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
      if (branch_taken) {
          goto L_08996E7C;
      }
      goto L_08996E7C;
    }
L_08996E7C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996E9Cu);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 7u, 0x089680CCu>(ctx, &aot_mem) && ctx.pc == 0x08996E9Cu) goto L_08996E9C;
    return;
L_08996E9C:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08996EB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 81u, 0x089685DCu>(ctx, &aot_mem) && ctx.pc == 0x08996EB4u) goto L_08996EB4;
    return;
L_08996EB4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2992), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08996EC8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 652u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x08996EC8u) goto L_08996EC8;
    return;
L_08996EC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996ED0;
    }
L_08996ED0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996EE8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996EE8u) goto L_08996EE8;
    return;
L_08996EE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08996EF8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08996EF8u) goto L_08996EF8;
    return;
L_08996EF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(864)));
    ctx.gpr[6] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08996F0C;
      }
      goto L_08996F08;
    }
L_08996F08:
    ctx.gpr[4] = (0u | 1u);
    goto L_08996F0C;
L_08996F0C:
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
          goto L_08996F38;
      }
      goto L_08996F30;
    }
L_08996F30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996F88;
      }
      goto L_08996F38;
    }
L_08996F38:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08996F68;
    }
    goto L_08996F54;
L_08996F54:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996F88;
      }
      goto L_08996F68;
    }
L_08996F68:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996F88;
      }
      goto L_08996F84;
    }
L_08996F84:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08996F88;
L_08996F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996F90;
    }
L_08996F90:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08996FA8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2992));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996FA8u) goto L_08996FA8;
    return;
L_08996FA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08996FC4;
      }
      goto L_08996FB4;
    }
L_08996FB4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(15921), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08996FCC;
      }
      goto L_08996FC4;
    }
L_08996FC4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(15921), static_cast<std::uint8_t>(0u));
    goto L_08996FCC;
L_08996FCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08996FD4;
    }
L_08996FD4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08996FF0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08996FF0u) goto L_08996FF0;
    return;
L_08996FF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08997000u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15316)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 840u, 0x08AFBA58u>(ctx, &aot_mem) && ctx.pc == 0x08997000u) goto L_08997000;
    return;
L_08997000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08997040;
      }
      goto L_0899700C;
    }
L_0899700C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
      if (branch_taken) {
          goto L_08997074;
      }
      goto L_08997040;
    }
L_08997040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (63488u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    goto L_08997074;
L_08997074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_0899707C;
    }
L_0899707C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08997098u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 387u, 0x08961C7Cu>(ctx, &aot_mem) && ctx.pc == 0x08997098u) goto L_08997098;
    return;
L_08997098:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2992)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089970A8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15312)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 836u, 0x08AFBA04u>(ctx, &aot_mem) && ctx.pc == 0x089970A8u) goto L_089970A8;
    return;
L_089970A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089970FC;
      }
      goto L_089970B4;
    }
L_089970B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899711C;
      }
      goto L_089970D8;
    }
L_089970D8:
    ctx.gpr[31] = (0x089970E0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C05B0u>(ctx, &aot_mem) && ctx.pc == 0x089970E0u) goto L_089970E0;
    return;
L_089970E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.gpr[31] = (0x089970F4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C045Cu>(ctx, &aot_mem) && ctx.pc == 0x089970F4u) goto L_089970F4;
    return;
L_089970F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0899711C;
      }
      goto L_089970FC;
    }
L_089970FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(323), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0899711C;
L_0899711C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997128;
      }
      goto L_08997124;
    }
L_08997124:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08997128;
L_08997128:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899715C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24788)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24792)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-24764)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[3] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-24784), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24776), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-24780), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-24772), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-24768), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-24760), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089971F0:
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
L_0899721C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08997250u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08997250u) goto L_08997250;
    return;
L_08997250:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899725Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x0899725Cu) goto L_0899725C;
    return;
L_0899725C:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08997270u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 547u, 0x089424C4u>(ctx, &aot_mem) && ctx.pc == 0x08997270u) goto L_08997270;
    return;
L_08997270:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20220));
    ctx.gpr[31] = (0x08997284u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089971F0;
L_08997284:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x08997294u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x08997294u) goto L_08997294;
    return;
L_08997294:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089972B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089972CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x089972CCu) goto L_089972CC;
    return;
L_089972CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089972E0u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x089972E0u) goto L_089972E0;
    return;
L_089972E0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x089972F4u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x089972F4u) goto L_089972F4;
    return;
L_089972F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899731C;
      }
      goto L_08997300;
    }
L_08997300:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0899731C;
      }
      goto L_08997308;
    }
L_08997308:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] << 16u);
    ctx.gpr[4] = (ctx.gpr[17] & 255u);
    ctx.gpr[31] = (0x0899731Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 786u, 0x0893BF24u>(ctx, &aot_mem) && ctx.pc == 0x0899731Cu) goto L_0899731C;
    return;
L_0899731C:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997334:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997360u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08997360u) goto L_08997360;
    return;
L_08997360:
    ctx.gpr[17] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08997384u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 467u, 0x08A02020u>(ctx, &aot_mem) && ctx.pc == 0x08997384u) goto L_08997384;
    return;
L_08997384:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899739C;
      }
      goto L_0899738C;
    }
L_0899738C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08997398u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 469u, 0x08A02044u>(ctx, &aot_mem) && ctx.pc == 0x08997398u) goto L_08997398;
    return;
L_08997398:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0899739C;
L_0899739C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089973ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x089973ACu) goto L_089973AC;
    return;
L_089973AC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08997460;
      }
      goto L_089973B8;
    }
L_089973B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (0u | 65535u);
      if (branch_taken) {
          goto L_089973E4;
      }
      goto L_089973C4;
    }
L_089973C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089973D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x089973D4u) goto L_089973D4;
    return;
L_089973D4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_089973E4;
L_089973E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089973F8;
      }
      goto L_089973F0;
    }
L_089973F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08997408;
      }
      goto L_089973F8;
    }
L_089973F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08997404u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x08997404u) goto L_08997404;
    return;
L_08997404:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08997408;
L_08997408:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997460;
      }
      goto L_08997410;
    }
L_08997410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08997440;
    }
    goto L_0899741C;
L_0899741C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x0899742Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x0899742Cu) goto L_0899742C;
    return;
L_0899742C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08997440;
L_08997440:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08997450;
      }
      goto L_08997448;
    }
L_08997448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08997460;
      }
      goto L_08997450;
    }
L_08997450:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x0899745Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 141u, 0x088A87FCu>(ctx, &aot_mem) && ctx.pc == 0x0899745Cu) goto L_0899745C;
    return;
L_0899745C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_08997460;
L_08997460:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997484;
      }
      goto L_08997468;
    }
L_08997468:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08997484;
      }
      goto L_08997470;
    }
L_08997470:
    ctx.gpr[5] = (ctx.gpr[16] << 16u);
    ctx.gpr[4] = (ctx.gpr[18] & 255u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[31] = (0x08997484u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 786u, 0x0893BF24u>(ctx, &aot_mem) && ctx.pc == 0x08997484u) goto L_08997484;
    return;
L_08997484:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089974AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089974CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x089974CCu) goto L_089974CC;
    return;
L_089974CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089974E0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 792u, 0x0893BF98u>(ctx, &aot_mem) && ctx.pc == 0x089974E0u) goto L_089974E0;
    return;
L_089974E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089974ECu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089974ECu) goto L_089974EC;
    return;
L_089974EC:
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
L_08997504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997528u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08997528u) goto L_08997528;
    return;
L_08997528:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x0899753Cu);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 111u, 0x08A4C78Cu>(ctx, &aot_mem) && ctx.pc == 0x0899753Cu) goto L_0899753C;
    return;
L_0899753C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (2232u << 16u);
      if (branch_taken) {
          goto L_08997574;
      }
      goto L_08997548;
    }
L_08997548:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(5736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] ^ ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0899757C;
      }
      goto L_0899756C;
    }
L_0899756C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
      if (branch_taken) {
          goto L_08997580;
      }
      goto L_08997574;
    }
L_08997574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089975EC;
      }
      goto L_0899757C;
    }
L_0899757C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    goto L_08997580;
L_08997580:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0899759C;
      }
      goto L_08997588;
    }
L_08997588:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997594u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08997594u) goto L_08997594;
    return;
L_08997594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089975E8;
      }
      goto L_0899759C;
    }
L_0899759C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] << 8u);
    ctx.gpr[6] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11600));
    ctx.gpr[31] = (0x089975C0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 131u, 0x089388DCu>(ctx, &aot_mem) && ctx.pc == 0x089975C0u) goto L_089975C0;
    return;
L_089975C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089975DC;
      }
      goto L_089975C8;
    }
L_089975C8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089975D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089975D4u) goto L_089975D4;
    return;
L_089975D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089975E8;
      }
      goto L_089975DC;
    }
L_089975DC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089975E8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089975E8u) goto L_089975E8;
    return;
L_089975E8:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_089975EC;
L_089975EC:
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
L_08997604:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997624u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08997624u) goto L_08997624;
    return;
L_08997624:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11600));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997664;
      }
      goto L_08997650;
    }
L_08997650:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0899765Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x0899765Cu) goto L_0899765C;
    return;
L_0899765C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08997670;
      }
      goto L_08997664;
    }
L_08997664:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997670u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08997670u) goto L_08997670;
    return;
L_08997670:
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
L_08997688:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089976A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x089976A8u) goto L_089976A8;
    return;
L_089976A8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] << 8u);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(11600));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089976DCu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BC08u>(ctx, &aot_mem) && ctx.pc == 0x089976DCu) goto L_089976DC;
    return;
L_089976DC:
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
L_089976F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0899770Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x0899770Cu) goto L_0899770C;
    return;
L_0899770C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08997720u);
    ctx.gpr[16] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08997720u) goto L_08997720;
    return;
L_08997720:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] << 8u);
    ctx.gpr[5] = (ctx.gpr[16] << 5u);
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11600));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997758:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997778u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B774u>(ctx, &aot_mem) && ctx.pc == 0x08997778u) goto L_08997778;
    return;
L_08997778:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08997788;
      }
      goto L_08997780;
    }
L_08997780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089977C4;
      }
      goto L_08997788;
    }
L_08997788:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997794u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem) && ctx.pc == 0x08997794u) goto L_08997794;
    return;
L_08997794:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(11600));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[6] << 8u);
    ctx.gpr[6] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[31] = (0x089977C0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(215)));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x089977C0u) goto L_089977C0;
    return;
L_089977C0:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    goto L_089977C4;
L_089977C4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089977D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08997804;
      }
      goto L_089977F4;
    }
L_089977F4:
    ctx.gpr[31] = (0x089977FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x089977FCu) goto L_089977FC;
    return;
L_089977FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_08997804;
L_08997804:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24724));
    ctx.gpr[31] = (0x08997814u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-20196));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C058u>(ctx, &aot_mem) && ctx.pc == 0x08997814u) goto L_08997814;
    return;
L_08997814:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08997830;
      }
      goto L_08997820;
    }
L_08997820:
    ctx.gpr[31] = (0x08997828u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08997828u) goto L_08997828;
    return;
L_08997828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_08997830;
L_08997830:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0899783Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24716));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x0899783Cu) goto L_0899783C;
    return;
L_0899783C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899784C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-24748)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-24752)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[11] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-24744), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-24736), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-24740), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-24732), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-24728), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089978C4:
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
L_089978F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1072));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1060), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08997914;
      }
      goto L_08997908;
    }
L_08997908:
    ctx.gpr[31] = (0x08997910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08997910u) goto L_08997910;
    return;
L_08997910:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08997914;
L_08997914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08997930;
      }
      goto L_08997930;
    }
L_08997930:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0899793C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08997A7C;
      }
      goto L_08997958;
    }
L_08997958:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_0899798C;
      }
      goto L_08997964;
    }
L_08997964:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08997A4C;
      }
      goto L_0899796C;
    }
L_0899796C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089979BC;
      }
      goto L_08997974;
    }
L_08997974:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089979EC;
      }
      goto L_0899797C;
    }
L_0899797C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08997A1C;
      }
      goto L_08997984;
    }
L_08997984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08997AA8;
      }
      goto L_0899798C;
    }
L_0899798C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089979B4;
      }
      goto L_08997994;
    }
L_08997994:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20172));
    ctx.gpr[31] = (0x089979A4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x089979A4u) goto L_089979A4;
    return;
L_089979A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089979B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089979B4u) goto L_089979B4;
    return;
L_089979B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997AA8;
      }
      goto L_089979BC;
    }
L_089979BC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089979E4;
      }
      goto L_089979C4;
    }
L_089979C4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20140));
    ctx.gpr[31] = (0x089979D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x089979D4u) goto L_089979D4;
    return;
L_089979D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089979E4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x089979E4u) goto L_089979E4;
    return;
L_089979E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997AA8;
      }
      goto L_089979EC;
    }
L_089979EC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997A14;
      }
      goto L_089979F4;
    }
L_089979F4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20096));
    ctx.gpr[31] = (0x08997A04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08997A04u) goto L_08997A04;
    return;
L_08997A04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997A14u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08997A14u) goto L_08997A14;
    return;
L_08997A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997AA8;
      }
      goto L_08997A1C;
    }
L_08997A1C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997A44;
      }
      goto L_08997A24;
    }
L_08997A24:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20064));
    ctx.gpr[31] = (0x08997A34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08997A34u) goto L_08997A34;
    return;
L_08997A34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997A44u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08997A44u) goto L_08997A44;
    return;
L_08997A44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997AA8;
      }
      goto L_08997A4C;
    }
L_08997A4C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997A74;
      }
      goto L_08997A54;
    }
L_08997A54:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19992));
    ctx.gpr[31] = (0x08997A64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08997A64u) goto L_08997A64;
    return;
L_08997A64:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997A74u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08997A74u) goto L_08997A74;
    return;
L_08997A74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08997AA8;
      }
      goto L_08997A7C;
    }
L_08997A7C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997AA4;
      }
      goto L_08997A84;
    }
L_08997A84:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19952));
    ctx.gpr[31] = (0x08997A94u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08997A94u) goto L_08997A94;
    return;
L_08997A94:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997AA4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08997AA4u) goto L_08997AA4;
    return;
L_08997AA4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08997AA8;
L_08997AA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997ABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997AE8u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08997AE8u) goto L_08997AE8;
    return;
L_08997AE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[19] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-21288));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997B0Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_0899793C;
L_08997B0C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08997BB4;
      }
      goto L_08997B14;
    }
L_08997B14:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2226u << 16u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-19932));
      if (branch_taken) {
          goto L_08997B58;
      }
      goto L_08997B30;
    }
L_08997B30:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997B58;
      }
      goto L_08997B3C;
    }
L_08997B3C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997B50;
      }
      goto L_08997B44;
    }
L_08997B44:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08997B50u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 807u, 0x08AFB79Cu>(ctx, &aot_mem) && ctx.pc == 0x08997B50u) goto L_08997B50;
    return;
L_08997B50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08997B88;
      }
      goto L_08997B58;
    }
L_08997B58:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08997B88;
      }
      goto L_08997B60;
    }
L_08997B60:
    ctx.gpr[31] = (0x08997B68u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B974u>(ctx, &aot_mem) && ctx.pc == 0x08997B68u) goto L_08997B68;
    return;
L_08997B68:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997B88;
      }
      goto L_08997B70;
    }
L_08997B70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997B7Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B974u>(ctx, &aot_mem) && ctx.pc == 0x08997B7Cu) goto L_08997B7C;
    return;
L_08997B7C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08997B88u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 807u, 0x08AFB79Cu>(ctx, &aot_mem) && ctx.pc == 0x08997B88u) goto L_08997B88;
    return;
L_08997B88:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08997B94u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 807u, 0x08AFB79Cu>(ctx, &aot_mem) && ctx.pc == 0x08997B94u) goto L_08997B94;
    return;
L_08997B94:
    ctx.gpr[31] = (0x08997B9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 790u, 0x089C31B4u>(ctx, &aot_mem) && ctx.pc == 0x08997B9Cu) goto L_08997B9C;
    return;
L_08997B9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997BA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B498u>(ctx, &aot_mem) && ctx.pc == 0x08997BA8u) goto L_08997BA8;
    return;
L_08997BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08997BB4u);
    ctx.gpr[17] = (0u | 0u);
    goto L_089978F0;
L_08997BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08997BCC;
      }
      goto L_08997BC0;
    }
L_08997BC0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08997BCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08997BCCu) goto L_08997BCC;
    return;
L_08997BCC:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997BF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997C18u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B478u>(ctx, &aot_mem) && ctx.pc == 0x08997C18u) goto L_08997C18;
    return;
L_08997C18:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[2] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08997C30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-19928));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BC28u>(ctx, &aot_mem) && ctx.pc == 0x08997C30u) goto L_08997C30;
    return;
L_08997C30:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997C3Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10001));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08997C3Cu) goto L_08997C3C;
    return;
L_08997C3C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997C48u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B580u>(ctx, &aot_mem) && ctx.pc == 0x08997C48u) goto L_08997C48;
    return;
L_08997C48:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_08997C54;
    }
    goto L_08997C54;
L_08997C54:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997C68u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 54u, 0x0890C4D0u>(ctx, &aot_mem) && ctx.pc == 0x08997C68u) goto L_08997C68;
    return;
L_08997C68:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997C78u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 560u, 0x0890B504u>(ctx, &aot_mem) && ctx.pc == 0x08997C78u) goto L_08997C78;
    return;
L_08997C78:
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08997C88u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08997ABC;
L_08997C88:
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
L_08997CA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997CB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 135u, 0x089749DCu>(ctx, &aot_mem) && ctx.pc == 0x08997CB8u) goto L_08997CB8;
    return;
L_08997CB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08997D04;
      }
      goto L_08997CC0;
    }
L_08997CC0:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08997CD8;
      }
      goto L_08997CD0;
    }
L_08997CD0:
    ctx.gpr[31] = (0x08997CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 322u, 0x08AF9780u>(ctx, &aot_mem) && ctx.pc == 0x08997CD8u) goto L_08997CD8;
    return;
L_08997CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21280)));
    ctx.gpr[5] = (2194u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27604));
    ctx.gpr[31] = (0x08997CF4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 694u, 0x0890BDECu>(ctx, &aot_mem) && ctx.pc == 0x08997CF4u) goto L_08997CF4;
    return;
L_08997CF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08997D04u);
    ctx.gpr[6] = (0u | 0u);
    goto L_08997BF0;
L_08997D04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997D14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997D38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08997D38u) goto L_08997D38;
    return;
L_08997D38:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08997D4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 667u, 0x089CACE4u>(ctx, &aot_mem) && ctx.pc == 0x08997D4Cu) goto L_08997D4C;
    return;
L_08997D4C:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08997D7Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08997D7Cu) goto L_08997D7C;
    return;
L_08997D7C:
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
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
L_08997D98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997DB8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 454u, 0x08A4B788u>(ctx, &aot_mem) && ctx.pc == 0x08997DB8u) goto L_08997DB8;
    return;
L_08997DB8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28284)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[31] = (0x08997DF0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08997DF0u) goto L_08997DF0;
    return;
L_08997DF0:
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
L_08997E08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997E1Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 437u, 0x08A4B684u>(ctx, &aot_mem) && ctx.pc == 0x08997E1Cu) goto L_08997E1C;
    return;
L_08997E1C:
    ctx.gpr[31] = (0x08997E24u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 39u, 0x088245A4u>(ctx, &aot_mem) && ctx.pc == 0x08997E24u) goto L_08997E24;
    return;
L_08997E24:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997E34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(684)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997E54u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08997E54u) goto L_08997E54;
    return;
L_08997E54:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997E64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 554u, 0x08AE7540u>(ctx, &aot_mem) && ctx.pc == 0x08997E74u) goto L_08997E74;
    return;
L_08997E74:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997E84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997E98u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 591u, 0x08AE78F0u>(ctx, &aot_mem) && ctx.pc == 0x08997E98u) goto L_08997E98;
    return;
L_08997E98:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08997EA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08997EA4u) goto L_08997EA4;
    return;
L_08997EA4:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997EB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997ECCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19912));
    goto L_089978C4;
L_08997ECC:
    ctx.gpr[31] = (0x08997ED4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 41u, 0x088245C0u>(ctx, &aot_mem) && ctx.pc == 0x08997ED4u) goto L_08997ED4;
    return;
L_08997ED4:
    ctx.gpr[31] = (0x08997EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 10u, 0x08958100u>(ctx, &aot_mem) && ctx.pc == 0x08997EDCu) goto L_08997EDC;
    return;
L_08997EDC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997EEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997F00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19892));
    goto L_089978C4;
L_08997F00:
    ctx.gpr[31] = (0x08997F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 789u, 0x089C31A8u>(ctx, &aot_mem) && ctx.pc == 0x08997F08u) goto L_08997F08;
    return;
L_08997F08:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997F18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997F2Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19868));
    goto L_089978C4;
L_08997F2C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-29620), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08997F40u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 409u, 0x08961E20u>(ctx, &aot_mem) && ctx.pc == 0x08997F40u) goto L_08997F40;
    return;
L_08997F40:
    ctx.gpr[31] = (0x08997F48u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 31u, 0x08958264u>(ctx, &aot_mem) && ctx.pc == 0x08997F48u) goto L_08997F48;
    return;
L_08997F48:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997F58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08997F6Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 477u, 0x08962524u>(ctx, &aot_mem) && ctx.pc == 0x08997F6Cu) goto L_08997F6C;
    return;
L_08997F6C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29620)));
    ctx.gpr[31] = (0x08997F7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BEDCu>(ctx, &aot_mem) && ctx.pc == 0x08997F7Cu) goto L_08997F7C;
    return;
L_08997F7C:
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997F90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08997FB4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 717u, 0x089BF724u>(ctx, &aot_mem) && ctx.pc == 0x08997FB4u) goto L_08997FB4;
    return;
L_08997FB4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27872));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08997FD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08998004u);
    ctx.gpr[5] = (0u | 1u);
    (void)rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B8D0u>(ctx, &aot_mem);
    return;
}

void recomp_unit_0100(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0100_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_100(Runtime &runtime) {
    runtime.register_generated_unit(100u, 0x08994000u, 16384u, &recomp_unit_0100, &recomp_unit_0100_entry);
    runtime.register_function(0x08994000u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994008u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994034u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899403Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994054u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994064u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994074u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994080u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994084u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089940FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994100u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994108u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994120u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899413Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994158u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899416Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899417Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899418Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089941F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994208u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994214u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994218u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899423Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994244u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994260u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994274u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994290u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994294u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899429Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089942F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994300u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899431Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899432Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994344u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994384u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899438Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089943ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994420u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994438u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994444u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994454u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899445Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994464u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899447Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899448Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994494u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899449Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089944BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994554u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899455Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899457Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994610u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994618u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994630u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994640u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994648u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994650u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994668u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994678u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994688u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899468Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089946E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994704u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994708u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994710u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899472Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899473Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994750u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899475Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994778u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994788u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089947F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899480Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994820u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899483Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994840u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994848u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994858u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994864u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994870u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994878u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899487Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994888u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089948FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994900u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994928u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994968u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994984u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089949FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994A94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994AE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994B8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994BF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C5Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994C94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994CF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D10u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994D88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994DE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994E84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994ECCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994EFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994F94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08994FFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995018u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899501Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995024u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995040u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995050u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995060u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899506Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995078u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995084u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899508Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995098u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089950F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995110u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995114u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899511Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995128u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995138u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995140u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899514Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995158u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995168u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995170u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995188u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995198u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089951E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995204u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995218u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995234u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995238u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995240u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995250u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899526Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995280u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995288u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899528Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089952E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995304u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995308u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995310u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899532Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899533Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899534Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899535Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995364u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995380u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995390u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089953E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995404u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995414u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995420u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995434u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995448u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995450u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995468u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995470u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995478u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995490u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995498u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089954F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899550Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995554u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995564u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899556Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995584u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899558Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089955FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995618u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995628u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995634u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899564Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899565Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995664u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899567Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899568Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995694u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899569Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089956F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995700u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899572Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995734u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899573Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995748u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995750u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899575Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995774u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995784u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995794u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089957F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995814u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995824u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995830u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995844u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995850u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995858u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995874u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089958F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995904u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995924u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995938u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089959F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A90u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995A98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995ABCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995AF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995B94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995BECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995C90u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995CF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D5Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995D88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995DF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E80u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995E9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995EF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995F98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FB0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FE0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08995FE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996000u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996010u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899601Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996024u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996030u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996038u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996054u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996064u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996070u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899608Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089960F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996110u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996124u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996140u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996188u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996190u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996198u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089961F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996210u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899621Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996228u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996238u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996240u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899624Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996288u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899629Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089962FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996300u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996308u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996324u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996380u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899639Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089963F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996410u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996420u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996430u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996490u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089964F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899650Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899651Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996548u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996550u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899656Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996590u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089965FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899660Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899666Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996680u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089966F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996704u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899671Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996728u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996734u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996740u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996744u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899674Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996764u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899677Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996788u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967A0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089967F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996800u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996808u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996820u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996854u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996864u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996884u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089968E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996904u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996910u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996918u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996930u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996940u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996954u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996970u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969D0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089969F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996A9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AA0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996ACCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996AFCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B5Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996B9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BBCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996BF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C8Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996C9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996CF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D20u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D5Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996D88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996DE4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E28u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996E9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EC8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996ED0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996EF8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996F90u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FC4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FD4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08996FF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997000u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899700Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997040u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997074u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899707Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997098u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089970FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899711Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997124u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997128u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899715Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089971F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899721Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997250u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899725Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997270u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997284u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997294u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972B0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089972F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997300u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997308u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899731Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997334u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997360u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997384u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899738Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997398u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899739Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973B8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089973F8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997404u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997408u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997410u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899741Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899742Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997440u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997448u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997450u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899745Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997460u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997468u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997470u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997484u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974ACu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974CCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974E0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089974ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997504u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997528u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899753Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997548u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899756Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997574u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899757Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997580u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997588u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997594u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899759Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975C8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975E8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089975ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997604u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997624u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997650u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899765Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997664u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997670u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997688u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976A8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976DCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089976F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899770Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997720u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997758u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997778u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997780u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997788u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997794u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089977C0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089977C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089977D8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089977F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089977FCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997804u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997814u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997820u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997828u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997830u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899783Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899784Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089978F0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997908u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997910u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997914u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997930u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899793Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997958u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997964u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899796Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997974u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899797Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997984u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x0899798Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997994u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979A4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979B4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979BCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979C4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979D4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979E4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979ECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x089979F4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997A94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997ABCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997AE8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B0Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B44u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B50u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B60u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B70u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B94u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997B9Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BA8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BCCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997BF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C30u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C3Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C68u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C78u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997C88u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997CA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997CB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997CC0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997CD0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997CD8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997CF4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D04u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D14u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D38u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D4Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997D98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997DF0u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E1Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E24u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E34u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E54u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E64u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E74u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E84u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997E98u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997EA4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997EB8u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997ECCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997ED4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997EDCu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997EECu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F00u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F08u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F18u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F2Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F40u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F48u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F58u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F6Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F7Cu, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997F90u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997FB4u, &recomp_unit_0100, "recomp_unit_0100");
    runtime.register_function(0x08997FD8u, &recomp_unit_0100, "recomp_unit_0100");
}
} // namespace psprecomp
