#include <iostream>

typedef struct __point
{
    int xPos;
    int yPos;
} Point;

Point& PntAdder(const Point &p1, const Point &p2);

int main() 
{
    Point* po1 = new Point();
    po1->xPos = 5;
    po1->yPos = 5;

    Point* po2 = new Point();
    po2->xPos = 10;
    po2->yPos = 10;

    Point& resultPo = PntAdder(*(po1), *(po2));

    std::cout << "rpo.xPos: " << resultPo.xPos << "\n" << "rpo.yPos: " << resultPo.yPos << std::endl;

    return 0;
}

Point& PntAdder(const Point &p1, const Point &p2) 
{
    Point* po = new Point();
    po->xPos = p1.xPos + p2.xPos;
    po->yPos = p1.yPos + p2.yPos;

    return *po;
}