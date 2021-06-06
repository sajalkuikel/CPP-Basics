#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <string>
using namespace std;

class Student
{
    private:
        string school;
        string degree;
    public: 
        Student(){
            school= "";
            degree= "";
        }
        void getData(){
            cout << "Enter school : "; 
            cin >> school;
            cout << "Enter Degree: ";
            cin >> degree;
        }
        void putData(){
            cout << "School is: " << school <<endl;
            cout << "Degree  is: " << degree <<endl;
        }
};

#endif