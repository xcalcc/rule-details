#include <stdio.h>
#include <stdlib.h>

FILE* f_open(char* fname, FILE *fptr)
{
    fptr = fopen(fname, "r");
    return fptr;
}

char *sanitize(char *fname);


int main(int argc, char **argv[])
{
  FILE *fptr;
  
  if (!verify_file(sanitize(*argv[1]))) {  // sanitize file name first
    printf("error
");
    exit(1);
  }
  else {
    fptr = f_open(*argv[1], fptr);
  }
  printf("File opened %x
", fptr);
  // ...
  exit(0);
}