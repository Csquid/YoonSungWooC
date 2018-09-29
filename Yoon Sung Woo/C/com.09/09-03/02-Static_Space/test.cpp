#include <stdio.h>
#define user 7

int main(void)
{
    int i;
    for (i = 1; i <= user; i++)
    {
        printf("7곱하기%d는 %d입니다.\n", i, i * user);
    }
    return 0;
}