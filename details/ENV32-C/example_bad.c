#include <stdlib.h>
#include <stdio.h>

extern int file_opened;

int my_exit1(void)
{
 // some clean up code for opened file
 fprintf(stderr, "abnormal exit from my_exit1() with file closed\\");
 exit(0); // this exit handler does not return normally. exit() is called the second time when value of file_opened is 1.
}

int my_exit2(void)
{
 if (file_opened == 1) {
 my_exit1();
 }
 fprintf(stderr, "abnormal exit with errno %d", errno());
 // other cleanup code
 // if file_opened is 1, the clean up code here will not be executed
 // ...
 return 1;

}

int main() {
 // ...
 if (atexit(my_exit2) != 0) {
 // handle error
 }
}
 return 0;
}