#include QMK_KEYBOARD_H

enum layer_names {
    _BL,
    _FL,
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    [_BL] = LAYOUT (
        KC_MPRV,    KC_MNXT,    KC_MPLY,    MO(_FL),
        KC_F13,    KC_F14,    KC_F15,    KC_F16,
        KC_MUTE
    ),
    [_FL] = LAYOUT (
        UG_HUEU,    UG_SATU,    UG_VALU,    MO(_FL),
        UG_HUED,    UG_SATD,    UG_VALD,    UG_NEXT,
        UG_TOGG
    )
};

#if defined(ENCODER_MAP_ENABLE)
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    [_BL] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU) },
    [_FL] = { ENCODER_CCW_CW(KC_MRWD, KC_MFFD) }
};
#endif
