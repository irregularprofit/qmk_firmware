/*
Copyright 2017 Lukmanul Hakim <lukmanulhakim14@gmail.com>

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

/* NOTE : This is compatible to TrueFox Layout only */

#include QMK_KEYBOARD_H

// Fillers to make layering more clear
#define ____ KC_TRNS
#define XXXX KC_NO

const uint16_t keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /* Layer 0: Default Layer
     * ,----------------------------------------------------------------.
     * |Esc|  1|  2|  3|  4|  5|  6|  7|  8|  9|  0|  -|  =|  \|  `|Pscr|
     * |----------------------------------------------------------------|
     * |Tab  |  Q|  W|  E|  R|  T|  Y|  U|  I|  O|  P|  [|  ]|Backs|Del |
     * |----------------------------------------------------------------|
     * |Ctrl  |  A|  S|  D|  F|  G|  H|  J|  K|  L|  ;|  '|Enter   |PgUp|
     * |----------------------------------------------------------------|
     * |Shif|   |  Z|  X|  C|  V|  B|  N|  M|  ,|  .|  /|Shift |Up |PgDn|
     * |----------------------------------------------------------------|
     * |Alt|Fn0 |Gui |         Space    |Gui |Alt |     |  |Lef|Dow|Rght|
     * `----------------------------------------------------------------'
     */
    [0] = LAYOUT( \
        KC_GESC, KC_1,   KC_2,   KC_3,   KC_4,   KC_5,   KC_6,   KC_7,   KC_8,   KC_9,   KC_0,   KC_MINS,KC_EQL, KC_BSLS,KC_GRV, KC_PSCR,\
        KC_TAB, KC_Q,   KC_W,   KC_E,   KC_R,   KC_T,   KC_Y,   KC_U,   KC_I,   KC_O,   KC_P,   KC_LBRC,KC_RBRC,KC_BSPC,     KC_DEL, \
        CTL_T(KC_ESC), KC_A,   KC_S,   KC_D,   KC_F,   KC_G,   KC_H,   KC_J,   KC_K,   KC_L,   KC_SCLN,KC_QUOT,KC_NUHS,KC_ENT,      KC_PGUP,\
        KC_LSFT,XXXX,KC_Z,   KC_X,   KC_C,   KC_V,   KC_B,   KC_N,   KC_M,   KC_COMM,KC_DOT, KC_SLSH,KC_RSFT,     KC_UP,  KC_PGDN,\
        KC_LCTL,KC_LALT,KC_LGUI,               KC_SPC,           KC_RGUI,KC_FN0, XXXX,     KC_LEFT,KC_DOWN,KC_RGHT \
    ),
    [1] = LAYOUT( \
        ____,KC_F1,  KC_F2,  KC_F3,  KC_F4,  KC_F5,  KC_F6,  KC_F7,  KC_F8,  KC_F9,  KC_F10, KC_F11, KC_F12, ____,____,____,\
        ____,KC_MPRV,KC_MNXT,KC_VOLU,____,____,____,____,____,____,____,____,____,____ ,     BL_TOGG ,\
        ____,KC_MPLY,KC_MSTP,KC_VOLD,____,____,____,____,____,____,____,____,____,RESET,     BL_INC,\
        ____,____,____,KC_MUTE,____,____,____,____,____,____,____,____,____,     ____,BL_DEC,\
        ____,____,____,               ____,          ____,____,____,     KC_HOME,____,KC_END  \
    ),
};

/* Give numbers some descriptive names */
#define ACTION_LEDS_ALL 1
#define ACTION_LEDS_GAME 2

const uint16_t fn_actions[] = {
    [0] = ACTION_LAYER_MOMENTARY(1),
    [1] = ACTION_LAYER_MOMENTARY(2),
    [2] = ACTION_FUNCTION(ACTION_LEDS_ALL),
    [3] = ACTION_FUNCTION(ACTION_LEDS_GAME),

    [4] = ACTION_USAGE_CONSUMER(0x1B4),
    [5] = ACTION_USAGE_CONSUMER(0x196),
    [6] = ACTION_USAGE_CONSUMER(0x1A6),
    [7] = ACTION_USAGE_CONSUMER(0x1A0),

};

/* custom action function */
void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  /*
  (void)opt;
  switch(id) {
    case ACTION_LEDS_ALL:
        if(record->event.pressed) {
          // signal the LED controller thread
          chMBPost(&led_mailbox, LED_MSG_GAME_TOGGLE, TIME_IMMEDIATE);
        }
      break;
    case ACTION_LEDS_GAME:
      if(record->event.pressed) {
        // signal the LED controller thread
        chMBPost(&led_mailbox, LED_MSG_ALL_TOGGLE, TIME_IMMEDIATE);
      }
      break;
  }
  */
}
