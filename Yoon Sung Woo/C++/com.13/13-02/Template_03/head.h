#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstdlib>

template <class T>
class BoundCheckArray
{
private:
    T*  arr;
    int arrlen;

    BoundCheckArray(const BoundCheckArray& arr) { }
    BoundCheckArray& operator=(const BoundCheckArray& arr) { }
public:
    BoundCheckArray(int len);
    T& operator[] (int idx);
    T operator[] (int idx) const;
    int GetArrLen() const;
    ~BoundCheckArray();
};

template <class T>
BoundCheckArray<T>::BoundCheckArray(int len) : arrlen(len)
{
    arr = new T[len];
}

template <class T>
T& BoundCheckArray<T>::operator[] (int idx)
{
    if(idx < 0 || idx >= arrlen)
    {
        std::cout << "index error" << std::endl;
        exit(1);
    }
    return arr[idx];
}

template <class T>
T BoundCheckArray<T>::operator[] (int idx) const
{
    if(idx < 0 || idx >= arrlen)
    {
        std::cout << "index error" << std::endl;
        exit(1);
    }
    return arr[idx];
}


#endif