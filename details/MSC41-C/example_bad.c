#include <stdio.h>

#define BUF_SZ 1024

int check_passwd(const char *s);

int func(void)
{
    // program logic
    // ...

    // sensitive data is revealed below 
    if (check_passwd("admin"))
    {
        // ... continue
    }
    else
    {
        // handle error
        // ...
    }
}