#include <iostream>

class SoSimple
{
public:
    static int simObjCnt;
public:
    SoSimple()
    {
        simObjCnt++;
    }

};
int SoSimple::simObjCnt = 0;

int main() 
{
    std::cout << SoSimple::simObjCnt << "Number SoSimple Object" << std::endl;
    SoSimple sim1;
    SoSimple sim2;

    std::cout << SoSimple::simObjCnt << "Number SoSimple Object" << std::endl;
    std::cout << sim1.simObjCnt << "Number SoSimple Object" << std::endl;
    std::cout << sim2.simObjCnt << "Number SoSimple Object" << std::endl;

    return 0;
}