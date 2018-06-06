#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class First
{
private:
    int num1, num2;
public:
    First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2)
    { }
    void ShowData()
    {
        std::cout << num1 << ", " << num2 << std::endl;
    }
};

class Second
{
private:
    int num3, num4;
public:
    Second(int n3 = 0, int n4 = 0) : num3(n3), num4(n4)
    { }
    void ShowData()
    {
        std::cout << num3 << ", " << num4 << std::endl;
    }
    
    void operator=(const Second& ref)
    {
        std::cout << "Second& operator=()" << std::endl;
        num3 = ref.num3;
        num4 = ref.num4;
    }
};
#endif