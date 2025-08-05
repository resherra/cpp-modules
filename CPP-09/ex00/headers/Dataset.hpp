#ifndef dataset
#define dataset

#include "BitcoinExchange.hpp"

class Dataset
{
    private:
        std::string filename;
        std::ifstream data;
        BitcoinExchange exc;
        
        void    checkHeader();
        void    loadData();
        int     checkStructure(std::string&);
        int     checkDate(std::string);
        int     checkValue(float);

    public:
        Dataset();
        Dataset(const Dataset&);
        Dataset(std::string, BitcoinExchange&);

        Dataset&    operator=(const Dataset&);

        void readData();

        ~Dataset();
};

#endif