int assign(int *a)
{
    return *a; // dereference a
}

int main()
{
    int a = 100; // a is assigned as 100
    int b;
    b = assign(&a); 
    printf("value of b = %d", b);
    return 0;
}