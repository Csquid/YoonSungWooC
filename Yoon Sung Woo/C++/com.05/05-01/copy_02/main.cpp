#include "head.h"

int main()
{
    SoSimple sim1(15, 30);
    std::cout << "생성 및 초기화 직전" << std::endl;

    //SoSimple sim2(sim1);
    SoSimple sim2 = sim1;   
    std::cout << "생성 및 초기화 직후" << std::endl;
    sim2.ShowSimpleData();
    return 0;
}