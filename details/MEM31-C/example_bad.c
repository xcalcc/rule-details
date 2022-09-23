#include <stdlib.h>

int func(void)
{
    const int BUFFER_SIZE = 10;
    char *text_buffer = (char *)malloc(BUFFER_SIZE);
    if (text_buffer == NULL)
    {
        return -1;
    }
    /* ... */
    
    // text_buffer does not get freed
    return 0;
}