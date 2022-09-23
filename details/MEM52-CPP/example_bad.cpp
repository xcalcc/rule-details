#include <cstring>
#include <new>

 void f(std::size_t size) noexcept {
int *var = new int[size];
var[0]=5;
delete[] var;
}