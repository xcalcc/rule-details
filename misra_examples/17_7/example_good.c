extern int func_ret_int(int, int);

void bar(int n, int m)
{
  if (n > 0) {
    n += func_ret_int(n, m);
  }
  else {
    (void)func_ret_int(m, m); // func return value ignored
  }
}
