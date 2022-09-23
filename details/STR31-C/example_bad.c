#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void get_passwd(void)
{
    char buf[256];
    char *passwd = getenv("PASSWORD");
    if (passwd == NULL)
    {
        printf("Error getting password");
        exit(1);
    }
    //
    // copy environmental string to a fixed-length can cause buffer overflow
    //
    strcpy(buf, passwd);
}