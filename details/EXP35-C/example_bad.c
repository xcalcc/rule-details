#include <stdio.h>

// This example does not catch object with temporary lifetime, so this leads to 
// undefined behavior
struct X
{
    char a[4];
};

struct X salutation(void)
{
    struct X thing = {"Hi"};
    return thing;
}

int main(void)
{
    printf("%s!\n", salutation().a);
    return 0;
}
