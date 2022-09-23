#include <stdio.h>

// array parameter declaration without static
void func(int arr[10])
{
    for (int i =0; i < 10; i++)
    {
        arr[i]++;
        printf("%d", arr[i]);
    }
}