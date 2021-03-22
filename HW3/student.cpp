#include <iostream>
#include "student.h"

Student::Student(int ID, std::string name, int graduationYear, std::string major, double GPA) : Person(ID, name) {
    setGraduationYear(graduationYear);
    setMajor(major);
    setGPA(GPA);
}

Student::Student() {
    setGraduationYear(0);
    setMajor("");
    setGPA(-1.0);
}

int Student::getGraduationYear() const {
    return graduationYear;
}

void Student::setGraduationYear(int graduationYear) {
    this->graduationYear = graduationYear;
}

std::string Student::getMajor() const {
    return major;
}

void Student::setMajor(std::string major) {
    this->major = major;
}

double Student::getGPA() const {
    return GPA;
}

void Student::setGPA(double GPA) {
    this->GPA = GPA;
}

std::string Student::print() const {
    return
    "Graduation: Year: " + std::to_string(getGraduationYear()) + "\n"
    + "Major: " + getMajor() + "\n"
    + "GPA: " + std::to_string(getGPA()) + "\n"
    + Person::print();
}
