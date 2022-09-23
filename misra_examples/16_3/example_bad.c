int loop_cnt_ex2(int count, int input)
{
  int idx = count;
  int ret = 0;
  
  switch (input) {
    
  default:   // default at beginning of switch
    
  case 0:
    idx--;
    break;
    
  case 1:    // this case at end of switch has no break
    idx++;

  }
  
  // ...
  return ret;
}