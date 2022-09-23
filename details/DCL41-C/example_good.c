#include <stdio.h>

extern void some_func(int i);

void func(int val)
{
    // Variables declared outside switch statement
    // so will not have indeterminate values
    int x = 1;
    some_func(x);

    switch (val)
    {   
    case 0:
        x = 21;
        some_func(x);
    default:
        printf("%d", x);
    }
}