#include <stdio.h>

// a name refer to both a type and an object
typedef struct test1 { int x; int y; } test1;

/* 
a name refer to both a type and a function,
this example will get compilation error
*/
typedef struct test2 { int a; int b; } test2;

int test2( void )
{
    return 1;
}