#include "head.h"

int main()
{
    Base* bptr = new Derived();
    // Derived* dptr = bptr;
    // bptr->DerivedFunc();

    Derived* ddptr = new Derived();
    Base*    bbptr = ddptr;
    Base*    bbptr(ddptr);
}