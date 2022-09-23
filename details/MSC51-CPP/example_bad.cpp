#include <stdlib.h>
#include <iostream>
#include <vector>

#define MAX_VALUE 100
#define VECTOR_SIZE 10
int main()
{ 
 std::vector<int> vec;
 
 for(int i = 0 ; i < VECTOR_SIZE; ++i) {
 vec.push_back(rand()%MAX_VALUE); // using the same initial seed 
 }

 // printing
 for(int j=0 ; j < vec.size() ; ++j ) {
 std::cout << vec[j] << \" \";
 }
 std::cout << '\
';
}