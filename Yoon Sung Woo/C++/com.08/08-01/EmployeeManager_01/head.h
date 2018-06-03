#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

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
        // for(int i = 0; i < empNum; i++)
        // {
        //     empList[i]->ShowSalaryInfo();
        // }
    }
    void ShowTotalSalary() const
    {
        int sum = 0;

        // for(int i = 0; i < empNum; i++)
        // {
        //     sum += empList[i]->GetPay();
        // }
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
};

class PermanentWorker: public Employee
{
private:
    int salary;
public:
    PermanentWorker(const char* name, int money) : 
        Employee(name), salary(money)
    { }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
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
        : PermanentWorker(name, money), 
          salesResult(0), bonusRatio(ratio)
    { }
    void AddSalesResult(int value)
    {
        salesResult += value;
    }
    int GetPay() const
    {
        return PermanentWorker::GetPay() + (int)(salesResult * bonusRatio);
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        std::cout << "salary: " << GetPay() << std::endl << std::endl;
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
    void AddWorkTime(int time)
    {
        workTime += time;
    }
    int GetPay() const
    {
        return workTime * payPerHour;
    }
    void ShowSalaryInfo() const
    {
        ShowYourName();
        std::cout << "salary: " << GetPay() << 
            std::endl << std::endl;
    }
};
#endif