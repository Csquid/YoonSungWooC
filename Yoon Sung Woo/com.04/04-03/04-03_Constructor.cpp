#include <iostream>

class SimpleClass
{
private:
    int num1;
    int num2;
public:
    SimpleClass()
    {
        this->num1 = 0;
        this->num2 = 0;
    }
    SimpleClass(int n)
    {
        this->num1 = n;
        this->num2 = 0;
    }
    SimpleClass(int n1, int n2)
    {
        this->num1 = n1;
        this->num2 = n2;
    }
    void ShowData() const
    {
        std::cout << num1 << ' ' << num2 << std::endl;
    }
};

int main() 
{
    SimpleClass c1;
    c1.ShowData();

    SimpleClass c2(100);
    c2.ShowData();
    
    SimpleClass c3(100, 200);
    c3.ShowData();

    return 0;
}