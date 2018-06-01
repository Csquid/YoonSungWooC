#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class First
{
public:
    void FirstFunc()
    {
        std::cout << "FirstFunc" << std::endl;
    }
};

class Second : public First
{
public:
    void SecondFunc()
    {
        std::cout << "SecondFunc" << std::endl;
    }
};

class Third : public Second
{
public:
    void ThridFunc()
    {
        std::cout << "ThridFunc" << std::endl;
    }
};
#endif