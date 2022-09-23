#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>
#include <fcntl.h>

int file_operation()
{
    struct stat statBefore, statAfter;

    lstat("/tmp/x", &statBefore);

    // file open for read
    FILE *fp_open_readonly = fopen("/tmp/x", "r");
    lstat("/tmp/x", &statAfter);

    if (statAfter.st_ino == statBefore.st_ino)
    {
        if (fp_open_readonly != NULL)
        {
            // writing to the file
            fwrite("HELLO!", 1, 5, fp_open_readonly);
        }
    }

    fclose(fp_open_readonly);
    return 0;
}