#include "quantum.h"
#include <stdio.h>

#define L_BASE 0
#define L_QWERTY (1 << 1)
#define L_LOWER (1 << 2)
#define L_RAISE (1 << 3)
#define L_ADJUST (1 << 4)
#define L_ADJUST_TRI (L_ADJUST | L_RAISE | L_LOWER)

char layer_state_str[24];

const char *read_layer_state(void) {
  switch (layer_state)
  {
  case L_BASE:
    switch (default_layer_state)
    {
    case L_QWERTY:
      snprintf(layer_state_str, sizeof(layer_state_str), "QWERTY");
      break;
    
    default:
      snprintf(layer_state_str, sizeof(layer_state_str), "Workman");
      break;
    }
    break;
  case L_QWERTY:
    snprintf(layer_state_str, sizeof(layer_state_str), "QWERTY");
    break;
  case L_RAISE:
    snprintf(layer_state_str, sizeof(layer_state_str), "Raise");
    break;
  case L_LOWER:
    snprintf(layer_state_str, sizeof(layer_state_str), "Lower");
    break;
  case L_ADJUST:
  case L_ADJUST_TRI:
    snprintf(layer_state_str, sizeof(layer_state_str), "Adjust");
    break;
  default:
    snprintf(layer_state_str, sizeof(layer_state_str), "Undef-%u", layer_state);
  }

  return layer_state_str;
}
