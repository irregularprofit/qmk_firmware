#include QMK_KEYBOARD_H

#define _BL 0
#define _FN1 1
#define _FN2 2
#define _FN3 3

#define ____ KC_TRNS
#define MODS_CTRL_MASK  (MOD_BIT(KC_LSHIFT)|MOD_BIT(KC_RSHIFT))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

	[_BL] = LAYOUT_split_space(
		KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
		CTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_ENT,
		KC_LSFT, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_RSFT, KC_DOT,
		KC_LCTL, KC_LALT, KC_LGUI, KC_SPC, LT(3, KC_SPC), KC_RGUI, MO(1), MO(2)),

	[_FN1] = LAYOUT_split_space(
		KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
		KC_CAPS, BL_STEP, ____, ____, ____, ____, KC_MINS, KC_EQL, KC_LBRC, KC_RBRC, KC_BSLS,
		____, ____, ____, ____, ____, KC_SCLN, KC_QUOT, KC_COMM, KC_DOT, KC_SLASH, ____,
		____, ____, ____, ____, ____, ____, ____, ____),

	[_FN2] = LAYOUT_split_space(
		____, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_DEL,
		____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
		____, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, ____, ____,
		____, ____, ____, ____, ____, ____, ____, ____),

	[_FN3] = LAYOUT_split_space(
		____, KC_BTN1, ____, KC_BTN2, ____, ____, ____, ____, ____, KC_UP, ____, RESET,
		____, ____, KC_MS_U, ____, KC_WH_U, ____, ____, ____, KC_LEFT, KC_RIGHT, ____,
		____, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, ____, ____, ____, KC_DOWN, ____, ____,
		____, ____, ____, ____, ____, ____, ____, ____),
};

const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt) {


	switch (id) {

	}
	return MACRO_NONE;
}

void matrix_init_user(void) {
}

void matrix_scan_user(void) {
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	return true;
}

void led_set_user(uint8_t usb_led) {

	if (usb_led & (1 << USB_LED_NUM_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_CAPS_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_SCROLL_LOCK)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_COMPOSE)) {

	} else {

	}

	if (usb_led & (1 << USB_LED_KANA)) {

	} else {

	}

}

enum function_id {
    SHIFT_ESC,
};

const uint16_t PROGMEM fn_actions[] = {
  [0]  = ACTION_FUNCTION(SHIFT_ESC),
};

void action_function(keyrecord_t *record, uint8_t id, uint8_t opt) {
  static uint8_t shift_esc_shift_mask;
  switch (id) {
    case SHIFT_ESC:
      shift_esc_shift_mask = get_mods()&MODS_CTRL_MASK;
      if (record->event.pressed) {
        if (shift_esc_shift_mask) {
          add_key(KC_GRV);
          send_keyboard_report();
        } else {
          add_key(KC_ESC);
          send_keyboard_report();
        }
      } else {
        if (shift_esc_shift_mask) {
          del_key(KC_GRV);
          send_keyboard_report();
        } else {
          del_key(KC_ESC);
          send_keyboard_report();
        }
      }
      break;
  }
}
