#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class Girl;

class Boy 
{
private:
    int height;
    friend class Girl;  //Girl class Friend
public:
    Boy(int len) : height(len)
    { }
    void ShowFriendInfo(Girl &frn);
};

class Girl
{
private:
    char phNum[20];
public:
    Girl(const char* num)
    {
        strcpy(phNum, num);
    }
    void ShowFriendInfo(Boy &frn);
    friend class Boy;   //Boy class Friend
};

void Boy::ShowFriendInfo(Girl &frn)
{
    std::cout << "Her Phone Number: " << frn.phNum << std::endl;
}

void Girl::ShowFriendInfo(Boy &frn)
{
    std::cout << "His height: " << frn.height << std::endl;
}
#endif