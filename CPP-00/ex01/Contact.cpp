#include "PhoneBook.hpp"

void    Contact::set_first_name(std::istream& in)
{
    std::cout << "First name: ";
    custom_get_line(in, first_name);
}

void Contact::set_last_name(std::istream& in)
{
    std::cout << "Last name: ";
    custom_get_line(in, last_name);
}

void Contact::set_nickname(std::istream& in)
{
    std::cout << "Nickname: ";
    custom_get_line(in, nickname);
}

void Contact::set_phone_number(std::istream& in)
{
    std::cout << "Phone number: ";
    custom_get_line(in, phone_number);
}

void Contact::set_secret(std::istream& in)
{
    std::cout << "Secret: ";
    custom_get_line(in, secret);
}

std::string   Contact::get_first_name()
{
    return first_name;
}

std::string Contact::get_last_name()
{
    return last_name;
}

std::string Contact::get_nickname()
{
    return nickname;
}

std::string Contact::get_phone_number()
{
    return phone_number;
}

std::string Contact::get_secret()
{  
    return secret;
}