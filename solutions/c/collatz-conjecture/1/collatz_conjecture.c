#include "collatz_conjecture.h"



int collatz(int num) {
int count = 0;
    if (num <= 0) {
        return -1;
    }
    if (num == 1) {
        return 0; 
    }
do{
    // even number
    if (num % 2 == 0) {
        num = num / 2;
    } else { 
        num = (num*3) + 1;
    }
count += 1;
}while (num != 1);

return count;
}

int steps(int start) {
    return collatz(start);

}