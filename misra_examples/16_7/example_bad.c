#include <stdbool.h>
#include <stdio.h>

void func() {
    int num = 0;
    // Switch with boolean caluse as the controlling expression is redundant
    switch(num == 0) {
        case true:
            printf("True case");
            break;
        default:
            printf("default case");
            break;
    }
}