#ifndef _POINT_H_
#define _POINT_H_

#include <iostream>

class Point
{
private:
    int xPos, yPos;
public:
    Point(int x = 0, int y = 0);
    friend ostream& operator<<(ostream& os, const Point& pos);
};
#endif