int array[10][20];

int mlk_three_indirect(int val)
{
  int j = val;
  int *p = &j;
  int **p_2, **r_2;
  int *p_2_array = &array[*p][0];
  int ***p3;

  // ... 
  p_2 = &p;
  
  // ...
  array[val][0] = **p_2;
  
  //...
  r_2 = &p_2_array;
  
  // ...
  p3 = &r_2;
  
  // ... 
  return ***p3;

}