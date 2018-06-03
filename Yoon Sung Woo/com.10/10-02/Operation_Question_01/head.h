#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class Point
{
private:
    int xPos;
public:
    Point(int x = 0) : xPos(x)
    { }
    int operator-()
    {
        return 0 - xPos;
    }
    int getNum()
    {
        return xPos;
    }
};

#endif