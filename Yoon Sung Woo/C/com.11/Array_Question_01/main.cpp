#include <stdio.h>

int main()
{
    int iArr[5] = { 0 };
    int iArrLen = sizeof(iArr) / sizeof(int);
    int iMax = 0, iMin = 0, iSum = 0;

    for(int i = 0; i < iArrLen; i++)
    {
        printf("%d Number: ", i + 1);
        scanf("%d", &iArr[i]);

        iSum += iArr[i];
    }   

    iMax = iArr[0];
    for(int i = 1; i < iArrLen; i++)
    {

        if(iMax < iArr[i])
        {
            iMax = iArr[i];
        }
        
    }

    iMin = iArr[0];
    for(int i = 1; i < iArrLen; i++)
    {

        if(iMin > iArr[i])
        {
            iMin = iArr[i];
        }
        
    }

    printf("Max: %d \n", iMax);
    printf("Min: %d \n", iMin);
    printf("Sum: %d \n", iSum);
    printf("\n");

    return 0;
}