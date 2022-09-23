#include <stdio.h>
 #include <stdlib.h>

typedef char ( *f1 ) ( int );
typedef char ( *f2 ) ( int );

void func ( void )
{
    int x = 1;
    int *p = &x;
    int *q[10];
    f1 a = ( f1 ) p; // function pointer converted into different one is non-compliant
    f2 b = ( f2 ) *q; // non-compliant
    f1 c = ( f1 ) 1; // function pointer converted into int is non-compliant
}