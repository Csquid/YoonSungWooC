#include "head.h"

int main()
{
    First fsrc(111, 222);
    First fcpy;

    Second ssrc(333, 444);
    Second scpy;

    fcpy = fsrc;
    scpy = ssrc;

    fcpy.ShowData();
    scpy.ShowData();
}
