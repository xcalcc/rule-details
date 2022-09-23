#include <stdint.h>

typedef char    Letter;  
typedef Letter* pLetter;
  
class Class_Without_POD    
{
public:
  Letter  c;  
  pLetter p;
};

class Class_with_POD
{
public:
  int8_t   c;         // POD has no default constructor
  char*   pc;  
};