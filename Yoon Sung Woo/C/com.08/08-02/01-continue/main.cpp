#include <stdio.h>

int main()
{
    int num = 0;
    printf("start! ");

    for(num = 1; num < 20; num++)
    {
        if(num % 2 == 0 || num % 3 == 0)
            continue;

        printf("%d ", num);
    }
    printf("end ");

    return 0;
}