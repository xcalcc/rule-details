// Classes used for exception handling
#include <iostream>
 
class Base {};
 
class Derived1 : public Base {};
class Derived2 : public Derived1 {};
 
void foo();
void bar();
 
void foo()
{
 std::cout << "foo" << std::endl;
}
void bar()
{
 std::cout << "bar" << std::endl;
}
 
void f()
{
 try {
 foo();
 bar();
 // ...
 }
 catch (Base &) {
 // ...
 }
 catch (Derived1 &) { // violation here in Line 19
 // ...
 }
 try {
 foo();
 bar();
 // ...
 }
 catch (Base &) {
 // ...
 }
 catch (Derived2 &) // violation here in Line 31
 {
 // ...
 }
 
 try {
 foo();
 bar();
 // ...
 }
 catch (Base *) {
 // ...
 }
 catch (Derived1 *) { // violation here in Line 44
 // ...
 }
}
 
int main() {
 f();
}