#include <stdio.h>

int main()
{
    int  iArrOneDim[5] = { 0, };
    int* iPtr = iArrOneDim;

    for(int i = 0; i < 5; i++)
    {
        iArrOneDim[i] = i + 1;
    }

    for(int i = 0; i < 5; i++)
    {
        printf("%d", *(iPtr + i));
    }

    int iArrTwoDim[2][5] = { { 0, }, { 0, } };

}