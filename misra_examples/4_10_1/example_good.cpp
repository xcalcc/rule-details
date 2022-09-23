#include <stdio.h>

void func ( int *x )
{
    x++;
}

int main ( )
{
    func ( NULL ); // NULL used as an pointer
    return 0;
}