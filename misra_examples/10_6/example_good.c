#include <stdio.h>

void func ( void )
{
    long long_var;
    short short_a, short_b;
    short_a = 1;
    short_b = 1;
    long_var = ( long )short_a + short_b; // explicitly converted to long
}