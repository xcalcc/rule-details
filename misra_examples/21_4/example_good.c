#include <stdio.h>
#include <stdlib.h>

// Do not use functions from setjmp.h
void func() {
    int val;
    val = 10;
    printf("%d", val);
}