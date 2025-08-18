#ifndef PMERGE_ME
#define PMERGE_ME

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

#include <vector>
#include <deque>
#include <set>

#include <algorithm>

class PmergeMe
{
    private:
        std::vector<unsigned int>    vec;
        std::deque<unsigned int>     deq;

        std::vector<unsigned int>     repeated;
        std::deque<unsigned int>      d_repeated;
        std:: vector<unsigned int>    to_print;
        int length;
        double ttpv;
        double ttpd;
        double start_time;


        void    sort();
        void    sortd();
    public:
        PmergeMe();
        PmergeMe(int);
        PmergeMe(const PmergeMe&);

        void    loadData(char **);
        void    fjv();
        void    fjd();
        void    printBefore();
        void    printAfter();
        void    display();

        PmergeMe &operator=(const PmergeMe&);

        ~PmergeMe();
};

#endif