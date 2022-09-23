#include <stddef.h>

void func(void)
{
    const int SIZE = 10;
    int nums[SIZE];

    int *nums_ptr = nums;

    printf("%f\n", *(nums_ptr + 1));
}