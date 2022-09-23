void func() {
    int num = 0;

    // No back jump in the code
    goto P1;

    P1:
    num += 1;
}
