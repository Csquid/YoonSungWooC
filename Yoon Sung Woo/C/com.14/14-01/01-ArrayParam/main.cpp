#include <stdio.h>

void ShowArrayElement(int*  param, int len);

int main()
{
    int arr1[3] = { 1, 2, 3 };
    int arr2[5] = { 4, 5, 6, 7, 8 };
    ShowArrayElement(arr1, sizeof(arr1) / sizeof(int));
    ShowArrayElement(arr2, sizeof(arr2) / sizeof(int));
}

void ShowArrayElement(int*  param, int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d ", param[i]);
    }
    printf("\n");
}