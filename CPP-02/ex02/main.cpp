#include "Fixed.hpp"
#include <iostream>


int main( void ) {
    Fixed a;
    Fixed b(Fixed(10) * Fixed(12));
    Fixed c = Fixed::max(a, b);
    std::cout << c << std::endl;
    // Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    // std::cout << a << std::endl;
    // std::cout << ++a << std::endl;
    // std::cout << a << std::endl;
    // std::cout << a++ << std::endl;
    // std::cout << a << std::endl;
    // std::cout << b << std::endl;
    // std::cout << Fixed::max(a, b) << std::endl;
    return 0;
}