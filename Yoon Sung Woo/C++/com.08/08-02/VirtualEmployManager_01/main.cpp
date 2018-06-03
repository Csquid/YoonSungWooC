#include "head.h"

int main()
{
    EmployeeHandler handler;

    ForeignSaleWorker* fsller1 = new ForeignSaleWorker("Hong", 1000, 0.1, RISK_LEVEL::RISK_A);
    fsller1->AddSalesResult(7000);
    handler.AddEmployee(fsller1);

    ForeignSaleWorker* fsller2 = new ForeignSaleWorker("Yoon", 1000, 0.1, RISK_LEVEL::RISK_B);
    fsller2->AddSalesResult(7000);
    handler.AddEmployee(fsller2);

    ForeignSaleWorker* fsller3 = new ForeignSaleWorker("Monoe", 1000, 0.1, RISK_LEVEL::RISK_C);
    fsller3->AddSalesResult(7000);
    handler.AddEmployee(fsller3);

    handler.ShowAllSalaryInfo();

    // //PermanentJob(정규직) 등록
    // handler.AddEmployee(new PermanentWorker("Kim", 1000));
    // handler.AddEmployee(new PermanentWorker("Lee", 1500));

    // //TemporaryJob(임시직) 등록
    // TemporaryWorker* alba = new TemporaryWorker("Jung", 700);
    // alba->AddWorkTime(5);
    // handler.AddEmployee(alba);

    // //SalesJob(영업직) 등록
    // SalesWorker* seller = new SalesWorker("Hong", 1000, 0.1);
    // seller->AddSalesResult(7000);
    // handler.AddEmployee(seller);

    // handler.ShowAllSalaryInfo();

    // handler.ShowTotalSalary();
    return 0;
}