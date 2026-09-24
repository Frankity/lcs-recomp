#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0115[4090] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 3, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 7, 0, 0,
    8, 0, 9, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 13, 0, 0, 14, 0, 0, 0, 15, 0, 0, 0, 16, 0, 17,
    0, 0, 0, 18, 0, 0, 0, 19, 0, 20, 0, 21, 0, 22, 0, 23, 0, 0, 24, 0, 0, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0,
    27, 0, 0, 28, 0, 29, 0, 0, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 31, 0, 0, 32, 0, 0, 0,
    33, 0, 34, 0, 35, 0, 0, 0, 36, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 0, 0, 40, 0, 0, 41, 0, 42, 0, 0, 0, 0, 0,
    43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 0, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 48, 0, 0, 49, 0, 50, 0,
    51, 0, 0, 52, 0, 53, 0, 54, 0, 55, 0, 0, 56, 0, 57, 0, 0, 58, 0, 0, 0, 59, 0, 0, 0, 60, 0, 61, 0, 62, 0, 0,
    0, 63, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 67, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 70, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 71, 0, 0, 72, 0, 0, 73, 0, 74, 0, 75, 0, 0, 0, 0, 0, 76, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0,
    0, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0, 87, 0, 88, 0, 89, 0, 0, 0, 90, 0, 91, 0, 92, 0,
    93, 0, 0, 0, 0, 94, 0, 95, 0, 0, 96, 0, 0, 0, 0, 97, 0, 0, 98, 0, 0, 99, 0, 100, 0, 101, 0, 102, 103, 0, 104, 0,
    0, 105, 0, 0, 106, 0, 0, 107, 0, 0, 0, 0, 0, 108, 0, 109, 0, 110, 0, 111, 0, 112, 0, 0, 0, 0, 0, 113, 0, 114, 0, 115,
    0, 116, 0, 117, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 125, 126, 0, 127, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 130, 0, 0, 0, 131, 0, 132, 0, 0, 0, 133, 0, 0, 0, 134, 0,
    135, 0, 0, 136, 137, 0, 138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 143, 0, 0, 0, 144, 0, 0, 0, 0, 0,
    145, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0,
    0, 0, 151, 0, 152, 153, 0, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 155, 0, 156, 0, 157, 0, 0, 0, 0, 158, 0, 0, 0, 0, 0,
    0, 0, 159, 160, 0, 0, 161, 0, 0, 0, 162, 0, 163, 0, 0, 0, 164, 0, 165, 0, 0, 166, 0, 167, 0, 0, 0, 0, 0, 168, 0, 0,
    169, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 0, 0, 0, 173, 0, 0, 174, 0,
    175, 0, 0, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 0, 181, 0, 0, 182, 0, 0, 183, 0,
    0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 0, 0, 188, 0, 189, 190, 0, 0, 0, 191, 0, 0, 0,
    192, 0, 0, 0, 0, 0, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 195, 0, 196, 0, 0, 197, 0, 0, 198, 0, 0, 0,
    0, 199, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 200, 0, 201, 0, 0, 202, 0, 0, 0, 0, 203, 0, 0, 0, 204, 0,
    205, 0, 0, 0, 206, 0, 0, 0, 207, 0, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    212, 0, 0, 0, 0, 0, 213, 0, 0, 214, 0, 215, 0, 0, 216, 0, 0, 217, 0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 0, 0, 221, 0,
    0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 232, 0, 233, 0, 0, 0, 0, 234, 0, 0,
    235, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 242, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 0, 246, 0, 0, 247,
    0, 248, 0, 0, 0, 0, 0, 249, 0, 250, 0, 0, 0, 0, 251, 252, 0, 0, 253, 0, 254, 0, 255, 0, 256, 0, 0, 257, 0, 258, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0,
    0, 263, 0, 264, 0, 0, 265, 0, 266, 0, 0, 267, 0, 268, 0, 269, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 272, 0, 0,
    273, 0, 0, 274, 0, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 282, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 286,
    0, 287, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 293, 0, 0,
    0, 0, 0, 0, 0, 0, 294, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 299, 0, 300,
    0, 301, 0, 302, 0, 0, 303, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 0, 0, 0,
    309, 0, 0, 310, 0, 0, 311, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 314, 0,
    0, 0, 315, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 323, 0, 0, 324, 0, 325,
    0, 326, 0, 327, 0, 0, 0, 328, 329, 0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0,
    0, 0, 333, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 336, 0, 0, 337, 0, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0, 343, 0, 0,
    344, 0, 345, 0, 0, 346, 0, 347, 0, 0, 348, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 0, 352, 0, 0, 0, 0, 0, 353, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 356, 0, 0, 357, 0, 0, 358, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 0, 0, 363, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 369, 0, 370, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0,
    372, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0, 374, 0, 375, 0, 0, 0, 376, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0, 0,
    0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 0, 0, 387, 388, 0, 0, 0,
    0, 0, 389, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 393, 0, 0, 0, 394, 0, 395,
    0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 399, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 402, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0, 405, 0, 0, 406, 0, 407, 0, 408, 0, 409, 0, 0, 0, 0, 410, 0, 411, 0,
    0, 412, 0, 413, 0, 0, 414, 0, 415, 0, 0, 416, 0, 417, 0, 418, 0, 0, 419, 0, 420, 0, 421, 0, 422, 0, 423, 0, 424, 0, 425, 0,
    426, 0, 427, 0, 428, 0, 429, 430, 0, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 432, 0, 0, 0, 433, 0, 434, 0, 435,
    0, 436, 0, 437, 0, 0, 0, 438, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 0, 0, 0, 443, 0, 0, 444, 0, 0, 445, 0, 0, 446, 0,
    0, 447, 0, 0, 448, 0, 449, 0, 0, 450, 0, 0, 0, 451, 0, 0, 452, 0, 0, 453, 0, 454, 0, 455, 0, 456, 0, 0, 457, 0, 0, 458,
    0, 459, 0, 0, 460, 0, 461, 0, 0, 462, 0, 0, 463, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 467, 0, 0, 468, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 475, 0, 0, 0, 0, 0, 476, 477, 0, 0, 0, 478, 0, 479, 0, 0, 480, 0, 481, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 482, 0, 0, 0, 483, 0, 0, 484, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 487, 0, 0, 488, 0,
    489, 0, 0, 490, 0, 491, 0, 0, 0, 0, 492, 0, 493, 0, 494, 0, 0, 0, 495, 0, 0, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0,
    0, 0, 505, 506, 0, 0, 507, 0, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 0, 512,
    513, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 520, 521, 0, 0, 0, 0,
    522, 0, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 524, 0, 0, 0,
    525, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0,
    0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 0, 0, 529, 0, 530, 0, 531, 0, 0, 0, 532, 0, 0, 533,
    0, 534, 535, 0, 536, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 540, 0,
    541, 542, 0, 543, 0, 544, 545, 0, 0, 0, 0, 0, 0, 546, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548,
    0, 0, 549, 0, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 553, 0, 554, 0, 555, 0, 556, 0, 0, 0, 0,
    0, 557, 0, 0, 558, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0,
    563, 0, 564, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0,
    0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 571, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 575, 576, 0, 0, 577, 0,
    0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 581, 0, 0, 0, 582, 583, 0, 0, 584,
    0, 0, 585, 0, 0, 586, 0, 0, 587, 0, 0, 0, 588, 589, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 0, 592, 0, 0, 0,
    593, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 0, 0, 0, 0, 0, 598, 599, 0, 600, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 601, 0,
    0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 606, 0, 0, 607, 0, 0, 0, 608, 609, 0, 0, 0, 0, 0, 0,
    610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 0, 0, 0, 0,
    0, 0, 616, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 617, 0, 0, 618, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0,
    0, 0, 622, 0, 0, 623, 0, 624, 625, 0, 0, 626, 0, 0, 0, 627, 628, 0, 0, 0, 629, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0,
    0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 0, 637,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 640, 0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 652, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 654, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 656, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0,
    659, 0, 0, 660, 0, 0, 0, 0, 661, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 0, 0, 667, 0,
    668, 0, 0, 669, 0, 670, 0, 0, 671, 672, 0, 673, 0, 0, 0, 0, 674, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 678, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0,
    0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0,
    0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0,
    0, 694, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 0, 0, 0,
    0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0,
    0, 700, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0, 0, 0, 0, 0, 0, 0, 706, 0, 0,
    0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 0, 712,
    0, 0, 0, 0, 0, 713, 0, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0,
    0, 719, 0, 0, 0, 720, 0, 0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0,
    0, 0, 723, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 731,
    0, 732, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 734, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 737, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 743, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 752, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 0, 754,
    0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 763, 0, 0, 0, 0, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 766, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 775, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 776, 0, 0, 0, 777,
};
void recomp_unit_0115_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089D0000u;
        entry_id = (entry_delta < 16360u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0115[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089D0000;
    case 2u: goto L_089D0038;
    case 3u: goto L_089D0044;
    case 4u: goto L_089D004C;
    case 5u: goto L_089D005C;
    case 6u: goto L_089D006C;
    case 7u: goto L_089D0074;
    case 8u: goto L_089D0080;
    case 9u: goto L_089D0088;
    case 10u: goto L_089D0098;
    case 11u: goto L_089D00A8;
    case 12u: goto L_089D00BC;
    case 13u: goto L_089D00C8;
    case 14u: goto L_089D00D4;
    case 15u: goto L_089D00E4;
    case 16u: goto L_089D00F4;
    case 17u: goto L_089D00FC;
    case 18u: goto L_089D010C;
    case 19u: goto L_089D011C;
    case 20u: goto L_089D0124;
    case 21u: goto L_089D012C;
    case 22u: goto L_089D0134;
    case 23u: goto L_089D013C;
    case 24u: goto L_089D0148;
    case 25u: goto L_089D0158;
    case 26u: goto L_089D0170;
    case 27u: goto L_089D0180;
    case 28u: goto L_089D018C;
    case 29u: goto L_089D0194;
    case 30u: goto L_089D01B8;
    case 31u: goto L_089D01E4;
    case 32u: goto L_089D01F0;
    case 33u: goto L_089D0200;
    case 34u: goto L_089D0208;
    case 35u: goto L_089D0210;
    case 36u: goto L_089D0220;
    case 37u: goto L_089D0228;
    case 38u: goto L_089D0234;
    case 39u: goto L_089D0240;
    case 40u: goto L_089D0254;
    case 41u: goto L_089D0260;
    case 42u: goto L_089D0268;
    case 43u: goto L_089D0280;
    case 44u: goto L_089D02A8;
    case 45u: goto L_089D02B8;
    case 46u: goto L_089D02C4;
    case 47u: goto L_089D02CC;
    case 48u: goto L_089D02E4;
    case 49u: goto L_089D02F0;
    case 50u: goto L_089D02F8;
    case 51u: goto L_089D0300;
    case 52u: goto L_089D030C;
    case 53u: goto L_089D0314;
    case 54u: goto L_089D031C;
    case 55u: goto L_089D0324;
    case 56u: goto L_089D0330;
    case 57u: goto L_089D0338;
    case 58u: goto L_089D0344;
    case 59u: goto L_089D0354;
    case 60u: goto L_089D0364;
    case 61u: goto L_089D036C;
    case 62u: goto L_089D0374;
    case 63u: goto L_089D0384;
    case 64u: goto L_089D0394;
    case 65u: goto L_089D03A0;
    case 66u: goto L_089D03A8;
    case 67u: goto L_089D03B4;
    case 68u: goto L_089D03C0;
    case 69u: goto L_089D03C8;
    case 70u: goto L_089D03E4;
    case 71u: goto L_089D040C;
    case 72u: goto L_089D0418;
    case 73u: goto L_089D0424;
    case 74u: goto L_089D042C;
    case 75u: goto L_089D0434;
    case 76u: goto L_089D044C;
    case 77u: goto L_089D0458;
    case 78u: goto L_089D0468;
    case 79u: goto L_089D0470;
    case 80u: goto L_089D0478;
    case 81u: goto L_089D0488;
    case 82u: goto L_089D0490;
    case 83u: goto L_089D0498;
    case 84u: goto L_089D04A8;
    case 85u: goto L_089D04B0;
    case 86u: goto L_089D04B8;
    case 87u: goto L_089D04C8;
    case 88u: goto L_089D04D0;
    case 89u: goto L_089D04D8;
    case 90u: goto L_089D04E8;
    case 91u: goto L_089D04F0;
    case 92u: goto L_089D04F8;
    case 93u: goto L_089D0500;
    case 94u: goto L_089D0514;
    case 95u: goto L_089D051C;
    case 96u: goto L_089D0528;
    case 97u: goto L_089D053C;
    case 98u: goto L_089D0548;
    case 99u: goto L_089D0554;
    case 100u: goto L_089D055C;
    case 101u: goto L_089D0564;
    case 102u: goto L_089D056C;
    case 103u: goto L_089D0570;
    case 104u: goto L_089D0578;
    case 105u: goto L_089D0584;
    case 106u: goto L_089D0590;
    case 107u: goto L_089D059C;
    case 108u: goto L_089D05B4;
    case 109u: goto L_089D05BC;
    case 110u: goto L_089D05C4;
    case 111u: goto L_089D05CC;
    case 112u: goto L_089D05D4;
    case 113u: goto L_089D05EC;
    case 114u: goto L_089D05F4;
    case 115u: goto L_089D05FC;
    case 116u: goto L_089D0604;
    case 117u: goto L_089D060C;
    case 118u: goto L_089D0614;
    case 119u: goto L_089D061C;
    case 120u: goto L_089D0624;
    case 121u: goto L_089D062C;
    case 122u: goto L_089D0634;
    case 123u: goto L_089D063C;
    case 124u: goto L_089D0644;
    case 125u: goto L_089D064C;
    case 126u: goto L_089D0650;
    case 127u: goto L_089D0658;
    case 128u: goto L_089D06A8;
    case 129u: goto L_089D06B8;
    case 130u: goto L_089D06C0;
    case 131u: goto L_089D06D0;
    case 132u: goto L_089D06D8;
    case 133u: goto L_089D06E8;
    case 134u: goto L_089D06F8;
    case 135u: goto L_089D0700;
    case 136u: goto L_089D070C;
    case 137u: goto L_089D0710;
    case 138u: goto L_089D0718;
    case 139u: goto L_089D0724;
    case 140u: goto L_089D072C;
    case 141u: goto L_089D0740;
    case 142u: goto L_089D0748;
    case 143u: goto L_089D0758;
    case 144u: goto L_089D0768;
    case 145u: goto L_089D0780;
    case 146u: goto L_089D0788;
    case 147u: goto L_089D07C4;
    case 148u: goto L_089D07D4;
    case 149u: goto L_089D07E0;
    case 150u: goto L_089D07F0;
    case 151u: goto L_089D0808;
    case 152u: goto L_089D0810;
    case 153u: goto L_089D0814;
    case 154u: goto L_089D081C;
    case 155u: goto L_089D0844;
    case 156u: goto L_089D084C;
    case 157u: goto L_089D0854;
    case 158u: goto L_089D0868;
    case 159u: goto L_089D0888;
    case 160u: goto L_089D088C;
    case 161u: goto L_089D0898;
    case 162u: goto L_089D08A8;
    case 163u: goto L_089D08B0;
    case 164u: goto L_089D08C0;
    case 165u: goto L_089D08C8;
    case 166u: goto L_089D08D4;
    case 167u: goto L_089D08DC;
    case 168u: goto L_089D08F4;
    case 169u: goto L_089D0900;
    case 170u: goto L_089D0910;
    case 171u: goto L_089D0950;
    case 172u: goto L_089D095C;
    case 173u: goto L_089D096C;
    case 174u: goto L_089D0978;
    case 175u: goto L_089D0980;
    case 176u: goto L_089D0994;
    case 177u: goto L_089D09A4;
    case 178u: goto L_089D09B4;
    case 179u: goto L_089D09C4;
    case 180u: goto L_089D09D4;
    case 181u: goto L_089D09E0;
    case 182u: goto L_089D09EC;
    case 183u: goto L_089D09F8;
    case 184u: goto L_089D0A0C;
    case 185u: goto L_089D0A1C;
    case 186u: goto L_089D0A34;
    case 187u: goto L_089D0A44;
    case 188u: goto L_089D0A54;
    case 189u: goto L_089D0A5C;
    case 190u: goto L_089D0A60;
    case 191u: goto L_089D0A70;
    case 192u: goto L_089D0A80;
    case 193u: goto L_089D0AA4;
    case 194u: goto L_089D0AC0;
    case 195u: goto L_089D0AD0;
    case 196u: goto L_089D0AD8;
    case 197u: goto L_089D0AE4;
    case 198u: goto L_089D0AF0;
    case 199u: goto L_089D0B04;
    case 200u: goto L_089D0B40;
    case 201u: goto L_089D0B48;
    case 202u: goto L_089D0B54;
    case 203u: goto L_089D0B68;
    case 204u: goto L_089D0B78;
    case 205u: goto L_089D0B80;
    case 206u: goto L_089D0B90;
    case 207u: goto L_089D0BA0;
    case 208u: goto L_089D0BB4;
    case 209u: goto L_089D0BC4;
    case 210u: goto L_089D0BD4;
    case 211u: goto L_089D0BD8;
    case 212u: goto L_089D0C00;
    case 213u: goto L_089D0C18;
    case 214u: goto L_089D0C24;
    case 215u: goto L_089D0C2C;
    case 216u: goto L_089D0C38;
    case 217u: goto L_089D0C44;
    case 218u: goto L_089D0C50;
    case 219u: goto L_089D0C60;
    case 220u: goto L_089D0C68;
    case 221u: goto L_089D0C78;
    case 222u: goto L_089D0C88;
    case 223u: goto L_089D0C98;
    case 224u: goto L_089D0CA8;
    case 225u: goto L_089D0CBC;
    case 226u: goto L_089D0CC4;
    case 227u: goto L_089D0CD4;
    case 228u: goto L_089D0CE0;
    case 229u: goto L_089D0D10;
    case 230u: goto L_089D0D3C;
    case 231u: goto L_089D0D50;
    case 232u: goto L_089D0D58;
    case 233u: goto L_089D0D60;
    case 234u: goto L_089D0D74;
    case 235u: goto L_089D0D80;
    case 236u: goto L_089D0D90;
    case 237u: goto L_089D0D98;
    case 238u: goto L_089D0DB4;
    case 239u: goto L_089D0DD4;
    case 240u: goto L_089D0DE4;
    case 241u: goto L_089D0DFC;
    case 242u: goto L_089D0E40;
    case 243u: goto L_089D0E4C;
    case 244u: goto L_089D0E5C;
    case 245u: goto L_089D0E64;
    case 246u: goto L_089D0E70;
    case 247u: goto L_089D0E7C;
    case 248u: goto L_089D0E84;
    case 249u: goto L_089D0E9C;
    case 250u: goto L_089D0EA4;
    case 251u: goto L_089D0EB8;
    case 252u: goto L_089D0EBC;
    case 253u: goto L_089D0EC8;
    case 254u: goto L_089D0ED0;
    case 255u: goto L_089D0ED8;
    case 256u: goto L_089D0EE0;
    case 257u: goto L_089D0EEC;
    case 258u: goto L_089D0EF4;
    case 259u: goto L_089D0F1C;
    case 260u: goto L_089D0F50;
    case 261u: goto L_089D0F64;
    case 262u: goto L_089D0F78;
    case 263u: goto L_089D0F84;
    case 264u: goto L_089D0F8C;
    case 265u: goto L_089D0F98;
    case 266u: goto L_089D0FA0;
    case 267u: goto L_089D0FAC;
    case 268u: goto L_089D0FB4;
    case 269u: goto L_089D0FBC;
    case 270u: goto L_089D0FCC;
    case 271u: goto L_089D0FE0;
    case 272u: goto L_089D0FF4;
    case 273u: goto L_089D1000;
    case 274u: goto L_089D100C;
    case 275u: goto L_089D1024;
    case 276u: goto L_089D102C;
    case 277u: goto L_089D1044;
    case 278u: goto L_089D1064;
    case 279u: goto L_089D10A4;
    case 280u: goto L_089D10B8;
    case 281u: goto L_089D10CC;
    case 282u: goto L_089D10D0;
    case 283u: goto L_089D10D8;
    case 284u: goto L_089D10E0;
    case 285u: goto L_089D10E8;
    case 286u: goto L_089D10FC;
    case 287u: goto L_089D1104;
    case 288u: goto L_089D1110;
    case 289u: goto L_089D1124;
    case 290u: goto L_089D1138;
    case 291u: goto L_089D1144;
    case 292u: goto L_089D115C;
    case 293u: goto L_089D1174;
    case 294u: goto L_089D1198;
    case 295u: goto L_089D11C8;
    case 296u: goto L_089D11D0;
    case 297u: goto L_089D11D8;
    case 298u: goto L_089D11E8;
    case 299u: goto L_089D11F4;
    case 300u: goto L_089D11FC;
    case 301u: goto L_089D1204;
    case 302u: goto L_089D120C;
    case 303u: goto L_089D1218;
    case 304u: goto L_089D1220;
    case 305u: goto L_089D1230;
    case 306u: goto L_089D1244;
    case 307u: goto L_089D124C;
    case 308u: goto L_089D1264;
    case 309u: goto L_089D1280;
    case 310u: goto L_089D128C;
    case 311u: goto L_089D1298;
    case 312u: goto L_089D12A0;
    case 313u: goto L_089D12B4;
    case 314u: goto L_089D12F8;
    case 315u: goto L_089D1308;
    case 316u: goto L_089D1310;
    case 317u: goto L_089D1320;
    case 318u: goto L_089D132C;
    case 319u: goto L_089D1338;
    case 320u: goto L_089D1344;
    case 321u: goto L_089D1350;
    case 322u: goto L_089D1358;
    case 323u: goto L_089D1368;
    case 324u: goto L_089D1374;
    case 325u: goto L_089D137C;
    case 326u: goto L_089D1384;
    case 327u: goto L_089D138C;
    case 328u: goto L_089D139C;
    case 329u: goto L_089D13A0;
    case 330u: goto L_089D13AC;
    case 331u: goto L_089D13C0;
    case 332u: goto L_089D13E4;
    case 333u: goto L_089D1408;
    case 334u: goto L_089D1418;
    case 335u: goto L_089D142C;
    case 336u: goto L_089D1438;
    case 337u: goto L_089D1444;
    case 338u: goto L_089D145C;
    case 339u: goto L_089D146C;
    case 340u: goto L_089D14B8;
    case 341u: goto L_089D14D8;
    case 342u: goto L_089D14E0;
    case 343u: goto L_089D14F4;
    case 344u: goto L_089D1500;
    case 345u: goto L_089D1508;
    case 346u: goto L_089D1514;
    case 347u: goto L_089D151C;
    case 348u: goto L_089D1528;
    case 349u: goto L_089D1530;
    case 350u: goto L_089D1538;
    case 351u: goto L_089D154C;
    case 352u: goto L_089D1558;
    case 353u: goto L_089D1570;
    case 354u: goto L_089D159C;
    case 355u: goto L_089D15AC;
    case 356u: goto L_089D15B8;
    case 357u: goto L_089D15C4;
    case 358u: goto L_089D15D0;
    case 359u: goto L_089D15E0;
    case 360u: goto L_089D1600;
    case 361u: goto L_089D1624;
    case 362u: goto L_089D1634;
    case 363u: goto L_089D164C;
    case 364u: goto L_089D165C;
    case 365u: goto L_089D1668;
    case 366u: goto L_089D1684;
    case 367u: goto L_089D16AC;
    case 368u: goto L_089D16BC;
    case 369u: goto L_089D16CC;
    case 370u: goto L_089D16D4;
    case 371u: goto L_089D16E8;
    case 372u: goto L_089D1700;
    case 373u: goto L_089D1724;
    case 374u: goto L_089D172C;
    case 375u: goto L_089D1734;
    case 376u: goto L_089D1744;
    case 377u: goto L_089D1750;
    case 378u: goto L_089D1760;
    case 379u: goto L_089D1774;
    case 380u: goto L_089D1784;
    case 381u: goto L_089D178C;
    case 382u: goto L_089D17B4;
    case 383u: goto L_089D17C0;
    case 384u: goto L_089D17CC;
    case 385u: goto L_089D17D8;
    case 386u: goto L_089D17E0;
    case 387u: goto L_089D17EC;
    case 388u: goto L_089D17F0;
    case 389u: goto L_089D1808;
    case 390u: goto L_089D1824;
    case 391u: goto L_089D1850;
    case 392u: goto L_089D1858;
    case 393u: goto L_089D1864;
    case 394u: goto L_089D1874;
    case 395u: goto L_089D187C;
    case 396u: goto L_089D188C;
    case 397u: goto L_089D1894;
    case 398u: goto L_089D18AC;
    case 399u: goto L_089D18B8;
    case 400u: goto L_089D18C8;
    case 401u: goto L_089D18E4;
    case 402u: goto L_089D190C;
    case 403u: goto L_089D1924;
    case 404u: goto L_089D1930;
    case 405u: goto L_089D1938;
    case 406u: goto L_089D1944;
    case 407u: goto L_089D194C;
    case 408u: goto L_089D1954;
    case 409u: goto L_089D195C;
    case 410u: goto L_089D1970;
    case 411u: goto L_089D1978;
    case 412u: goto L_089D1984;
    case 413u: goto L_089D198C;
    case 414u: goto L_089D1998;
    case 415u: goto L_089D19A0;
    case 416u: goto L_089D19AC;
    case 417u: goto L_089D19B4;
    case 418u: goto L_089D19BC;
    case 419u: goto L_089D19C8;
    case 420u: goto L_089D19D0;
    case 421u: goto L_089D19D8;
    case 422u: goto L_089D19E0;
    case 423u: goto L_089D19E8;
    case 424u: goto L_089D19F0;
    case 425u: goto L_089D19F8;
    case 426u: goto L_089D1A00;
    case 427u: goto L_089D1A08;
    case 428u: goto L_089D1A10;
    case 429u: goto L_089D1A18;
    case 430u: goto L_089D1A1C;
    case 431u: goto L_089D1A30;
    case 432u: goto L_089D1A5C;
    case 433u: goto L_089D1A6C;
    case 434u: goto L_089D1A74;
    case 435u: goto L_089D1A7C;
    case 436u: goto L_089D1A84;
    case 437u: goto L_089D1A8C;
    case 438u: goto L_089D1A9C;
    case 439u: goto L_089D1AAC;
    case 440u: goto L_089D1ACC;
    case 441u: goto L_089D1B1C;
    case 442u: goto L_089D1B40;
    case 443u: goto L_089D1B54;
    case 444u: goto L_089D1B60;
    case 445u: goto L_089D1B6C;
    case 446u: goto L_089D1B78;
    case 447u: goto L_089D1B84;
    case 448u: goto L_089D1B90;
    case 449u: goto L_089D1B98;
    case 450u: goto L_089D1BA4;
    case 451u: goto L_089D1BB4;
    case 452u: goto L_089D1BC0;
    case 453u: goto L_089D1BCC;
    case 454u: goto L_089D1BD4;
    case 455u: goto L_089D1BDC;
    case 456u: goto L_089D1BE4;
    case 457u: goto L_089D1BF0;
    case 458u: goto L_089D1BFC;
    case 459u: goto L_089D1C04;
    case 460u: goto L_089D1C10;
    case 461u: goto L_089D1C18;
    case 462u: goto L_089D1C24;
    case 463u: goto L_089D1C30;
    case 464u: goto L_089D1C38;
    case 465u: goto L_089D1C40;
    case 466u: goto L_089D1C48;
    case 467u: goto L_089D1C5C;
    case 468u: goto L_089D1C68;
    case 469u: goto L_089D1C94;
    case 470u: goto L_089D1CDC;
    case 471u: goto L_089D1D28;
    case 472u: goto L_089D1D40;
    case 473u: goto L_089D1D48;
    case 474u: goto L_089D1DA0;
    case 475u: goto L_089D1DAC;
    case 476u: goto L_089D1DC4;
    case 477u: goto L_089D1DC8;
    case 478u: goto L_089D1DD8;
    case 479u: goto L_089D1DE0;
    case 480u: goto L_089D1DEC;
    case 481u: goto L_089D1DF4;
    case 482u: goto L_089D1E24;
    case 483u: goto L_089D1E34;
    case 484u: goto L_089D1E40;
    case 485u: goto L_089D1E48;
    case 486u: goto L_089D1E5C;
    case 487u: goto L_089D1E6C;
    case 488u: goto L_089D1E78;
    case 489u: goto L_089D1E80;
    case 490u: goto L_089D1E8C;
    case 491u: goto L_089D1E94;
    case 492u: goto L_089D1EA8;
    case 493u: goto L_089D1EB0;
    case 494u: goto L_089D1EB8;
    case 495u: goto L_089D1EC8;
    case 496u: goto L_089D1ED4;
    case 497u: goto L_089D1EDC;
    case 498u: goto L_089D1EF0;
    case 499u: goto L_089D1F20;
    case 500u: goto L_089D1F44;
    case 501u: goto L_089D1F54;
    case 502u: goto L_089D1F5C;
    case 503u: goto L_089D1F6C;
    case 504u: goto L_089D1F78;
    case 505u: goto L_089D1F88;
    case 506u: goto L_089D1F8C;
    case 507u: goto L_089D1F98;
    case 508u: goto L_089D1FA4;
    case 509u: goto L_089D1FB8;
    case 510u: goto L_089D1FE0;
    case 511u: goto L_089D1FE8;
    case 512u: goto L_089D1FFC;
    case 513u: goto L_089D2000;
    case 514u: goto L_089D2020;
    case 515u: goto L_089D2044;
    case 516u: goto L_089D2050;
    case 517u: goto L_089D2060;
    case 518u: goto L_089D2074;
    case 519u: goto L_089D20DC;
    case 520u: goto L_089D20E8;
    case 521u: goto L_089D20EC;
    case 522u: goto L_089D2100;
    case 523u: goto L_089D2120;
    case 524u: goto L_089D2170;
    case 525u: goto L_089D2180;
    case 526u: goto L_089D21F8;
    case 527u: goto L_089D220C;
    case 528u: goto L_089D2234;
    case 529u: goto L_089D2250;
    case 530u: goto L_089D2258;
    case 531u: goto L_089D2260;
    case 532u: goto L_089D2270;
    case 533u: goto L_089D227C;
    case 534u: goto L_089D2284;
    case 535u: goto L_089D2288;
    case 536u: goto L_089D2290;
    case 537u: goto L_089D2298;
    case 538u: goto L_089D22AC;
    case 539u: goto L_089D22F0;
    case 540u: goto L_089D22F8;
    case 541u: goto L_089D2300;
    case 542u: goto L_089D2304;
    case 543u: goto L_089D230C;
    case 544u: goto L_089D2314;
    case 545u: goto L_089D2318;
    case 546u: goto L_089D2334;
    case 547u: goto L_089D233C;
    case 548u: goto L_089D237C;
    case 549u: goto L_089D2388;
    case 550u: goto L_089D23A8;
    case 551u: goto L_089D23B0;
    case 552u: goto L_089D23C8;
    case 553u: goto L_089D23D4;
    case 554u: goto L_089D23DC;
    case 555u: goto L_089D23E4;
    case 556u: goto L_089D23EC;
    case 557u: goto L_089D2404;
    case 558u: goto L_089D2410;
    case 559u: goto L_089D2420;
    case 560u: goto L_089D243C;
    case 561u: goto L_089D2450;
    case 562u: goto L_089D2468;
    case 563u: goto L_089D2480;
    case 564u: goto L_089D2488;
    case 565u: goto L_089D248C;
    case 566u: goto L_089D24D4;
    case 567u: goto L_089D24EC;
    case 568u: goto L_089D24F4;
    case 569u: goto L_089D2504;
    case 570u: goto L_089D2528;
    case 571u: goto L_089D2530;
    case 572u: goto L_089D253C;
    case 573u: goto L_089D2558;
    case 574u: goto L_089D2560;
    case 575u: goto L_089D2568;
    case 576u: goto L_089D256C;
    case 577u: goto L_089D2578;
    case 578u: goto L_089D2590;
    case 579u: goto L_089D25C0;
    case 580u: goto L_089D25D0;
    case 581u: goto L_089D25DC;
    case 582u: goto L_089D25EC;
    case 583u: goto L_089D25F0;
    case 584u: goto L_089D25FC;
    case 585u: goto L_089D2608;
    case 586u: goto L_089D2614;
    case 587u: goto L_089D2620;
    case 588u: goto L_089D2630;
    case 589u: goto L_089D2634;
    case 590u: goto L_089D2640;
    case 591u: goto L_089D2664;
    case 592u: goto L_089D2670;
    case 593u: goto L_089D2680;
    case 594u: goto L_089D2688;
    case 595u: goto L_089D2690;
    case 596u: goto L_089D2698;
    case 597u: goto L_089D26A4;
    case 598u: goto L_089D26C0;
    case 599u: goto L_089D26C4;
    case 600u: goto L_089D26CC;
    case 601u: goto L_089D26F8;
    case 602u: goto L_089D2704;
    case 603u: goto L_089D271C;
    case 604u: goto L_089D2728;
    case 605u: goto L_089D2730;
    case 606u: goto L_089D2744;
    case 607u: goto L_089D2750;
    case 608u: goto L_089D2760;
    case 609u: goto L_089D2764;
    case 610u: goto L_089D2780;
    case 611u: goto L_089D27B8;
    case 612u: goto L_089D27C4;
    case 613u: goto L_089D27D0;
    case 614u: goto L_089D27D8;
    case 615u: goto L_089D27E8;
    case 616u: goto L_089D2808;
    case 617u: goto L_089D2834;
    case 618u: goto L_089D2840;
    case 619u: goto L_089D2890;
    case 620u: goto L_089D28A4;
    case 621u: goto L_089D28F4;
    case 622u: goto L_089D2908;
    case 623u: goto L_089D2914;
    case 624u: goto L_089D291C;
    case 625u: goto L_089D2920;
    case 626u: goto L_089D292C;
    case 627u: goto L_089D293C;
    case 628u: goto L_089D2940;
    case 629u: goto L_089D2950;
    case 630u: goto L_089D2968;
    case 631u: goto L_089D2988;
    case 632u: goto L_089D29A4;
    case 633u: goto L_089D29C4;
    case 634u: goto L_089D29E0;
    case 635u: goto L_089D2A24;
    case 636u: goto L_089D2A64;
    case 637u: goto L_089D2A7C;
    case 638u: goto L_089D2ACC;
    case 639u: goto L_089D2AD4;
    case 640u: goto L_089D2B04;
    case 641u: goto L_089D2B1C;
    case 642u: goto L_089D2B3C;
    case 643u: goto L_089D2B78;
    case 644u: goto L_089D2BB4;
    case 645u: goto L_089D2BE8;
    case 646u: goto L_089D2C1C;
    case 647u: goto L_089D2C4C;
    case 648u: goto L_089D2C78;
    case 649u: goto L_089D2CA0;
    case 650u: goto L_089D2CD0;
    case 651u: goto L_089D2CF4;
    case 652u: goto L_089D2CF8;
    case 653u: goto L_089D2D24;
    case 654u: goto L_089D2D78;
    case 655u: goto L_089D2DC4;
    case 656u: goto L_089D2DD4;
    case 657u: goto L_089D2DE4;
    case 658u: goto L_089D2DEC;
    case 659u: goto L_089D2E00;
    case 660u: goto L_089D2E0C;
    case 661u: goto L_089D2E20;
    case 662u: goto L_089D2E28;
    case 663u: goto L_089D2E30;
    case 664u: goto L_089D2E50;
    case 665u: goto L_089D2E60;
    case 666u: goto L_089D2E68;
    case 667u: goto L_089D2E78;
    case 668u: goto L_089D2E80;
    case 669u: goto L_089D2E8C;
    case 670u: goto L_089D2E94;
    case 671u: goto L_089D2EA0;
    case 672u: goto L_089D2EA4;
    case 673u: goto L_089D2EAC;
    case 674u: goto L_089D2EC0;
    case 675u: goto L_089D2ED8;
    case 676u: goto L_089D2F24;
    case 677u: goto L_089D2F5C;
    case 678u: goto L_089D2F84;
    case 679u: goto L_089D2FA4;
    case 680u: goto L_089D2FCC;
    case 681u: goto L_089D300C;
    case 682u: goto L_089D3014;
    case 683u: goto L_089D306C;
    case 684u: goto L_089D30B0;
    case 685u: goto L_089D30E4;
    case 686u: goto L_089D30F4;
    case 687u: goto L_089D3114;
    case 688u: goto L_089D3134;
    case 689u: goto L_089D3174;
    case 690u: goto L_089D3184;
    case 691u: goto L_089D318C;
    case 692u: goto L_089D31A0;
    case 693u: goto L_089D31F8;
    case 694u: goto L_089D3204;
    case 695u: goto L_089D325C;
    case 696u: goto L_089D3268;
    case 697u: goto L_089D328C;
    case 698u: goto L_089D32B0;
    case 699u: goto L_089D32F0;
    case 700u: goto L_089D3304;
    case 701u: goto L_089D330C;
    case 702u: goto L_089D331C;
    case 703u: goto L_089D335C;
    case 704u: goto L_089D3368;
    case 705u: goto L_089D33CC;
    case 706u: goto L_089D33F4;
    case 707u: goto L_089D3408;
    case 708u: goto L_089D3410;
    case 709u: goto L_089D3428;
    case 710u: goto L_089D3454;
    case 711u: goto L_089D3470;
    case 712u: goto L_089D347C;
    case 713u: goto L_089D3494;
    case 714u: goto L_089D34A8;
    case 715u: goto L_089D34B4;
    case 716u: goto L_089D34CC;
    case 717u: goto L_089D34E0;
    case 718u: goto L_089D34EC;
    case 719u: goto L_089D3504;
    case 720u: goto L_089D3514;
    case 721u: goto L_089D3528;
    case 722u: goto L_089D3574;
    case 723u: goto L_089D3588;
    case 724u: goto L_089D3590;
    case 725u: goto L_089D3644;
    case 726u: goto L_089D365C;
    case 727u: goto L_089D36B4;
    case 728u: goto L_089D36E8;
    case 729u: goto L_089D3730;
    case 730u: goto L_089D3738;
    case 731u: goto L_089D377C;
    case 732u: goto L_089D3784;
    case 733u: goto L_089D37C8;
    case 734u: goto L_089D37F8;
    case 735u: goto L_089D3840;
    case 736u: goto L_089D3848;
    case 737u: goto L_089D3884;
    case 738u: goto L_089D388C;
    case 739u: goto L_089D38D0;
    case 740u: goto L_089D38FC;
    case 741u: goto L_089D3944;
    case 742u: goto L_089D394C;
    case 743u: goto L_089D3984;
    case 744u: goto L_089D398C;
    case 745u: goto L_089D39C8;
    case 746u: goto L_089D39F4;
    case 747u: goto L_089D3A38;
    case 748u: goto L_089D3A40;
    case 749u: goto L_089D3A74;
    case 750u: goto L_089D3A9C;
    case 751u: goto L_089D3AD8;
    case 752u: goto L_089D3AF0;
    case 753u: goto L_089D3B58;
    case 754u: goto L_089D3B7C;
    case 755u: goto L_089D3B9C;
    case 756u: goto L_089D3BE4;
    case 757u: goto L_089D3BEC;
    case 758u: goto L_089D3C40;
    case 759u: goto L_089D3C64;
    case 760u: goto L_089D3C8C;
    case 761u: goto L_089D3CD0;
    case 762u: goto L_089D3CD8;
    case 763u: goto L_089D3D2C;
    case 764u: goto L_089D3D54;
    case 765u: goto L_089D3D78;
    case 766u: goto L_089D3DBC;
    case 767u: goto L_089D3DC4;
    case 768u: goto L_089D3E10;
    case 769u: goto L_089D3E38;
    case 770u: goto L_089D3E5C;
    case 771u: goto L_089D3EA0;
    case 772u: goto L_089D3EC0;
    case 773u: goto L_089D3EC8;
    case 774u: goto L_089D3F34;
    case 775u: goto L_089D3F84;
    case 776u: goto L_089D3FD4;
    case 777u: goto L_089D3FE4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089D0000:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 287u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D00E4;
      }
      goto L_089D0038;
    }
L_089D0038:
    ctx.gpr[5] = (0u | 123u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 40u);
      if (branch_taken) {
          goto L_089D00C8;
      }
      goto L_089D0044;
    }
L_089D0044:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D010C;
      }
      goto L_089D004C;
    }
L_089D004C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[20] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_089D006C;
      }
      goto L_089D005C;
    }
L_089D005C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D006Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8024));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089D006Cu) goto L_089D006C;
    return;
L_089D006C:
    ctx.gpr[31] = (0x089D0074u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D0074u) goto L_089D0074;
    return;
L_089D0074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089D0088;
      }
      goto L_089D0080;
    }
L_089D0080:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
      if (branch_taken) {
          goto L_089D00A8;
      }
      goto L_089D0088;
    }
L_089D0088:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0098u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 930u, 0x089CFF88u>(ctx, &aot_mem) && ctx.pc == 0x089D0098u) goto L_089D0098;
    return;
L_089D0098:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D00A8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 713u, 0x088835D4u>(ctx, &aot_mem) && ctx.pc == 0x089D00A8u) goto L_089D00A8;
    return;
L_089D00A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x089D00BCu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 712u, 0x089CECBCu>(ctx, &aot_mem) && ctx.pc == 0x089D00BCu) goto L_089D00BC;
    return;
L_089D00BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D0124;
      }
      goto L_089D00C8;
    }
L_089D00C8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089D00D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1ACC;
L_089D00D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_089D0124;
      }
      goto L_089D00E4;
    }
L_089D00E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089D00F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 728u, 0x089CEDE8u>(ctx, &aot_mem) && ctx.pc == 0x089D00F4u) goto L_089D00F4;
    return;
L_089D00F4:
    ctx.gpr[31] = (0x089D00FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D00FCu) goto L_089D00FC;
    return;
L_089D00FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 12u);
      if (branch_taken) {
          goto L_089D0124;
      }
      goto L_089D010C;
    }
L_089D010C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D011Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7972));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089D011Cu) goto L_089D011C;
    return;
L_089D011C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0194;
      }
      goto L_089D0124;
    }
L_089D0124:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_089D0134;
      }
      goto L_089D012C;
    }
L_089D012C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089D0158;
      }
      goto L_089D0134;
    }
L_089D0134:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0148;
      }
      goto L_089D013C;
    }
L_089D013C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x089D0148u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 770u, 0x08883AB8u>(ctx, &aot_mem) && ctx.pc == 0x089D0148u) goto L_089D0148;
    return;
L_089D0148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    goto L_089D0158;
L_089D0158:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0170u);
    ctx.gpr[8] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089D0170u) goto L_089D0170;
    return;
L_089D0170:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x089D0180u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 727u, 0x089CEDD0u>(ctx, &aot_mem) && ctx.pc == 0x089D0180u) goto L_089D0180;
    return;
L_089D0180:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D018Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 71u, 0x0888446Cu>(ctx, &aot_mem) && ctx.pc == 0x089D018Cu) goto L_089D018C;
    return;
L_089D018C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    goto L_089D0194;
L_089D0194:
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
L_089D01B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 41 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 278u);
      if (branch_taken) {
          goto L_089D0208;
      }
      goto L_089D01E4;
    }
L_089D01E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0228;
      }
      goto L_089D01F0;
    }
L_089D01F0:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0200u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7944));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089D0200u) goto L_089D0200;
    return;
L_089D0200:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0268;
      }
      goto L_089D0208;
    }
L_089D0208:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D01F0;
      }
      goto L_089D0210;
    }
L_089D0210:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0220u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 798u, 0x089CF3E8u>(ctx, &aot_mem) && ctx.pc == 0x089D0220u) goto L_089D0220;
    return;
L_089D0220:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0268;
      }
      goto L_089D0228;
    }
L_089D0228:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089D0234u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D0234u) goto L_089D0234;
    return;
L_089D0234:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0240u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D07C4;
L_089D0240:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 41u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x089D0254u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 712u, 0x089CECBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0254u) goto L_089D0254;
    return;
L_089D0254:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D0260u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 717u, 0x08883650u>(ctx, &aot_mem) && ctx.pc == 0x089D0260u) goto L_089D0260;
    return;
L_089D0260:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0268;
      }
      goto L_089D0268;
    }
L_089D0268:
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
L_089D0280:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D02A8u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    goto L_089D01B8;
L_089D02A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 92 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 124 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D02F8;
      }
      goto L_089D02B8;
    }
L_089D02B8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 40 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D02E4;
      }
      goto L_089D02C4;
    }
L_089D02C4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-40));
      if (branch_taken) {
          goto L_089D02F0;
      }
      goto L_089D02CC;
    }
L_089D02CC:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7752)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D02E4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0338;
      }
      goto L_089D02F0;
    }
L_089D02F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03C8;
      }
      goto L_089D02F8;
    }
L_089D02F8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 287u);
      if (branch_taken) {
          goto L_089D0314;
      }
      goto L_089D0300;
    }
L_089D0300:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 123 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D02F0;
      }
      goto L_089D030C;
    }
L_089D030C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03A8;
      }
      goto L_089D0314;
    }
L_089D0314:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D02F0;
      }
      goto L_089D031C;
    }
L_089D031C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03A8;
      }
      goto L_089D0324;
    }
L_089D0324:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0330u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 858u, 0x089CFA34u>(ctx, &aot_mem) && ctx.pc == 0x089D0330u) goto L_089D0330;
    return;
L_089D0330:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03C0;
      }
      goto L_089D0338;
    }
L_089D0338:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0344u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08883B14u>(ctx, &aot_mem) && ctx.pc == 0x089D0344u) goto L_089D0344;
    return;
L_089D0344:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0354u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 863u, 0x089CFAA4u>(ctx, &aot_mem) && ctx.pc == 0x089D0354u) goto L_089D0354;
    return;
L_089D0354:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0364u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 33u, 0x088841E0u>(ctx, &aot_mem) && ctx.pc == 0x089D0364u) goto L_089D0364;
    return;
L_089D0364:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03C0;
      }
      goto L_089D036C;
    }
L_089D036C:
    ctx.gpr[31] = (0x089D0374u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D0374u) goto L_089D0374;
    return;
L_089D0374:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0384u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 731u, 0x089CEE24u>(ctx, &aot_mem) && ctx.pc == 0x089D0384u) goto L_089D0384;
    return;
L_089D0384:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0394u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 825u, 0x08883DE4u>(ctx, &aot_mem) && ctx.pc == 0x089D0394u) goto L_089D0394;
    return;
L_089D0394:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D03A0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 937u, 0x089CFFFCu>(ctx, &aot_mem) && ctx.pc == 0x089D03A0u) goto L_089D03A0;
    return;
L_089D03A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D03C0;
      }
      goto L_089D03A8;
    }
L_089D03A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D03B4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 770u, 0x08883AB8u>(ctx, &aot_mem) && ctx.pc == 0x089D03B4u) goto L_089D03B4;
    return;
L_089D03B4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D03C0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 937u, 0x089CFFFCu>(ctx, &aot_mem) && ctx.pc == 0x089D03C0u) goto L_089D03C0;
    return;
L_089D03C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D02A8;
      }
      goto L_089D03C8;
    }
L_089D03C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D03E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 263 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 288 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D042C;
      }
      goto L_089D040C;
    }
L_089D040C:
    ctx.gpr[5] = (0u | 123u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D051C;
      }
      goto L_089D0418;
    }
L_089D0418:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0424u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D1ACC;
L_089D0424:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0528;
      }
      goto L_089D042C;
    }
L_089D042C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-263));
      if (branch_taken) {
          goto L_089D051C;
      }
      goto L_089D0434;
    }
L_089D0434:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7672)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D044C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D0458u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 709u, 0x08883574u>(ctx, &aot_mem) && ctx.pc == 0x089D0458u) goto L_089D0458;
    return;
L_089D0458:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x089D0468u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 727u, 0x089CEDD0u>(ctx, &aot_mem) && ctx.pc == 0x089D0468u) goto L_089D0468;
    return;
L_089D0468:
    ctx.gpr[31] = (0x089D0470u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D0470u) goto L_089D0470;
    return;
L_089D0470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0528;
      }
      goto L_089D0478;
    }
L_089D0478:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0488u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 728u, 0x089CEDE8u>(ctx, &aot_mem) && ctx.pc == 0x089D0488u) goto L_089D0488;
    return;
L_089D0488:
    ctx.gpr[31] = (0x089D0490u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D0490u) goto L_089D0490;
    return;
L_089D0490:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0528;
      }
      goto L_089D0498;
    }
L_089D0498:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x089D04A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 727u, 0x089CEDD0u>(ctx, &aot_mem) && ctx.pc == 0x089D04A8u) goto L_089D04A8;
    return;
L_089D04A8:
    ctx.gpr[31] = (0x089D04B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D04B0u) goto L_089D04B0;
    return;
L_089D04B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0528;
      }
      goto L_089D04B8;
    }
L_089D04B8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x089D04C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 727u, 0x089CEDD0u>(ctx, &aot_mem) && ctx.pc == 0x089D04C8u) goto L_089D04C8;
    return;
L_089D04C8:
    ctx.gpr[31] = (0x089D04D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D04D0u) goto L_089D04D0;
    return;
L_089D04D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0528;
      }
      goto L_089D04D8;
    }
L_089D04D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x089D04E8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 727u, 0x089CEDD0u>(ctx, &aot_mem) && ctx.pc == 0x089D04E8u) goto L_089D04E8;
    return;
L_089D04E8:
    ctx.gpr[31] = (0x089D04F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D04F0u) goto L_089D04F0;
    return;
L_089D04F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0528;
      }
      goto L_089D04F8;
    }
L_089D04F8:
    ctx.gpr[31] = (0x089D0500u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D0500u) goto L_089D0500;
    return;
L_089D0500:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0514u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 919u, 0x089CFEBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0514u) goto L_089D0514;
    return;
L_089D0514:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0528;
      }
      goto L_089D051C;
    }
L_089D051C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0528u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D0280;
L_089D0528:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D053C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 46 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 270u);
      if (branch_taken) {
          goto L_089D055C;
      }
      goto L_089D0548;
    }
L_089D0548:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 45 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D056C;
      }
      goto L_089D0554;
    }
L_089D0554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_089D0570;
      }
      goto L_089D055C;
    }
L_089D055C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D0554;
      }
      goto L_089D0564;
    }
L_089D0564:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D0570;
      }
      goto L_089D056C;
    }
L_089D056C:
    ctx.gpr[2] = (0u | 0u);
    goto L_089D0570;
L_089D0570:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0578:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 257 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 286 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D05CC;
      }
      goto L_089D0584;
    }
L_089D0584:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 63 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 94u);
      if (branch_taken) {
          goto L_089D05BC;
      }
      goto L_089D0590;
    }
L_089D0590:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 42 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-42));
      if (branch_taken) {
          goto L_089D05B4;
      }
      goto L_089D059C;
    }
L_089D059C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D05B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 14u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D05BC;
    }
L_089D05BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D05B4;
      }
      goto L_089D05C4;
    }
L_089D05C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D05CC;
    }
L_089D05CC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-257));
      if (branch_taken) {
          goto L_089D05B4;
      }
      goto L_089D05D4;
    }
L_089D05D4:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7480)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D05EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D05F4;
    }
L_089D05F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D05FC;
    }
L_089D05FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D0604;
    }
L_089D0604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D060C;
    }
L_089D060C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D0614;
    }
L_089D0614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D061C;
    }
L_089D061C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D0624;
    }
L_089D0624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D062C;
    }
L_089D062C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D0634;
    }
L_089D0634:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D063C;
    }
L_089D063C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D0644;
    }
L_089D0644:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_089D0650;
      }
      goto L_089D064C;
    }
L_089D064C:
    ctx.gpr[2] = (0u | 13u);
    goto L_089D0650;
L_089D0650:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[7]);
    ctx.gpr[21] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[7]) < 201 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-28216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D06B8;
      }
      goto L_089D06A8;
    }
L_089D06A8:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D06B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7924));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089D06B8u) goto L_089D06B8;
    return;
L_089D06B8:
    ctx.gpr[31] = (0x089D06C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089D053C;
L_089D06C0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D0700;
      }
      goto L_089D06D0;
    }
L_089D06D0:
    ctx.gpr[31] = (0x089D06D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D06D8u) goto L_089D06D8;
    return;
L_089D06D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D06E8u);
    ctx.gpr[6] = (0u | 8u);
    goto L_089D0658;
L_089D06E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D06F8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 35u, 0x08884214u>(ctx, &aot_mem) && ctx.pc == 0x089D06F8u) goto L_089D06F8;
    return;
L_089D06F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089D0710;
      }
      goto L_089D0700;
    }
L_089D0700:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D070Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D03E4;
L_089D070C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089D0710;
L_089D0710:
    ctx.gpr[31] = (0x089D0718u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_089D0578;
L_089D0718:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (0u | 14u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_089D0724;
L_089D0724:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[20];
    ctx.gpr[22] = (ctx.gpr[19] + ctx.gpr[19]);
      if (branch_taken) {
          goto L_089D0788;
      }
      goto L_089D072C;
    }
L_089D072C:
    ctx.gpr[22] = (ctx.gpr[22] + ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0788;
      }
      goto L_089D0740;
    }
L_089D0740:
    ctx.gpr[31] = (0x089D0748u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D0748u) goto L_089D0748;
    return;
L_089D0748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D0758u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 47u, 0x088842E8u>(ctx, &aot_mem) && ctx.pc == 0x089D0758u) goto L_089D0758;
    return;
L_089D0758:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(1)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0768u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_089D0658;
L_089D0768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0780u);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 84u, 0x088845F0u>(ctx, &aot_mem) && ctx.pc == 0x089D0780u) goto L_089D0780;
    return;
L_089D0780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[22] | 0u);
      if (branch_taken) {
          goto L_089D0724;
      }
      goto L_089D0788;
    }
L_089D0788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
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
L_089D07C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D07D4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089D0658;
L_089D07D4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D07E0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-260));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(29) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0810;
      }
      goto L_089D07F0;
    }
L_089D07F0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7360)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D0814;
      }
      goto L_089D0810;
    }
L_089D0810:
    ctx.gpr[2] = (0u | 0u);
    goto L_089D0814;
L_089D0814:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D081C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0844u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 819u, 0x089CF588u>(ctx, &aot_mem) && ctx.pc == 0x089D0844u) goto L_089D0844;
    return;
L_089D0844:
    ctx.gpr[31] = (0x089D084Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1A30;
L_089D084C:
    ctx.gpr[31] = (0x089D0854u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 820u, 0x089CF5B0u>(ctx, &aot_mem) && ctx.pc == 0x089D0854u) goto L_089D0854;
    return;
L_089D0854:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0868:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089D08D4;
      }
      goto L_089D0888;
    }
L_089D0888:
    ctx.gpr[8] = (0u | 8u);
    goto L_089D088C;
L_089D088C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_089D08C8;
      }
      goto L_089D0898;
    }
L_089D0898:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089D08B0;
      }
      goto L_089D08A8;
    }
L_089D08A8:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    goto L_089D08B0;
L_089D08B0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_089D08C8;
      }
      goto L_089D08C0;
    }
L_089D08C0:
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(12), ctx.gpr[7]);
    goto L_089D08C8;
L_089D08C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D088C;
      }
      goto L_089D08D4;
    }
L_089D08D4:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0900;
      }
      goto L_089D08DC;
    }
L_089D08DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(36)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089D08F4u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089D08F4u) goto L_089D08F4;
    return;
L_089D08F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0900u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 689u, 0x0888337Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0900u) goto L_089D0900;
    return;
L_089D0900:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0910:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_089D095C;
      }
      goto L_089D0950;
    }
L_089D0950:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D096C;
      }
      goto L_089D095C;
    }
L_089D095C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D096Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7900));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089D096Cu) goto L_089D096C;
    return;
L_089D096C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0978u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D0978u) goto L_089D0978;
    return;
L_089D0978:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D09D4;
      }
      goto L_089D0980;
    }
L_089D0980:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0994u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_089D0280;
L_089D0994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D09B4;
      }
      goto L_089D09A4;
    }
L_089D09A4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D09B4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_089D0868;
L_089D09B4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[31] = (0x089D09C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D0910;
L_089D09C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D0A60;
      }
      goto L_089D09D4;
    }
L_089D09D4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D09E0u);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 708u, 0x089CEC78u>(ctx, &aot_mem) && ctx.pc == 0x089D09E0u) goto L_089D09E0;
    return;
L_089D09E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D09ECu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 930u, 0x089CFF88u>(ctx, &aot_mem) && ctx.pc == 0x089D09ECu) goto L_089D09EC;
    return;
L_089D09EC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D0A34;
      }
      goto L_089D09F8;
    }
L_089D09F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0A0Cu);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 801u, 0x089CF448u>(ctx, &aot_mem) && ctx.pc == 0x089D0A0Cu) goto L_089D0A0C;
    return;
L_089D0A0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D0A5C;
      }
      goto L_089D0A1C;
    }
L_089D0A1C:
    ctx.gpr[6] = (ctx.gpr[17] - ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D0A5C;
      }
      goto L_089D0A34;
    }
L_089D0A34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D0A44u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 713u, 0x088835D4u>(ctx, &aot_mem) && ctx.pc == 0x089D0A44u) goto L_089D0A44;
    return;
L_089D0A44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D0A54u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 805u, 0x08883CC0u>(ctx, &aot_mem) && ctx.pc == 0x089D0A54u) goto L_089D0A54;
    return;
L_089D0A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0A80;
      }
      goto L_089D0A5C;
    }
L_089D0A5C:
    ctx.gpr[18] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    goto L_089D0A60;
L_089D0A60:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x089D0A70u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 727u, 0x089CEDD0u>(ctx, &aot_mem) && ctx.pc == 0x089D0A70u) goto L_089D0A70;
    return;
L_089D0A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D0A80u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 805u, 0x08883CC0u>(ctx, &aot_mem) && ctx.pc == 0x089D0A80u) goto L_089D0A80;
    return;
L_089D0A80:
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
L_089D0AA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0AC0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_089D07C4;
L_089D0AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D0AD8;
      }
      goto L_089D0AD0;
    }
L_089D0AD0:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089D0AD8;
L_089D0AD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D0AE4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 842u, 0x08883FA8u>(ctx, &aot_mem) && ctx.pc == 0x089D0AE4u) goto L_089D0AE4;
    return;
L_089D0AE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D0AF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 671u, 0x08883248u>(ctx, &aot_mem) && ctx.pc == 0x089D0AF0u) goto L_089D0AF0;
    return;
L_089D0AF0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0B04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0B40u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D0B40u) goto L_089D0B40;
    return;
L_089D0B40:
    ctx.gpr[31] = (0x089D0B48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 616u, 0x08882DE0u>(ctx, &aot_mem) && ctx.pc == 0x089D0B48u) goto L_089D0B48;
    return;
L_089D0B48:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D0B54u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 627u, 0x08882F18u>(ctx, &aot_mem) && ctx.pc == 0x089D0B54u) goto L_089D0B54;
    return;
L_089D0B54:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(436));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0B68u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089D07C4;
L_089D0B68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D0B80;
      }
      goto L_089D0B78;
    }
L_089D0B78:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[4]);
    goto L_089D0B80;
L_089D0B80:
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089D0B90u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 7u, 0x08884050u>(ctx, &aot_mem) && ctx.pc == 0x089D0B90u) goto L_089D0B90;
    return;
L_089D0B90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(452));
    ctx.gpr[31] = (0x089D0BA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 674u, 0x08883288u>(ctx, &aot_mem) && ctx.pc == 0x089D0BA0u) goto L_089D0BA0;
    return;
L_089D0BA0:
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[23] = (ctx.gpr[23] - ctx.gpr[20]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
      if (branch_taken) {
          goto L_089D0BC4;
      }
      goto L_089D0BB4;
    }
L_089D0BB4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0BC4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7884));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089D0BC4u) goto L_089D0BC4;
    return;
L_089D0BC4:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
      if (branch_taken) {
          goto L_089D0C00;
      }
      goto L_089D0BD4;
    }
L_089D0BD4:
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
    goto L_089D0BD8;
L_089D0BD8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(16), ctx.gpr[7]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D0BD8;
      }
      goto L_089D0C00;
    }
L_089D0C00:
    ctx.gpr[30] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(456));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0C18u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 819u, 0x089CF588u>(ctx, &aot_mem) && ctx.pc == 0x089D0C18u) goto L_089D0C18;
    return;
L_089D0C18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D0C24u);
    ctx.gpr[5] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 708u, 0x089CEC78u>(ctx, &aot_mem) && ctx.pc == 0x089D0C24u) goto L_089D0C24;
    return;
L_089D0C24:
    ctx.gpr[31] = (0x089D0C2Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 627u, 0x08882F18u>(ctx, &aot_mem) && ctx.pc == 0x089D0C2Cu) goto L_089D0C2C;
    return;
L_089D0C2C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D0C38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D081C;
L_089D0C38:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0C44u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 671u, 0x08883248u>(ctx, &aot_mem) && ctx.pc == 0x089D0C44u) goto L_089D0C44;
    return;
L_089D0C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
      if (branch_taken) {
          goto L_089D0C60;
      }
      goto L_089D0C50;
    }
L_089D0C50:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    goto L_089D0C60;
L_089D0C60:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_089D0C78;
      }
      goto L_089D0C68;
    }
L_089D0C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    goto L_089D0C78;
L_089D0C78:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_089D0CA8;
      }
      goto L_089D0C88;
    }
L_089D0C88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0C98u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 72u, 0x08884488u>(ctx, &aot_mem) && ctx.pc == 0x089D0C98u) goto L_089D0C98;
    return;
L_089D0C98:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D0C88;
      }
      goto L_089D0CA8;
    }
L_089D0CA8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 277u);
    ctx.gpr[31] = (0x089D0CBCu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 712u, 0x089CECBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0CBCu) goto L_089D0CBC;
    return;
L_089D0CBC:
    ctx.gpr[31] = (0x089D0CC4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 820u, 0x089CF5B0u>(ctx, &aot_mem) && ctx.pc == 0x089D0CC4u) goto L_089D0CC4;
    return;
L_089D0CC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0CD4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 666u, 0x088831F4u>(ctx, &aot_mem) && ctx.pc == 0x089D0CD4u) goto L_089D0CD4;
    return;
L_089D0CD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[31] = (0x089D0CE0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 671u, 0x08883248u>(ctx, &aot_mem) && ctx.pc == 0x089D0CE0u) goto L_089D0CE0;
    return;
L_089D0CE0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(480)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0D10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0D3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 627u, 0x08882F18u>(ctx, &aot_mem) && ctx.pc == 0x089D0D3Cu) goto L_089D0D3C;
    return;
L_089D0D3C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0D50u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 819u, 0x089CF588u>(ctx, &aot_mem) && ctx.pc == 0x089D0D50u) goto L_089D0D50;
    return;
L_089D0D50:
    ctx.gpr[31] = (0x089D0D58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D0D58u) goto L_089D0D58;
    return;
L_089D0D58:
    ctx.gpr[31] = (0x089D0D60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D081C;
L_089D0D60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 276u);
    ctx.gpr[6] = (0u | 272u);
    ctx.gpr[31] = (0x089D0D74u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 712u, 0x089CECBCu>(ctx, &aot_mem) && ctx.pc == 0x089D0D74u) goto L_089D0D74;
    return;
L_089D0D74:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x089D0D80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D0AA4;
L_089D0D80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0D90u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 666u, 0x088831F4u>(ctx, &aot_mem) && ctx.pc == 0x089D0D90u) goto L_089D0D90;
    return;
L_089D0D90:
    ctx.gpr[31] = (0x089D0D98u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 820u, 0x089CF5B0u>(ctx, &aot_mem) && ctx.pc == 0x089D0D98u) goto L_089D0D98;
    return;
L_089D0D98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0DB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0DD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D07C4;
L_089D0DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089D0DE4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 770u, 0x08883AB8u>(ctx, &aot_mem) && ctx.pc == 0x089D0DE4u) goto L_089D0DE4;
    return;
L_089D0DE4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D0DFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[8] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0E40u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 741u, 0x089CEF8Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0E40u) goto L_089D0E40;
    return;
L_089D0E40:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x089D0E4Cu);
    ctx.gpr[5] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 708u, 0x089CEC78u>(ctx, &aot_mem) && ctx.pc == 0x089D0E4Cu) goto L_089D0E4C;
    return;
L_089D0E4C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D0E5Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 819u, 0x089CF588u>(ctx, &aot_mem) && ctx.pc == 0x089D0E5Cu) goto L_089D0E5C;
    return;
L_089D0E5C:
    ctx.gpr[31] = (0x089D0E64u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 627u, 0x08882F18u>(ctx, &aot_mem) && ctx.pc == 0x089D0E64u) goto L_089D0E64;
    return;
L_089D0E64:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D0E70u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089D081C;
L_089D0E70:
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089D0E7Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 671u, 0x08883248u>(ctx, &aot_mem) && ctx.pc == 0x089D0E7Cu) goto L_089D0E7C;
    return;
L_089D0E7C:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[8] = (ctx.gpr[18] + static_cast<std::uint32_t>(-3));
      if (branch_taken) {
          goto L_089D0EA4;
      }
      goto L_089D0E84;
    }
L_089D0E84:
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D0E9Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x089D0E9Cu) goto L_089D0E9C;
    return;
L_089D0E9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D0EBC;
      }
      goto L_089D0EA4;
    }
L_089D0EA4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x089D0EB8u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089D0EB8u) goto L_089D0EB8;
    return;
L_089D0EB8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_089D0EBC;
L_089D0EBC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D0EC8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 71u, 0x0888446Cu>(ctx, &aot_mem) && ctx.pc == 0x089D0EC8u) goto L_089D0EC8;
    return;
L_089D0EC8:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_089D0EE0;
      }
      goto L_089D0ED0;
    }
L_089D0ED0:
    ctx.gpr[31] = (0x089D0ED8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 616u, 0x08882DE0u>(ctx, &aot_mem) && ctx.pc == 0x089D0ED8u) goto L_089D0ED8;
    return;
L_089D0ED8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    goto L_089D0EE0;
L_089D0EE0:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D0EECu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 666u, 0x088831F4u>(ctx, &aot_mem) && ctx.pc == 0x089D0EECu) goto L_089D0EEC;
    return;
L_089D0EEC:
    ctx.gpr[31] = (0x089D0EF4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 820u, 0x089CF5B0u>(ctx, &aot_mem) && ctx.pc == 0x089D0EF4u) goto L_089D0EF4;
    return;
L_089D0EF4:
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
L_089D0F1C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D0F50u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 738u, 0x089CEF04u>(ctx, &aot_mem) && ctx.pc == 0x089D0F50u) goto L_089D0F50;
    return;
L_089D0F50:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089D0F64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7852));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 748u, 0x089CF044u>(ctx, &aot_mem) && ctx.pc == 0x089D0F64u) goto L_089D0F64;
    return;
L_089D0F64:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089D0F78u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7840));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 748u, 0x089CF044u>(ctx, &aot_mem) && ctx.pc == 0x089D0F78u) goto L_089D0F78;
    return;
L_089D0F78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0F84u);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 708u, 0x089CEC78u>(ctx, &aot_mem) && ctx.pc == 0x089D0F84u) goto L_089D0F84;
    return;
L_089D0F84:
    ctx.gpr[31] = (0x089D0F8Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D0DB4;
L_089D0F8C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0F98u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 708u, 0x089CEC78u>(ctx, &aot_mem) && ctx.pc == 0x089D0F98u) goto L_089D0F98;
    return;
L_089D0F98:
    ctx.gpr[31] = (0x089D0FA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D0DB4;
L_089D0FA0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D0FACu);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D0FACu) goto L_089D0FAC;
    return;
L_089D0FAC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D0FCC;
      }
      goto L_089D0FB4;
    }
L_089D0FB4:
    ctx.gpr[31] = (0x089D0FBCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D0DB4;
L_089D0FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089D100C;
      }
      goto L_089D0FCC;
    }
L_089D0FCC:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x089D0FE0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 709u, 0x08883574u>(ctx, &aot_mem) && ctx.pc == 0x089D0FE0u) goto L_089D0FE0;
    return;
L_089D0FE0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x089D0FF4u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x089D0FF4u) goto L_089D0FF4;
    return;
L_089D0FF4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D1000u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 689u, 0x0888337Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1000u) goto L_089D1000;
    return;
L_089D1000:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    goto L_089D100C;
L_089D100C:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[31] = (0x089D1024u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089D1024u) goto L_089D1024;
    return;
L_089D1024:
    ctx.gpr[31] = (0x089D102Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 616u, 0x08882DE0u>(ctx, &aot_mem) && ctx.pc == 0x089D102Cu) goto L_089D102C;
    return;
L_089D102C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[31] = (0x089D1044u);
    ctx.gpr[8] = (0u | 1u);
    goto L_089D0DFC;
L_089D1044:
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
L_089D1064:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D10A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7828));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 748u, 0x089CF044u>(ctx, &aot_mem) && ctx.pc == 0x089D10A4u) goto L_089D10A4;
    return;
L_089D10A4:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D10B8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7812));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 748u, 0x089CF044u>(ctx, &aot_mem) && ctx.pc == 0x089D10B8u) goto L_089D10B8;
    return;
L_089D10B8:
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[18] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D10CCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 738u, 0x089CEF04u>(ctx, &aot_mem) && ctx.pc == 0x089D10CCu) goto L_089D10CC;
    return;
L_089D10CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D10D0;
L_089D10D0:
    ctx.gpr[31] = (0x089D10D8u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D10D8u) goto L_089D10D8;
    return;
L_089D10D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1104;
      }
      goto L_089D10E0;
    }
L_089D10E0:
    ctx.gpr[31] = (0x089D10E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 722u, 0x089CED88u>(ctx, &aot_mem) && ctx.pc == 0x089D10E8u) goto L_089D10E8;
    return;
L_089D10E8:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D10FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 738u, 0x089CEF04u>(ctx, &aot_mem) && ctx.pc == 0x089D10FCu) goto L_089D10FC;
    return;
L_089D10FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089D10D0;
      }
      goto L_089D1104;
    }
L_089D1104:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1110u);
    ctx.gpr[5] = (0u | 267u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 708u, 0x089CEC78u>(ctx, &aot_mem) && ctx.pc == 0x089D1110u) goto L_089D1110;
    return;
L_089D1110:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1124u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 930u, 0x089CFF88u>(ctx, &aot_mem) && ctx.pc == 0x089D1124u) goto L_089D1124;
    return;
L_089D1124:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D1138u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 801u, 0x089CF448u>(ctx, &aot_mem) && ctx.pc == 0x089D1138u) goto L_089D1138;
    return;
L_089D1138:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D1144u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 683u, 0x08883318u>(ctx, &aot_mem) && ctx.pc == 0x089D1144u) goto L_089D1144;
    return;
L_089D1144:
    ctx.gpr[7] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D115Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 82u, 0x088845C0u>(ctx, &aot_mem) && ctx.pc == 0x089D115Cu) goto L_089D115C;
    return;
L_089D115C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1174u);
    ctx.gpr[8] = (0u | 0u);
    goto L_089D0DFC;
L_089D1174:
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
L_089D1198:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D11C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 819u, 0x089CF588u>(ctx, &aot_mem) && ctx.pc == 0x089D11C8u) goto L_089D11C8;
    return;
L_089D11C8:
    ctx.gpr[31] = (0x089D11D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D11D0u) goto L_089D11D0;
    return;
L_089D11D0:
    ctx.gpr[31] = (0x089D11D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 722u, 0x089CED88u>(ctx, &aot_mem) && ctx.pc == 0x089D11D8u) goto L_089D11D8;
    return;
L_089D11D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 267u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D11FC;
      }
      goto L_089D11E8;
    }
L_089D11E8:
    ctx.gpr[6] = (0u | 61u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 44u);
      if (branch_taken) {
          goto L_089D120C;
      }
      goto L_089D11F4;
    }
L_089D11F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089D1220;
      }
      goto L_089D11FC;
    }
L_089D11FC:
    ctx.gpr[31] = (0x089D1204u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D1064;
L_089D1204:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1230;
      }
      goto L_089D120C;
    }
L_089D120C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1218u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_089D0F1C;
L_089D1218:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1230;
      }
      goto L_089D1220;
    }
L_089D1220:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1230u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7800));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089D1230u) goto L_089D1230;
    return;
L_089D1230:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 264u);
    ctx.gpr[31] = (0x089D1244u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 712u, 0x089CECBCu>(ctx, &aot_mem) && ctx.pc == 0x089D1244u) goto L_089D1244;
    return;
L_089D1244:
    ctx.gpr[31] = (0x089D124Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 820u, 0x089CF5B0u>(ctx, &aot_mem) && ctx.pc == 0x089D124Cu) goto L_089D124C;
    return;
L_089D124C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1280u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D1280u) goto L_089D1280;
    return;
L_089D1280:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D128Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D0AA4;
L_089D128C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1298u);
    ctx.gpr[5] = (0u | 274u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 708u, 0x089CEC78u>(ctx, &aot_mem) && ctx.pc == 0x089D1298u) goto L_089D1298;
    return;
L_089D1298:
    ctx.gpr[31] = (0x089D12A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D081C;
L_089D12A0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D12B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D12F8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089D1264;
L_089D12F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (0u | 261u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[20];
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
      if (branch_taken) {
          goto L_089D1344;
      }
      goto L_089D1308;
    }
L_089D1308:
    ctx.gpr[31] = (0x089D1310u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 616u, 0x08882DE0u>(ctx, &aot_mem) && ctx.pc == 0x089D1310u) goto L_089D1310;
    return;
L_089D1310:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1320u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 674u, 0x08883288u>(ctx, &aot_mem) && ctx.pc == 0x089D1320u) goto L_089D1320;
    return;
L_089D1320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089D132Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 671u, 0x08883248u>(ctx, &aot_mem) && ctx.pc == 0x089D132Cu) goto L_089D132C;
    return;
L_089D132C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1338u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_089D1264;
L_089D1338:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_089D1308;
      }
      goto L_089D1344;
    }
L_089D1344:
    ctx.gpr[5] = (0u | 260u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D138C;
      }
      goto L_089D1350;
    }
L_089D1350:
    ctx.gpr[31] = (0x089D1358u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 616u, 0x08882DE0u>(ctx, &aot_mem) && ctx.pc == 0x089D1358u) goto L_089D1358;
    return;
L_089D1358:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1368u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 674u, 0x08883288u>(ctx, &aot_mem) && ctx.pc == 0x089D1368u) goto L_089D1368;
    return;
L_089D1368:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089D1374u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 671u, 0x08883248u>(ctx, &aot_mem) && ctx.pc == 0x089D1374u) goto L_089D1374;
    return;
L_089D1374:
    ctx.gpr[31] = (0x089D137Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D137Cu) goto L_089D137C;
    return;
L_089D137C:
    ctx.gpr[31] = (0x089D1384u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089D081C;
L_089D1384:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_089D13A0;
      }
      goto L_089D138C;
    }
L_089D138C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D139Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 674u, 0x08883288u>(ctx, &aot_mem) && ctx.pc == 0x089D139Cu) goto L_089D139C;
    return;
L_089D139C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    goto L_089D13A0;
L_089D13A0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D13ACu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 671u, 0x08883248u>(ctx, &aot_mem) && ctx.pc == 0x089D13ACu) goto L_089D13AC;
    return;
L_089D13AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 266u);
    ctx.gpr[31] = (0x089D13C0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 712u, 0x089CECBCu>(ctx, &aot_mem) && ctx.pc == 0x089D13C0u) goto L_089D13C0;
    return;
L_089D13C0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D13E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1408u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 722u, 0x089CED88u>(ctx, &aot_mem) && ctx.pc == 0x089D1408u) goto L_089D1408;
    return;
L_089D1408:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D1418u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 738u, 0x089CEF04u>(ctx, &aot_mem) && ctx.pc == 0x089D1418u) goto L_089D1418;
    return;
L_089D1418:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D142Cu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 727u, 0x089CEDD0u>(ctx, &aot_mem) && ctx.pc == 0x089D142Cu) goto L_089D142C;
    return;
L_089D142C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D1438u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 689u, 0x0888337Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1438u) goto L_089D1438;
    return;
L_089D1438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1444u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 741u, 0x089CEF8Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1444u) goto L_089D1444;
    return;
L_089D1444:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D145Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 919u, 0x089CFEBCu>(ctx, &aot_mem) && ctx.pc == 0x089D145Cu) goto L_089D145C;
    return;
L_089D145C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D146Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 805u, 0x08883CC0u>(ctx, &aot_mem) && ctx.pc == 0x089D146Cu) goto L_089D146C;
    return;
L_089D146C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(692)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D14B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    goto L_089D14D8;
L_089D14D8:
    ctx.gpr[31] = (0x089D14E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 722u, 0x089CED88u>(ctx, &aot_mem) && ctx.pc == 0x089D14E0u) goto L_089D14E0;
    return;
L_089D14E0:
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D14F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 738u, 0x089CEF04u>(ctx, &aot_mem) && ctx.pc == 0x089D14F4u) goto L_089D14F4;
    return;
L_089D14F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1500u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D1500u) goto L_089D1500;
    return;
L_089D1500:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D14D8;
      }
      goto L_089D1508;
    }
L_089D1508:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1514u);
    ctx.gpr[5] = (0u | 61u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D1514u) goto L_089D1514;
    return;
L_089D1514:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1530;
      }
      goto L_089D151C;
    }
L_089D151C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1528u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 930u, 0x089CFF88u>(ctx, &aot_mem) && ctx.pc == 0x089D1528u) goto L_089D1528;
    return;
L_089D1528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D1538;
      }
      goto L_089D1530;
    }
L_089D1530:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[4] = (0u | 0u);
    goto L_089D1538;
L_089D1538:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D154Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 801u, 0x089CF448u>(ctx, &aot_mem) && ctx.pc == 0x089D154Cu) goto L_089D154C;
    return;
L_089D154C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1558u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 741u, 0x089CEF8Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1558u) goto L_089D1558;
    return;
L_089D1558:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1570:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D159Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 798u, 0x089CF3E8u>(ctx, &aot_mem) && ctx.pc == 0x089D159Cu) goto L_089D159C;
    return;
L_089D159C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D15C4;
      }
      goto L_089D15AC;
    }
L_089D15AC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D15B8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 858u, 0x089CFA34u>(ctx, &aot_mem) && ctx.pc == 0x089D15B8u) goto L_089D15B8;
    return;
L_089D15B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D15AC;
      }
      goto L_089D15C4;
    }
L_089D15C4:
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D15E0;
      }
      goto L_089D15D0;
    }
L_089D15D0:
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D15E0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 858u, 0x089CFA34u>(ctx, &aot_mem) && ctx.pc == 0x089D15E0u) goto L_089D15E0;
    return;
L_089D15E0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
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
L_089D1600:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1624u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D1624u) goto L_089D1624;
    return;
L_089D1624:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1634u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_089D1570;
L_089D1634:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089D164Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 919u, 0x089CFEBCu>(ctx, &aot_mem) && ctx.pc == 0x089D164Cu) goto L_089D164C;
    return;
L_089D164C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D165Cu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 805u, 0x08883CC0u>(ctx, &aot_mem) && ctx.pc == 0x089D165Cu) goto L_089D165C;
    return;
L_089D165C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D1668u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 71u, 0x0888446Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1668u) goto L_089D1668;
    return;
L_089D1668:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1684:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D16ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D0280;
L_089D16AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D16D4;
      }
      goto L_089D16BC;
    }
L_089D16BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D16CCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 713u, 0x088835D4u>(ctx, &aot_mem) && ctx.pc == 0x089D16CCu) goto L_089D16CC;
    return;
L_089D16CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D16E8;
      }
      goto L_089D16D4;
    }
L_089D16D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D16E8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_089D0910;
L_089D16E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1700:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1724u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D1724u) goto L_089D1724;
    return;
L_089D1724:
    ctx.gpr[31] = (0x089D172Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    goto L_089D07E0;
L_089D172C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1744;
      }
      goto L_089D1734;
    }
L_089D1734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 59u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D1750;
      }
      goto L_089D1744;
    }
L_089D1744:
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089D17F0;
      }
      goto L_089D1750;
    }
L_089D1750:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089D1760u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 930u, 0x089CFF88u>(ctx, &aot_mem) && ctx.pc == 0x089D1760u) goto L_089D1760;
    return;
L_089D1760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089D17C0;
      }
      goto L_089D1774;
    }
L_089D1774:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1784u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 713u, 0x088835D4u>(ctx, &aot_mem) && ctx.pc == 0x089D1784u) goto L_089D1784;
    return;
L_089D1784:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D17B4;
      }
      goto L_089D178C;
    }
L_089D178C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 26u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    goto L_089D17B4;
L_089D17B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089D17F0;
      }
      goto L_089D17C0;
    }
L_089D17C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    ctx.gpr[18] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D17E0;
      }
      goto L_089D17CC;
    }
L_089D17CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D17D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 775u, 0x08883B14u>(ctx, &aot_mem) && ctx.pc == 0x089D17D8u) goto L_089D17D8;
    return;
L_089D17D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089D17F0;
      }
      goto L_089D17E0;
    }
L_089D17E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D17ECu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 770u, 0x08883AB8u>(ctx, &aot_mem) && ctx.pc == 0x089D17ECu) goto L_089D17EC;
    return;
L_089D17EC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    goto L_089D17F0;
L_089D17F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1808u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089D1808u) goto L_089D1808;
    return;
L_089D1808:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1850u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D1850u) goto L_089D1850;
    return;
L_089D1850:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1874;
      }
      goto L_089D1858;
    }
L_089D1858:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1874;
      }
      goto L_089D1864;
    }
L_089D1864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] | ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D1850;
      }
      goto L_089D1874;
    }
L_089D1874:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D188C;
      }
      goto L_089D187C;
    }
L_089D187C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D188Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7776));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089D188Cu) goto L_089D188C;
    return;
L_089D188C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D18AC;
      }
      goto L_089D1894;
    }
L_089D1894:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089D18ACu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089D18ACu) goto L_089D18AC;
    return;
L_089D18AC:
    ctx.gpr[16] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x089D18B8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 616u, 0x08882DE0u>(ctx, &aot_mem) && ctx.pc == 0x089D18B8u) goto L_089D18B8;
    return;
L_089D18B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D18C8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 674u, 0x08883288u>(ctx, &aot_mem) && ctx.pc == 0x089D18C8u) goto L_089D18C8;
    return;
L_089D18C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D18E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-258));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089D1A10;
      }
      goto L_089D190C;
    }
L_089D190C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7240)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1924:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1930u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D12B4;
L_089D1930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1A1C;
      }
      goto L_089D1938;
    }
L_089D1938:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1944u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D0B04;
L_089D1944:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1A1C;
      }
      goto L_089D194C;
    }
L_089D194C:
    ctx.gpr[31] = (0x089D1954u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D1954u) goto L_089D1954;
    return;
L_089D1954:
    ctx.gpr[31] = (0x089D195Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D081C;
L_089D195C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 262u);
    ctx.gpr[6] = (0u | 259u);
    ctx.gpr[31] = (0x089D1970u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 712u, 0x089CECBCu>(ctx, &aot_mem) && ctx.pc == 0x089D1970u) goto L_089D1970;
    return;
L_089D1970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1A1C;
      }
      goto L_089D1978;
    }
L_089D1978:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1984u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D1198;
L_089D1984:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1A1C;
      }
      goto L_089D198C;
    }
L_089D198C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1998u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D0D10;
L_089D1998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1A1C;
      }
      goto L_089D19A0;
    }
L_089D19A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D19ACu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_089D1600;
L_089D19AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1A1C;
      }
      goto L_089D19B4;
    }
L_089D19B4:
    ctx.gpr[31] = (0x089D19BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 692u, 0x089CEB54u>(ctx, &aot_mem) && ctx.pc == 0x089D19BCu) goto L_089D19BC;
    return;
L_089D19BC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D19C8u);
    ctx.gpr[5] = (0u | 265u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D19C8u) goto L_089D19C8;
    return;
L_089D19C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D19E0;
      }
      goto L_089D19D0;
    }
L_089D19D0:
    ctx.gpr[31] = (0x089D19D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D13E4;
L_089D19D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D19E8;
      }
      goto L_089D19E0;
    }
L_089D19E0:
    ctx.gpr[31] = (0x089D19E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D14B8;
L_089D19E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1A1C;
      }
      goto L_089D19F0;
    }
L_089D19F0:
    ctx.gpr[31] = (0x089D19F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1700;
L_089D19F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D1A1C;
      }
      goto L_089D1A00;
    }
L_089D1A00:
    ctx.gpr[31] = (0x089D1A08u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1824;
L_089D1A08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089D1A1C;
      }
      goto L_089D1A10;
    }
L_089D1A10:
    ctx.gpr[31] = (0x089D1A18u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D1684;
L_089D1A18:
    ctx.gpr[2] = (0u | 0u);
    goto L_089D1A1C;
L_089D1A1C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1A30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 201 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D1A6C;
      }
      goto L_089D1A5C;
    }
L_089D1A5C:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1A6Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-7924));
    if (rt.invoke_chained_direct<&recomp_unit_0170_entry, 170u, 559u, 0x08AAED60u>(ctx, &aot_mem) && ctx.pc == 0x089D1A6Cu) goto L_089D1A6C;
    return;
L_089D1A6C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1AAC;
      }
      goto L_089D1A74;
    }
L_089D1A74:
    ctx.gpr[31] = (0x089D1A7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    goto L_089D07E0;
L_089D1A7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1AAC;
      }
      goto L_089D1A84;
    }
L_089D1A84:
    ctx.gpr[31] = (0x089D1A8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D18E4;
L_089D1A8C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1A9Cu);
    ctx.gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D1A9Cu) goto L_089D1A9C;
    return;
L_089D1A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D1A6C;
      }
      goto L_089D1AAC;
    }
L_089D1AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1ACC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[23]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1B1Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 80u, 0x08884588u>(ctx, &aot_mem) && ctx.pc == 0x089D1B1Cu) goto L_089D1B1C;
    return;
L_089D1B1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), 0u);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x089D1B40u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 727u, 0x089CEDD0u>(ctx, &aot_mem) && ctx.pc == 0x089D1B40u) goto L_089D1B40;
    return;
L_089D1B40:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089D1B54u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 727u, 0x089CEDD0u>(ctx, &aot_mem) && ctx.pc == 0x089D1B54u) goto L_089D1B54;
    return;
L_089D1B54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x089D1B60u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 770u, 0x08883AB8u>(ctx, &aot_mem) && ctx.pc == 0x089D1B60u) goto L_089D1B60;
    return;
L_089D1B60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1B6Cu);
    ctx.gpr[5] = (0u | 123u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 708u, 0x089CEC78u>(ctx, &aot_mem) && ctx.pc == 0x089D1B6Cu) goto L_089D1B6C;
    return;
L_089D1B6C:
    ctx.gpr[19] = (0u | 125u);
    ctx.gpr[18] = (0u | 278u);
    ctx.gpr[17] = (0u | 61u);
    goto L_089D1B78;
L_089D1B78:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1B84u);
    ctx.gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D1B84u) goto L_089D1B84;
    return;
L_089D1B84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_089D1B98;
      }
      goto L_089D1B90;
    }
L_089D1B90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1C48;
      }
      goto L_089D1B98;
    }
L_089D1B98:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089D1BA4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 880u, 0x089CFC0Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1BA4u) goto L_089D1BA4;
    return;
L_089D1BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 92 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1BD4;
      }
      goto L_089D1BB4;
    }
L_089D1BB4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1C18;
      }
      goto L_089D1BC0;
    }
L_089D1BC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1BCCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 868u, 0x089CFAF8u>(ctx, &aot_mem) && ctx.pc == 0x089D1BCCu) goto L_089D1BCC;
    return;
L_089D1BCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1C24;
      }
      goto L_089D1BD4;
    }
L_089D1BD4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_089D1C18;
      }
      goto L_089D1BDC;
    }
L_089D1BDC:
    ctx.gpr[31] = (0x089D1BE4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 697u, 0x089CEBBCu>(ctx, &aot_mem) && ctx.pc == 0x089D1BE4u) goto L_089D1BE4;
    return;
L_089D1BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_089D1C04;
      }
      goto L_089D1BF0;
    }
L_089D1BF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1BFCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 900u, 0x089CFD68u>(ctx, &aot_mem) && ctx.pc == 0x089D1BFCu) goto L_089D1BFC;
    return;
L_089D1BFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1C10;
      }
      goto L_089D1C04;
    }
L_089D1C04:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1C10u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 868u, 0x089CFAF8u>(ctx, &aot_mem) && ctx.pc == 0x089D1C10u) goto L_089D1C10;
    return;
L_089D1C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D1C24;
      }
      goto L_089D1C18;
    }
L_089D1C18:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1C24u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 900u, 0x089CFD68u>(ctx, &aot_mem) && ctx.pc == 0x089D1C24u) goto L_089D1C24;
    return;
L_089D1C24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D1C30u);
    ctx.gpr[5] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D1C30u) goto L_089D1C30;
    return;
L_089D1C30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089D1B78;
      }
      goto L_089D1C38;
    }
L_089D1C38:
    ctx.gpr[31] = (0x089D1C40u);
    ctx.gpr[5] = (0u | 59u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 703u, 0x089CEC44u>(ctx, &aot_mem) && ctx.pc == 0x089D1C40u) goto L_089D1C40;
    return;
L_089D1C40:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D1B78;
      }
      goto L_089D1C48;
    }
L_089D1C48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 125u);
    ctx.gpr[6] = (0u | 123u);
    ctx.gpr[31] = (0x089D1C5Cu);
    ctx.gpr[7] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 712u, 0x089CECBCu>(ctx, &aot_mem) && ctx.pc == 0x089D1C5Cu) goto L_089D1C5C;
    return;
L_089D1C5C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089D1C68u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0114_entry, 114u, 888u, 0x089CFCA0u>(ctx, &aot_mem) && ctx.pc == 0x089D1C68u) goto L_089D1C68;
    return;
L_089D1C68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (65280u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32767));
    ctx.gpr[17] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[31] = (0x089D1C94u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 175u, 0x08A59170u>(ctx, &aot_mem) && ctx.pc == 0x089D1C94u) goto L_089D1C94;
    return;
L_089D1C94:
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] << 15u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-32768));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-32705));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x089D1CDCu);
    ctx.gpr[17] = (ctx.gpr[7] & ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 178u, 0x08A5919Cu>(ctx, &aot_mem) && ctx.pc == 0x089D1CDCu) goto L_089D1CDC;
    return;
L_089D1CDC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] << 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] & 32704u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1D28:
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1D40:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1D48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    ctx.gpr[20] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 32767u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[21] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D1DA0u);
    ctx.gpr[4] = (0u | 64u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 663u, 0x08AA3190u>(ctx, &aot_mem) && ctx.pc == 0x089D1DA0u) goto L_089D1DA0;
    return;
L_089D1DA0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[5] = (ctx.gpr[20] & 65535u);
      if (branch_taken) {
          goto L_089D1DC8;
      }
      goto L_089D1DAC;
    }
L_089D1DAC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1DC4u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    goto L_089D2074;
L_089D1DC4:
    ctx.gpr[21] = (ctx.gpr[22] | 0u);
    goto L_089D1DC8;
L_089D1DC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D1DF4;
      }
      goto L_089D1DD8;
    }
L_089D1DD8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D1DEC;
      }
      goto L_089D1DE0;
    }
L_089D1DE0:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_089D1DEC;
L_089D1DEC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D1EF0;
      }
      goto L_089D1DF4;
    }
L_089D1DF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(36), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D1E34;
      }
      goto L_089D1E24;
    }
L_089D1E24:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_089D1E40;
      }
      goto L_089D1E34;
    }
L_089D1E34:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(44));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[17]);
    goto L_089D1E40;
L_089D1E40:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089D1E80;
      }
      goto L_089D1E48;
    }
L_089D1E48:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[31] = (0x089D1E5Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 671u, 0x08AA3220u>(ctx, &aot_mem) && ctx.pc == 0x089D1E5Cu) goto L_089D1E5C;
    return;
L_089D1E5C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
      if (branch_taken) {
          goto L_089D1E80;
      }
      goto L_089D1E6C;
    }
L_089D1E6C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D1E78u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 369u, 0x08AF99F0u>(ctx, &aot_mem) && ctx.pc == 0x089D1E78u) goto L_089D1E78;
    return;
L_089D1E78:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_089D1E80;
L_089D1E80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D1E94;
      }
      goto L_089D1E8C;
    }
L_089D1E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_089D1EB0;
      }
      goto L_089D1E94;
    }
L_089D1E94:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D1EA8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x089D1EA8u) goto L_089D1EA8;
    return;
L_089D1EA8:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_089D1EB0;
L_089D1EB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D1EC8;
      }
      goto L_089D1EB8;
    }
L_089D1EB8:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089D1EB8;
      }
      goto L_089D1EC8;
    }
L_089D1EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D1EDC;
      }
      goto L_089D1ED4;
    }
L_089D1ED4:
    ctx.gpr[31] = (0x089D1EDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 679u, 0x08AA32B0u>(ctx, &aot_mem) && ctx.pc == 0x089D1EDCu) goto L_089D1EDC;
    return;
L_089D1EDC:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_089D1EF0;
L_089D1EF0:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
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
L_089D1F20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1FA4;
      }
      goto L_089D1F44;
    }
L_089D1F44:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D1F98;
      }
      goto L_089D1F54;
    }
L_089D1F54:
    ctx.gpr[31] = (0x089D1F5Cu);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x089D1F5Cu) goto L_089D1F5C;
    return;
L_089D1F5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1F8C;
      }
      goto L_089D1F6C;
    }
L_089D1F6C:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D1F8C;
      }
      goto L_089D1F78;
    }
L_089D1F78:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089D1F88u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 548u, 0x08932C98u>(ctx, &aot_mem) && ctx.pc == 0x089D1F88u) goto L_089D1F88;
    return;
L_089D1F88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    goto L_089D1F8C;
L_089D1F8C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D1FA4;
      }
      goto L_089D1F98;
    }
L_089D1F98:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1F44;
      }
      goto L_089D1FA4;
    }
L_089D1FA4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D1FB8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D2000;
      }
      goto L_089D1FE0;
    }
L_089D1FE0:
    ctx.gpr[31] = (0x089D1FE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x089D1FE8u) goto L_089D1FE8;
    return;
L_089D1FE8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D1FE0;
      }
      goto L_089D1FFC;
    }
L_089D1FFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    goto L_089D2000;
L_089D2000:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2020:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D2060;
      }
      goto L_089D2044;
    }
L_089D2044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089D2050u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_089D2100;
L_089D2050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D2044;
      }
      goto L_089D2060;
    }
L_089D2060:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2074:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[8] >> 8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[8] >> 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(54), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D20EC;
      }
      goto L_089D20DC;
    }
L_089D20DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x089D20E8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2F00u>(ctx, &aot_mem) && ctx.pc == 0x089D20E8u) goto L_089D20E8;
    return;
L_089D20E8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089D20EC;
L_089D20EC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2100:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (16179u << 16u);
      if (branch_taken) {
          goto L_089D2170;
      }
      goto L_089D2120;
    }
L_089D2120:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(53)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(54)));
    ctx.gpr[2] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (17096u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[10] = (0u | 128u);
    ctx.gpr[11] = (0u | 128u);
    ctx.gpr[31] = (0x089D2170u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x089D2170u) goto L_089D2170;
    return;
L_089D2170:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2180:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28180)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-28184)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-28176), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-28168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-28172), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-28164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-28160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D21F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D220Cu);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 41u, 0x08A28860u>(ctx, &aot_mem) && ctx.pc == 0x089D220Cu) goto L_089D220C;
    return;
L_089D220C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(80), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), 0u);
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089D2298;
      }
      goto L_089D2250;
    }
L_089D2250:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089D2288;
      }
      goto L_089D2258;
    }
L_089D2258:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089D2288;
      }
      goto L_089D2260;
    }
L_089D2260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_089D2288;
      }
      goto L_089D2270;
    }
L_089D2270:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
        goto L_089D2288;
    }
    goto L_089D227C;
L_089D227C:
    ctx.gpr[31] = (0x089D2284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 263u, 0x08A1D574u>(ctx, &aot_mem) && ctx.pc == 0x089D2284u) goto L_089D2284;
    return;
L_089D2284:
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    goto L_089D2288;
L_089D2288:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2298;
      }
      goto L_089D2290;
    }
L_089D2290:
    ctx.gpr[31] = (0x089D2298u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 667u, 0x08AA31D8u>(ctx, &aot_mem) && ctx.pc == 0x089D2298u) goto L_089D2298;
    return;
L_089D2298:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D22AC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-28096));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17952), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17948), 0u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17944), ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-144));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[6] = (0u | 69u);
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[7] = (ctx.gpr[10] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[10] + ctx.gpr[5]);
    goto L_089D22F0;
L_089D22F0:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2300;
      }
      goto L_089D22F8;
    }
L_089D22F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_089D2304;
      }
      goto L_089D2300;
    }
L_089D2300:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(84), ctx.gpr[7]);
    goto L_089D2304;
L_089D2304:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089D2314;
      }
      goto L_089D230C;
    }
L_089D230C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_089D2318;
      }
      goto L_089D2314;
    }
L_089D2314:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    goto L_089D2318;
L_089D2318:
    aot_mem.aot_store16(ctx.gpr[8] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(144));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[9]) < 70 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_089D22F0;
      }
      goto L_089D2334;
    }
L_089D2334:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D233C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(49), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D237Cu);
    ctx.gpr[7] = (0u | 0u);
    goto L_089D2840;
L_089D237C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2388:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D23D4;
      }
      goto L_089D23A8;
    }
L_089D23A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089D2410;
      }
      goto L_089D23B0;
    }
L_089D23B0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17952));
    ctx.gpr[31] = (0x089D23C8u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17944));
    goto L_089D2664;
L_089D23C8:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2410;
      }
      goto L_089D23D4;
    }
L_089D23D4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_089D23EC;
      }
      goto L_089D23DC;
    }
L_089D23DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2410;
      }
      goto L_089D23E4;
    }
L_089D23E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2410;
      }
      goto L_089D23EC;
    }
L_089D23EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17948));
    ctx.gpr[31] = (0x089D2404u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17944));
    goto L_089D2664;
L_089D2404:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2410;
      }
      goto L_089D2410;
    }
L_089D2410:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2420:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2232u << 16u);
        goto L_089D248C;
    }
    goto L_089D243C;
L_089D243C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089D248C;
      }
      goto L_089D2450;
    }
L_089D2450:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17948));
    ctx.gpr[31] = (0x089D2468u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17944));
    goto L_089D2664;
L_089D2468:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089D248C;
      }
      goto L_089D2480;
    }
L_089D2480:
    ctx.gpr[31] = (0x089D2488u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089D2780;
L_089D2488:
    ctx.gpr[4] = (2232u << 16u);
    goto L_089D248C;
L_089D248C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D24F4;
      }
      goto L_089D24D4;
    }
L_089D24D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17948));
    ctx.gpr[31] = (0x089D24ECu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17952));
    goto L_089D2664;
L_089D24EC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089D24F4;
L_089D24F4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2504:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17952)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D253C;
      }
      goto L_089D2528;
    }
L_089D2528:
    ctx.gpr[31] = (0x089D2530u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    goto L_089D2D24;
L_089D2530:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2528;
      }
      goto L_089D253C;
    }
L_089D253C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17948)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8100)));
    ctx.gpr[17] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] & 31u);
      if (branch_taken) {
          goto L_089D2578;
      }
      goto L_089D2558;
    }
L_089D2558:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[17];
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089D256C;
      }
      goto L_089D2560;
    }
L_089D2560:
    ctx.gpr[31] = (0x089D2568u);
    // nop
    goto L_089D2420;
L_089D2568:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    goto L_089D256C;
L_089D256C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_089D2558;
      }
      goto L_089D2578;
    }
L_089D2578:
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
L_089D2590:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[20] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-17952)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_089D25FC;
      }
      goto L_089D25C0;
    }
L_089D25C0:
    ctx.gpr[17] = (2229u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-17952));
    ctx.gpr[16] = (0u | 3u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-17944));
    goto L_089D25D0;
L_089D25D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089D25F0;
      }
      goto L_089D25DC;
    }
L_089D25DC:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D25ECu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089D2664;
L_089D25EC:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[16]));
    goto L_089D25F0;
L_089D25F0:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D25D0;
      }
      goto L_089D25FC;
    }
L_089D25FC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-17948)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089D2640;
      }
      goto L_089D2608;
    }
L_089D2608:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-17948));
    ctx.gpr[16] = (0u | 3u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-17944));
    goto L_089D2614;
L_089D2614:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089D2634;
      }
      goto L_089D2620;
    }
L_089D2620:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D2630u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    goto L_089D2664;
L_089D2630:
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[16]));
    goto L_089D2634;
L_089D2634:
    ctx.gpr[18] = (ctx.gpr[20] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2614;
      }
      goto L_089D2640;
    }
L_089D2640:
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
L_089D2664:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_089D2688;
      }
      goto L_089D2670;
    }
L_089D2670:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D26A4;
      }
      goto L_089D2680;
    }
L_089D2680:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(84), 0u);
      if (branch_taken) {
          goto L_089D26A4;
      }
      goto L_089D2688;
    }
L_089D2688:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D2698;
      }
      goto L_089D2690;
    }
L_089D2690:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(80), 0u);
      if (branch_taken) {
          goto L_089D26A4;
      }
      goto L_089D2698;
    }
L_089D2698:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(84), ctx.gpr[8]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    goto L_089D26A4;
L_089D26A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(84), 0u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D26C4;
      }
      goto L_089D26C0;
    }
L_089D26C0:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
    goto L_089D26C4;
L_089D26C4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D26CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-18016));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-5));
    goto L_089D26F8;
L_089D26F8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089D2750;
      }
      goto L_089D2704;
    }
L_089D2704:
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8107));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x089D271Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 96u, 0x08864718u>(ctx, &aot_mem) && ctx.pc == 0x089D271Cu) goto L_089D271C;
    return;
L_089D271C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
      if (branch_taken) {
          goto L_089D2730;
      }
      goto L_089D2728;
    }
L_089D2728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D2764;
      }
      goto L_089D2730;
    }
L_089D2730:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089D2744u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 100u, 0x08864758u>(ctx, &aot_mem) && ctx.pc == 0x089D2744u) goto L_089D2744;
    return;
L_089D2744:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089D2764;
      }
      goto L_089D2750;
    }
L_089D2750:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D26F8;
      }
      goto L_089D2760;
    }
L_089D2760:
    ctx.gpr[2] = (0u | 0u);
    goto L_089D2764;
L_089D2764:
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
L_089D2780:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-18016));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-8107));
    goto L_089D27B8;
L_089D27B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_089D27D8;
      }
      goto L_089D27C4;
    }
L_089D27C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089D27D0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 98u, 0x08864738u>(ctx, &aot_mem) && ctx.pc == 0x089D27D0u) goto L_089D27D0;
    return;
L_089D27D0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    goto L_089D27D8;
L_089D27D8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_089D27B8;
      }
      goto L_089D27E8;
    }
L_089D27E8:
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
L_089D2808:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (2205u << 16u);
    ctx.gpr[5] = (0u | 70u);
    ctx.gpr[6] = (0u | 144u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-28096));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x089D2834u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(8756));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 366u, 0x08AF5CA4u>(ctx, &aot_mem) && ctx.pc == 0x089D2834u) goto L_089D2834;
    return;
L_089D2834:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2840:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17944)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[9] & 255u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[19] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_089D2908;
      }
      goto L_089D2890;
    }
L_089D2890:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-17944));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17952));
    ctx.gpr[31] = (0x089D28A4u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    goto L_089D2664;
L_089D28A4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[20]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(140), static_cast<std::uint8_t>(ctx.gpr[21]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(88), 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089D291C;
      }
      goto L_089D28F4;
    }
L_089D28F4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D2920;
      }
      goto L_089D2908;
    }
L_089D2908:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089D2914u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7144));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 382u, 0x08AF9A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089D2914u) goto L_089D2914;
    return;
L_089D2914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089D2CF8;
      }
      goto L_089D291C;
    }
L_089D291C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), 0u);
    goto L_089D2920;
L_089D2920:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(3)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D293C;
      }
      goto L_089D292C;
    }
L_089D292C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
      if (branch_taken) {
          goto L_089D2940;
      }
      goto L_089D293C;
    }
L_089D293C:
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(139), static_cast<std::uint8_t>(0u));
    goto L_089D2940;
L_089D2940:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[20] < static_cast<std::uint32_t>(21) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2950;
    }
L_089D2950:
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[20]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7096)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2968:
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2988;
    }
L_089D2988:
    ctx.gpr[5] = (0u | 31u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D29A4;
    }
L_089D29A4:
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D29C4;
    }
L_089D29C4:
    ctx.gpr[5] = (0u | 31u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D29E0;
    }
L_089D29E0:
    ctx.gpr[5] = (0u | 30u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 16u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2A24;
    }
L_089D2A24:
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2A64;
    }
L_089D2A64:
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2A7C;
    }
L_089D2A7C:
    ctx.gpr[5] = (0u | 47u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2ACCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_089D26CC;
L_089D2ACC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2AD4;
    }
L_089D2AD4:
    ctx.gpr[4] = (0u | 81u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2B04;
    }
L_089D2B04:
    ctx.gpr[5] = (0u | 44u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2B1C;
    }
L_089D2B1C:
    ctx.gpr[4] = (0u | 26u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2B3C;
    }
L_089D2B3C:
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2B78;
    }
L_089D2B78:
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2BB4;
    }
L_089D2BB4:
    ctx.gpr[5] = (0u | 20u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2BE8;
    }
L_089D2BE8:
    ctx.gpr[5] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2C1C;
    }
L_089D2C1C:
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2C4C;
    }
L_089D2C4C:
    ctx.gpr[5] = (0u | 58u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2C78;
    }
L_089D2C78:
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2CA0;
    }
L_089D2CA0:
    ctx.gpr[5] = (0u | 13u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2CD0;
    }
L_089D2CD0:
    ctx.gpr[5] = (0u | 41u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(100), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(104), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(105), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(141), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-8148)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089D2CF4;
      }
      goto L_089D2CF4;
    }
L_089D2CF4:
    ctx.gpr[2] = (ctx.gpr[22] | 0u);
    goto L_089D2CF8;
L_089D2CF8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2D24:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1312));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29512)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1244), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1256), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1260), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1264), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1268), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1272), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1276), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1280), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1284), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1288), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1292), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1296), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1300), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1304), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089D2E30;
      }
      goto L_089D2D78;
    }
L_089D2D78:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12960));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(52)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[4] = (17948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D2E30;
      }
      goto L_089D2DC4;
    }
L_089D2DC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(140)));
    ctx.gpr[16] = (2229u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-17952));
      if (branch_taken) {
          goto L_089D2E0C;
      }
      goto L_089D2DD4;
    }
L_089D2DD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089D2DEC;
      }
      goto L_089D2DE4;
    }
L_089D2DE4:
    ctx.gpr[31] = (0x089D2DECu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_089D2780;
L_089D2DEC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089D2E00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17944));
    goto L_089D2664;
L_089D2E00:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089D2E28;
      }
      goto L_089D2E0C;
    }
L_089D2E0C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x089D2E20u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-17948));
    goto L_089D2664;
L_089D2E20:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(108), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_089D2E28;
L_089D2E28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 125u, 0x089D530Cu>(ctx, &aot_mem); return;
      }
      goto L_089D2E30;
    }
L_089D2E30:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(106)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(105)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(106)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 120u, 0x089D52B0u>(ctx, &aot_mem); return;
      }
      goto L_089D2E50;
    }
L_089D2E50:
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(106), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2E78;
      }
      goto L_089D2E60;
    }
L_089D2E60:
    ctx.gpr[31] = (0x089D2E68u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089D2E68u) goto L_089D2E68;
    return;
L_089D2E68:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.hi);
    goto L_089D2E78;
L_089D2E78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D2E8C;
      }
      goto L_089D2E80;
    }
L_089D2E80:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) > 0;
    // nop
      if (branch_taken) {
          goto L_089D2EAC;
      }
      goto L_089D2E8C;
    }
L_089D2E8C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
        goto L_089D2EA4;
    }
    goto L_089D2E94;
L_089D2E94:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_089D2EAC;
      }
      goto L_089D2EA0;
    }
L_089D2EA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(141))))));
    goto L_089D2EA4;
L_089D2EA4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 119u, 0x089D52ACu>(ctx, &aot_mem); return;
      }
      goto L_089D2EAC;
    }
L_089D2EAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(15) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 100u, 0x089D5108u>(ctx, &aot_mem); return;
      }
      goto L_089D2EC0;
    }
L_089D2EC0:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-7008)));
    jump_target = ctx.gpr[1];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089D2ED8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2F24u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D2F24u) goto L_089D2F24;
    return;
L_089D2F24:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D2F5Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089D2F5Cu) goto L_089D2F5C;
    return;
L_089D2F5C:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (16160u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2F84u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D2F84u) goto L_089D2F84;
    return;
L_089D2F84:
    ctx.fpr[14] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D2FA4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D2FA4u) goto L_089D2FA4;
    return;
L_089D2FA4:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089D2FCCu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D2FCCu) goto L_089D2FCC;
    return;
L_089D2FCC:
    ctx.fpr[14] = ctx.fpr[20] - ctx.fpr[24];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[24] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D300Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089D300Cu) goto L_089D300C;
    return;
L_089D300C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 119u, 0x089D52ACu>(ctx, &aot_mem); return;
      }
      goto L_089D3014;
    }
L_089D3014:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (15436u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x089D306Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D306Cu) goto L_089D306C;
    return;
L_089D306C:
    ctx.fpr[15] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[20] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 13u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D30B0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089D30B0u) goto L_089D30B0;
    return;
L_089D30B0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (48928u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[4] = (16160u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[4] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    goto L_089D30E4;
L_089D30E4:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x089D30F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D30F4u) goto L_089D30F4;
    return;
L_089D30F4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3114u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3114u) goto L_089D3114;
    return;
L_089D3114:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3134u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3134u) goto L_089D3134;
    return;
L_089D3134:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 57u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D3174u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089D3174u) goto L_089D3174;
    return;
L_089D3174:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D30E4;
      }
      goto L_089D3184;
    }
L_089D3184:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 119u, 0x089D52ACu>(ctx, &aot_mem); return;
      }
      goto L_089D318C;
    }
L_089D318C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_089D3204;
      }
      goto L_089D31A0;
    }
L_089D31A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D31F8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089D31F8u) goto L_089D31F8;
    return;
L_089D31F8:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3304;
      }
      goto L_089D3204;
    }
L_089D3204:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3304;
      }
      goto L_089D325C;
    }
L_089D325C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x089D3268u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3268u) goto L_089D3268;
    return;
L_089D3268:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x089D328Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D328Cu) goto L_089D328C;
    return;
L_089D328C:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[28];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[31] = (0x089D32B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D32B0u) goto L_089D32B0;
    return;
L_089D32B0:
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (0u | 58u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[13] = ctx.fpr[15] + ctx.fpr[13];
    ctx.gpr[31] = (0x089D32F0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089D32F0u) goto L_089D32F0;
    return;
L_089D32F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D325C;
      }
      goto L_089D3304;
    }
L_089D3304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 119u, 0x089D52ACu>(ctx, &aot_mem); return;
      }
      goto L_089D330C;
    }
L_089D330C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(88)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[23] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_089D3368;
      }
      goto L_089D331C;
    }
L_089D331C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(132)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 40u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D335Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089D335Cu) goto L_089D335C;
    return;
L_089D335C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(88), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3408;
      }
      goto L_089D3368;
    }
L_089D3368:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(88)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(132)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3408;
      }
      goto L_089D33CC;
    }
L_089D33CC:
    ctx.gpr[4] = (0u | 58u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D33F4u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089D33F4u) goto L_089D33F4;
    return;
L_089D33F4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089D33CC;
      }
      goto L_089D3408;
    }
L_089D3408:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 119u, 0x089D52ACu>(ctx, &aot_mem); return;
      }
      goto L_089D3410;
    }
L_089D3410:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1168), ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089D3588;
      }
      goto L_089D3428;
    }
L_089D3428:
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17932)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17936)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17924)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(112));
    ctx.gpr[23] = (ctx.gpr[30] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17928)));
    goto L_089D3454;
L_089D3454:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D3494;
      }
      goto L_089D3470;
    }
L_089D3470:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x089D347Cu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D347Cu) goto L_089D347C;
    return;
L_089D347C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089D3494;
L_089D3494:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D34CC;
      }
      goto L_089D34A8;
    }
L_089D34A8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x089D34B4u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D34B4u) goto L_089D34B4;
    return;
L_089D34B4:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089D34CC;
L_089D34CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089D3504;
      }
      goto L_089D34E0;
    }
L_089D34E0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(128)));
    ctx.gpr[31] = (0x089D34ECu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D34ECu) goto L_089D34EC;
    return;
L_089D34EC:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089D3504;
L_089D3504:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1188), ctx.gpr[22]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x089D3514u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(132)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 302u, 0x0894DB08u>(ctx, &aot_mem) && ctx.pc == 0x089D3514u) goto L_089D3514;
    return;
L_089D3514:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089D3528u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 370u, 0x08AF5CE0u>(ctx, &aot_mem) && ctx.pc == 0x089D3528u) goto L_089D3528;
    return;
L_089D3528:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089D3574u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 85u, 0x089986E8u>(ctx, &aot_mem) && ctx.pc == 0x089D3574u) goto L_089D3574;
    return;
L_089D3574:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[30] + static_cast<std::uint32_t>(104)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1188)));
      if (branch_taken) {
          goto L_089D3454;
      }
      goto L_089D3588;
    }
L_089D3588:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 119u, 0x089D52ACu>(ctx, &aot_mem); return;
      }
      goto L_089D3590;
    }
L_089D3590:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(304), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(305), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(306), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(307), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (15651u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15779u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), ctx.gpr[4]);
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(2256));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(6352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), ctx.gpr[30]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[23]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089D3644;
L_089D3644:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089D365Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D365Cu) goto L_089D365C;
    return;
L_089D365C:
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D36B4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089D36B4u) goto L_089D36B4;
    return;
L_089D36B4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D36E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D36E8u) goto L_089D36E8;
    return;
L_089D36E8:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3730u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3730u) goto L_089D3730;
    return;
L_089D3730:
    ctx.gpr[31] = (0x089D3738u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3738u) goto L_089D3738;
    return;
L_089D3738:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D377Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D377Cu) goto L_089D377C;
    return;
L_089D377C:
    ctx.gpr[31] = (0x089D3784u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3784u) goto L_089D3784;
    return;
L_089D3784:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1224)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D37C8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089D37C8u) goto L_089D37C8;
    return;
L_089D37C8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D37F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D37F8u) goto L_089D37F8;
    return;
L_089D37F8:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3840u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3840u) goto L_089D3840;
    return;
L_089D3840:
    ctx.gpr[31] = (0x089D3848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3848u) goto L_089D3848;
    return;
L_089D3848:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3884u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3884u) goto L_089D3884;
    return;
L_089D3884:
    ctx.gpr[31] = (0x089D388Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D388Cu) goto L_089D388C;
    return;
L_089D388C:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1224)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D38D0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089D38D0u) goto L_089D38D0;
    return;
L_089D38D0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D38FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D38FCu) goto L_089D38FC;
    return;
L_089D38FC:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3944u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3944u) goto L_089D3944;
    return;
L_089D3944:
    ctx.gpr[31] = (0x089D394Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D394Cu) goto L_089D394C;
    return;
L_089D394C:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3984u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3984u) goto L_089D3984;
    return;
L_089D3984:
    ctx.gpr[31] = (0x089D398Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D398Cu) goto L_089D398C;
    return;
L_089D398C:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[20] + ctx.fpr[12];
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D39C8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089D39C8u) goto L_089D39C8;
    return;
L_089D39C8:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D39F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D39F4u) goto L_089D39F4;
    return;
L_089D39F4:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 66u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3A38u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3A38u) goto L_089D3A38;
    return;
L_089D3A38:
    ctx.gpr[31] = (0x089D3A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3A40u) goto L_089D3A40;
    return;
L_089D3A40:
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3A74u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3A74u) goto L_089D3A74;
    return;
L_089D3A74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1160)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(360));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(360));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1160), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1216)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
      if (branch_taken) {
          goto L_089D3644;
      }
      goto L_089D3A9C;
    }
L_089D3A9C:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[4] = (48768u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1180)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    goto L_089D3AD8;
L_089D3AD8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(720)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(720)));
    ctx.gpr[31] = (0x089D3AF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3AF0u) goto L_089D3AF0;
    return;
L_089D3AF0:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1196), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[26] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1228), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1204), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089D3B58u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3B58u) goto L_089D3B58;
    return;
L_089D3B58:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3B7Cu);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3B7Cu) goto L_089D3B7C;
    return;
L_089D3B7C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3B9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3B9Cu) goto L_089D3B9C;
    return;
L_089D3B9C:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1216)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3BE4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3BE4u) goto L_089D3BE4;
    return;
L_089D3BE4:
    ctx.gpr[31] = (0x089D3BECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3BECu) goto L_089D3BEC;
    return;
L_089D3BEC:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[22] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1236), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089D3C40u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3C40u) goto L_089D3C40;
    return;
L_089D3C40:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3C64u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3C64u) goto L_089D3C64;
    return;
L_089D3C64:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3C8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3C8Cu) goto L_089D3C8C;
    return;
L_089D3C8C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3CD0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3CD0u) goto L_089D3CD0;
    return;
L_089D3CD0:
    ctx.gpr[31] = (0x089D3CD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3CD8u) goto L_089D3CD8;
    return;
L_089D3CD8:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[30] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[30] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1224), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1192), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1204)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089D3D2Cu);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3D2Cu) goto L_089D3D2C;
    return;
L_089D3D2C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3D54u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3D54u) goto L_089D3D54;
    return;
L_089D3D54:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1200)));
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3D78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3D78u) goto L_089D3D78;
    return;
L_089D3D78:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1224)));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3DBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3DBCu) goto L_089D3DBC;
    return;
L_089D3DBC:
    ctx.gpr[31] = (0x089D3DC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3DC4u) goto L_089D3DC4;
    return;
L_089D3DC4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1196)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1192)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089D3E10u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3E10u) goto L_089D3E10;
    return;
L_089D3E10:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1212)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3E38u);
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3E38u) goto L_089D3E38;
    return;
L_089D3E38:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[12] = ctx.fpr[28] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089D3E5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3E5Cu) goto L_089D3E5C;
    return;
L_089D3E5C:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089D3EA0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 276u, 0x089999ACu>(ctx, &aot_mem) && ctx.pc == 0x089D3EA0u) goto L_089D3EA0;
    return;
L_089D3EA0:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(720));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(720));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 1 ? 1u : 0u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1208)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
      if (branch_taken) {
          goto L_089D3AD8;
      }
      goto L_089D3EC0;
    }
L_089D3EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 119u, 0x089D52ACu>(ctx, &aot_mem); return;
      }
      goto L_089D3EC8;
    }
L_089D3EC8:
    ctx.gpr[4] = (0u | 255u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(464), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(465), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(466), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 196u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(467), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1168)));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16416u << 16u);
    ctx.gpr[31] = (0x089D3F34u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3F34u) goto L_089D3F34;
    return;
L_089D3F34:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[28];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[12];
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (2275u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1156), ctx.gpr[4]);
    ctx.gpr[30] = (ctx.gpr[5] + static_cast<std::uint32_t>(2256));
    ctx.gpr[4] = (2275u << 16u);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(6352));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1184), ctx.gpr[30]);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1180), ctx.gpr[23]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089D3F84;
L_089D3F84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1220), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1232), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[30] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[30] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1216), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1200), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089D3FD4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x0892753Cu>(ctx, &aot_mem) && ctx.pc == 0x089D3FD4u) goto L_089D3FD4;
    return;
L_089D3FD4:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x089D3FE4u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 305u, 0x0894DB70u>(ctx, &aot_mem) && ctx.pc == 0x089D3FE4u) goto L_089D3FE4;
    return;
L_089D3FE4:
    ctx.fpr[13] = ctx.fpr[26] - ctx.fpr[20];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1220)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[30] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.pc = 0x089D4000u; return;
}

void recomp_unit_0115(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0115_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_115(Runtime &runtime) {
    runtime.register_generated_unit(115u, 0x089D0000u, 16384u, &recomp_unit_0115, &recomp_unit_0115_entry);
    runtime.register_function(0x089D0000u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0038u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0044u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D004Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D005Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D006Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0074u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0080u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0088u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0098u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D00FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D010Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D011Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0124u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D012Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0134u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D013Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0148u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0158u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0170u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0180u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D018Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0194u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D01F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0200u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0208u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0210u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0220u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0228u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0234u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0240u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0254u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0260u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0268u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0280u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D02F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0300u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D030Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0314u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D031Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0324u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0330u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0338u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0344u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0354u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0364u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D036Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0374u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0384u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0394u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D03E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D040Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0418u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0424u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D042Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0434u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D044Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0458u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0468u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0470u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0478u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0488u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0490u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0498u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D04F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0500u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0514u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D051Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0528u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D053Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0548u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0554u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D055Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0564u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D056Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0570u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0578u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0584u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0590u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D059Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D05FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0604u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D060Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0614u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D061Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0624u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D062Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0634u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D063Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0644u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D064Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0650u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0658u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D06F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0700u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D070Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0710u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0718u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0724u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D072Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0740u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0748u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0758u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0768u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0780u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0788u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D07F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0808u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0810u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0814u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D081Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0844u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D084Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0854u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0868u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0888u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D088Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0898u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D08F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0900u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0910u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0950u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D095Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D096Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0978u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0980u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0994u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D09F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0A80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0AF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0B90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0BD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0C98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0CE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0D98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0DFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E70u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0E9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0ED0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0ED8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0EF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0F98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FCCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D0FF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1000u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D100Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1024u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D102Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1044u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1064u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D10FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1104u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1110u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1124u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1138u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1144u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D115Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1174u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1198u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D11FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1204u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D120Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1218u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1220u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1230u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1244u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D124Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1264u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1280u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D128Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1298u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D12F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1308u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1310u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1320u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D132Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1338u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1344u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1350u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1358u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1368u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1374u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D137Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1384u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D138Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D139Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D13E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1408u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1418u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D142Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1438u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1444u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D145Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D146Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D14F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1500u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1508u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1514u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D151Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1528u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1530u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1538u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D154Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1558u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1570u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D159Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D15E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1600u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1624u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1634u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D164Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D165Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1668u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1684u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D16E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1700u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1724u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D172Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1734u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1744u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1750u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1760u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1774u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1784u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D178Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D17F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1808u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1824u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1850u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1858u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1864u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1874u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D187Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D188Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1894u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D18E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D190Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1924u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1930u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1938u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1944u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D194Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1954u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D195Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1970u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1978u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1984u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D198Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1998u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19BCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D19F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A08u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1A9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1AACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ACCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B90u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1B98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BCCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1BFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C18u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1C94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1CDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1D48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1DF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E48u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1E94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EA8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EB0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1ED4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EDCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1EF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F44u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F6Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F88u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1F98u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FB8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FE0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D1FFCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2000u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2020u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2044u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2050u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2060u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2074u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D20ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2100u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2120u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2170u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2180u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D21F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D220Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2234u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2250u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2258u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2260u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2270u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D227Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2284u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2288u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2290u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2298u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22ACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D22F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2300u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D230Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2314u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2318u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2334u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D233Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D237Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2388u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D23ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2404u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2410u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2420u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D243Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2450u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2468u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2480u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2488u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D248Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24D4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D24F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2504u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2528u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2530u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D253Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2558u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2560u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2568u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D256Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2578u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2590u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25DCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D25FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2608u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2614u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2620u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2630u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2634u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2640u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2664u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2670u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2680u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2688u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2690u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2698u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26C0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D26F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2704u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D271Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2728u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2730u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2744u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2750u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2760u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2764u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2780u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27B8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27D8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D27E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2808u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2834u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2840u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2890u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D28F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2908u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2914u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D291Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2920u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D292Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D293Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2940u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2950u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2968u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2988u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29A4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29C4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D29E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2A7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2ACCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2AD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B04u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B3Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2B78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BB4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2BE8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C1Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C4Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2C78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CF4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2CF8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2D78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2DECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E00u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E0Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E20u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E28u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E30u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E50u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E60u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E68u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E80u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2E94u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EACu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2EC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2ED8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F24u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2F84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FA4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D2FCCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D300Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3014u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D306Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30E4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D30F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3114u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3134u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3174u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3184u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D318Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31A0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D31F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3204u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D325Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3268u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D328Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32B0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D32F0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3304u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D330Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D331Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D335Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3368u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D33F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3408u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3410u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3428u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3454u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3470u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D347Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3494u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34A8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34CCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34E0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D34ECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3504u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3514u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3528u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3574u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3588u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3590u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3644u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D365Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36B4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D36E8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3730u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3738u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D377Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3784u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D37F8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3840u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3848u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3884u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D388Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38D0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D38FCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3944u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D394Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3984u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D398Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D39C8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D39F4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A74u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3A9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3AF0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B58u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B7Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3B9Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BE4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3BECu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C40u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C64u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3C8Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CD0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3CD8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D2Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D54u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3D78u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3DBCu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3DC4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E10u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E38u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3E5Cu, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3EA0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3EC0u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3EC8u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F34u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3F84u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FD4u, &recomp_unit_0115, "recomp_unit_0115");
    runtime.register_function(0x089D3FE4u, &recomp_unit_0115, "recomp_unit_0115");
}
} // namespace psprecomp
