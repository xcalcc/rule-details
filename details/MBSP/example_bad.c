#include <sys/socket.h>
#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void func( void )
{
    // create socket one
    int sockfd_one;
    int server_len;
    struct sockaddr_in addr;
    sockfd_one = socket(AF_INET, SOCK_STREAM, 0);
    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_addr.s_addr = htonl(INADDR_ANY);
    addr.sin_port = htons(6789);
    server_len = sizeof(struct sockaddr_in);

    // set SO_REUSEADDR and bind socket one to port
    int opt = 1;
    setsockopt( sockfd_one, SOL_SOCKET,SO_REUSEADDR, (const void *)&opt, sizeof(opt) );
    bind(sockfd_one, (struct sockaddr *) &addr, server_len);

    // create socket two
    int sockfd_two;
    sockfd_two = socket(AF_INET, SOCK_DGRAM, 0);

    // set SO_REUSEADDR and bind socket two to port
    opt = 1;
    setsockopt( sockfd_two, SOL_SOCKET,SO_REUSEADDR, (const void *)&opt, sizeof(opt) );
    bind(sockfd_two, (struct sockaddr *) &addr, server_len);
}