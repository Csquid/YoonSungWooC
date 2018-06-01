#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class Person
{
private:
    char* name;
public:
    Person(const char* myname)
    {
        name = new char[strlen(myname) + 1];
        strcpy(name, myname);
    }
    ~Person()
    {
        delete[] name;
    }
    void WhatYourName() const
    {
        std::cout << "my name is " << name << std::endl;
    }
};

class UnivStudent : public Person
{
private:
    char* major;
public:
    UnivStudent(const char* myname, const char* mymajor) : Person(myname)
    {
        major = new char[strlen(mymajor) + 1];
        strcpy(major, mymajor);
    }
    ~UnivStudent()
    {
        delete[] major;
    }

    void WhatAreYou() const
    {
        WhatYourName();
        std::cout << "my major is " << major << std::endl;
    }
};
#endif