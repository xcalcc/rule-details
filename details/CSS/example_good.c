// Assume that stack size is 8 bytes for parameter, 4 bytes for return value (assume) 32 bit ABI
// Assume we limit the size of stack to that of 32 bytes

int func_callee(int *a, int i)
{
    return a[i];
}

// stack size is 0 byte (no parameter), 12 byte for local variable, 4 bytes for return value
int func_caller()
{
    int a[3] = {0, 1}, b;
    b = func_callee(a, 1);
    // callee stack size if 12 bytes
    return 0;
}

// total stack size for the call sequence func_caller -> func_callee is 28 bytes
// (assume ABI specifies all parameters uses stack and not register)