#include <stdio.h>

int open_file(const char *fname)
{
 FILE *fp = fopen(fname, "+r");
 if (fp == NULL) return -1;

 // program continues
 return 0; // file is not properly closed on return

}