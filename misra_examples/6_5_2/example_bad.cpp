#include <stdio.h>

void func ( void )
{
    int i, j;
    j = 5;
    for ( i = 3; i != j; i += 3 ) // non-compliant
    {
        printf("infinite loop");
    }
}