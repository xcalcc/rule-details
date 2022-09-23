int main() {
    int a, b;

    // assigning the variable a to equal b leads to unexpected behaviour
    if (a = b) {
        printf("failure");
    }
}
