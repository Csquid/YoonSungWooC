#include "head.h"
#include "Point.h"
#include "Point.cpp"

int main()
{
    BoundCheckArray<int> iarr(5);
    for(int i = 0; i < 5; i++)
        iarr[i] = (i + 1) * 11;
    for(int i = 0; i < 5; i++)
        std::cout << iarr[i] << std::endl;

    return 0;        
}