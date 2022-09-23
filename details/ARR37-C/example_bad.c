#include <stddef.h>

void func(void)
{
    int num = 10;
    int *num_ptr = num;

    // below is dangerous since members aren't guaranteed to 
    // be contiguous
    num_ptr = num_ptr - 10; 

    printf(&num_ptr);
}