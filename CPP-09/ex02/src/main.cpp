#include "../headers/PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac < 2)
        std::cerr << "Not enough arguments" << "\n";

    PmergeMe collection(ac);

    try
    {
        collection.loadData(av);
        collection.readVec();
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}