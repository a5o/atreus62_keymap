#include QMK_KEYBOARD_H

#define _BASE 0
#define _LOWER 1
#define _RAISE 2
#define _FUN 3
#define _ADJUST 4

enum custom_keycodes {
  BASE,
  LOWER,
  RAISE,
};

enum unicode_names {
    EACU,
		EGRV,
		AGRV,
		UGRV,
		IGRV,
		OGRV,

  // greek letters
  UALPH,
  UBETA,
  UGAMM,
  UDELT,
  UEPSI,
  UZETA,
  UETA,
  UTHET,
  UIOTA,
  UKAPP,
  ULAMB,
  UMU,
  UNU,
  UXI,
  UOMIC,
  UPI,
  URHO,
  USIGM,
  UTAU,
  UUPSI,
  UPHI,
  UCHI,
  UPSI,
  UOMEG,

  LALPH,
  LBETA,
  LGAMM,
  LDELT,
  LEPSI,
  LZETA,
  LETA,
  LTHET,
  LIOTA,
  LKAPP,
  LLAMB,
  LMU,
  LNU,
  LXI,
  LOMIC,
  LPI,
  LRHO,
  LSIGM,
  LTAU,
  LUPSI,
  LPHI,
  LCHI,
  LPSI,
  LOMEG,

  FSIGM,

  LTEQ,
  GTEQ,
  NOTEQ,
  PLMIN,
};

// Tap dance declarations
enum {
	TD_LSFT_CAPS,
};

// Tap Dance definitions
qk_tap_dance_action_t tap_dance_actions[] = {
    // Tap once for Escape, twice for Caps Lock
    [TD_LSFT_CAPS] = ACTION_TAP_DANCE_DOUBLE(KC_LSFT, KC_CAPS),
};

const uint32_t PROGMEM unicode_map[] = {
    [EACU] = 0x00E9,
		[EGRV] = 0x00E8,
		[AGRV] = 0x00E0,
		[UGRV] = 0x00F9,
		[IGRV] = 0x00EC,
		[OGRV] = 0x00F2,
  // greek letters
  [UALPH] = 0x0391,
  [UBETA] = 0x0392,
  [UGAMM] = 0x0393,
  [UDELT] = 0x0394,
  [UEPSI] = 0x0395,
  [UZETA] = 0x0396,
  [UETA] = 0x0397,
  [UTHET] = 0x0398,
  [UIOTA] = 0x0399,
  [UKAPP] = 0x039A,
  [ULAMB] = 0x039B,
  [UMU] = 0x039C,
  [UNU] = 0x039D,
  [UXI] = 0x039E,
  [UOMIC] = 0x039F,
  [UPI] = 0x03A0,
  [URHO] = 0x03A1,
  [USIGM] = 0x03A3,
  [UTAU] = 0x03A4,
  [UUPSI] = 0x03A5,
  [UPHI] = 0x03A6,
  [UCHI] = 0x03A7,
  [UPSI] = 0x03A8,
  [UOMEG] = 0x03A9,
  [LALPH] = 0x03B1,
  [LBETA] = 0x03B2,
  [LGAMM] = 0x03B3,
  [LDELT] = 0x03B4,
  [LEPSI] = 0x03B5,
  [LZETA] = 0x03B6,
  [LETA] = 0x03B7,
  [LTHET] = 0x03B8,
  [LIOTA] = 0x03B9,
  [LKAPP] = 0x03BA,
  [LLAMB] = 0x03BB,
  [LMU] = 0x03BC,
  [LNU] = 0x03BD,
  [LXI] = 0x03BE,
  [LOMIC] = 0x03BF,
  [LPI] = 0x03C0,
  [LRHO] = 0x03C1,
  [LSIGM] = 0x03C3,
  [LTAU] = 0x03C4,
  [LUPSI] = 0x03C5,
  [LPHI] = 0x03C6,
  [LCHI] = 0x03C7,
  [LPSI] = 0x03C8,
  [LOMEG] = 0x03C9,
  [FSIGM] = 0x03C2,

  // other
  [LTEQ] = 0x2264, // less than or equal
  [GTEQ] = 0x2265, // greater than or equal
  [NOTEQ] = 0x2260, // not equal
  [PLMIN] = 0xB1, // plus minus
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[_BASE] = LAYOUT(
	KC_GRV, KC_1, KC_2, KC_3, KC_4, KC_5, KC_6, KC_7, KC_8, KC_9, KC_0, KC_EQL, 
	KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T, KC_Y, KC_U, KC_I, KC_O, KC_P, KC_MINS, 
	LCTL_T(KC_ESC), KC_A, KC_S, KC_D, KC_F, KC_G, KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_QUOT, 
	TD_LSFT_CAPS, KC_Z, KC_X, KC_C, KC_V, KC_B, KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_ENT, 
	KC_LCTL, OSL(_FUN), KC_LGUI, KC_LALT, RAISE, KC_SPC, KC_BSPC, RCTL_T(KC_ENT), KC_SPC, LOWER, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT
	),

	[_LOWER] = LAYOUT(
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_DEL, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, XP(EGRV,EACU), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, X(UGRV), X(IGRV), X(OGRV), KC_TRNS, KC_TRNS,
	KC_TRNS, X(AGRV), KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_BSLS,
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS
	),

	[_RAISE] = LAYOUT(
	KC_TILD, KC_EXLM, KC_AT, KC_HASH, KC_DLR, KC_PERC, KC_CIRC, KC_AMPR, KC_ASTR, KC_LPRN, KC_RPRN, KC_PLUS, 
	KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LCBR, KC_RCBR, KC_LBRC, KC_RBRC, KC_UNDS, 
	KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_LEFT, KC_DOWN, KC_UP, KC_RIGHT, KC_COLN, KC_DQUO, 
	KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_INS, KC_LT, KC_GT, KC_QUES, KC_PIPE, 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_HOME, KC_PGDN, KC_PGUP, KC_END
	),

	[_FUN] = LAYOUT(
	KC_F12, KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6, KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, 
	KC_TRNS, KC_NO, XP(LPSI,UPSI), XP(LEPSI,UEPSI), XP(LRHO,URHO), XP(LTHET,UTHET), XP(LTAU,UTAU), XP(LUPSI,UUPSI), XP(LIOTA,UIOTA), XP(LOMEG,UOMEG), XP(LPI,UPI), KC_NO, 
	KC_TRNS, XP(LALPH,UALPH), XP(LSIGM,USIGM), XP(LDELT,UDELT), XP(LPHI,UPHI), XP(LGAMM,UGAMM), KC_NO, KC_NO, XP(LKAPP,UKAPP), XP(LLAMB,ULAMB), KC_NO, KC_NO, 
	KC_TRNS, XP(LZETA,UZETA), XP(LXI,UXI), XP(LCHI,UCHI), XP(LNU,UNU), XP(LBETA,UBETA), XP(LETA,UETA), XP(LMU,UMU), X(LTEQ), X(GTEQ), X(NOTEQ), X(PLMIN), 
	KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_MNXT, KC_VOLD, KC_VOLU, KC_MPLY
	),

	[_ADJUST] = LAYOUT(
	BASE, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, RESET, EEP_RST, DEBUG, KC_NO, KC_NO, AG_SWAP, AG_NORM, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, RCG_SWP, RCG_NRM, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, 
	KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO
	)
};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
	switch (keycode) {
		case BASE:
			if (record->event.pressed) {
				set_single_persistent_default_layer(_BASE);
			}
			return false;
			break;
		case LOWER:
			if (record->event.pressed) {
				layer_on(_LOWER);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			}else{
				layer_off(_LOWER);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			}
			return false;
			break;
		case RAISE:
			if (record->event.pressed) {
				layer_on(_RAISE);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			}else{
				layer_off(_RAISE);
				update_tri_layer(_LOWER, _RAISE, _ADJUST);
			}
			return false;
			break; 
	}
	return true;
}
