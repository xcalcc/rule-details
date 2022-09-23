#include <stdio.h>

void func ( void )
{
    char a, b;
    int *p;
    a = ( char ) p;  // non-compliant
    p = ( int * ) b; // non-compliant
}