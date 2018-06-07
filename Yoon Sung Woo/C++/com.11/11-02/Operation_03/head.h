#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstdlib>
using namespace std;

class Point
{
private:
    int xPos, yPos;
public:
    Point(int x = 0, int y = 0) : xPos(x), yPos(y)
    { }
    friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)
{
    os << "[" << pos.xPos << ", " << pos.yPos << "]" << std::endl;
    return os;
};

class BoundCheckPointArray
{
private:
    Point* arr;
    int    arrlen;

    BoundCheckPointArray(const BoundCheckPointArray& arr) { }
    BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) { }
public:
    BoundCheckPointArray(int len) : arrlen(len)
    {
        arr = new Point[len];
    }
    Point& operator[] (int idx)
    {
        if(idx < 0 || idx >= arrlen)
        {
            std::cout << "Index Error" << std::endl;
            exit(1);
        }
        return arr[idx];
    }
    Point operator[] (int idx) const
    {
        if(idx < 0 || idx >= arrlen)
        {
            std::cout << "Index Error" << std::endl;
            exit(1);
        }
        return arr[idx];
    }
    int GetArrLen() const { return arrlen; }
    ~BoundCheckPointArray() { delete []arr; }
};
#endif