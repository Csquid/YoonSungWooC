#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class Point
{
private:
    int xPos;
    int yPos;
public:
    Point(int x = 0, int y = 0) : xPos(x), yPos(y)
    { }
    void ShowPosition() const
    {
        std::cout << "[" << xPos << ", " << yPos << "]" << std::endl;
    }
    Point operator-(Point &ref)
    {
        Point po(xPos - ref.xPos, yPos - ref.yPos);
        return po;
    }
};

#endif