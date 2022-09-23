int foo();
int bar();

int f1(int x)
{
    if (x > 16) // removed x>15 since unnecessary
        foo();
}

int f2(int x)
{
    if (x > 16) // removed x>15 since unnecessary
        foo();
}

int f3(int x)
{
    if (x > 16)
    {
        foo();
        bar(); // bar will always run anyways so no need an if statement
    }
}

int f4(int x)
{
    if (x > 15)
    {
        foo();
        if (x > 16) 
        {
            bar();
        }
    }
}