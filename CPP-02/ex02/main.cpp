#include "Fixed.hpp"
#include <iostream>

void    print(std::string str)
{
    (void)str;
    // std::cout << str << "\n";
}

void    formatSmaller(const Fixed& a, const Fixed& b)
{
    std::cout << "a: " << a << " | b: " << b << " | a < b : " << (a < b) << '\n';
}

void    formatLarger(Fixed& a, const Fixed& b)
{
    std::cout << "a: " << a << " | b: " << b << " | a > b : " << (a > b) << '\n';
}

void    formatMax(const Fixed& a, const Fixed& b)
{
    std::cout << "a: " << a << " | b: " << b << " | max(a, b) : " << Fixed::max(a, b) << '\n';
}

void    formatMin(const Fixed& a, const Fixed& b)
{
    std::cout << "a: " << a << " | b: " << b << " | min(a, b) : " << Fixed::min(a, b) << '\n';
}


void    formatPlus(Fixed& a, const Fixed& b)
{
    std::cout << "a: " << a << " | b: " << b << " | a + b : " << a + b << '\n';
}

void    formatMinus(Fixed& a, const Fixed& b)
{
    std::cout << "a: " << a << " | b: " << b << " | a - b : " << a - b << '\n';
}

void    formatMult(Fixed& a, const Fixed& b)
{
    std::cout << "a: " << a << " | b: " << b << " | a * b : " << a * b << '\n';
}

void    formatDivide(Fixed& a, const Fixed& b)
{
    std::cout << "a: " << a << " | b: " << b << " | a / b : " << a / b << '\n';
}


int main( void ) {
    Fixed a(10);
    Fixed const b( Fixed( 5.05f ) * Fixed( 1 ) );

    // formatPlus(a, b);
    // formatMinus(a, b);
    // formatMult(a, b);
    formatDivide(a, b);
    // formatSmaller(a, b);
    // formatLarger(a, b);
    // formatMax(a, b);
    // formatMin(a, b);   

    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;

 
    return 0;
}