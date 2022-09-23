#include <alloca.h>
#include <stdlib.h>

void extern fill(char *data, int num);
void dangling_ptr_func(int sz, char *data_buf)
{
  data_buf = alloca(sz);
  fill(data_buf, sz);  // fill data buffer
  // more manipulation of data buffer ...


  // free does not really free data_buf
  // data_buf points to memory that is out of scope after
  free(data_buf);
  return;
}