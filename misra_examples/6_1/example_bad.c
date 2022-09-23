
struct str {
  int a:2;
  unsigned int b1:2;
};


struct str1 {
  unsigned int b1:2;
  short b:2;
};

int foo()
{
  printf("finished\n");
  return 0;
}
