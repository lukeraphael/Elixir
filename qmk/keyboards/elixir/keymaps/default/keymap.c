#include QMK_KEYBOARD_H

enum custom_keycodes {
    BKRD_WD,
    FWRD_WD,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
	[0] = LAYOUT(
		KC_TAB,    KC_Q,      KC_W,      KC_E,      KC_R,      KC_T,      		KC_Y,      KC_U,      KC_I,      KC_O,      KC_P,      KC_BSLS,   KC_ESC,    
		KC_BSPC,   KC_A,      KC_S,      KC_D,      KC_F,      KC_G,      		KC_H,      KC_J,      KC_K,      KC_L,      KC_SCLN,   KC_QUOT,   KC_ENT,    
		KC_LSFT,   KC_Z,      KC_X,      KC_C,      KC_V,      KC_B,      		KC_N,      KC_M,      KC_COMM,   KC_DOT,    KC_SLSH,   KC_LSFT,   
		KC_LCTL,   KC_LALT,   KC_LGUI,   KC_LGUI,   MO(1),     MO(2),     		KC_ENT,    KC_SPC,    KC_LEFT,   KC_DOWN,   KC_UP,     KC_RIGHT
	),
    [1] = LAYOUT(
		KC_GRV,    KC_1,      KC_2,      KC_3,      KC_4,      KC_5,      		KC_6,      KC_7,      KC_8,      KC_9,      KC_0,      KC_MINS,   KC_PLUS,   
		_______,   KC_EXLM,   KC_AT,     KC_HASH,   KC_DLR,    KC_PERC,   		KC_CIRC,   KC_AMPR,   KC_ASTR,   KC_LPRN,   KC_RPRN,   KC_EQL,    KC_ENT,    
		_______,   _______,   _______,   _______,   _______,   _______,   		_______,   _______,   _______,   _______,   _______,   _______,   
		_______,   _______,   _______,   _______,   _______,   _______,   		_______,   _______,   _______,   _______,   _______,   _______
	),
    [2] = LAYOUT(
		KC_GRV,    _______,   _______,   KC_LBRC,   KC_RBRC,   KC_HOME,   		KC_END,    LALT(KC_LEFT),	LALT(KC_RIGHT),	KC_MINS,   KC_UNDS,   KC_VOLD,   KC_VOLU,   
		KC_BSPC,   KC_EXLM,   KC_AT,     KC_LPRN,   KC_RPRN,   KC_G,      		KC_LEFT,   KC_DOWN,   		KC_UP,			KC_RIGHT,  KC_EQL,    KC_PLUS,   KC_MUTE,   
		_______,   _______,   _______,   KC_LCBR,   KC_RCBR,   _______,   		_______,   _______,   		_______,   		_______,   _______,   _______,   
		_______,   _______,   _______,   _______,   _______,   _______,   		_______,   _______,   		_______,   		_______,   _______,   _______
)};

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    switch (keycode) {
        case BKRD_WD:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LALT));
                register_code(KC_LEFT);
            } else {
                unregister_mods(mod_config(MOD_LALT));
                unregister_code(KC_LEFT);
            }
            break;
        case FWRD_WD:
            if (record->event.pressed) {
                register_mods(mod_config(MOD_LALT));
                register_code(KC_RIGHT);
            } else {
                unregister_mods(mod_config(MOD_LALT));
                unregister_code(KC_RIGHT);
            }
            break;
    }
    return true;
}
