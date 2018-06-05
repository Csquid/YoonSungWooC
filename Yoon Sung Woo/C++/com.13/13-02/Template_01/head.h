#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

template <typename T>
class Point
{
private:
    T xPos, yPos;
public:
    Point(T x = 0, T y = 0) : xPos(x), yPos(y)
    { }
    void ShowPosition() const
    {
        std::cout << "[" << xPos << ", " << yPos << "]" << std::endl;
    }
};

#endif