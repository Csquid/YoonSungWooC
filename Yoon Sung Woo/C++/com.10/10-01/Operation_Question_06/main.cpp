#include "head.h"

int main()
{
    Point po1(10, 20);
    Point po2(20, 300);
    bool  bo;

    bo = (po1 == po2);

    if(bo)
    {
        std::cout << "True" << std::endl;
    }
    else
    {
        std::cout << "False" << std::endl;
    }
}