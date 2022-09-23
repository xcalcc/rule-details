void arr1 (int array[4]) {
    // Do something
}

void func(int num){
    int arr[3] = {1, 2, 3};

    // Array size does not match prototype
    arr1(arr);
}