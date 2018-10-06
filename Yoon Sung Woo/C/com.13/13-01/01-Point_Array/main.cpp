#include <stdio.h>

int main()
{
    int arr[3] = { 0, 1, 2 };

    printf("Array  Name:    %p \n", arr);
    printf("First  Element: %p \n", &arr[0]);
    printf("Second Element: %p \n", &arr[1]);
    printf("third  Element: %p \n", &arr[2]);

    return 0;
}