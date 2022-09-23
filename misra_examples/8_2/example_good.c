
extern int functionX(int a, char *c);  /* named parameters */

int foo(int a1, char *c2)
{
  int i = functionX(a1, c2);
  if (i != 0)
    return i;
  return -1;
}


int bar(int b1, char *b2)    /* declaration in prototype form */
{
  int i = functionX(b1, b2);
  if (i != 0)
    return i;
  else
    return -1;
}
