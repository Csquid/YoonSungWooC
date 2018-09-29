#include <stdio.h>

int main()
{
    int a = 10;
    char b = 'A';
    float c = 1.234;
    const char* d = "Hello";

    printf("a: %d  \n", a);
    printf("a: %#o \n", a);
    printf("a: %#x \n", a);
    printf("b(integer): %d \n", b);
    printf("c: %lf \n", c);
    printf("b(char): %c \n", b);
    printf("d: %s \n", d);

    return 0;
}