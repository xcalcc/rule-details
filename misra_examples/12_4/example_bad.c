#include <stdio.h>

#define MAXIMUM 0xffffffffu // value of unsigned int (assume int is 32 bits)
#define ONE     0x1u
void func( void );

void func( void )
{
    unsigned int uint_var;
    // the value of MAXIMUM + 1 lead to wrap-around
    uint_var = MAXIMUM + ONE;
}