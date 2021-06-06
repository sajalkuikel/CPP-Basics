#include <iostream>
#include "Employee.h"
#include "ProductionWorker.h"
using namespace std;
ProductionWorker::ProductionWorker(const string &name, const string &date, int empNum, int shift, double hourlyPay) :Employee(name, date, empNum){
    ProductionWorker::shift = shift;
    ProductionWorker::hourlyPay = hourlyPay;
}

int main(){
    ProductionWorker *pw = new ProductionWorker("Ram", "2 Feb 2020", 200, 2, 333);

    pw->DisplayInfo();
}