#include "head.h"

int main() 
{
    Third*  tptr = new Third();
    Second* sptr = tptr;
    First*  fptr = tptr;

    fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();

    delete tptr;

    return 0;
}