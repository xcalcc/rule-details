#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int file_s1(char *p, char *q)
{
    struct stat statBefore, statAfter;

    lstat("/tmp/x", &statBefore);
    
    // "x" mode will cause fopen() to fail
    // if the file exists.  
    // NOTE: Only works for C11 and above or
    // systems that support this feature
    FILE *f = fopen("/tmp/x", "wx");
    if (statAfter.st_ino == statBefore.st_ino)
    {
        if (f != NULL)
            fwrite("HELLO!", 1, 5, f);
    }

    fclose(f);
    return 0;
}