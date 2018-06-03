#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class Person 
{
private:
    int age;
    char name[50];
public:
    Person(int myage, const char* myname): age(myage)
    {
        strcpy(name, myname);
    }
    void WhatYourName() const
    {
        std::cout << "my name is " << name << std::endl;
    }
    void HowOldAreYou() const
    {
        std::cout << "I'm " << age << " years old" << std::endl;
    }
};

class UnivStudent: public Person    //Person class Inheritance
{
private:
    char major[50];
public:
    UnivStudent(const char* myname, int myage, const char* mymajor): Person(myage, myname)
    {
        strcpy(major, mymajor);
    }
    void WhoAreYou() const
    {
        WhatYourName();
        HowOldAreYou();
        std::cout << "My major is " << major << std::endl;
    }
};

class HighStudent: public Person    //Person class Inheritance
{
private:
    char crew[50];
public:
    HighStudent(const char* myname, int myage, const char* mycrew): Person(myage, myname)
    {
        strcpy(crew, mycrew);
    }
    void WhoAreYou() const
    {
        WhatYourName();
        HowOldAreYou();
        std::cout << "My Crew is " << crew << std::endl;
    }
};

#endif