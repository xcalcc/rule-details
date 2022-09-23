#include <stdio.h>

int func ( void )
{
    return 0;
}

int main ( void )
{
    if( &func == 0 ) // compliant
    {
        func(); // call the function
        printf("the use of func is clear");
    }
    return 0;
}