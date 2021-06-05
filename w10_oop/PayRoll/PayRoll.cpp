#include "PayRoll.h"
#include <iostream>
using namespace std;

PayRoll::PayRoll(){

}

void PayRoll:: setPayRate(double rate)
{
    payRate = rate ;
}
void PayRoll:: setNoOfHours(double hours)
{
    noOFHours = hours ;
}   
void PayRoll:: setTotalPay()
{
    totalPay = payRate* noOFHours;
}


