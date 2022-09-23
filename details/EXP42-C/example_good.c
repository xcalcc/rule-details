struct s {
    char c;
    int i;
    char buffer[10];
};

// all fields of struct s are compared to avoid comparing padding bytes
void compare(const struct s *left, const struct s *right) {
    if ((0 == memcmp(left, right, sizeof(struct s))) &&
        (left->c == right->c) &&
        (left->i == right->i) &&
        (left && right)) {
        /* ... */
    }
}