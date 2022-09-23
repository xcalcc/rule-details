#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>

#define BUF_SZ 1024

struct stat link_info;
int val;

int func(char *fname)
{
    FILE *fp;
    if (lstat(fname, &link_info) == -1)
    {
        // handle error
        // ...
        printf("lstat return error");
        return 0;
    }
    else if (S_ISLNK(link_info.st_mode))
    {

        // both fopen and lstat operate on a file name
        // the name can be manipulated asynchronously such that
        // lstat and fopen referred to different files in reality
        fp = fopen(fname, "O_RDWR"); 
        if (fp == 0)
        {
            // handle error
            return 0;
        }

        size_t i = fread(&val, sizeof(int), 1, fp);
        // ...
    }
    return 1;
}