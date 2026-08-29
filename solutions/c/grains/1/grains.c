#include "grains.h"
#include <stdint.h>
#include <math.h>

uint64_t square(uint8_t index){
    uint64_t sum = 0; 
    sum = pow(2, (index-1));
    return sum;
}

uint64_t total(void){
    int index = 64;
    uint64_t power = pow(2, index);
    uint64_t total = 1*(power - 1)/(2-1);
    return total;
}