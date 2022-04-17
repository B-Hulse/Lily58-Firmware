#include QMK_KEYBOARD_H

enum layer_number {
  _QWERTY = 0,
  _WORKMAN,
  _LOWER,
  _RAISE,
  _ADJUST,
};

enum custom_keycodes {
  BH_ABCD1234 = SAFE_RANGE,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* QWERTY
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   W  |   E  |   R  |   T  |                    |   Y  |   U  |   I  |   O  |   P  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   D  |   F  |   G  |-------.    ,-------|   H  |   J  |   K  |   L  |   ;  |  '   |
 * |------+------+------+------+------+------|  Del  |    |    \  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   C  |   V  |   B  |-------|    |-------|   N  |   M  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Shift \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_QWERTY] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,       KC_7,    KC_8,    KC_9,    KC_0,    KC_GRV,
  KC_TAB,   KC_Q,   KC_W,    KC_E,    KC_R,    KC_T,                        KC_Y,       KC_U,    KC_I,    KC_O,    KC_P,    KC_MINS,
  KC_LSFT,  KC_A,   KC_S,    KC_D,    KC_F,    KC_G,                        KC_H,       KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,
  KC_LCTRL, KC_Z,   KC_X,    KC_C,    KC_V,    KC_B,       KC_DEL, KC_BSLS, KC_N,       KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                             KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC, KC_LSFT, MO(_RAISE), KC_BSPC, KC_APP
),
/* WORKMAN
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * | ESC  |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |  `   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * | Tab  |   Q  |   D  |   R  |   W  |   B  |                    |   J  |   F  |   U  |   P  |  :  |  -   |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |LCTRL |   A  |   S  |   H  |   T  |   G  |-------.    ,-------|   Y  |   N  |   E  |   O  |   I  |  '   |
 * |------+------+------+------+------+------|  Del  |    |    \  |------+------+------+------+------+------|
 * |LShift|   Z  |   X  |   M  |   C  |   V  |-------|    |-------|   K  |   L  |   ,  |   .  |   /  |RShift|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Shift \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

 [_WORKMAN] = LAYOUT(
  KC_ESC,   KC_1,   KC_2,    KC_3,    KC_4,    KC_5,                        KC_6,       KC_7,    KC_8,    KC_9,    KC_0,     KC_GRV,
  KC_TAB,   KC_Q,   KC_D,    KC_R,    KC_W,    KC_B,                        KC_J,       KC_F,    KC_U,    KC_P,    KC_SCLN,  KC_MINS,
  KC_LSFT,  KC_A,   KC_S,    KC_H,    KC_T,    KC_G,                        KC_Y,       KC_N,    KC_E,    KC_O,    KC_I,     KC_QUOT,
  KC_LCTRL, KC_Z,   KC_X,    KC_M,    KC_C,    KC_V,       KC_DEL, KC_BSLS, KC_K,       KC_L,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT,
                             KC_LALT, KC_LGUI, MO(_LOWER), KC_SPC, KC_LSFT, MO(_RAISE), KC_BSPC, KC_APP
),
/* LOWER
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   1  |   2  |   3  |   4  |   5  |                    |   6  |   7  |   8  |   9  |   0  |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |   /  |   -  |   +  |   =  |   *  |-------.    ,-------|      |   (  |   )  |   {  |   }  |      |
 * |------+------+------+------+------+------|  Del  |    |    \  |------+------+------+------+------+------|
 * |      |      |      |MvLeft|MvRght|      |-------|    |-------|      |   [  |   ]  |   <  |   >  |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Shift \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
[_LOWER] = LAYOUT(
  _______, _______, _______, _______,      _______,      _______,                   _______, _______, _______, _______, _______, _______,
  _______, KC_1,    KC_2,    KC_3,         KC_4,         KC_5,                      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    _______,
  _______, KC_PSLS, KC_PMNS, KC_PPLS,      KC_EQL,       KC_PAST,                   _______, KC_LPRN, KC_RPRN, KC_LCBR, KC_RCBR, _______,
  _______, _______, _______, LSG(KC_LEFT), LSG(KC_RGHT), _______, _______, _______, _______, KC_LBRC, KC_RBRC, KC_LT,   KC_GT,   _______,
                             _______,      _______,      _______, _______, KC_BSPC, _______, _______, KC_RALT
),
/* RAISE
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |  F1  |  F2  |  F3  |  F4  |  F5  |  F6  |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F7  |  F8  |  F9  | F10  | F11  | F12  |                    | PgDn | Pause|  Up  | PScr | Ins  | Home |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |  F13 |  F14 |  F15 |  F16 |  F17 |  F18 |-------.    ,-------| PgUp | Left | Down | Right| Del  | End  |
 * |------+------+------+------+------+------|  Del  |    |    \  |------+------+------+------+------+------|
 * |  F19 |  F20 |  F21 | F22  | F23  | F24  |-------|    |-------|      | Prev | Play | Next | Num  |Scroll|
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Shift \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */

[_RAISE] = LAYOUT(
  KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,                       _______, _______, _______, _______, _______, _______,
  KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,                      KC_PGUP, KC_PAUS, KC_UP,   KC_PSCR, KC_INS,  KC_HOME,
  KC_F13,  KC_F14,  KC_F15,  KC_F16,  KC_F17,  KC_F18,                      KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT, KC_DEL,  KC_END,
  KC_F19,  KC_F20,  KC_F21,  KC_F22,  KC_F23,  KC_F24,   _______, _______,  _______, KC_MPRV, KC_MPLY, KC_MNXT, KC_NLCK, KC_SLCK,
                             _______, _______, _______,  _______, _______,  _______, _______, _______
),
/* ADJUST
 * ,-----------------------------------------.                    ,-----------------------------------------.
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |                    |      |      |      |      |      |      |
 * |------+------+------+------+------+------|                    |------+------+------+------+------+------|
 * |      |      |      |      |      |      |-------.    ,-------|      |      |      |      |      |      |
 * |------+------+------+------+------+------|       |    |       |------+------+------+------+------+------|
 * |      |      |      |      |      |ABC...|-------|    |-------|QWERTY|Workmn|      |      |      |      |
 * `-----------------------------------------/       /     \      \-----------------------------------------'
 *                   | LAlt | LGUI |LOWER | /Space  /       \Shift \  |RAISE |BackSP| RGUI |
 *                   |      |      |      |/       /         \      \ |      |      |      |
 *                   `----------------------------'           '------''--------------------'
 */
  [_ADJUST] = LAYOUT(
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX,     XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX,     XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                       XXXXXXX,     XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, BH_ABCD1234, XXXXXXX, XXXXXXX, DF(_QWERTY), DF(_WORKMAN), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,
                             _______, _______, _______,     _______, _______, _______,     _______,      _______
  )
};

layer_state_t layer_state_set_user(layer_state_t state) {
  return update_tri_layer_state(state, _LOWER, _RAISE, _ADJUST);
}

#ifdef COMBO_ENABLE

const uint16_t PROGMEM combo_enter[] = {KC_SPC, KC_LSFT, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
    COMBO(combo_enter, KC_ENT),
};

#endif // COMBO_ENABLE

//SSD1306 OLED update loop, make sure to enable OLED_ENABLE=yes in rules.mk
#ifdef OLED_ENABLE

oled_rotation_t oled_init_user(oled_rotation_t rotation) {
  if (!is_keyboard_master())
    return OLED_ROTATION_180;  // flips the display 180 degrees if offhand
  return rotation;
}

// When you add source files to SRC in rules.mk, you can use functions.
const char *read_layer_state(void);
const char *read_logo(void);
void set_keylog(uint16_t keycode, keyrecord_t *record);
const char *read_keylog(void);
const char *read_keylogs(void);

// const char *read_mode_icon(bool swap);
// const char *read_host_led_state(void);
void set_timelog(void);
const char *read_timelog(void);

bool oled_task_user(void) {
  if (is_keyboard_master()) {
    // If you want to change the display of OLED, you need to change here
    oled_write_ln(read_layer_state(), false);
  } else {
    oled_write(read_logo(), false);
  }
    return false;
}
#endif // OLED_ENABLE

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode)
  {
    case BH_ABCD1234:
      if (record->event.pressed) {
        SEND_STRING("ABCD1234*");
      } else {
        // when keycode QMKBEST is released
      }
      break;
    
    default:
      break;
  }
  return true;
}
