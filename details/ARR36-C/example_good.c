#include <stddef.h>

void func(void)
{
    const int SIZE = 10;
    int nums[SIZE];
    int *next_num = nums;
    size_t free_elements;

    // 
    free_elements = &(nums[SIZE]) - next_num;
}