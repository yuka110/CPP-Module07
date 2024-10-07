#ifndef WHATEVER_HPP
# define WHATEVER_HPP

#include <iostream>
#include <string>

#define BOLD "\033[1m"
#define RES "\033[0m"
#define RED "\033[31m"
#define GRE "\033[32m"
#define YEL "\033[33m"
#define BLU "\033[34m"
#define MAG "\033[35m"
#define CYA "\033[36m"
#define WHI "\033[37m"

template <typename T> 
T max(T x, T y){
    return (x > y) ? x : y;
}

template <typename T> 
T min(T x, T y){
    return (x < y) ? x : y;
}

template <typename T> 
void swap(T& x, T& y){
    T tmp = x;
    x = y;
    y = tmp;
}

#endif