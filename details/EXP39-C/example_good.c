#include <stdio.h>
#include <float.h>
#include <math.h>

void func(void)
{
    float f = 0.0f;

    // nextafter() rounds toward the highest floating point value
    f = nextafterf(f, FLT_MAX);
    printf("%f\n", f);
}