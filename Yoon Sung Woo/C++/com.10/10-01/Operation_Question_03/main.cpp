#include "head.h"

int main()
{
    Point pos1(30, 25);
    Point pos2(10, 5);
    Point pos3 = pos1 - pos2;

    pos1.ShowPosition();
    pos2.ShowPosition();

    std::cout << std::endl;
    std::cout << "-------------" << std::endl << std::endl;
    pos3.ShowPosition();

    return 0;
}