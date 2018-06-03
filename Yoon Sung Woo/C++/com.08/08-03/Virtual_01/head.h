#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class First
{
private:
    char* strOne;
public:
    First(const char* str)
    {
        strOne = new char[strlen(str) + 1];
    }
    virtual ~First()
    { 
        std::cout << "~First()" << std::endl;
        delete[] strOne;
    }
};

class Second: public First
{
private:
    char* strTwo;
public:
    Second(const char* str1, const char* str2) : First(str1)
    {
        strTwo = new char[strlen(str2) + 1];
    }
    virtual ~Second()
    {
        std::cout << "~Second()" << std::endl;
        delete[] strTwo;
    }
};
#endif