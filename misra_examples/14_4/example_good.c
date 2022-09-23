#define NULL 0

int foo(int *p_int)
{
  int ret = 0;
  int i;
  
  while (p_int != NULL) {   // p_int is a pointer
      i = *p_int;
      
      if (i != 0) {   // i != 0 is a boolean expression
	ret++;
      }
    ret++;
    p_int--;
    if (ret > 5)
    {
      break;
    }
  } 
  return ret;
}
