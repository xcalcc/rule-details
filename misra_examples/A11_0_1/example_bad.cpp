#include <stdint.h>

typedef char    Letter;  
typedef Letter* pLetter;
  
struct Struct_With_non_POD    
{
public:
  Letter  c;  
  pLetter p;
};