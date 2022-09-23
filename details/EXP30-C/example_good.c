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
    // is specified since a() gets executed
    // before b() when declaring x first
    // before y, hence val is deterministic
    int x = a();
    int y = b();
    int val = func_eval(x, y);
    return val;
}