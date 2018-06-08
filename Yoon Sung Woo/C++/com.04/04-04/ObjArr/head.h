#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class Person 
{
private:   
    char* name;
    int   age;
public:
    Person(const char* myName, int myAge) : age(myAge)
    {
        int len = strlen(myName) + 1;

        this->name = new char[len];
        strcpy(this->name, myName);
    }
    Person()
    {
        this->name = NULL;
        this->age  = 0;
        std::cout << "called Person()" << std::endl;
    }
    void SetPersonInfo(char* myName, int myAge)
    {
        {
            this->name  = myName;
            this->age   = myAge;
        }
    }
    void ShowPersonInfo() const
    {
        std::cout << "Name: " << this->name << ", ";
        std::cout << "Age:  " << this->age  << std::endl; 
    }
    ~Person()
    {
        delete []this->name;
        std::cout << "called destructor!" << std::endl;
    }
};

#endif