#ifndef PMERGE_ME
#define PMERGE_ME

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include <vector>
#include <deque>
#include <set>
#include <map>

#include <algorithm>

class PmergeMe
{
    private:
        std::vector<unsigned int>    vec;
        std::deque<unsigned int>     deq;

        int length;
        bool dub_check;
        double start_time;
        double ttpv;
        double ttpd;

        void    sort();
        void    sortd();
    public:
        PmergeMe();
        PmergeMe(int);
        PmergeMe(const PmergeMe&);

        void    loadData(char **);
        void    fjv();
        void    fjd();
        void    printBefore(char **av);
        void    printAfter();
        void    display();

        PmergeMe &operator=(const PmergeMe&);

        ~PmergeMe();
};

#endif