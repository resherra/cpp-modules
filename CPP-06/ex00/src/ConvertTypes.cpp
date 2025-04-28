#include "../headers/ScalarConverter.hpp"

static int is_printable(int value)
{
    return (value >= 32 && value <= 126);
}

void convert_char(std::string str, Types type)
{
    std::cout << "char: ";

    int value = std::atoi(str.c_str());
    if (type == INT || type == FLOAT || type == DOUBLE)
    {
        if (is_printable(value))
            std::cout << static_cast<char>(value);
        else
            std::cout << "Non displayable";
    }
    else if (type == NAN || type == INF)
    {
        std::cout << "impossible";
    }
    else
        std::cout << str[0];
    std::cout << std::endl;
}

void convert_int(std::string str, Types type)
{
    std::cout << "int: ";
    if (type == CHAR)
        std::cout << static_cast<int>(str[0]);
    else if (type == FLOAT || type == DOUBLE)
        std::cout << static_cast<int>(std::atof(str.c_str()));
    else if (type == NAN || type == INF)
    {
        std::cout << "impossible";
    }
    else
        std::cout << std::atoi(str.c_str());
    std::cout << std::endl;
}

void convert_float(std::string str, Types type)
{
    std::cout << "float: ";
    if (type == CHAR)
        std::cout << static_cast<int>(str[0]) << ".0f";
    else if (type == INT)
        std::cout << std::atoi(str.c_str()) << ".0f";
    else if (type == INF)
    {
        if (str[0] == '+')
            std::cout << "+";
        std::cout << std::fixed << std::setprecision(1) << std::atof(str.c_str()) << "f";
    }
    else
        std::cout << std::fixed << std::setprecision(1) << std::atof(str.c_str()) << "f";
    std::cout << std::endl;
}

void convert_double(std::string str, Types type)
{
    std::cout << "double: ";
    if (type == CHAR)
        std::cout << static_cast<int>(str[0]) << ".0";
    else if (type == INT)
        std::cout << std::atoi(str.c_str()) << ".0";
    else if (type == INF)
    {
        if (str[0] == '+')
            std::cout << "+";
        std::cout << std::atof(str.c_str());
    }
    else
        std::cout << std::atof(str.c_str());
    std::cout << std::endl;
}