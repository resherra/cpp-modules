#ifndef fixed_hpp
#define fixed_hpp

#include <iostream>
#include <cmath>

class Fixed
{
    public:
        //functios
        int getRawBits( void ) const;
        void setRawBits( int const raw );
        float toFloat( void ) const;
        int toInt( void ) const;

        Fixed& operator=(const Fixed&);
        
        Fixed();
        Fixed(const int);
        Fixed(const float);
        Fixed(const Fixed&);
        ~Fixed();
    private:
        int raw;
        static const int n_fractional_bits;
};

std::ostream& operator<<(std::ostream& os, const Fixed& fixed);

#endif