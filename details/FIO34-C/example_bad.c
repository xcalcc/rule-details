#include <stdio.h>

void read_char(void)
{
 FILE *fp = fopen("/tmp/myfile", "+r");
 // check fp valid
 // ...

 int c = getc(fp);
 while (c != EOF) // this check does not guarantee read has reached end of file
 {
 putchar(c); // echo what is read in
 c = getc(fp);
 }
}