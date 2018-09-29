#include <stdio.h>

int main()
{
    int dan = 0, num = 1;

    printf("Something Multiple? ");
    scanf("%d", &dan);

    do
    {
        printf("%d x %d = %d \n", dan, num, dan * num);
        num++;
    } while(num < 10);

    return 0;
}
