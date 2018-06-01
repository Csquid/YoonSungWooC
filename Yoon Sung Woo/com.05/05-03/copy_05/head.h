#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class SoSimple
{
private:
    int num;
public:
    SoSimple(int n) : num(n)
    { }
    SoSimple(const SoSimple &copy) : num(copy.num)
    {
        std::cout << "Called SoSimple(const SoSimple &copy)" << std::endl;
    }
    SoSimple& AddNum(int n)
    {
        num += n;
        return *this;
    }
    void ShowData()
    {
        std::cout << "num: " << this->num << std::endl;
    }
};

SoSimple SimpelFuncObj(SoSimple ob)
{
    std::cout << "return before" << std::endl;
    return ob;
}
#endif