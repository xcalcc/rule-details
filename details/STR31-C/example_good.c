#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void get_passwd(void)
{
    // length is not fixed, so no buffer overflow
    
    char *buf;
    char *passwd = getenv("PASSWORD");
    if (passwd == NULL)
    {
        printf("Error getting password");
        exit(1);
    }

    size_t length = strlen(passwd) + 1;
    buf = (char *)malloc(length);
    if (buf == NULL)
    {
        // handle error
    }

    memcpy(buf, passwd, length);
    free(buf);
}

