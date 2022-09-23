#include <signal.h>
#include <stdlib.h>
#include <sys/socket.h>

char *messg = NULL;
#define BUF_SZ 1024
int sockfd; // as a simple example, we assume sockfd has been properly initialized and connected

int errflag; // this is a shared variable

ssize_t put_messg(void)
{
    ssize_t err = send(sockfd, (const void *)messg, BUF_SZ, MSG_DONTWAIT);
    return err;
}

void handler(int signum)
{
    errflag = 1; // access shared variable inside handler
}

int main(void)
{
    messg = (char *)malloc(1024);
    if (messg == 0)
    {
        // handle error
    }

    if (signal(SIGINT, handler) == SIG_ERR)
    {
        // handle error
    }

    if (!errflag)
    {
        if (put_messg() >= 0)
        {
            // messg sent
            // ...
        }
        else
        {
            // ...
        }
    }
    return 0;
}