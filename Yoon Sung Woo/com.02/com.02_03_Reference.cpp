#include <iostream>

int main() {
    int num1 = 1020;
    int &num2 = num1;

    num2 = 3047;
    std::cout << "num1 Val: " << num1 << std::endl;
    std::cout << "num2 Ref: " << num2 << std::endl;

    std::cout << "num1 Val: " << &num1 << std::endl;
    std::cout << "num2 Ref: " << &num2 << std::endl;

    return 0;
}