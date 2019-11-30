#pragma once

/* Define layer names */
enum userspace_layers {
    _QWERTY  = 0,
    _SYMBOLS,
    _NAVIGATION
};

#define LAYOUT_planck_grid_wrapper(...)          LAYOUT_planck_grid(__VA_ARGS__)

// KEYS
#define LT_1 LT(_SYMBOLS, KC_ESC)

// ORTHO BLANK SIDE
#define ________________ORTHO_BLANK________________        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define ________________ORTHO_TRNS________________         KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
// QWERTY LAYER
#define _________________QWERTY_L1_________________        KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T
#define _________________QWERTY_L2_________________        LT_1,    KC_A,    CTL_T(KC_S),    ALT_T(KC_D),    CMD_T(KC_F),    KC_G
#define _________________QWERTY_L3_________________        KC_LSFT, KC_Z,    KC_X,    KC_C,    KC_V,    KC_B

#define _________________QWERTY_R1_________________        KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_BSPC
#define _________________QWERTY_R2_________________        KC_H,    RCMD_T(KC_J),    RALT_T(KC_K),    RCTL_T(KC_L),    KC_SCLN, LT_1
#define _________________QWERTY_R3_________________        KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH, KC_RSFT

// SYMBOLS LAYER
#define ________________SYMBOLS_L1_________________        KC_NO,   KC_EXLM, KC_AT,   KC_PLUS, KC_LCBR, KC_NO
#define ________________SYMBOLS_L2_________________        KC_NO,   KC_HASH, KC_DLR,  KC_PMNS, KC_LPRN, KC_NO
#define ________________SYMBOLS_L3_________________        KC_NO,   KC_PERC, KC_CIRC, KC_EQL,  KC_LBRC, KC_NO

#define ________________SYMBOLS_R1_________________        KC_NO,   KC_RCBR, KC_GRV,  KC_UNDS, KC_PIPE, KC_NO
#define ________________SYMBOLS_R2_________________        KC_NO,   KC_RPRN, KC_QUOT, KC_AMPR, KC_BSLS, KC_NO
#define ________________SYMBOLS_R3_________________        KC_NO,   KC_RBRC, KC_DQUO, KC_ASTR, KC_TILD, KC_NO

// NAVIGATION LAYER
#define ________________NAV_L1________________        KC_NO,   KC_NO,   KC_MPRV,   KC_MPLY,   KC_MNXT,   KC_NO
#define ________________NAV_L2________________        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO
#define ________________NAV_L3________________        KC_NO,   KC_NO,   KC_VOLD, KC_MUTE, KC_VOLU, KC_NO

#define ________________NAV_R1________________        KC_NO,   KC_NO,   KC_UP,   KC_NO,   KC_NO,   KC_NO
#define ________________NAV_R2________________        KC_NO,   KC_LEFT, KC_DOWN, KC_RGHT, KC_NO,   KC_NO
#define ________________NAV_R3________________        KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO

// Planck
#define ________________PLANCK_L4________________        KC_NO,   KC_NO,   KC_NO,   MO(_NAVIGATION),   KC_ENT,   KC_BSPC
#define ________________PLANCK_R4________________        KC_TAB,   KC_SPC,   MO(_NAVIGATION),   KC_NO,   KC_NO,   KC_NO
