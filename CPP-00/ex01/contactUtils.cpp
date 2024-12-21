#include "PhoneBook.hpp"

static bool    isempty(std::string arg)
{
    int size = arg.size();
    int i = 0;
    while (i < size)
    {
        if (!std::isspace(arg[i]))
            return false;
        i++;
    }
    return true;
}

void custom_get_line(std::istream& in, std::string& arg)
{
    if (!std::getline(in, arg))
    {
        std::cout << std::endl;
        exit(1);
    }
    if (isempty(arg))
    {
        throw -1;
    }
}