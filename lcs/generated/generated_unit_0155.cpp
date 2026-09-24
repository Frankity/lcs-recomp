#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0155[4092] = {
    1, 0, 0, 0, 0, 2, 0, 3, 0, 0, 0, 0, 0, 4, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 8, 0, 0, 0,
    0, 9, 0, 0, 0, 0, 10, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 15, 0, 16, 0, 0, 0, 0, 0,
    17, 0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 19, 0, 20, 0, 21, 0, 0, 0, 22, 23,
    0, 0, 24, 0, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 30, 0, 0, 31, 0, 32, 0, 0, 33, 0, 0, 34, 0, 0, 35, 36, 0, 0, 37, 0, 38, 0, 0, 0, 0, 0, 0,
    39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 47,
    0, 0, 0, 48, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 51, 52, 0, 0, 0, 0, 0, 0,
    0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 55, 0, 0, 56, 0, 57, 0,
    0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 0, 60, 0, 0, 61, 0, 62, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 0, 0, 66, 0, 67,
    0, 0, 0, 68, 0, 0, 0, 69, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 70, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 74, 0,
    0, 0, 75, 0, 0, 76, 0, 0, 77, 0, 0, 78, 0, 0, 79, 0, 80, 0, 81, 0, 0, 82, 83, 0, 84, 0, 85, 0, 0, 0, 0, 0,
    0, 0, 0, 86, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 0, 90, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0,
    93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 96, 0, 0, 0, 0, 0, 97, 0, 98, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 103,
    0, 104, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 0, 0, 109, 0, 0, 110, 0, 0, 0, 111, 0, 112, 0, 0, 0,
    0, 113, 0, 114, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 122,
    0, 0, 0, 0, 123, 124, 0, 0, 0, 0, 125, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 129, 0, 0, 0, 0, 130, 0, 0, 0, 131,
    0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0,
    0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 141, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0, 149, 0, 0, 0, 150,
    0, 151, 0, 0, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0, 0, 154, 0, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0,
    0, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 0, 0,
    0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 0,
    0, 169, 0, 170, 0, 0, 0, 0, 171, 0, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    174, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 0, 178, 0, 0,
    179, 0, 0, 0, 0, 180, 0, 0, 0, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0,
    0, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 0, 0,
    0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 197, 0, 198, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 202, 203, 0, 0, 204, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0,
    0, 0, 0, 212, 0, 0, 213, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 0,
    0, 218, 0, 0, 219, 0, 0, 220, 0, 221, 222, 0, 223, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0,
    0, 226, 0, 0, 227, 0, 0, 228, 0, 0, 229, 0, 230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 234, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 236, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0,
    0, 0, 241, 0, 0, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 246, 0, 0, 0, 247, 248,
    0, 0, 249, 250, 0, 251, 252, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 259, 0, 0,
    0, 260, 0, 0, 0, 261, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0, 265, 266, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0,
    0, 269, 0, 0, 270, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0,
    0, 0, 0, 0, 275, 0, 0, 0, 276, 0, 277, 0, 0, 278, 0, 0, 0, 0, 0, 0, 279, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0,
    282, 0, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0, 286, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0,
    0, 289, 290, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 292, 0, 0, 0, 293, 0, 0, 0, 0, 294, 0, 295, 0, 296, 297, 0, 0, 0, 298,
    0, 299, 0, 0, 0, 0, 0, 0, 300, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0,
    305, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 308, 309, 0, 310, 0, 311, 0, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 315,
    0, 0, 316, 0, 317, 318, 0, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 322, 0, 0, 0, 323, 0, 0, 0, 0,
    324, 0, 325, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 328, 0, 0, 0, 0, 329, 330, 0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0,
    0, 332, 0, 0, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 0, 335, 0, 336, 337, 0, 0, 338, 0, 0, 0, 0, 339, 0,
    0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0,
    0, 346, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 350, 351, 0, 352, 0, 0, 353, 0, 354, 0, 0, 0, 0,
    0, 0, 355, 0, 0, 356, 0, 0, 0, 0, 0, 357, 358, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0,
    0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 0, 0, 365, 0, 0, 366, 0, 0, 367, 0, 368,
    0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 371, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0,
    0, 377, 0, 378, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 380, 381, 0, 382, 0, 0, 0, 383, 0, 0, 0, 0, 384, 0, 0, 0, 385, 0,
    0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0,
    391, 0, 0, 0, 392, 0, 0, 0, 393, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 402, 0, 403,
    404, 0, 0, 0, 0, 0, 0, 405, 406, 0, 0, 0, 0, 0, 0, 0, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 410, 411, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 416, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 420, 0, 0, 421, 0, 422, 0, 0, 0, 423, 0, 424, 0, 425, 0, 0, 0, 426, 0, 427, 0, 428, 0, 0, 0,
    429, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 0, 0, 0, 0, 433, 0, 434, 0, 435, 0, 436, 0, 0, 0, 0, 0, 437,
    0, 0, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 440, 0, 441, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 453, 454, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0,
    459, 0, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0,
    0, 0, 0, 0, 468, 0, 469, 0, 0, 0, 470, 0, 471, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 0, 0, 0, 0, 0, 476, 0, 477, 0,
    0, 0, 0, 0, 478, 479, 0, 480, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 484, 0, 0, 0, 0, 0, 485, 486, 0, 487, 0,
    0, 0, 0, 0, 0, 488, 489, 0, 0, 0, 490, 491, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 494, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 498, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 504, 0, 0, 505, 0, 0, 0, 0, 506, 0, 507, 508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 514, 0, 515, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 518, 0, 0, 519, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 525, 0, 526, 0, 0, 527, 0, 0,
    528, 0, 0, 0, 0, 529, 530, 531, 0, 532, 0, 0, 0, 533, 0, 0, 534, 0, 0, 0, 0, 535, 536, 537, 0, 538, 0, 0, 0, 0, 0, 539,
    0, 0, 540, 0, 0, 0, 0, 541, 0, 542, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 545, 0, 0, 0, 0, 546, 0, 0, 0, 547, 0,
    0, 0, 0, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 0, 0, 0, 0, 551, 552, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 553, 0, 554, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 559, 560, 0, 0, 561, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 564, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 567, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 0, 0, 569, 0, 0, 570, 0, 571, 0, 572, 573, 0, 574, 0, 575, 0, 576, 0, 577, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    583, 0, 0, 584, 0, 585, 0, 586, 0, 0, 587, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 592, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 595, 596, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 598, 0, 0, 0, 599, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 601, 0,
    0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 610, 0, 0, 611, 0, 612,
    0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 617, 0, 0, 618, 0, 0, 0, 619, 620, 0,
    0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 623, 0, 624, 0, 0, 625, 0, 0, 626, 0, 627, 0, 628, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 631,
    0, 0, 632, 0, 0, 633, 0, 0, 0, 634, 635, 0, 0, 0, 636, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 639,
    0, 0, 0, 0, 640, 0, 641, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0,
    0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    647, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0,
    0, 0, 0, 0, 650, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 0, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 659, 0, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 674, 0, 675, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 677, 0, 678, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 680, 0, 681, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0,
    0, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 690, 0, 0, 691, 0, 0,
    0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0,
    0, 696, 0, 697, 698, 0, 699, 0, 0, 700, 0, 701, 702, 0, 703, 0, 0, 0, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 0, 0, 709, 0,
    0, 0, 710, 0, 0, 0, 711, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0,
    716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 718,
    0, 0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 723, 0, 0, 0, 0, 0, 0, 724,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 728, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0, 731,
    0, 0, 0, 0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 0, 0, 0, 745, 0, 0, 0, 746, 0, 747, 0, 0,
    748, 0, 0, 749, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 753, 754, 0, 0, 0, 755, 0, 756, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 758, 0, 0, 0, 0, 759, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0,
    0, 0, 0, 0, 764, 0, 0, 0, 765, 0, 766, 0, 767, 0, 768, 0, 769, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 772,
};
void recomp_unit_0155_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A70000u;
        entry_id = (entry_delta < 16368u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0155[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A70000;
    case 2u: goto L_08A70014;
    case 3u: goto L_08A7001C;
    case 4u: goto L_08A70034;
    case 5u: goto L_08A70038;
    case 6u: goto L_08A70040;
    case 7u: goto L_08A70060;
    case 8u: goto L_08A70070;
    case 9u: goto L_08A70084;
    case 10u: goto L_08A70098;
    case 11u: goto L_08A7009C;
    case 12u: goto L_08A700A4;
    case 13u: goto L_08A700B4;
    case 14u: goto L_08A700D0;
    case 15u: goto L_08A700E0;
    case 16u: goto L_08A700E8;
    case 17u: goto L_08A70100;
    case 18u: goto L_08A70118;
    case 19u: goto L_08A70158;
    case 20u: goto L_08A70160;
    case 21u: goto L_08A70168;
    case 22u: goto L_08A70178;
    case 23u: goto L_08A7017C;
    case 24u: goto L_08A70188;
    case 25u: goto L_08A70194;
    case 26u: goto L_08A7019C;
    case 27u: goto L_08A701C8;
    case 28u: goto L_08A701D0;
    case 29u: goto L_08A701D8;
    case 30u: goto L_08A70214;
    case 31u: goto L_08A70220;
    case 32u: goto L_08A70228;
    case 33u: goto L_08A70234;
    case 34u: goto L_08A70240;
    case 35u: goto L_08A7024C;
    case 36u: goto L_08A70250;
    case 37u: goto L_08A7025C;
    case 38u: goto L_08A70264;
    case 39u: goto L_08A70280;
    case 40u: goto L_08A70290;
    case 41u: goto L_08A702C8;
    case 42u: goto L_08A702FC;
    case 43u: goto L_08A7030C;
    case 44u: goto L_08A70344;
    case 45u: goto L_08A7035C;
    case 46u: goto L_08A70368;
    case 47u: goto L_08A7037C;
    case 48u: goto L_08A7038C;
    case 49u: goto L_08A703A0;
    case 50u: goto L_08A703D8;
    case 51u: goto L_08A703E0;
    case 52u: goto L_08A703E4;
    case 53u: goto L_08A70404;
    case 54u: goto L_08A7045C;
    case 55u: goto L_08A70464;
    case 56u: goto L_08A70470;
    case 57u: goto L_08A70478;
    case 58u: goto L_08A70484;
    case 59u: goto L_08A7049C;
    case 60u: goto L_08A704AC;
    case 61u: goto L_08A704B8;
    case 62u: goto L_08A704C0;
    case 63u: goto L_08A704CC;
    case 64u: goto L_08A704D4;
    case 65u: goto L_08A704E4;
    case 66u: goto L_08A704F4;
    case 67u: goto L_08A704FC;
    case 68u: goto L_08A7050C;
    case 69u: goto L_08A7051C;
    case 70u: goto L_08A70548;
    case 71u: goto L_08A70554;
    case 72u: goto L_08A70564;
    case 73u: goto L_08A7056C;
    case 74u: goto L_08A70578;
    case 75u: goto L_08A70588;
    case 76u: goto L_08A70594;
    case 77u: goto L_08A705A0;
    case 78u: goto L_08A705AC;
    case 79u: goto L_08A705B8;
    case 80u: goto L_08A705C0;
    case 81u: goto L_08A705C8;
    case 82u: goto L_08A705D4;
    case 83u: goto L_08A705D8;
    case 84u: goto L_08A705E0;
    case 85u: goto L_08A705E8;
    case 86u: goto L_08A7060C;
    case 87u: goto L_08A7061C;
    case 88u: goto L_08A70624;
    case 89u: goto L_08A7062C;
    case 90u: goto L_08A7064C;
    case 91u: goto L_08A70654;
    case 92u: goto L_08A70678;
    case 93u: goto L_08A70680;
    case 94u: goto L_08A70688;
    case 95u: goto L_08A7069C;
    case 96u: goto L_08A706AC;
    case 97u: goto L_08A706C4;
    case 98u: goto L_08A706CC;
    case 99u: goto L_08A706D4;
    case 100u: goto L_08A706DC;
    case 101u: goto L_08A706EC;
    case 102u: goto L_08A706F4;
    case 103u: goto L_08A706FC;
    case 104u: goto L_08A70704;
    case 105u: goto L_08A70718;
    case 106u: goto L_08A70720;
    case 107u: goto L_08A70734;
    case 108u: goto L_08A7073C;
    case 109u: goto L_08A7074C;
    case 110u: goto L_08A70758;
    case 111u: goto L_08A70768;
    case 112u: goto L_08A70770;
    case 113u: goto L_08A70784;
    case 114u: goto L_08A7078C;
    case 115u: goto L_08A707A0;
    case 116u: goto L_08A707A8;
    case 117u: goto L_08A707B8;
    case 118u: goto L_08A707C4;
    case 119u: goto L_08A707D4;
    case 120u: goto L_08A707DC;
    case 121u: goto L_08A707EC;
    case 122u: goto L_08A707FC;
    case 123u: goto L_08A70810;
    case 124u: goto L_08A70814;
    case 125u: goto L_08A70828;
    case 126u: goto L_08A70830;
    case 127u: goto L_08A70840;
    case 128u: goto L_08A70854;
    case 129u: goto L_08A70858;
    case 130u: goto L_08A7086C;
    case 131u: goto L_08A7087C;
    case 132u: goto L_08A70890;
    case 133u: goto L_08A708A8;
    case 134u: goto L_08A708B0;
    case 135u: goto L_08A708B8;
    case 136u: goto L_08A708F8;
    case 137u: goto L_08A70908;
    case 138u: goto L_08A70920;
    case 139u: goto L_08A70938;
    case 140u: goto L_08A70948;
    case 141u: goto L_08A70968;
    case 142u: goto L_08A709A0;
    case 143u: goto L_08A709A8;
    case 144u: goto L_08A709B0;
    case 145u: goto L_08A709B8;
    case 146u: goto L_08A709D0;
    case 147u: goto L_08A709DC;
    case 148u: goto L_08A709E4;
    case 149u: goto L_08A709EC;
    case 150u: goto L_08A709FC;
    case 151u: goto L_08A70A04;
    case 152u: goto L_08A70A28;
    case 153u: goto L_08A70A38;
    case 154u: goto L_08A70A4C;
    case 155u: goto L_08A70A54;
    case 156u: goto L_08A70A78;
    case 157u: goto L_08A70A88;
    case 158u: goto L_08A70A9C;
    case 159u: goto L_08A70AAC;
    case 160u: goto L_08A70ABC;
    case 161u: goto L_08A70AE8;
    case 162u: goto L_08A70AF0;
    case 163u: goto L_08A70B08;
    case 164u: goto L_08A70B10;
    case 165u: goto L_08A70B18;
    case 166u: goto L_08A70B20;
    case 167u: goto L_08A70B5C;
    case 168u: goto L_08A70B6C;
    case 169u: goto L_08A70B84;
    case 170u: goto L_08A70B8C;
    case 171u: goto L_08A70BA0;
    case 172u: goto L_08A70BB0;
    case 173u: goto L_08A70BB8;
    case 174u: goto L_08A70C00;
    case 175u: goto L_08A70C10;
    case 176u: goto L_08A70C4C;
    case 177u: goto L_08A70C5C;
    case 178u: goto L_08A70C74;
    case 179u: goto L_08A70C80;
    case 180u: goto L_08A70C94;
    case 181u: goto L_08A70CA8;
    case 182u: goto L_08A70CE0;
    case 183u: goto L_08A70CF0;
    case 184u: goto L_08A70D08;
    case 185u: goto L_08A70D14;
    case 186u: goto L_08A70D24;
    case 187u: goto L_08A70D2C;
    case 188u: goto L_08A70D34;
    case 189u: goto L_08A70D40;
    case 190u: goto L_08A70D58;
    case 191u: goto L_08A70D68;
    case 192u: goto L_08A70D8C;
    case 193u: goto L_08A70DB8;
    case 194u: goto L_08A70DD0;
    case 195u: goto L_08A70DD8;
    case 196u: goto L_08A70DE4;
    case 197u: goto L_08A70E18;
    case 198u: goto L_08A70E20;
    case 199u: goto L_08A70E24;
    case 200u: goto L_08A70E50;
    case 201u: goto L_08A70ECC;
    case 202u: goto L_08A70ED4;
    case 203u: goto L_08A70ED8;
    case 204u: goto L_08A70EE4;
    case 205u: goto L_08A70F1C;
    case 206u: goto L_08A70F28;
    case 207u: goto L_08A70F30;
    case 208u: goto L_08A70F40;
    case 209u: goto L_08A70F4C;
    case 210u: goto L_08A70F58;
    case 211u: goto L_08A70F6C;
    case 212u: goto L_08A70F8C;
    case 213u: goto L_08A70F98;
    case 214u: goto L_08A70FA0;
    case 215u: goto L_08A70FB0;
    case 216u: goto L_08A70FE4;
    case 217u: goto L_08A70FF4;
    case 218u: goto L_08A71004;
    case 219u: goto L_08A71010;
    case 220u: goto L_08A7101C;
    case 221u: goto L_08A71024;
    case 222u: goto L_08A71028;
    case 223u: goto L_08A71030;
    case 224u: goto L_08A71034;
    case 225u: goto L_08A71060;
    case 226u: goto L_08A71084;
    case 227u: goto L_08A71090;
    case 228u: goto L_08A7109C;
    case 229u: goto L_08A710A8;
    case 230u: goto L_08A710B0;
    case 231u: goto L_08A710B8;
    case 232u: goto L_08A71118;
    case 233u: goto L_08A71128;
    case 234u: goto L_08A71130;
    case 235u: goto L_08A71138;
    case 236u: goto L_08A71190;
    case 237u: goto L_08A711A0;
    case 238u: goto L_08A711C0;
    case 239u: goto L_08A711E0;
    case 240u: goto L_08A711F8;
    case 241u: goto L_08A71208;
    case 242u: goto L_08A7121C;
    case 243u: goto L_08A71224;
    case 244u: goto L_08A71244;
    case 245u: goto L_08A7125C;
    case 246u: goto L_08A71268;
    case 247u: goto L_08A71278;
    case 248u: goto L_08A7127C;
    case 249u: goto L_08A71288;
    case 250u: goto L_08A7128C;
    case 251u: goto L_08A71294;
    case 252u: goto L_08A71298;
    case 253u: goto L_08A712A8;
    case 254u: goto L_08A712B8;
    case 255u: goto L_08A712C0;
    case 256u: goto L_08A712C8;
    case 257u: goto L_08A712D0;
    case 258u: goto L_08A712E8;
    case 259u: goto L_08A712F4;
    case 260u: goto L_08A71304;
    case 261u: goto L_08A71314;
    case 262u: goto L_08A71320;
    case 263u: goto L_08A71328;
    case 264u: goto L_08A71330;
    case 265u: goto L_08A71340;
    case 266u: goto L_08A71344;
    case 267u: goto L_08A71354;
    case 268u: goto L_08A71368;
    case 269u: goto L_08A71384;
    case 270u: goto L_08A71390;
    case 271u: goto L_08A713A0;
    case 272u: goto L_08A713C4;
    case 273u: goto L_08A713E8;
    case 274u: goto L_08A713F8;
    case 275u: goto L_08A71410;
    case 276u: goto L_08A71420;
    case 277u: goto L_08A71428;
    case 278u: goto L_08A71434;
    case 279u: goto L_08A71450;
    case 280u: goto L_08A7145C;
    case 281u: goto L_08A71478;
    case 282u: goto L_08A71480;
    case 283u: goto L_08A71498;
    case 284u: goto L_08A714BC;
    case 285u: goto L_08A714C8;
    case 286u: goto L_08A714D4;
    case 287u: goto L_08A714E0;
    case 288u: goto L_08A714E8;
    case 289u: goto L_08A71504;
    case 290u: goto L_08A71508;
    case 291u: goto L_08A7152C;
    case 292u: goto L_08A71534;
    case 293u: goto L_08A71544;
    case 294u: goto L_08A71558;
    case 295u: goto L_08A71560;
    case 296u: goto L_08A71568;
    case 297u: goto L_08A7156C;
    case 298u: goto L_08A7157C;
    case 299u: goto L_08A71584;
    case 300u: goto L_08A715A0;
    case 301u: goto L_08A715A8;
    case 302u: goto L_08A715B0;
    case 303u: goto L_08A715D4;
    case 304u: goto L_08A715E0;
    case 305u: goto L_08A71600;
    case 306u: goto L_08A7161C;
    case 307u: goto L_08A71624;
    case 308u: goto L_08A7162C;
    case 309u: goto L_08A71630;
    case 310u: goto L_08A71638;
    case 311u: goto L_08A71640;
    case 312u: goto L_08A7164C;
    case 313u: goto L_08A71668;
    case 314u: goto L_08A71674;
    case 315u: goto L_08A7167C;
    case 316u: goto L_08A71688;
    case 317u: goto L_08A71690;
    case 318u: goto L_08A71694;
    case 319u: goto L_08A716A4;
    case 320u: goto L_08A716B0;
    case 321u: goto L_08A716BC;
    case 322u: goto L_08A716DC;
    case 323u: goto L_08A716EC;
    case 324u: goto L_08A71700;
    case 325u: goto L_08A71708;
    case 326u: goto L_08A7170C;
    case 327u: goto L_08A71728;
    case 328u: goto L_08A71738;
    case 329u: goto L_08A7174C;
    case 330u: goto L_08A71750;
    case 331u: goto L_08A71768;
    case 332u: goto L_08A71784;
    case 333u: goto L_08A71794;
    case 334u: goto L_08A717AC;
    case 335u: goto L_08A717CC;
    case 336u: goto L_08A717D4;
    case 337u: goto L_08A717D8;
    case 338u: goto L_08A717E4;
    case 339u: goto L_08A717F8;
    case 340u: goto L_08A7180C;
    case 341u: goto L_08A71820;
    case 342u: goto L_08A71828;
    case 343u: goto L_08A7184C;
    case 344u: goto L_08A71854;
    case 345u: goto L_08A7186C;
    case 346u: goto L_08A71884;
    case 347u: goto L_08A718A4;
    case 348u: goto L_08A718B4;
    case 349u: goto L_08A718BC;
    case 350u: goto L_08A718CC;
    case 351u: goto L_08A718D0;
    case 352u: goto L_08A718D8;
    case 353u: goto L_08A718E4;
    case 354u: goto L_08A718EC;
    case 355u: goto L_08A71908;
    case 356u: goto L_08A71914;
    case 357u: goto L_08A7192C;
    case 358u: goto L_08A71930;
    case 359u: goto L_08A7195C;
    case 360u: goto L_08A71970;
    case 361u: goto L_08A71988;
    case 362u: goto L_08A71998;
    case 363u: goto L_08A719C4;
    case 364u: goto L_08A719CC;
    case 365u: goto L_08A719DC;
    case 366u: goto L_08A719E8;
    case 367u: goto L_08A719F4;
    case 368u: goto L_08A719FC;
    case 369u: goto L_08A71A1C;
    case 370u: goto L_08A71A28;
    case 371u: goto L_08A71A34;
    case 372u: goto L_08A71A40;
    case 373u: goto L_08A71A48;
    case 374u: goto L_08A71A64;
    case 375u: goto L_08A71A70;
    case 376u: goto L_08A71A78;
    case 377u: goto L_08A71A84;
    case 378u: goto L_08A71A8C;
    case 379u: goto L_08A71AA8;
    case 380u: goto L_08A71AB8;
    case 381u: goto L_08A71ABC;
    case 382u: goto L_08A71AC4;
    case 383u: goto L_08A71AD4;
    case 384u: goto L_08A71AE8;
    case 385u: goto L_08A71AF8;
    case 386u: goto L_08A71B14;
    case 387u: goto L_08A71B24;
    case 388u: goto L_08A71B3C;
    case 389u: goto L_08A71B48;
    case 390u: goto L_08A71B64;
    case 391u: goto L_08A71B80;
    case 392u: goto L_08A71B90;
    case 393u: goto L_08A71BA0;
    case 394u: goto L_08A71BB0;
    case 395u: goto L_08A71BB8;
    case 396u: goto L_08A71BCC;
    case 397u: goto L_08A71BDC;
    case 398u: goto L_08A71C18;
    case 399u: goto L_08A71C28;
    case 400u: goto L_08A71C40;
    case 401u: goto L_08A71C6C;
    case 402u: goto L_08A71C74;
    case 403u: goto L_08A71C7C;
    case 404u: goto L_08A71C80;
    case 405u: goto L_08A71C9C;
    case 406u: goto L_08A71CA0;
    case 407u: goto L_08A71CC4;
    case 408u: goto L_08A71CD4;
    case 409u: goto L_08A71CEC;
    case 410u: goto L_08A71D18;
    case 411u: goto L_08A71D1C;
    case 412u: goto L_08A71D24;
    case 413u: goto L_08A71D2C;
    case 414u: goto L_08A71D4C;
    case 415u: goto L_08A71D60;
    case 416u: goto L_08A71D68;
    case 417u: goto L_08A71D6C;
    case 418u: goto L_08A71D98;
    case 419u: goto L_08A71DE0;
    case 420u: goto L_08A71E1C;
    case 421u: goto L_08A71E28;
    case 422u: goto L_08A71E30;
    case 423u: goto L_08A71E40;
    case 424u: goto L_08A71E48;
    case 425u: goto L_08A71E50;
    case 426u: goto L_08A71E60;
    case 427u: goto L_08A71E68;
    case 428u: goto L_08A71E70;
    case 429u: goto L_08A71E80;
    case 430u: goto L_08A71E8C;
    case 431u: goto L_08A71EB0;
    case 432u: goto L_08A71EB8;
    case 433u: goto L_08A71ECC;
    case 434u: goto L_08A71ED4;
    case 435u: goto L_08A71EDC;
    case 436u: goto L_08A71EE4;
    case 437u: goto L_08A71EFC;
    case 438u: goto L_08A71F20;
    case 439u: goto L_08A71F28;
    case 440u: goto L_08A71F3C;
    case 441u: goto L_08A71F44;
    case 442u: goto L_08A71F4C;
    case 443u: goto L_08A71F54;
    case 444u: goto L_08A71F90;
    case 445u: goto L_08A71FAC;
    case 446u: goto L_08A71FBC;
    case 447u: goto L_08A71FE8;
    case 448u: goto L_08A71FF8;
    case 449u: goto L_08A7203C;
    case 450u: goto L_08A72058;
    case 451u: goto L_08A72080;
    case 452u: goto L_08A720C4;
    case 453u: goto L_08A720CC;
    case 454u: goto L_08A720D0;
    case 455u: goto L_08A720F0;
    case 456u: goto L_08A72154;
    case 457u: goto L_08A72160;
    case 458u: goto L_08A72168;
    case 459u: goto L_08A72180;
    case 460u: goto L_08A72190;
    case 461u: goto L_08A72198;
    case 462u: goto L_08A721A4;
    case 463u: goto L_08A721B8;
    case 464u: goto L_08A721C0;
    case 465u: goto L_08A721D4;
    case 466u: goto L_08A721E4;
    case 467u: goto L_08A721F8;
    case 468u: goto L_08A72210;
    case 469u: goto L_08A72218;
    case 470u: goto L_08A72228;
    case 471u: goto L_08A72230;
    case 472u: goto L_08A72238;
    case 473u: goto L_08A72240;
    case 474u: goto L_08A7224C;
    case 475u: goto L_08A72254;
    case 476u: goto L_08A72270;
    case 477u: goto L_08A72278;
    case 478u: goto L_08A72290;
    case 479u: goto L_08A72294;
    case 480u: goto L_08A7229C;
    case 481u: goto L_08A722A8;
    case 482u: goto L_08A722B0;
    case 483u: goto L_08A722CC;
    case 484u: goto L_08A722D4;
    case 485u: goto L_08A722EC;
    case 486u: goto L_08A722F0;
    case 487u: goto L_08A722F8;
    case 488u: goto L_08A72314;
    case 489u: goto L_08A72318;
    case 490u: goto L_08A72328;
    case 491u: goto L_08A7232C;
    case 492u: goto L_08A72344;
    case 493u: goto L_08A72354;
    case 494u: goto L_08A72384;
    case 495u: goto L_08A72394;
    case 496u: goto L_08A723B8;
    case 497u: goto L_08A723D0;
    case 498u: goto L_08A72404;
    case 499u: goto L_08A72410;
    case 500u: goto L_08A72424;
    case 501u: goto L_08A7243C;
    case 502u: goto L_08A72454;
    case 503u: goto L_08A7245C;
    case 504u: goto L_08A724A4;
    case 505u: goto L_08A724B0;
    case 506u: goto L_08A724C4;
    case 507u: goto L_08A724CC;
    case 508u: goto L_08A724D0;
    case 509u: goto L_08A72514;
    case 510u: goto L_08A72520;
    case 511u: goto L_08A72534;
    case 512u: goto L_08A72548;
    case 513u: goto L_08A72554;
    case 514u: goto L_08A72584;
    case 515u: goto L_08A7258C;
    case 516u: goto L_08A72590;
    case 517u: goto L_08A725D0;
    case 518u: goto L_08A72604;
    case 519u: goto L_08A72610;
    case 520u: goto L_08A72618;
    case 521u: goto L_08A72624;
    case 522u: goto L_08A72644;
    case 523u: goto L_08A72650;
    case 524u: goto L_08A72658;
    case 525u: goto L_08A72660;
    case 526u: goto L_08A72668;
    case 527u: goto L_08A72674;
    case 528u: goto L_08A72680;
    case 529u: goto L_08A72694;
    case 530u: goto L_08A72698;
    case 531u: goto L_08A7269C;
    case 532u: goto L_08A726A4;
    case 533u: goto L_08A726B4;
    case 534u: goto L_08A726C0;
    case 535u: goto L_08A726D4;
    case 536u: goto L_08A726D8;
    case 537u: goto L_08A726DC;
    case 538u: goto L_08A726E4;
    case 539u: goto L_08A726FC;
    case 540u: goto L_08A72708;
    case 541u: goto L_08A7271C;
    case 542u: goto L_08A72724;
    case 543u: goto L_08A72734;
    case 544u: goto L_08A72750;
    case 545u: goto L_08A72754;
    case 546u: goto L_08A72768;
    case 547u: goto L_08A72778;
    case 548u: goto L_08A7278C;
    case 549u: goto L_08A72794;
    case 550u: goto L_08A727B0;
    case 551u: goto L_08A727C8;
    case 552u: goto L_08A727CC;
    case 553u: goto L_08A72808;
    case 554u: goto L_08A72810;
    case 555u: goto L_08A7281C;
    case 556u: goto L_08A72828;
    case 557u: goto L_08A72840;
    case 558u: goto L_08A7284C;
    case 559u: goto L_08A7285C;
    case 560u: goto L_08A72860;
    case 561u: goto L_08A7286C;
    case 562u: goto L_08A728B4;
    case 563u: goto L_08A728E4;
    case 564u: goto L_08A728E8;
    case 565u: goto L_08A72910;
    case 566u: goto L_08A72974;
    case 567u: goto L_08A72978;
    case 568u: goto L_08A729A8;
    case 569u: goto L_08A729B4;
    case 570u: goto L_08A729C0;
    case 571u: goto L_08A729C8;
    case 572u: goto L_08A729D0;
    case 573u: goto L_08A729D4;
    case 574u: goto L_08A729DC;
    case 575u: goto L_08A729E4;
    case 576u: goto L_08A729EC;
    case 577u: goto L_08A729F4;
    case 578u: goto L_08A72A3C;
    case 579u: goto L_08A72A50;
    case 580u: goto L_08A72A98;
    case 581u: goto L_08A72AA4;
    case 582u: goto L_08A72AC8;
    case 583u: goto L_08A72B00;
    case 584u: goto L_08A72B0C;
    case 585u: goto L_08A72B14;
    case 586u: goto L_08A72B1C;
    case 587u: goto L_08A72B28;
    case 588u: goto L_08A72B30;
    case 589u: goto L_08A72B38;
    case 590u: goto L_08A72B58;
    case 591u: goto L_08A72B60;
    case 592u: goto L_08A72B78;
    case 593u: goto L_08A72BAC;
    case 594u: goto L_08A72BC0;
    case 595u: goto L_08A72BC8;
    case 596u: goto L_08A72BCC;
    case 597u: goto L_08A72C20;
    case 598u: goto L_08A72C2C;
    case 599u: goto L_08A72C3C;
    case 600u: goto L_08A72C60;
    case 601u: goto L_08A72C78;
    case 602u: goto L_08A72C9C;
    case 603u: goto L_08A72CB0;
    case 604u: goto L_08A72CD8;
    case 605u: goto L_08A72D1C;
    case 606u: goto L_08A72D40;
    case 607u: goto L_08A72D88;
    case 608u: goto L_08A72DD4;
    case 609u: goto L_08A72DDC;
    case 610u: goto L_08A72DE8;
    case 611u: goto L_08A72DF4;
    case 612u: goto L_08A72DFC;
    case 613u: goto L_08A72E04;
    case 614u: goto L_08A72E10;
    case 615u: goto L_08A72E18;
    case 616u: goto L_08A72E4C;
    case 617u: goto L_08A72E58;
    case 618u: goto L_08A72E64;
    case 619u: goto L_08A72E74;
    case 620u: goto L_08A72E78;
    case 621u: goto L_08A72E88;
    case 622u: goto L_08A72EB8;
    case 623u: goto L_08A72F04;
    case 624u: goto L_08A72F0C;
    case 625u: goto L_08A72F18;
    case 626u: goto L_08A72F24;
    case 627u: goto L_08A72F2C;
    case 628u: goto L_08A72F34;
    case 629u: goto L_08A72F40;
    case 630u: goto L_08A72F48;
    case 631u: goto L_08A72F7C;
    case 632u: goto L_08A72F88;
    case 633u: goto L_08A72F94;
    case 634u: goto L_08A72FA4;
    case 635u: goto L_08A72FA8;
    case 636u: goto L_08A72FB8;
    case 637u: goto L_08A72FE8;
    case 638u: goto L_08A72FF0;
    case 639u: goto L_08A72FFC;
    case 640u: goto L_08A73010;
    case 641u: goto L_08A73018;
    case 642u: goto L_08A7301C;
    case 643u: goto L_08A73048;
    case 644u: goto L_08A73074;
    case 645u: goto L_08A73098;
    case 646u: goto L_08A730BC;
    case 647u: goto L_08A73100;
    case 648u: goto L_08A73124;
    case 649u: goto L_08A7316C;
    case 650u: goto L_08A73190;
    case 651u: goto L_08A731A4;
    case 652u: goto L_08A731F0;
    case 653u: goto L_08A7321C;
    case 654u: goto L_08A73228;
    case 655u: goto L_08A73230;
    case 656u: goto L_08A73254;
    case 657u: goto L_08A732A0;
    case 658u: goto L_08A732C4;
    case 659u: goto L_08A73318;
    case 660u: goto L_08A73330;
    case 661u: goto L_08A73360;
    case 662u: goto L_08A733AC;
    case 663u: goto L_08A733B4;
    case 664u: goto L_08A733D8;
    case 665u: goto L_08A73410;
    case 666u: goto L_08A73448;
    case 667u: goto L_08A73480;
    case 668u: goto L_08A734AC;
    case 669u: goto L_08A7351C;
    case 670u: goto L_08A7352C;
    case 671u: goto L_08A73550;
    case 672u: goto L_08A7356C;
    case 673u: goto L_08A73594;
    case 674u: goto L_08A735E0;
    case 675u: goto L_08A735E8;
    case 676u: goto L_08A73620;
    case 677u: goto L_08A73688;
    case 678u: goto L_08A73690;
    case 679u: goto L_08A736A0;
    case 680u: goto L_08A73704;
    case 681u: goto L_08A7370C;
    case 682u: goto L_08A73718;
    case 683u: goto L_08A73740;
    case 684u: goto L_08A7374C;
    case 685u: goto L_08A7375C;
    case 686u: goto L_08A73770;
    case 687u: goto L_08A73788;
    case 688u: goto L_08A73794;
    case 689u: goto L_08A737B8;
    case 690u: goto L_08A737E8;
    case 691u: goto L_08A737F4;
    case 692u: goto L_08A73804;
    case 693u: goto L_08A73818;
    case 694u: goto L_08A73864;
    case 695u: goto L_08A73878;
    case 696u: goto L_08A73884;
    case 697u: goto L_08A7388C;
    case 698u: goto L_08A73890;
    case 699u: goto L_08A73898;
    case 700u: goto L_08A738A4;
    case 701u: goto L_08A738AC;
    case 702u: goto L_08A738B0;
    case 703u: goto L_08A738B8;
    case 704u: goto L_08A738CC;
    case 705u: goto L_08A738D4;
    case 706u: goto L_08A738DC;
    case 707u: goto L_08A738E4;
    case 708u: goto L_08A738EC;
    case 709u: goto L_08A738F8;
    case 710u: goto L_08A73908;
    case 711u: goto L_08A73918;
    case 712u: goto L_08A73924;
    case 713u: goto L_08A73950;
    case 714u: goto L_08A7395C;
    case 715u: goto L_08A7396C;
    case 716u: goto L_08A73980;
    case 717u: goto L_08A739B4;
    case 718u: goto L_08A739FC;
    case 719u: goto L_08A73A08;
    case 720u: goto L_08A73A18;
    case 721u: goto L_08A73A2C;
    case 722u: goto L_08A73A58;
    case 723u: goto L_08A73A60;
    case 724u: goto L_08A73A7C;
    case 725u: goto L_08A73ACC;
    case 726u: goto L_08A73AF0;
    case 727u: goto L_08A73B54;
    case 728u: goto L_08A73B90;
    case 729u: goto L_08A73BD0;
    case 730u: goto L_08A73BDC;
    case 731u: goto L_08A73BFC;
    case 732u: goto L_08A73C10;
    case 733u: goto L_08A73C40;
    case 734u: goto L_08A73C48;
    case 735u: goto L_08A73C68;
    case 736u: goto L_08A73C70;
    case 737u: goto L_08A73CAC;
    case 738u: goto L_08A73CBC;
    case 739u: goto L_08A73D04;
    case 740u: goto L_08A73D20;
    case 741u: goto L_08A73D48;
    case 742u: goto L_08A73DA4;
    case 743u: goto L_08A73DB8;
    case 744u: goto L_08A73DC8;
    case 745u: goto L_08A73DDC;
    case 746u: goto L_08A73DEC;
    case 747u: goto L_08A73DF4;
    case 748u: goto L_08A73E00;
    case 749u: goto L_08A73E0C;
    case 750u: goto L_08A73E14;
    case 751u: goto L_08A73E38;
    case 752u: goto L_08A73E48;
    case 753u: goto L_08A73E54;
    case 754u: goto L_08A73E58;
    case 755u: goto L_08A73E68;
    case 756u: goto L_08A73E70;
    case 757u: goto L_08A73EA4;
    case 758u: goto L_08A73EB0;
    case 759u: goto L_08A73EC4;
    case 760u: goto L_08A73EC8;
    case 761u: goto L_08A73EF0;
    case 762u: goto L_08A73F1C;
    case 763u: goto L_08A73F74;
    case 764u: goto L_08A73F90;
    case 765u: goto L_08A73FA0;
    case 766u: goto L_08A73FA8;
    case 767u: goto L_08A73FB0;
    case 768u: goto L_08A73FB8;
    case 769u: goto L_08A73FC0;
    case 770u: goto L_08A73FD8;
    case 771u: goto L_08A73FE0;
    case 772u: goto L_08A73FEC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A70000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(800));
    ctx.gpr[5] = (ctx.gpr[21] < ctx.gpr[4] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08A70014;
    }
    goto L_08A70014;
L_08A70014:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A70038;
      }
      goto L_08A7001C;
    }
L_08A7001C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(688)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-800));
    ctx.gpr[5] = (ctx.gpr[4] < ctx.gpr[21] ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
        goto L_08A70034;
    }
    goto L_08A70034;
L_08A70034:
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    goto L_08A70038;
L_08A70038:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    ctx.gpr[4] = (17914u << 16u);
      if (branch_taken) {
          goto L_08A70084;
      }
      goto L_08A70040;
    }
L_08A70040:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08A70070;
    }
    goto L_08A70060;
L_08A70060:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70084;
      }
      goto L_08A70070;
    }
L_08A70070:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[21] + ctx.gpr[4]);
    goto L_08A70084;
L_08A70084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7009C;
      }
      goto L_08A70098;
    }
L_08A70098:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 2u));
    goto L_08A7009C;
L_08A7009C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A70158;
      }
      goto L_08A700A4;
    }
L_08A700A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A700B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A700B4u) goto L_08A700B4;
    return;
L_08A700B4:
    ctx.gpr[6] = (16908u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[18] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A700D0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A700D0u) goto L_08A700D0;
    return;
L_08A700D0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A70158;
      }
      goto L_08A700E0;
    }
L_08A700E0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70100;
      }
      goto L_08A700E8;
    }
L_08A700E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 5562u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70118;
      }
      goto L_08A70100;
    }
L_08A70100:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5563u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    goto L_08A70118;
L_08A70118:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[19]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A70158u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A70158u) goto L_08A70158;
    return;
L_08A70158:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70178;
      }
      goto L_08A70160;
    }
L_08A70160:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70178;
      }
      goto L_08A70168;
    }
L_08A70168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(692), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(688), ctx.gpr[21]);
    goto L_08A70178;
L_08A70178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08A7017C;
L_08A7017C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7019C;
      }
      goto L_08A70188;
    }
L_08A70188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7019C;
      }
      goto L_08A70194;
    }
L_08A70194:
    ctx.gpr[31] = (0x08A7019Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x08A7019Cu) goto L_08A7019C;
    return;
L_08A7019C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A701C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A701D0;
      }
      goto L_08A701D0;
    }
L_08A701D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A701D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (17436u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A703E0;
      }
      goto L_08A70214;
    }
L_08A70214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A70234;
      }
      goto L_08A70220;
    }
L_08A70220:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7024C;
      }
      goto L_08A70228;
    }
L_08A70228:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1728)));
      if (branch_taken) {
          goto L_08A70250;
      }
      goto L_08A70234;
    }
L_08A70234:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7024C;
      }
      goto L_08A70240;
    }
L_08A70240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1445)));
      if (branch_taken) {
          goto L_08A70250;
      }
      goto L_08A7024C;
    }
L_08A7024C:
    ctx.gpr[4] = (0u | 4u);
    goto L_08A70250;
L_08A70250:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A703D8;
      }
      goto L_08A7025C;
    }
L_08A7025C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A703D8;
      }
      goto L_08A70264;
    }
L_08A70264:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A703D8;
      }
      goto L_08A70280;
    }
L_08A70280:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A70290u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A70290u) goto L_08A70290;
    return;
L_08A70290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[22] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A702C8;
    }
    goto L_08A702C8;
L_08A702C8:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8096)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A702FCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A702FCu) goto L_08A702FC;
    return;
L_08A702FC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A703D8;
      }
      goto L_08A7030C;
    }
L_08A7030C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 264u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 264u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[31] = (0x08A70344u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A70344u) goto L_08A70344;
    return;
L_08A70344:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A70368;
      }
      goto L_08A7035C;
    }
L_08A7035C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08A70368;
L_08A70368:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[13];
        goto L_08A7038C;
    }
    goto L_08A7037C;
L_08A7037C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A703A0;
      }
      goto L_08A7038C;
    }
L_08A7038C:
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A703A0;
L_08A703A0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A703D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A703D8u) goto L_08A703D8;
    return;
L_08A703D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A703E4;
      }
      goto L_08A703E0;
    }
L_08A703E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A703E4;
L_08A703E4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70404:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (17579u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A70470;
      }
      goto L_08A7045C;
    }
L_08A7045C:
    ctx.gpr[31] = (0x08A70464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x08A70464u) goto L_08A70464;
    return;
L_08A70464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A70E20;
      }
      goto L_08A70470;
    }
L_08A70470:
    ctx.gpr[31] = (0x08A70478u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A70478u) goto L_08A70478;
    return;
L_08A70478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A704D4;
      }
      goto L_08A70484;
    }
L_08A70484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A704D4;
      }
      goto L_08A7049C;
    }
L_08A7049C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[16] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25456));
      if (branch_taken) {
          goto L_08A704C0;
      }
      goto L_08A704AC;
    }
L_08A704AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A704B8u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A704B8u) goto L_08A704B8;
    return;
L_08A704B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A704CC;
      }
      goto L_08A704C0;
    }
L_08A704C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A704CCu);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A704CCu) goto L_08A704CC;
    return;
L_08A704CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A70E24;
      }
      goto L_08A704D4;
    }
L_08A704D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70E18;
      }
      goto L_08A704E4;
    }
L_08A704E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A704F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A704F4u) goto L_08A704F4;
    return;
L_08A704F4:
    ctx.gpr[31] = (0x08A704FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A704FCu) goto L_08A704FC;
    return;
L_08A704FC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7056C;
      }
      goto L_08A7050C;
    }
L_08A7050C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7056C;
      }
      goto L_08A7051C;
    }
L_08A7051C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8020));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A70548u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 304u, 0x088B5DD4u>(ctx, &aot_mem) && ctx.pc == 0x08A70548u) goto L_08A70548;
    return;
L_08A70548:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A70E18;
      }
      goto L_08A70554;
    }
L_08A70554:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A70564u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A70E50;
L_08A70564:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70E18;
      }
      goto L_08A7056C;
    }
L_08A7056C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70AF0;
      }
      goto L_08A70578;
    }
L_08A70578:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 203 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A705A0;
      }
      goto L_08A70588;
    }
L_08A70588:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A705D4;
      }
      goto L_08A70594;
    }
L_08A70594:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A705D8;
      }
      goto L_08A705A0;
    }
L_08A705A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 206 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 207 ? 1u : 0u);
        goto L_08A705C0;
    }
    goto L_08A705AC;
L_08A705AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 205 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A705C8;
      }
      goto L_08A705B8;
    }
L_08A705B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A705D4;
      }
      goto L_08A705C0;
    }
L_08A705C0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A705D4;
      }
      goto L_08A705C8;
    }
L_08A705C8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A705D8;
      }
      goto L_08A705D4;
    }
L_08A705D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(624)));
    goto L_08A705D8;
L_08A705D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08A70624;
      }
      goto L_08A705E0;
    }
L_08A705E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7060C;
      }
      goto L_08A705E8;
    }
L_08A705E8:
    ctx.gpr[11] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1729)));
    ctx.gpr[11] = (16916u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1730)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(1732));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[2] + static_cast<std::uint32_t>(1736));
      if (branch_taken) {
          goto L_08A7064C;
      }
      goto L_08A7060C;
    }
L_08A7060C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A7061Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23672));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7061Cu) goto L_08A7061C;
    return;
L_08A7061C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A70E24;
      }
      goto L_08A70624;
    }
L_08A70624:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7060C;
      }
      goto L_08A7062C;
    }
L_08A7062C:
    ctx.gpr[11] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1446)));
    ctx.gpr[11] = (16916u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1447)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(1448));
    ctx.gpr[10] = (ctx.gpr[2] + static_cast<std::uint32_t>(1452));
    goto L_08A7064C;
L_08A7064C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A709B0;
      }
      goto L_08A70654;
    }
L_08A70654:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[5] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[11] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A706AC;
      }
      goto L_08A70678;
    }
L_08A70678:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70688;
      }
      goto L_08A70680;
    }
L_08A70680:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A706AC;
      }
      goto L_08A70688;
    }
L_08A70688:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7086C;
      }
      goto L_08A7069C;
    }
L_08A7069C:
    ctx.gpr[7] = (16230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 26214u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A7086C;
      }
      goto L_08A706AC;
    }
L_08A706AC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[3] = (0u | 2u);
    ctx.gpr[11] = (ctx.gpr[11] & 496u);
    ctx.gpr[11] = (ctx.gpr[11] >> 4u);
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A706D4;
      }
      goto L_08A706C4;
    }
L_08A706C4:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A706D4;
      }
      goto L_08A706CC;
    }
L_08A706CC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A706DC;
      }
      goto L_08A706D4;
    }
L_08A706D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7086C;
      }
      goto L_08A706DC;
    }
L_08A706DC:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[3] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    ctx.gpr[3] = (0u | 70u);
      if (branch_taken) {
          goto L_08A70704;
      }
      goto L_08A706EC;
    }
L_08A706EC:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    ctx.gpr[3] = (0u | 52u);
      if (branch_taken) {
          goto L_08A70770;
      }
      goto L_08A706F4;
    }
L_08A706F4:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A707DC;
      }
      goto L_08A706FC;
    }
L_08A706FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7086C;
      }
      goto L_08A70704;
    }
L_08A70704:
    ctx.gpr[3] = (ctx.gpr[7] | 0u);
    ctx.gpr[12] = (0u | 5u);
    ctx.gpr[11] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A70734;
      }
      goto L_08A70718;
    }
L_08A70718:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A70768;
      }
      goto L_08A70720;
    }
L_08A70720:
    ctx.gpr[7] = (15948u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A70768;
      }
      goto L_08A70734;
    }
L_08A70734:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A7074C;
      }
      goto L_08A7073C;
    }
L_08A7073C:
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
    goto L_08A7074C;
L_08A7074C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A70768;
      }
      goto L_08A70758;
    }
L_08A70758:
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A70768;
L_08A70768:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7086C;
      }
      goto L_08A70770;
    }
L_08A70770:
    ctx.gpr[3] = (ctx.gpr[7] | 0u);
    ctx.gpr[12] = (0u | 5u);
    ctx.gpr[11] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A707A0;
      }
      goto L_08A70784;
    }
L_08A70784:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A707D4;
      }
      goto L_08A7078C;
    }
L_08A7078C:
    ctx.gpr[7] = (15948u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A707D4;
      }
      goto L_08A707A0;
    }
L_08A707A0:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A707B8;
      }
      goto L_08A707A8;
    }
L_08A707A8:
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
    goto L_08A707B8;
L_08A707B8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A707D4;
      }
      goto L_08A707C4;
    }
L_08A707C4:
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A707D4;
L_08A707D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7086C;
      }
      goto L_08A707DC;
    }
L_08A707DC:
    ctx.gpr[11] = (ctx.gpr[7] | 0u);
    ctx.gpr[3] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[3];
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A70830;
      }
      goto L_08A707EC;
    }
L_08A707EC:
    ctx.gpr[3] = (15820u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 52429u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A707FC;
L_08A707FC:
    ctx.gpr[3] = (ctx.gpr[11] << 2u);
    ctx.gpr[3] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A70814;
      }
      goto L_08A70810;
    }
L_08A70810:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A70814;
L_08A70814:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A707FC;
      }
      goto L_08A70828;
    }
L_08A70828:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7086C;
      }
      goto L_08A70830;
    }
L_08A70830:
    ctx.gpr[3] = (15692u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 52429u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A70840;
L_08A70840:
    ctx.gpr[3] = (ctx.gpr[11] << 2u);
    ctx.gpr[3] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A70858;
      }
      goto L_08A70854;
    }
L_08A70854:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A70858;
L_08A70858:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A70840;
      }
      goto L_08A7086C;
    }
L_08A7086C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A709A8;
      }
      goto L_08A7087C;
    }
L_08A7087C:
    ctx.gpr[10] = (16256u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] | ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A708B0;
      }
      goto L_08A70890;
    }
L_08A70890:
    ctx.fpr[20] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A708A8;
    }
    goto L_08A708A8;
L_08A708A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A709DC;
      }
      goto L_08A708B0;
    }
L_08A708B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A70968;
      }
      goto L_08A708B8;
    }
L_08A708B8:
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.gpr[7] = (16416u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A708F8;
    }
    goto L_08A708F8;
L_08A708F8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_08A70948;
    }
    goto L_08A70908;
L_08A70908:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    ctx.gpr[7] = (ctx.gpr[7] >> 4u);
    if (ctx.gpr[7] == ctx.gpr[9]) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_08A70948;
    }
    goto L_08A70920;
L_08A70920:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_08A70948;
    }
    goto L_08A70938;
L_08A70938:
    ctx.gpr[6] = (16179u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    goto L_08A70948;
L_08A70948:
    ctx.gpr[6] = (16243u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08A709DC;
      }
      goto L_08A70968;
    }
L_08A70968:
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A709A0;
    }
    goto L_08A709A0;
L_08A709A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A709DC;
      }
      goto L_08A709A8;
    }
L_08A709A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A709DC;
      }
      goto L_08A709B0;
    }
L_08A709B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A709D0;
      }
      goto L_08A709B8;
    }
L_08A709B8:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A709D0;
L_08A709D0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(603))))));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08A709DC;
L_08A709DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (18060u << 16u);
      if (branch_taken) {
          goto L_08A70A54;
      }
      goto L_08A709E4;
    }
L_08A709E4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[6] = (18060u << 16u);
      if (branch_taken) {
          goto L_08A70A54;
      }
      goto L_08A709EC;
    }
L_08A709EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (17995u << 16u);
      if (branch_taken) {
          goto L_08A70A04;
      }
      goto L_08A709FC;
    }
L_08A709FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 22050u);
      if (branch_taken) {
          goto L_08A70AAC;
      }
      goto L_08A70A04;
    }
L_08A70A04:
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A70A38;
    }
    goto L_08A70A28;
L_08A70A28:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A70A4C;
      }
      goto L_08A70A38;
    }
L_08A70A38:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_08A70A4C;
L_08A70A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70AAC;
      }
      goto L_08A70A54;
    }
L_08A70A54:
    ctx.gpr[6] = (ctx.gpr[6] | 40960u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A70A88;
    }
    goto L_08A70A78;
L_08A70A78:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A70A9C;
      }
      goto L_08A70A88;
    }
L_08A70A88:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_08A70A9C;
L_08A70A9C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1200));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A70AAC;
L_08A70AAC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A70AE8;
      }
      goto L_08A70ABC;
    }
L_08A70ABC:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[4] = (16752u << 16u);
    ctx.gpr[6] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A70B08;
      }
      goto L_08A70AE8;
    }
L_08A70AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 105u);
      if (branch_taken) {
          goto L_08A70B08;
      }
      goto L_08A70AF0;
    }
L_08A70AF0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (16916u << 16u);
    ctx.gpr[4] = (0u | 90u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08A70B08;
L_08A70B08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70B18;
      }
      goto L_08A70B10;
    }
L_08A70B10:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A70B18;
L_08A70B18:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70B8C;
      }
      goto L_08A70B20;
    }
L_08A70B20:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17669u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A70B6C;
      }
      goto L_08A70B5C;
    }
L_08A70B5C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4270));
      if (branch_taken) {
          goto L_08A70B84;
      }
      goto L_08A70B6C;
    }
L_08A70B6C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4270));
    goto L_08A70B84;
L_08A70B84:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A70B8C;
L_08A70B8C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A70BA0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A70BA0u) goto L_08A70BA0;
    return;
L_08A70BA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A70E18;
      }
      goto L_08A70BB0;
    }
L_08A70BB0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A70D24;
      }
      goto L_08A70BB8;
    }
L_08A70BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8020));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (15523u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    ctx.gpr[9] = (ctx.gpr[9] | 55050u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[7] >> 4u);
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A70C94;
      }
      goto L_08A70C00;
    }
L_08A70C00:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A70C80;
      }
      goto L_08A70C10;
    }
L_08A70C10:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10456));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70C5C;
      }
      goto L_08A70C4C;
    }
L_08A70C4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A70C74;
      }
      goto L_08A70C5C;
    }
L_08A70C5C:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    goto L_08A70C74;
L_08A70C74:
    ctx.gpr[4] = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70D24;
      }
      goto L_08A70C80;
    }
L_08A70C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A70D24;
      }
      goto L_08A70C94;
    }
L_08A70C94:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[6] << 3u);
      if (branch_taken) {
          goto L_08A70D14;
      }
      goto L_08A70CA8;
    }
L_08A70CA8:
    ctx.gpr[6] = (17948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2229u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10456));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70CF0;
      }
      goto L_08A70CE0;
    }
L_08A70CE0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A70D08;
      }
      goto L_08A70CF0;
    }
L_08A70CF0:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    goto L_08A70D08;
L_08A70D08:
    ctx.gpr[4] = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70D24;
      }
      goto L_08A70D14;
    }
L_08A70D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A70D24;
L_08A70D24:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A70D8C;
    }
    goto L_08A70D2C;
L_08A70D2C:
    ctx.gpr[31] = (0x08A70D34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x08A70D34u) goto L_08A70D34;
    return;
L_08A70D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A70D58;
      }
      goto L_08A70D40;
    }
L_08A70D40:
    ctx.gpr[4] = (0u | 5557u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5557u);
      if (branch_taken) {
          goto L_08A70D68;
      }
      goto L_08A70D58;
    }
L_08A70D58:
    ctx.gpr[4] = (0u | 78u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 78u);
    goto L_08A70D68;
L_08A70D68:
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A70DB8;
      }
      goto L_08A70D8C;
    }
L_08A70D8C:
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A70DB8;
L_08A70DB8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 89u);
      if (branch_taken) {
          goto L_08A70DD8;
      }
      goto L_08A70DD0;
    }
L_08A70DD0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A70DE4;
      }
      goto L_08A70DD8;
    }
L_08A70DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A70DE4;
L_08A70DE4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A70E18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A70E18u) goto L_08A70E18;
    return;
L_08A70E18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A70E24;
      }
      goto L_08A70E20;
    }
L_08A70E20:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A70E24;
L_08A70E24:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70E50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25456));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A70ED4;
      }
      goto L_08A70ECC;
    }
L_08A70ECC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 21u);
      if (branch_taken) {
          goto L_08A70ED8;
      }
      goto L_08A70ED4;
    }
L_08A70ED4:
    ctx.gpr[30] = (0u | 23u);
    goto L_08A70ED8;
L_08A70ED8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10648)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70F1C;
      }
      goto L_08A70EE4;
    }
L_08A70EE4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10648), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(11124), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11126), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11153), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11152), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11156), 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11160), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A70F1C;
L_08A70F1C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A70F28u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3080));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 645u, 0x088BB178u>(ctx, &aot_mem) && ctx.pc == 0x08A70F28u) goto L_08A70F28;
    return;
L_08A70F28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70F58;
      }
      goto L_08A70F30;
    }
L_08A70F30:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25440));
    ctx.gpr[31] = (0x08A70F40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 27u, 0x08A980DCu>(ctx, &aot_mem) && ctx.pc == 0x08A70F40u) goto L_08A70F40;
    return;
L_08A70F40:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A70F4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1088u, 0x08A97F64u>(ctx, &aot_mem) && ctx.pc == 0x08A70F4Cu) goto L_08A70F4C;
    return;
L_08A70F4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A70F6C;
      }
      goto L_08A70F58;
    }
L_08A70F58:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A70F6C;
L_08A70F6C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A70F98;
      }
      goto L_08A70F8C;
    }
L_08A70F8C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A70FA0;
      }
      goto L_08A70F98;
    }
L_08A70F98:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A70FA0;
L_08A70FA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A70FB0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 362u, 0x088B6128u>(ctx, &aot_mem) && ctx.pc == 0x08A70FB0u) goto L_08A70FB0;
    return;
L_08A70FB0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[14];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A70FE4;
    }
    goto L_08A70FE4;
L_08A70FE4:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A70FF4;
    }
    goto L_08A70FF4;
L_08A70FF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 203 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A7109C;
      }
      goto L_08A71004;
    }
L_08A71004:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 206 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 207 ? 1u : 0u);
        goto L_08A71028;
    }
    goto L_08A71010;
L_08A71010:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 205 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(74)));
        goto L_08A71034;
    }
    goto L_08A7101C;
L_08A7101C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7109C;
      }
      goto L_08A71024;
    }
L_08A71024:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 207 ? 1u : 0u);
    goto L_08A71028;
L_08A71028:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7109C;
      }
      goto L_08A71030;
    }
L_08A71030:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(74)));
    goto L_08A71034;
L_08A71034:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11126), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11126)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A71084;
      }
      goto L_08A71060;
    }
L_08A71060:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11156), 0u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(11124), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A71090;
      }
      goto L_08A71084;
    }
L_08A71084:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11156), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A71090;
L_08A71090:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A710A8;
      }
      goto L_08A7109C;
    }
L_08A7109C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(624)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A710A8;
L_08A710A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) > 0;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A71130;
      }
      goto L_08A710B0;
    }
L_08A710B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A71118;
      }
      goto L_08A710B8;
    }
L_08A710B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (20224u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1729)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1730)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1580)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11168)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[10] = (2226u << 16u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1732));
    ctx.gpr[18] = (0u | 5u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11164)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(8020));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(23748));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10104));
      if (branch_taken) {
          goto L_08A71190;
      }
      goto L_08A71118;
    }
L_08A71118:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08A71128u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23672));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A71128u) goto L_08A71128;
    return;
L_08A71128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71D98;
      }
      goto L_08A71130;
    }
L_08A71130:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A71118;
      }
      goto L_08A71138;
    }
L_08A71138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (20224u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1446)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1447)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1352)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11168)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[10] = (2226u << 16u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1448));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11164)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(8020));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(23748));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10104));
    goto L_08A71190;
L_08A71190:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71294;
      }
      goto L_08A711A0;
    }
L_08A711A0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71224;
      }
      goto L_08A711C0;
    }
L_08A711C0:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A711E0;
    }
    goto L_08A711E0;
L_08A711E0:
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[30];
        goto L_08A71208;
    }
    goto L_08A711F8;
L_08A711F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A7121C;
      }
      goto L_08A71208;
    }
L_08A71208:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    goto L_08A7121C;
L_08A7121C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7127C;
      }
      goto L_08A71224;
    }
L_08A71224:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A71244;
    }
    goto L_08A71244;
L_08A71244:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[30];
        goto L_08A71268;
    }
    goto L_08A7125C;
L_08A7125C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A71278;
      }
      goto L_08A71268;
    }
L_08A71268:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08A71278;
L_08A71278:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08A7127C;
L_08A7127C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7128C;
      }
      goto L_08A71288;
    }
L_08A71288:
    ctx.gpr[19] = (0u - ctx.gpr[19]);
    goto L_08A7128C;
L_08A7128C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71298;
      }
      goto L_08A71294;
    }
L_08A71294:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A71298;
L_08A71298:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A712A8;
      }
      goto L_08A712A8;
    }
L_08A712A8:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
        goto L_08A712C0;
    }
    goto L_08A712B8;
L_08A712B8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08A712C0;
      }
      goto L_08A712C0;
    }
L_08A712C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_08A712D0;
      }
      goto L_08A712C8;
    }
L_08A712C8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[13];
    goto L_08A712D0;
L_08A712D0:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
        goto L_08A712F4;
    }
    goto L_08A712E8;
L_08A712E8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A71304;
      }
      goto L_08A712F4;
    }
L_08A712F4:
    ctx.gpr[22] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08A71304;
L_08A71304:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A71320;
      }
      goto L_08A71314;
    }
L_08A71314:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A71328;
      }
      goto L_08A71320;
    }
L_08A71320:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A71328;
L_08A71328:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A713A0;
      }
      goto L_08A71330;
    }
L_08A71330:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71344;
      }
      goto L_08A71340;
    }
L_08A71340:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1400));
    goto L_08A71344;
L_08A71344:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1308)));
    ctx.gpr[31] = (0x08A71354u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 383u, 0x08AF9AC4u>(ctx, &aot_mem) && ctx.pc == 0x08A71354u) goto L_08A71354;
    return;
L_08A71354:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A71368;
    }
    goto L_08A71368;
L_08A71368:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11172)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A71390;
      }
      goto L_08A71384;
    }
L_08A71384:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A71390;
L_08A71390:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A713A0;
L_08A713A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A713C4u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A713C4u) goto L_08A713C4;
    return;
L_08A713C4:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_08A719FC;
      }
      goto L_08A713E8;
    }
L_08A713E8:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11156)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71534;
      }
      goto L_08A713F8;
    }
L_08A713F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11160), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(265)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71480;
      }
      goto L_08A71410;
    }
L_08A71410:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71478;
      }
      goto L_08A71420;
    }
L_08A71420:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71478;
      }
      goto L_08A71428;
    }
L_08A71428:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(250))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A71478;
      }
      goto L_08A71434;
    }
L_08A71434:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71478;
      }
      goto L_08A71450;
    }
L_08A71450:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71478;
      }
      goto L_08A7145C;
    }
L_08A7145C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(74)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71480;
      }
      goto L_08A71478;
    }
L_08A71478:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11156), 0u);
      if (branch_taken) {
          goto L_08A71D68;
      }
      goto L_08A71480;
    }
L_08A71480:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11156)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 220 ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08A714BC;
      }
      goto L_08A71498;
    }
L_08A71498:
    ctx.gpr[6] = (14979u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A714D4;
      }
      goto L_08A714BC;
    }
L_08A714BC:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A714E8;
      }
      goto L_08A714C8;
    }
L_08A714C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11156), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A714E8;
      }
      goto L_08A714D4;
    }
L_08A714D4:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(800) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A714E8;
      }
      goto L_08A714E0;
    }
L_08A714E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11156), ctx.gpr[4]);
    goto L_08A714E8;
L_08A714E8:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A71508;
      }
      goto L_08A71504;
    }
L_08A71504:
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    goto L_08A71508;
L_08A71508:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(5524));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A7152Cu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 495u, 0x08A5EADCu>(ctx, &aot_mem) && ctx.pc == 0x08A7152Cu) goto L_08A7152C;
    return;
L_08A7152C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
      if (branch_taken) {
          goto L_08A71D6C;
      }
      goto L_08A71534;
    }
L_08A71534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_08A71568;
      }
      goto L_08A71544;
    }
L_08A71544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71560;
      }
      goto L_08A71558;
    }
L_08A71558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7156C;
      }
      goto L_08A71560;
    }
L_08A71560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7156C;
      }
      goto L_08A71568;
    }
L_08A71568:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A7156C;
L_08A7156C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A715E0;
      }
      goto L_08A7157C;
    }
L_08A7157C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A715E0;
      }
      goto L_08A71584;
    }
L_08A71584:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A715E0;
      }
      goto L_08A715A0;
    }
L_08A715A0:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A715E0;
      }
      goto L_08A715A8;
    }
L_08A715A8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A715D4;
      }
      goto L_08A715B0;
    }
L_08A715B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (15395u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A715E0;
      }
      goto L_08A715D4;
    }
L_08A715D4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(250))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A71854;
      }
      goto L_08A715E0;
    }
L_08A715E0:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10456));
    ctx.gpr[9] = (16840u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A71624;
      }
      goto L_08A71600;
    }
L_08A71600:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[7] = (ctx.gpr[7] & 32u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71624;
      }
      goto L_08A7161C;
    }
L_08A7161C:
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(250))))));
        goto L_08A71630;
    }
    goto L_08A71624;
L_08A71624:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71638;
      }
      goto L_08A7162C;
    }
L_08A7162C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(250))))));
    goto L_08A71630;
L_08A71630:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A71768;
      }
      goto L_08A71638;
    }
L_08A71638:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A7164C;
      }
      goto L_08A71640;
    }
L_08A71640:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08A71694;
      }
      goto L_08A7164C;
    }
L_08A7164C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A71674;
      }
      goto L_08A71668;
    }
L_08A71668:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11153)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71688;
      }
      goto L_08A71674;
    }
L_08A71674:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A716A4;
      }
      goto L_08A7167C;
    }
L_08A7167C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11152)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A716A4;
      }
      goto L_08A71688;
    }
L_08A71688:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A716A4;
      }
      goto L_08A71690;
    }
L_08A71690:
    ctx.gpr[4] = (16153u << 16u);
    goto L_08A71694;
L_08A71694:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A716A4;
L_08A716A4:
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A716BC;
      }
      goto L_08A716B0;
    }
L_08A716B0:
    ctx.gpr[4] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[4] = (18115u << 16u);
      if (branch_taken) {
          goto L_08A7170C;
      }
      goto L_08A716BC;
    }
L_08A716BC:
    ctx.gpr[4] = (18026u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24576u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[30];
        goto L_08A716EC;
    }
    goto L_08A716DC;
L_08A716DC:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A71700;
      }
      goto L_08A716EC;
    }
L_08A716EC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[19] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_08A71700;
L_08A71700:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A71750;
      }
      goto L_08A71708;
    }
L_08A71708:
    ctx.gpr[4] = (18115u << 16u);
    goto L_08A7170C;
L_08A7170C:
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[30];
        goto L_08A71738;
    }
    goto L_08A71728;
L_08A71728:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A7174C;
      }
      goto L_08A71738;
    }
L_08A71738:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[19] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_08A7174C;
L_08A7174C:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A71750;
L_08A71750:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A717CC;
      }
      goto L_08A71768;
    }
L_08A71768:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_08A71794;
      }
      goto L_08A71784;
    }
L_08A71784:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08A717AC;
      }
      goto L_08A71794;
    }
L_08A71794:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[30];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    goto L_08A717AC;
L_08A717AC:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A717CC;
L_08A717CC:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A717D8;
      }
      goto L_08A717D4;
    }
L_08A717D4:
    ctx.gpr[19] = (ctx.gpr[19] >> 1u);
    goto L_08A717D8;
L_08A717D8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7180C;
      }
      goto L_08A717E4;
    }
L_08A717E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(266), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A717F8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A717F8u) goto L_08A717F8;
    return;
L_08A717F8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11160), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(266)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    goto L_08A7180C;
L_08A7180C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71828;
      }
      goto L_08A71820;
    }
L_08A71820:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A71828;
L_08A71828:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A7184Cu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 495u, 0x08A5EADCu>(ctx, &aot_mem) && ctx.pc == 0x08A7184Cu) goto L_08A7184C;
    return;
L_08A7184C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A719F4;
      }
      goto L_08A71854;
    }
L_08A71854:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7186Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 951u, 0x08A9B768u>(ctx, &aot_mem) && ctx.pc == 0x08A7186Cu) goto L_08A7186C;
    return;
L_08A7186C:
    ctx.gpr[5] = (16916u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A71884u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 936u, 0x08A9B614u>(ctx, &aot_mem) && ctx.pc == 0x08A71884u) goto L_08A71884;
    return;
L_08A71884:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11160)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A718D8;
      }
      goto L_08A718A4;
    }
L_08A718A4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11126)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A718BC;
      }
      goto L_08A718B4;
    }
L_08A718B4:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A718D0;
      }
      goto L_08A718BC;
    }
L_08A718BC:
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08A718CC;
    }
    goto L_08A718CC;
L_08A718CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11126), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A718D0;
L_08A718D0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11160), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    goto L_08A718D8;
L_08A718D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7195C;
      }
      goto L_08A718E4;
    }
L_08A718E4:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08A71930;
    }
    goto L_08A718EC;
L_08A718EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11126)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(74)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08A71914;
    }
    goto L_08A71908;
L_08A71908:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11126), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A7192C;
      }
      goto L_08A71914;
    }
L_08A71914:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11156), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A713F8;
      }
      goto L_08A7192C;
    }
L_08A7192C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A71930;
L_08A71930:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(5523));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A7195Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 297u, 0x088B5D5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7195Cu) goto L_08A7195C;
    return;
L_08A7195C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x08A71970u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A71970u) goto L_08A71970;
    return;
L_08A71970:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A71988u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 339u, 0x088B5F94u>(ctx, &aot_mem) && ctx.pc == 0x08A71988u) goto L_08A71988;
    return;
L_08A71988:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A71998u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 356u, 0x088B60CCu>(ctx, &aot_mem) && ctx.pc == 0x08A71998u) goto L_08A71998;
    return;
L_08A71998:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11126)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11128));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[7];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A719CC;
      }
      goto L_08A719C4;
    }
L_08A719C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
      if (branch_taken) {
          goto L_08A719CC;
      }
      goto L_08A719CC;
    }
L_08A719CC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A719DCu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 359u, 0x088B60FCu>(ctx, &aot_mem) && ctx.pc == 0x08A719DCu) goto L_08A719DC;
    return;
L_08A719DC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A719F4;
      }
      goto L_08A719E8;
    }
L_08A719E8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A719F4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 364u, 0x088B615Cu>(ctx, &aot_mem) && ctx.pc == 0x08A719F4u) goto L_08A719F4;
    return;
L_08A719F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
      if (branch_taken) {
          goto L_08A71D6C;
      }
      goto L_08A719FC;
    }
L_08A719FC:
    ctx.gpr[20] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10456));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[19] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A71AC4;
      }
      goto L_08A71A1C;
    }
L_08A71A1C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71A40;
      }
      goto L_08A71A28;
    }
L_08A71A28:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A71A34u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A71A34u) goto L_08A71A34;
    return;
L_08A71A34:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11160), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A71A40;
L_08A71A40:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71A70;
      }
      goto L_08A71A48;
    }
L_08A71A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71A70;
      }
      goto L_08A71A64;
    }
L_08A71A64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71A78;
      }
      goto L_08A71A70;
    }
L_08A71A70:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A71AA8;
      }
      goto L_08A71A78;
    }
L_08A71A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08A71A8C;
    }
    goto L_08A71A84;
L_08A71A84:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A71AA8;
      }
      goto L_08A71A8C;
    }
L_08A71A8C:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A71AA8;
    }
    goto L_08A71AA8;
L_08A71AA8:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71ABC;
      }
      goto L_08A71AB8;
    }
L_08A71AB8:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A71ABC;
L_08A71ABC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A71C9C;
      }
      goto L_08A71AC4;
    }
L_08A71AC4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(11124))))));
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[4] = (17948u << 16u);
        goto L_08A71CA0;
    }
    goto L_08A71AD4;
L_08A71AD4:
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A71B14;
      }
      goto L_08A71AE8;
    }
L_08A71AE8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A71AF8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 368u, 0x088B61B8u>(ctx, &aot_mem) && ctx.pc == 0x08A71AF8u) goto L_08A71AF8;
    return;
L_08A71AF8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11160), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A71B14;
L_08A71B14:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11156), 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A71B80;
      }
      goto L_08A71B24;
    }
L_08A71B24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71B80;
      }
      goto L_08A71B3C;
    }
L_08A71B3C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (15395u << 16u);
      if (branch_taken) {
          goto L_08A71B80;
      }
      goto L_08A71B48;
    }
L_08A71B48:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A71BCC;
      }
      goto L_08A71B64;
    }
L_08A71B64:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71BCC;
      }
      goto L_08A71B80;
    }
L_08A71B80:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 206u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A71BB0;
      }
      goto L_08A71B90;
    }
L_08A71B90:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 203u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A71BB0;
      }
      goto L_08A71BA0;
    }
L_08A71BA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 204u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08A71BB8;
      }
      goto L_08A71BB0;
    }
L_08A71BB0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A71BCC;
      }
      goto L_08A71BB8;
    }
L_08A71BB8:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A71BCC;
L_08A71BCC:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17948u << 16u);
      if (branch_taken) {
          goto L_08A71CA0;
      }
      goto L_08A71BDC;
    }
L_08A71BDC:
    ctx.gpr[4] = (16243u << 16u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A71C28;
      }
      goto L_08A71C18;
    }
L_08A71C18:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19000));
      if (branch_taken) {
          goto L_08A71C40;
      }
      goto L_08A71C28;
    }
L_08A71C28:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[30];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19000));
    goto L_08A71C40;
L_08A71C40:
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A71C74;
      }
      goto L_08A71C6C;
    }
L_08A71C6C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A71C74;
L_08A71C74:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A71C80;
      }
      goto L_08A71C7C;
    }
L_08A71C7C:
    ctx.gpr[6] = (ctx.gpr[4] >> 1u);
    goto L_08A71C80;
L_08A71C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(5525));
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 63u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A71C9Cu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 495u, 0x08A5EADCu>(ctx, &aot_mem) && ctx.pc == 0x08A71C9Cu) goto L_08A71C9C;
    return;
L_08A71C9C:
    ctx.gpr[4] = (17948u << 16u);
    goto L_08A71CA0;
L_08A71CA0:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_08A71CD4;
      }
      goto L_08A71CC4;
    }
L_08A71CC4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A71CEC;
      }
      goto L_08A71CD4;
    }
L_08A71CD4:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22050));
    goto L_08A71CEC;
L_08A71CEC:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A71D1C;
      }
      goto L_08A71D18;
    }
L_08A71D18:
    ctx.gpr[4] = (ctx.gpr[7] >> 1u);
    goto L_08A71D1C;
L_08A71D1C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71D2C;
      }
      goto L_08A71D24;
    }
L_08A71D24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A71D2C;
L_08A71D2C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 52u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A71D4Cu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 495u, 0x08A5EADCu>(ctx, &aot_mem) && ctx.pc == 0x08A71D4Cu) goto L_08A71D4C;
    return;
L_08A71D4C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 1 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_08A71D60;
    }
    goto L_08A71D60;
L_08A71D60:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11126), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A71D68;
L_08A71D68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    goto L_08A71D6C;
L_08A71D6C:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(11124), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11153), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11152), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A71D98;
L_08A71D98:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71DE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A720CC;
      }
      goto L_08A71E1C;
    }
L_08A71E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08A71E48;
      }
      goto L_08A71E28;
    }
L_08A71E28:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A71E68;
      }
      goto L_08A71E30;
    }
L_08A71E30:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71E70;
      }
      goto L_08A71E40;
    }
L_08A71E40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71ECC;
      }
      goto L_08A71E48;
    }
L_08A71E48:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A71E68;
      }
      goto L_08A71E50;
    }
L_08A71E50:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71EE4;
      }
      goto L_08A71E60;
    }
L_08A71E60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71F3C;
      }
      goto L_08A71E68;
    }
L_08A71E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A720D0;
      }
      goto L_08A71E70;
    }
L_08A71E70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A71E80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A2937Cu>(ctx, &aot_mem) && ctx.pc == 0x08A71E80u) goto L_08A71E80;
    return;
L_08A71E80:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A71EB8;
      }
      goto L_08A71E8C;
    }
L_08A71E8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71EB8;
      }
      goto L_08A71EB0;
    }
L_08A71EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A71ECC;
      }
      goto L_08A71EB8;
    }
L_08A71EB8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71E70;
      }
      goto L_08A71ECC;
    }
L_08A71ECC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71EDC;
      }
      goto L_08A71ED4;
    }
L_08A71ED4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71F54;
      }
      goto L_08A71EDC;
    }
L_08A71EDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A720D0;
      }
      goto L_08A71EE4;
    }
L_08A71EE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A71F28;
      }
      goto L_08A71EFC;
    }
L_08A71EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71F28;
      }
      goto L_08A71F20;
    }
L_08A71F20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A71F3C;
      }
      goto L_08A71F28;
    }
L_08A71F28:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71EE4;
      }
      goto L_08A71F3C;
    }
L_08A71F3C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71F4C;
      }
      goto L_08A71F44;
    }
L_08A71F44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71F54;
      }
      goto L_08A71F4C;
    }
L_08A71F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A720D0;
      }
      goto L_08A71F54;
    }
L_08A71F54:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A71F90;
    }
    goto L_08A71F90;
L_08A71F90:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A720C4;
      }
      goto L_08A71FAC;
    }
L_08A71FAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A71FBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A71FBCu) goto L_08A71FBC;
    return;
L_08A71FBC:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A71FE8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A71FE8u) goto L_08A71FE8;
    return;
L_08A71FE8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 95u);
      if (branch_taken) {
          goto L_08A720C4;
      }
      goto L_08A71FF8;
    }
L_08A71FF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (17835u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 303u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17835u << 16u);
      if (branch_taken) {
          goto L_08A72058;
      }
      goto L_08A7203C;
    }
L_08A7203C:
    ctx.gpr[4] = (17835u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A72080;
      }
      goto L_08A72058;
    }
L_08A72058:
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A72080;
L_08A72080:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A720C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A720C4u) goto L_08A720C4;
    return;
L_08A720C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A720D0;
      }
      goto L_08A720CC;
    }
L_08A720CC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A720D0;
L_08A720D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A720F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A7258C;
      }
      goto L_08A72154;
    }
L_08A72154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A72198;
      }
      goto L_08A72160;
    }
L_08A72160:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A72180;
      }
      goto L_08A72168;
    }
L_08A72168:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1728)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1732)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1736));
      if (branch_taken) {
          goto L_08A721B8;
      }
      goto L_08A72180;
    }
L_08A72180:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A72190u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23768));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A72190u) goto L_08A72190;
    return;
L_08A72190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A72590;
      }
      goto L_08A72198;
    }
L_08A72198:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A72180;
      }
      goto L_08A721A4;
    }
L_08A721A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1445)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1452));
    goto L_08A721B8;
L_08A721B8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A72584;
      }
      goto L_08A721C0;
    }
L_08A721C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A721D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A721D4u) goto L_08A721D4;
    return;
L_08A721D4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 82u);
      if (branch_taken) {
          goto L_08A72344;
      }
      goto L_08A721E4;
    }
L_08A721E4:
    ctx.gpr[23] = (0u | 70u);
    ctx.gpr[22] = (0u | 52u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[19] = (0u | 2u);
    goto L_08A721F8;
L_08A721F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A72218;
      }
      goto L_08A72210;
    }
L_08A72210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7232C;
      }
      goto L_08A72218;
    }
L_08A72218:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A72240;
      }
      goto L_08A72228;
    }
L_08A72228:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A7229C;
      }
      goto L_08A72230;
    }
L_08A72230:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A722F8;
      }
      goto L_08A72238;
    }
L_08A72238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72318;
      }
      goto L_08A72240;
    }
L_08A72240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A72254;
      }
      goto L_08A7224C;
    }
L_08A7224C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A72278;
      }
      goto L_08A72254;
    }
L_08A72254:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A72270u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 596u, 0x08A5F448u>(ctx, &aot_mem) && ctx.pc == 0x08A72270u) goto L_08A72270;
    return;
L_08A72270:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A72294;
      }
      goto L_08A72278;
    }
L_08A72278:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A72290u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 616u, 0x08A5F5E8u>(ctx, &aot_mem) && ctx.pc == 0x08A72290u) goto L_08A72290;
    return;
L_08A72290:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A72294;
L_08A72294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72318;
      }
      goto L_08A7229C;
    }
L_08A7229C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A722B0;
      }
      goto L_08A722A8;
    }
L_08A722A8:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A722D4;
      }
      goto L_08A722B0;
    }
L_08A722B0:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A722CCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 596u, 0x08A5F448u>(ctx, &aot_mem) && ctx.pc == 0x08A722CCu) goto L_08A722CC;
    return;
L_08A722CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A722F0;
      }
      goto L_08A722D4;
    }
L_08A722D4:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A722ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 616u, 0x08A5F5E8u>(ctx, &aot_mem) && ctx.pc == 0x08A722ECu) goto L_08A722EC;
    return;
L_08A722EC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A722F0;
L_08A722F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72318;
      }
      goto L_08A722F8;
    }
L_08A722F8:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A72314u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 596u, 0x08A5F448u>(ctx, &aot_mem) && ctx.pc == 0x08A72314u) goto L_08A72314;
    return;
L_08A72314:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A72318;
L_08A72318:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7232C;
      }
      goto L_08A72328;
    }
L_08A72328:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A7232C;
L_08A7232C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A721F8;
      }
      goto L_08A72344;
    }
L_08A72344:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A72584;
      }
      goto L_08A72354;
    }
L_08A72354:
    ctx.gpr[4] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16928u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A72384u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A72384u) goto L_08A72384;
    return;
L_08A72384:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A72584;
      }
      goto L_08A72394;
    }
L_08A72394:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(325)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (17820u << 16u);
        goto L_08A724D0;
    }
    goto L_08A723B8;
L_08A723B8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27000)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A723D0:
    ctx.gpr[6] = (17995u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (18184u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] | 47104u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 258u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A72410;
      }
      goto L_08A72404;
    }
L_08A72404:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A72424;
      }
      goto L_08A72410;
    }
L_08A72410:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08A72424;
L_08A72424:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72454;
      }
      goto L_08A7243C;
    }
L_08A7243C:
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[7] = (2233u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_08A72554;
      }
      goto L_08A72454;
    }
L_08A72454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A72590;
      }
      goto L_08A7245C;
    }
L_08A7245C:
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (17820u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 196u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_08A724B0;
      }
      goto L_08A724A4;
    }
L_08A724A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A724C4;
      }
      goto L_08A724B0;
    }
L_08A724B0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08A724C4;
L_08A724C4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A72554;
      }
      goto L_08A724CC;
    }
L_08A724CC:
    ctx.gpr[5] = (17820u << 16u);
    goto L_08A724D0;
L_08A724D0:
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (17963u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 57344u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 280u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_08A72520;
      }
      goto L_08A72514;
    }
L_08A72514:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A72534;
      }
      goto L_08A72520;
    }
L_08A72520:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08A72534;
L_08A72534:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A72554;
      }
      goto L_08A72548;
    }
L_08A72548:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A72554;
L_08A72554:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A72584u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A72584u) goto L_08A72584;
    return;
L_08A72584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A72590;
      }
      goto L_08A7258C;
    }
L_08A7258C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A72590;
L_08A72590:
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
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A725D0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A72604u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 162u, 0x088C4C68u>(ctx, &aot_mem) && ctx.pc == 0x08A72604u) goto L_08A72604;
    return;
L_08A72604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72624;
      }
      goto L_08A72610;
    }
L_08A72610:
    ctx.gpr[31] = (0x08A72618u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 180u, 0x089D5870u>(ctx, &aot_mem) && ctx.pc == 0x08A72618u) goto L_08A72618;
    return;
L_08A72618:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72660;
      }
      goto L_08A72624;
    }
L_08A72624:
    ctx.gpr[5] = (17981u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A72658;
      }
      goto L_08A72644;
    }
L_08A72644:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A726A4;
      }
      goto L_08A72650;
    }
L_08A72650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A72668;
      }
      goto L_08A72658;
    }
L_08A72658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A728E8;
      }
      goto L_08A72660;
    }
L_08A72660:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A728E8;
      }
      goto L_08A72668;
    }
L_08A72668:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A72698;
      }
      goto L_08A72674;
    }
L_08A72674:
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_08A7269C;
    }
    goto L_08A72680;
L_08A72680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A7269C;
      }
      goto L_08A72694;
    }
L_08A72694:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A72698;
L_08A72698:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_08A7269C;
L_08A7269C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A728E4;
      }
      goto L_08A726A4;
    }
L_08A726A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A726D8;
      }
      goto L_08A726B4;
    }
L_08A726B4:
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_08A726DC;
    }
    goto L_08A726C0;
L_08A726C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A726DC;
      }
      goto L_08A726D4;
    }
L_08A726D4:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A726D8;
L_08A726D8:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_08A726DC;
L_08A726DC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72724;
      }
      goto L_08A726E4;
    }
L_08A726E4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72708;
      }
      goto L_08A726FC;
    }
L_08A726FC:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(750));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(680), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A72708;
L_08A72708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(375));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72724;
      }
      goto L_08A7271C;
    }
L_08A7271C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A728E8;
      }
      goto L_08A72724;
    }
L_08A72724:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A72734u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A72734u) goto L_08A72734;
    return;
L_08A72734:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (17116u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 80u);
      if (branch_taken) {
          goto L_08A72754;
      }
      goto L_08A72750;
    }
L_08A72750:
    ctx.gpr[4] = (0u | 20u);
    goto L_08A72754;
L_08A72754:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A72768u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A72768u) goto L_08A72768;
    return;
L_08A72768:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A728E4;
      }
      goto L_08A72778;
    }
L_08A72778:
    ctx.gpr[19] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7278Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 626u, 0x08A5F6A8u>(ctx, &aot_mem) && ctx.pc == 0x08A7278Cu) goto L_08A7278C;
    return;
L_08A7278C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08A7286C;
    }
    goto L_08A72794;
L_08A72794:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72808;
      }
      goto L_08A727B0;
    }
L_08A727B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(680)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10384));
      if (branch_taken) {
          goto L_08A72810;
      }
      goto L_08A727C8;
    }
L_08A727C8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    goto L_08A727CC;
L_08A727CC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8020));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A728B4;
      }
      goto L_08A72808;
    }
L_08A72808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A728E8;
      }
      goto L_08A72810;
    }
L_08A72810:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08A727CC;
      }
      goto L_08A7281C;
    }
L_08A7281C:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08A727CC;
      }
      goto L_08A72828;
    }
L_08A72828:
    ctx.gpr[4] = (0u | 277u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7284C;
      }
      goto L_08A72840;
    }
L_08A72840:
    ctx.gpr[4] = (0u | 12668u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72860;
      }
      goto L_08A7284C;
    }
L_08A7284C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 277u);
    ctx.gpr[31] = (0x08A7285Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7285Cu) goto L_08A7285C;
    return;
L_08A7285C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08A72860;
L_08A72860:
    ctx.gpr[4] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A728B4;
      }
      goto L_08A7286C;
    }
L_08A7286C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8020));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10384));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A728B4;
L_08A728B4:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A728E4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A728E4u) goto L_08A728E4;
    return;
L_08A728E4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A728E8;
L_08A728E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A73EF0;
      }
      goto L_08A72974;
    }
L_08A72974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A72978;
L_08A72978:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 114 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A72B00;
      }
      goto L_08A729A8;
    }
L_08A729A8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 90 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A729E4;
      }
      goto L_08A729B4;
    }
L_08A729B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
        goto L_08A729D4;
    }
    goto L_08A729C0;
L_08A729C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A72B60;
      }
      goto L_08A729C8;
    }
L_08A729C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73EC8;
      }
      goto L_08A729D0;
    }
L_08A729D0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
    goto L_08A729D4;
L_08A729D4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A729C8;
      }
      goto L_08A729DC;
    }
L_08A729DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73864;
      }
      goto L_08A729E4;
    }
L_08A729E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 62u);
      if (branch_taken) {
          goto L_08A72A98;
      }
      goto L_08A729EC;
    }
L_08A729EC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A729C8;
      }
      goto L_08A729F4;
    }
L_08A729F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 34u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23));
    ctx.gpr[31] = (0x08A72A3Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A72A3Cu) goto L_08A72A3C;
    return;
L_08A72A3C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[21] >> 5u);
    ctx.gpr[31] = (0x08A72A50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A72A50u) goto L_08A72A50;
    return;
L_08A72A50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A72A98;
    }
L_08A72A98:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 94 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A729C8;
      }
      goto L_08A72AA4;
    }
L_08A72AA4:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A72AC8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A72AC8u) goto L_08A72AC8;
    return;
L_08A72AC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 50u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A72B00;
    }
L_08A72B00:
    ctx.gpr[5] = (0u | 203u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 166u);
      if (branch_taken) {
          goto L_08A72D40;
      }
      goto L_08A72B0C;
    }
L_08A72B0C:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 165u);
      if (branch_taken) {
          goto L_08A73B54;
      }
      goto L_08A72B14;
    }
L_08A72B14:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A73ACC;
      }
      goto L_08A72B1C;
    }
L_08A72B1C:
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 115u);
      if (branch_taken) {
          goto L_08A73318;
      }
      goto L_08A72B28;
    }
L_08A72B28:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 114u);
      if (branch_taken) {
          goto L_08A73C48;
      }
      goto L_08A72B30;
    }
L_08A72B30:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A729C8;
      }
      goto L_08A72B38;
    }
L_08A72B38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A72B58u);
    ctx.gpr[6] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 15u, 0x08A78170u>(ctx, &aot_mem) && ctx.pc == 0x08A72B58u) goto L_08A72B58;
    return;
L_08A72B58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73EC8;
      }
      goto L_08A72B60;
    }
L_08A72B60:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26872)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (15969u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[5] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A72BC0;
      }
      goto L_08A72BAC;
    }
L_08A72BAC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A72BCC;
      }
      goto L_08A72BC0;
    }
L_08A72BC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73EC8;
      }
      goto L_08A72BC8;
    }
L_08A72BC8:
    ctx.gpr[4] = (16256u << 16u);
    goto L_08A72BCC;
L_08A72BCC:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (0u | 41u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11184)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(89));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11184)));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A72C2C;
      }
      goto L_08A72C20;
    }
L_08A72C20:
    ctx.gpr[4] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11184), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A72C3C;
      }
      goto L_08A72C2C;
    }
L_08A72C2C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11184)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11184), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A72C3C;
L_08A72C3C:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17914u << 16u);
      if (branch_taken) {
          goto L_08A72C78;
      }
      goto L_08A72C60;
    }
L_08A72C60:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A72C9C;
      }
      goto L_08A72C78;
    }
L_08A72C78:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A72C9C;
L_08A72C9C:
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[22] >> 5u);
    ctx.gpr[31] = (0x08A72CB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A72CB0u) goto L_08A72CB0;
    return;
L_08A72CB0:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A72CD8;
    }
L_08A72CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 186u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 186u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A72D1Cu);
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A72D1Cu) goto L_08A72D1C;
    return;
L_08A72D1C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A72D40;
    }
L_08A72D40:
    ctx.gpr[4] = (0u | 50u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 72u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 120u);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A72D88;
    }
L_08A72D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8020));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17692u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(117));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A72DE8;
      }
      goto L_08A72DD4;
    }
L_08A72DD4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A72E10;
      }
      goto L_08A72DDC;
    }
L_08A72DDC:
    ctx.gpr[4] = (0u | 231u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72E18;
      }
      goto L_08A72DE8;
    }
L_08A72DE8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A72E04;
      }
      goto L_08A72DF4;
    }
L_08A72DF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72E10;
      }
      goto L_08A72DFC;
    }
L_08A72DFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08A72E18;
      }
      goto L_08A72E04;
    }
L_08A72E04:
    ctx.gpr[4] = (0u | 299u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72E18;
      }
      goto L_08A72E10;
    }
L_08A72E10:
    ctx.gpr[4] = (0u | 228u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A72E18;
L_08A72E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A72E4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08A72E4Cu) goto L_08A72E4C;
    return;
L_08A72E4C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72E64;
      }
      goto L_08A72E58;
    }
L_08A72E58:
    ctx.gpr[4] = (0u | 23459u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72E78;
      }
      goto L_08A72E64;
    }
L_08A72E64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A72E74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A72E74u) goto L_08A72E74;
    return;
L_08A72E74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08A72E78;
L_08A72E78:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A72E88u);
    ctx.gpr[5] = (ctx.gpr[22] >> 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A72E88u) goto L_08A72E88;
    return;
L_08A72E88:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A72EB8;
    }
L_08A72EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8020));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17692u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(122));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A72F18;
      }
      goto L_08A72F04;
    }
L_08A72F04:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A72F40;
      }
      goto L_08A72F0C;
    }
L_08A72F0C:
    ctx.gpr[4] = (0u | 230u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72F48;
      }
      goto L_08A72F18;
    }
L_08A72F18:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A72F34;
      }
      goto L_08A72F24;
    }
L_08A72F24:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72F40;
      }
      goto L_08A72F2C;
    }
L_08A72F2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08A72F48;
      }
      goto L_08A72F34;
    }
L_08A72F34:
    ctx.gpr[4] = (0u | 298u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72F48;
      }
      goto L_08A72F40;
    }
L_08A72F40:
    ctx.gpr[4] = (0u | 227u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A72F48;
L_08A72F48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A72F7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08A72F7Cu) goto L_08A72F7C;
    return;
L_08A72F7C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72F94;
      }
      goto L_08A72F88;
    }
L_08A72F88:
    ctx.gpr[4] = (0u | 28062u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72FA8;
      }
      goto L_08A72F94;
    }
L_08A72F94:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A72FA4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A72FA4u) goto L_08A72FA4;
    return;
L_08A72FA4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08A72FA8;
L_08A72FA8:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A72FB8u);
    ctx.gpr[5] = (ctx.gpr[22] >> 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A72FB8u) goto L_08A72FB8;
    return;
L_08A72FB8:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A72FE8;
    }
L_08A72FE8:
    ctx.gpr[31] = (0x08A72FF0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 126u, 0x088A08E8u>(ctx, &aot_mem) && ctx.pc == 0x08A72FF0u) goto L_08A72FF0;
    return;
L_08A72FF0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A73010;
      }
      goto L_08A72FFC;
    }
L_08A72FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 95u);
      if (branch_taken) {
          goto L_08A7301C;
      }
      goto L_08A73010;
    }
L_08A73010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73EC8;
      }
      goto L_08A73018;
    }
L_08A73018:
    ctx.gpr[4] = (0u | 95u);
    goto L_08A7301C;
L_08A7301C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 33u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 60u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 95u);
    ctx.gpr[31] = (0x08A73048u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A73048u) goto L_08A73048;
    return;
L_08A73048:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A73074;
    }
L_08A73074:
    ctx.gpr[4] = (0u | 187u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 187u);
    ctx.gpr[31] = (0x08A73098u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A73098u) goto L_08A73098;
    return;
L_08A73098:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[21] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.gpr[31] = (0x08A730BCu);
    ctx.gpr[5] = (ctx.gpr[22] >> 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A730BCu) goto L_08A730BC;
    return;
L_08A730BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A73100;
    }
L_08A73100:
    ctx.gpr[4] = (0u | 209u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 81u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 209u);
    ctx.gpr[31] = (0x08A73124u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A73124u) goto L_08A73124;
    return;
L_08A73124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 25u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18173u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(75));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A7316C;
    }
L_08A7316C:
    ctx.gpr[4] = (0u | 274u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 87u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 274u);
    ctx.gpr[31] = (0x08A73190u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A73190u) goto L_08A73190;
    return;
L_08A73190:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[21] >> 3u);
    ctx.gpr[31] = (0x08A731A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A731A4u) goto L_08A731A4;
    return;
L_08A731A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A731F0;
    }
L_08A731F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A73228;
      }
      goto L_08A7321C;
    }
L_08A7321C:
    ctx.gpr[4] = (0u | 15600u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A73230;
      }
      goto L_08A73228;
    }
L_08A73228:
    ctx.gpr[4] = (0u | 13118u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A73230;
L_08A73230:
    ctx.gpr[4] = (0u | 288u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 51u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] >> 3u);
    ctx.gpr[31] = (0x08A73254u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A73254u) goto L_08A73254;
    return;
L_08A73254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A732A0;
    }
L_08A732A0:
    ctx.gpr[4] = (0u | 289u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 86u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 288u);
    ctx.gpr[31] = (0x08A732C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A732C4u) goto L_08A732C4;
    return;
L_08A732C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A73318;
    }
L_08A73318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11180)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A733AC;
      }
      goto L_08A73330;
    }
L_08A73330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11180), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 287u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A73360u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A73360u) goto L_08A73360;
    return;
L_08A73360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A733AC;
    }
L_08A733AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73EC8;
      }
      goto L_08A733B4;
    }
L_08A733B4:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x08A733D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A733D8u) goto L_08A733D8;
    return;
L_08A733D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17505u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A73410;
    }
L_08A73410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A735E0;
      }
      goto L_08A73448;
    }
L_08A73448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A734AC;
    }
    goto L_08A73480;
L_08A73480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A734AC;
L_08A734AC:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17442u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11176)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11176), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11176)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 47 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17882u << 16u);
      if (branch_taken) {
          goto L_08A7352C;
      }
      goto L_08A7351C;
    }
L_08A7351C:
    ctx.gpr[4] = (0u | 41u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11176), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17882u << 16u);
    goto L_08A7352C;
L_08A7352C:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17882u << 16u);
      if (branch_taken) {
          goto L_08A7356C;
      }
      goto L_08A73550;
    }
L_08A73550:
    ctx.gpr[4] = (17882u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73594;
      }
      goto L_08A7356C;
    }
L_08A7356C:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08A73594;
L_08A73594:
    ctx.gpr[5] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(6000));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A735E0;
    }
L_08A735E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73EC8;
      }
      goto L_08A735E8;
    }
L_08A735E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17436u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 14u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A736A0;
    }
    goto L_08A73620;
L_08A73620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 302u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A73690;
      }
      goto L_08A73688;
    }
L_08A73688:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08A73690;
L_08A73690:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73718;
      }
      goto L_08A736A0;
    }
L_08A736A0:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 300u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7370C;
      }
      goto L_08A73704;
    }
L_08A73704:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08A7370C;
L_08A7370C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    goto L_08A73718;
L_08A73718:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11185)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11185), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11185)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7374C;
      }
      goto L_08A73740;
    }
L_08A73740:
    ctx.gpr[4] = (0u | 82u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11185), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7374C;
L_08A7374C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[31] = (0x08A7375Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7375Cu) goto L_08A7375C;
    return;
L_08A7375C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[22] >> 4u);
    ctx.gpr[31] = (0x08A73770u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A73770u) goto L_08A73770;
    return;
L_08A73770:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A73794;
      }
      goto L_08A73788;
    }
L_08A73788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A73794;
L_08A73794:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A737B8;
    }
L_08A737B8:
    ctx.gpr[4] = (0u | 301u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11186)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11186), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11186)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 95 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A737F4;
      }
      goto L_08A737E8;
    }
L_08A737E8:
    ctx.gpr[4] = (0u | 91u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11186), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A737F4;
L_08A737F4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 301u);
    ctx.gpr[31] = (0x08A73804u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A73804u) goto L_08A73804;
    return;
L_08A73804:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A73818u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A73818u) goto L_08A73818;
    return;
L_08A73818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17661u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(117));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A73864;
    }
L_08A73864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 213 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 216 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A73890;
      }
      goto L_08A73878;
    }
L_08A73878:
    ctx.gpr[5] = (0u | 199u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A738B8;
      }
      goto L_08A73884;
    }
L_08A73884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
      if (branch_taken) {
          goto L_08A739B4;
      }
      goto L_08A7388C;
    }
L_08A7388C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 216 ? 1u : 0u);
    goto L_08A73890;
L_08A73890:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 217 ? 1u : 0u);
        goto L_08A738B0;
    }
    goto L_08A73898;
L_08A73898:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 215 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A738B8;
      }
      goto L_08A738A4;
    }
L_08A738A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
      if (branch_taken) {
          goto L_08A739B4;
      }
      goto L_08A738AC;
    }
L_08A738AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 217 ? 1u : 0u);
    goto L_08A738B0;
L_08A738B0:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A739B4;
    }
    goto L_08A738B8;
L_08A738B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 213u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A73918;
      }
      goto L_08A738CC;
    }
L_08A738CC:
    ctx.gpr[31] = (0x08A738D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 524u, 0x08A964B8u>(ctx, &aot_mem) && ctx.pc == 0x08A738D4u) goto L_08A738D4;
    return;
L_08A738D4:
    ctx.gpr[31] = (0x08A738DCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1075u, 0x08A97EECu>(ctx, &aot_mem) && ctx.pc == 0x08A738DCu) goto L_08A738DC;
    return;
L_08A738DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A738F8;
      }
      goto L_08A738E4;
    }
L_08A738E4:
    ctx.gpr[31] = (0x08A738ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 350u, 0x08A5E138u>(ctx, &aot_mem) && ctx.pc == 0x08A738ECu) goto L_08A738EC;
    return;
L_08A738EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A73908;
      }
      goto L_08A738F8;
    }
L_08A738F8:
    ctx.gpr[4] = (0u | 216u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A73924;
      }
      goto L_08A73908;
    }
L_08A73908:
    ctx.gpr[4] = (0u | 266u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A73924;
      }
      goto L_08A73918;
    }
L_08A73918:
    ctx.gpr[4] = (0u | 216u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A73924;
L_08A73924:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11177)));
    ctx.gpr[21] = (0u | 127u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11177), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11177)));
    ctx.gpr[5] = (18017u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7395C;
      }
      goto L_08A73950;
    }
L_08A73950:
    ctx.gpr[4] = (0u | 53u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11177), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7395C;
L_08A7395C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 216u);
    ctx.gpr[31] = (0x08A7396Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A7396Cu) goto L_08A7396C;
    return;
L_08A7396C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[19] >> 4u);
    ctx.gpr[31] = (0x08A73980u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A73980u) goto L_08A73980;
    return;
L_08A73980:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A73A58;
      }
      goto L_08A739B4;
    }
L_08A739B4:
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 305u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11177)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11177), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11177)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(65));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73A08;
      }
      goto L_08A739FC;
    }
L_08A739FC:
    ctx.gpr[4] = (0u | 53u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11177), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A73A08;
L_08A73A08:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 305u);
    ctx.gpr[31] = (0x08A73A18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A73A18u) goto L_08A73A18;
    return;
L_08A73A18:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[22] >> 4u);
    ctx.gpr[31] = (0x08A73A2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A73A2Cu) goto L_08A73A2C;
    return;
L_08A73A2C:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A73A58;
L_08A73A58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A73A60;
    }
L_08A73A60:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 59u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A73A7Cu);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A73A7Cu) goto L_08A73A7C;
    return;
L_08A73A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(11025));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16908u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A73ACC;
    }
L_08A73ACC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11187)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(237));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A73AF0u);
    ctx.gpr[5] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A73AF0u) goto L_08A73AF0;
    return;
L_08A73AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11187)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11187), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11187)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11187), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A73B54;
    }
L_08A73B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5972));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A73B90;
    }
    goto L_08A73B90;
L_08A73B90:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17150u << 16u);
    ctx.gpr[4] = (0u | 127u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08A73BD0;
    }
    goto L_08A73BD0;
L_08A73BD0:
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A73C40;
      }
      goto L_08A73BDC;
    }
L_08A73BDC:
    ctx.gpr[5] = (0u | 169u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A73BFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25456));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F54u>(ctx, &aot_mem) && ctx.pc == 0x08A73BFCu) goto L_08A73BFC;
    return;
L_08A73BFC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[22] >> 4u);
    ctx.gpr[31] = (0x08A73C10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 875u, 0x08A9AFCCu>(ctx, &aot_mem) && ctx.pc == 0x08A73C10u) goto L_08A73C10;
    return;
L_08A73C10:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A73DA4;
      }
      goto L_08A73C40;
    }
L_08A73C40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73EC8;
      }
      goto L_08A73C48;
    }
L_08A73C48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A73C68u);
    ctx.gpr[6] = (0u | 115u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 15u, 0x08A78170u>(ctx, &aot_mem) && ctx.pc == 0x08A73C68u) goto L_08A73C68;
    return;
L_08A73C68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73EC8;
      }
      goto L_08A73C70;
    }
L_08A73C70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (15645u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15645u << 16u);
      if (branch_taken) {
          goto L_08A73CBC;
      }
      goto L_08A73CAC;
    }
L_08A73CAC:
    ctx.gpr[4] = (15645u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15645u << 16u);
    goto L_08A73CBC;
L_08A73CBC:
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[4] = (0u | 290u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 79u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_08A73D20;
      }
      goto L_08A73D04;
    }
L_08A73D04:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73D48;
      }
      goto L_08A73D20;
    }
L_08A73D20:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_08A73D48;
L_08A73D48:
    ctx.gpr[5] = (16916u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(9000));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (17608u << 16u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(90));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    goto L_08A73DA4;
L_08A73DA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A73EC8;
    }
    goto L_08A73DB8;
L_08A73DB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A73DC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 287u, 0x08A5DDB0u>(ctx, &aot_mem) && ctx.pc == 0x08A73DC8u) goto L_08A73DC8;
    return;
L_08A73DC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A73DDCu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 944u, 0x08A9B6DCu>(ctx, &aot_mem) && ctx.pc == 0x08A73DDCu) goto L_08A73DDC;
    return;
L_08A73DDC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A73EC8;
    }
    goto L_08A73DEC;
L_08A73DEC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73E00;
      }
      goto L_08A73DF4;
    }
L_08A73DF4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A73E0C;
      }
      goto L_08A73E00;
    }
L_08A73E00:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A73E0C;
L_08A73E0C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A73E54;
      }
      goto L_08A73E14;
    }
L_08A73E14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A73E48;
      }
      goto L_08A73E38;
    }
L_08A73E38:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A73E58;
      }
      goto L_08A73E48;
    }
L_08A73E48:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A73E58;
      }
      goto L_08A73E54;
    }
L_08A73E54:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    goto L_08A73E58;
L_08A73E58:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A73E68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A73E68u) goto L_08A73E68;
    return;
L_08A73E68:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_08A73EC4;
      }
      goto L_08A73E70;
    }
L_08A73E70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11177)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11177), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11177)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A73EB0;
      }
      goto L_08A73EA4;
    }
L_08A73EA4:
    ctx.gpr[4] = (0u | 53u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11177), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A73EB0;
L_08A73EB0:
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A73EC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10384));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 888u, 0x08A9B0D0u>(ctx, &aot_mem) && ctx.pc == 0x08A73EC4u) goto L_08A73EC4;
    return;
L_08A73EC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A73EC8;
L_08A73EC8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A72978;
    }
    goto L_08A73EF0;
L_08A73EF0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
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
L_08A73F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (18120u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 64u, 0x08A74490u>(ctx, &aot_mem); return;
      }
      goto L_08A73F74;
    }
L_08A73F74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (ctx.gpr[8] & 496u);
    ctx.gpr[8] = (ctx.gpr[8] >> 4u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A73FA8;
      }
      goto L_08A73F90;
    }
L_08A73F90:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < -992 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A73FB0;
      }
      goto L_08A73FA0;
    }
L_08A73FA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < 196 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A73FD8;
      }
      goto L_08A73FA8;
    }
L_08A73FA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 65u, 0x08A74494u>(ctx, &aot_mem); return;
      }
      goto L_08A73FB0;
    }
L_08A73FB0:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < -973 ? 1u : 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 3u, 0x08A74024u>(ctx, &aot_mem); return;
      }
      goto L_08A73FB8;
    }
L_08A73FB8:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[21] + static_cast<std::uint32_t>(992));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 3u, 0x08A74024u>(ctx, &aot_mem); return;
      }
      goto L_08A73FC0;
    }
L_08A73FC0:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26744)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73FD8:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < 197 ? 1u : 0u);
        (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 2u, 0x08A7401Cu>(ctx, &aot_mem); return;
    }
    goto L_08A73FE0;
L_08A73FE0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 195 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 6u, 0x08A74080u>(ctx, &aot_mem); return;
      }
      goto L_08A73FEC;
    }
L_08A73FEC:
    ctx.gpr[5] = (17851u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 9000u);
    ctx.gpr[5] = (16856u << 16u);
    ctx.pc = 0x08A74000u; return;
}

void recomp_unit_0155(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0155_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_155(Runtime &runtime) {
    runtime.register_generated_unit(155u, 0x08A70000u, 16384u, &recomp_unit_0155, &recomp_unit_0155_entry);
    runtime.register_function(0x08A70000u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70014u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7001Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70034u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70038u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70040u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70060u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70070u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70084u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70098u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7009Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70100u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70118u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70158u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70160u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70168u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70178u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7017Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70188u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70194u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7019Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A701C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A701D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A701D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70214u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70220u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70228u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70234u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70240u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7024Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70250u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7025Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70264u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70280u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70290u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7030Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70344u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7035Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70368u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7037Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7038Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70404u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7045Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70464u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70470u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70478u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70484u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7049Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7050Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7051Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70548u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70554u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70564u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7056Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70578u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70588u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70594u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7060Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7061Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70624u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7062Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7064Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70654u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70678u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70680u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70688u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7069Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70704u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70718u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70720u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70734u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7073Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7074Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70758u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70768u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70770u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70784u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7078Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70810u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70814u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70828u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70830u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70840u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70854u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70858u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7086Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7087Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70890u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70908u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70920u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70938u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70948u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70968u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70ABCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B84u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D34u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70ECCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70ED4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70ED8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71004u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71010u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7101Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71024u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71028u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71030u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71034u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71060u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71084u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71090u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7109Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71118u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71128u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71130u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71138u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71190u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71208u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7121Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71224u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71244u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7125Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71268u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71278u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7127Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71288u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7128Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71294u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71298u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71304u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71314u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71320u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71328u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71330u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71340u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71344u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71354u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71368u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71384u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71390u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71410u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71420u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71428u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71434u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71450u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7145Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71478u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71480u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71498u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71504u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71508u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7152Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71534u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71544u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71558u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71560u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71568u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7156Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7157Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71584u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71600u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7161Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71624u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7162Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71630u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71638u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71640u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7164Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71668u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71674u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7167Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71688u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71690u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71694u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71700u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71708u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7170Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71728u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71738u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7174Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71750u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71768u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71784u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71794u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7180Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71820u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71828u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7184Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71854u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7186Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71884u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71908u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71914u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7192Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71930u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7195Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71970u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71988u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71998u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A34u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A84u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71ABCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AD4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BCCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CD4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71ECCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71ED4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FBCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7203Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72058u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72080u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72154u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72160u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72168u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72180u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72190u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72198u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72210u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72218u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72228u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72230u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72238u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72240u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7224Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72254u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72270u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72278u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72290u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72294u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7229Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72314u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72318u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72328u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7232Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72344u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72354u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72384u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72394u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A723B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A723D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72404u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72410u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72424u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7243Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72454u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7245Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72514u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72520u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72534u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72548u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72554u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72584u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7258Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72590u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72604u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72610u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72618u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72624u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72644u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72650u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72658u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72660u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72668u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72674u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72680u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72694u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72698u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7269Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72708u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7271Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72724u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72734u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72750u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72754u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72768u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72778u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7278Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72794u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72808u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72810u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7281Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72828u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72840u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7284Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7285Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72860u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7286Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72910u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72974u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72978u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72AA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72AC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72BACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72BC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72BC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72BCCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DD4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F34u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73010u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73018u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7301Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73048u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73074u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73098u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A730BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73100u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73124u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7316Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73190u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A731A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A731F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7321Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73228u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73230u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73254u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A732A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A732C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73318u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73330u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73360u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A733ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A733B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A733D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73410u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73448u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73480u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A734ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7351Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7352Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73550u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7356Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73594u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A735E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A735E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73620u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73688u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73690u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A736A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73704u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7370Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73718u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73740u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7374Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7375Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73770u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73788u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73794u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73804u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73818u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73864u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73878u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73884u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7388Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73890u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73898u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73908u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73918u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73924u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73950u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7395Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7396Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73980u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A739B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A739FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73ACCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73AF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73BD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73BDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73BFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CBCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FECu, &recomp_unit_0155, "recomp_unit_0155");
}
} // namespace psprecomp
