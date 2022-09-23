#include <stdio.h>
#include <stdbool.h>
#include <unistd.h>

void func() { 
    // Do not use signal handler functions 

    while(true) {    
        printf("Inside func()");    
        sleep(1);  
    }
}