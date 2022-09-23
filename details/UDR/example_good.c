void assign(int *c)
{
    *c = 1;
    return;
}

int foo()
{
    int a;
    assign(&a); 
    printf("assigned value: %d", a); // pointer is not dangling
    return 0;
}

