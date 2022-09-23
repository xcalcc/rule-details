#include <stdio.h>

void func ( void )
{
    int a, b;
    int *p;
    a = ( int ) p; // compliant
    p = ( int * ) b; // compliant
}