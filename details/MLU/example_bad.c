#include <pthread.h>
#include <stdio.h>
 
typedef struct sMutex_Lock {
  int index;
  pthread_mutex_t mutex;
} Mutex_Lock_Type;
 
Mutex_Lock_Type g_struct[100];
 
void hc1_bad (int ret) {
  int i;
  for (i = 0; i < 100; i++){
    pthread_mutex_lock(&g_struct[i].mutex);
    if (ret > 0) {
      if (ret < 100) {
        printf("ret < 100\n");
        pthread_mutex_unlock(&g_struct[i].mutex);
        break;
      }
      else {
	// break statement exits the loop prematurely without calling unlock 
        if (ret > 1000) {
          printf("ret > 1000\n");
          break;
        }
      }
    }
    pthread_mutex_unlock(&g_struct[i].mutex);
  }
}
