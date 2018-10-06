#include <stdio.h>

int main()
{
    int    iArr[3] = { 1, 2, 3 };
    double dArr[3] = { 1.1, 2.2, 3.3 };

    printf("%3d %lf \n", *iArr, *dArr);

    *iArr += 100;
    *dArr += 120.5;

    printf("%3d %lf \n", iArr[0], dArr[0]);

    return 0;
}