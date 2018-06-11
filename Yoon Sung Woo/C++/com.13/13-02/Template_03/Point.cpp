#include "Point.h"

Point::Point(int x, int y) : xPos(x), yPos(y) { }

ostream& operator<<(ostream& os, const Point& pos)
{
    os << "[" << pos.xPos << ", " << pos.yPos << "]" << std::endl;
    return os;
}