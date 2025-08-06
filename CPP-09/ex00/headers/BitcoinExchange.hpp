#ifndef BTC_EXC
#define BTC_EXC

#include <fstream>
#include <iostream>
#include <string>
#include <map>

class BitcoinExchange
{
    private:
        std::string filename;
        std::ifstream   file;
        std::map<std::string, float> exc;

    public:
        BitcoinExchange();
        BitcoinExchange(const BitcoinExchange&);
        BitcoinExchange(std::string);

        BitcoinExchange&    operator=(const BitcoinExchange&);

        void    loadData();
        std::map<std::string, float>&   getExc();
        float    get(std::string);

        ~BitcoinExchange();
};

#endif
