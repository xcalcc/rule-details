void func()
{
    int arr[3] = {0, 1, 2};

    int *ptr;
    ptr = arr;

    * (ptr + 1) = 0; // Using + in pointer arithmatic is confusing
    ptr = ptr + 2; // non-compliant
}