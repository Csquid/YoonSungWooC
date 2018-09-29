#include <iostream>

int main(int argc, char const *argv[])
{
    int    size    = 0;
    int    nIntNum = 7;
    int*   nPtrVar = &nIntNum;
    char   ch1[2]  = { 'A', 'B' };
    double nDoubleNumber = 1.25;

    for(int i = 0; i < 2; i++)
    {
        size = sizeof(ch1[i]);
        std::cout << "char(" << i << "): " << size << std::endl;
    }
    
    size = sizeof(nIntNum);
    std::cout << "num: " << size << std::endl;

    size = sizeof(nDoubleNumber);
    std::cout << "nDoubleNumber: " << size << std::endl;

    size = sizeof(nPtrVar);
    std::cout << "nPtrVar: " << size << std::endl;

    std::cout << "nPtrVar: " << nPtrVar << std::endl;
    
    return 0;
}