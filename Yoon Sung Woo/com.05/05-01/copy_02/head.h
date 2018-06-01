#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class SoSimple 
{
private:
    int num1;
    int num2;
public:
    SoSimple(int n1, int n2)
        : num1(n1), num2(n2)
    {
        //empty
    }
    SoSimple(const SoSimple &copy)
        : num1(copy.num1), num2(copy.num2)
    {
        std::cout << "Called SoSimple(SoSimple &copy)" << std::endl;
    }
    // SoSimple(const SoSimple &copy)
    //     : num1(copy.num2), num2(copy.num1)
    // {
    //     //empty
    // }
    void ShowSimpleData()
    {
        std::cout << "num1: " << num1 << std::endl;
        std::cout << "num2: " << num2 << std::endl;
    }
};

#endif