void abort();
void exit();
int foo();

int f1()
{
    foo(); // reachable
}
int f2()
{
    foo(); // reachable
}

int f3()
{
    foo();
    goto L;
    L:
        foo();  // reachable
}
