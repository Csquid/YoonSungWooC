#include <stdio.h>

void insertArrData(int* nArr);
void PrintArrDara (int* nArr);

int main()
{
    int arr[5] = { 0, };

    insertArrData(arr);    
    PrintArrDara (arr);   
    return 0;
}

void insertArrData(int* nArr) 
{
    for(int i = 0; i < 5; i++)
    {
        printf("Number ");
        scanf ("%d", &nArr[i]);
    }
}

void PrintArrDara (int* nArr)
{
    for(int i = 0; i < 5; i++)
    {
        printf("%d ", nArr[i]);
    }
    printf("\n");
}