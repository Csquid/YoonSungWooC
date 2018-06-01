#include "head.h"

int main()
{
    Person po1("Mango", 15);
    Person po2(po1);

    po1.ShowPersonInfo();
    po2.ShowPersonInfo();

    return 0;
}
