// modified from CERT example
#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <fcntl.h>

int main(void) {
  void *buf;
  const char *filename = "test.txt";
  
  int fd = open(filename, O_RDWR); // file opened with file descriptor fd
  
  pid_t pid = fork(); // child process forked
  
  if (pid == 0) { 
    // child process
    close(fd); // file closed in child process
  
    fd = open(filename, O_RDONLY); // file reopened to get a new file descriptor
     
    read(fd, buf, 1); // read from file
    close(fd); // file closed
  } else { 
    // parent process
    read(fd, buf, 1); // read from file
    close(fd); // file closed
  }
}
