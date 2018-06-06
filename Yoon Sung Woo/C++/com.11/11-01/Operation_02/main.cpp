#include "head.h"

int main()
{
    Person man1(29, "Lee dong woo");
    Person man2(22, "Yoon ji yul" );
    man2 = man1;

    man1.ShowPersonInfo();
    man2.ShowPersonInfo();

    return 0;
}