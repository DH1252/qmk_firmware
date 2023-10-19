// Copyright 2023 DH1252 (@DH1252)
// SPDX-License-Identifier: GPL-2.0-or-later

#pragma once

#define WEAR_LEVELING_LOGICAL_SIZE 4096
#define WEAR_LEVELING_BACKING_SIZE 8192
#define DEBOUNCE 3
#define DEBUG_MATRIX_SCAN_RATE
/*
 * Feature disable options
 *  These options are also useful to firmware size reduction.
 */

/* disable debug print */
//#define NO_DEBUG

/* disable print */
//#define NO_PRINT

/* disable action features */
//#define NO_ACTION_LAYER
//#define NO_ACTION_TAPPING
//#define NO_ACTION_ONESHOT
