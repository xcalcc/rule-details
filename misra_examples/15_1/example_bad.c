void func() {
    int num = 0;

    P1:
    num += 1;

    // Using the goto statement can cause confusion
    goto P1;
}