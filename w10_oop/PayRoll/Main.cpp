#include <iostream>
#include "PayRoll.h"
#include "PayRoll.cpp"

using namespace std;

int main(){
    const int SIZE =7;
    PayRoll emp[SIZE];

    double payRate, hours;
    bool valid = false;
    
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Enter details of employee" << i +1 << endl;
        cout << "PayRate: ";
        cin >> payRate;

        while (valid==false){
            cout << "No of hours worked: ";
            cin >> hours ;

            if(hours > 60){
                cout << "Invalid hours\nPlease enter again";
            }else{
                valid = true;
            }
        }
        valid=false;
        emp[i].setNoOfHours(hours);
        emp[i].setPayRate(payRate);
        emp[i].setTotalPay();

    }

    for (int i = 0; i < SIZE; i++)
    {
        cout << "Gross Pay for employee: " <<  i+1 << " = Rs." << emp[i].getTotalPay() << endl;
    }
    
    return 0;
}