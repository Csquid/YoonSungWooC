#include "head.h"

int main()
{
    SoSimple obj(7);
    std::cout << "Before Function Called" << std::endl;
    SimpelFuncObj(obj);
    std::cout << "After  Function Called" << std::endl;

    return 0;
}