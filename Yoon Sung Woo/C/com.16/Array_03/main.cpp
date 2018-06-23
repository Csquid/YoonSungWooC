#include <iostream>
#define FLOOR 4
#define HO    2

void InsertData(int* nArr);
int main()
{
    int villa[FLOOR][HO];
    int popu = 0;

    for(int i = 0; i < FLOOR; i++)
    {
        for(int j = 0; j < HO; j++)
        {
            printf("%d - %d People Number: ", i + 1, j + 1);
            scanf ("%d", &villa[i][j]);
        }
    }

    for(int i = 0; i < FLOOR; i++)
    {
        for(int j = 0; j < HO; j++)
        {
            printf("%d - %d People Number: %d \t", i + 1, j + 1, villa[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void InsertData(int* nArr)
{

}
