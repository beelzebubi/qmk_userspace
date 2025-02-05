/* Copyright 2023 Tom Sennewald (@beelzebubi)
 * SPDX-License-Identifier: GPL-2.0-or-later
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

#include "nazu.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_wk_bs(
             KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,      KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC, KC_DEL,
            KC_PGUP,  KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,                KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_BSLS,
           KC_PGDN,   HYPR_BS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,                KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,          KC_ENT,
                      TD_CAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
                      KC_LCTL, KC_LGUI, KC_LALT, LT(_LOWER, KC_SPC), KC_R2,                LT(_RAISE, KC_SPC),     KC_R2,   KC_R1,            KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_COLEMAK] = LAYOUT_wk_bs(
             KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,      KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC, KC_DEL,
            KC_PGUP,  KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_G,                KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS,
           KC_PGDN,   HYPR_BS, KC_A,    KC_R,    KC_S,    KC_T,    KC_D,                KC_H,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,                   KC_ENT,
                      TD_CAPS, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,                KC_B,    KC_K,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
                      KC_LCTL, KC_LGUI, KC_LALT, LT(_LOWER, KC_SPC), KC_R2,                LT(_RAISE, KC_SPC),     KC_R2,   KC_R1,            KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_COLEMAK_DH] = LAYOUT_wk_bs(
             KC_ESC,  KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,     KC_6,      KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC, KC_DEL,
            KC_PGUP,  KC_TAB,  KC_Q,    KC_W,    KC_F,    KC_P,    KC_B,                KC_J,    KC_L,    KC_U,    KC_Y,    KC_SCLN, KC_LBRC, KC_RBRC, KC_BSLS,
           KC_PGDN,   HYPR_BS, KC_A,    KC_R,    KC_S,    KC_T,    KC_G,                KC_M,    KC_N,    KC_E,    KC_I,    KC_O,    KC_QUOT,                   KC_ENT,
                      TD_CAPS, KC_Z,    KC_X,    KC_C,    KC_D,    KC_V,                KC_V,    KC_K,    KC_H,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT, KC_UP,
                      KC_LCTL, KC_LGUI, KC_LALT, LT(_LOWER, KC_SPC), KC_R2,                LT(_RAISE, KC_SPC),     KC_R2,   KC_R1,            KC_LEFT, KC_DOWN, KC_RGHT
    ),
    [_LOWER] = LAYOUT_wk_bs(
             _______, _______, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,      KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,           XXXXXXX, XXXXXXX,
            _______,  _______, XXXXXXX, KC_HOME, KC_UP,   KC_END,  XXXXXXX,             XXXXXXX, KC_HOME, KC_UP,   KC_END,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
           _______,   KC_DEL,  XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX,             XXXXXXX, KC_LEFT, KC_DOWN, KC_RGHT, XXXXXXX, XXXXXXX,          XXXXXXX,
                      _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,  XXXXXXX,             XXXXXXX, XXXXXXX, CA_MUTE, XXXXXXX, XXXXXXX, XXXXXXX, _______, KC_VOLU,
                      _______, _______, _______,     KC_MPLY,      _______,                      KC_MUTE,          _______, _______,          KC_MPRV, KC_VOLD, KC_MNXT
    ),
    [_RAISE] = [_LOWER],
    [_ADJUST] = LAYOUT_wk_bs(
             QK_BOOT, _______, QWERTY,  COLEMAK, CLMKDH,  XXXXXXX, XXXXXXX, XXXXXXX,    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX,
            KC_SWAP,  _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
           KC_NORM,   _______, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,             XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX,
                      _______, XXXXXXX, XXXXXXX, XXXXXXX, KC_SPC,  XXXXXXX,             XXXXXXX, NK_TOGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, _______, _______,
                      _______, _______, _______,     XXXXXXX,      XXXXXXX,                      XXXXXXX,          _______, _______,          _______, _______, _______
    ),
};

layer_state_t layer_state_set_user(layer_state_t state) {
    state = update_tri_layer_state(state, _RAISE, _LOWER, _ADJUST);
    return state;
}

// uint8_t mod_state;
// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//     // Store the current modifier state in the variable for later reference
//     mod_state = get_mods();
//     switch (keycode) {
//         case KC_A: // workaround for Windows US International layout
//             // Only detect in Windows-typical config
//             if (!keymap_config.swap_lalt_lgui) {
//                 // Detect the activation of only Left Alt
//                 if ((mod_state & MOD_BIT(KC_RALT)) == MOD_BIT(KC_RALT)) {
//                     if (record->event.pressed) {
//                         // No need to register KC_RALT because it's already active.
//                         // The Alt modifier will apply on this KC_Q.
//                         register_code(KC_Q);
//                     } else {
//                         unregister_code(KC_Q);
//                     }
//                     // Do not let QMK process the keycode further
//                     return false;
//                 }
//             }
//             // Else, let QMK process the KC_4 keycode as usual
//             return true;
//         case KC_U: // workaround for Windows US International layout
//             // Only detect in Windows-typical config
//             if (!keymap_config.swap_lalt_lgui) {
//                 // Detect the activation of only Left Alt
//                 if ((mod_state & MOD_BIT(KC_RALT)) == MOD_BIT(KC_RALT)) {
//                     if (record->event.pressed) {
//                         // No need to register KC_RALT because it's already active.
//                         // The Alt modifier will apply on this KC_Y.
//                         register_code(KC_Y);
//                     } else {
//                         unregister_code(KC_Y);
//                     }
//                     // Do not let QMK process the keycode further
//                     return false;
//                 }
//             }
//             // Else, let QMK process the KC_4 keycode as usual
//             return true;
//         case KC_O: // workaround for Windows US International layout
//             // Only detect in Windows-typical config
//             if (!keymap_config.swap_lalt_lgui) {
//                 // Detect the activation of only Left Alt
//                 if ((mod_state & MOD_BIT(KC_RALT)) == MOD_BIT(KC_RALT)) {
//                     if (record->event.pressed) {
//                         // No need to register KC_RALT because it's already active.
//                         // The Alt modifier will apply on this KC_P.
//                         register_code(KC_P);
//                     } else {
//                         unregister_code(KC_P);
//                     }
//                     // Do not let QMK process the keycode further
//                     return false;
//                 }
//             }
//             // Else, let QMK process the KC_4 keycode as usual
//             return true;
//     }
//     return true;
// }
