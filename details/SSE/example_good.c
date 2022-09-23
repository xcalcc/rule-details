int foo();
int a, b;

int f3(int x, int *p)
{
    if (*p && *p) // same sub-expression
        foo();
}

int f4(int x, int y)
{
    if ((x + y++) && (y + x)) // not same sub-expression due to y++
        foo();
}