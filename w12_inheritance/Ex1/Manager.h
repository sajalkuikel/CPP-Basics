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
        int due;
    public: 
        Manager(){

            title = "";
            due=0;
        }
        void getData() {
            Employee::getData();
            Student::getData();

            cout << "Enter title : "; 
            cin >> title;

            cout << "Enter due : "; 
            cin >> due;
        }
        void putData(){
            Employee::putData();
            Student::putData();
            cout << "Title is: " << title <<endl;
            cout << "Due is: " << due <<endl;
        }
};

#endif