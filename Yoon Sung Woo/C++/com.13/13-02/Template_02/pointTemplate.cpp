#include "pointTemplate.h"

template <class T>
Point<T>::Point(T x, T y) : xPos(x), yPos(y)
{ }

template <class T>
void Point<T>::ShowPosition() const
{
    std::cout << "[" << xPos << ", " << yPos << "]" << std::endl;
}