#include <stdio.h>

#define BUF_SZ 1024

int func(char *env_str)
{
    char buf[BUF_SZ];

    // if len is >= sizeof(buf), up till the last byte of buf is non-null
    ssize_t len = readlink("/usr/somedir/symlinkfile", buf, sizeof(buf));

    // len is outside of buf size range (i may be -1 or i >= sizeof(buf))
    buf[len] = '\0'; 
    return;
}