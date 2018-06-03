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
    friend Point& operator+=(Point& po1, Point& po2);
    friend Point& operator-=(Point& po1, Point& po2);
};

Point& operator+=(Point& po1, Point& po2)
{
    po1.xPos += po2.xPos;
    po1.yPos += po2.yPos;

    return po1;
}

Point& operator-=(Point& po1, Point& po2)
{
    po1.xPos -= po2.xPos;
    po1.yPos -= po2.yPos;

    return po1;
}

#endif