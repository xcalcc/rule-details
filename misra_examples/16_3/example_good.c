int loop_cnt(int count, int input)
{
  int idx = count;
  int ret = 0;
  
  switch (input) {
  case 0:
    idx--;
    ret++;
    break;
    
  case 1:
    idx++;
    ret++;
    break;
    
  default:   // default with a break statement
    break;
  }
  
  // ...
  return ret;
}