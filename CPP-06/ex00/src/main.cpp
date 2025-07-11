#include "../headers/ScalarConverter.hpp"

// [examples]

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert nanf
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert +inf
// char: impossible
// int: impossible
// float: +inff
// double: +inf

// ./convert +inff
// char: impossible
// int: impossible
// float: +inff
// double: +inf

// ./convert -inff
// char: impossible
// int: impossible
// float: -inff
// double: -inf

// ./convert -inf
// char: impossible
// int: impossible
// float: -inff
// double: -inf

// ./convert c
// char: c
// int: 99
// float: 99.0f
// double: 99.0

// ./convert 55
// char: 7
// int: 55
// float: 55.0f
// double: 55.0


// ./convert 77.7
// char: M
// int: 77
// float: 77.7f
// double: 77.7

// ./convert 88.8f
// char: X
// int: 88
// float: 88.8f
// double: 88.8

// ./convert 0
// char: Non displayable
// int: 0
// float: 0.0f
// double: 0.0

// ./convert nan
// char: impossible
// int: impossible
// float: nanf
// double: nan

// ./convert 42.0f
// char: '*'
// int: 42
// float: 42.0f
// double: 42.0

int main(int ac, char **av)
{
    if (ac == 2)
        ScalarConverter::convert(av[1]);
    else
        std::cerr << "./convert [input]" << std::endl;
}