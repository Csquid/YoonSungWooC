#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstdlib>

class BoundCheckIntArray
{
private:
    int* arr;
    int  arrlen;
    BoundCheckIntArray(const BoundCheckIntArray& arr) { }
    BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) { }
public:
    BoundCheckIntArray(int len) : arrlen(len)
    {
        arr = new int[len];
    }
    int& operator[] (int idx) const
    {
        if(idx < 0 || idx >= arrlen)
        {
            std::cout << "Array index of bound exception" << std::endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen; }
    ~BoundCheckIntArray() { delete []arr; }
};

void ShowAllData(const BoundCheckIntArray& ref)
{
    int len = ref.GetArrLen();
    for(int idx = 0; idx < len; idx++)
    {
        std::cout << ref[idx] << std::endl;
    }
}

#endif