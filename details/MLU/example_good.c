void hc1_good (int ret) {
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
	// unlock before break 
        if (ret > 1000) {
          printf("ret > 1000\n");
          pthread_mutex_unlock(&g_struct[i].mutex);
          break;
        }
      }
    }
    pthread_mutex_unlock(&g_struct[i].mutex);
  }
}
 
