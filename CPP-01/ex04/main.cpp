#include <iostream>
#include <fstream>
#include <string>

void    replace(std::string buffer, std::ofstream& outfile, std::string to_replace, std::string replace_by)
{   
    static int i = 0;
    int to_replace_len = to_replace.length();
    std::string newString = buffer;
    size_t position = newString.find(to_replace, 0);
    while (position != std::string::npos)
    {
        newString = newString.erase(position, to_replace_len);
        newString = newString.insert(position, replace_by); 
        position = newString.find(to_replace, position + replace_by.length() - 1);
    }
    if (i == 0)
        outfile << newString;
    else
        outfile << std::endl << newString;
    i++;
}

int main(int ac, char **av)
{
    if (ac != 4)
    {
        std::cerr << "Not enough args!" << std::endl;
        return 1;
    }
    std::string filename = av[1];
    std::string s1 = av[2];
    std::string s2 = av[3];
 
    std::ifstream foo(filename);   
    if (!foo)
    {
        std::cerr << "Can't open the file!" << std::endl;
        return 1;
    }


    std::ifstream file(filename);   
    std::string suffix = ".replace";
    std::ofstream outfile(filename + suffix);
    std::string buffer;
    while (std::getline(file, buffer))
        replace(buffer, outfile, s1, s2);
}