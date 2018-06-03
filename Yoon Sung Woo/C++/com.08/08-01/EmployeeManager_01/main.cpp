#include "head.h"

int main()
{
    EmployeeHandler handler;

    //PermanentJob(정규직) 등록
    handler.AddEmployee(new PermanentWorker("Kim", 1000));
    handler.AddEmployee(new PermanentWorker("Lee", 1500));

    //TemporaryJob(임시직) 등록
    TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
    alba->AddWorkTime(5);
    handler.AddEmployee(alba);

    //SalesJob(영업직) 등록
    SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
    seller->AddSalesResult(7000);
    handler.AddEmployee(seller);

    handler.ShowAllSalaryInfo();

    handler.ShowTotalSalary();
    return 0;
}