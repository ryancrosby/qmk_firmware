#include "ryancrosby.h"

uint16_t get_tapping_term(uint16_t keycode) {
  switch (keycode) {
    // This key is "Caps Lock", and is a layer toggle or escape. This is
    // used for all the symbols and I type it really fast so I need a lower tapping term.
    case LT_SYM:
      return 100;
    // I use S,D,F and L,K,J as Ctrl, Opt, Cmd, and with a lower tapping term I always
    // send weird keys. So these keys stay the default (226)
    default:
      return TAPPING_TERM;
  }
}
