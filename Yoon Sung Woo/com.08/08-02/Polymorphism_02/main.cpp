#include "haed.h"

int main()
{
    Third*  tptr = new Third();
    Second* sptr = tptr;
    First*  fptr = sptr;

    tptr->FirstFunc();
    tptr->SecondFunc();
    tptr->ThridFunc();

    sptr->FirstFunc();
    sptr->SecondFunc();
    // sptr->ThridFunc();

    fptr->FirstFunc();
    // fptr->SecondFunc();
    // fptr->ThridFunc();

    delete tptr;
}