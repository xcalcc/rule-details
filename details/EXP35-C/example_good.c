#include <stdio.h>

// This example only works for C11 standard or newer only
#if __STDC_VERSION__ < 201112L
#error This code requires a compiler supporting the C11 standard or newer
#endif

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
