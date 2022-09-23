#include <stdio.h>

void func(void)
{
    float f = 0.0f;
    
    // Pointer has incompatible type, so leads to undefined behavior.
    int *ip = (int *)&f;
    printf("%f\n", f);
}