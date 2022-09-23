foo(int a, int guard)
{
  int x = 0;
  int int_result = 0;
  if (guard != 0) int_result = a * x;
  
  // The format string specified two values to be printed,
  // only one actual parameter is passed. The second output is unpredictable
  printf("result %d is %x truncated", int_result); 
  return 0;
}

