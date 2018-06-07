#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstdlib>

class BoundCheckIntArray
{
private:
    int* arr;
    int  arrlen;
public:
    BoundCheckIntArray(int len) : arrlen(len)
    {
        arr = new int[len];
    }
    int& operator[] (int idx)
    {
        if(idx < 0 || idx >= arrlen)
        {
            std::cout << "Array index of bound exception" << std::endl;
            exit(1);
        }
        return arr[idx];
    }
    ~BoundCheckIntArray() { delete []arr; }
};

#endif