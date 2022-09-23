#include <stdint.h>

typedef char    Letter;  
typedef Letter* pLetter;
  
class Xlass_With_non_POD    
{
public:
  Letter  c;  
  pLetter p;
};

struct Struct_with_POD // declared as struct
{
  char*   pc;
};


class Class_with_POD // declared as class
{
public:              // POD declared as public, not conformed to M11-0-1
  int8_t   c;        
  char*   pc;
private:
  int32_t  x;        // data member is private
};