#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class AAA
{
private:
    int num1;
public:
    virtual void Func1() { std::cout << "Func1" << std::endl; }
    virtual void Func2() { std::cout << "Func2" << std::endl; }
};

class BBB : public AAA
{
private:
    int num2;
public:
    virtual void Func1() { std::cout << "BBB::Func1" << std::endl; }
    void Func3() { std::cout << "Func3" << std::endl; }
};
#endif