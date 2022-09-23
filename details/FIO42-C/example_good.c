#include <stdio.h>

int open_file(const char *fname)
{
 FILE *fp = fopen(fname, "+r");
 if (fp == NULL) return -1;

 // program continues

 if (fclose(fp) == EOF) {
 // handle error
 ...
 }
 return 0; // file is properly closed on return

}