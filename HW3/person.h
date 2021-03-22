#ifndef HW3_PERSON_H
#define HW3_PERSON_H
#include <iostream>

class Person {
    public:
    Person(int, std::string);

    Person();

    int getID() const;

    void setID(int);

    std::string getName() const;

    void setName(std::string);

    virtual std::string print() const;

private:
    int ID;
    std::string name;
};
#endif