#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class Point;

class PointOp
{
private:
    int opcnt;
public:
    PointOp() : opcnt(0)
    { }

    Point PointAdd(const Point&, const Point&);
    Point PointSub(const Point&, const Point&);
    ~PointOp()
    {
        std::cout << "Operation times: " << opcnt << std::endl;
    }
};

class Point
{
private:
    int x;
    int y;
public:
    Point(const int &xpos, const int &ypos) : x(xpos), y(ypos)
    { }
    friend Point PointOp::PointAdd(const Point&, const Point&);
    friend Point PointOp::PointSub(const Point&, const Point&);
    friend void ShowPointPos(const Point&);
};

Point PointOp::PointAdd(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
}

Point PointOp::PointSub(const Point& pnt1, const Point& pnt2)
{
    opcnt++;
    return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
}

void ShowPointPos(const Point& pos)
{
    std::cout << "x: " << pos.x << ", ";
    std::cout << "y: " << pos.y << std::endl;
}
#endif