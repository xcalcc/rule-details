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
private:
  char    c;         // will need interfaces to access and modify
  char*   pc;  
};