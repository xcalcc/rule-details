void func() {
    int num = 0;

    P1:
        if (num == 5) {
        P2:
            num += 1;
        }

    // Jumping into the reference label outside of the nested block
    goto P1;
}
