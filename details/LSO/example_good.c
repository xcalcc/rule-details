#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

#define BUF_SZ 256

int foo(void)
{
    int n;
    char buffer[BUF_SZ];
    int sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (sockfd < 0)
    {
        perror("ERROR opening socket");
        exit(1);
    }

    struct sockaddr_in addr;
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    addr.sin_port = htons(3128);
    if (bind(sockfd, (struct sockaddr *)&addr, sizeof(addr)) < 0)
    {
        perror("ERROR binding socket");
        exit(1);
    }

    if (listen(sockfd, 0) < 0)
    {
        perror("ERROR listening socket");
        exit(1);
    }

    close(sockfd);
    return n;
}
