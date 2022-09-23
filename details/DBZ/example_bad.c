int divide(int num, int denom)
{
    // denom could be of value 0, and dividing 
    // by 0 results in undefined behavior
    return num / denom;
}

int func(void)
{
    return divide(3, 0); // non-compliant
}