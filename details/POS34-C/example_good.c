#include <string.h>

#define BUF_SZ 1024

int func(char *env_str)
{
    // use a static array so that call to putenv() is 
    // only necessary the first time func() is called
    static char buf[BUF_SZ];
    // ...
    if (strlen(env_str) < BUF_SZ)
    {
        strcpy(buf, env_str);
        return putenv(buf);
    }
    else
    {
        // handle error
        // ...
    }
    return 0;
}