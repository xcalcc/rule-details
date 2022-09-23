#include <stdio.h>

void func ( void )
{
    int *ptr_int;                 // pointer to int declared
    char *ptr_char;               // pointer to char declared
    ptr_int = ( int * ) ptr_char; // convert to int type pointer

    const int * const * ptr_const_int;
    ptr_const_int = ( const int * const * ) ptr_int; // convert to constant-qualified int type pointer
}