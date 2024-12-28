#ifndef harl_h
#define harl_h

#include <string>

class Harl {
    public:
        typedef void   (Harl::*ptr)(void);
        ptr a[4];

        void    complain(std::string level);
        void    extra(int);

        Harl();
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

#endif