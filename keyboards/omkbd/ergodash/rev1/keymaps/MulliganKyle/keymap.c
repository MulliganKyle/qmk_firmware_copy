#include QMK_KEYBOARD_H


#define _L00 0
#define _L01 1
#define _L02 2
#define _L03 3
#define _L04 4
#define _L05 5
#define _L06 6
#define _L07 7
#define _L08 8
#define _L09 9
#define _L10 10

#define EISU LALT(KC_GRV)

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

  /* L00 layer picker
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * | XXXXXXX|   TO(1)|   TO(2)|   TO(3)|   TO(4)|   TO(5)| XXXXXXX|                      | XXXXXXX|   TO(6)|   TO(7)|   TO(8)|   TO(9)|  TO(10)| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX|   MO(3)| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX|||||| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX|  MO(10)|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L00] = LAYOUT( \
    XXXXXXX,   TO(1),   TO(2),   TO(3),   TO(4),   TO(5), XXXXXXX,                        XXXXXXX,   TO(6),   TO(7),   TO(8),   TO(9),  TO(10), XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX,   MO(3), XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,  MO(10)  \
  ),

  /* L01 general usage
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * |       =|       1|       2|       3|       4|       5|    PLAY|                      |    PGUP|       6|       7|       8|       9|       0|       -|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |     TAB|       Q|       W|       E|       R|       T|     ESC|                      |   PGDWN|       Y|       U|       I|       O|       P|       \|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |    CAPS|       A|       S|       D|       F|       G| XXXXXXX|                      |   TO(0)|       H|       J|       K|       L|       ;|       '|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |   SHIFT|       Z|       X|       C|       V|       B|    CTRL|                      |     ALT|       N|       M|       ,|       .|       /|   SHIFT|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |       `|   MO(3)| COMMAND|    LEFT||||||||||   RIGHT| BACKSPC|  DELETE||||||   ENTER|   SPACE|      UP||||||||||    DOWN|       [|       ]|  MO(10)|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L01] = LAYOUT( \
     KC_EQL,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, KC_MPLY,                        KC_PGUP,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS, \
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_ESC,                        KC_PGDN,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS, \
    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, XXXXXXX,                          TO(0),    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, \
    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_LCTL,                        KC_RALT,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, \
     KC_GRV,   MO(3), KC_LGUI, KC_LEFT,          KC_RGHT, KC_BSPC,  KC_DEL,       KC_ENT,  KC_SPC,   KC_UP,          KC_DOWN, KC_LBRC, KC_RBRC,  MO(10)  \
  ),

  /* L02 first person shoooters general
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * |       =|       1|       2|       3|       4|       5| XXXXXXX|                      |    PGUP|       6|       7|       8|       9|       0|       -|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |     TAB|       Q|       W|       E|       R|       T|     ESC|                      |   PGDWN|       Y|       U|       I|       O|       P|       \|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |    CAPS|       A|       S|       D|       F|       G| XXXXXXX|                      |   TO(0)|       H|       J|       K|       L|       ;|       '|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |   SHIFT|       Z|       X|       C|       V|       B| BACKSPC|                      |     ALT|       N|       M|       ,|       .|       /|   SHIFT|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |    CTRL|   MO(3)|   SHIFT|       Z||||||||||    CTRL|   SPACE|  DELETE||||||   ENTER|   SPACE|      UP||||||||||    DOWN|    LEFT|   RIGHT|  MO(10)|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L02] = LAYOUT( \
     KC_EQL,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5, XXXXXXX,                        KC_PGUP,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS, \
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_ESC,                        KC_PGDN,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS, \
    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G, XXXXXXX,                          TO(0),    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, \
    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_BSPC,                        KC_RALT,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, \
    KC_LCTL,   MO(3), KC_LSFT,    KC_Z,          KC_LCTL,  KC_SPC,  KC_DEL,       KC_ENT,  KC_SPC,   KC_UP,          KC_DOWN, KC_LEFT, KC_RGHT,  MO(10)  \
  ),

  /* L03 Special characters and fkeys
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * |     ESC|      F1|      F2|      F3|      F4|      F5| XXXXXXX|                      | XXXXXXX|      F6|      F7|      F8|      F9|     F10|     F11|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX|       !|       @|       {|       }|       ||     ESC|                      | XXXXXXX|      UP|       7|       8|       9|       *|     F12|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX|       #|       $|       (|       )|       `| XXXXXXX|                      |   TO(0)|    DOWN|       4|       5|       6|       +|       -|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX|       %|       ^|       [|       ]|       ~| XXXXXXX|                      | XXXXXXX|       &|       1|       2|       3|       /|   ENTER|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX|||||| XXXXXXX| XXXXXXX| XXXXXXX||||||||||    DOWN|    LEFT|       =| XXXXXXX|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L03] = LAYOUT( \
     KC_ESC,   KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5, XXXXXXX,                        XXXXXXX,   KC_F6,   KC_F7,   KC_F8,   KC_F9,  KC_F10,  KC_F11, \
    XXXXXXX, KC_EXLM,   KC_AT, KC_LCBR, KC_RCBR, KC_PIPE,  KC_ESC,                        XXXXXXX,   KC_UP,   KC_P7,   KC_P8,   KC_P9, KC_PAST,  KC_F12, \
    XXXXXXX, KC_HASH,  KC_DLR, KC_LPRN, KC_RPRN,  KC_GRV, XXXXXXX,                          TO(0), KC_DOWN,   KC_P4,   KC_P5,   KC_P6, KC_PPLS, KC_MINS, \
    XXXXXXX, KC_PERC, KC_CIRC, KC_LBRC, KC_RBRC, KC_TILD, KC_BSPC,                        KC_RALT, KC_AMPR,   KC_P1,   KC_P2,   KC_P3, KC_PSLS,  KC_ENT, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,            KC_P0, KC_PDOT, KC_PEQL, XXXXXXX  \
  ),

  /* L04 Starcraft/Dota
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * |       0|       1|       2|       3|       4|       5|       6|                      |    PGUP|       6|       7|       8|       9|       0|       -|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |     TAB|       Q|       W|       E|       R|       T|     ESC|                      |   PGDWN|       Y|       U|       I|       O|       P|       \|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |    CAPS|       A|       S|       D|       F|       G|       7|                      |   TO(0)|       H|       J|       K|       L|       ;|       '|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |   SHIFT|       Z|       X|       C|       V|       B| BACKSPC|                      |     ALT|       N|       M|       ,|       .|       /|   SHIFT|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * |       0|       9|       8|    LEFT||||||||||     ALT|   SPACE|  DELETE||||||   ENTER|   SPACE|      F6||||||||||      F7|      F8|      F9|     F10|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L04] = LAYOUT( \
       KC_0,    KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,                        KC_PGUP,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0, KC_MINS, \
     KC_TAB,    KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,  KC_ESC,                        KC_PGDN,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P, KC_BSLS, \
    KC_CAPS,    KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_7,                          TO(0),    KC_H,    KC_J,    KC_K,    KC_L, KC_SCLN, KC_QUOT, \
    KC_LSFT,    KC_Z,    KC_X,    KC_C,    KC_V,    KC_B, KC_BSPC,                        KC_RALT,    KC_N,    KC_M, KC_COMM,  KC_DOT, KC_SLSH, KC_RSFT, \
     KC_F10,    KC_0,    KC_9,    KC_8,          KC_RALT,  KC_SPC,  KC_DEL,       KC_ENT,  KC_SPC,   KC_F6,            KC_F7,   KC_F8,   KC_F9,  KC_F10  \
  ),

  /* L05
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      |   TO(0)| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX|||||| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L05] = LAYOUT( \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          TO(0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
  ),

  /* L06
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      |   TO(0)| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX|||||| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L06] = LAYOUT( \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          TO(0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
  ),

  /* L07
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      |   TO(0)| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX|||||| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L07] = LAYOUT( \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          TO(0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
  ),

  /* L08
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      |   TO(0)| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX|||||| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L08] = LAYOUT( \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          TO(0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
  ),

  /* L09
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      |   TO(0)| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX|||||| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L09] = LAYOUT( \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                          TO(0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX  \
  ),

  /* L10
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   * | RGBMODP| RGBMODK| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| RGB TOG|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | RGBMODB| RGBMODX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| RGBMOD+|                      | XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | RGBMODR| RGBMODG| EFFECT+| BRIGHT+|    SAT+|    HUE+| RGBMOD-|                      |   TO(0)| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | RGBMDSW| RGBMODT| EFFECT-| BRIGHT-|    SAT-|    HUE-| XXXXXXX|                      | XXXXXXX| XXXXXXX| XXXXXXX|    PREV|    NEXT|    PLAY| XXXXXXX|
   * |--------+--------+--------+--------+--------+--------+--------+----------------------+--------+--------+--------+--------+--------+--------+--------|
   * | RGBMDSN| XXXXXXX| XXXXXXX| XXXXXXX|||||||||| XXXXXXX| XXXXXXX| XXXXXXX|||||| XXXXXXX| XXXXXXX|    VOL+||||||||||    VOL-|    MUTE| XXXXXXX| XXXXXXX|
   * ,----------------------------------------------------------------------------------------------------------------------------------------------------.
   */
  [_L10] = LAYOUT( \
    RGB_M_P, RGB_M_K, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    RGB_M_B, RGB_M_X, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, RGB_MOD,                        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
    RGB_M_R, RGB_M_G, RGB_SPI, RGB_VAI, RGB_SAI, RGB_HUI,RGB_RMOD,                          TO(0), XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
   RGB_M_SW, RGB_M_T, RGB_SPD, RGB_VAD, RGB_SAD, RGB_HUD, XXXXXXX,                        XXXXXXX, XXXXXXX, XXXXXXX, KC_MPRV, KC_MNXT, KC_MPLY, XXXXXXX, \
   RGB_M_SN, XXXXXXX, XXXXXXX, XXXXXXX,          XXXXXXX, XXXXXXX, XXXXXXX,      XXXXXXX, XXXXXXX, KC_VOLU,          KC_VOLD, KC_MUTE, XXXXXXX, XXXXXXX  \
  )
};

// #ifdef AUDIO_ENABLE
// float tone_qwerty[][2]     = SONG(QWERTY_SOUND);
// #endif

// void persistent_default_layer_set(uint16_t default_layer) {
//   eeconfig_update_default_layer(default_layer);
//   default_layer_set(default_layer);
// }

// bool process_record_user(uint16_t keycode, keyrecord_t *record) {
//   switch (keycode) {
//     case QWERTY:
//       if (record->event.pressed) {
//          print("mode just switched to qwerty and this is a huge string\n");
//         set_single_persistent_default_layer(_QWERTY);
//       }
//       return false;
//       break;
//     case LOWER:
//       if (record->event.pressed) {
//         layer_on(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_LOWER);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case RAISE:
//       if (record->event.pressed) {
//         layer_on(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       } else {
//         layer_off(_RAISE);
//         update_tri_layer(_LOWER, _RAISE, _ADJUST);
//       }
//       return false;
//       break;
//     case ADJUST:
//       if (record->event.pressed) {
//         layer_on(_ADJUST);
//       } else {
//         layer_off(_ADJUST);
//       }
//       return false;
//       break;
//   }
//   return true;
// }
