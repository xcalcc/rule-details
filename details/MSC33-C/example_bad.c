#include <time.h>
#include <stdio.h>

void read_time(struct tm *time_info)
{
    // does not check for invalid or potentially
    // unsanitised data
    char *time = asctime(time_info);
    printf("time is %s", time);
}