#include "../headers/BitcoinExchange.hpp"
#include "../headers/Dataset.hpp"

void    handleInput(int ac)
{
    if (ac != 2)
    {
        std::cerr << "Invalid arguments: ./btc filename" << "\n";
        std::exit(0);
    }
}

int main(int ac, char **av)
{   
    handleInput(ac);
    BitcoinExchange btcex("data.csv");
    btcex.loadData();
    Dataset Dataset(av[1], btcex);
    Dataset.readData();
}