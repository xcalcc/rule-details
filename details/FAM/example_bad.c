int foo(int a, int guard)
{
    a++;
    guard++;
    return 0;
}

int func(void)
{
    int t = 1;
    /* 
    missing one parameter, and \"guard\" will have 
    random value during execution at this point;
    compilation error would be raised here
    */
    foo(t);
    return 1;
}