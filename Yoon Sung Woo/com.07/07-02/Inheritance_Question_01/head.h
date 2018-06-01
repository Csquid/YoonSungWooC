#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>

class Car
{
private:
    int gasolineGauge;
public:
    Car(): gasolineGauge(0)
    { }
    Car(int n): gasolineGauge(n)
    { }
    int GetGasGauge()
    {
        return gasolineGauge;
    }
};

class HybridCar : public Car
{
private:
    int electricGauge;
public:
    HybridCar(): electricGauge(0)
    { }
    HybridCar(int n): electricGauge(n)
    { }
    int GetElecGauge()
    {
        return electricGauge;
    }
};

class HybridWaterCar : public HybridCar
{
private:
    int waterGauge;
public:
    HybridWaterCar(): waterGauge(0)
    { }
    HybridWaterCar(int n): waterGauge(n)
    { }
    void ShowCurrentGuage()
    {
        std::cout << "잔여 가솔린: " << GetGasGauge() << std::endl;
        std::cout << "잔여 전기량: " << GetElecGauge() << std::endl;
        std::cout << "잔여 워터량: " << waterGauge << std::endl;
    }
};

#endif