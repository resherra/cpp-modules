#include "../headers/PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe(){}

PmergeMe::PmergeMe(int ac): length(ac - 1) {}

PmergeMe::PmergeMe(const PmergeMe& other) 
{
    *this = other;
}

PmergeMe&   PmergeMe::operator=(const PmergeMe& other)
{
    if (this != &other)
    {
        vec = other.vec;
        deq = other.deq;
        repeated = other.repeated;
        to_print = other.to_print;
        length = other.length;
    }
    return *this;
}

static int is_int(std::string str)
{
    int i = 0;
    if (str[i] == '-' || str[i] == '+')
        i++;
    while (str[i])
    {
        if (std::isdigit(str[i]) == 0)
            return 0;
        i++;
    }
    return 1;
}

template <typename T>
static  int is_left(T& vec)
{
    if (!(vec.size() % 2))
        return -1;
    return vec.back();
}

std::vector<unsigned int> JacobSeq(unsigned int size)
{
    std::vector<unsigned int> jacobsthal;
    jacobsthal.push_back(0);
    jacobsthal.push_back(1);
    
    while (jacobsthal.back() < size)
    {
        int lastNum = jacobsthal.back();
        int secondLastNum = jacobsthal[jacobsthal.size() - 2];
        
        int next = lastNum + 2 * secondLastNum;
        jacobsthal.push_back(next);
    }
    return jacobsthal;
}


void    PmergeMe::sort()
{
    int left = is_left(vec);
    
    if (left != -1)
        vec.pop_back();

    std::vector< std::pair<unsigned int, unsigned int> > pairs;
    for (unsigned int i = 0; i < vec.size(); i += 2)
    {
        unsigned int first = vec[i];
        unsigned int second = vec[i + 1];

        if (first > second)
            std::swap(first, second);
        pairs.push_back(std::pair<unsigned int, unsigned int>(first, second));
    }

    std::vector<unsigned int> mainSet;
    for (unsigned int i = 0; i < pairs.size(); i++)
        mainSet.push_back(pairs[i].second);

    if (mainSet.size() > 1)
    {
        vec = mainSet;
        sort();
        mainSet = vec;
    }

    std::vector<int> pendSet;
    for (unsigned int j = 0; j < mainSet.size(); j++)
    {
        for (unsigned int i = 0; i < pairs.size(); i++)
        {
            if (mainSet[j] == pairs[i].second)
                pendSet.push_back(pairs[i].first);
        }
    }
    if (left != -1)
        pendSet.push_back(left);

    std::vector<unsigned int> result = mainSet;
    if (!pendSet.empty())
        result.insert(result.begin(), pendSet[0]);

    std::vector<unsigned int> JacobS = JacobSeq(pendSet.size());
    JacobS = std::vector<unsigned int>(JacobS.begin() + 2, JacobS.end());
    for (unsigned int i = 0; i < JacobS.size(); i++)
    {
        int index = JacobS[i];
        int j = index;

        while (j > 0)
        {   
            if (j > static_cast<int>(pendSet.size() - 1))
            {
                j--;
                continue;
            }
            if (pendSet[j] != -1)
            {
                std::vector<unsigned int>::iterator pos = std::lower_bound(result.begin(), result.end(), pendSet[j]);
                result.insert(pos, pendSet[j]);
                pendSet[j] = -1;
            }
            j--;
        }
    }
    vec = result;
}

void    PmergeMe::sortd()
{
    int left = is_left(deq);
    
    if (left != -1)
        deq.pop_back();

    std::deque< std::pair<unsigned int, unsigned int> > pairs;
    for (unsigned int i = 0; i < deq.size(); i += 2)
    {
        unsigned int first = deq[i];
        unsigned int second = deq[i + 1];

        if (first > second)
            std::swap(first, second);
        pairs.push_back(std::pair<unsigned int, unsigned int>(first, second));
    }

    std::deque<unsigned int> mainSet;
    for (unsigned int i = 0; i < pairs.size(); i++)
        mainSet.push_back(pairs[i].second);

    if (mainSet.size() > 1)
    {
        deq = mainSet;
        sortd();
        mainSet = deq;
    }

    std::deque<int> pendSet;
    for (unsigned int j = 0; j < mainSet.size(); j++)
    {
        for (unsigned int i = 0; i < pairs.size(); i++)
        {
            if (mainSet[j] == pairs[i].second)
                pendSet.push_back(pairs[i].first);
        }
    }
    if (left != -1)
        pendSet.push_back(left);

    std::deque<unsigned int> result = mainSet;
    if (!pendSet.empty())
        result.push_front(pendSet[0]);

    std::vector<unsigned int> JacobS = JacobSeq(pendSet.size());
    JacobS = std::vector<unsigned int>(JacobS.begin() + 2, JacobS.end());
    for (unsigned int i = 0; i < JacobS.size(); i++)
    {
        int index = JacobS[i];
        int j = index;

        while (j > 0)
        {   
            if (j > static_cast<int>(pendSet.size() - 1))
            {
                j--;
                continue;
            }
            if (pendSet[j] != -1)
            {
                std::deque<unsigned int>::iterator pos = std::lower_bound(result.begin(), result.end(), pendSet[j]);
                result.insert(pos, pendSet[j]);
                pendSet[j] = -1;
            }
            j--;
        }
    }
    deq = result;
}

void    PmergeMe::fjv()
{
    sort();
    for (unsigned int i = 0; i < repeated.size(); i++)
    {
        std::vector<unsigned int>::iterator pos = std::lower_bound(vec.begin(), vec.end(), repeated[i]);
        vec.insert(pos, repeated[i]);
    }
    clock_t end = std::clock();

    double microseconds = 1000000.0;
    ttpv = (static_cast<double>(end - start_time) / CLOCKS_PER_SEC) *  microseconds;
}


void    PmergeMe::fjd()
{
    sortd();
    for (unsigned int i = 0; i < d_repeated.size(); i++)
    {
        std::deque<unsigned int>::iterator pos = std::lower_bound(deq.begin(), deq.end(), d_repeated[i]);
        deq.insert(pos, d_repeated[i]);
    }
    clock_t end = std::clock();

    double microseconds = 1000000.0;
    ttpd = (static_cast<double>(end - start_time) / CLOCKS_PER_SEC) *  microseconds;
}

void    PmergeMe::printAfter()
{
    std::cout << "After: ";
    for (unsigned int i = 0; i < vec.size(); i++)
        std::cout << vec[i] << " ";
    std::cout << "\n";
}


void    PmergeMe::printBefore()
{
    std::cout << "Before: ";
    for (unsigned int i = 0; i < to_print.size(); i++)
        std::cout << to_print[i] << " ";
    std::cout << "\n";
}

void    PmergeMe::display()
{
    std::cout << "Time to process a range of " << std::fixed << std::setprecision(5) << length <<  " with std::vector: " << ttpv << " us" << std::endl; 
    std::cout << "Time to process a range of " << std::fixed << std::setprecision(5) << length <<  " with std::deque: " << ttpd << " us" << std::endl; 
}

void PmergeMe::loadData(char **av)
{
    start_time = std::clock();
    std::multiset<unsigned int> repeated_tmp;
    for (int i = 1; i <= length; i++)
    {
        int num = 0;
        if (!is_int(av[i]))
            throw std::runtime_error("Error: Invalid set!");
        num = atoi(av[i]);
        if (num < 0)
            throw std::runtime_error("Error: Can't process negative numbers");

        std::set<unsigned int>::iterator it = repeated_tmp.find(num);
        to_print.push_back(num);
        if (it != repeated_tmp.end())
        {
            repeated.push_back(num);
            d_repeated.push_back(num);
        }
        else
        {
            repeated_tmp.insert(num);
            vec.push_back(num);
            deq.push_back(num);
        }
    }
    printBefore();
}