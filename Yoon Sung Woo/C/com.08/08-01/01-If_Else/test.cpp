#include <stdio.h>

int main(void)
{
    int score=93;
    
    if(score>=90)
    {
        printf("your score is A.\n");
    }
    else if(score>=80)
    {
        printf("your score is B.\n");
    }
    else if(score>=70)
    {
        printf("your score is C.\n");
    }
    else if(score>=60)
    {
        printf("your score is D.\n");
    }
    else
    {
        printf("your score is F.\n");
    }

    return 0;
}