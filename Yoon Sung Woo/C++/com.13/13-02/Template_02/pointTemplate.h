#ifndef __POINT_TEMPLATE_H_
#define __POINT_TEMPLATE_H_

#include <iostream>

template <class T>
class Point
{
private:
    T xPos, yPos;
public:
    Point(T x = 0, T y = 0);
    void ShowPosition() const;
};
#endif