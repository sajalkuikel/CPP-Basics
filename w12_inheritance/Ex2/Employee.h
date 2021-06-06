#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
using namespace std;
class Employee{
    string name, date;
    int emp_num;
public:
    Employee(const string &name, const string &date, int empNum) : name(name), date(date), emp_num(empNum) {}

    const string &getName() const {
        return name;
    }

    void setName(const string &name) {
        Employee::name = name;
    }

    const string &getDate() const {
        return date;
    }

    void setDate(const string &date) {
        Employee::date = date;
    }

    int getEmpNum() const {
        return emp_num;
    }

    void setEmpNum(int empNum) {
        emp_num = empNum;
    }


};
#endif