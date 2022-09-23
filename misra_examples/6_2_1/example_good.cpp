#include <stdio.h>

void func ( void )
{
    int a,b,c;
    a = 5;
    b = 10;
    c = b; // assignment outside sub-expression
    if ( c > a )
    {
        printf("c bigger than a");
    }
}