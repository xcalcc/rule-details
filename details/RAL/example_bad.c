extern void bar(int);

int *foo()
{
    int c = 0;
    bar(c);
    return &c; //return a local address to caller
}
