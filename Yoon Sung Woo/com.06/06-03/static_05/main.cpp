#include <iostream>

class CountryArea
{
public:
    const static int RUSSIA      = 1707540;
    const static int CANADA      = 998467;
    const static int CHINA       = 957290;
    const static int SOUTH_KOREA = 9922;
};

int main()
{
    std::cout << "Russia CountryArea: " << CountryArea::RUSSIA << "km2" << std::endl;
    std::cout << "Canada CountryArea: " << CountryArea::CANADA << "km2" << std::endl;
    std::cout << "China CountryArea:  " << CountryArea::CHINA  << "km2" << std::endl;
    std::cout << "South_Korea CountryArea: " << CountryArea::SOUTH_KOREA << "km2" << std::endl;
}