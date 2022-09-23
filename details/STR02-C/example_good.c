#include <stdlib.h>
#include <stdio.h>

char *messg = NULL;
#define BUF_SZ 1024

void foo(char *argv)
{
    int len;
    char buf[BUF_SZ];


    // filter out invalid data and characters
    static char approved[] = "abcdefghijklmnopqrstuvwxyz"
                             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                             "1234567890_-.@";
    const char *end = *argv + strlen(*argv);
    for (argv += strspn(argv, approved); argv != end; argv += strspn(argv, approved))
    {
        *argv = '_';
    }

    if (*argv != 0)
        len = snprintf(buf, BUF_SZ, "%s", *argv); 
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
