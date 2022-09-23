#include <signal.h>
#include <stdio.h>
#include <stdlib.h>

char *messg = NULL;
// sets flag of type volatile
volatile sig_atomic_t eflag = 0;
int errflag;

#define BUF_SZ 1024

void put_messg(void)
{
    fputs(messg, stderr);
}

void handler(int signum)
{
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

    while (!errflag)
    {
        put_messg();
        // ...
    }

    // put_messg() and free() are directly called from main()
    put_messg();
    free(messg);
    messg = NULL;

    return 0;
}
