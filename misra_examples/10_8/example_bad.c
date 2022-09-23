#include <stdio.h>
#include<stdint.h>

void func ( void )
{
    float float_a, float_b;
    int int_var;
    float_a = float_b = 1.0f;
    int_var = ( int ) ( float_a + float_b ); // casted to inappropriate type int

    uint8_t uint_var;
    uint_var = ( uint8_t ) ( float_a + float_b ); // different essential type
}