#include <stddef.h>

void func(void)
{
    for (size_t count = 1; count <= 10; ++count)
    {
        float x = count / 10.0f;
        /* Loop always iterates 10 times */
    }
}