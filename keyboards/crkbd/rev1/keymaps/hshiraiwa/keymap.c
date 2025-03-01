/*
Copyright 2019 @foostan
Copyright 2020 Drashna Jaelre <@drashna>

This program is free software: you can redistribute it and/or modify
it under the terms of the GNU General Public License as published by
the Free Software Foundation, either version 2 of the License, or
(at your option) any later version.

This program is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
GNU General Public License for more details.

You should have received a copy of the GNU General Public License
along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/

#include QMK_KEYBOARD_H

enum my_keycodes {
  EX_A= SAFE_RANGE,
  EX_D
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT_split_3x6_3(KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC, KC_TAB, KC_A, LALT_T(KC_S), LCTL_T(KC_D), LSFT_T(KC_F), LT(2,KC_G), LT(1,KC_H), LSFT_T(KC_J), LCTL_T(KC_K), LALT_T(KC_L), KC_SCLN, KC_QUOT, KC_TRNS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, MO(3), KC_LSFT, KC_LGUI, LT(1,KC_SPC), LT(2,KC_ENT), KC_TAB, KC_LSFT),
	[1] = LAYOUT_split_3x6_3(KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_PEQL, KC_4, KC_5, KC_6, KC_PPLS, KC_PMNS, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, KC_P0, KC_1, KC_2, KC_3, KC_PAST, KC_PSLS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[2] = LAYOUT_split_3x6_3(KC_ESC, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_BSPC, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_NO, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS, KC_TAB, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_UNDS, KC_PLUS, KC_LCBR, KC_RCBR, KC_PIPE, KC_LSFT, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS),
	[3] = LAYOUT_split_3x6_3(DF(4), DF(5), KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO),
	[4] = LAYOUT_split_3x6_3(KC_Z, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TAB, KC_F1, KC_U, KC_V, KC_NO, DF(0), KC_CAPS, EX_A, KC_S, EX_D, KC_F, KC_G, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_X, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_COMM, KC_DOT, KC_LSFT, KC_LCTL, KC_SPC, KC_Z, KC_NO, KC_NO),
	[5] = LAYOUT_split_3x6_3(KC_Z, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TAB, KC_F1, KC_U, KC_V, KC_NO, DF(0), KC_CAPS, EX_A, KC_S, EX_D, KC_F, KC_G, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_X, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_COMM, KC_DOT, KC_LSFT, KC_LCTL, KC_SPC, KC_Z, KC_NO, KC_NO),
	[6] = LAYOUT_split_3x6_3(KC_Z, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TAB, KC_F1, KC_U, KC_V, KC_NO, DF(0), KC_CAPS, EX_A, KC_S, EX_D, KC_F, KC_G, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_X, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_COMM, KC_DOT, KC_LSFT, KC_LCTL, KC_SPC, KC_Z, KC_NO, KC_NO),
	[7] = LAYOUT_split_3x6_3(KC_Z, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TAB, KC_F1, KC_U, KC_V, KC_NO, DF(0), KC_CAPS, EX_A, KC_S, EX_D, KC_F, KC_G, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_X, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_COMM, KC_DOT, KC_LSFT, KC_LCTL, KC_SPC, KC_Z, KC_NO, KC_NO),
	[8] = LAYOUT_split_3x6_3(KC_Z, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TAB, KC_F1, KC_U, KC_V, KC_NO, DF(0), KC_CAPS, EX_A, KC_S, EX_D, KC_F, KC_G, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_X, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_COMM, KC_DOT, KC_LSFT, KC_LCTL, KC_SPC, KC_Z, KC_NO, KC_NO),
	[9] = LAYOUT_split_3x6_3(KC_Z, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TAB, KC_F1, KC_U, KC_V, KC_NO, DF(0), KC_CAPS, EX_A, KC_S, EX_D, KC_F, KC_G, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_X, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_COMM, KC_DOT, KC_LSFT, KC_LCTL, KC_SPC, KC_Z, KC_NO, KC_NO),
	[10] = LAYOUT_split_3x6_3(KC_Z, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_TAB, KC_F1, KC_U, KC_V, KC_NO, DF(0), KC_CAPS, EX_A, KC_S, EX_D, KC_F, KC_G, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_1, KC_2, KC_3, KC_4, KC_X, KC_V, KC_B, KC_N, KC_M, KC_NO, KC_COMM, KC_DOT, KC_LSFT, KC_LCTL, KC_SPC, KC_Z, KC_NO, KC_NO),
	[11] = LAYOUT_split_3x6_3(KC_1, KC_2, KC_3, KC_4, KC_5, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DF(0), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_A, KC_S, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_SPC, KC_NO, KC_NO, KC_NO),
	[12] = LAYOUT_split_3x6_3(KC_1, KC_2, KC_3, KC_4, KC_5, KC_T, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, DF(0), KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_B, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_F1, KC_F2, KC_F3, KC_F4, KC_A, KC_S, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCTL, KC_LSFT, KC_SPC, KC_NO, KC_NO, KC_NO)
};

bool a_presed = false;
bool d_presed = false;

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case EX_A:
      if (record->event.pressed) {
        if (d_presed) {
          unregister_code(KC_D);
        }
        a_presed = true;
        register_code(KC_A);
      } else {
        a_presed = false;
        unregister_code(KC_A);
        if (d_presed) {
          register_code(KC_D);
        }
      }
      return false; // Skip all further processing of this key
    case EX_D:
      if (record->event.pressed) {
        if (a_presed) {
          unregister_code(KC_A);
        }
        d_presed = true;
        register_code(KC_D);
      } else {
        d_presed = false;
        unregister_code(KC_D);
        if (a_presed) {
          register_code(KC_A);
        }
      }
      return false; // Skip all further processing of this key

    default:
      return true; // Process all other keycodes normally
  }
}
