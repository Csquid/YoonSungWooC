#include "head.h"

int main()
{
    Temporary(100);
    std::cout << "********* after make!" << std::endl << std::endl;

    Temporary(200).ShowTempInfo();
    std::cout << "********* after make!" << std::endl << std::endl;

    const Temporary &ref = Temporary(300);
    std::cout << "********* end of main!" << std::endl << std::endl;

    return 0;
}