int foo();
int bar();

int f1(int x)
{
    if (x > 15 && x > 16) // x>16 will subsume x>15
        foo();
}

int f2(int x)
{
    if (x > 16 && x > 15) // x>16 implies x>15, hence x>15 is redundant
        foo();
}

int f3(int x)
{
    if (x > 16)
    {
        foo();
        if (x > 15) // x>16 implies x>15, hence this check is unnecessary
            bar();
    }
}

int f4(int x)
{
    if (x > 15)
    {
        foo();
        if (x > 16) // x>15 does not imply x>16, this check is not redundant
            bar();
    }
}