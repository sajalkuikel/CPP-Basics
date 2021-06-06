#ifndef PRODUCTION_WORKER_H
#define PRODUCTION_WORKER_H
#include "Employee.h"
using namespace std;
#include <iostream>
class ProductionWorker: public Employee{
    int shift;
    double hourlyPay;
public:
    ProductionWorker(const string& name, const string& date, int empNum, int shift, double hourlyPay);

    void DisplayInfo(){
        string time = (shift == 1) ? "Day" : "Night";
        cout << " Name " << this->getName() <<
        "\n Date: " << this->getDate() <<
        "\n Emp Number: " << this->getEmpNum() <<
        "\n Shift: " << time <<
        "\n Hourly Pay: " << hourlyPay;
    };
};




#endif