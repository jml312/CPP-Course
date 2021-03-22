#include <iostream>
#include <ostream>
#include "person.h"

Person::Person(int ID, std::string name) {
    setID(ID);
    setName(name);
}

Person::Person() {
    setID(0);
    setName("");
}

int Person::getID() const {
    return ID;
}

void Person::setID(int ID) {
    this->ID = ID;
}

std::string Person::getName() const {
    return name;
}

void Person::setName(std::string name) {
    this->name = name;
}

std::string Person::print() const {
    return
    "Name: " + getName() + "\n"
    + "ID: " + std::to_string(getID()) + "\n";
}
