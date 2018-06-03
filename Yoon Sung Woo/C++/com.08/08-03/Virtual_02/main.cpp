#include "head.h"

int main()
{
    AAA* aptr = new AAA();
    AAA* abptr = new BBB();
    aptr->Func1();
    abptr->Func1();

    BBB* bptr = new BBB();
    bptr->Func1();

    return 0;
}