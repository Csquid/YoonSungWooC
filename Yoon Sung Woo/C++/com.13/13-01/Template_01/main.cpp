#include <iostream>

template <class T>
T Add(T n1, T n2)
{
    return n1 + n2;
}

int main()
{
    std::cout << Add(15, 20)       << std::endl;    
    std::cout << Add(3.14, 7.51) << std::endl;

    return 0;
}