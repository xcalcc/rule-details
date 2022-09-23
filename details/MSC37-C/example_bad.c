#include <string.h>

#define BUF_SZ 1024

int has_char(const char *s)
{
    if (s != NULL)
    {
        int l = strlen(s);
        int i;
        for (i = 0; i < l; i++)
        {
            if (s[i] == 'c')
                return i;
        }
    }
    // missing return here, return value will be undefined
}