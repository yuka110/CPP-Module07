#include "iter.hpp"
#include "cmath"

int main(){
    std::string str = "hello";
    std::cout << "original: " << str << std::endl;
    ::iter(&str, 5, toupper);
    std::cout << "After iter: " << str << std::endl;


    double doubles[6] {1024.0, 64.00, 1, 0, 25, 81.0};
    std::cout << "original: ";
    for (int i = 0; i < 6; i++)
        std::cout << doubles[i] << " ";
    ::iter(&doubles, 6, sqrt);
    std::cout << "\nAfter iter: ";
    for (int i = 0; i < 6; i++)
        std::cout << doubles[i] << " ";
    std::cout << std::endl;
}