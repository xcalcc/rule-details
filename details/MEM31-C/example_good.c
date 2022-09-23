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
    
    // pointer deallocated
    free(text_buffer);
    return 0;
}