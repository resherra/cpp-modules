#ifndef fixed_h
#define fixed_h


class Fixed
{
    public:
        int getRawBits( void ) const;
        void setRawBits( int const raw );

        Fixed&  operator=(Fixed& fixed);

        Fixed();
        Fixed(Fixed& Fixed);
        ~Fixed();
    private:
        int num;
        static const int n_fractional_bits;
};

#endif