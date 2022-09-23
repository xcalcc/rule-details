typedef union UnionT
{
  int    i;
  char   c;
  double d;
} UNIONT;

typedef struct MyData
{
  int     tag;
  UNIONT  u;
} MYDATA;


int foo(char ch_param)
{
   MYDATA md;

   md.tag = 0;  // say, 0 for int, 1 for char, 2 for double
   md.u.c = ch_param;

   return md.u.i; // return is undefined
}