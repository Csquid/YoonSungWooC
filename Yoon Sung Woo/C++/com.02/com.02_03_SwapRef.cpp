#include <iostream>

void SwapByRef(int &v1, int &v2);

int main() 
{
    int val1 = 10;
    int val2 = 20;

    std::cout << "Before" << std::endl;
    std::cout << "val1: " << val1 << ' ' << "val2: " << val2 << std::endl << std::endl;

    SwapByRef(val1, val2);

    std::cout << "After" << std::endl;
    std::cout << "val1: " << val1 << ' ' << "val2: " << val2 << std::endl;

}

void SwapByRef(int &v1, int &v2)
{
    int temp = v1;
    v1 = v2;
    v2 = temp;
}