#include <stdio.h>

int main()
{
    int s;

    switch (s)
    {
        case 10:
            printf("%s", "ten");
            break;
        case 20:
            printf("%s", "twenty");
            break;
    // default label is missing
    }

    return 0;
}