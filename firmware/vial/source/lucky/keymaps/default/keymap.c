// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

[0] = LAYOUT(
        KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,   KC_P7, KC_P8, KC_P9,   KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,
        KC_A,    KC_S,    KC_D,    KC_F,    KC_G,   KC_P4, KC_P5, KC_P6,   KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN,
        KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,   KC_P1, KC_P2, KC_P3,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,
        KC_LCTL, KC_LGUI, KC_LALT,          KC_SPC, KC_P0, KC_PDOT,        KC_BSPC, KC_RALT, KC_RGUI, KC_RCTL
            )
};