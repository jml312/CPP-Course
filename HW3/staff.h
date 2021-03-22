#ifndef HW3_STAFF_H
#define HW3_STAFF_H
#include <iostream>
#include "employee.h"

class Staff : public Employee {
public:
    Staff(int, std::string, double, std::string, std::string);

    Staff();

    std::string getTitle() const;

    void setTitle(std::string);

    std::string print() const override;

private:
    std::string title;
};
#endif
