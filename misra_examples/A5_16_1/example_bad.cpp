#include <stdio.h>

int func ( int x, int y )
{
    // ternary conditional operator used as sub-expression
    int z = y - (x > y ? 10 : ( y > 5 ? 2 : ( x + y )));
    return z;
}