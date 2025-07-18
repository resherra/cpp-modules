#ifndef easyfind_hpp
#define easyfind_hpp

#include <iostream>
#include <algorithm>

template <typename T>
void    easyfind(T& param, int x)
{
    if (std::find(param.begin(), param.end(), x) == param.end())
        throw "Value not found!";
    else
        std::cout << "Value found!" << std::endl;
}

#endif