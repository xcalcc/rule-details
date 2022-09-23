#include <stdio.h>

void func ( int *x )
{
    x++;   
}

int main ( )
{
    func ( 0 ); // 0 used as an null pointer constant
    return 0;
}