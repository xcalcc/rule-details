void assign(int input)
{
    int a = 0; // dead code
    a = input; // result of \"a = 0\" will be nullified by this statement
    printf("a value: %d", a);
}