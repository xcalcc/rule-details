void func() {
    int num = 0;

    P1:
        if (num == 5) {
        P2:
            num += 1;
        }

    // Jumping into nested label is non-compliant
    goto P2;
}