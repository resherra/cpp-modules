#ifndef iter_hpp
#define iter_hpp

#include <iostream>
#include <cstdlib>

template <typename T>
void iter(T *arr, int len, void (*func)(T &))
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
}

template <typename T>
void iter(const T *arr, int len, void (*func)(const T&))
{
    for (int i = 0; i < len; i++)
        func(arr[i]);
}

template <typename T>
void increment(T &i)
{
    i += 100;
    std::cout << i << std::endl;
}

template <typename T>
void print(const T &i)
{
    std::cout << i << std::endl;
}

#endif