#include <stdlib.h>
#include <stdio.h>

char *messg = NULL;
#define BUF_SZ 3

void foo(void)
{
    char buf[] = "123";

    printf("string is %s", buf); 

    // ...
}