#include <stdio.h>

int func ( void )
{
    printf("Hello");
    return 0; // compliant
}

int main()
{
    func(); // compliant
    return 0;
}