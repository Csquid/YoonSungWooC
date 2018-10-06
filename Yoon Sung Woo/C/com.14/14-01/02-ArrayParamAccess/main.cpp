#include <stdio.h>

void ShowArrayElement(int*  param, int len);
void AddArrayElement(int* param, int len, int add);

int main()
{
    int arr[3] = { 1, 2, 3 };
    int arrSize = sizeof(arr) / sizeof(int);

    AddArrayElement(arr, arrSize, 1);
    ShowArrayElement(arr, arrSize);

    AddArrayElement(arr, arrSize, 2);
    ShowArrayElement(arr, arrSize);

    AddArrayElement(arr, arrSize, 3);
    ShowArrayElement(arr, arrSize);

    return 0;
}

void ShowArrayElement(int*  param, int len)
{
    for(int i = 0; i < len; i++)
    {
        printf("%d ", param[i]);
    }
    printf("\n");
}

void AddArrayElement(int* param, int len, int add)
{
    int i;
    for(i = 0; i < len; i++)
        param[i] += add;
    
}