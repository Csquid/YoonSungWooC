#include "head.h"

int main()
{
    Boy boy(170);
    Girl girl("010-1234-5678");

    boy.ShowFriendInfo(girl);
    girl.ShowFriendInfo(boy);

    return 0;
}