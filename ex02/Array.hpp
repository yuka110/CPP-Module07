#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>

template <typename T> 
class Array{
private:
    T* arr;
public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(const Array& a);
    Array& operator=(Array& a);

    unsigned int size(){

    }
};

template <typename T>
Array<T>::Array(){
    arr = new T;
}

template <typename T>
Array<T>::Array(unsigned int n){
    arr = new T[n];
}

template <typename T>
Array<T>::~Array(){
    delete[] arr;
}

template <typename T>
Array<T>::Array(){

}

#endif