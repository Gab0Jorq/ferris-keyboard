#include QMK_KEYBOARD_H

#define KEYMAP LAYOUT
//home rows configuration

// Left-hand home row mods
#define HOME_Z LGUI_T(KC_Z)
#define HOME_R LALT_T(KC_R)
#define HOME_S LSFT_T(KC_S)
#define HOME_T LCTL_T(KC_T)

// Right-hand home row mods
#define HOME_N RCTL_T(KC_N)
#define HOME_E RSFT_T(KC_E)
#define HOME_I LALT_T(KC_I)
#define HOME_O RGUI_T(KC_O)

enum layers {
  _COLEMAK,
  _NUM,
  _SYM,
  _EDIT,
  _NAV,
  _FN
};

enum custom_keycodes {
  COLEMAK = SAFE_RANGE,
  NUM,
  SYM,
  EDIT,
  NAV,
  FN,
  QWERTY,
  DOFUS
};

// For Tap Dance
enum {
    TD_COMM_SCLN, // (/) and (;)
    TD_ESC_RESET, // (ESC) and (RESET)
    TD_SLSH_ESC,  // (/) and (ESC) 
    TD_Q_TAB
};

qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for , and twice for ;
    [TD_COMM_SCLN] = ACTION_TAP_DANCE_DOUBLE(KC_COMM, KC_SCLN),
    [TD_ESC_RESET] = ACTION_TAP_DANCE_DOUBLE(KC_ESC, RESET),
    [TD_SLSH_ESC] = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_ESC),
    [TD_Q_TAB] = ACTION_TAP_DANCE_DOUBLE(KC_Q, KC_TAB)
};
// For Tap Dance

 const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
 #include "base_layout.h"
};