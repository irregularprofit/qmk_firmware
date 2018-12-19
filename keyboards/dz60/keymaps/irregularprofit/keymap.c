#include QMK_KEYBOARD_H

// Make special keycodes more visible
#define ____ KC_TRNS
#define XXXX KC_NO

// Layer definition
#define L0 0
#define L1 1
#define L2 2

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

// Base layer - ANSI QWERTY
[L0] = LAYOUT_all(
	KC_GESC, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_MINS, KC_EQL, XXXX, KC_BSPC,
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_LBRC, KC_RBRC, KC_BSLS,
	CTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, KC_ENT,
	KC_LSFT, XXXX, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RSFT, KC_UP, KC_DEL,
	KC_LCTL, KC_LALT, KC_LGUI, LT(L2, KC_SPC), MO(L2), KC_SPC, KC_RGUI, MO(L1), KC_LEFT, KC_DOWN, KC_RIGHT),

// Utility layer - RGB and multimedia control
[L1] = LAYOUT_all(
	____, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, KC_MRWD, KC_MPLY, KC_MFFD, KC_MUTE, KC_VOLD, KC_VOLU,
	KC_CAPS, BL_STEP, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, RGB_TOG, RGB_MOD, RGB_HUI, RGB_HUD, RGB_SAI, RGB_SAD, RGB_VAI, RGB_VAD, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),

[L2] = LAYOUT_all(
	____, KC_BTN1, ____, KC_BTN2, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, RESET,
	____, ____, KC_MS_U, ____, KC_WH_U, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, KC_MS_L, KC_MS_D, KC_MS_R, KC_WH_D, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____,
	____, ____, ____, ____, ____, ____, ____, ____, ____, ____, ____),
};

