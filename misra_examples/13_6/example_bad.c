#include <stdio.h>

void func( void )
{
    int int_a, int_b;
    
    // int_b is not modified as intended
    int_a = sizeof( int_b++ );
    // some code that may read int_b
    // ...
}