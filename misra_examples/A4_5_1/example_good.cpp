#include <stdio.h>
#include <stdint.h>

enum {a, b, c} test;

void func ( void )
{
    if ( a != b )  // compliant
    {
        printf("test_1");
    }
    else if ( b <= c ) // compliant
    {
        printf("test_2");
    }
}