#include <stdio.h>
#include <stdlib.h>

void func ( void )
{
    typedef void ( *fp ) ( int x );
    extern void f ( int y );
    typedef fp ( *test ) ( void );

    fp p = NULL; // null pointer constant into function pointer is compliant
    fp q = f; // function into function pointer is compliant
    test tfunc;
    ( void ) ( *tfunc( ) ); // function pointer into void
}