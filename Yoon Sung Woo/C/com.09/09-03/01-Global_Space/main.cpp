#include <stdio.h>

void Add(int val);
int num;                //init 0 = global variable

int main()
{
    printf("num: %d \n", num);
    Add(3);

    printf("num: %d \n", num);
    num++; //add 1 the Global Variable

    printf("num: %d \n", num);

    return 0;    
}

void Add(int val)
{
    num += val;     //add the Num Value in Global Variable
}