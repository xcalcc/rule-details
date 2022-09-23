#include <stdlib.h>
#include <string.h>

void func(size_t SIZE_LIMIT)
{
    char *p = (char *)malloc(SIZE_LIMIT);
    /* ...  */

    // adding 100 is out of bounds
    const size_t n = SIZE_LIMIT + 100;
    /* ...  */
    memset(p, 0, n);
}