#include <stdio.h>
#include <stdint.h>

void func ( void )
{
    float float_a, float_b;
    int int_var;
    float_a = float_b = 1.0f;
    int_var = ( int ) float_a + ( int ) float_b; // float_a and float_b casted to type int

    uint8_t uint_var;
    uint_var = ( uint8_t ) int_var; // compliant
}