#include <stdio.h>

#define BUF_SZ 1024

void read_string(void)
{
 char buf[BUF_SZ];
 FILE *fp = fopen("/myfile", "+r");
 // check fp valid
 // ...

 if (fgets(buf, BUF_SZ, fp) != 0) {
 // replace newline character if it is there
 char *pchar = strchr(buf, '');
 if (pchar) *pchar = '\\0';

 printf("Size of string read = %d", strlen(buf)-1);
 }

}