#include <iostream>

int main()
{
    int num1, num2;
    std::cout << "two number: ";
    std::cin  >> num1 >> num2;

    try
    {
        if(num2 == 0)
        {
            throw num2;
        }
        std::cout << "Division share: "     << num1 / num2 << std::endl;
        std::cout << "Division remaining: " << num1 % num2 << std::endl;
    }
    catch(int expn)
    {
        std::cout << "Don't " << expn << " Division " << std::endl;
        std::cout << "program restart" << std::endl;
    }
    std::cout << "end of main" << std::endl;

    return 0;
}