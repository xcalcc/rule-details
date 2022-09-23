#include <stdio.h>

#define ZERO 0

void func ( void )
{
    void *ptr_void;
    int int_var;
    // ptr_void point to the address of int_var
    ptr_void = &int_var;
    ptr_void = (void *)ZERO;
}