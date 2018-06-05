#include "head.h"

int main()
{
    char name1[50];
    char name2[50];

    mystd::cout << "Name: ";
    mystd::cin  >> name1 >> name2;
    
    mystd::cout << "name1:" << name1 << "\nname2: " << name2 << mystd::endl;

    return 0;
}