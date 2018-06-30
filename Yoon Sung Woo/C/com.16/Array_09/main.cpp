#include <stdio.h>

int main()
{
    int iArr[3][7] = {
        { 1, 2, 3, 4, 5 },
        { 1, 2, 3, 4, 5, 6, 7 },
        { 1, 2 },
    };

    int arrLen[3] = { 0 };

    for(int i = 0; i < 3; i++)
    {
        printf("Array iArr[%d] size: %ld \n", i, sizeof(iArr[i]));
    }

    for(int i = 0; i < 3; i++)
    {
        arrLen[i] = sizeof(iArr[i]) / sizeof(int);
    }

    for(int i = 0; i < 3; i++)
    {
        for(int j = 0; j < arrLen[i]; j++)
        {
            printf("%d ", iArr[i][j]);
        }
        printf("\n");
    }

    return 0;
}