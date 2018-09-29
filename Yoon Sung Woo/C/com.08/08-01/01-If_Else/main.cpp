#include <stdio.h>

int main()
{
    int num1 = 0;
    int num2 = 0;

    printf("First Number: ");
    scanf("%d", &num1);

    printf("Second Number: ");
    scanf("%d", &num2);

    if(num1 < num2)
    {
        printf("num1 < num2");
    }
    else if(num1 > num2)
    {
        printf("num1 > num2");
    }
    else if(num1 == num2)
    {
        printf("num1 == num2");
    }
    return 0;
}