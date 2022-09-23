int foo(int a, int guard)
{
    int x = 0;
    int result = 0;
    if (guard != 0)
    {
        result = a * x;
    }
    foo(result, guard); // no parameters missing
    return 0;
}