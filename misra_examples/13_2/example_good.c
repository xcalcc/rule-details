#include <stdio.h>

int func( void )
{
    int a = 6;
    // the value will sure to be -60
    a -= a*a;
    a += a;
    return a;
}