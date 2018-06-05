#include "head.h"

int main()
{
    Point<int> po1(3, 4);
    po1.ShowPosition();

    Point<double> po2(2.4, 3.6);
    po2.ShowPosition();

    Point<char> po3('P', 'F');
    po3.ShowPosition();

    return 0;
}