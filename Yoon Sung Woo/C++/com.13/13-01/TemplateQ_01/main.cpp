#include <iostream>

class Point
{
private:
    int xPos, yPos;
public:
    Point(int x = 0, int y = 0) : xPos(x), yPos(y)
    { }
    void ShowPosition() const 
    {
        std::cout << "[" << xPos << ", " << yPos << "]" << std::endl;
    }
};

template <class T>
void SwapData(T& po1, T& po2)
{
    T temp;
    temp = po1;
    po1 = po2;
    po2 = temp;
}

int main()
{
    Point pm1(15, 10);
    Point pm2(1, 2  );
    SwapData(pm1, pm2);

    pm1.ShowPosition();
    pm2.ShowPosition();

    return 0;
}