#include <stdio.h>

int func ( void )
{
    return 0;
}

int main ( void )
{
    if( func == 0 ) // unclear use of func
    {
        printf("the use of func is not clear");
    }
    return 0;
}