#include <stdio.h>

void func( void )
{
    int x = 0;
    // array initialized with no side effect
    int arr[2] = { 1, 2 };
    // more code may call x
    // ...
}