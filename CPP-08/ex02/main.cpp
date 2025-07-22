#include "MutantStack.hpp"
#include <list>

int main()
{
    //MutantStack
    std::cout << "MutantStack example: " << std::endl; 
    MutantStack<int> mstack;
    
    mstack.push(5);
    mstack.push(17);
    std::cout << "top: " << mstack.top() << std::endl;
    std::cout << "pop!" << std::endl;
    mstack.pop();
    std::cout << "size: " << mstack.size() << std::endl;
    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);
    
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    
    std::cout << "it before: " << *it << std::endl;
    
    ++it;
    --it;

    std::cout << "it after: " << *it << std::endl;


    while (it != ite)
    {
        std::cout << *it << " | ";
        ++it;
    }
    std::cout << std::endl;

    std::stack<int> s(mstack);

    //List
    std::cout << "\n\n\nstd::list example: " << std::endl; 
    std::list<int> _list;
    
    _list.push_back(5);
    _list.push_back(17);
    std::cout << "top: " << _list.back() << std::endl;
    std::cout << "pop!" << std::endl;
    _list.pop_back();
    std::cout << "size: " << _list.size() << std::endl;
    _list.push_back(3);
    _list.push_back(5);
    _list.push_back(737);
    _list.push_back(0);
    
    std::list<int>::iterator _it = _list.begin();
    std::list<int>::iterator _ite = _list.end();
    
    std::cout << "it before: " << *_it << std::endl;
    
    ++_it;
    --_it;

    std::cout << "it after: " << *_it << std::endl;


    while (_it != _ite)
    {
        std::cout << *_it << " | ";
        ++_it;
    }
    std::cout << std::endl;

    std::stack<int> _s(mstack);
}
