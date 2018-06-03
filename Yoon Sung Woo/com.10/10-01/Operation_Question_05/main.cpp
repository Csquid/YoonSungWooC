#include "head.h"

int main()
{
    Point po1(10, 20);
    Point po2(5, 10);
    Point po3(40, 20);
    Point po4(10, 5);

    po1.ShowPosition();
    po2.ShowPosition();   
    
    po1 += po2;

    std::cout << "--------------" << std::endl;

    po1.ShowPosition();

    std::cout << std::endl;

    po3.ShowPosition();
    po4.ShowPosition();

    po3 -= po4;

    std::cout << "--------------" << std::endl;

    po3.ShowPosition();
    
    return 0;
}