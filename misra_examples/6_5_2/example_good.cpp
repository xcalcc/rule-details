#include <stdio.h>

void func ( void )
{
    int i, j;
    j = 5;
    for ( i = 3; i < j; i += 3 ) // compliant
    {
        printf("i smaller than j");
    }
}