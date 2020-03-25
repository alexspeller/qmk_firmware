#include QMK_KEYBOARD_H


#include QMK_KEYBOARD_H
#include "version.h"
#include <print.h>

#define XXX KC_NO

enum layers {
  BASE,
  SYMB,
  TMP,
  MOVE,
  ARROW,
  PROG
};



enum custom_keycodes {
  VRSN = SAFE_RANGE,
  MUL, // mouse, todo
  MUR,
  MDL,
  MDR,
  COMMENT,
  BACK,
  FORWARD,
  NXTAB,
  PRTAB,
  NXWIN,
  PRWIN,
  PRAPP,
  NAPP
};

enum {
  TD_ESC_RST
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [BASE] = LAYOUT_ergodox(
    //---------------T----------T----------T----------T----------T----------T------------.
          KC_ESC     ,   KC_1   ,   KC_2   ,  KC_3    ,   KC_4   ,   KC_5   ,  KC_MINS   ,
    //---------------+----------+----------+----------+----------+----------+------------|
          KC_TAB     ,   KC_Q   ,   KC_W   ,  KC_E    ,   KC_R   ,   KC_T   ,  BACK      ,
    //---------------+----------+----------+----------+----------+----------|            |
          KC_LCTL    ,   KC_A   ,   KC_S   ,  KC_D    ,   KC_F   ,   KC_G   //–––-–––––––|
    //---------------+----------+----------+----------+----------+----------|            |
    ,     KC_LSFT    ,   KC_Z   ,   KC_X   ,  KC_C    ,   KC_V   ,   KC_B   ,  PRTAB     ,
    //---------------+----------+----------+----------+----------+----------┴------------'
             KC_NUHS  ,  KC_GRV ,  KC_LCTL , KC_LALT  , KC_LGUI  ,
         //----------┴----------┴----------┴----------┴----------'

                                                                      //---------T----------.
                                                                          PRWIN  ,  PRAPP   ,
                                                          //----------|----------|----------|
                                                          /*          |         */  XXX     ,
                                                          //          |          |----------|
                                                             KC_BSPC  ,  KC_DEL  ,  MO(TMP) ,
                                                          //----------┴----------┴----------'



                         //------------T----------T----------T----------T----------T----------T-----------------.
                              KC_EQL   ,   KC_6   ,   KC_7   ,   KC_8   ,   KC_9   ,   KC_0   ,    RESET        ,
                         //------------+----------+----------+----------+----------+----------+-----------------|
                              FORWARD  ,   KC_Y   ,   KC_U   ,   KC_I   ,   KC_O   ,   KC_P   ,    KC_BSLS      ,
                         //            |----------+----------+----------+----------+----------+-----------------|
                         /*-----------*/   KC_H   ,   KC_J   ,   KC_K   ,   KC_L   , KC_SCLN  ,    KC_QUOT      ,
                         //            |----------+----------+----------+----------+----------+-----------------|
                              NXTAB    ,   KC_N   ,   KC_M   ,  KC_COMM ,  KC_DOT  , KC_SLSH  ,   KC_RSFT       ,
                         //------------┴----------+----------+----------+----------+----------┴-----------------'
                                                     KC_RGUI ,  KC_RALT , KC_LBRC  , KC_RBRC  , KC_RCTL  ,
                                                  //---------┴----------┴----------┴----------┴----------'

                      //---------T----------.
                          NAPP   ,   NXWIN  ,
                      //---------|----------|----------|
                          XXX    ,          //         |
                      //---------|          |          |
                         MO(TMP) ,  KC_ENT  ,  KC_SPC  //
                      //---------┴----------┴----------'

  ),

  [SYMB] = LAYOUT_ergodox(
    //---------------T----------T----------T----------T----------T----------T------------.
          _______    ,  KC_F1   ,  KC_F2   ,  KC_F3   ,  KC_F4   ,  KC_F5   ,   XXX      ,
    //---------------+----------+----------+----------+----------+----------+------------|
          _______    ,  KC_EXLM ,  KC_AT   , KC_LCBR  , KC_RCBR  ,  KC_AMPR ,   XXX      ,
    //---------------+----------+----------+----------+----------+----------|            |
          _______    ,  KC_HASH ,  KC_DLR  ,  KC_LPRN ,  KC_RPRN , KC_NUHS  //–––-–––––––|
    //---------------+----------+----------+----------+----------+----------|            |
    ,     _______    ,  KC_PERC , KC_PERC  , KC_LBRC  , KC_RBRC  ,  KC_TILD ,   XXX      ,
    //---------------+----------+----------+----------+----------+----------┴------------'
            _______  ,  _______ , _______  , _______  ,  _______ ,
         //----------┴----------┴----------┴----------┴----------'

                                                                      //---------T----------.
                                                                          XXX    ,   XXX    ,
                                                         //----------|----------|----------|
                                                          /*          |         */   XXX    ,
                                                          //          |          |----------|
                                                             _______  ,  _______ , _______  ,
                                                          //----------┴----------┴----------'



                         //------------T----------T----------T----------T----------T----------T-----------------.
                              XXX      ,   KC_F6  ,  KC_F7   ,  KC_F8   ,  KC_F9   ,  KC_F10  ,   RESET         ,
                         //------------+----------+----------+----------+----------+----------+-----------------|
                              XXX      ,   KC_F15 ,  _______ , _______  , _______  , _______  ,   VRSN          ,
                         //            |----------+----------+----------+----------+----------+-----------------|
                         /*-----------*/   KC_F14 ,  KC_MINS , KC_UNDS  , KC_EQUAL , KC_PLUS  ,   _______       ,
                         //            |----------+----------+----------+----------+----------+-----------------|
                              XXX      ,  _______ ,  _______ ,  _______ ,  _______ , COMMENT  ,   _______       ,
                         //------------┴----------+----------+----------+----------+----------┴-----------------'
                                                    _______  ,  _______ ,  _______ ,  _______ ,  _______ ,
                                                  //---------┴----------┴----------┴----------┴----------'

                     //---------T----------.
                          XXX    ,  XXX     ,
                      //---------|----------|----------|
                         XXX     ,          //         |
                      //---------|          |          |
                        _______  , _______  , _______ //
                      //---------┴----------┴----------'




  ),

  [MOVE] = LAYOUT_ergodox(

    //---------------T----------T----------T----------T----------T----------T------------.
        _______      ,  XXX     ,  XXX     ,  XXX     ,   XXX    ,  XXX     ,   XXX      ,
    //---------------+----------+----------+----------+----------+----------+------------|
        _______      ,  XXX     ,  XXX     , XXX      ,   XXX    ,  XXX     ,   XXX      ,
    //---------------+----------+----------+----------+----------+----------|            |
        _______      ,  XXX     , KC_WH_R  , KC_WH_D  ,  KC_WH_U ,  KC_WH_L //–––-–––––––|
    //---------------+----------+----------+----------+----------+----------|            |
    ,   _______      ,  XXX     ,  KC_WH_R , KC_WH_U  ,  KC_WH_L  ,  XXX     ,   XXX      ,
    //---------------+----------+----------+----------+----------+----------┴------------'
            _______  , _______  , _______  , _______  ,  _______ ,
                                                                      //---------T----------.
                                                                          XXX    ,  XXX     ,
                                                          //----------|----------|----------|
                                                          /*          |         */  XXX     ,
                                                          //          |          |----------|
                                                             KC_BTN1  ,  KC_BTN2 , TG(MOVE) ,
                                                          //----------┴----------┴----------'



                         //------------T----------T----------T----------T----------T----------T-----------------.
                               XXX     ,   XXX    ,   XXX    ,  XXX     ,  XXX     ,  XXX     ,  KC_F11         ,
                         //------------+----------+----------+----------+----------+----------+-----------------|
                               XXX     ,   XXX    ,   XXX    ,  XXX     ,  XXX     ,  XXX     ,  XXX            ,
                         //            |----------+----------+----------+----------+----------+-----------------|
                         /*-----------*/  KC_MS_L , KC_MS_D  , KC_MS_U  , KC_MS_R  ,  XXX     ,  XXX            ,
                         //            |----------+----------+----------+----------+----------+-----------------|
                              XXX      ,   XXX    ,  KC_MS_L , KC_MS_D  , KC_MS_R  ,  XXX     ,  _______        ,
                         //------------┴----------+----------+----------+----------+----------┴-----------------'
                                                     _______ , _______  , _______  , _______  , _______  ,
                                                  //---------┴----------┴----------┴----------┴----------'

                      //---------T----------.
                          XXX    ,  XXX     ,
                      //---------|----------|----------|
                          XXX    ,          //         |
                      //---------|          |          |
                        TG(MOVE) ,  KC_BTN1 , KC_BTN2 //
                      //---------┴----------┴----------'

  ),
  [ARROW] = LAYOUT_ergodox(

    //---------------T----------T----------T----------T----------T----------T------------.
        _______      , _______  , _______  , _______  ,  _______ , _______  ,  _______   ,
    //---------------+----------+----------+----------+----------+----------+------------|
        _______      , _______  , _______  ,_______   ,  _______ , _______  ,  _______   ,
    //---------------+----------+----------+----------+----------+----------|            |
        _______      , KC_LALT  , _______  , _______  ,  KC_LSFT ,  _______ //–––-–––––––|
    //---------------+----------+----------+----------+----------+----------|            |
    ,   _______      , _______  ,  _______ , _______  ,  _______  , _______  ,  _______   ,
    //---------------+----------+----------+----------+----------+----------┴------------'
            _______  , _______  , _______  , _______  ,  _______ ,
                                                                      //---------T----------.
                                                                        _______  ,  _______ ,
                                                          //----------|----------|----------|
                                                          /*          |         */  _______ ,
                                                          //          |          |----------|
                                                             _______  ,  _______ ,  _______ ,
                                                          //----------┴----------┴----------'



                         //------------T----------T----------T----------T----------T----------T-----------------.
                              _______  ,  _______ ,  _______ , _______  , _______  , _______  ,  _______        ,
                         //------------+----------+----------+----------+----------+----------+-----------------|
                              _______  ,  _______ ,  KC_HOME , KC_UP    , KC_END   , _______  , _______         ,
                         //            |----------+----------+----------+----------+----------+-----------------|
                         /*-----------*/  KC_LEFT , KC_DOWN  , KC_UP    , KC_RIGHT , _______  , _______         ,
                         //            |----------+----------+----------+----------+----------+-----------------|
                             _______   ,  _______ ,  KC_LEFT , KC_DOWN  , KC_RIGHT , _______  ,  _______        ,
                         //------------┴----------+----------+----------+----------+----------┴-----------------'
                                                     _______ , _______  , _______  , _______  , _______  ,
                                                  //---------┴----------┴----------┴----------┴----------'

                      //---------T----------.
                         _______ , _______  ,
                      //---------|----------|----------|
                         _______ ,          //         |
                      //---------|          |          |
                        _______  ,  _______ , _______ //
                      //---------┴----------┴----------'

  )
};



bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  bool pressed = record -> event.pressed;

  switch (keycode) {
    case KC_ESC:
      if (pressed && IS_LAYER_ON(MOVE)) {
        layer_off(MOVE);
        return false;
      } else {
        return true;
      }
    case VRSN:
      if (pressed) {
        SEND_STRING (QMK_KEYBOARD "/" QMK_KEYMAP " @ " QMK_VERSION);
      }
      return false;
    case COMMENT:
      if (pressed) {
        SEND_STRING("//");
      }
      return false;
    case BACK:
      if (pressed) {
        SEND_STRING(SS_LGUI("["));
      }
      return false;
    case FORWARD:
      if (pressed) {
        SEND_STRING(SS_LGUI("]"));
      }
      return false;
    case PRTAB:
      if (pressed) {
        register_code(KC_LSFT);
        register_code(KC_LGUI);
        tap_code(KC_LBRC);
        unregister_code(KC_LSFT);
        unregister_code(KC_LGUI);
      }
      return false;
    case NXTAB:
      if (pressed) {
        register_code(KC_LSFT);
        register_code(KC_LGUI);
        tap_code(KC_RBRC);
        unregister_code(KC_LSFT);
        unregister_code(KC_LGUI);
      }
      return false;
    case PRWIN:
      if (pressed) {
        register_code(KC_LGUI);
        tap_code(KC_NUBS);
        unregister_code(KC_LGUI);
      }
      return false;
    case NXWIN:
      if (pressed) {
        register_code(KC_LSFT);
        register_code(KC_LGUI);
        tap_code(KC_NUBS);
        unregister_code(KC_LSFT);
        unregister_code(KC_LGUI);
      }
      return false;
    case PRAPP:
      if (pressed) {
        register_code(KC_LSFT);
        register_code(KC_LGUI);
        tap_code(KC_TAB);
        unregister_code(KC_LSFT);
        unregister_code(KC_LGUI);
      }
      return false;
    case NAPP:
      if (pressed) {
        register_code(KC_LGUI);
        tap_code(KC_TAB);
        unregister_code(KC_LGUI);
      }
      return false;

  }
  return true;
}

enum combo_events {
  SDF_SHIFT,
  JKL_SHIFT,
  ASD_SYM,
  KLSEMI_SYM,
  AS_ESC,
  DF_MOVE,
  JK_MOVE,
  SD_ARROW,
  LSEMI_ENTER
};



const uint16_t PROGMEM shift_combo[]    = {KC_S, KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM rshift_combo[]   = {KC_J, KC_K, KC_L, COMBO_END};
const uint16_t PROGMEM sym_combo[]      = {KC_A, KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM rsym_combo[]     = {KC_K, KC_L, KC_SCLN, COMBO_END};
const uint16_t PROGMEM esc_combo[]      = {KC_A, KC_S, COMBO_END};
const uint16_t PROGMEM move_combo[]      = {KC_D, KC_F, COMBO_END};
const uint16_t PROGMEM rmove_combo[]      = {KC_J, KC_K, COMBO_END};
const uint16_t PROGMEM arrow_combo[]      = {KC_S, KC_D, COMBO_END};
const uint16_t PROGMEM enter_combo[]      = {KC_L, KC_SCLN, COMBO_END};

combo_t key_combos[COMBO_COUNT] = {
  [SDF_SHIFT] = COMBO_ACTION(shift_combo),
  [JKL_SHIFT] = COMBO_ACTION(rshift_combo),
  [ASD_SYM]   = COMBO_ACTION(sym_combo),
  [KLSEMI_SYM] = COMBO_ACTION(rsym_combo),
  [AS_ESC]    = COMBO_ACTION(esc_combo),
  [DF_MOVE]   = COMBO_ACTION(move_combo),
  [JK_MOVE]   = COMBO_ACTION(rmove_combo),
  [SD_ARROW]   = COMBO_ACTION(arrow_combo),
  [LSEMI_ENTER] = COMBO_ACTION(enter_combo)
};

void process_combo_event(uint8_t combo_index, bool pressed) {
  if (pressed) {
    println("combo pressed");
  } else {
    println("combo released");
  }

  switch(combo_index) {
    case SDF_SHIFT:
    case JKL_SHIFT:
      println("SHIFT");
      if (pressed) {
        register_code(KC_LSFT);
      } else {
        unregister_code(KC_LSFT);
      }
      break;

    case ASD_SYM:
    case KLSEMI_SYM:
      println("SYM");
      if (pressed) {
        layer_on(SYMB);
      } else {
        layer_off(SYMB);
      }
      break;

    case AS_ESC:
      println("ESC");

      if (pressed) {
        if IS_LAYER_ON(MOVE) {
          layer_off(MOVE);
        } else {
          register_code(KC_ESC);
        }
      } else {
        unregister_code(KC_ESC);
      }
      break;

    case LSEMI_ENTER:
      println("ENTER");

      if (pressed) {
        register_code(KC_ENT);
      } else {
        unregister_code(KC_ENT);
      }
      break;

    case DF_MOVE:
    case JK_MOVE:
      println("MOVE");

      if (pressed) {
        layer_on(MOVE);
      } else {
        layer_off(MOVE);
      }
      break;
    case SD_ARROW:
      println("ARROW");

      if (pressed) {
        layer_on(ARROW);
      } else {
        layer_off(ARROW);
      }
      break;
  }
}


void matrix_scan_user(void) {
  // if (combo_timer > 0 && timer_elapsed(combo_timer) > COMBO_TERM) {
  //   combo_timer = 0;

  //   for (current_combo_index = 0; current_combo_index < COMBO_COUNT;
  //        ++current_combo_index) {
  //     combo_t *combo = &key_combos[current_combo_index];
  //     is_combo_key |= process_single_combo(combo, keycode, record);
  //     no_combo_keys_pressed = no_combo_keys_pressed && NO_COMBO_KEYS_ARE_DOWN;
  //   }
  // }
};

