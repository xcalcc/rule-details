void func() {
    for (int i = 0; i < 5; i++) {
        // Only use either break or goto, don't use both
        if (i == 2) {
            break;
        }
        else {
            // Continue
        }
    }

    EXIT:
        ;
}