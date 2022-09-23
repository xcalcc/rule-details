int main() {
    int num1 = 25;
    int num2 = 0;

    // The & operator used with the equality expression leads to
    // logical errors.  If bitwise operator is intended, indicate
    // this with a parenthesized expression
    if (num1 & num2 == 0) {
        num2 = 10;
    }
}
