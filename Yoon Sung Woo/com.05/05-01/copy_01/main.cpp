#include "head.h"

int main()
{
    SoSimple sim1(15, 20);
    SoSimple sim2 = sim1;
    
    sim2.ShowSimpleData();
    return 0;
}