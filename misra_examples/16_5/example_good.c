int loop_cnt(int count, int input)
{
  int idx = count;
  
  switch (input) {
  case 0:
    idx--;
    break;
    
  case 1:
    idx++;
    break;
    
  default:
    break;
  }
  
  // ...
  return idx;
}


int loop_cnt_ex2(int count, int input)
{
  int idx = count;
  
  switch (input) {
    
  default:   // default at beginning of switch
    break;
    
  case 0:
    idx--;
    break;
    
  case 1:
    idx++;
    break;

  }
  
  // ...
  return idx;
}