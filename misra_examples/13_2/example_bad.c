#include <stdio.h>

int func( void )
{
    int a = 6;

    a += a -= a*a;
    return a;
}