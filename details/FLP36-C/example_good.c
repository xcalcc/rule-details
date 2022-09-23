#include <assert.h>
#include <float.h>
#include <limits.h>
#include <math.h>
#include <stdint.h>
#include <stdio.h>

extern size_t popcount(uintmax_t); /* See INT35-C */
#define PRECISION(umax_value) popcount(umax_value)

// Example is from CERT-C Site
int func(void)
{
    long int num = 1234567890L;
    assert(PRECISION(LONG_MAX) <= DBL_MANT_DIG * log2(FLT_RADIX));
    double convert = num;
    printf("%ld\n", (num - (long int)convert));
    return 0;
}