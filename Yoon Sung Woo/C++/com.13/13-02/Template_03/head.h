#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstdlib>

template <class T>
class BounsCheckArray
{
private:
    T*  arr;
    int arrlen;

    BounsCheckArray(const BounsCheckArray& arr) { }
    BonusCheckArray& operator=(const BounsCheckArray& arr) { }
public:
    BounsCheckArray(int len);
    T& operator[] (int idx);
    T operator (int idx) const;
    int GetArrLen() const;
    ~BounsCheckArray();
};

#endif