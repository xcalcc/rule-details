#include <stdio.h>

#define BUF_SZ 1024

int func(char *env_str)
{
    char buf[BUF_SZ];

    // if len is >= sizeof(buf), up till the last byte of buf is non-null
    ssize_t len = readlink("/usr/somedir/symlinkfile", buf, sizeof(buf)); 

    // case handled when len is an invalid value
    if (len >= sizeof(buf) || len == -1) {
        // Handle Exception 
        return;
    }

    buf[len] = '\0'; // len is always within buf size range
    return;
}