struct s {
    char c; // padding added by compiler to align int
    int i;
    char buffer[10];
};

// the memcmp() function compares padding bytes,
// which are unspecified since it has random content
void compare(const struct s *left, const struct s *right) {
    if (0 == memcmp(left, right, sizeof(struct s)) &&
       (left && right)) {
        /* ... */
    }
}
