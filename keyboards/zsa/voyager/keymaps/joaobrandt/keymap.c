#include QMK_KEYBOARD_H
#include "version.h"
#include "config.h"

#define MOON_LED_LEVEL LED_LEVEL
#define ML_SAFE_RANGE SAFE_RANGE

enum custom_keycodes {
  RGB_SLD = ML_SAFE_RANGE,
  ST_MACRO_0,
  ST_MACRO_1,
  ST_MACRO_2,
  ST_MACRO_3,
  ST_MACRO_4,
  ST_MACRO_5,
  ST_MACRO_6,
  ST_MACRO_7,
  ST_MACRO_8,
  ST_MACRO_9,
  ST_MACRO_10,
  ST_MACRO_11,
  ST_MACRO_12,
  ST_MACRO_13,
};

enum tap_dance_codes {
  DANCE_0,
};

/* ------------------------------------- */
/*          Keymap                       */
/* ------------------------------------- */
#define ___ KC_TRANSPARENT
#define HR_SFT_A MT(MOD_LSFT, KC_A)
#define HR_CTL_S MT(MOD_LCTL, KC_S)
#define HR_ALT_D MT(MOD_LALT, KC_D)
#define HR_CMD_F MT(MOD_LGUI, KC_F)
#define HR_GUI_J MT(MOD_RGUI, KC_J)
#define HR_ALT_K MT(MOD_RALT, KC_K)
#define HR_CTL_L MT(MOD_RCTL, KC_L)
#define HR_SFT_SCLN MT(MOD_LSFT, KC_SCLN)
#define SUPER_M LALT(LGUI(LCTL(LSFT(KC_M))))

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_voyager(
//╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮ ╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮
    CW_TOGG,          KC_1,             KC_2,             KC_3,             KC_4,             KC_5,               KC_6,             KC_7,             KC_8,             KC_9,             KC_0,             ___,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    KC_GRAVE,         KC_Q,             KC_W,             KC_E,             KC_R,             KC_T,               KC_Y,             KC_U,             KC_I,             KC_O,             KC_P,             KC_COLN,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    KC_TAB,           HR_SFT_A,         HR_CTL_S,         HR_ALT_D,         HR_CMD_F,         KC_G,               KC_H,             HR_GUI_J,         HR_ALT_K,         HR_CTL_L,         HR_SFT_SCLN,      KC_DQUO,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    OSL(3),           KC_Z,             KC_X,             KC_C,             KC_V,             KC_B,               KC_N,             KC_M,             KC_COMMA,         KC_DOT,           KC_SLASH,         ST_MACRO_0,
//╰─────────────────┴─────────────────┴─────────────────┴─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┴─────────────────┴─────────────────┴─────────────────╯
                                                                            LT(2,KC_ESCAPE),  KC_SPACE,           KC_ENTER,         LT(1,KC_BSPC)
//                                                                        ╰─────────────────┴─────────────────╯ ╰─────────────────┴─────────────────╯
  ),
  [1] = LAYOUT_voyager(
//╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮ ╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮
    ___,              ___,              ___,              ___,              ___,              ___,                ___,              ___,              ___,              ___,              ___,              ___,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    KC_F1,            KC_F4,            KC_PERC,          KC_ASTR,          KC_PLUS,          KC_EXLM,            ___,              ___,              ___,              ___,              ___,              ___,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    KC_F2,            KC_F5,            KC_HASH,          KC_PIPE,          KC_AMPR,          KC_MINUS,           ___,              ___,              ___,              ___,              ___,              ___,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    KC_F3,            KC_F6,            KC_DLR,           KC_AT,            KC_EQUAL,         KC_UNDS,            ___,              ___,              ___,              ___,              ___,              ___,
//╰─────────────────┴─────────────────┴─────────────────┴─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┴─────────────────┴─────────────────┴─────────────────╯
                                                                            ___,              ___,                ___,              ___
//                                                                        ╰─────────────────┴─────────────────╯ ╰─────────────────┴─────────────────╯
  ),
  [2] = LAYOUT_voyager(
//╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮ ╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮
    ___,              ___,              ___,              ___,              ___,              ___,                ___,              ___,              ___,              ___,              ___,              ___,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    ___,              ___,              ___,              ___,              ___,              ___,                KC_LPRN,          KC_LCBR,          KC_LBRC,          KC_CIRC,          KC_F7,            KC_F10,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    ___,              ___,              ___,              ___,              ___,              ___,                KC_LEFT,          KC_DOWN,          KC_UP,            KC_RIGHT,         KC_F8,            KC_F11,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    ___,              ___,              ___,              ___,              ___,              ___,                KC_RPRN,          KC_RCBR,          KC_RBRC,          KC_BSLS,          KC_F9,            KC_F12,
//╰─────────────────┴─────────────────┴─────────────────┴─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┴─────────────────┴─────────────────┴─────────────────╯
                                                                            ___,              ___,                ___,              ___
//                                                                        ╰─────────────────┴─────────────────╯ ╰─────────────────┴─────────────────╯
  ),
  [3] = LAYOUT_voyager(
//╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮ ╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮
    QK_BOOT,          ___,              ___,              ___,              ___,              ___,                SUPER_M,          KC_MS_BTN2,       ___,              ST_MACRO_13,      ___,              ___,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    ___,              ___,              ST_MACRO_1,       ST_MACRO_2,       ST_MACRO_3,       ST_MACRO_4,         ___,              KC_7,             KC_8,             KC_9,             ___,              ___,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    ___,              ST_MACRO_5,       ST_MACRO_6,       ST_MACRO_7,       ST_MACRO_8,       ST_MACRO_9,         ___,              KC_4,             KC_5,             KC_6,             KC_0,             ___,
//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤
    ___,              ___,              ST_MACRO_10,      ST_MACRO_11,      ___,              ST_MACRO_12,        ___,              KC_1,             KC_2,             KC_3,             ___,              ___,
//╰─────────────────┴─────────────────┴─────────────────┴─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┴─────────────────┴─────────────────┴─────────────────╯
                                                                            ___,              ___,                ___,              ___
//                                                                        ╰─────────────────┴─────────────────╯ ╰─────────────────┴─────────────────╯
  ),
};

/*//╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮ ╭─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────┬─────────────────╮*/
/*    ___,              ___,              ___,              ___,              ___,              ___,                ___,              ___,              ___,              ___,              ___,              ___,*/
/*//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤*/
/*    ___,              ___,              ___,              ___,              ___,              ___,                ___,              ___,              ___,              ___,              ___,              ___,*/
/*//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤*/
/*    ___,              ___,              ___,              ___,              ___,              ___,                ___,              ___,              ___,              ___,              ___,              ___,*/
/*//├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┼─────────────────┤*/
/*    ___,              ___,              ___,              ___,              ___,              ___,                ___,              ___,              ___,              ___,              ___,              ___,*/
/*//╰─────────────────┴─────────────────┴─────────────────┴─────────────────┼─────────────────┼─────────────────┤ ├─────────────────┼─────────────────┼─────────────────┴─────────────────┴─────────────────┴─────────────────╯*/
/*                                                                            ___,              ___,                ___,              ___*/
/*//                                                                        ╰─────────────────┴─────────────────╯ ╰─────────────────┴─────────────────╯*/

/* ------------------------------------- */
/*          Key overrides                */
/* ------------------------------------- */

const key_override_t shift_double_quotes_as_single = ko_make_basic(MOD_MASK_SHIFT, KC_DQUO, KC_QUOTE);
const key_override_t **key_overrides = (const key_override_t *[]) {
    &shift_double_quotes_as_single,
    NULL
};

/* ------------------------------------- */
/*          RGB colors                   */
/* ------------------------------------- */
extern rgb_config_t rgb_matrix_config;

#define _____ {0,0,0}
#define GREEN {74,255,255}
#define BLUE  {169,255,255}
#define PURPL {216,223,200}
#define RED   {0,255,255}
#define YELLW {41,255,255}

const uint8_t PROGMEM ledmap[][RGB_MATRIX_LED_COUNT][3] = {
    [0] = {
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
        GREEN, _____, _____, _____, _____, _____,
                                    BLUE , _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, GREEN,
        _____, PURPL,
    },
    [1] = {
        _____, _____, _____, _____, _____, _____,
        RED  , RED  , PURPL, PURPL, PURPL, PURPL,
        RED  , RED  , PURPL, PURPL, PURPL, PURPL,
        RED  , RED  , PURPL, PURPL, PURPL, PURPL,
                                    _____, _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____,
    },
    [2] = {
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
        _____, _____, _____, _____, _____, _____,
                                    _____, _____,
        _____, _____, _____, _____, _____, _____,
        BLUE , BLUE , BLUE , BLUE , RED  , RED  ,
        BLUE , BLUE , BLUE , BLUE , RED  , RED  ,
        BLUE , BLUE , BLUE , BLUE , RED  , RED  ,
        _____, _____,
    },
    [3] = {
        RED  , _____, _____, _____, _____, _____,
        _____, _____, YELLW, YELLW, YELLW, YELLW,
        _____, YELLW, YELLW, YELLW, YELLW, YELLW,
        _____, _____, YELLW, YELLW, _____, YELLW,
                                    _____, _____,
        RED  , RED  , _____, RED  , _____, _____,
        _____, GREEN, GREEN, GREEN, _____, _____,
        _____, GREEN, GREEN, GREEN, GREEN, _____,
        _____, GREEN, GREEN, GREEN, _____, _____,
        _____, _____,
    },
};

void set_layer_color(int layer) {
  for (int i = 0; i < RGB_MATRIX_LED_COUNT; i++) {
    HSV hsv = {
      .h = pgm_read_byte(&ledmap[layer][i][0]),
      .s = pgm_read_byte(&ledmap[layer][i][1]),
      .v = pgm_read_byte(&ledmap[layer][i][2]),
    };
    if (!hsv.h && !hsv.s && !hsv.v) {
        rgb_matrix_set_color(i, 0, 0, 0);
    } else {
        RGB rgb = hsv_to_rgb(hsv);
        float f = (float)rgb_matrix_config.hsv.v / UINT8_MAX;
        rgb_matrix_set_color(i, f * rgb.r, f * rgb.g, f * rgb.b);
    }
  }
}

bool rgb_matrix_indicators_user(void) {
  if (rawhid_state.rgb_control) { return false; }
  if (keyboard_config.disable_layer_led) { return false; }

  switch (biton32(layer_state)) {
    case 0:
      set_layer_color(0);
      break;
    case 1:
      set_layer_color(1);
      break;
    case 2:
      set_layer_color(2);
      break;
    case 3:
      set_layer_color(3);
      break;
   default:
    if (rgb_matrix_get_flags() == LED_FLAG_NONE)
      rgb_matrix_set_color_all(0, 0, 0);
    break;
  }
  return true;
}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch (keycode) {
    case ST_MACRO_0:
    if (record->event.pressed) {
      SEND_STRING(SS_LCTL(SS_TAP(X_A)));
    }
    break;
    case ST_MACRO_1:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_O));
    }
    break;
    case ST_MACRO_2:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_O));
    }
    break;
    case ST_MACRO_3:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE)) SS_DELAY(100) SS_TAP(X_O));
    }
    break;
    case ST_MACRO_4:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_U));
    }
    break;
    case ST_MACRO_5:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_GRAVE) SS_DELAY(100) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_6:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_7:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_8:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_GRAVE)) SS_DELAY(100) SS_TAP(X_A));
    }
    break;
    case ST_MACRO_9:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_C));
    }
    break;
    case ST_MACRO_10:
    if (record->event.pressed) {
      SEND_STRING(SS_LSFT(SS_TAP(X_6)) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_11:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_E));
    }
    break;
    case ST_MACRO_12:
    if (record->event.pressed) {
      SEND_STRING(SS_TAP(X_QUOTE) SS_DELAY(100) SS_TAP(X_I));
    }
    break;
    case ST_MACRO_13:
    if (record->event.pressed) {
      SEND_STRING(SS_LGUI(SS_LSFT(SS_TAP(X_4))));
    }
    break;

    case RGB_SLD:
      if (record->event.pressed) {
        rgblight_mode(1);
      }
      return false;
  }
  return true;
}


typedef struct {
    bool is_press_action;
    uint8_t step;
} tap;

enum {
    SINGLE_TAP = 1,
    SINGLE_HOLD,
    DOUBLE_TAP,
    DOUBLE_HOLD,
    DOUBLE_SINGLE_TAP,
    MORE_TAPS
};

static tap dance_state[1];

uint8_t dance_step(tap_dance_state_t *state);

uint8_t dance_step(tap_dance_state_t *state) {
    if (state->count == 1) {
        if (state->interrupted || !state->pressed) return SINGLE_TAP;
        else return SINGLE_HOLD;
    } else if (state->count == 2) {
        if (state->interrupted) return DOUBLE_SINGLE_TAP;
        else if (state->pressed) return DOUBLE_HOLD;
        else return DOUBLE_TAP;
    }
    return MORE_TAPS;
}


void on_dance_0(tap_dance_state_t *state, void *user_data);
void dance_0_finished(tap_dance_state_t *state, void *user_data);
void dance_0_reset(tap_dance_state_t *state, void *user_data);

void on_dance_0(tap_dance_state_t *state, void *user_data) {
    if(state->count == 3) {
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
        tap_code16(KC_DQUO);
    }
    if(state->count > 3) {
        tap_code16(KC_DQUO);
    }
}

void dance_0_finished(tap_dance_state_t *state, void *user_data) {
    dance_state[0].step = dance_step(state);
    switch (dance_state[0].step) {
        case SINGLE_TAP: register_code16(KC_DQUO); break;
        case SINGLE_HOLD: register_code16(KC_QUOTE); break;
        case DOUBLE_TAP: register_code16(KC_DQUO); register_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: tap_code16(KC_DQUO); register_code16(KC_DQUO);
    }
}

void dance_0_reset(tap_dance_state_t *state, void *user_data) {
    wait_ms(10);
    switch (dance_state[0].step) {
        case SINGLE_TAP: unregister_code16(KC_DQUO); break;
        case SINGLE_HOLD: unregister_code16(KC_QUOTE); break;
        case DOUBLE_TAP: unregister_code16(KC_DQUO); break;
        case DOUBLE_SINGLE_TAP: unregister_code16(KC_DQUO); break;
    }
    dance_state[0].step = 0;
}

tap_dance_action_t tap_dance_actions[] = {
        [DANCE_0] = ACTION_TAP_DANCE_FN_ADVANCED(on_dance_0, dance_0_finished, dance_0_reset),
};


/* ------------------------------------- */
/* Keyboard initialization code          */
/* ------------------------------------- */
void keyboard_post_init_user(void) {
  rgb_matrix_enable();
}
