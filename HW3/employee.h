#ifndef HW3_EMPLOYEE_H
#define HW3_EMPLOYEE_H
#include <iostream>
#include "person.h"

class Employee : public Person {
public:
    Employee(double, std::string, int, std::string);

    Employee();

    int getSalary() const;

    void setSalary(int);

    std::string getDepartment() const;

    void setDepartment(std::string);

    std::string print() const;

private:
    double salary;
    std::string department;
};


#endif
