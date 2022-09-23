#include <stdio.h>

int a = 3; // identifier defined, outer scope

int main()
{
    int b; // identifier defined, inner scope, different form the outer one
    b = 4;
    printf("%d",b);
    return 0;
}