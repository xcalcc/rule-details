#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void func( void )
{
    // create socket one and bind to port
    int sockfd_one;
    int server_len;
    struct sockaddr_in addr;
    sockfd_one = socket(AF_INET, SOCK_STREAM, 0);
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    addr.sin_port = htons(6789);
    server_len = sizeof(struct sockaddr_in);
    bind(sockfd_one, (struct sockaddr *) &addr, server_len);
}