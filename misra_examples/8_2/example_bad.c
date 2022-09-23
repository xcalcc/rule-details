
extern int functionX(int, char *);  /* parameters without name */

int foo(int a1, char *c2)
{
  int i = functionX(a1, c2);
  if (i != 0)
    return i;
  return -1;
}


int bar(b1, b2)
int b1;
char *b2;
{
  int i = functionX(b1, b2);
  if (i != 0)
    return i;
  else
    return -1;
}
