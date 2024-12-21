#ifndef contact_h
#define contact_h

#include <string>
#include <iostream>

class Contact
{
    public:
        void set_first_name(std::istream&);
        void set_last_name(std::istream&); 
        void set_nickname(std::istream&);
        void set_phone_number(std::istream&);
        void set_secret(std::istream&);

        std::string get_first_name(); 
        std::string get_last_name();
        std::string get_nickname();
        std::string get_phone_number();
        std::string get_secret();

    private:
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string secret;
};

void custom_get_line(std::istream& in, std::string& arg);



#endif