#include <iostream>

class Base
{
private:
    int num1;
protected:
    int num2;
public:
    int num3;
    void ShowData()
    {
        std::cout << num1 << ", " << num2 << ", " << num3 << std::endl;
    }
};

class Derived : public Base
{
public:
    void ShowBaseMember()
    {
        std::cout << num1 << std::endl;     // compile error
        std::cout << num2 << std::endl;     // compile Ok
        std::cout << num3 << std::endl;     // compile Ok
    }
};

int main()
{

}