#include "Fixed.hpp"

Fixed&  Fixed::operator++()
{
    ++raw;
    return *this;
}

Fixed  Fixed::operator++(int)
{
    Fixed tmp = *this;
    raw++;
    return tmp;
}


Fixed&  Fixed::operator--()
{
    --raw;
    return *this;
}

Fixed  Fixed::operator--(int)
{
    Fixed tmp = *this;
    raw--;
    return tmp;
}