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

    void operator=(const First& ref)
    {
        std::cout << "First& operator=()" << std::endl;
        num1 = ref.num1;
        num2 = ref.num2;
    }
};

class Second : public First
{
private:
    int num3, num4;
public:
    Second(int n1 = 0, int n2 = 0, int n3 = 0, int n4 = 0) 
        : First(n1, n2), num3(n3), num4(n4)
    { }
    void ShowData()
    {
        First::ShowData();
        std::cout << num3 << ", " << num4 << std::endl;
    }
    
    void operator=(const Second& ref)
    {
        std::cout << "Second& operator=()" << std::endl;
        First::operator=(ref);
        num3 = ref.num3;
        num4 = ref.num4;
    }
};
#endif