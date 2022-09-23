int *assign()
{
    int *c;
    c = 1;
    return &c;
}

int foo()
{
    int *a;
    a = assign(); // return a stack address and assign to a
    printf("assigned value: %d", a); // use dangling pointer
    return 0;
}