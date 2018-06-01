#include "head.h"

int main()
{
    Point pos1(1, 2);
    Point pos2(2, 4);
    PointOp op;

    ShowPointPos(op.PointAdd(pos1, pos2));
    ShowPointPos(op.PointSub(pos2, pos1));

    return 0;
}