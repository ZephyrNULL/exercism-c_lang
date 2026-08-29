#include "difference_of_squares.h"
#include <math.h>


unsigned int sum_of_squares(unsigned int number){
    unsigned int sum = 0;
    for(unsigned int i = 1; i <= number; i++){
       sum += i*i;
    }
    return sum;
}

unsigned int square_of_sum(unsigned int number){
    
    int sum = 0;
    for(unsigned int i = 1; i <= number; i++){
        sum += i;
        
    }
    sum = sum*sum;
    return sum;
}

unsigned int difference_of_squares(unsigned int number){
    
    int sqOfSum = sum_of_squares(number);
    int sumOfSq = square_of_sum(number);
    unsigned int different = sumOfSq - sqOfSum;

    return different;
}