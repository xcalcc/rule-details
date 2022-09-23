#include <stdint.h>

void func(void)
{
    int *intPointer;
    /* ... */

    // Use intptr_t or unintptr_t when converting
    intptr_t number = (intptr_t)intPointer;
    /* ... */
}