#include <iostream>
#include "faculty.h"

Faculty::Faculty(int ID, std::string name, double salary, std::string department, std::string title, std::string researchFocus) : Employee(salary, name, ID, department) {
    setTitle(title);
    setResearchFocus(researchFocus);
}

Faculty::Faculty() {
    setTitle("");
    setResearchFocus("");
}

std::string Faculty::getTitle() const {
    return title;
}

void Faculty::setTitle(std::string title) {
    this->title = title;
}

std::string Faculty::getResearchFocus() const {
    return researchFocus;
}

void Faculty::setResearchFocus(std::string researchFocus) {
    this->researchFocus = researchFocus;
}

std::string Faculty::print() const {
    return
    "Title: " + getTitle() + "\n"
    + "Research Focus: " + getResearchFocus() + "\n"
    + Employee::print();
}

