#include QMK_KEYBOARD_H
#define PERMISSIVE_HOLD
#include <print.h>

extern keymap_config_t keymap_config;


#define MODS_SHIFT_MASK  ((Sp_lS)&&(Sp_rS))
#define MODS_CTRL_MASK  (MOD_BIT(KC_LCTL)|MOD_BIT(KC_RCTRL))
#define MODS_ALT_MASK  (MOD_BIT(KC_LALT)|MOD_BIT(KC_RALT))

#define RU_A    KC_F    // а
#define RU_B    KC_COMM // б
#define RU_V    KC_D    // в
#define RU_G    KC_U    // г
#define RU_D    KC_L    // д
#define RU_JE   KC_T    // е
#define RU_JO   KC_GRV  // ё
#define RU_ZH   KC_SCLN // ж
#define RU_Z    KC_P    // з
#define RU_I    KC_B    // и
#define RU_J    KC_Q    // й
#define RU_K    KC_R    // к
#define RU_L    KC_K    // л
#define RU_M    KC_V    // м
#define RU_N    KC_Y    // н
#define RU_O    KC_J    // о
#define RU_P    KC_G    // п
#define RU_R    KC_H    // р
#define RU_S    KC_C    // с
#define RU_T    KC_N    // т
#define RU_U    KC_E    // у
#define RU_F    KC_A    // ф
#define RU_H    KC_LBRC // х
#define RU_TS   KC_W    // ц
#define RU_CH   KC_X    // ч
#define RU_SH   KC_I    // ш
#define RU_SHCH KC_O    // щ
#define RU_HARD KC_RBRC // ъ
#define RU_Y    KC_S    // ы
#define RU_SOFT KC_M    // ь
#define RU_E    KC_QUOT // э
#define RU_JU   KC_DOT  // ю
#define RU_JA   KC_Z    // я

//hotkeys for winCustom
#define C_(key) C(S(A(key)))
#define CW_1 C_(KC_1)
#define CW_2 C_(KC_2)
#define CW_3 C_(KC_3)
#define CW_4 C_(KC_4)
#define CW_5 C_(KC_5)
#define CW_6 C_(KC_6)
#define CW_7 C_(KC_7)
#define CW_8 C_(KC_8)
#define CW_9 C_(KC_9)
#define CW_0 C_(KC_0)



// hotkeys for keyLayer
// ------------------------------------------

#define C_A C_(KC_A)
#define C_B C_(KC_B)
#define C_C C_(KC_C)
#define C_D C_(KC_D)
#define C_E C_(KC_E)
#define C_F C_(KC_F)
#define C_G C_(KC_G)
#define C_H C_(KC_H)
#define C_I C_(KC_I)
#define C_J C_(KC_J)
#define C_K C_(KC_K)
#define C_L C_(KC_L)
#define C_M C_(KC_M)
#define C_N C_(KC_N)
#define C_O C_(KC_O)
#define C_P C_(KC_P)
#define C_Q C_(KC_Q)
#define C_R C_(KC_R)
#define C_S C_(KC_S)
#define C_T C_(KC_T)
#define C_U C_(KC_U)
#define C_V C_(KC_V)
#define C_W C_(KC_W)
#define C_X C_(KC_X)
#define C_Y C_(KC_Y)
#define C_Z C_(KC_Z)
#define C_MINUS C_(KC_MINUS)
#define C_EQUAL C_(KC_EQUAL)
#define C_LBRAC C_(KC_LBRACKET)
#define C_RBRAC C_(KC_RBRACKET)
#define C_BSLAS C_(KC_BSLASH)
#define C_NONUS C_(KC_NONUS_HASH)
#define C_SCOLO C_(KC_SCOLON)
#define C_QUOTE C_(KC_QUOTE)
#define C_GRAVE C_(KC_GRAVE)
#define C_COMMA C_(KC_COMMA)
#define C_DOT C_(KC_DOT)
#define C_SLASH C_(KC_SLASH)
#define C_F1 C_(KC_F1)
#define C_F2 C_(KC_F2)
#define C_F3 C_(KC_F3)
#define C_F4 C_(KC_F4)
#define C_F5 C_(KC_F5)
#define C_F6 C_(KC_F6)
#define C_F7 C_(KC_F7)
#define C_F8 C_(KC_F8)
#define C_F9 C_(KC_F9)
#define C_F10 C_(KC_F10)
#define C_F11 C_(KC_F11)
#define C_F12 C_(KC_F12)
#define C_KP_DO C_(KC_KP_DOT)
#define C_F13 C_(KC_F13)
#define C_F14 C_(KC_F14)
#define C_F15 C_(KC_F15)
#define C_F16 C_(KC_F16)
#define C_F17 C_(KC_F17)
#define C_F18 C_(KC_F18)
#define C_F19 C_(KC_F19)
#define C_F20 C_(KC_F20)
#define C_F21 C_(KC_F21)
#define C_F22 C_(KC_F22)
#define C_F23 C_(KC_F23)
#define C_F24 C_(KC_F24)
#define C_TILDE C_(KC_TILDE)
#define C_EXCLA C_(KC_EXCLAIM)
#define C_AT C_(KC_AT)
#define C_HASH C_(KC_HASH)
#define C_DOLLA C_(KC_DOLLAR)
#define C_PERCE C_(KC_PERCENT)
#define C_CIRCU C_(KC_CIRCUMFLEX)
#define C_AMPER C_(KC_AMPERSAND)
#define C_ASTER C_(KC_ASTERISK)
#define C_LEFTP C_(KC_LEFT_PAREN)
#define C_RIGHP C_(KC_RIGHT_PAREN)
#define C_UNDER C_(KC_UNDERSCORE)
#define C_PLUS C_(KC_PLUS)
#define C_LEFTB C_(KC_LEFT_CURLY_BRACE)
#define C_RIGHC C_(KC_RIGHT_CURLY_BRACE)
#define C_PIPE C_(KC_PIPE)
#define C_COLON C_(KC_COLON)
#define C_DOUBL C_(KC_DOUBLE_QUOTE)
#define C_LEFTA C_(KC_LEFT_ANGLE_BRACKET)
#define C_RIGHA C_(KC_RIGHT_ANGLE_BRACKET)
#define C_QUEST C_(KC_QUESTION)

#define A_(key) A(S(key))
#define A_A A_(KC_A)
#define A_B A_(KC_B)
#define A_C A_(KC_C)
#define A_D A_(KC_D)
#define A_E A_(KC_E)
#define A_F A_(KC_F)
#define A_G A_(KC_G)
#define A_H A_(KC_H)
#define A_I A_(KC_I)
#define A_J A_(KC_J)
#define A_K A_(KC_K)
#define A_L A_(KC_L)
#define A_M A_(KC_M)
#define A_N A_(KC_N)
#define A_O A_(KC_O)
#define A_P A_(KC_P)
#define A_Q A_(KC_Q)
#define A_R A_(KC_R)
#define A_S A_(KC_S)
#define A_T A_(KC_T)
#define A_U A_(KC_U)
#define A_V A_(KC_V)
#define A_W A_(KC_W)
#define A_X A_(KC_X)
#define A_Y A_(KC_Y)
#define A_Z A_(KC_Z)
#define A_1 A_(KC_1)
#define A_2 A_(KC_2)
#define A_3 A_(KC_3)
#define A_4 A_(KC_4)
#define A_5 A_(KC_5)
#define A_6 A_(KC_6)
#define A_7 A_(KC_7)
#define A_8 A_(KC_8)
#define A_9 A_(KC_9)
#define A_0 A_(KC_0)
#define A_MINUS A_(KC_MINUS)
#define A_EQUAL A_(KC_EQUAL)
#define A_LBRAC A_(KC_LBRACKET)
#define A_RBRAC A_(KC_RBRACKET)
#define A_BSLAS A_(KC_BSLASH)
#define A_NONUS A_(KC_NONUS_HASH)
#define A_SCOLO A_(KC_SCOLON)
#define A_QUOTE A_(KC_QUOTE)
#define A_GRAVE A_(KC_GRAVE)
#define A_COMMA A_(KC_COMMA)
#define A_DOT A_(KC_DOT)
#define A_SLASH A_(KC_SLASH)
#define A_F1 A_(KC_F1)
#define A_F2 A_(KC_F2)
#define A_F3 A_(KC_F3)
#define A_F4 A_(KC_F4)
#define A_F5 A_(KC_F5)
#define A_F6 A_(KC_F6)
#define A_F7 A_(KC_F7)
#define A_F8 A_(KC_F8)
#define A_F9 A_(KC_F9)
#define A_F10 A_(KC_F10)
#define A_F11 A_(KC_F11)
#define A_F12 A_(KC_F12)
#define A_KP_DO A_(KC_KP_DOT)
#define A_F13 A_(KC_F13)
#define A_F14 A_(KC_F14)
#define A_F15 A_(KC_F15)
#define A_F16 A_(KC_F16)
#define A_F17 A_(KC_F17)
#define A_F18 A_(KC_F18)
#define A_F19 A_(KC_F19)
#define A_F20 A_(KC_F20)
#define A_F21 A_(KC_F21)
#define A_F22 A_(KC_F22)
#define A_F23 A_(KC_F23)
#define A_F24 A_(KC_F24)
#define A_TILDE A_(KC_TILDE)
#define A_EXCLA A_(KC_EXCLAIM)
#define A_AT A_(KC_AT)
#define A_HASH A_(KC_HASH)
#define A_DOLLA A_(KC_DOLLAR)
#define A_PERCE A_(KC_PERCENT)
#define A_CIRCU A_(KC_CIRCUMFLEX)
#define A_AMPER A_(KC_AMPERSAND)
#define A_ASTER A_(KC_ASTERISK)
#define A_LEFTP A_(KC_LEFT_PAREN)
#define A_RIGHP A_(KC_RIGHT_PAREN)
#define A_UNDER A_(KC_UNDERSCORE)
#define A_PLUS A_(KC_PLUS)
#define A_LEFTB A_(KC_LEFT_CURLY_BRACE)
#define A_RIGHB A_(KC_RIGHT_CURLY_BRACE)
#define A_PIPE A_(KC_PIPE)
#define A_COLON A_(KC_COLON)
#define A_DOUBL A_(KC_DOUBLE_QUOTE)

#define B_(key) A(C(key))
#define B_A B_(KC_A)
#define B_B B_(KC_B)
#define B_C B_(KC_C)
#define B_D B_(KC_D)
#define B_E B_(KC_E)
#define B_F B_(KC_F)
#define B_G B_(KC_G)
#define B_H B_(KC_H)
#define B_I B_(KC_I)
#define B_J B_(KC_J)
#define B_K B_(KC_K)
#define B_L B_(KC_L)
#define B_M B_(KC_M)
#define B_N B_(KC_N)
#define B_O B_(KC_O)
#define B_P B_(KC_P)
#define B_Q B_(KC_Q)
#define B_R B_(KC_R)
#define B_S B_(KC_S)
#define B_T B_(KC_T)
#define B_U B_(KC_U)
#define B_V B_(KC_V)
#define B_W B_(KC_W)
#define B_X B_(KC_X)
#define B_Y B_(KC_Y)
#define B_Z B_(KC_Z)
#define B_1 B_(KC_1)
#define B_2 B_(KC_2)
#define B_3 B_(KC_3)
#define B_4 B_(KC_4)
#define B_5 B_(KC_5)
#define B_6 B_(KC_6)
#define B_7 B_(KC_7)
#define B_8 B_(KC_8)
#define B_9 B_(KC_9)
#define B_0 B_(KC_0)
#define B_MINUS B_(KC_MINUS)
#define B_EQUAL B_(KC_EQUAL)
#define B_LBRAC B_(KC_LBRACKET)
#define B_RBRAC B_(KC_RBRACKET)
#define B_BSLAS B_(KC_BSLASH)
#define B_NONUS B_(KC_NONUS_HASH)
#define B_SCOLO B_(KC_SCOLON)
#define B_QUOTE B_(KC_QUOTE)
#define B_GRAVE B_(KC_GRAVE)
#define B_COMMA B_(KC_COMMA)
#define B_DOT B_(KC_DOT)
#define B_SLASH B_(KC_SLASH)
#define B_F1 B_(KC_F1)
#define B_F2 B_(KC_F2)
#define B_F3 B_(KC_F3)
#define B_F4 B_(KC_F4)
#define B_F5 B_(KC_F5)
#define B_F6 B_(KC_F6)
#define B_F7 B_(KC_F7)
#define B_F8 B_(KC_F8)
#define B_F9 B_(KC_F9)
#define B_F10 B_(KC_F10)
#define B_F11 B_(KC_F11)
#define B_F12 B_(KC_F12)
#define B_KP_DO B_(KC_KP_DOT)
#define B_F13 B_(KC_F13)
#define B_F14 B_(KC_F14)
#define B_F15 B_(KC_F15)
#define B_F16 B_(KC_F16)
#define B_F17 B_(KC_F17)

#define MINI A(KC_SPACE)|KC_N

#define TURN_L   S(KC_LALT)
#define RIS_BK   LT(_RAISE, KC_BSPC)

#define A_HD  ALT_T(RU_HARD)

#define AL_WIN A(KC_APP) 
#define CT_WIN C(KC_APP) 
#define SH_WIN S(KC_APP) 

#define T_ESC   LT(_TELHK, KC_ESC)
#define LOW_TB   LT(_LOWER, KC_TAB)
#define WIN_JA   LT(_WIN, RU_JA)
#define WIN_SC    LT(_WIN, KC_SCLN)
#define WIN_QT   LT(_WINC, KC_DOUBLE_QUOTE)
#define WIN_J   LT(_WINC, RU_J)
#define OFF_DS   RGUI(KC_L) // off display
#define POW_OF   KC_PWR // off pc


#define Sp_Ctr   CTL_T(KC_SPC)
#define Sp_lSs   LSFT_T(KC_SPC)
#define Sp_SH   SFT_T(KC_SPC) 
#define CR_SH   SFT_T(KC_PLUS)


#define _______ KC_TRNS
#define XXXXXXX KC_NO

#define KC_CIRK S(KC_6)
#define KC_DOLR S(KC_4)

// Ctrl+Shift keys
#define CS_TAB LCTL(S(KC_TAB)) //переключение между вкладками редакторовe
#define CS_T LCTL(S(KC_T)) // восстановлеие закрытой вкладки
#define CS_K LCTL(S(KC_K)) // консоль в браузере
#define TASK LCTL(S(KC_ESC)) //такс менеджер
#define MY_SCRN LGUI(S(KC_S)) //скриншот области экрана

// Gui keys
#define WN_E LGUI(KC_E) // файловый менеджер
#define WN_D LGUI(KC_D) //свернуть все окна / восстановить все окна
#define WN_0 LGUI(KC_0)
#define WN_1 LGUI(KC_1)
#define WN_2 LGUI(KC_2)
#define WN_3 LGUI(KC_3)
#define WN_4 LGUI(KC_4)
#define WN_5 LGUI(KC_5)
#define WN_6 LGUI(KC_6)
#define WN_7 LGUI(KC_7)
#define WN_8 LGUI(KC_8)
#define WN_9 LGUI(KC_9)
#define WN_RGHT LGUI(KC_RGHT) // Window to right half
#define WN_LEFT LGUI(KC_LEFT) // Window to left half
#define WN_DOWN LGUI(KC_DOWN)
#define WN_UP LGUI(KC_UP)
// Alt keys
#define AL_TAB LALT(KC_TAB)
#define AL_ESC LALT(KC_ESC) // Alt+Tab with instant preview
#define AL_F4 LALT(KC_F4) // Close window
#define AL_Z LALT(KC_Z) // Alt-z
#define AL_LFT LALT(KC_LEFT)  
#define AL_RGH LALT(KC_RIGHT) 

// Ctrl keys
#define CT_LEFT LCTL(KC_LEFT)
#define CT_UP LCTL(KC_UP)
#define CT_DOWN LCTL(KC_DOWN)
#define CT_RGHT LCTL(KC_RGHT)
#define CT_DEL LCTL(KC_DEL) // убрать все переводы строк
#define CT_BSPC LCTL(KC_BSPC) // удаление по словам
#define CT_TAB LCTL(KC_TAB) // передвижение по вкладскам браузера
#define CT_1 LCTL(KC_1)
#define CT_2 LCTL(KC_2)
#define CT_3 LCTL(KC_3)
#define CT_4 LCTL(KC_4)
#define CT_5 LCTL(KC_5)
#define CT_6 LCTL(KC_6)
#define CT_7 LCTL(KC_7)
#define CT_8 LCTL(KC_8)
#define CT_9 LCTL(KC_9)
#define CT_C LCTL(KC_C)
#define CT_V LCTL(KC_V)
#define CT_Z LCTL(KC_Z)
#define CT_X LCTL(KC_X)
#define CT_T LCTL(KC_T) // новая вкладка
#define CT_W LCTL(KC_W) // закрыть вкладку
#define CT_J LCTL(KC_J) // загрузки в браузере
#define CT_D LCTL(KC_D) // добавить в закладки
#define CT_S LCTL(KC_S)
#define CT_F LCTL(KC_F)
#define CT_A LCTL(KC_A)

// Audio keys
#define AU_MUTE KC_AUDIO_MUTE
#define AU_VOLU KC_AUDIO_VOL_UP
#define AU_VOLD KC_AUDIO_VOL_DOWN
#define AU_NEXT KC_MEDIA_NEXT_TRACK
#define AU_PREV KC_MEDIA_PREV_TRACK
#define AU_PLAY KC_MEDIA_PLAY_PAUSE


#define _DVORAK 0
#define _EDITOR 1 
#define _CYRILIC 2
#define _LOWER 10
#define _RAISE 4
#define _WIN 5
#define _WINC 8
#define _ADD 3
#define _DVO 6 //_DVO
#define _TELHK 9
#define _ELOW 7


#define _ADJUST 16

enum custom_keycodes {
  DVORAK = SAFE_RANGE,
  CYRILIC,
  ADD,
  LOWER,
  RAISE,
  WIN,
  ADJUST,
  DVO,
  EDITOR,
  ELOW,

  MY_LANG,
  MY_ENGG,
  MY_RUSL,
  
  MY_RAISE,
  MY_LOW,

  MY_CTRL,
  MY_ALT,
  MY_WIN,
  WINC_DQT,
  
  MY_JMP,
  MY_PJMP,

  
  

// My keys for custom keyLayer
//---------------------------------------------------------------------
 _QUOTE,
 _COMMA,
 _DOT,
 _P,
 _Y,

  _A,
  _O,
  _E,
  _U,
  _I,

  _SEMCLN,
  _Q,
  _J,
  _K,
  _X,


  __I,
};



const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

/* Dvorak
         * ,------------------------------------------      -----------------------------------------.
         * |      |   F2 |  F3  |  F4  |  F5  |  F6  |      |  F7 |  F8  |  F9  |  F10 |  F11 | F12  |
         * |------+------+------+------+------+------+      ------+------+------+------+------+------|
         * |  Esc |   '  |   ,  |   .  |   P  |   Y  |      |  F  |   G  |   C  |   R  |   L  | Del  |
         * |------+------+------+------+------+-------      ------+------+------+------+------+------|
         * | LANG |   A  |   O  |   E  |   U  |   I  |      |  D  |   H  |   T  |   N  |   S  |Enter |
         * |------+------+------+------+------+------|      ------+------+------+------+------+------|
         * |EDITOR|   ;  |   Q  |   J  |   K  |   X  |      |  B  |   M  |   W  |   V  |   Z  |      |
         * |------+------+------+------+------+------+      ------+------+------+------+------+------|
         * | WIN  |      |Adjust|Low_TB| Shift|Space |      |Space|RIS_BK| Alt  |      |      |      |
         * `------------------------------------------      -----------------------------------------'
 */

[_DVORAK] = LAYOUT( \
  XXXXXXX, KC_F2,    KC_F3,   KC_F4,   KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
  T_ESC,   WINC_DQT, KC_COMM, KC_DOT,  KC_P,    KC_Y,         KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_DEL, \
  MY_RUSL, KC_A,     KC_O,    KC_E,    KC_U,    KC_I,         KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    CTL_T(KC_ENT), \
  XXXXXXX, WIN_SC,   KC_Q,    KC_J,    KC_K,    KC_X,         KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    XXXXXXX, \
  XXXXXXX, XXXXXXX,  ADJUST,  MY_CTRL, MY_LOW,  KC_LSFT,      Sp_Ctr ,  MY_RAISE, MY_ALT, XXXXXXX, XXXXXXX, XXXXXXX \
),

/* Russian
         * ,------------------------------------------      ,-----------------------------------------.
         * |      |   F2 |  F3  |  F4  |  F5  |  F6  |      |   F7 |  F8  |  F9  |  F10 |  F11 | F12  |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |  Esc |   Й  |  Ц   |  У   |   К  |  Е   |      |   Н  |   Г  |  Ш   |  Щ   |  З   |  Х   |
         * |------+------+------+------+------+-------      |------+------+------+------+------+------|
         * | LANG |   Ф  |  Ы   |  В   |  А   |  П   |      |   Р  |  О   |  Л   |  Д   |  Ж   |  Ъ   |
         * |------+------+-----+------+------+-------|      |------+------+------+------+------+------|
         * |EDITOR|   Я  |  Ч   |  С   |  М   |  И   |      |   Т  |  Ь   |  Б   |  Ю   |  Э   |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      | ADJ  |Low_TB|Shift |Space |      |Space |RIS_BK| Alt  |  Ё   |      |      |
         * `------------------------------------------      '-----------------------------------------'
 */
[_CYRILIC] = LAYOUT( \
  XXXXXXX, KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,       KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
  T_ESC,   WIN_J,    RU_TS,   KC_E,    RU_K,    RU_JE,      RU_N,    RU_G,    RU_SH,   RU_SHCH, RU_Z,    RU_H, \
  MY_ENGG, RU_F,    RU_Y,    RU_V,    RU_A,    RU_P,        RU_R,    RU_O,    RU_L,    RU_D,    RU_ZH,   KC_ENT, \
  XXXXXXX,  WIN_JA,  RU_CH,   RU_S,    RU_M,    RU_I,        RU_T,    RU_SOFT, RU_B,    RU_JU,   RU_E,    RU_JO, \
  XXXXXXX,  XXXXXXX, ADJUST,  MY_CTRL, MY_LOW,  KC_LSFT,     Sp_Ctr ,  MY_RAISE,A_HD,    XXXXXXX, XXXXXXX, XXXXXXX \
),

/* ADD
         * ,------------------------------------------      -----------------------------------------.
         * |      |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      -------+------+------+------+------+------|
         * |      |      |  S-W | C-W  | A-W  |TURN_L|      |      |  F7  |  F8  |  F9  | F10  |      |
         * |------------------------------------------      ------------------------------------------|
         * | LANG |      | Shift| Ctrl | Alt  | Win  |      |      |  F1  |  F2  |  F3  | F11  |      |
         * |------+------+------+------+------+------+      -------+------+------+------+------+------|
         * |      |      |      |      |      |      |      |      |  F4  |  F5  |  F6  | F12  |      |
         * |------+------+------+------+------+-------      -------+------+------+------+------+------|
         * |      |      |      |      |      |      |      |      |      |      |      |      |      |
         * `------------------------------------------      -----------------------------------------'
 */
[_ADD] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX, MY_RUSL, MY_ENGG, XXXXXXX,     XXXXXXX, KC_F7,   KC_F8,   KC_F9,   KC_F10,  XXXXXXX,\
  MY_LANG, XXXXXXX, KC_LSFT, KC_LCTL, KC_LALT, KC_APP,      XXXXXXX, KC_F1,   KC_F2,   KC_F3,   KC_F11,  XXXXXXX,\
  MY_RUSL, XXXXXXX, SH_WIN,  CT_WIN,  AL_WIN,  XXXXXXX,     XXXXXXX, KC_F4,   KC_F5,   KC_F6,   KC_F12,  XXXXXXX,\
  MY_ENGG, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
),


/* Lower
         * ,------------------------------------------      ,----------------------------------------.
         * | Off-d|      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+-------      |------+------+------+------+------+------|
         * |  Bef | Next |  ,   |   .  |V-down| V-up |      |   :  |   7  |   8  |   9  |   -  |  Del |
         * |------+------+------+------+------+-------      |------+------+------+------+------+------|
         * | Lang | Left | Right| Down |  Up  | Close|      |   0  |   1  |   2  |   3  |   =  |  Ent |
         * |------+------+------+------+------+------|      |------+------+------+------+------+------|
         * | Pr-Sc| Copy |Paste |CS_TAB|CT_TAB| Al-z |      |   /  |   4  |   5  |   6  |   +  |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |      |      |   X  |      |      | Space|  Bsk |   *  |      |      |      |
         * `------------------------------------------      -----------------------------------------'
 */
[_LOWER] = LAYOUT( \
  OFF_DS,  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, \
  AU_PREV, AU_NEXT, KC_COMM, KC_DOT,  AU_VOLD, AU_VOLU,     KC_COLN, KC_7,    KC_8,    KC_9,    KC_MINS, KC_DEL, \
  MY_RUSL, KC_LEFT, KC_RGHT, KC_DOWN, KC_UP,   __I,         KC_0,    KC_1,    KC_2,    KC_3,    KC_EQL,  KC_ENT, \
  MY_SCRN, CT_C,    CT_V,    CS_TAB,  CT_TAB,  AL_Z,	    KC_SLSH, KC_4,    KC_5,    KC_6,    KC_PPLS, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,     Sp_Ctr ,   KC_BSPC, KC_PAST, XXXXXXX, XXXXXXX, XXXXXXX \
),


/* Raise
         * ,------------------------------------------      -----------------------------------------.
         * |      |      |      |      |      |      |     |       |      |      |      |      |      |
         * |------+------+------+------+------+-------     | ------+------+------+------+------+------|
         * |   >  |   '  |   ,  |   .  |   #  |   "  |     |    |  |   _  |BaskSL|      |  Ins |      |
         * |------+------+------+------+------+-------     | ------+------+------+------+------+------|
         * |   <  |   $  |   %  |   !  |   ?  |   &  |     |    ^  |   (  |   )  |   [  |   ]  |  Ent |
         * |------+------+------+------+------+------|     | ------+------+------+------+------+------|
         * |      |   ;  |   `  |   ~  |   @  |      |     |  Mute |   {  |   }  | Bcsp |CT_TAB|      |
         * |------+------+------+------+------+------+     | ------+------+------+------+------+------|
         * |      |      |      |      |      |Space |     |       |   X  |      |      |      |      |
         * `-----------------------------------------      |------------------------------------------'
 */

[_RAISE] = LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  KC_GT,   KC_QUOT, KC_COMM, KC_DOT,  MY_JMP,  KC_HASH, 	KC_INS,  XXXXXXX, KC_UNDS, KC_PIPE, KC_BSLS, XXXXXXX, \
  KC_LT,   KC_DOLR, KC_PERC, KC_EXLM, KC_QUES, KC_AMPR,     KC_CIRK, KC_LPRN, KC_RPRN, KC_LBRC, KC_RBRC, KC_ENT, \
  XXXXXXX, KC_SCLN, KC_GRV,  KC_TILD, KC_AT,   KC_GRV,	    AU_MUTE, KC_LCBR, KC_RCBR, KC_BSPC, MY_PJMP, XXXXXXX, \
  XXXXXXX, XXXXXXX, XXXXXXX, MY_RUSL, MY_ENGG, KC_LSFT,	    Sp_Ctr ,   XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
),

/* Adjust (Lower + raise)
         * ,------------------------------------------      ,-----------------------------------------.
         * |      |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |+LIGHT| reset|rgb tg|rgb md|hue up|hue dn|      |Sat Up|Sat Dn|Val Up|Val Dn|Pow_of|      |
         * |------+------+------+------+------+-------      |------+------+------+------+------+------|
         * |-LIGHT|      |      |      |      |TURN_L|      |      |      |      |      |      |      |
         * |------+------+------+------+------+------|      |------+------+------+------+------+------|
         * |      |      |      |      |      |      |      | DVO  |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |  X   |      |      |      |      |      |      |      |      |      |      |
         * `------------------------------------------      '-----------------------------------------'
 */
[_ADJUST] =  LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  BL_INC,  RESET,   RGB_TOG, RGB_MOD, RGB_HUD, RGB_HUI,     RGB_SAD, RGB_SAI, RGB_VAD, RGB_VAI, POW_OF,  XXXXXXX,\
  MY_RUSL,  XXXXXXX, XXXXXXX, XXXXXXX, RGB_TOG, TURN_L,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX\
),


/* Win
         * ,------------------------------------------      ,-----------------------------------------.
         * |      |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |   9  |  8   |   7  | H-all|      |      |      |      |      |      |      |
         * |------+------+------+------+------+-------      |------+------+------+------+------+------|
         * |      |      |   3  |  2   |   1  |  0   |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------|      |------+------+------+------+------+------|
         * |      |  Х   |   6  |  5   |   4  |Right |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |      | Left | Down |  Up  |      |      |      |      |      |      |      |
         * `------------------------------------------      '-----------------------------------------'
 */
[_WIN] =  LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, WN_9,    WN_8,    WN_7,    WN_D,  	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  MY_RUSL, XXXXXXX, WN_3,    WN_2,    WN_1,    WN_0,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, WN_6,    WN_5,    WN_4,    WN_RGHT,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX, WN_LEFT, WN_DOWN, WN_UP,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
),


/* Win-custom
         * ,------------------------------------------      ,-----------------------------------------.
         * |      |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |  X   |   9  |  8   |   7  | H-all|      |      |      |      |      |      |      |
         * |------+------+------+------+------+-------      |------+------+------+------+------+------|
         * |      |      |   3  |  2   |   1  | Hide |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------|      |------+------+------+------+------+------|
         * |      |      |   6  |  5   |   4  |Right |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |      | Left | Down |  Up  |      |      |      |      |      |      |      |
         * `------------------------------------------      '-----------------------------------------'
 */
[_WINC] =  LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, CW_9,    CW_8,    CW_7,    WN_D,  	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  MY_RUSL, XXXXXXX, CW_3,    CW_2,    CW_1,    CW_0,        XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, CW_6,    CW_5,    CW_4,    WN_RGHT,     XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX, WN_LEFT, WN_DOWN, WN_UP,       XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX \
),
/* Dvorak for keyspeed
         * ,------------------------------------------      -----------------------------------------.
         * |      |   F2 |  F3  |  F4  |  F5  |  F6  |      |  F7 |  F8  |  F9  |  F10 |  F11 | F12  |
         * |------+------+------+------+------+------+      ------+------+------+------+------+------|
         * |  Esc |   '  |   ,  |   .  |   P  |   Y  |      |  F  |   G  |   C  |   R  |   L  | Del  |
         * |------+------+------+------+------+-------      ------+------+------+------+------+------|
         * | LANG |   A  |   O  |   E  |   U  |   I  |      |  D  |   H  |   T  |   N  |   S  |Enter |
         * |------+------+------+------+------+------|      ------+------+------+------+------+------|
         * | WIN  |   ;  |   Q  |   J  |   K  |   X  |      |  B  |   M  |   W  |   V  |   Z  |      |
         * |------+------+------+------+------+------+      ------+------+------+------+------+------|
         * |MY_win|      |Adjust|Low_TB| Shift|Space |      |Space|RIS_BK| Alt  |      |      |      |
         * `------------------------------------------      -----------------------------------------'
 */

[_DVO] = LAYOUT( \
  XXXXXXX, KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,        KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12, \
  T_ESC,   WINC_DQT,  KC_COMM, KC_DOT,  KC_P,    KC_Y,         KC_F,    KC_G,    KC_C,    KC_R,    KC_L,    KC_DEL, \
  MY_RUSL, KC_A,    KC_O,    KC_E,    KC_U,    KC_I,         KC_D,    KC_H,    KC_T,    KC_N,    KC_S,    KC_ENT, \
  EDITOR,  WIN_SC,  KC_Q,    KC_J,    KC_K,    KC_X,         KC_B,    KC_M,    KC_W,    KC_V,    KC_Z,    XXXXXXX, \
  MY_RUSL, XXXXXXX, ADJUST,  MY_CTRL, MY_LOW,  Sp_lSs,       Sp_Ctr ,   MY_RAISE,MY_ALT,  XXXXXXX, XXXXXXX, XXXXXXX \
),

/* Editor
         * ,------------------------------------------      ,-----------------------------------------.
         * |      |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |  ESC |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+-------      |------+------+------+------+------+------|
         * | LANG |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------|      |------+------+------+------+------+------|
         * |   X  |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |      |      | ELOW |      |      |      |      |      |      |      |      |
         * `------------------------------------------      '-----------------------------------------'
 */

[_EDITOR] =  LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  KC_ESC,  _QUOTE,  _COMMA,  _DOT,    _P,      _Y,  	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  MY_RUSL, _A,      _O,      _E,      _U,      _I,   	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  MY_RUSL, _SEMCLN, _Q,      _J,      _K,      _X,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  MY_ENGG, XXXXXXX, XXXXXXX, XXXXXXX, ELOW,    XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX\
),
 

/* Low for editor layout
         * ,------------------------------------------      ,-----------------------------------------.
         * |      |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |  Del |  -   |   9  |  8   |   7  | Bcspc|      |      |      |      |      |      |      |
         * |------+------+------+------+------+-------      |------+------+------+------+------+------|
         * |  Ent |  =   |   3  |  2   |   1  |  0   |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------|      |------+------+------+------+------+------|
         * |  *   |  +   |   6  |  5   |   4  |  /   |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |      |      |   X  |      |      |      |      |      |      |      |      |
         * `------------------------------------------      '-----------------------------------------'*
 */
[_ELOW] =  LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  KC_DEL,  KC_MINS, KC_9,     KC_8,   KC_7,    KC_BSPC,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  KC_ENT,  KC_EQL,  KC_3,     KC_2,   KC_1,    KC_0,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  KC_PAST, KC_PPLS, KC_6,     KC_5,   KC_4,    KC_SLSH,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, XXXXXXX,  XXXXXXX,XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX\
),

/* Low for Telegram and orther Hotkeys
         * ,------------------------------------------      ,-----------------------------------------.
         * |      |      |      |      |      |      |      |      |      |      |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |   X  |      |      |H-Lig | Cut  |      |      |      |      |      |  D1W |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |      | Down | Up   |      |      |      |   1  |  2   |  3   |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |      |      |      |      |      |      |   4  |  5   |      |      |      |
         * |------+------+------+------+------+------+      |------+------+------+------+------+------|
         * |      |      |      |      |      |      |      |      |      |      |      |      |      |
         * `------------------------------------------      '-----------------------------------------'
 */
[_TELHK] =  LAYOUT( \
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,\
  XXXXXXX, XXXXXXX, A_E,     CT_A,    CT_X,    A_G,	    A_I,     CT_7,    CT_8,    CT_9,    CT_BSPC, A_M,\
  MY_RUSL, XXXXXXX, A_F,     CT_DOWN, CT_UP,   A_H,	    C(KC_K), CT_1,    CT_2,    CT_3,    A_K,     A_N,\
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX,	    A_J,     CT_4,    CT_5,    CT_6,    A_L,     A_O,\
  XXXXXXX, XXXXXXX, XXXXXXX, XXXXXXX, A_D,     A_C,	    A_A,     A_B,     A_P,     XXXXXXX, XXXXXXX, XXXXXXX\
)

};


int currentLayer = 0;
bool layerChange = false;




static int oldLayer = 0;

int key1 = 0;
int key2 = 0;
bool press_I = 0;
bool activeAditor = false;
bool changeLang = false;

uint16_t keyList[16][15] = {
// QUOT   COMMA   DOT       P       Y           A       O       E       U       I        SEMICL     Q       J       K       X
{  C_A,    C_B,   C_C,     C_D,    C_E,        A_A,    A_B,    A_C,     A_D,    A_E,      A_AT,   A_HASH, A_DOLLA, A_PERCE, A_CIRCU}, // QUOTE
{  C_F,    C_G,   C_H,     C_I,    C_J,        A_F,    A_G,    A_H,     A_I,    A_J,      A_AMPER,A_ASTER,A_LEFTP, A_RIGHP, A_UNDER}, // COMMA
{  C_K,    C_L,   C_M,     C_N,    C_O,        A_K,    A_L,    A_M,     A_N,    A_O,      A_PLUS, A_LEFTB,A_RIGHB, A_PIPE,  A_COLON}, // DOT
{  C_P,    C_Q,   C_R,     C_S,    C_T,        A_P,    A_Q,    A_R,     A_S,    A_T,      B_A,    B_B,    B_C,     B_D,     B_E}, // P
{  C_U,    C_V,   C_W,     C_X,    C_Y,        A_U,    A_V,    A_W,     A_X,    A_Y,      B_F,    B_G,    B_H,     B_I,     B_J}, // Y

 // QUOT   COMMA   DOT       P       Y           A       O       E       U       I        SEMICL     Q       J       K       X
{C_MINUS, C_EQUAL, C_LBRAC,C_RBRAC, C_Z,        A_Z,    A_1,    A_2,    A_3,    A_4,       B_K,    B_L,    B_M,    B_N,     B_O}, // A
{C_BSLAS, C_NONUS, C_SCOLO,C_QUOTE,C_GRAVE,     A_5,    A_6,    A_7,    A_8,    A_9,       B_P,    B_Q,    B_R,    B_S,     B_T}, // O
{C_COMMA, C_DOT,   C_SLASH,C_F1,   C_F2,        A_0,    A_MINUS,A_EQUAL,A_LBRAC,A_RBRAC,   B_U,    B_V,    B_W,    B_X,     B_Y}, // E
{C_F3,    C_F4,    C_F5,   C_F6,   C_F7,        A_BSLAS,A_NONUS,A_SCOLO,A_QUOTE,A_GRAVE,   B_Z,    B_1,    B_2,    B_3,     B_4}, // U
{C_F8,    C_F9,    C_F10,  C_F11,  C_F12,       A_COMMA,A_DOT,  A_SLASH,A_F1,   A_F2,      B_5,    B_6,    B_7,    B_8,     B_9}, // I

// QUOT   COMMA   DOT       P       Y           A       O       E       U       I        SEMICL     Q       J       K       X
{C_KP_DO, B_F13,  B_F14,   B_F15,  B_F16,     A_F3,   A_F4,   A_F5,   A_F6,    A_F7,     B_0,    B_MINUS, B_EQUAL,B_LBRAC,B_RBRAC}, // SEMICL
{B_F17,   C_PIPE,  C_F19,   C_F20,  C_F21,     A_F8,   A_F9,   A_F10,  A_F11,   A_F12,    B_BSLAS,B_NONUS, B_SCOLO,B_QUOTE,B_GRAVE}, // Q
{C_F22,   C_F23,  C_F24,   C_TILDE,C_EXCLA,   A_KP_DO,A_F13,  A_F14,  A_F15,   A_F16,    B_COMMA,B_DOT,   B_SLASH,B_F1,   B_F2}, // J
{C_AT,    C_HASH, C_DOLLA, C_PERCE,C_CIRCU,   A_F17,  A_F18,  A_F19,  A_F20,   A_F21,    B_F3,   B_F4,    B_F5,   B_F6,   B_F7}, // K
{C_AMPER, C_ASTER,C_LEFTP, C_RIGHP,C_UNDER,   A_F22,  A_F23,  A_F24,  A_TILDE, A_EXCLA,  B_F8,   B_F9,    B_F10,  B_F11,  B_F12}, // X

// QUOT   COMMA   DOT       P       Y           A       O       E       U       I        SEMICL     Q       J       K       X
{C_PLUS,  C_LEFTB,C_RIGHC, C_F18, C_COLON,   C_DOUBL,C_LEFTA,C_RIGHA, C_QUEST,CT_W,     C_F17 , C_F13,   C_F14,  C_F15,  C_F16}  // _I            
                        };
#define _CHANGE_LANG\
    register_code(KC_LSFT);\
    register_code(KC_LALT);\
    unregister_code(KC_LSFT);\
    unregister_code(KC_LALT);\

bool process_my_mod(uint16_t keycode, keyrecord_t *record) {
  #define _PROCESS(_name, _register, _unregister) \
    case _name: { \
      static int oldLayer = 0; \
      if (record->event.pressed) { \
        _register; \
        if (currentLayer == 2) { \
          oldLayer = 2; \
          layer_off(2); \
          default_layer_set(0); \
          layerChange = true; \
           register_code(KC_LSFT);\
           register_code(KC_LALT);\
           unregister_code(KC_LSFT);\
           unregister_code(KC_LALT);\
        } \
      } else { \
        if (oldLayer == 2) { \
          layerChange = false; \
          layer_on(2); \
          default_layer_set(2); \
          oldLayer = 0; \
           register_code(KC_LSFT);\
           register_code(KC_LALT);\
           unregister_code(KC_LSFT);\
           unregister_code(KC_LALT);\
        } \
        _unregister; \
      } \
      return false; \
      } break;

  switch (keycode) {
    _PROCESS(MY_CTRL, register_code(KC_LCTRL), unregister_code(KC_LCTRL));
    _PROCESS(MY_ALT,  register_code(KC_LALT),  unregister_code(KC_LALT));
    _PROCESS(MY_WIN,  register_code(KC_LGUI),  unregister_code(KC_LGUI));
  }

  return true;
}



bool key_layer(uint16_t keycode, keyrecord_t *record){

   #define _KEY_LAYER(_key, _number) \
    case _key: { \
        if (record->event.pressed) { \
            if (key1 == 0) { \
                key1 = _number; \
                    } \
            else { \
                key2 = _number; \
                register_code16(keyList[key1][key2]);\
                unregister_code16(keyList[key1][key2]);\
                key1 = 0; \
                break; \
            } \
        } \
        if (press_I){ \
            press_I = false; \
            layer_off(_EDITOR); \
			rgblight_disable();\
            if (changeLang){ \
				default_layer_set(_CYRILIC);\
				register_code(KC_RSFT);\
				unregister_code(KC_RSFT);\
                changeLang = false; \
            } \
        } \
    return false; \
    } break; \

    switch (keycode){
        _KEY_LAYER(_QUOTE,0);
        _KEY_LAYER(_COMMA,1);
        _KEY_LAYER(_DOT,2);
        _KEY_LAYER(_P,3);
        _KEY_LAYER(_Y,4);

        _KEY_LAYER(_A,5);
        _KEY_LAYER(_O,6);
        _KEY_LAYER(_E,7);
        _KEY_LAYER(_U,8);
        _KEY_LAYER(_I,9);

        _KEY_LAYER(_SEMCLN,10);
        _KEY_LAYER(_Q,11);
        _KEY_LAYER(_J,12);
        _KEY_LAYER(_K,13);
        _KEY_LAYER(_X,14);

    }

    return true;
}

void led_set_user(uint8_t usb_led) {
    if (usb_led & (1<<USB_LED_NUM_LOCK)) {
        rgblight_enable();
        rgblight_setrgb(RGB_YELLOW);
	register_code(KC_LALT);
        

    } else {
        rgblight_disable();
	unregister_code(KC_LALT);
    }
}



bool process_record_user(uint16_t keycode, keyrecord_t *record) { 
	debug_enable=true;
  #ifdef CONSOLE_ENABLE
  uprintf("KL: col=%d, row=%d, pressed=%d, layer=%d\n", record->event.key.col, record->event.key.row, record->event.pressed, biton32(layer_state));
  #endif

  static uint16_t my_hash_timer;

  if (!process_my_mod(keycode, record))
      return false;

  if (!key_layer(keycode, record))
      return false;



 
 switch (keycode) {
	 
	 case MY_JMP:  //ace-jump 
      if (record->event.pressed) {
        register_code(KC_LCTL);
	register_code(KC_LALT);
	register_code(KC_L);
	unregister_code(KC_LCTL);
	unregister_code(KC_LALT);
	unregister_code(KC_L);
	  }
      return false;
	  
	 case MY_PJMP: //projectile-jump
      if (record->event.pressed) {
        register_code(KC_LCTL);
	register_code(KC_LALT);
	register_code(KC_F);
	unregister_code(KC_LCTL);
	unregister_code(KC_LALT);
	unregister_code(KC_F);
	  }
      return false;	  
      
	 
      case MY_RAISE: 
         if(record->event.pressed) { 
          my_hash_timer = timer_read();
          layer_on(_RAISE);
          if (currentLayer == 2) { \
             oldLayer = 2; \
             layerChange = true; \
             _CHANGE_LANG;}
        } else {
          layer_off(_RAISE);
            if (oldLayer == 2) { \
              layerChange = false; \
              oldLayer = 0; \
              _CHANGE_LANG; } 
          if (timer_elapsed(my_hash_timer) < TAPPING_TERM) {
            tap_code(KC_BSPC); 
          }
        }
        return false; 


     case MY_LOW: 
        if(record->event.pressed) { 
          my_hash_timer = timer_read();
          layer_on(_LOWER);
          if (currentLayer == 2) { \
             oldLayer = 2; \
             layerChange = true; \
             _CHANGE_LANG;}
        } else {
          
            if (oldLayer == 2) { \
              layerChange = false; \
              oldLayer = 0; \
              _CHANGE_LANG; } 
			  layer_off(_LOWER);
            if (timer_elapsed(my_hash_timer) < TAPPING_TERM) {
              tap_code(KC_TAB); 
          }
        }
        return false; 
  
 
  
		
	 case MY_ENGG: 
        if(record->event.pressed) {	
			rgblight_disable();
			my_hash_timer = timer_read();
			layer_on(_ADD);
        }else {
          layer_off(_ADD); 
		  if (timer_elapsed(my_hash_timer) < TAPPING_TERM) { 
			 
			 
			 if (currentLayer == 0) {
			 }else{				 
				register_code(KC_RCTL);
				unregister_code(KC_RCTL);
				currentLayer = 0;
				layer_off(_CYRILIC);
				default_layer_set(_DVORAK);
				backlight_disable();
			 } 
		}
		}
		return false;	
		
		
	 case MY_RUSL: 
        if(record->event.pressed) {	
			rgblight_disable();
			my_hash_timer = timer_read();
          layer_on(_ADD);
        }else {
          layer_off(_ADD);
          if (timer_elapsed(my_hash_timer) < TAPPING_TERM) {			
			if (currentLayer == 0) {
				register_code(KC_RSFT);
				unregister_code(KC_RSFT);	
				currentLayer = 2;
				layer_on(_CYRILIC);
				default_layer_set(_CYRILIC);
				backlight_level(3);
			}
		}
		}
		return false;
		


		
		
	 case WINC_DQT: 
        if(record->event.pressed) {
          my_hash_timer = timer_read();
          layer_on(_WINC);
       }else {
          layer_off(_WINC);
          if (timer_elapsed(my_hash_timer) < TAPPING_TERM) {

                  register_code(KC_LSFT);
                  register_code(KC_QUOT);
			      unregister_code(KC_QUOT);
			      unregister_code(KC_LSFT);	
			  		  
          }
        }
        return false; 	


    case ADJUST:
      if (record->event.pressed) {
        layer_on(_ADJUST);
      } else {
        layer_off(_ADJUST);
      }
      return false;
      break;




     case __I:
          if (record->event.pressed){
			   key1 = 15;
			   press_I = true;
              if (currentLayer == 0){
				  rgblight_enable();
                  rgblight_setrgb(RGB_YELLOW);
				  layer_on(_EDITOR);
			  }else{}
          }
          return false;
          break;

  }
  return true;
  

}

