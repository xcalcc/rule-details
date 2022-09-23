#include <stdio.h>

extern void some_func(int i);

void func(int val)
{
    switch (val)
    {
    // Variables declared inside switch statement
    // before first case
        int x = 1;
        some_func(x);
    case 0:
        x = 21;
        some_func(x);
    // x will have indeterminate value
    default:
        printf("%d", x);
    }
}