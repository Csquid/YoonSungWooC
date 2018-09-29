#include <stdio.h>

void SimpleAdder(int n1, int n2)
{
    printf("%d + %d = %d \n", n1, n2, n1 + n2);
}

void ShowString(const char* str)
{ 
    printf("%s \n", str);
}

int main()
{
    const char* str = "Function Pointer";
    int num1  = 10;
    int num2  = 20;

    void (*fptr1)(int, int)       = SimpleAdder;
    void (*fptr2)(const char *)   = ShowString;

    fptr1(num1, num2);
    fptr2(str);

    printf("fptr1 address: %p \n", fptr1);
    printf("fptr2 address: %p \n\n", fptr2);

    printf("SimpleAdder address: %p \n", SimpleAdder);
    printf("ShowString address: %p \n\n", ShowString);

    if(fptr1 == SimpleAdder)
    {
        printf("fptr1 == SimpleAdder \n");
    }

    return 0;
}