#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <iostream>
#include <string>
using namespace std;

class Employee
{
    private:
        string name;
        int empNum;
    public: 
        
        Employee(){
            name="";
            empNum=0;
        }
        void getData(){
            cout << "Enter name: "; 
            cin >> name;
            cout << "Enter emp Number: ";
            cin >> empNum;
        }
        void putData(){
            cout << "Name is: " << name <<endl;
            cout << "Employee number is: " << empNum <<endl;
        }
};

#endif