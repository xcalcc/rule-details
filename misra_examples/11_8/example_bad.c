#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

void func ( void );

void func ( void )
{
    int * const *p_constpt;
    volatile int *p_volatile;
    // pointer to const declared
    const int * ptr_const = ( int *) malloc ( sizeof ( int ) );
    int *ptr_int;
    int * *p_ptr_int;
    // const qualifier removed in a cast
    ptr_int = ( int * ) ptr_const;
    ptr_int = ( int * ) p_volatile;
    p_ptr_int = ( int * * ) p_constpt;
    // more code that may change ptr_const
    // ... 
}