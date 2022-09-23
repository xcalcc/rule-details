#include <stdio.h>

void func( void )
{
    // all elements initialized once
    int arr[3] = { [ 0 ] = 3, [ 1 ] = 2, [ 2 ] = 1};
}