#include <iostream>
#include<string>

void func(void){
std::string id{\"id\"};
id += std::to_string(std::rand()%1000);
}