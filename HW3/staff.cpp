#include <iostream>
#include "staff.h"

Staff::Staff(int ID, std::string name, double salary, std::string department, std::string title) : Employee(salary, name, ID, department) {
    setTitle(title);
}

Staff::Staff() {
    setTitle("");
}

std::string Staff::getTitle() const {
    return title;
}

void Staff::setTitle(std::string title) {
    this->title = title;
}

std::string Staff::print() const {
    return
    "Title: " + getTitle() + "\n"
    + Employee::print();
}




