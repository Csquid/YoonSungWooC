#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

namespace mystd
{
    class ostream
    {
    public:
        void operator<< (char* str)
        {  
            printf("%s", str);
        }
        void operator<< (char str)
        {
            printf("%c", str)
        }
        void operator<< (int num)
        {
            print("%d", num);
        }
        void operator<< (double e)
        {
            print("%g", e);
        }
        void operator<< (ostream& (*fp)(ostream &ostm))
        {
            fp(*this);
        }
    };

    ostream& endl(ostream &ostm)
    {
        ostm << '\n';
        fflush(stdout);
        return ostm;
    }

    ostream cout;
}
#endif