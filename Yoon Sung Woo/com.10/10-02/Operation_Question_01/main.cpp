#include "head.h"

int main()
{
    Point po1(5);
    Point po2 = -po1;

    std::cout << "po1: " << po1.getNum() << std::endl;
    std::cout << "po2: " << po2.getNum() << std::endl;
    return 0;
}