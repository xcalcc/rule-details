// Most simple forms of recursion.
// if first call to func_recurse is: func_recurse(p_glbl, 6)
// this code segment will recurse and get into an infinite loop

int global = 5;
static *p_glbl = &global;
int func_recurse(int *p, int i)
{
    if ((p != 0) && (*p != i))
    {
        return func_recurse(p, 2); // calls itself directly
    }
    return 0;
}