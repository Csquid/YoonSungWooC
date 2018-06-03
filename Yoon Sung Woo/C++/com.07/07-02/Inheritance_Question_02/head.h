#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class MyFriendInfo
{
private:
    char* name;
    int   age;
public:
    MyFriendInfo()
    { }
    MyFriendInfo(int myAge, const char* myName): age(myAge)
    {
        std::cout << "Friend Constructor" << std::endl;
        name = new char[strlen(myName) + 1];
        strcpy(name, myName);
    }
    void ShowMyFriendInfo()
    {
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age:  " << age  << std::endl;
    }
    ~MyFriendInfo()
    {
        std::cout << "Friend Destructor" << std::endl;
        delete[] name;
    }
};

class MyFriendDetailInfo : public MyFriendInfo
{
private:
    char* address;
    char* phone;
public:
    MyFriendDetailInfo()
    { }
    MyFriendDetailInfo(int myAge, const char* myName, const char* myAddress, const char* myPhone): 
        MyFriendInfo(myAge, myName)
    {
        std::cout << "Detail Constructor" << std::endl;
        address = new char[strlen(myAddress) + 1];
        phone   = new char[strlen(myPhone)   + 1];
        
        strcpy(address, myAddress);
        strcpy(phone,   myPhone);
    }
    void ShowMyFriendDetailInfo()
    {
        ShowMyFriendInfo();
        std::cout << "Address: " << address << std::endl;
        std::cout << "Phone:   " << phone   << std::endl;
    }
    ~MyFriendDetailInfo()
    {
        std::cout << "Detail Destructor" << std::endl;
        delete[] address;
        delete[] phone;
    }
};

#endif