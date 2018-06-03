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
    friend Point operator+(const Point &pos1, const Point &pos2);
};

Point operator+(const Point &pos1, const Point &pos2)
{
    Point pos(pos1.xPos + pos2.xPos, pos1.yPos + pos2.yPos);
    return pos;
}

#endif

