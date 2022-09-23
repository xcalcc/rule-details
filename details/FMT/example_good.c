
foo(int a, int guard)
{  int x = 0;
  int int_result = 0;
  if (guard != 0) int_result = a * x;

  // number of actuals match that with format statement
  printf("result %d is %x truncated", int_result, int_result); 
  return 0;
}

