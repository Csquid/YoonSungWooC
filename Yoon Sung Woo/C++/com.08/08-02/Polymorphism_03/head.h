#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class First
{
public:
    void MyFunc()
    {
        std::cout << "FirstFunc" << std::endl;
    }
};

class Second : public First
{
public:
    void MyFunc()
    {
        std::cout << "SecondFunc" << std::endl;
    }
};

class Third : public Second
{
public:
    void MyFunc()
    {
        std::cout << "ThridFunc" << std::endl;
    }
};
#endif