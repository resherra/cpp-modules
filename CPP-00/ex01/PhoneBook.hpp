#ifndef phonebook_h
#define phonebook_h

#include "Contact.hpp"
#include <cstdlib>

class PhoneBook {
    public:
        void    add(int);
        void    display();
        void    search(unsigned int);
        void    collect_infos(std::istream&);
    private:
        Contact tmp;
        Contact contacts[8];
};

#endif