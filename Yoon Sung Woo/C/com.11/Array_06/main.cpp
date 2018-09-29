#include <stdio.h>

int main()
{
    int sum = 0;

    int arr_01[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}    
    };

    int arr_02[2][3] = {
        { 1, },
        { 2, 3 },
    };

    int arr_03[2][3] = {
        1, 2,
        3, 4, 5
    };

    int arr_04[2][3] = { 0, };

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            sum++;
            arr_04[i][j] = sum;
        }
    }  


    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 3; j++)
        {
            printf("arr_04[%d][%d] : %d \n", i, j, arr_04[i][j]);
        }
    }

    return 0;
}