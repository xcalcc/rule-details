int   i = 0xa;    // non-compliant
short j = 0x4b;   // non-compliant
short k = 0x0f5c; // non-compliant


int foo(int i, short s1, short s2)
{
  return i + (int)j + (int)k;
}