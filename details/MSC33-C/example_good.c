#define __STDC_WANT_LIB_EXT1__ 1
#include <time.h>
#include <stdio.h>

enum
{
    max = 50
};

void read_time(struct tm *time_info)
{   
    // checks for invalid data below and handles 
    // error if exists
    char buffer[max];
    if (asctime_s(buffer, max, &time_info))
    {
        /* Handle error */
    }

    char *time = asctime(time_info);
    printf("time is %s", time);
}
    


