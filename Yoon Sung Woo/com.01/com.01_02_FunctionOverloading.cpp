#include <iostream>

int MyFunc(int num);
int MyFunc(int a, int b);

int main() 
{
    MyFunc(20);
    MyFunc(30, 40);

    return 0;
}

int MyFunc(int num) 
{
    num++;
    return num;
}

int MyFunc(int a, int b)
{
    return a + b;
}

//  Overloading: 
//    매개변수의 선언이 달라야한다.
//    매개변수의 개수가 달라야한다.
//    반환형이 같아야한다.