#ifndef easyfind_hpp
#define easyfind_hpp

#include <iostream>
#include <algorithm>

class Excep: public std::runtime_error
{
    public:
        Excep(const std::string& what): std::runtime_error(what) {}
};

template <typename T>
void    easyfind(T& param, int x)
{
    if (std::find(param.begin(), param.end(), x) == param.end())
        throw Excep("Value not found");
    else
        std::cout << "Value found!" << std::endl;
}

#endif