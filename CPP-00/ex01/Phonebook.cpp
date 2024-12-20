#include "PhoneBook.hpp"

int main()
{
    int i = 0;
    PhoneBook book;
    std::string input;
    std::string prompt = "Enter one of these commands: ADD, SEARCH or EXIT.";
    
    std::cout << prompt << std::endl;

    while (std::getline(std::cin, input))
    {
        try
        {
            if (input == "ADD")
            {
                book.collect_infos(std::cin);
                book.add(i % 8);
                std::cout << std::endl << "Contact added successfully! " + prompt << std::endl;
                i++;
            }
            else if (input == "SEARCH")
            {
                book.display();
                std::cout << "Enter an entry index: ";
                unsigned int index;
                std::cin >> index;
                if (!std::cin || index > 7)
                {
                    if (!std::cin && !std::cin.eof())
                    {
                        std::cout << "The index you provided is not valid! " + prompt << std::endl;
                        std::cin.clear();
                    }
                    else if (index > 7)
                        std::cout << "The index you provided is out of range! " + prompt << std::endl;
                }
                else
                {                    
                    book.search(index);
                }
            }
            else if (input == "EXIT")
                exit(0);
        }
        catch(int)
        {
            std::cout << "A saved contact can’t have empty field " + prompt << std::endl;
        }
    }
}
