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
    Person(int myAge, const char* myName) : age(myAge)
    {
        int   len  = strlen(myName);
        this->name = new char[len + 1];
        strcpy(this->name, myName);
    }
    // Person(const Person& copy)
    // {
    //     int   len  = strlen(copy.name);
    //     this->name = new char[len + 1];
    //     strcpy(this->name, copy.name);
    // }
    void ShowPersonInfo() const
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age:  " << age  << std::endl;
    }
    ~Person()
    {
        delete []name;
        std::cout << "called destructor!" << std::endl;
    }
    void operator=(const Point &copy)
    {
        delete[] name;
        int   len  = strlen(copy.name);
        this->name = new char[len + 1];
        strcpy(this->name, copy.name);
        this->age = copy.age;
    }
};

#endif