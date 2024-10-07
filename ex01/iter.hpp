#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>


template <typename A, typename B, typename C>
void    iter(A* addr, B len, C (*func)(C))
{
    long long i;
    for (i = 0; i < len; i++)
        (*addr)[i] = func((*addr)[i]);
}


#endif