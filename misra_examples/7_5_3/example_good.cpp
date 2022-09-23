#include <stdio.h>

int test = 1;

int func( int t )
{   
    test = test + t;
    return t; // compliant
}