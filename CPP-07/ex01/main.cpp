#include "iter.hpp"

int main()
{
    int *arr = new int[4];
    for (int i = 0; i < 4; i++)
        arr[i] = i;
    iter(arr, 4, print);

    std::cout << "----------" << std::endl;

    int *arr2 = new int[4];
    for (int i = 0; i < 4; i++)
        arr2[i] = i;
    iter(arr2, 4, increment);
}