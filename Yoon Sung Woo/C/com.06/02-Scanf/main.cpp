#include <stdio.h>

int main()
{
    int num[3] = { 0, };
    int numSize = sizeof(num) / 4;
    
    for(int i = 0; i < numSize; i++)
    {
        printf("Number: ");
        scanf("%d", &num[i]);
    }

    printf("\n");
    
    for(int i = 0; i < numSize; i++)
    {
        printf("Num[%d]: %d\n", i, num[i]);
    }

    return 0;
}