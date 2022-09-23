#include <stdio.h>

int main()
{
    int s, i;

    switch (s)
    {
        case 5: // Compliant
            printf("%d", 5);
            for( i=0; i<3; i++ )
            {
        case 10: // Unstructed code
            printf("%c", "s");
            }
            break;
        default:
            break;
    }
    
    return 0;
}