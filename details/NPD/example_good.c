extern int bar(int);

int assign(int* a)
{
 int i;
 if (a != 0)
 i = bar(*a); // dereference a
 else {
 // handle error and exit gracefully (such exit program)
 exit(1);
 }
 return i;
}

int foo(void)
{
 int *p = 0; // p as a pointer has been initialized to 0 (null)
 assign(p);
}