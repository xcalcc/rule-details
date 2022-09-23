#include <stdint.h>

void func ( void );

void func ( void )
{
    uint16_t uint16_var = 2;
    uint32_t uint32_var;
    // 17 is in the range 0 to the size of uint16_var
    uint32_var = uint32_var << 17;
}