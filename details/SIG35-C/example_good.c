#include <stdio.h>
#include <signal.h>
#include <stdlib.h>

volatile sig_atomic_t denom; 
 
// handler function that calls exit(), does not return
void sighandle(int s) {
  exit(-1);
}
 
int main(int argc, char *argv[]) {
  // get input value from main
  char *end = NULL;
  long temp = strtol(argv[1], &end, 10);

  denom = (sig_atomic_t)temp;
  signal(SIGFPE, sighandle); // when SIGFPE occurs, call handler function sighandle
 
  long result = 100 / (long)denom; // if denom is 0, will call SIGFPE (divide by 0 error)
  return 0;
}
