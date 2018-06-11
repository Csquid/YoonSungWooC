#include <iostream>

void SimpleFuncOne();
void SimpleFuncTwo();
void SimpleFuncThree();


int main()
{
    try
    {
        SimpleFuncOne();
    }
    catch(int expn)
    {
        std::cout << "Exception Code: " << expn <<std::endl;
    }
    return 0;
}

void SimpleFuncOne() 
{
    std::cout << "SimpleFunOne()" << std::endl;
    SimpleFuncTwo();
}
void SimpleFuncTwo()
{
    std::cout << "SimpleFunTwo()" << std::endl;
    SimpleFuncThree();
}
void SimpleFuncThree()
{
    std::cout << "SimpleFuncThree()" << std::endl;
    throw -1;
}