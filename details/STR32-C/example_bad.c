#include <stdlib.h>
#include <stdio.h>

char *messg = NULL;
#define BUF_SZ 3

void foo(void)
{
    char buf[BUF_SZ] = "123";

    printf("string is %s", buf); // buf may not be null terminated since the array is a local array

    // ...
}