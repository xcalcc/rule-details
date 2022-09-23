#include <limits.h>
#include <stddef.h>
#include <inttypes.h>

extern size_t check(uintmax_t);

int func(unsigned int a, unsigned int b)
{
    // checks for case where there is shifting of bit greater
    // than or equal to the number of bits in the precision
    // of the left operand
    if (b < check(UINT_MAX)) 
    {
        int result = a << b;
        return result;
    }
    
    /* Handle Error */
}