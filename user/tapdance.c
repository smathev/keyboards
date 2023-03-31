// check to see if we are using the stenographobe, and skip if so... it has its own whole combo scheme
// see keyboards/fingerpunch/stenographobe/keymaps/*/keymap.c
#ifndef KEYBOARD_fingerpunch_stenographobe
#include "tapdance.h"
#include "smathev.h"
#include "quantum.h"

tap_dance_action_t tap_dance_actions[] = {
  [TD_PARA] = ACTION_TAP_DANCE_DOUBLE(LSFT(KC_8), LSFT(KC_9)),
  [TD_BRCK] = ACTION_TAP_DANCE_DOUBLE(RALT(KC_8), RALT(KC_9)),
  [TD_CURL] = ACTION_TAP_DANCE_DOUBLE(RALT(KC_7), RALT(KC_0))
};

#endif
