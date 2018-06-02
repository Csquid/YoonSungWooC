#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class Employee
{
private:
    char name[100];
public:
    Employee(const char* name)
    {
        strcpy(this->name, name);
    }
    void ShowYourName() const
    {
        std::cout << "name: " << name << std::endl;
    }
    virtual int GetPay() const = 0;             //순수 가상함수
    virtual void ShowSalaryInfo() const = 0;    //순수 가상함수
};

class PermanentWorker: public Employee
{
private:
    int salary;
public:
    PermanentWorker(const char* name, int money) : 
        Employee(name), salary(money)
    { }
    virtual int GetPay() const
    {
        return salary;
    }
    virtual void ShowSalaryInfo() const
    {
        ShowYourName();
        std::cout << "salary: " << GetPay() << std::endl << std::endl;
    }
};

class SalesWorker : public PermanentWorker
{
private:
    int    salesResult;
    double bonusRatio;
public:
    SalesWorker(const char* name, int money, double ratio)
        : PermanentWorker(name, money), salesResult(0), bonusRatio(ratio)
    { }
    virtual void AddSalesResult(int value)
    {
        salesResult += value;
    }
    virtual int GetPay() const
    {
        return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
    }
    virtual void ShowSalaryInfo() const
    {
        ShowYourName();
        std::cout << "salary: " << GetPay() << std::endl << std::endl;
    }
};

enum class RISK_LEVEL
{
    RISK_A = 30,
    RISK_B = 20,
    RISK_C = 10,
};

class ForeignSaleWorker : public PermanentWorker
{
private:
    double bonusRatio;
    int salesResult;
    int bonusPay;
    int rishPay;
    int sumPay;
    RISK_LEVEL Risk;
public:
    ForeignSaleWorker(const char* name, int money, double ratio, RISK_LEVEL risk_pay)
        : PermanentWorker(name, money), Risk(risk_pay), bonusRatio(ratio), salesResult(0)
    { }
    virtual void AddSalesResult(int value)
    {
        salesResult += value;
        bonusPay    = PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
        rishPay     = (bonusPay * (int)Risk) / 100;
        sumPay      = bonusPay + rishPay;
    }
    virtual int GetPay() const
    {
        return bonusPay;
    }
    int GetRiskPay() const
    {
        return rishPay;
    }
    int GetSumPay() const
    {
        return sumPay;
    } 
    virtual void ShowSalaryInfo() const
    {
        ShowYourName();
        std::cout << "salary: " <<  GetPay() << std::endl;
        std::cout << "risk Pay:" << GetRiskPay() << std::endl;
        std::cout << "sum: " << GetSumPay() << std::endl << std::endl;
    }
};

class TemporaryWorker: public Employee
{
private:
    int workTime;
    int payPerHour;
public:
    TemporaryWorker(const char* name, int pay): 
        Employee(name), workTime(0), payPerHour(pay)
    { }
    virtual void AddWorkTime(int time)
    {
        workTime += time;
    }
    virtual int GetPay() const
    {
        return workTime * payPerHour;
    }
    virtual void ShowSalaryInfo() const
    {
        ShowYourName();
        std::cout << "salary: " << GetPay() << std::endl << std::endl;
    }
};

class EmployeeHandler
{
private:
    Employee* empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0)
    { }
    void AddEmployee(Employee* emp)
    {
        empList[empNum++] = emp;
    }
    void ShowAllSalaryInfo() const
    {
        for(int i = 0; i < empNum; i++)
        {
            empList[i]->ShowSalaryInfo();
        }
    }
    void ShowTotalSalary() const
    {
        int sum = 0;

        for(int i = 0; i < empNum; i++)
        {
            sum += empList[i]->GetPay();
        }
        std::cout << "salary sum: " << sum << std::endl;
    }
    ~EmployeeHandler()
    {
        for(int i = 0; i < empNum; i++)
        {
            delete empList[i];
        }
    }

};
#endif