#include "resistor_color.h"

unsigned int color_code(resistor_band_t color) {
    // runs the enum and returns the actual value!
    // thus the color variable is redifined by int
    return color;
}

const resistor_band_t* colors(void) {
    // read more into pointer theory
    
    static const resistor_band_t bands[] = {
        BLACK, BROWN, RED, ORANGE, YELLOW,
        GREEN, BLUE, VIOLET, GREY, WHITE
    };
    return bands;
}
