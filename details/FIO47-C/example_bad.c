int foo(int a, int guard)
{
    int x = 0;
    int result = 0;
    if (guard != 0)
        result = a * x;

    // missing one parameter, and \"guard\" will have random value during execution at this point
    foo(result); 
    return 0;
}