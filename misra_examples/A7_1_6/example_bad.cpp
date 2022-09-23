#include<string>

// defining aliases with typedef
typedef unsigned int uint_t;
typedef int *p;
typedef int f( void );

// this example would raise compilation error
template <typename T> 
typedef std::vector<T> myvector<T>;
struct Func 
{ 
    typedef T (*result)(T n); 
};