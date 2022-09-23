#include <stdio.h>
#include <pthread.h>

int num = 8; // global variable
pthread_mutex_t lock = PTHREAD_MUTEX_INITIALIZER; // initialise a mutex

int main() {
    pthread_mutex_lock(&lock); // enter mutex locked region
    switch (num) {
    case 0:
            num = 0;
            break;
    case 1:
            num++;
            break;
    case 2:
            num--;
            break;
    default:
            // does not exit mutex lock region before return
            // can cause a deadlock because lock is never released
            return 0;
    }
    pthread_mutex_unlock(&lock); // exit mutex lock region
    return 0;
}
