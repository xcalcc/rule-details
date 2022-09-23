#include <stdio.h>

void func() {
    int num = 2;
    switch(num + 2) {
        default:
            // Only one switch-clause
            printf("default case");
            break;
    }
}