#include <cstdio>
#include <cstdlib>
#include <new>
#include <iostream>

extern void* cust_allocator(std::size_t);

class Person {
 int age; 
 std::string name;
 
public:
 Person(){}
 void* operator new(size_t s)
 {
 if (((void*) ret = cust_allocator) == 0)
 return ret;
 return cust_allocator(s);
 }
};