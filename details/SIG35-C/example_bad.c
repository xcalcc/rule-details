#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

volatile sig_atomic_t denom;

// handler function that adjust denom to 10 if it is 0, then returns
// since it returns, it may cause undefined behavior if used for signals corresponding to computational exceptions
// In this case, we infinitely loop for SIGFPE with this handler
void sighandle(int s) {
  if (denom == 0) {
    denom = 10;
  }
}
 
int main(int argc, char *argv[]) {
  // get input value from main, expects number input
  char *end = NULL;
  long temp = strtol(argv[1], &end, 10);
  
  denom = (sig_atomic_t)temp;
  signal(SIGFPE, sighandle); // when SIGFPE occurs, call handler function sighandle
  signal(SIGIO, sighandle); // when SIGIO occurs, call handler function sighandle (SIGIO does not correspond to computational exception)
 
  long result = 100 / (long)denom; // if denom is 0, will call SIGFPE (divide by 0 error)
  return 0;
}
