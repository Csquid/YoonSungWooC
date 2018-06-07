#include "head.h"

int main()
{
    BoundCheckIntArray arr(5);
    // BoundCheckIntArray am = arr;
    
    for(int i = 0; i < 5; i++)
    {
        arr[i] = (i + 1) * 11;
    }

    ShowAllData(arr);

    return 0;
}