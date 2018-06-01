#include <iostream>

void swap(int* n1, int* n2);
void swap(char* c1, char* c2);

int main() 
{
    int num1 = 20;
    int num2 = 30;
    

    std::cout << "Before" << std::endl;
    std::cout << "num1: " << num1 << ' ' << "num2: " << num2 << std::endl;
    swap(&num1, &num2);
    std::cout << "After" << std::endl;
    std::cout << "num1: " << num1 << ' ' << "num2: " << num2 << std::endl << std::endl;

    char ch1 = 'A';
    char ch2 = 'Z';
    
    std::cout << "Before" << std::endl;
    std::cout << "ch1: " << ch1 << ' ' << "ch2: " << ch2 << std::endl;
    swap(&ch1, &ch2);
    std::cout << "After" << std::endl;
    std::cout << "ch1: " << ch1 << ' ' << "ch2: " << ch2 << std::endl;

}

void swap(int* n1, int* n2) 
{
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

void swap(char* c1, char* c2) 
{
    char temp = *c1;
    *c1 = *c2;
    *c2 = temp;
}