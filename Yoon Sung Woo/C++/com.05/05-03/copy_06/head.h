#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class Temporary
{
private:
    int num;
public:
    Temporary(int n) : num(n)
    {
        std::cout << "create obj: " << num << std::endl;
    }
    ~Temporary()
    {
        std::cout << "destory obj: " << num << std::endl; 
    }
    void ShowTempInfo()
    {
        std::cout << "My num is " << num << std::endl;
    }
};
#endif