#include "grains.h"
#include <math.h>

uint64_t square(uint8_t index) {
    uint8_t val = (index-1);
    return pow(2, val);
}
uint64_t total(void) {
    int sum = 0;
    for (int i = 0; i < 64; i++) {
        int result = pow(2, i);
        sum += result;
    }
    return sum;   
}