int foo(int *p_int)
{
  int ret = 0;
  int i;
  
  while (p_int) {   // p_int is a pointer
    i = *p_int;
    
    if (i) {   // i is int, not boolean
      ret++;
    }

    ret++;
    p_int--;
  } 
  return ret;
}