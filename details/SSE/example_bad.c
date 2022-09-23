int foo();
int a, b;

int f3(int x, int *p)
{
    if (*p && x) // both expressions are not the same 
    {
        foo();
    }  
}

int f4(int x, int y)
{
    if ((x + y++) && (y + x)) 
    {
        foo();
    }
        
}