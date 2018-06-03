#include "head.h"

int main() 
{
    Person parr[3];
    char* strptr;
    char  namestr[100];
    int   age;
    int   len;

    for(int i = 0; i < 3; i++)
    {
        std::cout << "Name: ";
        std::cin  >> namestr;

        std::cout << "Age:  ";
        std::cin  >> age;
        
        len = strlen(namestr) + 1;
        strptr = new char[len];
        strcpy(strptr, namestr);
        parr[i].SetPersonInfo(strptr, age);
    }

    for(int i = 0; i < 3; i++) 
    {
        parr[i].ShowPersonInfo();
    }
    
}