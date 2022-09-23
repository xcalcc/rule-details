int foo();
int a, b;

int f1(int x)
{
    foo(); // no dead code
}

int f2(int x)
{
    return foo();
}
