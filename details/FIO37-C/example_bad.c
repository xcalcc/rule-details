#include <stdio.h>

#define BUF_SZ 1024

void read_string(void)
{
 char buf[BUF_SZ];
 FILE *fp = fopen("/myfile", "+r");
 // check fp valid
 // ...

 if (fgets(buf, BUF_SZ, fp) != 0) {
 // if the first character of buf is '\\0', a random meaningless large number will be printed
 printf("Size of string read = %d", strlen(buf)-1);
 }

}