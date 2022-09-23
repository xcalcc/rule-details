// modified from CERT example
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(void) {
  char c;
  pid_t pid;
  char *filename = "test.txt";
  
  int fd = open(filename, O_RDWR); // file opened with file descriptor fd
  
  pid = fork(); // child process forked
  
  if (pid == 0) { 
    // child process
    // file descriptors are copied to the child process, 
    // this could cause race conditions and unpredictable behavior
    read(fd, &c, 1); // read from file
  }
  else { 
    // parent process
    read(fd, &c, 1); // read from file
  }

  close(fd);
}