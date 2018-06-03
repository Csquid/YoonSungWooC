#include "head.h"

int main()
{
    First* ptr = new Second("simple", "complex");
    
    delete ptr;

    return 0;
}