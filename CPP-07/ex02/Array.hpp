#ifndef array_hpp
#define array_hpp

class exception: public std::exception
{
    public:
        const char *what() const throw();
};

const char *exception::what() const throw()
{
    return "Out of bounds";
}

template <typename T>
class Array
{
    private:
        T*  arr;
        unsigned int arr_size;
        exception outOfBounds;

    public:
        Array();
        Array(unsigned int n);
        Array(Array &);
        ~Array();

        Array&  operator=(Array&);
        T&      operator[](unsigned int);
        const T&      operator[](unsigned int index) const;


        unsigned int size() const;
};

template <typename T>
const T &Array<T>::operator[](unsigned int index) const 
{
    if (index > arr_size - 1)
    {
        throw outOfBounds;
    }
    return arr[index];
}

template <typename T>
T&  Array<T>::operator[](unsigned int index)
{
    if (index > arr_size - 1)
    {
        throw outOfBounds;
    }
    return arr[index];
}

template <typename T>
unsigned int Array<T>::size() const
{
    return arr_size;
}

template <typename T>
Array<T>::Array(): arr_size(0)
{
    arr = new T[0];
}

template <typename T>
Array<T>::Array(unsigned int n): arr_size(n)
{
    arr = new T[n]();
}

template <typename T>
Array<T>::Array(Array &other)
{
    *this = other;
}

template <typename T>
Array<T>&  Array<T>::operator=(Array &other)
{
    if (this != &other)
    {
        arr_size = other.arr_size;
        delete[] arr;
        arr = new T[arr_size];
        for (unsigned int i = 0; i < arr_size; i++)
            arr[i] = other.arr[i];
    }
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] arr;
}


#endif