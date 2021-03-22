#ifndef HW3_FACULTY_H
#define HW3_FACULTY_H
#include <iostream>
#include "employee.h"


class Faculty : public Employee {
public:
    Faculty(int, std::string, double, std::string, std::string, std::string);

    Faculty();

    std::string getTitle() const;

    void setTitle(std::string);

    std::string getResearchFocus() const;

    void setResearchFocus(std::string);

    std::string print() const;

private:
    std::string title;
    std::string researchFocus;
};
#endif
