#include <stdio.h>

#define MAXIMUM 0xffffffffu // maximum value of unsigned int

const unsigned int const_int = 1;
void func( void );

void func( void )
{
    unsigned int uint_var;
    // 0xffffffff assigned to long_long_var
    uint_var = MAXIMUM;
    // uint_var + 1 and uint_var + const_int is not a constant expression
    uint_var = uint_var + 1;
    uint_var = uint_var + const_int;
    
    if (( 1 < 0 ) || ( 0u - 10u ))
    {
        // compliant
    }
}