#include <stdio.h>

void func ( void )
{
    int a,b,c;
    a = 5;
    b = 10;
    if ( ( c = b ) > a ) // assignment inside sub-expression
    {
        printf("c bigger than a");
    }
}