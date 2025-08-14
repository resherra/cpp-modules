#ifndef PMERGE_ME
#define PMERGE_ME

#include <iostream>
#include <vector>
#include <deque>

class PmergeMe
{
    private:
        std::vector<unsigned int>   vec;
        std::deque<unsigned int>    deq;
        int length;

    public:
        PmergeMe();
        PmergeMe(int);
        PmergeMe(const PmergeMe&);

        void    loadData(char **);
        void    readVec();

        PmergeMe &operator=(const PmergeMe&);

        ~PmergeMe();
};

#endif