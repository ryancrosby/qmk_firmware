#pragma once

/* Define layer names */
enum userspace_layers {
    _QWERTY  = 0,
    _SYMBOLS,
    _NAVIGATION
};

#define LAYOUT_planck_grid_wrapper(...)          LAYOUT_planck_grid(__VA_ARGS__)
#define LAYOUT_ortho_5x12_wrapper(...)           LAYOUT_ortho_5x12(__VA_ARGS__)
#define LAYOUT_ergodox_pretty_wrapper(...)       LAYOUT_ergodox_pretty(__VA_ARGS__)

// KEYS
#define LT_SYM LT(_SYMBOLS, KC_ESC)
#define LT_NAV MO(_NAVIGATION)
#define CC_CPY LGUI(KC_C)
#define CC_PST LGUI(KC_V)
#define CC_REF LGUI(KC_R)

// TEMPLATE
#define _____________________T_____________________  _______, _______, _______, _______, _______

// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
// |  1  |  2  |  3  |  4  |  5  |   |  6  |  7  |  8  |  9  |  0  |
// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
#define ________________NUMBERS_L__________________  KC_1, KC_2, KC_3, KC_4, KC_5
#define ________________NUMBERS_R__________________  KC_6, KC_7, KC_8, KC_9, KC_0

// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
// |  Q  |  W  |  E  |  R  |  T  |   |  Y  |  U  |  I  |  O  |  P  |
// ,-----+-----+-----x-----x-----,   ,-----x-----x-----+-----+-----,
// |  A  |  S  |  D  |  F  |  G  |   |  H  |  J  |  K  |  L  |  ;  |
// ,-----+-----+-----x-----x-----,   ,-----x-----x-----+-----+-----,
// |  Z  |  X  |  C  |  V  |  B  |   |  N  |  M  |  ,  |  .  |  /  |
// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
#define _________________QWERTY_L1_________________  KC_Q   , KC_W   , KC_E   , KC_R   , KC_T
#define _________________QWERTY_L2_________________  KC_A   , KC_S   , KC_D   , KC_F   , KC_G
#define _________________QWERTY_L3_________________  KC_Z   , KC_X   , KC_C   , KC_V   , KC_B

#define _________________QWERTY_R1_________________  KC_Y   , KC_U   , KC_I   , KC_O   , KC_P
#define _________________QWERTY_R2_________________  KC_H   , KC_J   , KC_K   , KC_L   , KC_SCLN
#define _________________QWERTY_R3_________________  KC_N   , KC_M   , KC_COMM, KC_DOT , KC_SLSH

#define _____________MOD_QWERTY_L2_________________  KC_A   , CTL_T(KC_S),    ALT_T(KC_D),    CMD_T(KC_F),    KC_G
#define _____________MOD_QWERTY_R2_________________  KC_H   , RCMD_T(KC_J),    RALT_T(KC_K),    RCTL_T(KC_L),    KC_SCLN

// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
// |  !  |  @  |  +  |  {  |     |   |     |  }  |     |  |  |     |
// ,-----+-----+-----x-----x-----,   ,-----x-----x-----+-----+-----,
// |  #  |  $  |  -  |  (  |     |   |     |  )  |  '  |  /  |     |
// ,-----+-----+-----x-----x-----,   ,-----x-----x-----+-----+-----,
// |  %  |     |  =  |  [  |     |   |     |  ]  |  "  |  ~  |     |
// ,-----+-----+-----+-----+-----,   ,-----+-----+-----+-----+-----,
#define ________________SYMBOLS_L1_________________  KC_EXLM, KC_AT,   KC_PLUS, KC_LCBR, KC_NO
#define ________________SYMBOLS_L2_________________  KC_HASH, KC_DLR,  KC_PMNS, KC_LPRN, KC_NO
#define ________________SYMBOLS_L3_________________  KC_PERC, KC_CIRC, KC_EQL,  KC_LBRC, KC_NO

#define ________________SYMBOLS_R1_________________  KC_NO,   KC_RCBR, KC_GRV,  KC_UNDS, KC_PIPE
#define ________________SYMBOLS_R2_________________  KC_NO,   KC_RPRN, KC_QUOT, KC_AMPR, KC_BSLS
#define ________________SYMBOLS_R3_________________  KC_NO,   KC_RBRC, KC_DQUO, KC_ASTR, KC_TILD

// NAVIGATION LAYER
#define ____________________NAV_L1_________________  _______, KC_MPRV, KC_MPLY, KC_MNXT, _______
#define ____________________NAV_L2_________________  _______, RGB_VAD, RGB_TOG, RGB_VAI, _______
#define ____________________NAV_L3_________________  _______, KC_VOLD, KC_MUTE, KC_VOLU, _______

#define ____________________NAV_R1_________________  _______, KC_HOME, KC_UP  , KC_END , _______
#define ____________________NAV_R2_________________  _______, KC_LEFT, KC_DOWN, KC_RGHT, _______
#define ____________________NAV_R3_________________  _______, _______, _______, _______, _______
