#include <stdbool.h>
#include <stdio.h>

void func( int num ) {
    // If else is more appropriate than switch for controlling expression with boolean
    if (num == 0) {
        printf("True");
    }
    else {
        printf("default");
    }
}