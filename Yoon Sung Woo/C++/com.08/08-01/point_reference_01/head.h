#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class Person
{
public:
    void Sleep() { std::cout << "Sleep" << std::endl; }
};

class Student : public Person
{
public:
    void Study() { std::cout << "Study" << std::endl; }
};

class PartTimeStudent : public Student
{
public:
    void Work() { std::cout << "Work" << std::endl; }
};

#endif