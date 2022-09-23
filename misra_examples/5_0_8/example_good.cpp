void func_5_0_8(int si, short sh_j, float flt_k)
{
  short  local_sh = 0x1234;
  int    local_int1, local_int2;
  float  local_flt = 1.0;
  double local_dbl, local_dbl2;

  local_int1 = static_cast< int > (local_sh) + sh_j;  // compliant
  local_int2 = static_cast< int > (local_int1) + si;     // compliant

  local_dbl2 = static_cast<double> ((double)flt_k) + local_flt;  // compliant
  
}