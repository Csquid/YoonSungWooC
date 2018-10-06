#include <stdio.h>

int main()
{
    int  iArr[3] = { 15, 23, 32 };
    int* iPtr = iArr;

    for(int i = 0; i < 3; i++)
    {
        printf("%d %d \n", *(iPtr + i), iPtr[i]);
    }

    return 0;
}