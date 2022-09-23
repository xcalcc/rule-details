#include <stddef.h>
#include <stdlib.h>
#include <wchar.h>

#define ARRAY_SZ 2
int mismatch_char_type()
{
    char char_array[] = "0123456789";
    wchar_t wchar_array[] = "0123456789";

    // size of char_array is smaller than wchar_array due to different char type
    memcpy(&char_array[0], &wchar_array[0], sizeof(wchar_array));
    return 0;
}