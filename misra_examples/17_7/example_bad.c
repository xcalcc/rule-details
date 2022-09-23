extern int func_ret_int(int);

void bar(int n, int m)
{
  if (n > 0) {
    n += func_ret_int(n);
  }
  else {
    func_ret_int(m); // func return value ignored
  }
}