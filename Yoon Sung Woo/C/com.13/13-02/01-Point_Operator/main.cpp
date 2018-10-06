#include <stdio.h>

int main()
{   
    int     iNum = 0;
    int*    ptr1 = &iNum;

    double  dNum = 0.0;
    double* ptr2 = &dNum;
    

    printf("int\nDefalut:  %p \n(ptr1 + 1): %p \n(ptr1 + 2): %p \n", (ptr1 + 1), (ptr1 + 2));
    printf("double\nDefalut: %p \n(ptr2 + 1): %p \n(ptr2 + 2): %p \n", (ptr2 + 1), (ptr2 + 2));

    ptr1 += 9;
    printf("%d \n", (*ptr1));
    return 0;
}