#ifndef HW3_STUDENT_H
#define HW3_STUDENT_H
#include <iostream>
#include "person.h"

class Student : public Person {
    public:
    Student(int, std::string, int, std::string, double);

    Student();

    int getGraduationYear() const;

    void setGraduationYear(int);

    std::string getMajor() const;

    void setMajor(std::string);

    double getGPA() const;

    void setGPA(double);

    std::string print() const override;

private:
    int graduationYear;
    std::string major;
    double GPA;
};

#endif
