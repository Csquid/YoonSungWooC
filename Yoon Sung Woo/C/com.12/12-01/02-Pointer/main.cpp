#include <stdio.h>

void PrintData(char* cData, int* iData, double* dData)
{
    //char*   cData
    //int*    iData
    //double* dData
    printf("*pStr:  %c  \n", *cData);
    printf("*piNum: %d  \n", *iData);
    printf("*pdNum: %lf \n", *dData);
}

int main(void)
{
    //char pointer
    char  cStr = 'A';
    char* pStr = &cStr;

    //int pointer 
    int  iNum = 10;
    int* piNum = &iNum;

    //double pointer
    double  dNum = 1.23;
    double* pdNum = &dNum;
    
    PrintData(pStr, piNum, pdNum);

    *pStr = 'B';
    *piNum = 20;
    *pdNum = 2.34;

    PrintData(pStr, piNum, pdNum);

    return 0;
}