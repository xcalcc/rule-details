int foo(int i)
{
  int ret = i;
  
  if (i == 0)  // conditional with non-compound statement
    return i++;
  else if (i < 0) 
    return -i;
  else 
    ; // empty else


  // loop with one non compound statement in body
  while (i != 0) 
    ret--;
  
  return ret;
}