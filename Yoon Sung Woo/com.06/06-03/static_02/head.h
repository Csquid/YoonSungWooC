#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class SoSimple
{
private:
    static int simObjCnt;
public:
    SoSimple()
    {
        simObjCnt++;
        std::cout << simObjCnt << " Number SoSimple Object" << std::endl;
    }
};
int SoSimple::simObjCnt = 0;

class SoComplex
{
private:
    static int cmxObjCnt;
public:
    SoComplex()
    {
        cmxObjCnt++;
        std::cout << cmxObjCnt << " Number SoComplex Object" << std::endl;
    }
    SoComplex(SoComplex &copy)
    {
        cmxObjCnt++;
        std::cout << cmxObjCnt << " Number SoComplex Object" << std::endl;
    }
};
int SoComplex::cmxObjCnt = 0;
#endif