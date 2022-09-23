#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

char *messg = NULL;
int errflag;

#define BUF_SZ 1024

void put_messg(void)
{
    fputs(messg, stderr);
}

void handler(int signum)
{
    put_messg(); // this is not asynchronous safe
    free(messg); // this is not asynchronous safe
    errflag = 1;
}

int main(void)
{
    if (signal(SIGINT, handler) == SIG_ERR)
    {
        // handle error
    }
    messg = (char *)malloc(BUF_SZ);
    if (messg == 0)
    {
        // handle error
    }

    if (!errflag)
    {
        put_messg();
        // ...
    }
    return 0;
}
