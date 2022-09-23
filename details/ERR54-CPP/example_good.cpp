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
void bar() {
 std::cout << "bar" << std::endl;
}
 
void f()
{
 try {
 foo();
 bar();
 // ...
 }
 catch (Derived1 &) {
 // ...
 }
 catch (Base &)
 {
 // ...
 }
 try {
 foo();
 bar();
 // ...
 }
 catch (Derived2 &) {
 // ...
 }
 catch (Base &) //
 {
 // ...
 }
 
 try {
 foo();
 bar();
 // ...
 }
 catch (Derived1 *) {
 // ...
 }
 catch (Base *) { //
 // ...
 }
}
 
int main() {
 f();
}