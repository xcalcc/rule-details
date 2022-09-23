#include <stdlib.h>
#include <string.h>

void func(size_t SIZE_LIMIT)
{
    char *p = (char *)malloc(SIZE_LIMIT);
    /* ...  */

    // ensures that it will not go past last element
    const size_t n = SIZE_LIMIT - 1;
    /* ...  */
    memset(p, 0, n);
}