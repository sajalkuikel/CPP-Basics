#ifndef SCIENTIST_H
#define SCIENTIST_H
#include <iostream>
#include <string>
#include "Student.h"
#include "Employee.h"
using namespace std;

class Scientist:public Student, public Employee
{
    private:
        int noPub;
    public: 
        Scientist(){
            noPub =0;
        }
        void getData(){
            Student::getData();
            Employee::getData();
            
            cout << "Enter no of publication : "; 
            cin >> noPub;
        }
        void putData(){
            Employee::putData();
            Student::putData();
            cout << "No of publication " << noPub <<endl;
        }
};

#endif