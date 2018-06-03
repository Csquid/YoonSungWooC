#include <iostream>

class SoSimple 
{
private:
    int num1;
    static int num2;
public:
    SoSimple(int n): num1(n)
    { }
    static void Adder(int n)
    {
        // num1 += n;           //error
        num2 += n;
    }
};
int SoSimple::num2 = 0;

int main()
{
    SoSimple::Adder(10);
}