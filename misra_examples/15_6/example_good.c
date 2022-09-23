int foo(int i)
{
  int ret = i;
  
  if (i == 0) {
    return i++;
  }
  else if (i < 0) {
    return -i;
  }
  else {
    ; // empty else
  }

  // loop with compound statement
  while (ret < 0) {
    ret++;
  }
  return ret;
}