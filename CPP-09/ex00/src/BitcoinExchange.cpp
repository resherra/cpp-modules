#include "../headers/BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){}

BitcoinExchange::BitcoinExchange(std::string name): filename(name) {}

BitcoinExchange::BitcoinExchange(const BitcoinExchange& other): filename(other.filename), exc(other.exc) {}


BitcoinExchange&    BitcoinExchange::operator=(const BitcoinExchange& other) 
{
    if (this != &other)
    {
        filename = other.filename;
        exc = other.exc;
    }
    return *this;
}

void    BitcoinExchange::loadData()
{
    file.open(filename);

    if (!file.is_open())
    {
        std::cerr << "Can't open the file: data.csv" << "\n";
        std::exit(1);
    }
    std::string line;
    std::getline(file, line);
    while (std::getline(file, line))
    {
        int pos = line.find(',');
        std::pair<std::string, float> pa(line.substr(0, pos), std::stof(line.substr(pos + 1).c_str()));
        exc.insert(pa);
    }
}

std::map<std::string, float>&   BitcoinExchange::getExc()
{
    return exc;
}

float BitcoinExchange::get(std::string date)
{
    std::map<std::string, float>::iterator it = exc.lower_bound(date);

    if (it != exc.end() && it->first == date)
        return it->second;

    if (it == exc.begin())
        return 0;

    return std::prev(it)->second;
}

BitcoinExchange::~BitcoinExchange(){}
