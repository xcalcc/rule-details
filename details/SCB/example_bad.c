int foo();
int a, b;

int f1(int x)
{
    if (a) 
    {
        foo();
    } 
    else 
    {
        foo();
    }
}

int f2(int x)
{
    return x ? foo() : foo();  // equivalent to above
}

int f3(int x)
{
    if (x);  // both then and else blocks are empty
}
