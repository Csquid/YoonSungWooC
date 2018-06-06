#include "head.h"

int main()
{
    Second ssrc(111, 222, 333, 444);
    Second scpy(0,   0,   0,   0);

    scpy = ssrc;
    scpy.ShowData();

    return 0;
}