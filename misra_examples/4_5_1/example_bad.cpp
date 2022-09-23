#include <stdio.h>

bool a = true;
bool b = false;

void func( void )
{
    if ( a < b ) // the use of bool and < is unmeaningful
    {
        printf("non-compliant");
    }
}