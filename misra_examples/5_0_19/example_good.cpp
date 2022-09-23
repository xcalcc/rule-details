int array[10][20];

// this example is equivalent to the "avoid" example
// 
int mlk_three_indirect(int val)
{
  int j = val;
  int *p = &j;
  int **p_2, **r_2;
  int *p_2_array = &array[*p][0];
  int p3;
  
  array[val][0] = val;
  p3 = array[val][0];
  return p3;

}