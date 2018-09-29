#include <stdio.h>

int main()
{
    int    num1 = 2;
    double num2 = 1.24;

    char  c = 'A';
    const char* str = "String";

    printf("num1: %d  \n", num1);
    printf("num2: %lf \n", num2);
    printf("c:    %c  \n"  , c);
    printf("str:  %s  \n", str);

    return 0;
}