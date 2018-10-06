#include <stdio.h>

int main()
{
    int  iArr[5] = { 1, 2, 3, 4, 5 };
    int* iPtr = iArr;

    for(int i = 0; i < 5; i++)
    {
        printf("%d \n", *(iPtr + i));
    }

    return 0;
}