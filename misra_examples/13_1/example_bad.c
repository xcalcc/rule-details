#include <stdio.h>

void func( void )
{
    int x = 0;
    // object x modified due to side effect
    int arr[2] = { ++x, ++x };
    // more code may call x
    // ...
}