#include "Point.h"
#include "head.h"

Point::Point(int x, int y) : xPos(x), yPos(y) { }

ostream& operator<<(ostream& os, const Point& pos);