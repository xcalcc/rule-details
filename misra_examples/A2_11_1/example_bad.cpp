#include <stdio.h>

int func ( void )
{
    volatile int i = 10; // non-compliant
    int a, b;
    a = i;
    /*
    ...
    do something
    */
    b = i;
    return 0;
}