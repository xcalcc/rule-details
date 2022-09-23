#include <stdio.h>

int func( void )
{
    int int_a, int_b, int_c;
    int_a = int_b = 1;
    // make the code more readable by this mean
    ++int_a;
    int_c = int_a * int_b;
    int_b--;
    return int_c;
}