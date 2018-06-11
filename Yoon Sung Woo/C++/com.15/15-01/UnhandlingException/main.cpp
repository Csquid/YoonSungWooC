#include <iostream>

int main()
{
    int num1, num2;
    std::cout << "two number: ";
    std::cin  >> num1 >> num2;

    std::cout << "Division share: "     << num1 / num2 << std::endl;
    std::cout << "Division remaining: " << num1 % num2 << std::endl;

    return 0;
}