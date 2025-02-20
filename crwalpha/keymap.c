// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

// Fingers
#define KC_LCTRL_F    MT(MOD_LCTL, KC_F)
#define KC_RCTRL_J    MT(MOD_RCTL, KC_J)
#define KC_LALT_V     MT(MOD_LALT, KC_V)
#define KC_RALT_M     MT(MOD_RALT, KC_M)
#define KC_LGUI_T     MT(MOD_LGUI, KC_T)
#define KC_RGUI_Y     MT(MOD_RGUI, KC_Y)

// DUO
#define KC_LSHCTRL_G  MT(MOD_LCTL | MOD_LSFT, KC_G)
#define KC_RSHCTRL_H  MT(MOD_RCTL | MOD_RSFT, KC_H)

// APPS Mapping
#define KA_LINKEDIN HYPR(KC_L)
#define KA_OUTLOOK  HYPR(KC_O)
#define KA_TEAMS    HYPR(KC_T)
#define KA_FILEMGR  RGUI(KC_E)
#define KA_POWERPT  HYPR(KC_P)
#define KA_WORD     HYPR(KC_W)
#define KA_TASKMGR  RCS(KC_ESC)
#define KA_RUN      RGUI(KC_R)
#define KA_EMOJIS   LGUI(KC_DOT)
#define KA_EXCEL    HYPR(KC_X)
#define KA_SNIP     SGUI(KC_S)
#define KA_CLIPBRD  RGUI(KC_V)

// Behavior
#define KA_CADEL    C(A(KC_DEL))

// Browser

#define CR_NTAB     C(KC_T)
#define CR_NINCOG   RCS(KC_T)
#define CR_HOME     A(KC_HOME)
#define CR_BKMRKS   RCS(KC_O)
#define CR_BKMRK    C(KC_D)
#define CR_BKBAR    RCS(KC_B)
#define CR_NEWWIN   C(KC_N)
#define CR_INGWIN   RCS(KC_N)

//-------------------------------------------------------------------------------

enum layers {
    _ALPHA,
    _NUMBSYM,
    _FUNCTION,
    _APPCONTROL,
    _MOUSE,
    LAYER_LENGTH
  };

  enum combos {
      DOUBLEQ_COMBO,
      SINGLEQ_COMBO,
      LPAR_COMBO,
      RPAR_COMBO,
      LBRACE_COMBO,
      RBRACE_COMBO,
      LCURLY_COMBO,
      RCURLY_COMBO,
      LESC_COMBO,
      DEFAULT_COMBO,
      MOUSE_COMBO,
      NUMB_COMBO,
      FUNC_COMBO,
      APP_COMBO,
      ONESHOT_SYM_COMBO,
      ONESHOT_SYM_LSHIFT_COMBO,
      ONESHOT_FUNC_COMBO,
      ONESHOT_APP_COMBO,
      DEL_COMBO,
      WINCLOSE_COMBO,
      APPCLOSE_COMBO,
      CAPLOCK_COMBO,
      CAPSWORD_COMBO,
      LEFTARROW_COMBO,
      RIGHTARROW_COMBO,
      UPARROW_COMBO,
      DOWNARROW_COMBO,
      PAGEUP_COMBO,
      PAGEDN_COMBO,
      HOME_COMBO,
      END_COMBO,
      TEAMS_MUTE,
      TEAMS_VIDTOG,
      CHROME_COMBO,
      MYCOMPUTER_COMBO,
      CONTROLPAN_COMBO,
      EDGE_COMBO,
      VSCODE_COMBO,
      NOTEPADPP_COMBO,
      BOOT_LEFT,
      BOOT_RIGHT,
      ONE_SHOT_CONTROL,
      ONE_SHOT_ALT,
      ONE_SHOT_SHIFT,
      MOUSE_LEFT_CLICK,
      MOUSE_RIGHT_CLICK,
      MOUSE_MIDDLE_CLICK,
      COMBO_LENGTH
  };

  enum custom_keycodes {
      BROWSWEROPEN = SAFE_RANGE,
      CONTROLPAN,
      NOTEPADPP,
      MSEDGE,
      VSCODE,
      MYCOMPUTER,
      ONESHOT_SYM_LSHIFT,
      ONESHOT_SYM_RSHIFT,
      OSM_RSHIFT,
      OSM_RCTRL,
      OSM_RALT,
      OSM_HYPER,
      OSM_LGUI,
      OSM_MEH,
      CUSTOM_LENGTH
  };

//-------------------------------------------------------------------------------
// Layer 0 combos

// Characters

const uint16_t PROGMEM doubleq_combo[]  = {KC_D, KC_LCTRL_F, COMBO_END};
const uint16_t PROGMEM singleq_combo[]  = {KC_RCTRL_J, KC_K, COMBO_END};
const uint16_t PROGMEM lpar_combo[]     = {KC_C, KC_LALT_V, COMBO_END};
const uint16_t PROGMEM rpar_combo[]     = {KC_RALT_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM lbrace_combo[]   = {KC_X, KC_C, KC_LALT_V, COMBO_END};
const uint16_t PROGMEM rbrace_combo[]   = {KC_RALT_M, KC_COMM, KC_DOT, COMBO_END};
const uint16_t PROGMEM lcurly_combo[]   = {KC_X, KC_LALT_V, COMBO_END};
const uint16_t PROGMEM rcurly_combo[]   = {KC_RALT_M, KC_DOT, COMBO_END};

//-------------------------------------------------------------------------------
// Layer control combos

const uint16_t PROGMEM apps_combo[]     = {KC_RGUI_Y, KC_U, KC_I, COMBO_END};
const uint16_t PROGMEM osl_apps_combo[] = {KC_RGUI_Y, KC_I, COMBO_END};

const uint16_t PROGMEM numb_combo[]     = {KC_RSHCTRL_H, KC_RCTRL_J, KC_K, COMBO_END};
const uint16_t PROGMEM osl_numb_combo[] = {KC_RSHCTRL_H, KC_K, COMBO_END};
const uint16_t PROGMEM osl_numb_lshift_combo[] = {KC_RSHCTRL_H, KC_RCTRL_J, COMBO_END};

const uint16_t PROGMEM func_combo[]     = {KC_N, KC_RALT_M, KC_COMM, COMBO_END};
const uint16_t PROGMEM osl_func_combo[] = {KC_N, KC_COMM, COMBO_END};

const uint16_t PROGMEM default_combo[]     = {KC_RCTRL_J, KC_K, KC_L, COMBO_END};

const uint16_t PROGMEM mouse_combo[]       = {KC_W, KC_E,  KC_R, KC_LGUI_T, COMBO_END};


//--------------------------------------------------------------------------------
// Behavioral combos

const uint16_t PROGMEM lesc_combo[]       = {KC_LCTRL_F, KC_LSHCTRL_G, COMBO_END};
const uint16_t PROGMEM winclose_combo[]   = {KC_R, KC_LGUI_T, COMBO_END};
const uint16_t PROGMEM appclose_combo[]   = {KC_LALT_V, KC_B, COMBO_END};

const uint16_t PROGMEM del_combo[]        = {KC_D, KC_LSHCTRL_G, COMBO_END};

const uint16_t PROGMEM caplock_combo[]    = {KC_Z, KC_X, KC_C,  COMBO_END};
const uint16_t PROGMEM capsword_combo[]   = {KC_C, KC_B, COMBO_END};

const uint16_t PROGMEM leftarrow_combo[]  = {KC_D, KC_LCTRL_F, KC_LSHCTRL_G, COMBO_END};
const uint16_t PROGMEM rightarrow_combo[] = {KC_E, KC_R, KC_LGUI_T, COMBO_END};
const uint16_t PROGMEM uparrow_combo[]    = {KC_W, KC_E, KC_R, COMBO_END};
const uint16_t PROGMEM downarrow_combo[]  = {KC_S, KC_D, KC_LCTRL_F, COMBO_END};

const uint16_t PROGMEM pageup_combo[]     = {KC_LCTRL_F, KC_RCTRL_J, COMBO_END};
const uint16_t PROGMEM pagedn_combo[]     = {KC_LALT_V, KC_RALT_M, COMBO_END};
const uint16_t PROGMEM home_combo[]       = {KC_LSHCTRL_G, KC_RSHCTRL_H, COMBO_END};
const uint16_t PROGMEM end_combo[]        = {KC_B, KC_N, COMBO_END};

const uint16_t PROGMEM teams_mute[]       = {KC_R, KC_U, COMBO_END};
const uint16_t PROGMEM teams_vidtog[]     = {KC_LGUI_T, KC_RGUI_Y, COMBO_END};

// Macro Combos
const uint16_t PROGMEM chrome_combo[]     = {KC_C, KC_RSHCTRL_H, COMBO_END};
const uint16_t PROGMEM mycomputer_combo[] = {KC_C, KC_RGUI_Y, COMBO_END};
const uint16_t PROGMEM controlpan_combo[] = {KC_C, KC_N, COMBO_END};
const uint16_t PROGMEM edge_combo[]       = {KC_C, KC_RCTRL_J, COMBO_END};
const uint16_t PROGMEM vscode_combo[]     = {KC_C, KC_U, COMBO_END};
const uint16_t PROGMEM notepadpp_combo[]  = {KC_C, KC_RALT_M, COMBO_END};

// Boot combos
const uint16_t PROGMEM boot_left_combo[]  = {KC_Q, KC_LGUI_T, COMBO_END};
const uint16_t PROGMEM boot_right_combo[] = {KC_RGUI_Y, KC_P, COMBO_END};

// OSM Mods
/* const uint16_t PROGMEM osm_ctrl_combo[]  = {KC_D, KC_K, COMBO_END};
const uint16_t PROGMEM osm_alt_combo[]   = {KC_E, KC_I, COMBO_END};
const uint16_t PROGMEM osm_shift_combo[] = {KC_C, KC_COMM, COMBO_END}; */

//Mouse combos
const uint16_t PROGMEM left_mouse_combo[]   = {KC_S, KC_LCTRL_F, COMBO_END};
const uint16_t PROGMEM right_mouse_combo[]  = {KC_W, KC_R, COMBO_END};
const uint16_t PROGMEM middle_mouse_combo[] = {KC_E, KC_LGUI_T, COMBO_END};

// End layer 0 combo definitions
//--------------------------------------------------------------------------------
// Combo assignments

combo_t key_combos[] = {

//------------- Symbol combos

[DOUBLEQ_COMBO]      = COMBO(doubleq_combo, KC_DQUO),
[SINGLEQ_COMBO]      = COMBO(singleq_combo, KC_QUOT),
[LPAR_COMBO]         = COMBO(lpar_combo, KC_LPRN),
[RPAR_COMBO]         = COMBO(rpar_combo, KC_RPRN),
[LBRACE_COMBO]       = COMBO(lbrace_combo, KC_LBRC),
[RBRACE_COMBO]       = COMBO(rbrace_combo, KC_RBRC),
[LCURLY_COMBO]       = COMBO(lcurly_combo, KC_LCBR),
[RCURLY_COMBO]       = COMBO(rcurly_combo, KC_RCBR),

//------------- Layer combos

[APP_COMBO]          = COMBO(apps_combo, TG(_APPCONTROL)),
[NUMB_COMBO]         = COMBO(numb_combo, TG(_NUMBSYM)),
[FUNC_COMBO]         = COMBO(func_combo, TG(_FUNCTION)),
[ONESHOT_SYM_COMBO]  = COMBO(osl_numb_combo, OSL(_NUMBSYM)),
[ONESHOT_SYM_LSHIFT_COMBO]  = COMBO(osl_numb_lshift_combo, ONESHOT_SYM_LSHIFT),
[ONESHOT_FUNC_COMBO] = COMBO(osl_func_combo, OSL(_FUNCTION)),
[ONESHOT_APP_COMBO]  = COMBO(osl_apps_combo, OSL(_APPCONTROL)),
[DEFAULT_COMBO]      = COMBO(default_combo, TO(_ALPHA)),
[MOUSE_COMBO]        = COMBO(mouse_combo, TG(_MOUSE)),

//------------- Extras

[LESC_COMBO]         = COMBO(lesc_combo, KC_ESC),
[DEL_COMBO]          = COMBO(del_combo, KC_DEL),
[WINCLOSE_COMBO]     = COMBO(winclose_combo, LCTL(KC_F4)),
[APPCLOSE_COMBO]     = COMBO(appclose_combo, LALT(KC_F4)),
[LEFTARROW_COMBO]    = COMBO(leftarrow_combo,KC_LEFT),
[RIGHTARROW_COMBO]   = COMBO(rightarrow_combo,KC_RIGHT),
[UPARROW_COMBO]      = COMBO(uparrow_combo, KC_UP),
[DOWNARROW_COMBO]    = COMBO(downarrow_combo, KC_DOWN),
[PAGEUP_COMBO]       = COMBO(pageup_combo, KC_PGUP),
[PAGEDN_COMBO]       = COMBO(pagedn_combo, KC_PGDN),
[HOME_COMBO]         = COMBO(home_combo, KC_HOME),
[END_COMBO]          = COMBO(end_combo, KC_END),

//------------- Boot combos

[BOOT_LEFT] = COMBO(boot_left_combo,QK_BOOT),
[BOOT_RIGHT] = COMBO(boot_right_combo,QK_BOOT),

//------------- Teams toggles

[TEAMS_MUTE]         = COMBO(teams_mute, RCS(KC_M)),
[TEAMS_VIDTOG]       = COMBO(teams_vidtog, RCS(KC_O)),

//------------- Cap combos

[CAPLOCK_COMBO]      = COMBO(caplock_combo, KC_CAPS),
[CAPSWORD_COMBO]     = COMBO(capsword_combo, CW_TOGG),


//------------ Macro combos

[CHROME_COMBO]     = COMBO(chrome_combo, BROWSWEROPEN),
[MYCOMPUTER_COMBO] = COMBO(mycomputer_combo, MYCOMPUTER),
[CONTROLPAN_COMBO] = COMBO(controlpan_combo, CONTROLPAN),
[EDGE_COMBO]       = COMBO(edge_combo, MSEDGE),
[VSCODE_COMBO]     = COMBO(vscode_combo, VSCODE),
[NOTEPADPP_COMBO]  = COMBO(notepadpp_combo, NOTEPADPP),

// Mouse combos

[MOUSE_LEFT_CLICK]   = COMBO(left_mouse_combo, KC_MS_BTN1),
[MOUSE_RIGHT_CLICK]  = COMBO(right_mouse_combo, KC_MS_BTN2),
[MOUSE_MIDDLE_CLICK] = COMBO(middle_mouse_combo, KC_MS_BTN3),

};

// end combos
//-------------------------------------------------------------------------------

// Functions

bool get_permissive_hold(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case LSFT_T(KC_SPACE):
        case RSFT_T(KC_ENTER):
            // Immediately select the hold action when another key is pressed.
             return true;
        default:
            // Do not select the hold action when another key is pressed.
            return false;
    }
}

uint16_t get_combo_term(uint16_t index, combo_t *combo) {
  switch (index) {
      case APP_COMBO:
      case FUNC_COMBO:
      case NUMB_COMBO:
      case ONESHOT_APP_COMBO:
      case ONESHOT_FUNC_COMBO:
      case ONESHOT_SYM_COMBO:
      case MOUSE_COMBO:
        return 400;
      case WINCLOSE_COMBO:
      case APPCLOSE_COMBO:
        return 300;
      default:
        return COMBO_TERM;
    }
}

  bool caps_word_press_user(uint16_t keycode) {
    switch (keycode) {
        // Keycodes that continue Caps Word, with shift applied.
        case KC_A ... KC_Z:
            add_weak_mods(MOD_BIT(KC_LSFT));  // Apply shift to next key.
            return true;
        // Keycodes that continue Caps Word, without shifting.
        case KC_BSPC:
        case KC_DEL:
            return true;
        default:
            return false;  // Deactivate Caps Word.
    }
}

uint16_t get_tapping_term(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case KC_RALT_M:
        case KC_LALT_V:
            return 500;
        case KC_LGUI_T:
            return 600;
        case KC_RGUI_Y:
            return 750;
        default:
            return TAPPING_TERM;
    }
}

uint8_t mod_state;
bool duo_key_combo_left;
bool duo_key_combo_right;


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
/*
    mod_state = get_mods();

    if (mod_state) {
        if (record->event.pressed) {
            if((is_left(keycode) && is_left_mod(mod_state)) ||
               (is_right(keycode) && is_right_mod(mod_state)))
               {
                    clear_mods();
               }
        }
    }
*/
  switch (keycode) {

    case BROWSWEROPEN:
        if (record->event.pressed) {
                SEND_STRING(SS_LGUI("r"));
                wait_ms(250);
                SEND_STRING("CHROME\n");
        }
        break;
    case CONTROLPAN:
        if (record->event.pressed) {
                SEND_STRING(SS_LGUI("r"));
                wait_ms(250);
                SEND_STRING("Control\n");
        }
        break;
    case MYCOMPUTER:
        if (record->event.pressed) {
                SEND_STRING(SS_LGUI("r"));
                wait_ms(250);
                SEND_STRING("Shell:MyComputerFolder\n");
        }
        break;
    case VSCODE:
        if (record->event.pressed) {
                SEND_STRING(SS_LGUI("r"));
                wait_ms(250);
                SEND_STRING("CODE\n");
        }
        break;
    case MSEDGE:
        if (record->event.pressed) {
                SEND_STRING(SS_LGUI("r"));
                wait_ms(250);
                SEND_STRING("MICROSOFT-EDGE:\n");
        }
        break;
    case NOTEPADPP:
        if (record->event.pressed) {
                SEND_STRING(SS_LGUI("r"));
                wait_ms(250);
                SEND_STRING("NOTEPAD++\n");
        }
        break;
    case ONESHOT_SYM_RSHIFT:
        if (record->event.pressed) {
            set_oneshot_mods(MOD_RSFT);
            set_oneshot_layer(_NUMBSYM, ONESHOT_START);
            duo_key_combo_right = true;
        }
        break;
    case ONESHOT_SYM_LSHIFT:
        if (record->event.pressed) {
            set_oneshot_mods(MOD_LSFT);
            set_oneshot_layer(_NUMBSYM, ONESHOT_START);
            duo_key_combo_left = true;
        }
        break;
    case OSM_RSHIFT:
        if (record->event.pressed) {
            add_oneshot_mods(MOD_RSFT);
        }
        break;
    case OSM_RCTRL:
        if (record->event.pressed) {
            add_oneshot_mods(MOD_RCTL);
        }
        break;
    case OSM_RALT:
        if (record->event.pressed) {
            add_oneshot_mods(MOD_RALT);
        }
        break;
    case OSM_HYPER:
        if (record->event.pressed) {
            add_oneshot_mods(MOD_HYPR);
        }
        break;
    case OSM_LGUI:
        if (record->event.pressed) {
            add_oneshot_mods(MOD_LGUI);
        }
        break;
    case OSM_MEH:
        if (record->event.pressed) {
            add_oneshot_mods(MOD_MEH);
        }
        break;
    default:
       if (duo_key_combo_left && !record->event.pressed && (keycode != ONESHOT_SYM_LSHIFT)) {
          clear_oneshot_layer_state(ONESHOT_PRESSED);
          duo_key_combo_left = false;
        }
        if (duo_key_combo_right && !record->event.pressed && (keycode != ONESHOT_SYM_RSHIFT)) {
          clear_oneshot_layer_state(ONESHOT_PRESSED);
          duo_key_combo_right = false;
        }
      return true; // Process all other keycodes normally.
  }
  return true;
}


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [_ALPHA] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
   //LT(3,OSM_HYPER), KC_Q, KC_W,    KC_E,    KC_R,  KC_LGUI_T,                     KC_RGUI_Y,     KC_U,        KC_I,    KC_O,   KC_P,    LT(3,OSM_RALT),
  OSM(MOD_HYPR), KC_Q, KC_W,    KC_E,    KC_R,  KC_LGUI_T,                     KC_RGUI_Y,     KC_U,        KC_I,    KC_O,   KC_P,    OSM(MOD_RALT),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //LT(2,OSM_LGUI), KC_A, KC_S,    KC_D,    KC_LCTRL_F, KC_LSHCTRL_G,             KC_RSHCTRL_H,  KC_RCTRL_J,  KC_K,    KC_L,   KC_SCLN, LT(2,OSM_RCTRL),
  OSM(MOD_LGUI), KC_A, KC_S,    KC_D,    KC_LCTRL_F, KC_LSHCTRL_G,             KC_RSHCTRL_H,  KC_RCTRL_J,  KC_K,    KC_L,   KC_SCLN, OSM(MOD_RCTL),
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
  //LT(1,OSM_MEH),  KC_Z, KC_X,    KC_C,    KC_LALT_V,  KC_B,                     KC_N,    KC_RALT_M,   KC_COMM, KC_DOT, KC_SLSH, LT(1,OSM_RSHIFT),
  OSM(MOD_MEH),  KC_Z, KC_X,    KC_C,    KC_LALT_V,  KC_B,                     KC_N,    KC_RALT_M,   KC_COMM, KC_DOT, KC_SLSH, OSM(MOD_RSFT),
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_TAB,   KC_LSFT,  KC_SPC,     KC_ENT,   KC_RSFT, KC_BSPC
                                      //`--------------------------'  `--------------------------'

  ),

    [_NUMBSYM] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_TRNS, KC_EXLM, KC_AT,   KC_HASH,  KC_DLR, KC_PERC,                      KC_CIRC, KC_AMPR,  KC_ASTR, KC_LPRN, KC_RPRN, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_TRNS, KC_1,    KC_2,    KC_3,    KC_4,    KC_5,                         KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_TRNS,  KC_GRV,  KC_BSLS, KC_EQL,  KC_MINS, KC_UNDS,                      KC_QUOT, KC_SCLN, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [_FUNCTION] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
     KC_TRNS, KC_MPLY, KC_MSTP, KC_MNXT, KC_MPRV, KC_F11,  /*-*/  KC_F12,    KC_KB_MUTE, KC_KB_VOLUME_UP, KC_KB_VOLUME_DOWN, RGUI(KC_L), KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_TRNS, KC_F1,   KC_F2,   KC_F3,               KC_F4,               KC_F5,   /*-*/  KC_F6,     KC_F7,      KC_F8,           KC_F9,             KC_F10,  KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
     KC_TRNS, KA_CADEL, KC_LGUI, KC_LALT,             KC_LCTL,             KC_MEH,  /*-*/  KC_HYPR,   KC_RCTL,    KC_RALT,         KC_RGUI, KA_CADEL, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

    [_APPCONTROL] = LAYOUT_split_3x6_3(
  //,-----------------------------------------------------.                    ,-----------------------------------------------------.
      KC_TRNS, KC_NO,     KC_NO,  KA_LINKEDIN,  KA_OUTLOOK, KA_TEAMS, /*-*/ KA_FILEMGR,  KC_BRIU,     KC_BRID,    KC_NO,   KC_NO, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, QK_BOOT,   KC_NO,  CONTROLPAN,   KA_POWERPT, KA_WORD,  /*-*/ KC_CALC,     KA_TASKMGR,  KA_RUN,     KC_NO,   QK_BOOT, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------|                    |--------+--------+--------+--------+--------+--------|
      KC_TRNS, QK_REBOOT, KC_NO,  BROWSWEROPEN, KA_EMOJIS,  KA_EXCEL, /*-*/ KA_SNIP,     KA_CLIPBRD,  MYCOMPUTER, KC_NO,   QK_REBOOT, KC_TRNS,
  //|--------+--------+--------+--------+--------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                        KC_TRNS, KC_TRNS,  KC_TRNS,   KC_TRNS, KC_TRNS,  KC_TRNS
                                      //`--------------------------'  `--------------------------'
  ),

  [_MOUSE] = LAYOUT_split_3x6_3(
//,------------------------------------------------------.                           ,-----------------------------------------------------.
    KC_TRNS, CR_BKMRKS, CR_NTAB, CR_NINCOG, CR_HOME, KC_UP,            /*-*/       KC_PGUP, MS_WHLL, MS_UP,   MS_WHLR, KC_VOLU, KC_TRNS,
//|---------+----------+--------+----------+-----------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_TRNS, CR_BKMRK,   MS_BTN1, MS_BTN3,  MS_BTN2,    KC_DOWN,         /*-*/        KC_PGDN, MS_LEFT, MS_DOWN, MS_RGHT, KC_VOLD, KC_TRNS,
//|---------+----------+--------+----------+-----------+--------|                    |--------+--------+--------+--------+--------+--------|
    KC_TRNS, CR_BKBAR, CR_NEWWIN, CR_INGWIN, KC_LEFT,    KC_RIGHT,        /*-*/        KC_HOME, MS_WHLU, MS_WHLD, KC_END,  KC_MUTE, KC_TRNS,
//|---------+----------+--------+----------+-----------+--------+--------|  |--------+--------+--------+--------+--------+--------+--------|
                                            KC_TRNS,    KC_TRNS, KC_TRNS,    KC_TRNS, KC_TRNS, KC_TRNS
                                       //`-------------------------------'  `--------------------------'
)
};
