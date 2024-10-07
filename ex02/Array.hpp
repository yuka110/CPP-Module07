#ifndef ARRAY_H
# define ARRAY_H

#include <iostream>
#include <string>

template <typename T> 
class Array{
private:
    T* arr;
    int len;
public:
    Array();
    Array(unsigned int n);
    ~Array();
    Array(const Array& a);
    Array<T>& operator=(Array<T>& a);

    T* getArr(void){
        return (arr);
    }
    
    unsigned int size(){
        return len;
    }
};

template <typename T>
Array<T>::Array(){
    arr = new T[0];
    len = 0;
}

template <typename T>
Array<T>::Array(unsigned int n){
    arr = new T[n];
    len = n;
}

template <typename T>
Array<T>::~Array(){
    delete[] arr;
}

template <typename T>
Array<T>::Array(const Array& a){
    operator=(a);
}

template <typename T>
Array<T>& Array<T>::operator=(Array<T>& a){
    if (this == a)
        return this;
    delete[] arr;
    this->arr = new T[a.size()];
    for (int i = 0; i < a.size(); i++)
        this->arr[i] = a.arr[i];
    return *this;
}

#endif