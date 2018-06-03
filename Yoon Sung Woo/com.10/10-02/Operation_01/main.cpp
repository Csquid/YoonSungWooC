#include "head.h"

int main()
{
    Point pos(1, 2);

    ++pos;
    pos.ShowPosition();

    --pos;
    pos.ShowPosition();

    ++(++pos);
    pos.ShowPosition();
    --(--pos);
    pos.ShowPosition();
}
