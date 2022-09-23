void func() {
    int num = 0;

    P1:
    num += 1;

    // Non-compliant as back jump is allowed
    goto P1;
}
