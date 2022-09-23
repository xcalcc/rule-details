#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

#define BUF_SZ 1024

struct stat link_info;
int val;

int func(char *fname)
{
    FILE *fp;
    // Race condition eliminated by using O_NOFOLLOW 
    // to cause open() to fail if passed a symbolic link
    int fd = open(fp, "O_RDWR"|"O_NOFOLLOW");
    if (fd == -1)
    {
        /* Handle error */
        return 0;
    }

    return 1;
}