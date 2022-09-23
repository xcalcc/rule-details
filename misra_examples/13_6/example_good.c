#include <stdio.h>

void func( void )
{
    int int_a, int_b;

    // the operand do not have side effect
    int_a = sizeof( int_b );
    int_b++; // int_b modified as intended
    // some code that may read int_b
    // ...
}