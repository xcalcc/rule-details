#include <stdio.h>
#include <signal.h>
#include <stdbool.h>
#include <unistd.h>

void sig_handler(int signum) {
    printf("\nInside handler function\n");
}

void func() { 
    // Register signal handler
    // Using functions from signal.h can lead to undefined behaviour
    signal(SIGINT,sig_handler); 
  
    while(true) {    
        printf("Inside func()");    
        sleep(1);  
    }
}