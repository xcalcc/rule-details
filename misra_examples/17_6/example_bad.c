#include <stdio.h>

// non-compliant for use of static in array parameter declaration
void func(int arr[static 5])
{
    int i = 0;
    for (int i =0; i < 5; i++)
    {
        arr[i]++;
    }
}