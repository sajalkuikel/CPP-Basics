
#include <iostream>
#include <string>

#include "Employee.h"
#include "Scientist.h"
#include "Manager.h"
#include "Laborer.h"
#include "Student.h"

using namespace std;

int main(){

    Student st;
    cout<<"Enter student data: "<< endl;
    st.getData();
    st.putData();ideal
    cout << "*********************\n" ; 

    Employee e;
    cout<<"Enter Employee data: "<< endl;
    e.getData();
    e.putData();
    cout << "*********************\n" ; 


    Laborer l ;
    cout << "Enter labourer data: " <<endl;
    l.getData();
    l.putData();
    cout << "*********************\n" ; 

    Manager m;
    cout <<"Enter Manager data: " << endl ;
    m.getData();
    m.putData();
    cout << "*********************\n" ; 

    Scientist s;
    cout << "Enter scientist data: " <<endl;
    s.getData();
    s.putData();
    cout << "*********************\n" ; 


}