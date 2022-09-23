// suppose first call to func_recurse is (p_glbl, 6)

const int MAXIMUM_LIMIT = 100;
int global = 5;
static *p_glbl = &global;
int func_recurse(int *p, int i)
{
    if (i > MAXIMUM_LIMIT) {
			return 0;
		}
		
		if (i != 0) {
        // recursion bottoms out when second argument tends to 0
        return func_recurse(p_glbl, i - 1);                                           
    }
    return 0;
}