#include "../headers/PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
    {
        std::cerr << "Not enough arguments" << "\n";
        exit(1);
    }

    PmergeMe collection(ac);
    try
    {
        collection.loadData(av);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
        exit(1);
    }

    collection.fjv();
    collection.fjd();
    collection.printAfter();
    collection.display();
}