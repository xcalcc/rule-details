#include <stdlib.h>
#include <stdio.h>

char *messg = NULL;
#define BUF_SZ 1024

void foo(char *argv)
{
    int len;
    char buf[BUF_SZ];

    if (*argv != 0)
        len = snprintf(buf, BUF_SZ, "%s", *argv); // buf will be fed into system call later. \"argv\" needs to be sanitized
    if (len < 0)
    {
        // report error
        return;
    }
    else
    {
        if (system(buf) == -1)
        {
            // report error
            return;
        }
    }
}