#include <stdio.h>

int func1( void )
{
    int int_a, int_b, int_c;
    int_a = int_b = 1;
    // the complex expression impairs the readability
    int_c = ++int_a * int_b--;
    return int_c;
}

void func2 ( void )
{
    int x = 1;
    // function call is side effect
    if ( ( func1() - ++x ) > 5)
    {
        // non-compliant
    }
}