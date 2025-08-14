#include "../headers/PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(int ac): length(ac) {}

static int is_int(std::string str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (std::isdigit(str[i]) == 0)
        {
            return 0;
        }
        i++;
    }
    return 1;
}

void PmergeMe::readVec()
{
    for (std::vector<int>::size_type i = 0; i < vec.size(); i++)
        std::cout << vec[i] << std::endl;
}

void PmergeMe::loadData(char **av)
{
    for (int i = 1; i < length; i++)
    {
        int num = 0;
        if (!is_int(av[i]))
            throw std::runtime_error("Error: Invalid set!");
        num = std::stoi(av[i]);
        if (num < 0)
            throw std::runtime_error("Error: Can't process negative numbers");
        vec.push_back(num);
    }
}