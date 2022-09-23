#include <stdio.h>

int main( int s )
{
    switch (s)
    {
        case 1: // Compliant
            printf("%d", 1);
            break;
        case 2: // Compliant
            printf("%d", 2);
            break;
        default:
            break;
    }

    return 0;
}