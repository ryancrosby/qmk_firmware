#include QMK_KEYBOARD_H
#include "ryancrosby.h"
#include "ergodox_ez.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_ergodox_pretty_wrapper(
        _______, ________________NUMBERS_L__________________, _______,      _______, ________________NUMBERS_R__________________, _______,
        KC_TAB , _________________QWERTY_L1_________________, _______,      _______, _________________QWERTY_R1_________________, KC_BSPC,
        LT_SYM , _____________MOD_QWERTY_L2_________________,                        _____________MOD_QWERTY_R2_________________, LT_SYM ,
        KC_LSFT, _________________QWERTY_L3_________________, _______,      _______, _________________QWERTY_R3_________________, KC_RSFT,
        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, LT_NAV ,                                          LT_NAV , XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                     CC_CPY , CC_PST ,      _______, _______,
                                                              _______,      _______,
                                            KC_ENT , KC_BSPC, _______,      _______, KC_TAB , KC_SPC
    ),

    [_SYMBOLS] = LAYOUT_ergodox_pretty_wrapper(
        _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______,
        _______, ________________SYMBOLS_L1_________________, _______,      _______, ________________SYMBOLS_R1_________________, _______,
        _______, ________________SYMBOLS_L2_________________,                        ________________SYMBOLS_R2_________________, _______,
        _______, ________________SYMBOLS_L3_________________, _______,      _______, ________________SYMBOLS_R3_________________, _______,
        _______, _______, _______, _______, _______,                                          _______, _______, _______, _______, _______,
                                                     _______, _______,      _______, _______,
                                                              _______,      _______,
                                            _______, _______, _______,      _______, _______, _______
    ),

    [_NAVIGATION] = LAYOUT_ergodox_pretty_wrapper(
        _______, _______, _______, _______, _______, _______, _______,      _______, _______, _______, _______, _______, _______, _______,
        _______, ____________________NAV_L1_________________, _______,      _______, ____________________NAV_R1_________________, _______,
        _______, ____________________NAV_L2_________________,                        ____________________NAV_R2_________________, _______,
        _______, ____________________NAV_L3_________________, _______,      _______, ____________________NAV_R3_________________, _______,
        _______, _______, _______, _______, _______,                                          _______, _______, _______, _______, _______,
                                                     _______, _______,      _______, _______,
                                                              _______,      _______,
                                            _______, _______, _______,      _______, _______, _______
    )
};

// Runs just one time when the keyboard initializes.
void keyboard_post_init_user(void) {
  // Call the post init code.
//   rgblight_enable_noeeprom(); // enables Rgb, without saving settings
  rgblight_sethsv(HSV_BLUE); // sets the color to teal/cyan without saving
  rgblight_mode(RGB_MATRIX_SOLID_COLOR); // sets mode to Fast breathing without saving
}

// Runs whenever there is a layer state change.
layer_state_t layer_state_set_user(layer_state_t state) {
  ergodox_board_led_off();
  ergodox_right_led_1_off();
  ergodox_right_led_2_off();
  ergodox_right_led_3_off();

  uint8_t layer = get_highest_layer(state);
  switch (layer) {
      case _QWERTY:
        ergodox_right_led_1_on();
        break;
      case _SYMBOLS:
        ergodox_right_led_2_on();
        break;
      case _NAVIGATION:
        ergodox_right_led_3_on();
        break;
      default:
        break;
    }

  return state;
};
