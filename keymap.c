#include QMK_KEYBOARD_H

enum { TD_PC, TD_COMI, TD_SLA, TD_CAPLOCK, TD_ALT, TD_COMM, TD_DOT, TD_GRAVE, TD_PRN, TD_BRC, TD_CBR, TD_MINS, TD_EQL, TD_PIPE };

tap_dance_action_t tap_dance_actions[] = {
    [TD_PC]      = ACTION_TAP_DANCE_DOUBLE(KC_SCLN, LSFT(KC_SCLN)),
    [TD_COMI]    = ACTION_TAP_DANCE_DOUBLE(KC_QUOT, LSFT(KC_QUOT)),
    [TD_SLA]     = ACTION_TAP_DANCE_DOUBLE(KC_SLSH, KC_QUES),
    [TD_CAPLOCK] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
    // [TD_ALT] = ACTION_TAP_DANCE_DOUBLE(KC_RALT, KC_LALT),
    [TD_COMM]  = ACTION_TAP_DANCE_DOUBLE(KC_COMM, LSFT(KC_COMM)),
    [TD_DOT]   = ACTION_TAP_DANCE_DOUBLE(KC_DOT, LSFT(KC_DOT)),
    [TD_GRAVE] = ACTION_TAP_DANCE_DOUBLE(KC_GRV, LSFT(KC_GRV)),
    [TD_PRN]   = ACTION_TAP_DANCE_DOUBLE(KC_LPRN, KC_RPRN),
    [TD_BRC]   = ACTION_TAP_DANCE_DOUBLE(KC_LBRC, KC_RBRC),
    [TD_CBR]   = ACTION_TAP_DANCE_DOUBLE(KC_LCBR, KC_RCBR),
    [TD_MINS]  = ACTION_TAP_DANCE_DOUBLE(KC_MINS, KC_UNDS),
    [TD_EQL]   = ACTION_TAP_DANCE_DOUBLE(KC_EQL, KC_PLUS),
    [TD_PIPE]  = ACTION_TAP_DANCE_DOUBLE(KC_PIPE, KC_BSLS),
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {[0] = LAYOUT_split_3x6_3(
                                                                  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                                                  KC_ESC, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_TAB, KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, TD(TD_PC), TD(TD_COMI),
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, TD(TD_COMM), TD(TD_DOT), TD(TD_SLA), TD(TD_CAPLOCK),
                                                                  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                                  KC_LGUI, MO(1), KC_SPC, RSFT_T(KC_ENT), MO(2), KC_LALT
                                                                  //`--------------------------'  `--------------------------'

                                                                  ),

                                                              [1] = LAYOUT_split_3x6_3(
                                                                  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                                                  KC_TAB, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_BSPC,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_LCTL, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_VOLU, KC_MUTE,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_LSFT, KC_UNDO, KC_CUT, KC_COPY, KC_PASTE, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_VOLD, KC_MNXT,
                                                                  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                                  KC_LGUI, _______, KC_SPC, KC_ENT, MO(3), KC_RALT
                                                                  //`--------------------------'  `--------------------------'
                                                                  ),

                                                              [2] = LAYOUT_split_3x6_3(
                                                                  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                                                  KC_TAB, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, TD(TD_PRN), XXXXXXX, KC_BSPC,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, TD(TD_MINS), TD(TD_EQL), TD(TD_PIPE), TD(TD_BRC), XXXXXXX, TD(TD_GRAVE),
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12, XXXXXXX, XXXXXXX, XXXXXXX, TD(TD_CBR), XXXXXXX, KC_PSCR,
                                                                  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                                  KC_LGUI, MO(3), KC_SPC, KC_ENT, _______, KC_RALT
                                                                  //`--------------------------'  `--------------------------'
                                                                  ),

                                                              [3] = LAYOUT_split_3x6_3(
                                                                  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
                                                                  QK_BOOT, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, KC_INS, XXXXXXX, KC_PSCR, KC_DEL,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  RM_TOGG, RM_HUEU, RM_SATU, RM_VALU, XXXXXXX, XXXXXXX, KC_HOME, KC_PGDN, KC_PGUP, KC_END, XXXXXXX, XXXXXXX,
                                                                  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
                                                                  RM_NEXT, RM_HUED, RM_SATD, RM_VALD, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                                                                  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                                                  KC_LGUI, _______, KC_SPC, KC_ENT, _______, KC_RALT
                                                                  //`--------------------------'  `--------------------------'
                                                                  )};
