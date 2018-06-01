#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class A
{
private:
    int myAge;
public:
    A(): myAge(10)
    { }
    A(int n): myAge(n)
    { }
    ShowAge()
    {
      std::cout << "Age: " << myAge << std::endl;  
    }
};

class B: public A
{
private:
    char myHp[20];
public:
    B(): A()
    { }
    //A Inheritance(상속)을 받지만 A의 private에 myAge가 있기때문에 직접 접근이 불가능하기때문에
    //A의 생성자를 통해 초기화를 한다.
    B(int age, const char* hp): A(age)
    {
        strcpy(myHp, hp);
    }
    ShowInfo()
    {
        ShowAge();
        std::cout << "Hp: " << myHp << std::endl;
    }
};

#endif