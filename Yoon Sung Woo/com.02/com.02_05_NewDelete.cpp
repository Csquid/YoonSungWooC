#include <iostream>
#include <string.h>

char* MakeStrAdr(int len);

int main() 
{
    char* str = MakeStrAdr(20);

    strcpy(str, "I am so Happy~");
    std::cout << str << std::endl;

    delete[] str;

    return 0;
}

char* MakeStrAdr(int len) 
{
    char* str = new char[len];
    return str;
}