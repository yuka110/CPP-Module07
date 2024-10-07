#include "Array.hpp"

int main(){
    Array<int> integers(4);
    Array<std::string> strings;

    for (unsigned int i = 0; i < integers.size(); i++) 
        integers.getArr()[i] = i * 10;
    std::cout << "int array inside: ";
    for (unsigned int i = 0; i < integers.size(); i++) 
        std::cout << integers.getArr()[i] << " ";
    std::cout << std::endl;
    std:: cout << "string array inside: ";
    for (unsigned int i = 0; i < strings.size(); i++) 
        std::cout << strings.getArr()[i] << " ";
    std::cout << std::endl;
    std:: cout << "string array inside: ";
    for (unsigned int i = 0; i < strings.size(); i++) 
        std::cout << strings.getArr()[i] << " ";
    std::cout << std::endl;
    return 0;
}