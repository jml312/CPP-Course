#include <iostream>
#include "employee.h"

Employee::Employee(double salary, std::string name, int ID, std::string department) : Person(ID, name) {
    setSalary(salary);
    setDepartment(department);
}

Employee::Employee() {
    setSalary(0);
    setDepartment("");
}

int Employee::getSalary() const {
    return salary;
}

void Employee::setSalary(int salary) {
    this->salary = salary;
}

std::string Employee::getDepartment() const {
    return department;
}

void Employee::setDepartment(std::string department) {
    this->department = department;
}

std::string Employee::print() const {
    return
    "Department: " + getDepartment() + "\n"
    + "Salary: " + std::to_string(getSalary()) + "\n"
    + Person::print();
}
