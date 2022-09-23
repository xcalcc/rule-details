void func() {
    for (int i = 0; i < 5; i++) {
        // Multiple early termination
        if (i == 2) {
            break;
        }
        // Multiple early termination
        else if (i == 2) {
            goto EXIT;
        }
        else {
            // Continue
        }
    }

    EXIT:
        ;
}