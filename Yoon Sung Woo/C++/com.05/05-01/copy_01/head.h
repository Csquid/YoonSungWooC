#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class SoSimple {
private:
    int num1;
    int num2;
public:
    SoSimple(int n1, int n2) : num1(n1), num2(n2)
    { }
    void ShowSimpleData()
    {
        std::cout << num1 << std::endl;
        std::cout << num2 << std::endl;
    }
};

#endif