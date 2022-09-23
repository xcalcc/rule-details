#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

// This example is modified from example in 
// CERT-C FIO45 site
int file_s1(char *p, char *q)
{
    struct stat statBefore, statAfter;

    lstat("/tmp/x", &statBefore);
    // previous contents of file gets destroyed 
    // with "w" mode
    FILE *f = fopen("/tmp/x", "w");
    lstat("/tmp/x", &statAfter);
    if (statAfter.st_ino == statBefore.st_ino)
    {
        if (f != NULL)
            fwrite("HELLO!", 1, 5, f);
    }

    fclose(f);
    return 0;
}