#include "../headers/ScalarConverter.hpp"

void    ScalarConverter::convert(char* str)
{
    Types   type = get_type(str);

    if (type == UNDEFINED)
    {
        std::cerr << "Invalid input" << std::endl;
        return;
    }
    convert_char(str, type);
    convert_int(str, type);
    convert_float(str, type);
    convert_double(str, type);
}

ScalarConverter::ScalarConverter()
{
    std::cout << "testing constructor" << std::endl;
}