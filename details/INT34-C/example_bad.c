// Fails to check that right operand is less than the the precision of left operand
int func(unsigned int a, unsigned int b)
{
   unsigned int result = a << b;
   return result;
}