#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER; // initialise a mutex
int num; // global variable

int main () {
    pthread_mutex_lock(&lock); // enter mutex lock region
    num++;
    pthread_mutex_unlock(&lock); // exit mutex lock region
    return 0;
}
