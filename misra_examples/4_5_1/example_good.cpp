#include <stdio.h>

bool a = true;
bool b = false;

int func( void )
{
    if ( a && b )           // the use of bool and && is meaningful
    {
        printf("compliant");
    }
    else if ( a != b )      // the use of bool and != is meaningful
    {
        printf("compliant");
    }
    return 0;   
}