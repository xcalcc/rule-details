#include <stddef.h>

void func()
{
    int arr[3] = {0, 1, 2};

    int *ptr;
    ptr = arr;
    ptr++;  // ++ operator is allowed
    ptr[1] = 0;
    int *p = &arr[ 2 ];
    ptrdiff_t diff;
    diff = ptr - p; // compliant for exception
}