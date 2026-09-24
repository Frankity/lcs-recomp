#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0129[4088] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 0, 5, 0, 0, 0, 0, 6, 0, 0, 0, 7,
    0, 0, 8, 0, 0, 0, 0, 9, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 13, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0, 0, 0, 15,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 17, 0, 0, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 0, 0, 0, 21, 0, 0, 0, 22, 23, 24, 0, 0, 0, 25, 26, 0, 0, 0, 27, 0,
    28, 0, 0, 0, 0, 0, 0, 0, 29, 0, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0, 0, 0, 33, 0, 34, 0, 0, 0, 0, 0,
    0, 0, 0, 35, 0, 36, 0, 0, 0, 0, 0, 37, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 41, 42, 0, 43, 0,
    44, 0, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 49, 0, 50, 0, 51, 0, 52, 0, 53, 0, 54, 0, 55, 0, 56, 0, 0, 57,
    0, 58, 0, 59, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 62, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 63, 64, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    65, 0, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 0, 69,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 75, 0, 0, 0, 76, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 0, 79,
    0, 0, 0, 0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 84, 0, 0, 0, 0, 0,
    0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0,
    0, 93, 0, 0, 0, 94, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 97, 0, 98, 0, 0, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0,
    100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0, 103, 0, 0, 104, 0, 0, 0, 0, 105, 0, 0,
    0, 106, 0, 0, 0, 107, 108, 109, 0, 110, 0, 0, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 112, 0, 0, 0, 113, 0, 114, 0, 115, 0,
    0, 0, 0, 116, 0, 0, 0, 117, 0, 0, 118, 0, 0, 0, 0, 119, 0, 0, 120, 0, 121, 0, 0, 0, 0, 0, 0, 122, 0, 0, 0, 0,
    0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 0, 127, 0, 128, 0, 129, 0, 130, 0, 0, 0,
    0, 131, 0, 0, 0, 132, 0, 0, 133, 0, 0, 0, 0, 134, 0, 0, 135, 0, 136, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 0, 139, 0, 140, 141, 0, 0, 0, 0, 0, 0, 0, 142, 0, 143, 144, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0,
    146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 0, 155, 0, 0,
    0, 0, 0, 0, 156, 157, 0, 0, 158, 159, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 163, 0, 0, 0,
    0, 164, 0, 0, 165, 0, 0, 166, 0, 167, 168, 169, 0, 0, 170, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 175, 0, 0,
    0, 0, 0, 176, 0, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 180, 0, 0, 181, 0, 182, 0, 183, 0, 0, 184, 0,
    185, 0, 186, 0, 0, 0, 0, 187, 0, 0, 188, 0, 0, 189, 0, 190, 191, 192, 0, 0, 193, 0, 194, 0, 0, 195, 0, 0, 0, 196, 0, 197,
    0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 201, 0, 0, 0, 202, 0, 0, 0, 203, 0, 204, 0, 205, 0, 0, 0, 206, 0,
    0, 0, 207, 0, 0, 0, 208, 209, 0, 0, 0, 210, 0, 0, 0, 0, 211, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 0, 215, 0, 0, 216, 0, 0, 217, 218, 219, 0, 220, 0, 0, 0, 0, 221, 0, 222, 0,
    0, 223, 0, 224, 0, 0, 0, 225, 0, 0, 226, 0, 0, 227, 0, 228, 229, 0, 230, 0, 0, 231, 0, 232, 0, 0, 233, 0, 0, 0, 234, 0,
    0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 238, 0, 0, 239, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 243, 244, 245, 0, 246, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 249,
    0, 250, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 0, 252, 0, 0, 0, 253, 0, 0, 0, 254, 255, 256,
    0, 257, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 260, 0, 261, 0, 0, 0, 262, 0, 263, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0,
    266, 0, 267, 0, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 0, 0, 0, 273, 0, 0, 0, 274,
    0, 0, 0, 275, 276, 277, 0, 278, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 0,
    0, 282, 0, 283, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 287, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0,
    0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0,
    0, 293, 0, 294, 0, 295, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 0, 0, 300, 0, 301, 0, 0, 302, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 0, 305, 306, 307, 0, 308, 0, 309, 0, 0, 0, 0,
    310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    315, 0, 0, 0, 316, 0, 0, 0, 317, 318, 319, 0, 0, 0, 320, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0,
    327, 0, 0, 0, 328, 329, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 333, 334, 0, 0, 335, 0, 0, 0, 0, 336, 337, 0, 0, 0,
    338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 342, 0, 0, 0, 0, 0, 0, 0, 343,
    0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0, 0, 348, 0,
    0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350, 0, 0, 351, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 355, 0, 356, 0, 357, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 364, 0, 365, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0,
    0, 0, 0, 0, 370, 0, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 376, 0, 0, 0,
    377, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0,
    0, 0, 385, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 387, 0, 388, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 391, 0, 0, 392, 0, 393, 0, 394, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 0, 0, 0, 399, 0,
    0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 0, 402, 0, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 406,
    0, 407, 0, 0, 0, 408, 0, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 418, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 421, 0, 0,
    0, 0, 0, 0, 0, 422, 0, 0, 423, 0, 0, 424, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0,
    0, 0, 428, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0,
    0, 0, 0, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 439, 0, 440, 0, 0, 0, 441, 0,
    0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 446, 0, 0, 447,
    0, 0, 0, 0, 448, 0, 0, 449, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 453, 0, 0, 0, 0, 454, 0, 0, 0, 455, 0,
    0, 456, 0, 0, 0, 0, 457, 0, 0, 458, 0, 459, 0, 0, 0, 460, 0, 461, 0, 0, 0, 462, 0, 463, 0, 464, 0, 0, 465, 0, 466, 0,
    0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0, 0, 470, 0, 0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 474, 0, 475, 0,
    476, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 485,
    0, 0, 0, 486, 0, 0, 487, 0, 0, 0, 0, 488, 0, 0, 489, 0, 490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 492, 0, 493,
    0, 0, 0, 0, 0, 0, 0, 494, 0, 495, 0, 496, 0, 0, 0, 497, 0, 0, 0, 0, 0, 498, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0,
    0, 501, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 504, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 510, 0, 0, 511, 0, 512, 0, 0, 0, 513, 0, 0, 0, 514, 0, 0,
    0, 0, 515, 0, 0, 0, 0, 0, 516, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 520, 0, 0, 521, 0, 522, 523, 0,
    0, 0, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 527, 0, 0, 0, 528, 0, 529, 0, 530, 0, 0,
    0, 0, 531, 0, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0, 534, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 0, 542, 0, 0, 543, 0, 544, 0, 0, 0,
    0, 0, 0, 0, 545, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 548, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 551, 0, 552, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 0, 557,
    0, 0, 558, 0, 0, 559, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 0,
    0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 567, 0, 0, 568, 0, 569, 0, 0, 0, 570, 0, 571, 0, 0,
    0, 0, 572, 0, 573, 0, 574, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 579, 0, 580, 0, 0, 0, 0, 581, 0, 0, 582, 0, 583, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0,
    0, 586, 0, 0, 0, 587, 588, 589, 0, 0, 0, 590, 0, 591, 0, 592, 593, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 0, 598, 0, 0, 599, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 600, 0, 0, 0, 0, 0, 0, 601, 0, 602, 0, 0, 0, 0, 603, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 606, 0, 607, 0, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 611, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0,
    0, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619,
    0, 620, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 624, 625, 626, 0, 627, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0,
    629, 0, 630, 0, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 636, 0, 0, 0, 637, 0, 0, 638, 0, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0,
    641, 0, 0, 642, 0, 643, 0, 0, 0, 644, 0, 0, 0, 645, 0, 0, 0, 646, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 651, 652, 0, 0, 0, 0, 0, 0, 0,
    0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 657, 0, 658,
    0, 0, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 663, 0, 664, 0, 0, 0, 0, 665, 0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0,
    0, 669, 0, 0, 0, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 675, 0, 0, 676, 0, 0, 677, 0,
    0, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 0, 682, 0, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 685, 0, 0, 0,
    0, 686, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 690, 0, 0,
    0, 0, 691, 692, 0, 693, 0, 0, 694, 0, 0, 0, 0, 695, 696, 0, 697, 0, 0, 698, 0, 0, 0, 0, 699, 700, 0, 701, 0, 0, 702, 0,
    0, 0, 0, 703, 0, 0, 704, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 709, 0, 0,
    0, 710, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 715, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 717, 0, 718, 0, 0, 719, 720, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 723, 0, 0, 724, 0, 725, 0, 0, 0, 726, 0, 727, 0, 0, 0, 728, 0, 729, 0, 730, 0, 731, 0, 0, 0, 0, 0, 0, 0,
    732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 735, 736, 0, 737, 0, 0, 738, 0, 0, 0, 0, 739, 740,
    0, 741, 0, 0, 742, 0, 0, 0, 0, 743, 0, 0, 744, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747,
    0, 748, 0, 749, 0, 0, 750, 0, 0, 751, 0, 0, 0, 0, 752, 0, 753, 0, 0, 754, 0, 0, 755, 0, 756, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 758, 0, 759, 0, 760, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763, 0,
    764, 0, 0, 0, 765, 0, 766, 0, 0, 0, 767, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0,
    0, 0, 0, 0, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778,
    0, 0, 0, 0, 0, 0, 779, 0, 0, 0, 780, 0, 781, 0, 0, 0, 782, 0, 783, 0, 0, 0, 784, 0, 785, 0, 0, 0, 786, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 788, 0, 0, 0, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 0, 0, 791, 0, 0, 0, 0,
    792, 0, 0, 0, 0, 0, 793, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 0, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 797, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0,
    0, 0, 802, 0, 0, 0, 0, 0, 803, 804, 805, 0, 806, 0, 0, 0, 0, 0, 807, 0, 808, 0, 809, 0, 0, 0, 810, 0, 0, 0, 811, 0,
    0, 0, 812, 0, 0, 0, 813, 0, 0, 0, 0, 0, 814, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 817, 0, 0, 0, 818, 819, 0, 0,
    0, 0, 0, 0, 820, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0,
    824, 0, 0, 0, 0, 0, 0, 825, 0, 0, 0, 0, 826, 0, 0, 0, 827, 0, 0, 828, 0, 0, 0, 0, 0, 0, 0, 0, 829, 830, 0, 0,
    0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 0, 0, 0, 0, 0, 833, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 836, 0, 0, 837, 838,
    0, 839, 0, 840, 0, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 0, 0, 0, 0, 0, 0, 0, 0, 843, 0, 0, 0, 0, 0, 844,
    0, 0, 0, 845, 0, 846, 0, 847, 0, 0, 0, 0, 848, 849, 0, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 851, 0, 0, 0, 852, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 853, 0, 0, 854, 0, 855, 0, 0, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 857, 0, 0, 0,
    858, 0, 0, 859, 0, 0, 0, 0, 0, 0, 0, 0, 860, 861, 0, 0, 0, 862, 0, 0, 0, 0, 0, 863,
};
void recomp_unit_0129_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A08000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0129[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A08000;
    case 2u: goto L_08A0801C;
    case 3u: goto L_08A08034;
    case 4u: goto L_08A08050;
    case 5u: goto L_08A08058;
    case 6u: goto L_08A0806C;
    case 7u: goto L_08A0807C;
    case 8u: goto L_08A08088;
    case 9u: goto L_08A0809C;
    case 10u: goto L_08A080A8;
    case 11u: goto L_08A080B0;
    case 12u: goto L_08A080B8;
    case 13u: goto L_08A080C8;
    case 14u: goto L_08A080D8;
    case 15u: goto L_08A080FC;
    case 16u: goto L_08A08128;
    case 17u: goto L_08A08140;
    case 18u: goto L_08A08150;
    case 19u: goto L_08A08154;
    case 20u: goto L_08A081A8;
    case 21u: goto L_08A081BC;
    case 22u: goto L_08A081CC;
    case 23u: goto L_08A081D0;
    case 24u: goto L_08A081D4;
    case 25u: goto L_08A081E4;
    case 26u: goto L_08A081E8;
    case 27u: goto L_08A081F8;
    case 28u: goto L_08A08200;
    case 29u: goto L_08A08220;
    case 30u: goto L_08A08238;
    case 31u: goto L_08A08248;
    case 32u: goto L_08A08250;
    case 33u: goto L_08A08260;
    case 34u: goto L_08A08268;
    case 35u: goto L_08A0828C;
    case 36u: goto L_08A08294;
    case 37u: goto L_08A082AC;
    case 38u: goto L_08A082C8;
    case 39u: goto L_08A082D4;
    case 40u: goto L_08A082E8;
    case 41u: goto L_08A082EC;
    case 42u: goto L_08A082F0;
    case 43u: goto L_08A082F8;
    case 44u: goto L_08A08300;
    case 45u: goto L_08A0830C;
    case 46u: goto L_08A08314;
    case 47u: goto L_08A0831C;
    case 48u: goto L_08A08324;
    case 49u: goto L_08A08338;
    case 50u: goto L_08A08340;
    case 51u: goto L_08A08348;
    case 52u: goto L_08A08350;
    case 53u: goto L_08A08358;
    case 54u: goto L_08A08360;
    case 55u: goto L_08A08368;
    case 56u: goto L_08A08370;
    case 57u: goto L_08A0837C;
    case 58u: goto L_08A08384;
    case 59u: goto L_08A0838C;
    case 60u: goto L_08A08394;
    case 61u: goto L_08A083B8;
    case 62u: goto L_08A083C8;
    case 63u: goto L_08A08424;
    case 64u: goto L_08A08428;
    case 65u: goto L_08A08480;
    case 66u: goto L_08A0848C;
    case 67u: goto L_08A084C8;
    case 68u: goto L_08A084F0;
    case 69u: goto L_08A084FC;
    case 70u: goto L_08A08508;
    case 71u: goto L_08A0851C;
    case 72u: goto L_08A08524;
    case 73u: goto L_08A0852C;
    case 74u: goto L_08A08534;
    case 75u: goto L_08A0853C;
    case 76u: goto L_08A0854C;
    case 77u: goto L_08A08560;
    case 78u: goto L_08A08570;
    case 79u: goto L_08A0857C;
    case 80u: goto L_08A08590;
    case 81u: goto L_08A0859C;
    case 82u: goto L_08A085A4;
    case 83u: goto L_08A085E0;
    case 84u: goto L_08A085E8;
    case 85u: goto L_08A08604;
    case 86u: goto L_08A08614;
    case 87u: goto L_08A08620;
    case 88u: goto L_08A08634;
    case 89u: goto L_08A08640;
    case 90u: goto L_08A08648;
    case 91u: goto L_08A08668;
    case 92u: goto L_08A08670;
    case 93u: goto L_08A08684;
    case 94u: goto L_08A08694;
    case 95u: goto L_08A086A0;
    case 96u: goto L_08A086B4;
    case 97u: goto L_08A086C0;
    case 98u: goto L_08A086C8;
    case 99u: goto L_08A086E8;
    case 100u: goto L_08A08700;
    case 101u: goto L_08A08728;
    case 102u: goto L_08A0874C;
    case 103u: goto L_08A08754;
    case 104u: goto L_08A08760;
    case 105u: goto L_08A08774;
    case 106u: goto L_08A08784;
    case 107u: goto L_08A08794;
    case 108u: goto L_08A08798;
    case 109u: goto L_08A0879C;
    case 110u: goto L_08A087A4;
    case 111u: goto L_08A087C8;
    case 112u: goto L_08A087D8;
    case 113u: goto L_08A087E8;
    case 114u: goto L_08A087F0;
    case 115u: goto L_08A087F8;
    case 116u: goto L_08A0880C;
    case 117u: goto L_08A0881C;
    case 118u: goto L_08A08828;
    case 119u: goto L_08A0883C;
    case 120u: goto L_08A08848;
    case 121u: goto L_08A08850;
    case 122u: goto L_08A0886C;
    case 123u: goto L_08A08884;
    case 124u: goto L_08A088AC;
    case 125u: goto L_08A088BC;
    case 126u: goto L_08A088CC;
    case 127u: goto L_08A088D8;
    case 128u: goto L_08A088E0;
    case 129u: goto L_08A088E8;
    case 130u: goto L_08A088F0;
    case 131u: goto L_08A08904;
    case 132u: goto L_08A08914;
    case 133u: goto L_08A08920;
    case 134u: goto L_08A08934;
    case 135u: goto L_08A08940;
    case 136u: goto L_08A08948;
    case 137u: goto L_08A08968;
    case 138u: goto L_08A08984;
    case 139u: goto L_08A0899C;
    case 140u: goto L_08A089A4;
    case 141u: goto L_08A089A8;
    case 142u: goto L_08A089C8;
    case 143u: goto L_08A089D0;
    case 144u: goto L_08A089D4;
    case 145u: goto L_08A089DC;
    case 146u: goto L_08A08A00;
    case 147u: goto L_08A08A24;
    case 148u: goto L_08A08A3C;
    case 149u: goto L_08A08A44;
    case 150u: goto L_08A08A9C;
    case 151u: goto L_08A08AA4;
    case 152u: goto L_08A08AC0;
    case 153u: goto L_08A08AD8;
    case 154u: goto L_08A08AE4;
    case 155u: goto L_08A08AF4;
    case 156u: goto L_08A08B10;
    case 157u: goto L_08A08B14;
    case 158u: goto L_08A08B20;
    case 159u: goto L_08A08B24;
    case 160u: goto L_08A08B2C;
    case 161u: goto L_08A08B38;
    case 162u: goto L_08A08B64;
    case 163u: goto L_08A08B70;
    case 164u: goto L_08A08B84;
    case 165u: goto L_08A08B90;
    case 166u: goto L_08A08B9C;
    case 167u: goto L_08A08BA4;
    case 168u: goto L_08A08BA8;
    case 169u: goto L_08A08BAC;
    case 170u: goto L_08A08BB8;
    case 171u: goto L_08A08BC0;
    case 172u: goto L_08A08BCC;
    case 173u: goto L_08A08BDC;
    case 174u: goto L_08A08BE4;
    case 175u: goto L_08A08BF4;
    case 176u: goto L_08A08C0C;
    case 177u: goto L_08A08C20;
    case 178u: goto L_08A08C34;
    case 179u: goto L_08A08C44;
    case 180u: goto L_08A08C50;
    case 181u: goto L_08A08C5C;
    case 182u: goto L_08A08C64;
    case 183u: goto L_08A08C6C;
    case 184u: goto L_08A08C78;
    case 185u: goto L_08A08C80;
    case 186u: goto L_08A08C88;
    case 187u: goto L_08A08C9C;
    case 188u: goto L_08A08CA8;
    case 189u: goto L_08A08CB4;
    case 190u: goto L_08A08CBC;
    case 191u: goto L_08A08CC0;
    case 192u: goto L_08A08CC4;
    case 193u: goto L_08A08CD0;
    case 194u: goto L_08A08CD8;
    case 195u: goto L_08A08CE4;
    case 196u: goto L_08A08CF4;
    case 197u: goto L_08A08CFC;
    case 198u: goto L_08A08D08;
    case 199u: goto L_08A08D20;
    case 200u: goto L_08A08D30;
    case 201u: goto L_08A08D38;
    case 202u: goto L_08A08D48;
    case 203u: goto L_08A08D58;
    case 204u: goto L_08A08D60;
    case 205u: goto L_08A08D68;
    case 206u: goto L_08A08D78;
    case 207u: goto L_08A08D88;
    case 208u: goto L_08A08D98;
    case 209u: goto L_08A08D9C;
    case 210u: goto L_08A08DAC;
    case 211u: goto L_08A08DC0;
    case 212u: goto L_08A08DCC;
    case 213u: goto L_08A08DEC;
    case 214u: goto L_08A08E24;
    case 215u: goto L_08A08E34;
    case 216u: goto L_08A08E40;
    case 217u: goto L_08A08E4C;
    case 218u: goto L_08A08E50;
    case 219u: goto L_08A08E54;
    case 220u: goto L_08A08E5C;
    case 221u: goto L_08A08E70;
    case 222u: goto L_08A08E78;
    case 223u: goto L_08A08E84;
    case 224u: goto L_08A08E8C;
    case 225u: goto L_08A08E9C;
    case 226u: goto L_08A08EA8;
    case 227u: goto L_08A08EB4;
    case 228u: goto L_08A08EBC;
    case 229u: goto L_08A08EC0;
    case 230u: goto L_08A08EC8;
    case 231u: goto L_08A08ED4;
    case 232u: goto L_08A08EDC;
    case 233u: goto L_08A08EE8;
    case 234u: goto L_08A08EF8;
    case 235u: goto L_08A08F14;
    case 236u: goto L_08A08F40;
    case 237u: goto L_08A08F58;
    case 238u: goto L_08A08F84;
    case 239u: goto L_08A08F90;
    case 240u: goto L_08A08F98;
    case 241u: goto L_08A08FA8;
    case 242u: goto L_08A08FB4;
    case 243u: goto L_08A08FC0;
    case 244u: goto L_08A08FC4;
    case 245u: goto L_08A08FC8;
    case 246u: goto L_08A08FD0;
    case 247u: goto L_08A08FE4;
    case 248u: goto L_08A08FEC;
    case 249u: goto L_08A08FFC;
    case 250u: goto L_08A09004;
    case 251u: goto L_08A09040;
    case 252u: goto L_08A09054;
    case 253u: goto L_08A09064;
    case 254u: goto L_08A09074;
    case 255u: goto L_08A09078;
    case 256u: goto L_08A0907C;
    case 257u: goto L_08A09084;
    case 258u: goto L_08A09094;
    case 259u: goto L_08A0909C;
    case 260u: goto L_08A090B4;
    case 261u: goto L_08A090BC;
    case 262u: goto L_08A090CC;
    case 263u: goto L_08A090D4;
    case 264u: goto L_08A090E0;
    case 265u: goto L_08A090E8;
    case 266u: goto L_08A09100;
    case 267u: goto L_08A09108;
    case 268u: goto L_08A09118;
    case 269u: goto L_08A09120;
    case 270u: goto L_08A09130;
    case 271u: goto L_08A0914C;
    case 272u: goto L_08A09158;
    case 273u: goto L_08A0916C;
    case 274u: goto L_08A0917C;
    case 275u: goto L_08A0918C;
    case 276u: goto L_08A09190;
    case 277u: goto L_08A09194;
    case 278u: goto L_08A0919C;
    case 279u: goto L_08A091CC;
    case 280u: goto L_08A091DC;
    case 281u: goto L_08A091E4;
    case 282u: goto L_08A09204;
    case 283u: goto L_08A0920C;
    case 284u: goto L_08A09220;
    case 285u: goto L_08A09228;
    case 286u: goto L_08A0924C;
    case 287u: goto L_08A09254;
    case 288u: goto L_08A0925C;
    case 289u: goto L_08A09270;
    case 290u: goto L_08A09294;
    case 291u: goto L_08A092D0;
    case 292u: goto L_08A092E8;
    case 293u: goto L_08A09304;
    case 294u: goto L_08A0930C;
    case 295u: goto L_08A09314;
    case 296u: goto L_08A0931C;
    case 297u: goto L_08A09328;
    case 298u: goto L_08A09330;
    case 299u: goto L_08A09348;
    case 300u: goto L_08A09360;
    case 301u: goto L_08A09368;
    case 302u: goto L_08A09374;
    case 303u: goto L_08A093B4;
    case 304u: goto L_08A093C4;
    case 305u: goto L_08A093D4;
    case 306u: goto L_08A093D8;
    case 307u: goto L_08A093DC;
    case 308u: goto L_08A093E4;
    case 309u: goto L_08A093EC;
    case 310u: goto L_08A09400;
    case 311u: goto L_08A09408;
    case 312u: goto L_08A09410;
    case 313u: goto L_08A09440;
    case 314u: goto L_08A0944C;
    case 315u: goto L_08A09480;
    case 316u: goto L_08A09490;
    case 317u: goto L_08A094A0;
    case 318u: goto L_08A094A4;
    case 319u: goto L_08A094A8;
    case 320u: goto L_08A094B8;
    case 321u: goto L_08A094BC;
    case 322u: goto L_08A094CC;
    case 323u: goto L_08A094F0;
    case 324u: goto L_08A09530;
    case 325u: goto L_08A0953C;
    case 326u: goto L_08A09570;
    case 327u: goto L_08A09580;
    case 328u: goto L_08A09590;
    case 329u: goto L_08A09594;
    case 330u: goto L_08A09598;
    case 331u: goto L_08A095A8;
    case 332u: goto L_08A095B4;
    case 333u: goto L_08A095C8;
    case 334u: goto L_08A095CC;
    case 335u: goto L_08A095D8;
    case 336u: goto L_08A095EC;
    case 337u: goto L_08A095F0;
    case 338u: goto L_08A09600;
    case 339u: goto L_08A0962C;
    case 340u: goto L_08A09650;
    case 341u: goto L_08A09658;
    case 342u: goto L_08A0965C;
    case 343u: goto L_08A0967C;
    case 344u: goto L_08A09684;
    case 345u: goto L_08A09694;
    case 346u: goto L_08A096C8;
    case 347u: goto L_08A096D4;
    case 348u: goto L_08A096F8;
    case 349u: goto L_08A09714;
    case 350u: goto L_08A09728;
    case 351u: goto L_08A09734;
    case 352u: goto L_08A09740;
    case 353u: goto L_08A09748;
    case 354u: goto L_08A09754;
    case 355u: goto L_08A09760;
    case 356u: goto L_08A09768;
    case 357u: goto L_08A09770;
    case 358u: goto L_08A09828;
    case 359u: goto L_08A09840;
    case 360u: goto L_08A09858;
    case 361u: goto L_08A098E8;
    case 362u: goto L_08A098F0;
    case 363u: goto L_08A09924;
    case 364u: goto L_08A0992C;
    case 365u: goto L_08A09934;
    case 366u: goto L_08A0994C;
    case 367u: goto L_08A09954;
    case 368u: goto L_08A09968;
    case 369u: goto L_08A09978;
    case 370u: goto L_08A09990;
    case 371u: goto L_08A09998;
    case 372u: goto L_08A099A0;
    case 373u: goto L_08A099B4;
    case 374u: goto L_08A099C4;
    case 375u: goto L_08A099DC;
    case 376u: goto L_08A099F0;
    case 377u: goto L_08A09A00;
    case 378u: goto L_08A09A08;
    case 379u: goto L_08A09A1C;
    case 380u: goto L_08A09A2C;
    case 381u: goto L_08A09A44;
    case 382u: goto L_08A09A54;
    case 383u: goto L_08A09A5C;
    case 384u: goto L_08A09A78;
    case 385u: goto L_08A09A88;
    case 386u: goto L_08A09AA0;
    case 387u: goto L_08A09ABC;
    case 388u: goto L_08A09AC4;
    case 389u: goto L_08A09AE0;
    case 390u: goto L_08A09AF0;
    case 391u: goto L_08A09B08;
    case 392u: goto L_08A09B14;
    case 393u: goto L_08A09B1C;
    case 394u: goto L_08A09B24;
    case 395u: goto L_08A09B2C;
    case 396u: goto L_08A09B34;
    case 397u: goto L_08A09B3C;
    case 398u: goto L_08A09B54;
    case 399u: goto L_08A09B78;
    case 400u: goto L_08A09B9C;
    case 401u: goto L_08A09BAC;
    case 402u: goto L_08A09BC0;
    case 403u: goto L_08A09BD0;
    case 404u: goto L_08A09BDC;
    case 405u: goto L_08A09BF0;
    case 406u: goto L_08A09BFC;
    case 407u: goto L_08A09C04;
    case 408u: goto L_08A09C14;
    case 409u: goto L_08A09C20;
    case 410u: goto L_08A09C2C;
    case 411u: goto L_08A09C68;
    case 412u: goto L_08A09CAC;
    case 413u: goto L_08A09CC0;
    case 414u: goto L_08A09D00;
    case 415u: goto L_08A09D0C;
    case 416u: goto L_08A09D34;
    case 417u: goto L_08A09D3C;
    case 418u: goto L_08A09D48;
    case 419u: goto L_08A09D50;
    case 420u: goto L_08A09D5C;
    case 421u: goto L_08A09D74;
    case 422u: goto L_08A09D94;
    case 423u: goto L_08A09DA0;
    case 424u: goto L_08A09DAC;
    case 425u: goto L_08A09DC0;
    case 426u: goto L_08A09DDC;
    case 427u: goto L_08A09DF8;
    case 428u: goto L_08A09E08;
    case 429u: goto L_08A09E14;
    case 430u: goto L_08A09E1C;
    case 431u: goto L_08A09E44;
    case 432u: goto L_08A09E64;
    case 433u: goto L_08A09E6C;
    case 434u: goto L_08A09E8C;
    case 435u: goto L_08A09EA4;
    case 436u: goto L_08A09EB4;
    case 437u: goto L_08A09EC0;
    case 438u: goto L_08A09ED4;
    case 439u: goto L_08A09EE0;
    case 440u: goto L_08A09EE8;
    case 441u: goto L_08A09EF8;
    case 442u: goto L_08A09F14;
    case 443u: goto L_08A09F28;
    case 444u: goto L_08A09F4C;
    case 445u: goto L_08A09F60;
    case 446u: goto L_08A09F70;
    case 447u: goto L_08A09F7C;
    case 448u: goto L_08A09F90;
    case 449u: goto L_08A09F9C;
    case 450u: goto L_08A09FA4;
    case 451u: goto L_08A09FB4;
    case 452u: goto L_08A09FCC;
    case 453u: goto L_08A09FD4;
    case 454u: goto L_08A09FE8;
    case 455u: goto L_08A09FF8;
    case 456u: goto L_08A0A004;
    case 457u: goto L_08A0A018;
    case 458u: goto L_08A0A024;
    case 459u: goto L_08A0A02C;
    case 460u: goto L_08A0A03C;
    case 461u: goto L_08A0A044;
    case 462u: goto L_08A0A054;
    case 463u: goto L_08A0A05C;
    case 464u: goto L_08A0A064;
    case 465u: goto L_08A0A070;
    case 466u: goto L_08A0A078;
    case 467u: goto L_08A0A090;
    case 468u: goto L_08A0A0A4;
    case 469u: goto L_08A0A0B4;
    case 470u: goto L_08A0A0C0;
    case 471u: goto L_08A0A0D4;
    case 472u: goto L_08A0A0E0;
    case 473u: goto L_08A0A0E8;
    case 474u: goto L_08A0A0F0;
    case 475u: goto L_08A0A0F8;
    case 476u: goto L_08A0A100;
    case 477u: goto L_08A0A114;
    case 478u: goto L_08A0A124;
    case 479u: goto L_08A0A130;
    case 480u: goto L_08A0A144;
    case 481u: goto L_08A0A150;
    case 482u: goto L_08A0A158;
    case 483u: goto L_08A0A160;
    case 484u: goto L_08A0A168;
    case 485u: goto L_08A0A17C;
    case 486u: goto L_08A0A18C;
    case 487u: goto L_08A0A198;
    case 488u: goto L_08A0A1AC;
    case 489u: goto L_08A0A1B8;
    case 490u: goto L_08A0A1C0;
    case 491u: goto L_08A0A1DC;
    case 492u: goto L_08A0A1F4;
    case 493u: goto L_08A0A1FC;
    case 494u: goto L_08A0A21C;
    case 495u: goto L_08A0A224;
    case 496u: goto L_08A0A22C;
    case 497u: goto L_08A0A23C;
    case 498u: goto L_08A0A254;
    case 499u: goto L_08A0A264;
    case 500u: goto L_08A0A270;
    case 501u: goto L_08A0A284;
    case 502u: goto L_08A0A290;
    case 503u: goto L_08A0A2A4;
    case 504u: goto L_08A0A2BC;
    case 505u: goto L_08A0A2C4;
    case 506u: goto L_08A0A2CC;
    case 507u: goto L_08A0A2E8;
    case 508u: goto L_08A0A2F8;
    case 509u: goto L_08A0A330;
    case 510u: goto L_08A0A340;
    case 511u: goto L_08A0A34C;
    case 512u: goto L_08A0A354;
    case 513u: goto L_08A0A364;
    case 514u: goto L_08A0A374;
    case 515u: goto L_08A0A388;
    case 516u: goto L_08A0A3A0;
    case 517u: goto L_08A0A3AC;
    case 518u: goto L_08A0A3C0;
    case 519u: goto L_08A0A3CC;
    case 520u: goto L_08A0A3E0;
    case 521u: goto L_08A0A3EC;
    case 522u: goto L_08A0A3F4;
    case 523u: goto L_08A0A3F8;
    case 524u: goto L_08A0A418;
    case 525u: goto L_08A0A434;
    case 526u: goto L_08A0A444;
    case 527u: goto L_08A0A454;
    case 528u: goto L_08A0A464;
    case 529u: goto L_08A0A46C;
    case 530u: goto L_08A0A474;
    case 531u: goto L_08A0A488;
    case 532u: goto L_08A0A498;
    case 533u: goto L_08A0A4A4;
    case 534u: goto L_08A0A4B8;
    case 535u: goto L_08A0A4C4;
    case 536u: goto L_08A0A4CC;
    case 537u: goto L_08A0A508;
    case 538u: goto L_08A0A510;
    case 539u: goto L_08A0A52C;
    case 540u: goto L_08A0A53C;
    case 541u: goto L_08A0A548;
    case 542u: goto L_08A0A55C;
    case 543u: goto L_08A0A568;
    case 544u: goto L_08A0A570;
    case 545u: goto L_08A0A590;
    case 546u: goto L_08A0A598;
    case 547u: goto L_08A0A5AC;
    case 548u: goto L_08A0A5BC;
    case 549u: goto L_08A0A5C8;
    case 550u: goto L_08A0A5DC;
    case 551u: goto L_08A0A5E8;
    case 552u: goto L_08A0A5F0;
    case 553u: goto L_08A0A61C;
    case 554u: goto L_08A0A634;
    case 555u: goto L_08A0A654;
    case 556u: goto L_08A0A670;
    case 557u: goto L_08A0A67C;
    case 558u: goto L_08A0A688;
    case 559u: goto L_08A0A694;
    case 560u: goto L_08A0A6A0;
    case 561u: goto L_08A0A6A8;
    case 562u: goto L_08A0A6C0;
    case 563u: goto L_08A0A6DC;
    case 564u: goto L_08A0A6F4;
    case 565u: goto L_08A0A708;
    case 566u: goto L_08A0A738;
    case 567u: goto L_08A0A748;
    case 568u: goto L_08A0A754;
    case 569u: goto L_08A0A75C;
    case 570u: goto L_08A0A76C;
    case 571u: goto L_08A0A774;
    case 572u: goto L_08A0A788;
    case 573u: goto L_08A0A790;
    case 574u: goto L_08A0A798;
    case 575u: goto L_08A0A7A0;
    case 576u: goto L_08A0A7AC;
    case 577u: goto L_08A0A7B4;
    case 578u: goto L_08A0A7BC;
    case 579u: goto L_08A0A7C4;
    case 580u: goto L_08A0A7CC;
    case 581u: goto L_08A0A7E0;
    case 582u: goto L_08A0A7EC;
    case 583u: goto L_08A0A7F4;
    case 584u: goto L_08A0A82C;
    case 585u: goto L_08A0A874;
    case 586u: goto L_08A0A884;
    case 587u: goto L_08A0A894;
    case 588u: goto L_08A0A898;
    case 589u: goto L_08A0A89C;
    case 590u: goto L_08A0A8AC;
    case 591u: goto L_08A0A8B4;
    case 592u: goto L_08A0A8BC;
    case 593u: goto L_08A0A8C0;
    case 594u: goto L_08A0A910;
    case 595u: goto L_08A0A934;
    case 596u: goto L_08A0A94C;
    case 597u: goto L_08A0A958;
    case 598u: goto L_08A0A96C;
    case 599u: goto L_08A0A978;
    case 600u: goto L_08A0A9B4;
    case 601u: goto L_08A0A9D0;
    case 602u: goto L_08A0A9D8;
    case 603u: goto L_08A0A9EC;
    case 604u: goto L_08A0AA2C;
    case 605u: goto L_08A0AA5C;
    case 606u: goto L_08A0AA84;
    case 607u: goto L_08A0AA8C;
    case 608u: goto L_08A0AAA4;
    case 609u: goto L_08A0AAB0;
    case 610u: goto L_08A0AAC8;
    case 611u: goto L_08A0AAD4;
    case 612u: goto L_08A0AAEC;
    case 613u: goto L_08A0AAF8;
    case 614u: goto L_08A0AB0C;
    case 615u: goto L_08A0AB14;
    case 616u: goto L_08A0AB44;
    case 617u: goto L_08A0AB54;
    case 618u: goto L_08A0AB68;
    case 619u: goto L_08A0AB7C;
    case 620u: goto L_08A0AB84;
    case 621u: goto L_08A0AB8C;
    case 622u: goto L_08A0ABA0;
    case 623u: goto L_08A0ABB0;
    case 624u: goto L_08A0ABC0;
    case 625u: goto L_08A0ABC4;
    case 626u: goto L_08A0ABC8;
    case 627u: goto L_08A0ABD0;
    case 628u: goto L_08A0ABF0;
    case 629u: goto L_08A0AC00;
    case 630u: goto L_08A0AC08;
    case 631u: goto L_08A0AC18;
    case 632u: goto L_08A0AC28;
    case 633u: goto L_08A0AC38;
    case 634u: goto L_08A0AC48;
    case 635u: goto L_08A0ACA0;
    case 636u: goto L_08A0ACB0;
    case 637u: goto L_08A0ACC0;
    case 638u: goto L_08A0ACCC;
    case 639u: goto L_08A0ACD8;
    case 640u: goto L_08A0ACF4;
    case 641u: goto L_08A0AD00;
    case 642u: goto L_08A0AD0C;
    case 643u: goto L_08A0AD14;
    case 644u: goto L_08A0AD24;
    case 645u: goto L_08A0AD34;
    case 646u: goto L_08A0AD44;
    case 647u: goto L_08A0AD54;
    case 648u: goto L_08A0AD64;
    case 649u: goto L_08A0ADB0;
    case 650u: goto L_08A0ADCC;
    case 651u: goto L_08A0ADDC;
    case 652u: goto L_08A0ADE0;
    case 653u: goto L_08A0AE04;
    case 654u: goto L_08A0AE0C;
    case 655u: goto L_08A0AE38;
    case 656u: goto L_08A0AE64;
    case 657u: goto L_08A0AE74;
    case 658u: goto L_08A0AE7C;
    case 659u: goto L_08A0AE8C;
    case 660u: goto L_08A0AEA0;
    case 661u: goto L_08A0AF14;
    case 662u: goto L_08A0AF2C;
    case 663u: goto L_08A0AF34;
    case 664u: goto L_08A0AF3C;
    case 665u: goto L_08A0AF50;
    case 666u: goto L_08A0AF60;
    case 667u: goto L_08A0AF6C;
    case 668u: goto L_08A0AF78;
    case 669u: goto L_08A0AF84;
    case 670u: goto L_08A0AFA0;
    case 671u: goto L_08A0AFA8;
    case 672u: goto L_08A0AFB0;
    case 673u: goto L_08A0AFC4;
    case 674u: goto L_08A0AFD4;
    case 675u: goto L_08A0AFE0;
    case 676u: goto L_08A0AFEC;
    case 677u: goto L_08A0AFF8;
    case 678u: goto L_08A0B010;
    case 679u: goto L_08A0B01C;
    case 680u: goto L_08A0B028;
    case 681u: goto L_08A0B030;
    case 682u: goto L_08A0B040;
    case 683u: goto L_08A0B054;
    case 684u: goto L_08A0B064;
    case 685u: goto L_08A0B070;
    case 686u: goto L_08A0B084;
    case 687u: goto L_08A0B090;
    case 688u: goto L_08A0B0B0;
    case 689u: goto L_08A0B0E8;
    case 690u: goto L_08A0B0F4;
    case 691u: goto L_08A0B108;
    case 692u: goto L_08A0B10C;
    case 693u: goto L_08A0B114;
    case 694u: goto L_08A0B120;
    case 695u: goto L_08A0B134;
    case 696u: goto L_08A0B138;
    case 697u: goto L_08A0B140;
    case 698u: goto L_08A0B14C;
    case 699u: goto L_08A0B160;
    case 700u: goto L_08A0B164;
    case 701u: goto L_08A0B16C;
    case 702u: goto L_08A0B178;
    case 703u: goto L_08A0B18C;
    case 704u: goto L_08A0B198;
    case 705u: goto L_08A0B1A4;
    case 706u: goto L_08A0B1C8;
    case 707u: goto L_08A0B1E4;
    case 708u: goto L_08A0B1EC;
    case 709u: goto L_08A0B1F4;
    case 710u: goto L_08A0B204;
    case 711u: goto L_08A0B20C;
    case 712u: goto L_08A0B214;
    case 713u: goto L_08A0B258;
    case 714u: goto L_08A0B264;
    case 715u: goto L_08A0B278;
    case 716u: goto L_08A0B2C4;
    case 717u: goto L_08A0B304;
    case 718u: goto L_08A0B30C;
    case 719u: goto L_08A0B318;
    case 720u: goto L_08A0B31C;
    case 721u: goto L_08A0B324;
    case 722u: goto L_08A0B32C;
    case 723u: goto L_08A0B38C;
    case 724u: goto L_08A0B398;
    case 725u: goto L_08A0B3A0;
    case 726u: goto L_08A0B3B0;
    case 727u: goto L_08A0B3B8;
    case 728u: goto L_08A0B3C8;
    case 729u: goto L_08A0B3D0;
    case 730u: goto L_08A0B3D8;
    case 731u: goto L_08A0B3E0;
    case 732u: goto L_08A0B400;
    case 733u: goto L_08A0B42C;
    case 734u: goto L_08A0B438;
    case 735u: goto L_08A0B44C;
    case 736u: goto L_08A0B450;
    case 737u: goto L_08A0B458;
    case 738u: goto L_08A0B464;
    case 739u: goto L_08A0B478;
    case 740u: goto L_08A0B47C;
    case 741u: goto L_08A0B484;
    case 742u: goto L_08A0B490;
    case 743u: goto L_08A0B4A4;
    case 744u: goto L_08A0B4B0;
    case 745u: goto L_08A0B4BC;
    case 746u: goto L_08A0B4E0;
    case 747u: goto L_08A0B4FC;
    case 748u: goto L_08A0B504;
    case 749u: goto L_08A0B50C;
    case 750u: goto L_08A0B518;
    case 751u: goto L_08A0B524;
    case 752u: goto L_08A0B538;
    case 753u: goto L_08A0B540;
    case 754u: goto L_08A0B54C;
    case 755u: goto L_08A0B558;
    case 756u: goto L_08A0B560;
    case 757u: goto L_08A0B5A4;
    case 758u: goto L_08A0B5AC;
    case 759u: goto L_08A0B5B4;
    case 760u: goto L_08A0B5BC;
    case 761u: goto L_08A0B5C4;
    case 762u: goto L_08A0B668;
    case 763u: goto L_08A0B678;
    case 764u: goto L_08A0B680;
    case 765u: goto L_08A0B690;
    case 766u: goto L_08A0B698;
    case 767u: goto L_08A0B6A8;
    case 768u: goto L_08A0B6B0;
    case 769u: goto L_08A0B6C0;
    case 770u: goto L_08A0B718;
    case 771u: goto L_08A0B720;
    case 772u: goto L_08A0B728;
    case 773u: goto L_08A0B744;
    case 774u: goto L_08A0B7F4;
    case 775u: goto L_08A0B814;
    case 776u: goto L_08A0B830;
    case 777u: goto L_08A0B850;
    case 778u: goto L_08A0B87C;
    case 779u: goto L_08A0B898;
    case 780u: goto L_08A0B8A8;
    case 781u: goto L_08A0B8B0;
    case 782u: goto L_08A0B8C0;
    case 783u: goto L_08A0B8C8;
    case 784u: goto L_08A0B8D8;
    case 785u: goto L_08A0B8E0;
    case 786u: goto L_08A0B8F0;
    case 787u: goto L_08A0B918;
    case 788u: goto L_08A0B92C;
    case 789u: goto L_08A0B940;
    case 790u: goto L_08A0B95C;
    case 791u: goto L_08A0B96C;
    case 792u: goto L_08A0B980;
    case 793u: goto L_08A0B998;
    case 794u: goto L_08A0B9AC;
    case 795u: goto L_08A0B9B8;
    case 796u: goto L_08A0B9DC;
    case 797u: goto L_08A0B9F8;
    case 798u: goto L_08A0BAA4;
    case 799u: goto L_08A0BAD0;
    case 800u: goto L_08A0BAE0;
    case 801u: goto L_08A0BAF0;
    case 802u: goto L_08A0BB08;
    case 803u: goto L_08A0BB20;
    case 804u: goto L_08A0BB24;
    case 805u: goto L_08A0BB28;
    case 806u: goto L_08A0BB30;
    case 807u: goto L_08A0BB48;
    case 808u: goto L_08A0BB50;
    case 809u: goto L_08A0BB58;
    case 810u: goto L_08A0BB68;
    case 811u: goto L_08A0BB78;
    case 812u: goto L_08A0BB88;
    case 813u: goto L_08A0BB98;
    case 814u: goto L_08A0BBB0;
    case 815u: goto L_08A0BBC0;
    case 816u: goto L_08A0BBD0;
    case 817u: goto L_08A0BBE0;
    case 818u: goto L_08A0BBF0;
    case 819u: goto L_08A0BBF4;
    case 820u: goto L_08A0BC10;
    case 821u: goto L_08A0BC24;
    case 822u: goto L_08A0BC4C;
    case 823u: goto L_08A0BC6C;
    case 824u: goto L_08A0BC80;
    case 825u: goto L_08A0BC9C;
    case 826u: goto L_08A0BCB0;
    case 827u: goto L_08A0BCC0;
    case 828u: goto L_08A0BCCC;
    case 829u: goto L_08A0BCF0;
    case 830u: goto L_08A0BCF4;
    case 831u: goto L_08A0BD04;
    case 832u: goto L_08A0BD20;
    case 833u: goto L_08A0BD3C;
    case 834u: goto L_08A0BD50;
    case 835u: goto L_08A0BD58;
    case 836u: goto L_08A0BD6C;
    case 837u: goto L_08A0BD78;
    case 838u: goto L_08A0BD7C;
    case 839u: goto L_08A0BD84;
    case 840u: goto L_08A0BD8C;
    case 841u: goto L_08A0BDA0;
    case 842u: goto L_08A0BDBC;
    case 843u: goto L_08A0BDE4;
    case 844u: goto L_08A0BDFC;
    case 845u: goto L_08A0BE0C;
    case 846u: goto L_08A0BE14;
    case 847u: goto L_08A0BE1C;
    case 848u: goto L_08A0BE30;
    case 849u: goto L_08A0BE34;
    case 850u: goto L_08A0BE54;
    case 851u: goto L_08A0BE64;
    case 852u: goto L_08A0BE74;
    case 853u: goto L_08A0BF1C;
    case 854u: goto L_08A0BF28;
    case 855u: goto L_08A0BF30;
    case 856u: goto L_08A0BF40;
    case 857u: goto L_08A0BF70;
    case 858u: goto L_08A0BF80;
    case 859u: goto L_08A0BF8C;
    case 860u: goto L_08A0BFB0;
    case 861u: goto L_08A0BFB4;
    case 862u: goto L_08A0BFC4;
    case 863u: goto L_08A0BFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A08000:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15248));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0801Cu);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A09760;
L_08A0801C:
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
L_08A08034:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A08050u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A092E8;
L_08A08050:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A080B0;
      }
      goto L_08A08058;
    }
L_08A08058:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A0806Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0806Cu) goto L_08A0806C;
    return;
L_08A0806C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0807Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0807Cu) goto L_08A0807C;
    return;
L_08A0807C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08088u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A08088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A080A8;
      }
      goto L_08A0809C;
    }
L_08A0809C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A080A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A080A8u) goto L_08A080A8;
    return;
L_08A080A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08294;
      }
      goto L_08A080B0;
    }
L_08A080B0:
    ctx.gpr[31] = (0x08A080B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A934;
L_08A080B8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[31] = (0x08A080C8u);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08A080C8u) goto L_08A080C8;
    return;
L_08A080C8:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08248;
      }
      goto L_08A080D8;
    }
L_08A080D8:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A08140;
      }
      goto L_08A080FC;
    }
L_08A080FC:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2248));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 51 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08140;
      }
      goto L_08A08128;
    }
L_08A08128:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), 0u);
    goto L_08A08140;
L_08A08140:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A081F8;
      }
      goto L_08A08150;
    }
L_08A08150:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    goto L_08A08154;
L_08A08154:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2122));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A081D0;
      }
      goto L_08A081A8;
    }
L_08A081A8:
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(2)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[9];
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08A081D0;
      }
      goto L_08A081BC;
    }
L_08A081BC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[9];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A081D4;
      }
      goto L_08A081CC;
    }
L_08A081CC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A081D0;
L_08A081D0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A081D4;
L_08A081D4:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A081E8;
      }
      goto L_08A081E4;
    }
L_08A081E4:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    goto L_08A081E8;
L_08A081E8:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A08154;
      }
      goto L_08A081F8;
    }
L_08A081F8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A08238;
      }
      goto L_08A08200;
    }
L_08A08200:
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A08238;
      }
      goto L_08A08220;
    }
L_08A08220:
    ctx.gpr[4] = (ctx.gpr[8] << 4u);
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), 0u);
    goto L_08A08238;
L_08A08238:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A080D8;
      }
      goto L_08A08248;
    }
L_08A08248:
    ctx.gpr[31] = (0x08A08250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A958;
L_08A08250:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A08268;
      }
      goto L_08A08260;
    }
L_08A08260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A0828C;
      }
      goto L_08A08268;
    }
L_08A08268:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    goto L_08A0828C;
L_08A0828C:
    jump_target = ctx.gpr[16];
    ctx.gpr[31] = (0x08A08294u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A08294u) goto L_08A08294;
    return;
L_08A08294:
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
L_08A082AC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A082E8;
      }
      goto L_08A082C8;
    }
L_08A082C8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08A082EC;
    }
    goto L_08A082D4;
L_08A082D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (2209u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26392));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A082F0;
      }
      goto L_08A082E8;
    }
L_08A082E8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A082EC;
L_08A082EC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A082F0;
L_08A082F0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08314;
      }
      goto L_08A082F8;
    }
L_08A082F8:
    ctx.gpr[31] = (0x08A08300u);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB44u;
    return;
L_08A08300:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08338;
      }
      goto L_08A0830C;
    }
L_08A0830C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08A0831C;
      }
      goto L_08A08314;
    }
L_08A08314:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A083B8;
      }
      goto L_08A0831C;
    }
L_08A0831C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08338;
      }
      goto L_08A08324;
    }
L_08A08324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26384));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A08370;
      }
      goto L_08A08338;
    }
L_08A08338:
    ctx.gpr[31] = (0x08A08340u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09408;
L_08A08340:
    ctx.gpr[31] = (0x08A08348u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 3u, 0x08974018u>(ctx, &aot_mem) && ctx.pc == 0x08A08348u) goto L_08A08348;
    return;
L_08A08348:
    ctx.gpr[31] = (0x08A08350u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09714;
L_08A08350:
    ctx.gpr[31] = (0x08A08358u);
    // nop
    ctx.pc = 0x08B0B734u;
    return;
L_08A08358:
    ctx.gpr[31] = (0x08A08360u);
    // nop
    ctx.pc = 0x08B0B784u;
    return;
L_08A08360:
    ctx.gpr[31] = (0x08A08368u);
    // nop
    ctx.pc = 0x08B0B7F4u;
    return;
L_08A08368:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08384;
      }
      goto L_08A08370;
    }
L_08A08370:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A0837Cu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = 0x08B0BC0Cu;
    return;
L_08A0837C:
    ctx.gpr[31] = (0x08A08384u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BBC4u;
    return;
L_08A08384:
    ctx.gpr[31] = (0x08A0838Cu);
    ctx.gpr[4] = (0u | 0u);
    ctx.pc = 0x08B0BB4Cu;
    return;
L_08A0838C:
    ctx.gpr[31] = (0x08A08394u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 385u, 0x08A2D934u>(ctx, &aot_mem) && ctx.pc == 0x08A08394u) goto L_08A08394;
    return;
L_08A08394:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-15160), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15240));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15240)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A083B8;
L_08A083B8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A083C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[4] = (0u << 4u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(92), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2112));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08480;
      }
      goto L_08A08424;
    }
L_08A08424:
    ctx.gpr[5] = (0u | 255u);
    goto L_08A08428;
L_08A08428:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_08A08428;
      }
      goto L_08A08480;
    }
L_08A08480:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A0848Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09374;
L_08A0848C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[31] = (0x08A084C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09374;
L_08A084C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A084F0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(125));
    goto L_08A0A978;
L_08A084F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0853C;
      }
      goto L_08A084FC;
    }
L_08A084FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0853C;
      }
      goto L_08A08508;
    }
L_08A08508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25228));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0853C;
      }
      goto L_08A0851C;
    }
L_08A0851C:
    ctx.gpr[31] = (0x08A08524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09714;
L_08A08524:
    ctx.gpr[31] = (0x08A0852Cu);
    ctx.gpr[4] = (0u | 13620u);
    ctx.pc = 0x08B0B6E4u;
    return;
L_08A0852C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0854C;
      }
      goto L_08A08534;
    }
L_08A08534:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A085A4;
      }
      goto L_08A0853C;
    }
L_08A0853C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A086E8;
      }
      goto L_08A0854C;
    }
L_08A0854C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08A08560u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A08560u) goto L_08A08560;
    return;
L_08A08560:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08570u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A08570u) goto L_08A08570;
    return;
L_08A08570:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0857Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A0857C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0859C;
      }
      goto L_08A08590;
    }
L_08A08590:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A0859Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0859Cu) goto L_08A0859C;
    return;
L_08A0859C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A086E8;
      }
      goto L_08A085A4;
    }
L_08A085A4:
    ctx.gpr[6] = (2208u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(32396));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (15u << 16u);
    ctx.gpr[9] = (31u << 16u);
    ctx.gpr[11] = (8u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16960));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-31616));
    ctx.gpr[31] = (0x08A085E0u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08B0B6F4u;
    return;
L_08A085E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A08648;
      }
      goto L_08A085E8;
    }
L_08A085E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08A08604u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A08604u) goto L_08A08604;
    return;
L_08A08604:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08614u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A08614u) goto L_08A08614;
    return;
L_08A08614:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08620u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A08620:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A08640;
      }
      goto L_08A08634;
    }
L_08A08634:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A08640u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08640u) goto L_08A08640;
    return;
L_08A08640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A086E8;
      }
      goto L_08A08648;
    }
L_08A08648:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8192u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 8192u);
    ctx.gpr[31] = (0x08A08668u);
    ctx.gpr[9] = (0u | 136u);
    ctx.pc = 0x08B0B6FCu;
    return;
L_08A08668:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A086C8;
      }
      goto L_08A08670;
    }
L_08A08670:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(156));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A08684u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A08684u) goto L_08A08684;
    return;
L_08A08684:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08694u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A08694u) goto L_08A08694;
    return;
L_08A08694:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A086A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A086A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A086C0;
      }
      goto L_08A086B4;
    }
L_08A086B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A086C0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A086C0u) goto L_08A086C0;
    return;
L_08A086C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A086E8;
      }
      goto L_08A086C8;
    }
L_08A086C8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15216)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A086E8;
L_08A086E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A087D8;
      }
      goto L_08A08728;
    }
L_08A08728:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A08754;
      }
      goto L_08A0874C;
    }
L_08A0874C:
    ctx.gpr[31] = (0x08A08754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08754u) goto L_08A08754;
    return;
L_08A08754:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x08A08760u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20932)));
    goto L_08A09374;
L_08A08760:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08798;
      }
      goto L_08A08774;
    }
L_08A08774:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A0879C;
    }
    goto L_08A08784;
L_08A08784:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A0879C;
      }
      goto L_08A08794;
    }
L_08A08794:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A08798;
L_08A08798:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A0879C;
L_08A0879C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A087C8;
      }
      goto L_08A087A4;
    }
L_08A087A4:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18)));
    ctx.gpr[5] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(27460), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A087D8;
      }
      goto L_08A087C8;
    }
L_08A087C8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08728;
      }
      goto L_08A087D8;
    }
L_08A087D8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A087E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(188));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 765u, 0x08A07DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A087E8u) goto L_08A087E8;
    return;
L_08A087E8:
    ctx.gpr[31] = (0x08A087F0u);
    // nop
    ctx.pc = 0x08B0B75Cu;
    return;
L_08A087F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A08850;
      }
      goto L_08A087F8;
    }
L_08A087F8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A0880Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0880Cu) goto L_08A0880C;
    return;
L_08A0880C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0881Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0881Cu) goto L_08A0881C;
    return;
L_08A0881C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08828u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A08828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A08848;
      }
      goto L_08A0883C;
    }
L_08A0883C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A08848u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08848u) goto L_08A08848;
    return;
L_08A08848:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0886C;
      }
      goto L_08A08850;
    }
L_08A08850:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15232));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15232)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A0886C;
L_08A0886C:
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
L_08A08884:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A088ACu);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A088ACu) goto L_08A088AC;
    return;
L_08A088AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A088BCu);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A088BCu) goto L_08A088BC;
    return;
L_08A088BC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A088CCu);
    ctx.gpr[6] = (0u | 938u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A088CCu) goto L_08A088CC;
    return;
L_08A088CC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08A088D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A092E8;
L_08A088D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08968;
      }
      goto L_08A088E0;
    }
L_08A088E0:
    ctx.gpr[31] = (0x08A088E8u);
    // nop
    ctx.pc = 0x08B0B75Cu;
    return;
L_08A088E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A08948;
      }
      goto L_08A088F0;
    }
L_08A088F0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(264));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A08904u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A08904u) goto L_08A08904;
    return;
L_08A08904:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08914u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A08914u) goto L_08A08914;
    return;
L_08A08914:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08920u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A08920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A08940;
      }
      goto L_08A08934;
    }
L_08A08934:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A08940u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08940u) goto L_08A08940;
    return;
L_08A08940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08984;
      }
      goto L_08A08948;
    }
L_08A08948:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15224));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15224)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A08984;
      }
      goto L_08A08968;
    }
L_08A08968:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15240));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15240)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A08984;
L_08A08984:
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
L_08A0899C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(92));
      if (branch_taken) {
          goto L_08A089A8;
      }
      goto L_08A089A4;
    }
L_08A089A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    goto L_08A089A8;
L_08A089A8:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A089D0;
      }
      goto L_08A089C8;
    }
L_08A089C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A089D4;
      }
      goto L_08A089D0;
    }
L_08A089D0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A089D4;
L_08A089D4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A089DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A08A00u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A0A934;
L_08A08A00:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A08A9C;
      }
      goto L_08A08A24;
    }
L_08A08A24:
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(2104));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A08A3Cu);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08B0B714u;
    return;
L_08A08A3C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A08A9C;
      }
      goto L_08A08A44;
    }
L_08A08A44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    goto L_08A08A9C;
L_08A08A9C:
    ctx.gpr[31] = (0x08A08AA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A958;
L_08A08AA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08AC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A08B14;
      }
      goto L_08A08AD8;
    }
L_08A08AD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A08AE4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A0A634;
L_08A08AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A08B10;
      }
      goto L_08A08AF4;
    }
L_08A08AF4:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-15208));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-15208)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[8]);
    goto L_08A08B10;
L_08A08B10:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A08B14;
L_08A08B14:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08B24;
      }
      goto L_08A08B20;
    }
L_08A08B20:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(0u));
    goto L_08A08B24;
L_08A08B24:
    ctx.gpr[31] = (0x08A08B2Cu);
    // nop
    goto L_08A0A418;
L_08A08B2C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08B38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A08B64u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 292u, 0x08AF9554u>(ctx, &aot_mem) && ctx.pc == 0x08A08B64u) goto L_08A08B64;
    return;
L_08A08B64:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A08BE4;
      }
      goto L_08A08B70;
    }
L_08A08B70:
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[19] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_08A08BAC;
      }
      goto L_08A08B84;
    }
L_08A08B84:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A08B90u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A08B90u) goto L_08A08B90;
    return;
L_08A08B90:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08BA8;
      }
      goto L_08A08B9C;
    }
L_08A08B9C:
    ctx.gpr[31] = (0x08A08BA4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A08BA4u) goto L_08A08BA4;
    return;
L_08A08BA4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A08BA8;
L_08A08BA8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(24444), ctx.gpr[17]);
    goto L_08A08BAC;
L_08A08BAC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08BB8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A08BB8u) goto L_08A08BB8;
    return;
L_08A08BB8:
    ctx.gpr[31] = (0x08A08BC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x08A08BC0u) goto L_08A08BC0;
    return;
L_08A08BC0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A08BCCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A08BCCu) goto L_08A08BCC;
    return;
L_08A08BCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08BDCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A08BDCu) goto L_08A08BDC;
    return;
L_08A08BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08DCC;
      }
      goto L_08A08BE4;
    }
L_08A08BE4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(2));
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08BF4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08A08BF4u) goto L_08A08BF4;
    return;
L_08A08BF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08C0Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A08C0Cu) goto L_08A08C0C;
    return;
L_08A08C0C:
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08C20u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 270u, 0x08AF93C8u>(ctx, &aot_mem) && ctx.pc == 0x08A08C20u) goto L_08A08C20;
    return;
L_08A08C20:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (0u | 32u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08A08C34;
L_08A08C34:
    ctx.gpr[8] = (0u | 8u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
        goto L_08A08C44;
    }
    goto L_08A08C44;
L_08A08C44:
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08C78;
      }
      goto L_08A08C50;
    }
L_08A08C50:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A08C6C;
      }
      goto L_08A08C5C;
    }
L_08A08C5C:
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08C6C;
      }
      goto L_08A08C64;
    }
L_08A08C64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A08C78;
      }
      goto L_08A08C6C;
    }
L_08A08C6C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A08C34;
      }
      goto L_08A08C78;
    }
L_08A08C78:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08CFC;
      }
      goto L_08A08C80;
    }
L_08A08C80:
    ctx.gpr[31] = (0x08A08C88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08A08C88u) goto L_08A08C88;
    return;
L_08A08C88:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    ctx.gpr[18] = (2226u << 16u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(296));
      if (branch_taken) {
          goto L_08A08CC4;
      }
      goto L_08A08C9C;
    }
L_08A08C9C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A08CA8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A08CA8u) goto L_08A08CA8;
    return;
L_08A08CA8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08CC0;
      }
      goto L_08A08CB4;
    }
L_08A08CB4:
    ctx.gpr[31] = (0x08A08CBCu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A08CBCu) goto L_08A08CBC;
    return;
L_08A08CBC:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A08CC0;
L_08A08CC0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[19]);
    goto L_08A08CC4;
L_08A08CC4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A08CD0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A08CD0u) goto L_08A08CD0;
    return;
L_08A08CD0:
    ctx.gpr[31] = (0x08A08CD8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x08A08CD8u) goto L_08A08CD8;
    return;
L_08A08CD8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A08CE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A08CE4u) goto L_08A08CE4;
    return;
L_08A08CE4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08CF4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A08CF4u) goto L_08A08CF4;
    return;
L_08A08CF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08DCC;
      }
      goto L_08A08CFC;
    }
L_08A08CFC:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x08A08D08u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 665u, 0x08AA31B4u>(ctx, &aot_mem) && ctx.pc == 0x08A08D08u) goto L_08A08D08;
    return;
L_08A08D08:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A08D20u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A08D20u) goto L_08A08D20;
    return;
L_08A08D20:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08D30u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 330u, 0x089133CCu>(ctx, &aot_mem) && ctx.pc == 0x08A08D30u) goto L_08A08D30;
    return;
L_08A08D30:
    ctx.gpr[31] = (0x08A08D38u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x08A08D38u) goto L_08A08D38;
    return;
L_08A08D38:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A08D48u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A08D48u) goto L_08A08D48;
    return;
L_08A08D48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A08D58u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A08D58u) goto L_08A08D58;
    return;
L_08A08D58:
    ctx.gpr[31] = (0x08A08D60u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08A08D60u) goto L_08A08D60;
    return;
L_08A08D60:
    ctx.gpr[31] = (0x08A08D68u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 669u, 0x08AA31FCu>(ctx, &aot_mem) && ctx.pc == 0x08A08D68u) goto L_08A08D68;
    return;
L_08A08D68:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(9) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08D9C;
      }
      goto L_08A08D78;
    }
L_08A08D78:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08A08D88u);
    ctx.gpr[6] = (0u | 32u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 305u, 0x08AF95F8u>(ctx, &aot_mem) && ctx.pc == 0x08A08D88u) goto L_08A08D88;
    return;
L_08A08D88:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08D98u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(304));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 807u, 0x08AFB79Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08D98u) goto L_08A08D98;
    return;
L_08A08D98:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    goto L_08A08D9C;
L_08A08D9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08DACu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A08DACu) goto L_08A08DAC;
    return;
L_08A08DAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A08DCC;
      }
      goto L_08A08DC0;
    }
L_08A08DC0:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08DCCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A08DCCu) goto L_08A08DCC;
    return;
L_08A08DCC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A08DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(2)));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1156));
    goto L_08A08E24;
L_08A08E24:
    ctx.gpr[11] = (ctx.gpr[7] | 0u);
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[8];
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08E50;
      }
      goto L_08A08E34;
    }
L_08A08E34:
    ctx.gpr[3] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[3] != ctx.gpr[9]) {
    ctx.gpr[11] = (ctx.gpr[2] & 255u);
        goto L_08A08E54;
    }
    goto L_08A08E40;
L_08A08E40:
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    ctx.gpr[11] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_08A08E54;
      }
      goto L_08A08E4C;
    }
L_08A08E4C:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A08E50;
L_08A08E50:
    ctx.gpr[11] = (ctx.gpr[2] & 255u);
    goto L_08A08E54;
L_08A08E54:
    { const bool branch_taken = ctx.gpr[11] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08E78;
      }
      goto L_08A08E5C;
    }
L_08A08E5C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(134));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A08E24;
      }
      goto L_08A08E70;
    }
L_08A08E70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08E8C;
      }
      goto L_08A08E78;
    }
L_08A08E78:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1162));
    ctx.gpr[31] = (0x08A08E84u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A08B38;
L_08A08E84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08EF8;
      }
      goto L_08A08E8C;
    }
L_08A08E8C:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24444)));
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (2226u << 16u);
      if (branch_taken) {
          goto L_08A08EC8;
      }
      goto L_08A08E9C;
    }
L_08A08E9C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A08EA8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x08A08EA8u) goto L_08A08EA8;
    return;
L_08A08EA8:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A08EC0;
      }
      goto L_08A08EB4;
    }
L_08A08EB4:
    ctx.gpr[31] = (0x08A08EBCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 395u, 0x089139BCu>(ctx, &aot_mem) && ctx.pc == 0x08A08EBCu) goto L_08A08EBC;
    return;
L_08A08EBC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A08EC0;
L_08A08EC0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24444), ctx.gpr[18]);
    ctx.gpr[5] = (2226u << 16u);
    goto L_08A08EC8;
L_08A08EC8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A08ED4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(296));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 415u, 0x08913B70u>(ctx, &aot_mem) && ctx.pc == 0x08A08ED4u) goto L_08A08ED4;
    return;
L_08A08ED4:
    ctx.gpr[31] = (0x08A08EDCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 299u, 0x089131F4u>(ctx, &aot_mem) && ctx.pc == 0x08A08EDCu) goto L_08A08EDC;
    return;
L_08A08EDC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A08EE8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A08EE8u) goto L_08A08EE8;
    return;
L_08A08EE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A08EF8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A08EF8u) goto L_08A08EF8;
    return;
L_08A08EF8:
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
L_08A08F14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A08F40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A08F40u) goto L_08A08F40;
    return;
L_08A08F40:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15148)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15152)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A08F58u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A08F58u) goto L_08A08F58;
    return;
L_08A08F58:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[11] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1156));
    goto L_08A08F84;
L_08A08F84:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1162))))));
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08F98;
      }
      goto L_08A08F90;
    }
L_08A08F90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A08FD0;
      }
      goto L_08A08F98;
    }
L_08A08F98:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[9];
    ctx.gpr[8] = (0u | 0u);
      if (branch_taken) {
          goto L_08A08FC4;
      }
      goto L_08A08FA8;
    }
L_08A08FA8:
    ctx.gpr[2] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[2] != ctx.gpr[10]) {
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
        goto L_08A08FC8;
    }
    goto L_08A08FB4;
L_08A08FB4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
      if (branch_taken) {
          goto L_08A08FC8;
      }
      goto L_08A08FC0;
    }
L_08A08FC0:
    ctx.gpr[8] = (0u | 1u);
    goto L_08A08FC4;
L_08A08FC4:
    ctx.gpr[7] = (ctx.gpr[8] & 255u);
    goto L_08A08FC8;
L_08A08FC8:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A08FEC;
      }
      goto L_08A08FD0;
    }
L_08A08FD0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(134));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A08F84;
      }
      goto L_08A08FE4;
    }
L_08A08FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[19] << 6u);
      if (branch_taken) {
          goto L_08A09004;
      }
      goto L_08A08FEC;
    }
L_08A08FEC:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1162));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A08FFCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A08B38;
L_08A08FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09130;
      }
      goto L_08A09004;
    }
L_08A09004:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(1156));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1162));
    ctx.gpr[31] = (0x08A09040u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09374;
L_08A09040:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A09078;
      }
      goto L_08A09054;
    }
L_08A09054:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08A0907C;
    }
    goto L_08A09064;
L_08A09064:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A0907C;
      }
      goto L_08A09074;
    }
L_08A09074:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A09078;
L_08A09078:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A0907C;
L_08A0907C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A090D4;
      }
      goto L_08A09084;
    }
L_08A09084:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A09094u);
    ctx.gpr[6] = (0u | 128u);
    ctx.pc = 0x08B0B86Cu;
    return;
L_08A09094:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A09120;
      }
      goto L_08A0909C;
    }
L_08A0909C:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A090B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(308));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A090B4u) goto L_08A090B4;
    return;
L_08A090B4:
    ctx.gpr[31] = (0x08A090BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A090BCu) goto L_08A090BC;
    return;
L_08A090BC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A090CCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A090CCu) goto L_08A090CC;
    return;
L_08A090CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09130;
      }
      goto L_08A090D4;
    }
L_08A090D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A090E0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B76Cu;
    return;
L_08A090E0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A09120;
      }
      goto L_08A090E8;
    }
L_08A090E8:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09100u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(308));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 812u, 0x08AEB77Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09100u) goto L_08A09100;
    return;
L_08A09100:
    ctx.gpr[31] = (0x08A09108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09108u) goto L_08A09108;
    return;
L_08A09108:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09118u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A09118u) goto L_08A09118;
    return;
L_08A09118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09130;
      }
      goto L_08A09120;
    }
L_08A09120:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A09130u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08A08B38;
L_08A09130:
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
L_08A0914C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1156));
    goto L_08A09158;
L_08A09158:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A09190;
      }
      goto L_08A0916C;
    }
L_08A0916C:
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(2)));
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[9] != ctx.gpr[10]) {
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
        goto L_08A09194;
    }
    goto L_08A0917C;
L_08A0917C:
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[9];
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
      if (branch_taken) {
          goto L_08A09194;
      }
      goto L_08A0918C;
    }
L_08A0918C:
    ctx.gpr[7] = (0u | 1u);
    goto L_08A09190;
L_08A09190:
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08A09194;
L_08A09194:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (0u | 255u);
      if (branch_taken) {
          goto L_08A091CC;
      }
      goto L_08A0919C;
    }
L_08A0919C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[8]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    goto L_08A091CC;
L_08A091CC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(134));
      if (branch_taken) {
          goto L_08A09158;
      }
      goto L_08A091DC;
    }
L_08A091DC:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A091E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A09220;
      }
      goto L_08A09204;
    }
L_08A09204:
    ctx.gpr[31] = (0x08A0920Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A934;
L_08A0920C:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 17u);
      if (branch_taken) {
          goto L_08A09228;
      }
      goto L_08A09220;
    }
L_08A09220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0925C;
      }
      goto L_08A09228;
    }
L_08A09228:
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08A09228;
      }
      goto L_08A0924C;
    }
L_08A0924C:
    ctx.gpr[31] = (0x08A09254u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A958;
L_08A09254:
    ctx.gpr[31] = (0x08A0925Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0AB14;
L_08A0925C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09270:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A09294u);
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
    goto L_08A0A934;
L_08A09294:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A092D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A958;
L_08A092D0:
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
L_08A092E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A0930C;
      }
      goto L_08A09304;
    }
L_08A09304:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08A0930C;
L_08A0930C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A09330;
      }
      goto L_08A09314;
    }
L_08A09314:
    ctx.gpr[31] = (0x08A0931Cu);
    // nop
    ctx.pc = 0x08B0B6CCu;
    return;
L_08A0931C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A09330;
      }
      goto L_08A09328;
    }
L_08A09328:
    ctx.gpr[4] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    goto L_08A09330;
L_08A09330:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.gpr[2] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09348:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-15160)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09368;
      }
      goto L_08A09360;
    }
L_08A09360:
    ctx.gpr[31] = (0x08A09368u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3166));
    ctx.pc = 0x08B0B804u;
    return;
L_08A09368:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09374:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(3166));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A093D8;
      }
      goto L_08A093B4;
    }
L_08A093B4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_08A093DC;
    }
    goto L_08A093C4;
L_08A093C4:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A093DC;
      }
      goto L_08A093D4;
    }
L_08A093D4:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A093D8;
L_08A093D8:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_08A093DC;
L_08A093DC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A093EC;
      }
      goto L_08A093E4;
    }
L_08A093E4:
    ctx.gpr[31] = (0x08A093ECu);
    // nop
    goto L_08A09348;
L_08A093EC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09400:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(72));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09408:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(3172));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09410:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[18] = (0u | 0u);
    goto L_08A09440;
L_08A09440:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0944Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A0899C;
L_08A0944C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A094A4;
      }
      goto L_08A09480;
    }
L_08A09480:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A094A8;
    }
    goto L_08A09490;
L_08A09490:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A094A8;
      }
      goto L_08A094A0;
    }
L_08A094A0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A094A4;
L_08A094A4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A094A8;
L_08A094A8:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A094BC;
      }
      goto L_08A094B8;
    }
L_08A094B8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    goto L_08A094BC;
L_08A094BC:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A09440;
      }
      goto L_08A094CC;
    }
L_08A094CC:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
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
L_08A094F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[19] = (0u | 0u);
    goto L_08A09530;
L_08A09530:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0953Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A0899C;
L_08A0953C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A09594;
      }
      goto L_08A09570;
    }
L_08A09570:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08A09598;
    }
    goto L_08A09580;
L_08A09580:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A09598;
      }
      goto L_08A09590;
    }
L_08A09590:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A09594;
L_08A09594:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A09598;
L_08A09598:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A095F0;
      }
      goto L_08A095A8;
    }
L_08A095A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A095B4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A0899C;
L_08A095B4:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A095CC;
      }
      goto L_08A095C8;
    }
L_08A095C8:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_08A095CC;
L_08A095CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A095D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A0899C;
L_08A095D8:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A095F0;
      }
      goto L_08A095EC;
    }
L_08A095EC:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    goto L_08A095F0;
L_08A095F0:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A09530;
      }
      goto L_08A09600;
    }
L_08A09600:
    ctx.gpr[2] = (ctx.gpr[21] + ctx.gpr[22]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0962C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A09658;
      }
      goto L_08A09650;
    }
L_08A09650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A096F8;
      }
      goto L_08A09658;
    }
L_08A09658:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A0965C;
L_08A0965C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0965C;
      }
      goto L_08A0967C;
    }
L_08A0967C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (0u | 5u);
    goto L_08A09684;
L_08A09684:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[31] = (0x08A09694u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(114)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A09694u) goto L_08A09694;
    return;
L_08A09694:
    { const std::uint32_t dividend = ctx.gpr[2]; const std::uint32_t divisor = ctx.gpr[17]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < 6 ? 1u : 0u);
    ctx.gpr[7] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(114)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[19]));
      if (branch_taken) {
          goto L_08A09684;
      }
      goto L_08A096C8;
    }
L_08A096C8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5736));
    goto L_08A096D4;
L_08A096D4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(114)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A096D4;
      }
      goto L_08A096F8;
    }
L_08A096F8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09714:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A09754;
      }
      goto L_08A09728;
    }
L_08A09728:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A09734u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.pc = 0x08B0B704u;
    return;
L_08A09734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08A09740u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.pc = 0x08B0B70Cu;
    return;
L_08A09740:
    ctx.gpr[31] = (0x08A09748u);
    // nop
    ctx.pc = 0x08B0B6ECu;
    return;
L_08A09748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    goto L_08A09754;
L_08A09754:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09760:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3184), static_cast<std::uint8_t>(ctx.gpr[5]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09768:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3184)));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09770:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8884));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15144)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15144));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[17] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(44), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21288));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(88), 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (2224u << 16u);
    ctx.gpr[19] = (ctx.gpr[5] + static_cast<std::uint32_t>(22496));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 152u);
    ctx.gpr[31] = (0x08A09828u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08A09828u) goto L_08A09828;
    return;
L_08A09828:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[7] = (2224u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22584));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[31] = (0x08A09840u);
    ctx.gpr[6] = (0u | 134u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08A09840u) goto L_08A09840;
    return;
L_08A09840:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2096), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 152u);
    ctx.gpr[31] = (0x08A09858u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 351u, 0x08AF5B00u>(ctx, &aot_mem) && ctx.pc == 0x08A09858u) goto L_08A09858;
    return;
L_08A09858:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3166), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3167), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3168), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3169), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3170), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3171), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3172), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3176), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3177), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3178), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3179), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3180), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3181), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(3176));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3182), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A098E8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A098F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A09924u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.pc = 0x08B0BC0Cu;
    return;
L_08A09924:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A09B54;
      }
      goto L_08A0992C;
    }
L_08A0992C:
    ctx.gpr[31] = (0x08A09934u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.pc = 0x08B0BBC4u;
    return;
L_08A09934:
    ctx.gpr[5] = (0u | 32u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A0994Cu);
    ctx.gpr[4] = (2u << 16u);
    ctx.pc = 0x08B0B7ECu;
    return;
L_08A0994C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A09990;
      }
      goto L_08A09954;
    }
L_08A09954:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(312));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A09968u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09968u) goto L_08A09968;
    return;
L_08A09968:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09978u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09978u) goto L_08A09978;
    return;
L_08A09978:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-15240));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09B34;
      }
      goto L_08A09990;
    }
L_08A09990:
    ctx.gpr[31] = (0x08A09998u);
    // nop
    ctx.pc = 0x08B0B77Cu;
    return;
L_08A09998:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A099DC;
      }
      goto L_08A099A0;
    }
L_08A099A0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(348));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A099B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A099B4u) goto L_08A099B4;
    return;
L_08A099B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A099C4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A099C4u) goto L_08A099C4;
    return;
L_08A099C4:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-15240));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09B2C;
      }
      goto L_08A099DC;
    }
L_08A099DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08A099F0u);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08A099F0u) goto L_08A099F0;
    return;
L_08A099F0:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (0u | 6144u);
    ctx.gpr[31] = (0x08A09A00u);
    ctx.gpr[5] = (0u | 48u);
    ctx.pc = 0x08B0B72Cu;
    return;
L_08A09A00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A09A44;
      }
      goto L_08A09A08;
    }
L_08A09A08:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(392));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A09A1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09A1Cu) goto L_08A09A1C;
    return;
L_08A09A1C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09A2Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09A2Cu) goto L_08A09A2C;
    return;
L_08A09A2C:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-15240));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09B24;
      }
      goto L_08A09A44;
    }
L_08A09A44:
    ctx.gpr[4] = (2208u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09A54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32220));
    ctx.pc = 0x08B0B764u;
    return;
L_08A09A54:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A09AA0;
      }
      goto L_08A09A5C;
    }
L_08A09A5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(452));
    ctx.gpr[31] = (0x08A09A78u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09A78u) goto L_08A09A78;
    return;
L_08A09A78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09A88u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09A88u) goto L_08A09A88;
    return;
L_08A09A88:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-15240));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09B1C;
      }
      goto L_08A09AA0;
    }
L_08A09AA0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A09ABCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(508));
    ctx.pc = 0x08B0BC24u;
    return;
L_08A09ABC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2096), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A09B08;
      }
      goto L_08A09AC4;
    }
L_08A09AC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(528));
    ctx.gpr[31] = (0x08A09AE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09AE0u) goto L_08A09AE0;
    return;
L_08A09AE0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09AF0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09AF0u) goto L_08A09AF0;
    return;
L_08A09AF0:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[17] = (ctx.gpr[18] + static_cast<std::uint32_t>(-15240));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09B1C;
      }
      goto L_08A09B08;
    }
L_08A09B08:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[31] = (0x08A09B14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A2A4;
L_08A09B14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09B54;
      }
      goto L_08A09B1C;
    }
L_08A09B1C:
    ctx.gpr[31] = (0x08A09B24u);
    // nop
    ctx.pc = 0x08B0B734u;
    return;
L_08A09B24:
    ctx.gpr[31] = (0x08A09B2Cu);
    // nop
    ctx.pc = 0x08B0B784u;
    return;
L_08A09B2C:
    ctx.gpr[31] = (0x08A09B34u);
    // nop
    ctx.pc = 0x08B0B7F4u;
    return;
L_08A09B34:
    ctx.gpr[31] = (0x08A09B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 385u, 0x08A2D934u>(ctx, &aot_mem) && ctx.pc == 0x08A09B3Cu) goto L_08A09B3C;
    return;
L_08A09B3C:
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(-15160), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15240)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A09B54;
L_08A09B54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09B78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A09B9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(560));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 765u, 0x08A07DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A09B9Cu) goto L_08A09B9C;
    return;
L_08A09B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09C04;
      }
      goto L_08A09BAC;
    }
L_08A09BAC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(596));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A09BC0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09BC0u) goto L_08A09BC0;
    return;
L_08A09BC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09BD0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A09BD0u) goto L_08A09BD0;
    return;
L_08A09BD0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09BDCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A09BDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A09BFC;
      }
      goto L_08A09BF0;
    }
L_08A09BF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A09BFCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09BFCu) goto L_08A09BFC;
    return;
L_08A09BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09D5C;
      }
      goto L_08A09C04;
    }
L_08A09C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09D5C;
      }
      goto L_08A09C14;
    }
L_08A09C14:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A09C20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(624));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 765u, 0x08A07DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A09C20u) goto L_08A09C20;
    return;
L_08A09C20:
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(104));
    goto L_08A09C2C;
L_08A09C2C:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(35), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(34))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[9]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(114));
    goto L_08A09C68;
L_08A09C68:
    ctx.gpr[9] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(38), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(39), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint8_t>(ctx.gpr[9]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(41), static_cast<std::uint8_t>(ctx.gpr[9]));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(38))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[9]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[10]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[11]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[5]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A09C68;
      }
      goto L_08A09CAC;
    }
L_08A09CAC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[8]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A09C2C;
      }
      goto L_08A09CC0;
    }
L_08A09CC0:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[31] = (0x08A09D00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A09348;
L_08A09D00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3164)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09D3C;
      }
      goto L_08A09D0C;
    }
L_08A09D0C:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3164), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15208));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15208)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[31] = (0x08A09D34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A083C8;
L_08A09D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09D5C;
      }
      goto L_08A09D3C;
    }
L_08A09D3C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A09D48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(656));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 765u, 0x08A07DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A09D48u) goto L_08A09D48;
    return;
L_08A09D48:
    ctx.gpr[31] = (0x08A09D50u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A418;
L_08A09D50:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A09D5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(668));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 765u, 0x08A07DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A09D5Cu) goto L_08A09D5C;
    return;
L_08A09D5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09D74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[8] = (0u | 5u);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[9] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15168));
    goto L_08A09D94;
L_08A09D94:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A09DF8;
      }
      goto L_08A09DA0;
    }
L_08A09DA0:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08A09DC0;
      }
      goto L_08A09DAC;
    }
L_08A09DAC:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15168)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A09DF8;
      }
      goto L_08A09DC0;
    }
L_08A09DC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[10]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[31] = (0x08A09DDCu);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    goto L_08A0A634;
L_08A09DDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (0u | 5u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (2229u << 16u);
    goto L_08A09DF8;
L_08A09DF8:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[10]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A09D94;
      }
      goto L_08A09E08;
    }
L_08A09E08:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09E14:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09E1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A09E64;
      }
      goto L_08A09E44;
    }
L_08A09E44:
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-15208));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15208)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A09E64;
L_08A09E64:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09E6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09EE8;
      }
      goto L_08A09E8C;
    }
L_08A09E8C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(680));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A09EA4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09EA4u) goto L_08A09EA4;
    return;
L_08A09EA4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A09EB4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A09EB4u) goto L_08A09EB4;
    return;
L_08A09EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A09EC0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A0A6C0;
L_08A09EC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A09EE0;
      }
      goto L_08A09ED4;
    }
L_08A09ED4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A09EE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09EE0u) goto L_08A09EE0;
    return;
L_08A09EE0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09F14;
      }
      goto L_08A09EE8;
    }
L_08A09EE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A09F14;
      }
      goto L_08A09EF8;
    }
L_08A09EF8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15176));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15176)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A09F14;
L_08A09F14:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A09F28:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-752));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(732), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(736), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(740), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(744), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A09FA4;
      }
      goto L_08A09F4C;
    }
L_08A09F4C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(708));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A09F60u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09F60u) goto L_08A09F60;
    return;
L_08A09F60:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09F70u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A09F70u) goto L_08A09F70;
    return;
L_08A09F70:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A09F7Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A09F7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A09F9C;
      }
      goto L_08A09F90;
    }
L_08A09F90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A09F9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A09F9Cu) goto L_08A09F9C;
    return;
L_08A09F9C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1DC;
      }
      goto L_08A09FA4;
    }
L_08A09FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1DC;
      }
      goto L_08A09FB4;
    }
L_08A09FB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (0u | 672u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(696), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(696));
    ctx.gpr[31] = (0x08A09FCCu);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.pc = 0x08B0B774u;
    return;
L_08A09FCC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A02C;
      }
      goto L_08A09FD4;
    }
L_08A09FD4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(740));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(700));
    ctx.gpr[31] = (0x08A09FE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A09FE8u) goto L_08A09FE8;
    return;
L_08A09FE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A09FF8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A09FF8u) goto L_08A09FF8;
    return;
L_08A09FF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A004u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A0A004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A024;
      }
      goto L_08A0A018;
    }
L_08A0A018:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(704)));
    ctx.gpr[31] = (0x08A0A024u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A024u) goto L_08A0A024;
    return;
L_08A0A024:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1DC;
      }
      goto L_08A0A02C;
    }
L_08A0A02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(696)));
    ctx.gpr[17] = (0u | 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
        goto L_08A0A03C;
    }
    goto L_08A0A03C;
L_08A0A03C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A070;
      }
      goto L_08A0A044;
    }
L_08A0A044:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A0A054u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x08A0A054u) goto L_08A0A054;
    return;
L_08A0A054:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A064;
      }
      goto L_08A0A05C;
    }
L_08A0A05C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A070;
      }
      goto L_08A0A064;
    }
L_08A0A064:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A044;
      }
      goto L_08A0A070;
    }
L_08A0A070:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A158;
      }
      goto L_08A0A078;
    }
L_08A0A078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A0F0;
      }
      goto L_08A0A090;
    }
L_08A0A090:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(772));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(708));
    ctx.gpr[31] = (0x08A0A0A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A0A4u) goto L_08A0A0A4;
    return;
L_08A0A0A4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A0B4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0A0B4u) goto L_08A0A0B4;
    return;
L_08A0A0B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A0C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A0A0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A0E0;
      }
      goto L_08A0A0D4;
    }
L_08A0A0D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(712)));
    ctx.gpr[31] = (0x08A0A0E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A0E0u) goto L_08A0A0E0;
    return;
L_08A0A0E0:
    ctx.gpr[31] = (0x08A0A0E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A082AC;
L_08A0A0E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1DC;
      }
      goto L_08A0A0F0;
    }
L_08A0A0F0:
    ctx.gpr[31] = (0x08A0A0F8u);
    // nop
    ctx.pc = 0x08B0B754u;
    return;
L_08A0A0F8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A150;
      }
      goto L_08A0A100;
    }
L_08A0A100:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(808));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(716));
    ctx.gpr[31] = (0x08A0A114u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A114u) goto L_08A0A114;
    return;
L_08A0A114:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A124u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0A124u) goto L_08A0A124;
    return;
L_08A0A124:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A130u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A0A130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A150;
      }
      goto L_08A0A144;
    }
L_08A0A144:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(720)));
    ctx.gpr[31] = (0x08A0A150u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A150u) goto L_08A0A150;
    return;
L_08A0A150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1DC;
      }
      goto L_08A0A158;
    }
L_08A0A158:
    ctx.gpr[31] = (0x08A0A160u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0B74Cu;
    return;
L_08A0A160:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A1C0;
      }
      goto L_08A0A168;
    }
L_08A0A168:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(844));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(724));
    ctx.gpr[31] = (0x08A0A17Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A17Cu) goto L_08A0A17C;
    return;
L_08A0A17C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A18Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0A18Cu) goto L_08A0A18C;
    return;
L_08A0A18C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A198u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A0A198:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A1B8;
      }
      goto L_08A0A1AC;
    }
L_08A0A1AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(728)));
    ctx.gpr[31] = (0x08A0A1B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A1B8u) goto L_08A0A1B8;
    return;
L_08A0A1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A1DC;
      }
      goto L_08A0A1C0;
    }
L_08A0A1C0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15192));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15192)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A0A1DC;
L_08A0A1DC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(732)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(736)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(740)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(744)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A1F4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A1FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A22C;
      }
      goto L_08A0A21C;
    }
L_08A0A21C:
    ctx.gpr[31] = (0x08A0A224u);
    // nop
    goto L_08A0A2A4;
L_08A0A224:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A290;
      }
      goto L_08A0A22C;
    }
L_08A0A22C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A290;
      }
      goto L_08A0A23C;
    }
L_08A0A23C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A0A254u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A254u) goto L_08A0A254;
    return;
L_08A0A254:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0A264u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0A264u) goto L_08A0A264;
    return;
L_08A0A264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A0A270u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A0A6C0;
L_08A0A270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0A290;
      }
      goto L_08A0A284;
    }
L_08A0A284:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08A0A290u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A290u) goto L_08A0A290;
    return;
L_08A0A290:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A2A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A2BCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(44)));
    goto L_08A0A2F8;
L_08A0A2BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A2CC;
      }
      goto L_08A0A2C4;
    }
L_08A0A2C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A2E8;
      }
      goto L_08A0A2CC;
    }
L_08A0A2CC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15200));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15200)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    goto L_08A0A2E8;
L_08A0A2E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A2F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A330u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A330u) goto L_08A0A330;
    return;
L_08A0A330:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A340u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 296u, 0x089D9784u>(ctx, &aot_mem) && ctx.pc == 0x08A0A340u) goto L_08A0A340;
    return;
L_08A0A340:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[31] = (0x08A0A34Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.pc = 0x08B0B73Cu;
    return;
L_08A0A34C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A0A3F4;
      }
      goto L_08A0A354;
    }
L_08A0A354:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(872));
    ctx.gpr[31] = (0x08A0A364u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A364u) goto L_08A0A364;
    return;
L_08A0A364:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A374u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0A374u) goto L_08A0A374;
    return;
L_08A0A374:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A0A388u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A388u) goto L_08A0A388;
    return;
L_08A0A388:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A3A0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 754u, 0x08AFB2C0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A3A0u) goto L_08A0A3A0;
    return;
L_08A0A3A0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0A3ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A0A6C0;
L_08A0A3AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A3CC;
      }
      goto L_08A0A3C0;
    }
L_08A0A3C0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08A0A3CCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A3CCu) goto L_08A0A3CC;
    return;
L_08A0A3CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A3EC;
      }
      goto L_08A0A3E0;
    }
L_08A0A3E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A0A3ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A3ECu) goto L_08A0A3EC;
    return;
L_08A0A3EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A3F8;
      }
      goto L_08A0A3F4;
    }
L_08A0A3F4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A0A3F8;
L_08A0A3F8:
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
L_08A0A418:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A434u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A09714;
L_08A0A434:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A444u);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A444u) goto L_08A0A444;
    return;
L_08A0A444:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2100));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A454u);
    ctx.gpr[6] = (0u | 1064u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A454u) goto L_08A0A454;
    return;
L_08A0A454:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1156));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A464u);
    ctx.gpr[6] = (0u | 938u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A464u) goto L_08A0A464;
    return;
L_08A0A464:
    ctx.gpr[31] = (0x08A0A46Cu);
    ctx.gpr[4] = (0u | 13620u);
    ctx.pc = 0x08B0B6E4u;
    return;
L_08A0A46C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A4CC;
      }
      goto L_08A0A474;
    }
L_08A0A474:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A0A488u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A488u) goto L_08A0A488;
    return;
L_08A0A488:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A498u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0A498u) goto L_08A0A498;
    return;
L_08A0A498:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A4A4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A0A4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A4C4;
      }
      goto L_08A0A4B8;
    }
L_08A0A4B8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A0A4C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A4C4u) goto L_08A0A4C4;
    return;
L_08A0A4C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A61C;
      }
      goto L_08A0A4CC;
    }
L_08A0A4CC:
    ctx.gpr[6] = (2208u << 16u);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(32260));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    ctx.gpr[8] = (15u << 16u);
    ctx.gpr[9] = (31u << 16u);
    ctx.gpr[11] = (8u << 16u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 4096u);
    ctx.gpr[10] = (0u | 3u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(16960));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(-31616));
    ctx.gpr[31] = (0x08A0A508u);
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(-24288));
    ctx.pc = 0x08B0B6F4u;
    return;
L_08A0A508:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A570;
      }
      goto L_08A0A510;
    }
L_08A0A510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08A0A52Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A52Cu) goto L_08A0A52C;
    return;
L_08A0A52C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A53Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0A53Cu) goto L_08A0A53C;
    return;
L_08A0A53C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A548u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A0A548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A568;
      }
      goto L_08A0A55C;
    }
L_08A0A55C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A0A568u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A568u) goto L_08A0A568;
    return;
L_08A0A568:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A61C;
      }
      goto L_08A0A570;
    }
L_08A0A570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 8192u);
    ctx.gpr[7] = (0u | 16u);
    ctx.gpr[8] = (0u | 8192u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A0A590u);
    ctx.gpr[10] = (0u | 0u);
    ctx.pc = 0x08B0B6FCu;
    return;
L_08A0A590:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0A5F0;
      }
      goto L_08A0A598;
    }
L_08A0A598:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(156));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A0A5ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0A5ACu) goto L_08A0A5AC;
    return;
L_08A0A5AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0A5BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0A5BCu) goto L_08A0A5BC;
    return;
L_08A0A5BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A5C8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A0A5C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0A5E8;
      }
      goto L_08A0A5DC;
    }
L_08A0A5DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A0A5E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A5E8u) goto L_08A0A5E8;
    return;
L_08A0A5E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A61C;
      }
      goto L_08A0A5F0;
    }
L_08A0A5F0:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-15208));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15208)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A0A61C;
L_08A0A61C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A634:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A654u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    goto L_08A0A934;
L_08A0A654:
    ctx.gpr[4] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
      if (branch_taken) {
          goto L_08A0A688;
      }
      goto L_08A0A670;
    }
L_08A0A670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A0A688;
      }
      goto L_08A0A67C;
    }
L_08A0A67C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2100), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), 0u);
      if (branch_taken) {
          goto L_08A0A6A0;
      }
      goto L_08A0A688;
    }
L_08A0A688:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08A0A694u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(2104));
    ctx.pc = 0x08B0B71Cu;
    return;
L_08A0A694:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    goto L_08A0A6A0;
L_08A0A6A0:
    ctx.gpr[31] = (0x08A0A6A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A958;
L_08A0A6A8:
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
L_08A0A6C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A6DCu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08A082AC;
L_08A0A6DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A0A6F4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 692u, 0x08AFAF0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0A6F4u) goto L_08A0A6F4;
    return;
L_08A0A6F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A708:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A738u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A934;
L_08A0A738:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[19] = (ctx.gpr[20] + static_cast<std::uint32_t>(2104));
    goto L_08A0A748;
L_08A0A748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(2100)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A75C;
      }
      goto L_08A0A754;
    }
L_08A0A754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A0A774;
      }
      goto L_08A0A75C;
    }
L_08A0A75C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0A76Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 385u, 0x08AED584u>(ctx, &aot_mem) && ctx.pc == 0x08A0A76Cu) goto L_08A0A76C;
    return;
L_08A0A76C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A790;
      }
      goto L_08A0A774;
    }
L_08A0A774:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(152));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(152));
      if (branch_taken) {
          goto L_08A0A748;
      }
      goto L_08A0A788;
    }
L_08A0A788:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A798;
      }
      goto L_08A0A790;
    }
L_08A0A790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A0A910;
      }
      goto L_08A0A798;
    }
L_08A0A798:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0A7B4;
      }
      goto L_08A0A7A0;
    }
L_08A0A7A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A7E0;
      }
      goto L_08A0A7AC;
    }
L_08A0A7AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(16))))));
      if (branch_taken) {
          goto L_08A0A7C4;
      }
      goto L_08A0A7B4;
    }
L_08A0A7B4:
    ctx.gpr[31] = (0x08A0A7BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A958;
L_08A0A7BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A0A910;
      }
      goto L_08A0A7C4;
    }
L_08A0A7C4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A7E0;
      }
      goto L_08A0A7CC;
    }
L_08A0A7CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-26384));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
      if (branch_taken) {
          goto L_08A0A8C0;
      }
      goto L_08A0A7E0;
    }
L_08A0A7E0:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[31] = (0x08A0A7ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.pc = 0x08B0B76Cu;
    return;
L_08A0A7EC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A0A8BC;
      }
      goto L_08A0A7F4;
    }
L_08A0A7F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08A0A82Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A09374;
L_08A0A82C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(22));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0A898;
      }
      goto L_08A0A874;
    }
L_08A0A874:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[7] != ctx.gpr[8]) {
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
        goto L_08A0A89C;
    }
    goto L_08A0A884;
L_08A0A884:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A0A89C;
      }
      goto L_08A0A894;
    }
L_08A0A894:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A0A898;
L_08A0A898:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08A0A89C;
L_08A0A89C:
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A8BC;
      }
      goto L_08A0A8AC;
    }
L_08A0A8AC:
    ctx.gpr[31] = (0x08A0A8B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0A958;
L_08A0A8B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A0A910;
      }
      goto L_08A0A8BC;
    }
L_08A0A8BC:
    ctx.gpr[4] = (ctx.gpr[18] << 4u);
    goto L_08A0A8C0;
L_08A0A8C0:
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2100), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2104));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A0A910;
L_08A0A910:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A934:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A94Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC3Cu;
    return;
L_08A0A94C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A958:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A96Cu);
    ctx.gpr[5] = (0u | 1u);
    ctx.pc = 0x08B0BC34u;
    return;
L_08A0A96C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0A978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0A9B4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A9B4u) goto L_08A0A9B4;
    return;
L_08A0A9B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15132)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15136)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15124)));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15128)));
    goto L_08A0A9D0;
L_08A0A9D0:
    ctx.gpr[31] = (0x08A0A9D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x08A0A9D8u) goto L_08A0A9D8;
    return;
L_08A0A9D8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A0A9ECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x08A0A9ECu) goto L_08A0A9EC;
    return;
L_08A0A9EC:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[20] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[22] < static_cast<std::uint32_t>(8) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0A9D0;
      }
      goto L_08A0AA2C;
    }
L_08A0AA2C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(6))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(7))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A0AA5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(900));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 765u, 0x08A07DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A0AA5Cu) goto L_08A0AA5C;
    return;
L_08A0AA5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AA84:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AAA4;
      }
      goto L_08A0AA8C;
    }
L_08A0AA8C:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0AB0C;
      }
      goto L_08A0AAA4;
    }
L_08A0AAA4:
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0AAC8;
      }
      goto L_08A0AAB0;
    }
L_08A0AAB0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0AB0C;
      }
      goto L_08A0AAC8;
    }
L_08A0AAC8:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0AAEC;
      }
      goto L_08A0AAD4;
    }
L_08A0AAD4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0AB0C;
      }
      goto L_08A0AAEC;
    }
L_08A0AAEC:
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0AB0C;
      }
      goto L_08A0AAF8;
    }
L_08A0AAF8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(68));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_08A0AB0C;
L_08A0AB0C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0AB14:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0AB44u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08A0A934;
L_08A0AB44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[23] = (2232u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(5736));
      if (branch_taken) {
          goto L_08A0AD14;
      }
      goto L_08A0AB54;
    }
L_08A0AB54:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (2230u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[22] = (2229u << 16u);
    goto L_08A0AB68;
L_08A0AB68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20932)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[18]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A0AB84;
      }
      goto L_08A0AB7C;
    }
L_08A0AB7C:
    ctx.gpr[31] = (0x08A0AB84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 526u, 0x08AFA53Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AB84u) goto L_08A0AB84;
    return;
L_08A0AB84:
    ctx.gpr[31] = (0x08A0AB8Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-20932)));
    goto L_08A09374;
L_08A0AB8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0ABC4;
      }
      goto L_08A0ABA0;
    }
L_08A0ABA0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    if (ctx.gpr[6] != ctx.gpr[7]) {
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
        goto L_08A0ABC8;
    }
    goto L_08A0ABB0;
L_08A0ABB0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A0ABC8;
      }
      goto L_08A0ABC0;
    }
L_08A0ABC0:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A0ABC4;
L_08A0ABC4:
    ctx.gpr[4] = (ctx.gpr[5] & 255u);
    goto L_08A0ABC8;
L_08A0ABC8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0ABF0;
      }
      goto L_08A0ABD0;
    }
L_08A0ABD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(27460)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(27456)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A0ABF0;
L_08A0ABF0:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
      if (branch_taken) {
          goto L_08A0AB68;
      }
      goto L_08A0AC00;
    }
L_08A0AC00:
    ctx.gpr[31] = (0x08A0AC08u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 90u, 0x088A84D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC08u) goto L_08A0AC08;
    return;
L_08A0AC08:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AC18u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(84), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 86u, 0x088A84B4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC18u) goto L_08A0AC18;
    return;
L_08A0AC18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AC28u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(80), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 92u, 0x088A84E4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC28u) goto L_08A0AC28;
    return;
L_08A0AC28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AC38u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 96u, 0x088A8504u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC38u) goto L_08A0AC38;
    return;
L_08A0AC38:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AC48u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(92), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 94u, 0x088A84F4u>(ctx, &aot_mem) && ctx.pc == 0x08A0AC48u) goto L_08A0AC48;
    return;
L_08A0AC48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(100), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(108), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(54)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(110), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(122), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(112), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(37)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ACA0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(113), static_cast<std::uint8_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 98u, 0x088A8514u>(ctx, &aot_mem) && ctx.pc == 0x08A0ACA0u) goto L_08A0ACA0;
    return;
L_08A0ACA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ACB0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 100u, 0x088A8524u>(ctx, &aot_mem) && ctx.pc == 0x08A0ACB0u) goto L_08A0ACB0;
    return;
L_08A0ACB0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ACC0u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[2]));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 102u, 0x088A8534u>(ctx, &aot_mem) && ctx.pc == 0x08A0ACC0u) goto L_08A0ACC0;
    return;
L_08A0ACC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(124), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A0ACCC;
L_08A0ACCC:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ACD8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 291u, 0x088A9430u>(ctx, &aot_mem) && ctx.pc == 0x08A0ACD8u) goto L_08A0ACD8;
    return;
L_08A0ACD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(114), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0ACCC;
      }
      goto L_08A0ACF4;
    }
L_08A0ACF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0AE04;
      }
      goto L_08A0AD00;
    }
L_08A0AD00:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A0AD0Cu);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = 0x08B0B724u;
    return;
L_08A0AD0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0AE04;
      }
      goto L_08A0AD14;
    }
L_08A0AD14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AD24u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 87u, 0x088A84BCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD24u) goto L_08A0AD24;
    return;
L_08A0AD24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AD34u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 85u, 0x088A84ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD34u) goto L_08A0AD34;
    return;
L_08A0AD34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AD44u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(88)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 91u, 0x088A84DCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD44u) goto L_08A0AD44;
    return;
L_08A0AD44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AD54u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(92)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 95u, 0x088A84FCu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD54u) goto L_08A0AD54;
    return;
L_08A0AD54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0AD64u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 93u, 0x088A84ECu>(ctx, &aot_mem) && ctx.pc == 0x08A0AD64u) goto L_08A0AD64;
    return;
L_08A0AD64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(110)));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(54), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(113)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ADB0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 97u, 0x088A850Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADB0u) goto L_08A0ADB0;
    return;
L_08A0ADB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(122)));
    aot_mem.aot_store8(ctx.gpr[23] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ADCCu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(123)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 99u, 0x088A851Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADCCu) goto L_08A0ADCC;
    return;
L_08A0ADCC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A0ADDCu);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(124)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 101u, 0x088A852Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0ADDCu) goto L_08A0ADDC;
    return;
L_08A0ADDC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A0ADE0;
L_08A0ADE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(114)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0ADE0;
      }
      goto L_08A0AE04;
    }
L_08A0AE04:
    ctx.gpr[31] = (0x08A0AE0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A958;
L_08A0AE0C:
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
L_08A0AE38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0B030;
      }
      goto L_08A0AE64;
    }
L_08A0AE64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A0AE74u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = 0x08B0B7FCu;
    return;
L_08A0AE74:
    ctx.gpr[31] = (0x08A0AE7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AE7Cu) goto L_08A0AE7C;
    return;
L_08A0AE7C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0AE8Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0AE8Cu) goto L_08A0AE8C;
    return;
L_08A0AE8C:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A0AEA0u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0AEA0u) goto L_08A0AEA0;
    return;
L_08A0AEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(125))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(126))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(129))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(130))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(131))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(132))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(55), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(960));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(49))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50))))));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51))))));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(53))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(54))))));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(55))))));
    ctx.gpr[31] = (0x08A0AF14u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 765u, 0x08A07DB0u>(ctx, &aot_mem) && ctx.pc == 0x08A0AF14u) goto L_08A0AF14;
    return;
L_08A0AF14:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A0AFA0;
      }
      goto L_08A0AF2C;
    }
L_08A0AF2C:
    ctx.gpr[31] = (0x08A0AF34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.pc = 0x08B0B744u;
    return;
L_08A0AF34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0AF84;
      }
      goto L_08A0AF3C;
    }
L_08A0AF3C:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[31] = (0x08A0AF50u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AF50u) goto L_08A0AF50;
    return;
L_08A0AF50:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A0AF60u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0AF60u) goto L_08A0AF60;
    return;
L_08A0AF60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0AF6Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A0A6C0;
L_08A0AF6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0AF84;
      }
      goto L_08A0AF78;
    }
L_08A0AF78:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A0AF84u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AF84u) goto L_08A0AF84;
    return;
L_08A0AF84:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15192));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15192)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0B010;
      }
      goto L_08A0AFA0;
    }
L_08A0AFA0:
    ctx.gpr[31] = (0x08A0AFA8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), 0u);
    ctx.pc = 0x08B0B754u;
    return;
L_08A0AFA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A0AFF8;
      }
      goto L_08A0AFB0;
    }
L_08A0AFB0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(808));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x08A0AFC4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0AFC4u) goto L_08A0AFC4;
    return;
L_08A0AFC4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A0AFD4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0AFD4u) goto L_08A0AFD4;
    return;
L_08A0AFD4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0AFE0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A0A6C0;
L_08A0AFE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0AFF8;
      }
      goto L_08A0AFEC;
    }
L_08A0AFEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (0x08A0AFF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0AFF8u) goto L_08A0AFF8;
    return;
L_08A0AFF8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15184));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15184)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08A0B010;
L_08A0B010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0B028;
      }
      goto L_08A0B01C;
    }
L_08A0B01C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (0x08A0B028u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B028u) goto L_08A0B028;
    return;
L_08A0B028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B090;
      }
      goto L_08A0B030;
    }
L_08A0B030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B090;
      }
      goto L_08A0B040;
    }
L_08A0B040:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(232));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x08A0B054u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 512u, 0x08AEDDF8u>(ctx, &aot_mem) && ctx.pc == 0x08A0B054u) goto L_08A0B054;
    return;
L_08A0B054:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0B064u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 316u, 0x08AF9704u>(ctx, &aot_mem) && ctx.pc == 0x08A0B064u) goto L_08A0B064;
    return;
L_08A0B064:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0B070u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A0A6C0;
L_08A0B070:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21288));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A0B090;
      }
      goto L_08A0B084;
    }
L_08A0B084:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[31] = (0x08A0B090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5440));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 741u, 0x08AA372Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B090u) goto L_08A0B090;
    return;
L_08A0B090:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B0B0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[9] | 0u);
      if (branch_taken) {
          goto L_08A0B108;
      }
      goto L_08A0B0E8;
    }
L_08A0B0E8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B10C;
    }
    goto L_08A0B0F4;
L_08A0B0F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20936));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B1EC;
      }
      goto L_08A0B108;
    }
L_08A0B108:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B10C;
L_08A0B10C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B138;
    }
    goto L_08A0B114;
L_08A0B114:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B138;
    }
    goto L_08A0B120;
L_08A0B120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24980));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B1EC;
      }
      goto L_08A0B134;
    }
L_08A0B134:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B138;
L_08A0B138:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B164;
    }
    goto L_08A0B140;
L_08A0B140:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B164;
    }
    goto L_08A0B14C;
L_08A0B14C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24792));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B1EC;
      }
      goto L_08A0B160;
    }
L_08A0B160:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B164;
L_08A0B164:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B18C;
      }
      goto L_08A0B16C;
    }
L_08A0B16C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B18C;
      }
      goto L_08A0B178;
    }
L_08A0B178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24076));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B1EC;
      }
      goto L_08A0B18C;
    }
L_08A0B18C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0B198u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A0A708;
L_08A0B198:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0B1E4;
      }
      goto L_08A0B1A4;
    }
L_08A0B1A4:
    ctx.gpr[4] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2100));
      if (branch_taken) {
          goto L_08A0B3D8;
      }
      goto L_08A0B1C8;
    }
L_08A0B1C8:
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(1032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B1E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B3E0;
      }
      goto L_08A0B1EC;
    }
L_08A0B1EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B3E0;
      }
      goto L_08A0B1F4;
    }
L_08A0B1F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A0B214;
      }
      goto L_08A0B204;
    }
L_08A0B204:
    ctx.gpr[31] = (0x08A0B20Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0A958;
L_08A0B20C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B3E0;
      }
      goto L_08A0B214;
    }
L_08A0B214:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[7]));
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[5] = (0u | 136u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(148), 0u);
      if (branch_taken) {
          goto L_08A0B2C4;
      }
      goto L_08A0B258;
    }
L_08A0B258:
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[20]);
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08A0B278;
      }
      goto L_08A0B264;
    }
L_08A0B264:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[6]));
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A0B264;
      }
      goto L_08A0B278;
    }
L_08A0B278:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    goto L_08A0B2C4;
L_08A0B2C4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A0B304u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A0914C;
L_08A0B304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B204;
      }
      goto L_08A0B30C;
    }
L_08A0B30C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0B31C;
      }
      goto L_08A0B318;
    }
L_08A0B318:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    goto L_08A0B31C;
L_08A0B31C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B204;
      }
      goto L_08A0B324;
    }
L_08A0B324:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B204;
      }
      goto L_08A0B32C;
    }
L_08A0B32C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(22))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(28));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(26))))));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[7]));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A0B204;
      }
      goto L_08A0B38C;
    }
L_08A0B38C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0B3A0;
      }
      goto L_08A0B398;
    }
L_08A0B398:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A0B204;
      }
      goto L_08A0B3A0;
    }
L_08A0B3A0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A0B3B8;
      }
      goto L_08A0B3B0;
    }
L_08A0B3B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B204;
      }
      goto L_08A0B3B8;
    }
L_08A0B3B8:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B3D0;
      }
      goto L_08A0B3C8;
    }
L_08A0B3C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B204;
      }
      goto L_08A0B3D0;
    }
L_08A0B3D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B204;
      }
      goto L_08A0B3D8;
    }
L_08A0B3D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B204;
      }
      goto L_08A0B3E0;
    }
L_08A0B3E0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B400:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(18))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A0B44C;
      }
      goto L_08A0B42C;
    }
L_08A0B42C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B450;
    }
    goto L_08A0B438;
L_08A0B438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20936));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B504;
      }
      goto L_08A0B44C;
    }
L_08A0B44C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B450;
L_08A0B450:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B47C;
    }
    goto L_08A0B458;
L_08A0B458:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_08A0B47C;
    }
    goto L_08A0B464;
L_08A0B464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24980));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B504;
      }
      goto L_08A0B478;
    }
L_08A0B478:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    goto L_08A0B47C;
L_08A0B47C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B4A4;
      }
      goto L_08A0B484;
    }
L_08A0B484:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B4A4;
      }
      goto L_08A0B490;
    }
L_08A0B490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-24076));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B504;
      }
      goto L_08A0B4A4;
    }
L_08A0B4A4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A0B4B0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A0A708;
L_08A0B4B0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0B4FC;
      }
      goto L_08A0B4BC;
    }
L_08A0B4BC:
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2100));
      if (branch_taken) {
          goto L_08A0B5B4;
      }
      goto L_08A0B4E0;
    }
L_08A0B4E0:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(1072)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B728;
      }
      goto L_08A0B504;
    }
L_08A0B504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B728;
      }
      goto L_08A0B50C;
    }
L_08A0B50C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B54C;
      }
      goto L_08A0B518;
    }
L_08A0B518:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(16))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B54C;
      }
      goto L_08A0B524;
    }
L_08A0B524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2209u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25068));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0B54C;
      }
      goto L_08A0B538;
    }
L_08A0B538:
    ctx.gpr[31] = (0x08A0B540u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A09410;
L_08A0B540:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 7 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
        goto L_08A0B560;
    }
    goto L_08A0B54C;
L_08A0B54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (0x08A0B558u);
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.pc = 0x08B0B71Cu;
    return;
L_08A0B558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B5B4;
      }
      goto L_08A0B560;
    }
L_08A0B560:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(5), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A0B5A4u);
    ctx.gpr[7] = (0u | 0u);
    ctx.pc = 0x08B0B714u;
    return;
L_08A0B5A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A0B5B4;
      }
      goto L_08A0B5AC;
    }
L_08A0B5AC:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_08A0B5B4;
L_08A0B5B4:
    ctx.gpr[31] = (0x08A0B5BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A0A958;
L_08A0B5BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B728;
      }
      goto L_08A0B5C4;
    }
L_08A0B5C4:
    ctx.gpr[5] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(18))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(20))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(4))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(5))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(22));
    ctx.gpr[31] = (0x08A0B668u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A0914C;
L_08A0B668:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A0B678u);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = 0x08B0B724u;
    return;
L_08A0B678:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B5B4;
      }
      goto L_08A0B680;
    }
L_08A0B680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0B698;
      }
      goto L_08A0B690;
    }
L_08A0B690:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A0B5B4;
      }
      goto L_08A0B698;
    }
L_08A0B698:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A0B6B0;
      }
      goto L_08A0B6A8;
    }
L_08A0B6A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B5B4;
      }
      goto L_08A0B6B0;
    }
L_08A0B6B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 255u);
      if (branch_taken) {
          goto L_08A0B718;
      }
      goto L_08A0B6C0;
    }
L_08A0B6C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(33), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(28))))));
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[6]));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A0B718u);
    ctx.gpr[5] = (0u | 136u);
    ctx.pc = 0x08B0B724u;
    return;
L_08A0B718:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), 0u);
      if (branch_taken) {
          goto L_08A0B5B4;
      }
      goto L_08A0B720;
    }
L_08A0B720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B5B4;
      }
      goto L_08A0B728;
    }
L_08A0B728:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B744:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15084)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] | 14571u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15088)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-15060)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-15080), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[9] = (2277u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[9] + static_cast<std::uint32_t>(21568));
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-15072), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-15076), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (15744u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[2] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-15068), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[3] = (2229u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-15064), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0B7F4u);
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-15056), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 239u, 0x08A7D51Cu>(ctx, &aot_mem) && ctx.pc == 0x08A0B7F4u) goto L_08A0B7F4;
    return;
L_08A0B7F4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8868));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x08A0B814u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-15052));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 261u, 0x08AF5504u>(ctx, &aot_mem) && ctx.pc == 0x08A0B814u) goto L_08A0B814;
    return;
L_08A0B814:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 36u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(21624));
    ctx.gpr[31] = (0x08A0B830u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1112));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 553u, 0x0886AF04u>(ctx, &aot_mem) && ctx.pc == 0x08A0B830u) goto L_08A0B830;
    return;
L_08A0B830:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B850:
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
L_08A0B87C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(25896)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A0B8A8;
      }
      goto L_08A0B898;
    }
L_08A0B898:
    ctx.gpr[5] = (72u << 16u);
    ctx.gpr[4] = (0u | 4587u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21504));
      if (branch_taken) {
          goto L_08A0B8F0;
      }
      goto L_08A0B8A8;
    }
L_08A0B8A8:
    ctx.gpr[31] = (0x08A0B8B0u);
    // nop
    ctx.pc = 0x08B0BCD4u;
    return;
L_08A0B8B0:
    ctx.gpr[4] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0B8D8;
      }
      goto L_08A0B8C0;
    }
L_08A0B8C0:
    ctx.gpr[31] = (0x08A0B8C8u);
    // nop
    ctx.pc = 0x08B0BCD4u;
    return;
L_08A0B8C8:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[5] >> 10u);
      if (branch_taken) {
          goto L_08A0B8F0;
      }
      goto L_08A0B8D8;
    }
L_08A0B8D8:
    ctx.gpr[31] = (0x08A0B8E0u);
    // nop
    ctx.pc = 0x08B0BCD4u;
    return;
L_08A0B8E0:
    ctx.gpr[4] = (6u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(14336));
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] >> 10u);
    goto L_08A0B8F0;
L_08A0B8F0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A0B918u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1128));
    ctx.pc = 0x08B0BC8Cu;
    return;
L_08A0B918:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(300), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A0B92Cu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BC9Cu;
    return;
L_08A0B92C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A0B940u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 682u, 0x08AA32FCu>(ctx, &aot_mem) && ctx.pc == 0x08A0B940u) goto L_08A0B940;
    return;
L_08A0B940:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (0x08A0B95Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1144));
    goto L_08A0B850;
L_08A0B95C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B96C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0B980u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 681u, 0x08AA32D4u>(ctx, &aot_mem) && ctx.pc == 0x08A0B980u) goto L_08A0B980;
    return;
L_08A0B980:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(296), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B998:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0B9ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    goto L_08A0B96C;
L_08A0B9AC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B9B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0B9DCu);
    ctx.gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 390u, 0x08AED5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A0B9DCu) goto L_08A0B9DC;
    return;
L_08A0B9DC:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0B9F8:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(12));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(76), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(62))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(78), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(80), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(66)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(82), static_cast<std::uint8_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BAA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BAD0;
    }
L_08A0BAD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BAE0;
    }
L_08A0BAE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BAF0;
    }
L_08A0BAF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A0BB24;
      }
      goto L_08A0BB08;
    }
L_08A0BB08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A0BB28;
      }
      goto L_08A0BB20;
    }
L_08A0BB20:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A0BB24;
L_08A0BB24:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A0BB28;
L_08A0BB28:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BB30;
    }
L_08A0BB30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BB48;
    }
L_08A0BB48:
    ctx.gpr[31] = (0x08A0BB50u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 558u, 0x089274C8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BB50u) goto L_08A0BB50;
    return;
L_08A0BB50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BB58;
    }
L_08A0BB58:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BB68;
    }
L_08A0BB68:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(66)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BB78;
    }
L_08A0BB78:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(67)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(67)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BB88;
    }
L_08A0BB88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BB98;
    }
L_08A0BB98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BBB0;
    }
L_08A0BBB0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(76))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(76))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BBC0;
    }
L_08A0BBC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(78))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(78))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BBD0;
    }
L_08A0BBD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(80))))));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(80))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BBE0;
    }
L_08A0BBE0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(69)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(69)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A0BBF4;
      }
      goto L_08A0BBF0;
    }
L_08A0BBF0:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A0BBF4;
L_08A0BBF4:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_08A0BC10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0BC24u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 667u, 0x08AC3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC24u) goto L_08A0BC24;
    return;
L_08A0BC24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16100));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BC4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0BC6Cu);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 667u, 0x08AC3EE8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC6Cu) goto L_08A0BC6C;
    return;
L_08A0BC6C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16100));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0BC80u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 698u, 0x08967198u>(ctx, &aot_mem) && ctx.pc == 0x08A0BC80u) goto L_08A0BC80;
    return;
L_08A0BC80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A0BC9Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A0BC9Cu) goto L_08A0BC9C;
    return;
L_08A0BC9C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0BCB0u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0BCB0u) goto L_08A0BCB0;
    return;
L_08A0BCB0:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08A0BCC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08A0BCC0u) goto L_08A0BCC0;
    return;
L_08A0BCC0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A0BCF4;
      }
      goto L_08A0BCCC;
    }
L_08A0BCCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A0BCF0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0B9F8;
L_08A0BCF0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0BCF4;
L_08A0BCF4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0BD04u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 147u, 0x08AC5138u>(ctx, &aot_mem) && ctx.pc == 0x08A0BD04u) goto L_08A0BD04;
    return;
L_08A0BD04:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
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
L_08A0BD20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A0BD8C;
      }
      goto L_08A0BD3C;
    }
L_08A0BD3C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16100));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0BD50u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 21u, 0x08A0C494u>(ctx, &aot_mem) && ctx.pc == 0x08A0BD50u) goto L_08A0BD50;
    return;
L_08A0BD50:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A0BD7C;
      }
      goto L_08A0BD58;
    }
L_08A0BD58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8772));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A0BD6Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 115u, 0x08AC4DBCu>(ctx, &aot_mem) && ctx.pc == 0x08A0BD6Cu) goto L_08A0BD6C;
    return;
L_08A0BD6C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A0BD78u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 7u, 0x08AC4044u>(ctx, &aot_mem) && ctx.pc == 0x08A0BD78u) goto L_08A0BD78;
    return;
L_08A0BD78:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_08A0BD7C;
L_08A0BD7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BD8C;
      }
      goto L_08A0BD84;
    }
L_08A0BD84:
    ctx.gpr[31] = (0x08A0BD8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x08A0BD8Cu) goto L_08A0BD8C;
    return;
L_08A0BD8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BDA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0BDBCu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 36u, 0x08AC43FCu>(ctx, &aot_mem) && ctx.pc == 0x08A0BDBCu) goto L_08A0BDBC;
    return;
L_08A0BDBC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BE14;
      }
      goto L_08A0BDE4;
    }
L_08A0BDE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(32))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(16))))));
    ctx.gpr[31] = (0x08A0BDFCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 222u, 0x08AC5938u>(ctx, &aot_mem) && ctx.pc == 0x08A0BDFCu) goto L_08A0BDFC;
    return;
L_08A0BDFC:
    ctx.gpr[5] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A0BE1C;
      }
      goto L_08A0BE0C;
    }
L_08A0BE0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BF1C;
      }
      goto L_08A0BE14;
    }
L_08A0BE14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BF30;
      }
      goto L_08A0BE1C;
    }
L_08A0BE1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (2277u << 16u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22240));
      if (branch_taken) {
          goto L_08A0BE74;
      }
      goto L_08A0BE30;
    }
L_08A0BE30:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), 0u);
    goto L_08A0BE34;
L_08A0BE34:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BE74;
      }
      goto L_08A0BE54;
    }
L_08A0BE54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 75 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A0BE74;
      }
      goto L_08A0BE64;
    }
L_08A0BE64:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A0BE34;
      }
      goto L_08A0BE74;
    }
L_08A0BE74:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (ctx.gpr[6] << 6u);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(48), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(51)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(60))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(60), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(62))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(64))))));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(66)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A0BF30;
      }
      goto L_08A0BF1C;
    }
L_08A0BF1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A0BF30;
      }
      goto L_08A0BF28;
    }
L_08A0BF28:
    ctx.gpr[31] = (0x08A0BF30u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 21u, 0x08A0C494u>(ctx, &aot_mem) && ctx.pc == 0x08A0BF30u) goto L_08A0BF30;
    return;
L_08A0BF30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A0BF40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(48))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A0BF70u);
    ctx.gpr[4] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 745u, 0x089C71ACu>(ctx, &aot_mem) && ctx.pc == 0x08A0BF70u) goto L_08A0BF70;
    return;
L_08A0BF70:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 96u);
    ctx.gpr[31] = (0x08A0BF80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26768));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 698u, 0x08AA3474u>(ctx, &aot_mem) && ctx.pc == 0x08A0BF80u) goto L_08A0BF80;
    return;
L_08A0BF80:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A0BFB4;
      }
      goto L_08A0BF8C;
    }
L_08A0BF8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22240));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A0BFB0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0B9F8;
L_08A0BFB0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A0BFB4;
L_08A0BFB4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A0BFC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 147u, 0x08AC5138u>(ctx, &aot_mem) && ctx.pc == 0x08A0BFC4u) goto L_08A0BFC4;
    return;
L_08A0BFC4:
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
L_08A0BFDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.pc = 0x08A0C000u; return;
}

void recomp_unit_0129(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0129_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_129(Runtime &runtime) {
    runtime.register_generated_unit(129u, 0x08A08000u, 16384u, &recomp_unit_0129, &recomp_unit_0129_entry);
    runtime.register_function(0x08A08000u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0801Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08034u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08050u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08058u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0806Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0807Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08088u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0809Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A080FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08128u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08140u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08150u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08154u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A081F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08200u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08220u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08238u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08248u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08250u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08260u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08268u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0828Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08294u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A082F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08300u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0830Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08314u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0831Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08324u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08338u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08340u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08348u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08350u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08358u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08360u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08368u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08370u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0837Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08384u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0838Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08394u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A083B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A083C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08424u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08428u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08480u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0848Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A084FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08508u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0851Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08524u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0852Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08534u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0853Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0854Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08560u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08570u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0857Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08590u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0859Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A085E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08604u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08614u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08620u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08634u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08640u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08648u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08668u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08670u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08684u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08694u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A086E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08700u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08728u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0874Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08754u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08760u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08774u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08784u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08794u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08798u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0879Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A087F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0880Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0881Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08828u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0883Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08848u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08850u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0886Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08884u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A088F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08904u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08914u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08920u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08934u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08940u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08948u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08968u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08984u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0899Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A089DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08A9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08AF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08B9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BB8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08BF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08C9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08CFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D30u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08D9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08DECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08E9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08ED4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08EF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08F98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A08FFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09004u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09040u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09054u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09064u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09074u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09078u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0907Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09084u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09094u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0909Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A090E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09100u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09108u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09118u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09120u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09130u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0914Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09158u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0916Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0917Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0918Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09190u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09194u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0919Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A091CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A091DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A091E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09204u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0920Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09220u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09228u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0924Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09254u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0925Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09270u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09294u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A092E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09304u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0930Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09314u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0931Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09328u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09330u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09348u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09360u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09368u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09374u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A093ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09400u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09408u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09410u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09440u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0944Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09480u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09490u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A094F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09530u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0953Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09570u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09580u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09590u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09594u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09598u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A095F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09600u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0962Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09650u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09658u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0965Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0967Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09684u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09694u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A096C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A096D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A096F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09714u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09728u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09734u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09740u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09748u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09754u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09760u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09768u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09770u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09828u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09840u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09858u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A098F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09924u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0992Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09934u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0994Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09954u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09968u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09978u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09990u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09998u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A099F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09A88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09ABCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09AF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09B9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09BFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09C68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09CC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09D94u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09DF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09E8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09ED4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09EF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F90u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09F9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FE8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A09FF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A004u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A018u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A024u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A02Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A03Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A044u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A054u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A05Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A064u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A070u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A078u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A090u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0D4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A0F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A100u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A114u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A124u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A130u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A144u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A150u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A158u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A160u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A168u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A17Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A18Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A198u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A1FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A21Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A224u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A22Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A23Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A254u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A264u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A270u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A284u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A290u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A2F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A330u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A340u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A34Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A354u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A364u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A374u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A388u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A3F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A418u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A434u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A444u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A454u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A464u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A46Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A474u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A488u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A498u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A4CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A508u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A510u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A52Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A53Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A548u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A55Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A568u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A570u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A590u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A598u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A5F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A61Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A634u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A654u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A670u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A67Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A688u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A694u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A6F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A708u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A738u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A748u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A754u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A75Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A76Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A774u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A788u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A790u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A798u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7CCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A7F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A82Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A874u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A884u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A894u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A898u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A89Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A8C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A910u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A934u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A94Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A958u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A96Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A978u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0A9ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA5Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AA8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AAF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AB8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABC8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ABF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC18u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AC48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACD8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ACF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD00u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD44u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AD64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADDCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0ADE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE38u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AE8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AEA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF2Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF60u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AF84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFA8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFD4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0AFF8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B010u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B01Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B028u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B030u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B040u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B054u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B064u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B070u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B084u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B090u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0E8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B0F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B108u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B10Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B114u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B120u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B134u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B138u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B140u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B14Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B160u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B164u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B16Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B178u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B18Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B198u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1E4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1ECu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B1F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B204u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B20Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B214u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B258u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B264u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B278u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B2C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B304u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B30Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B318u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B31Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B324u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B32Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B38Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B398u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3A0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3D0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B3E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B400u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B42Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B438u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B44Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B450u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B458u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B464u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B478u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B47Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B484u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B490u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B4FCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B504u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B50Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B518u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B524u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B538u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B540u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B54Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B558u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B560u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5A4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5B4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5BCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B5C4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B668u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B678u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B680u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B690u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B698u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B6A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B6B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B6C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B718u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B720u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B728u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B744u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B7F4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B814u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B830u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B850u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B87Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B898u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8A8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8B0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8C0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8C8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8D8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8E0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B8F0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B918u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B92Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B940u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B95Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B96Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B980u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B998u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9ACu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9B8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9DCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0B9F8u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAA4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BAF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB08u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB30u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB48u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB68u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB88u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BB98u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBD0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBE0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BBF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC10u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC24u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC4Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BC9Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCC0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCCCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCF0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BCF4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD04u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD20u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD3Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD50u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD58u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD6Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD78u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD7Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD84u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BD8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BDA0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BDBCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BDE4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BDFCu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE0Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE14u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE30u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE34u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE54u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE64u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BE74u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF1Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF28u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF30u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF40u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF70u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF80u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BF8Cu, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFB0u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFB4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFC4u, &recomp_unit_0129, "recomp_unit_0129");
    runtime.register_function(0x08A0BFDCu, &recomp_unit_0129, "recomp_unit_0129");
}
} // namespace psprecomp
