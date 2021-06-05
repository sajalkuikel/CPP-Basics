#ifndef PAYROLL_H
#define PAYROLL_H
#include <iostream>
using namespace std;

class PayRoll{
    private: 
        double payRate;
        double noOFHours;
        double totalPay;
    public: 
        PayRoll();
        void setPayRate(double);
        void setNoOfHours(double);
        void setTotalPay();

        double getPayRate()const
        {
            return payRate;
        }
        double getNoOfHours()const
        {
            return noOFHours;
        }
        double getTotalPay()const
        {
            return totalPay;
        }
};

#endif
