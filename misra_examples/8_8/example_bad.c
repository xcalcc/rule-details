// this example will cause compilation error
extern int func (int a); // declare external scope

static int func (int a) // function with internal linkage declared
{
    return a;
}