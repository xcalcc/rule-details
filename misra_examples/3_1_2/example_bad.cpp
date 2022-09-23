#include <stdio.h>

void func ( int x )
{
    x++;
    void func_in_block(); // function declared in block
}