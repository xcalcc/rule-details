#include <stdio.h>

union uni
{
    int i;
    char c;
}; // union declared

void func ( void )
{
    union uni union_var;
    union_var.i =1;
    int *ptr_int;
    // ptr_int point to union_var.i
    ptr_int = &union_var.i;

    // exception 1
    struct a;
    struct a *p;
    p = NULL;

    // exception 2
    struct a *test ( void );
    ( void ) test ();
}