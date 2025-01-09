#include "Fixed.hpp"

Fixed&  Fixed::min(Fixed& a, Fixed& b)
{
    if (a < b)
        return a;
    return b;
}

const   Fixed&  Fixed::min(const Fixed& a, const Fixed& b)
{
    if (a < b)
        return a;
    return b;   
}

Fixed&  Fixed::max(Fixed& a, Fixed& b)
{
    if (a > b)
        return a;
    return b;
}

const   Fixed&  Fixed::max(const Fixed& a, const Fixed& b)
{
    if (a > b)
    {
        std::cout << a << std::endl;
        return a;        
    }
    std::cout << b << std::endl;
    return b;   
}