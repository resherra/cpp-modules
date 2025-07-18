#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
    //vector
    std::vector<int> vec;
    vec.push_back(1);
    vec.push_back(2);
    vec.push_back(3);

    try
    {
        easyfind<>(vec, 1);
    }
    catch (char const* e)
    {
        std::cerr << e << '\n';
    }


    //list
    std::list<int> list;
    list.push_back(1);
    list.push_back(2);
    list.push_back(3);

    try
    {
        easyfind<>(list, 55);
    }
    catch (char const* e)
    {
        std::cerr << e << '\n';
    }
}

