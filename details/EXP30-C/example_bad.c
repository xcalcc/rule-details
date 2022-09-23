int func_eval(int i, int j) {
    return i + j;
}

int a(void) {
    num = num << 2;
    return num;
}

int b(void) {
    if (num & 1)
        num = num * 2;
    return num;
}

int test(int num) {
    // order of evaluation for a() and b()
    // is not specified, hence val is not deterministic
    int val = func_eval(a(), b());
    return val;
}