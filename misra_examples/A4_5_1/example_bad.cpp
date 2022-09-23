#include <stdio.h>
#include <stdint.h>

extern void extern_func(char *);

enum {a, b, c} test;

void func ( void )
{
    if ( ( a + b ) == test ) // non-compliant
    {
        extern_func("test_1");
    }
    else if ( ( a - c  ) != b ) // non-compliant
    {
        extern_func("test_2");
    }
}