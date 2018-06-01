#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class Computer
{
private:
    char owner[50];
public:
    Computer(char* name)
    {
        strcpy(owner, name);
    }
    void Calculate()
    {
        std::cout << "요청 내용을 계산합니다." << std::endl;
    }
};

class NotebookComp : public Computer
{
private:
    int Battery;
public:
    NotebookComp(char* name, int initChag) :
        Computer(name), Battery(initChag)
    { }
    void Cha=
}

#endif