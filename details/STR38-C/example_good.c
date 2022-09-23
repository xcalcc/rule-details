#include <stddef.h>
#include <stdlib.h>
#include <wchar.h>

#define ARRAY_SZ 2
int mismatch_char_type()
{
    char char_array[] = "0123456789";
    char char_array_2[] = "0123456789";

    // char type is the same, so comparing is acceptable
    strncpy(&char_array[0], &char_array[2], sizeof(char_array));
    return 0;
}