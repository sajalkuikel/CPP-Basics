#ifndef MANAGER_H
#define MANAGER_H
#include <iostream>
#include <string>
#include "Student.h"
#include "Employee.h"
using namespace std;

class Manager : public Student, public Employee
{
    private:
        string title;
    public: 
        Manager(){

            title = "";
        }
        void getData() {
            Employee::getData();
            Student::getData();

            cout << "Enter title : "; 
            cin >> title;
        }
        void putData(){
            Employee::putData();
            Student::putData();
            cout << "Title is: " << title <<endl;
        }
};

#endif