/* Copyright 2022 Eetu Harjunpää
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
#pragma once

#include "config_common.h"

/* USB Device descriptor parameter */
#define VENDOR_ID 0x4B4C
#define PRODUCT_ID 0x6060
#define DEVICE_VER 0x0001
#define MANUFACTURER lukeraphael
#define PRODUCT Elixir

/* key matrix size */
#define MATRIX_ROWS 4
#define MATRIX_COLS 13

/* key matrix pins */
#define MATRIX_ROW_PINS { D3, D2, D1, D0 }
#define MATRIX_COL_PINS { F4, F5, F6, F7, B1, B3, B2, B6, B5, B4, D7, C6, D4 }

#define DIODE_DIRECTION COL2ROW

#define MATRIX_IO_DELAY 5
#define TAP_CODE_DELAY 10

/* Debounce reduces chatter (unintended double-presses) - set 0 if debouncing is not needed */
#define DEBOUNCE 5
