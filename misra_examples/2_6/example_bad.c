#include <stdio.h>

int func( void )
{
    int i = 5;
    if (i != 5) i = 5;
lab1: // unused label declared
    return i;
}