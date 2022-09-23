int loop_cnt(int count, int input)
{
  int idx = count;
  
  switch (input) {
    
  case 0:
    idx--;
    break;
    
  default:  // default in between case statements
    break;
    
  case 1:
    idx++;
    break;    

  }
  
  // ...
  return idx;
}


int loop_cnt_ex2(int count, int input)
{
  int idx = count;
  
  switch (input) {
    
  // missing default statement in begin nor end 
    
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