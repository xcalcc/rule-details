int *a;
int *b;

int func(void)
{
    int var1 = 10;
    int var2 = 20;
    a = &var1;
    b = &var2;
    a = b;
}