#include <stdio.h>

int main()
{
    int iNum1 = 10, iNum2 = 20, iNum3 = 30;
    int* ipArr[3] = { &iNum1, &iNum2, &iNum3 };

    //printf("%d \n", *ipArr[0]);
    //printf("%d \n", *ipArr[1]);
    //printf("%d \n", *ipArr[2]);

    for(int i = 0; i < 3; i++)
    {
        printf("%d \n", *ipArr[i]);
    }

    return 0;
}