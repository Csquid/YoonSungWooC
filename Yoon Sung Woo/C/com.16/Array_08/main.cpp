#include <stdio.h>

int main()
{
    int arr1[5] = { 1, 2, 3, 4, 5 };
    int arr2[ ] = { 1, 2, 3, 4, 5, 6, 7 };
    int arr3[5] = { 1, 2 };

    int arrLen1, arrLen2, arrLen3;

    printf("Array arr1 size: %ld \n", sizeof(arr1));
    printf("Array arr2 size: %ld \n", sizeof(arr2));
    printf("Array arr3 size: %ld \n", sizeof(arr3));


    arrLen1 = sizeof(arr1) / sizeof(int);
    arrLen2 = sizeof(arr2) / sizeof(int);
    arrLen3 = sizeof(arr3) / sizeof(int);

    for(int i = 0; i < arrLen1; i++)
    {
        printf("%d ", arr1[i]);
    }
    printf("\n");

    for(int i = 0; i < arrLen2; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");

    for(int i = 0; i < arrLen3; i++)
    {
        printf("%d ", arr3[i]);
    }
    printf("\n");

    return 0;
}