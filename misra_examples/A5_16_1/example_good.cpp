#include <stdio.h>

int func ( int x, int y )
{
    int z = x > y ? 10 : x; // compliant
    return z;
}