#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class SoBase
{
private:
    int baseNum;
public:
    SoBase() : baseNum(20)
    {
        std::cout << "SoBase()" << std::endl;
    }
    SoBase(int n) : baseNum(n)
    {
        std::cout << "SoBase(int n)" << std::endl;
    }
    void ShowBaseData()
    {
        std::cout << "baseNum" << std::endl;
    }
};

class SoDerived: public SoBase
{
private:
    int derivNum;
public:
    SoDerived(): derivNum(30)
    {
        std::cout << "SoDerived()"  << std::endl;
    }
    SoDerived(int n) : derivNum(n)
    {
        std::cout << "SoDerived(int n)" << std::endl;
    }
    SoDerived(int n1, int n2) : SoBase(n1), derivNum(n2)
    {
        std::cout << "SoDerived(int n1, int n2)" << std::endl;
    }
    void ShowDerivData()
    {
        ShowBaseData();
        std::cout << derivNum << std::endl;
    }
};
#endif