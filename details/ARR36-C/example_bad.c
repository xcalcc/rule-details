#include <stddef.h>

void func(void)
{
    const int SIZE = 10;
    int nums[SIZE];
    int last;
    int *next_num = nums;
    size_t free_elements;

    // last is not referring to the same array as nums
    free_elements = &last - next_num;
}