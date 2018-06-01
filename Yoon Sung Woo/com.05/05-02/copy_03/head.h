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
    Person(const Person &copy)
    {
        // int len = strlen(copy.name) + 1;
        // this->name = new char[len];
        // strcpy(this->name, copy.name);
        this->name = copy.name;
        this->age  = copy.age; 
    }
    Person(const char* myname, int myage)
    {
        std::cout << "call Constructor" << std::endl;
        int len = strlen(myname) + 1;
        name = new char[len];
        strcpy(name, myname);
        age = myage;
    }
    void ShowPersonInfo() const
    {
        printf("name address: %d \n", name);
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age : " << age  << std::endl;    
    }
    ~Person()
    {
        delete []name;
        std::cout << "called destructor!" << std::endl;
    }
};
#endif