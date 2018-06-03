#ifndef _HEAD_H_
#define _HEAD_H_

#include <iostream>
#include <cstring>

class PermanentWorker
{
private:
    char name[100];
    int  salary;
public:
    PermanentWorker(const char* myname, int money): salary(money)
    {
        strcpy(this->name, myname);
    }
    int GetPay() const
    {
        return salary;
    }
    void ShowSalaryInfo() const
    {
        std::cout << "Name: "   << name     << std::endl;
        std::cout << "Salary: " << GetPay() << std::endl << std::endl;
    }
};

class EmployeeHandler
{
private:
    PermanentWorker* empList[50];
    int empNum;
public:
    EmployeeHandler() : empNum(0)
    { }
    void AddEmployee(PermanentWorker* emp)
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