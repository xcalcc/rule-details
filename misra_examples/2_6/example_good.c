#include <stdio.h>

int func( void )
{
    int i = 5;
    goto lab1; // label used
    if (i != 5) i = 5;
lab1: // label declared
    return i;
}