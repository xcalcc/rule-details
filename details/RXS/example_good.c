#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SZ 256

int foo(void)
{
    int n;
    char buffer[BUF_SZ];
    char *cp = buffer; 
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0)
    {
        perror("ERROR opening socket");
        exit(1);
    }

    // filter out untrusted data and characters
    static char approved[] = "abcdefghijklmnopqrstuvwxyz"
                             "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
                             "1234567890_-.@";
    const char *end = buffer + strlen(buffer);
    for (cp += strspn(cp, approved); cp != end; cp += strspn(cp, approved))
    {
        *cp = '_';
    }

    n = read(sockfd, buffer, 255);

    // use buffer
    // if buffer is used as argument to system() or to setenv()
    // the buffer may contain untrusted commands or characters leading to unpredictable program behavior
    // ...
}