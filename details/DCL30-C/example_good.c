void func(void)
{
    // p is declared with same storage duration as c_str
    // so prevents p from taking indeterminate value
    // outside func()
    const char c_str[] = "Change";
    const char *p = c_str;
}

// p inaccessible outside scope of string c_str