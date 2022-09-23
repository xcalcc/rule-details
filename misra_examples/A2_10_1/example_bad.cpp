#include <stdio.h>

int i, j;

int func ( int i, int j ) // non-compliant
{
    i = 1;
    j = 2;
    if ( i - j < 0 )
    {
        return 0;
    }
}