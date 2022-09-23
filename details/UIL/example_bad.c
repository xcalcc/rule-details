#include <stddef.h>
#include <pthread.h>
 
void mutex_initialise(pthread_mutex_t *lock) {
  pthread_mutex_init(lock, NULL);
}
 
void mutex_lock(pthread_mutex_t *lock) {
  pthread_mutex_lock(lock);
}
 
void mutex_unlock(pthread_mutex_t *lock) {
  pthread_mutex_unlock(lock);
}
 
int main(void) {
    pthread_mutex_t mlock;
    
    // mutex_initialize, nor pthread_mutex_init has been invoked
    mutex_lock(&mlock);
    mutex_unlock(&mlock);
    return 0;
}
