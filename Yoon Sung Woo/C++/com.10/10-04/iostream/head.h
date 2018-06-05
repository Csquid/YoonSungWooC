#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <stdio.h>

namespace mystd
{
    // using namespace std;
    class ostream
    {
    public:
        ostream& operator<< (const char* str)
        {  
            printf("%s", str);
            return *this;
        }
        ostream& operator<< (char str)
        {
            printf("%c", str);
            return *this;
        }
        ostream& operator<< (int num)
        {
            printf("%d", num);
            return *this;
        }
        ostream& operator<< (double e)
        {
            printf("%g", e);
            return *this;
        }
        ostream& operator<< (ostream& (*fp)(ostream &ostm))
        {
            return fp(*this);
        }
    };
    
    ostream& endl(ostream &ostm)        //function name
    {
        ostm << '\n';
        fflush(stdout);     //buffer empty
        return ostm;
    }

    class istream
    {
    public:
        istream& operator>> (int &num)
        {
            scanf("%d", &num);
            return *this;
        }
        istream& operator>> (double e)
        {
            scanf("%g", &e);
            return *this;
        }
        istream& operator>> (const char* str)
        {
            scanf("%s", str);
            return *this;
        }
        istream& operator>> (char str)
        {
            scanf("%c", str);
            return *this;
        }
    };

    ostream cout;                       //class의 object
    istream cin;                        //class의 object
}
#endif