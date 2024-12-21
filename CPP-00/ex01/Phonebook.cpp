#include "PhoneBook.hpp"
#include <iomanip>

void    PhoneBook::add(int i)
{
    contacts[i] = tmp;
}

std::string trunc(std::string str)
{
    if (str.size() > 10)
        return str.substr(0, 9) + '.'; 
    return str;
}

void    PhoneBook::display()
{
    int i = 0;
    while (i < 8)
    {   
        Contact contact = contacts[i];
        if (!contact.get_first_name().size())
            break;
        std::cout << std::setw(10) << i << "|";
        std::cout << std::setw(10) << trunc(contact.get_first_name()) << "|";
        std::cout << std::setw(10) <<  trunc(contact.get_last_name()) << "|";
        std::cout << std::setw(10) << trunc(contact.get_nickname())  << std::endl;
        i++;
    }
}

void    PhoneBook::search(unsigned int i)
{
    Contact contact = contacts[i];
    if (!contact.get_first_name().size())
    {
        std::cout << "The entry you provided is empty! Enter one of these commands: ADD, SEARCH or EXIT." << std::endl; 
        return;
    }
    std::cout << "Here's the contact infos related to this index: " << std::endl;    
    std::cout << "First name: " + contact.get_first_name() << std::endl;
    std::cout << "Last name: " + contact.get_last_name() << std::endl;
    std::cout << "Nickname: " + contact.get_nickname() << std::endl;
    std::cout << "Phone number: " + contact.get_phone_number() << std::endl;
    std::cout << "Secret: " + contact.get_secret() << std::endl;
}  

void    PhoneBook::collect_infos(std::istream& in)
{
    tmp.set_first_name(in);
    tmp.set_last_name(in);
    tmp.set_nickname(in);
    tmp.set_phone_number(in);
    tmp.set_secret(in);
}





