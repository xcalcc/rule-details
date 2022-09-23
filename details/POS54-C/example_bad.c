#include <sys/types.h>
#include <sys/mman.h>
#include <err.h>
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(void)
{
    const char str1[] = "string 1";
    int fd = -1;
    void *rwrite;

    if ((fd = open("/usr/somefile", O_RDWR, 0)) == -1)
    {
        err(1, "open");
    }

    rwrite = (char *)mmap(NULL, 4096, PROT_READ | PROT_WRITE, MAP_SHARED, fd, 0);

    // rwrite may not be valid pointer since mmap may have failed
    strcpy(rwrite, str1);

    // ... continue
}