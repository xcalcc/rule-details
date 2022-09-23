#include <stdio.h>

typedef int used; // type is declared here

int main()
{
    used a = 1; // type is used here
    printf("%d",a);
    return 0;
}