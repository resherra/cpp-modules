#ifndef harl_h
#define harl_h

#include <string>

class Harl {
    public:
        void    complain(std::string level);
        void   (Harl::*ptr[4])(void);

        Harl();
    private:
        void    debug(void);
        void    info(void);
        void    warning(void);
        void    error(void);
};

#endif