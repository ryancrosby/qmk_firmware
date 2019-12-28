#include QMK_KEYBOARD_H
#include "ryancrosby.h"

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_QWERTY] = LAYOUT_planck_grid_wrapper(
        KC_TAB , _________________QWERTY_L1_________________, _________________QWERTY_R1_________________, KC_BSPC,
        LT_SYM , _____________MOD_QWERTY_L2_________________, _____________MOD_QWERTY_R2_________________, LT_SYM ,
        KC_LSFT, _________________QWERTY_L3_________________, _________________QWERTY_R3_________________, KC_RSFT,
        XXXXXXX, XXXXXXX, XXXXXXX, LT_NAV , KC_ENT , KC_BSPC, KC_TAB , KC_SPC , LT_NAV , XXXXXXX, XXXXXXX, XXXXXXX
    ),

    [_SYMBOLS] = LAYOUT_planck_grid_wrapper(
        _______, ________________SYMBOLS_L1_________________, ________________SYMBOLS_R1_________________, _______,
        _______, ________________SYMBOLS_L2_________________, ________________SYMBOLS_R2_________________, _______,
        _______, ________________SYMBOLS_L3_________________, ________________SYMBOLS_R3_________________, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    ),

    [_NAVIGATION] = LAYOUT_planck_grid_wrapper(
        _______, ____________________NAV_L1_________________, ____________________NAV_R1_________________, _______,
        _______, ____________________NAV_L2_________________, ____________________NAV_R2_________________, _______,
        _______, ____________________NAV_L3_________________, ____________________NAV_R3_________________, _______,
        _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______, _______
    )
};
