#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class Base
{
public:
    void BaseFunc()
    {
        std::cout << "Base Function" << std::endl;
    }
};

class Derived : public Base
{
public:
    void DerivedFunc()
    {
        std::cout << "Derived Function" << std::endl;
    }
};

#endif