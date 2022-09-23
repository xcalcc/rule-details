extern int bar(int);

int assign(int* a)
{
 int i = bar(*a) // dereference a
 return i;
}

int foo(void)
{
 int *p = 0; // p as a pointer has been initialized to 0 (null)
 assign(p);
}