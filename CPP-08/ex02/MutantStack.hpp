#ifndef MutantStack_hpp
#define MutantStack_hpp

#include <iostream>
#include <stack>


template <typename T>
class MutantStack: public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack&);
        MutantStack&    operator=(const MutantStack&);
        ~MutantStack();


        typedef typename std::deque<T>::iterator iterator;

        iterator begin() {
            return this->c.begin();
        }

        iterator end() {
            return this->c.end();
        }
};

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& other): std::stack<T>(other) {}

template <typename T>
MutantStack<T>&    MutantStack<T>::operator=(const MutantStack& other) 
{
    if (this != &other)
		std::stack<T>::operator=(other);
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}

#endif