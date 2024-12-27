#ifndef harl_h
#define harl_h

#include <string>

class Harl {
    public:
        void    complain(std::string level);
        typedef void   (Harl::*ptr)(void);
        ptr a[4];
        
        Harl();
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

#endif