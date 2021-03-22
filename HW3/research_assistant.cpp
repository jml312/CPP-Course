#include "research_assistant.h"
#include <iostream>

ResearchAssistant::ResearchAssistant(std::string researchArea, std::string title, std::string department, double salary, int ID, std::string name) : Staff(ID, name, salary, department, title) {
    setResearchArea(researchArea);
}

ResearchAssistant::ResearchAssistant(std::string researchArea, std::string major, double GPA, int graduationYear, int ID, std::string name) : Student(ID, name, graduationYear, major, GPA) {
    setResearchArea(researchArea);
}

std::string ResearchAssistant::getResearchArea() const {
    return researchArea;
}

void ResearchAssistant::setResearchArea(std::string researchArea) {
    this->researchArea = researchArea;
}

std::string ResearchAssistant::print() const {
    if (Student::getGPA() != -1 && Staff::getSalary() == 0) {
        return
        "Research Area: " + getResearchArea() + "\n"
        + Student::print();
    }
    else if (Student::getGPA() == -1 && Staff::getSalary() != 0) {
        return
        "Research Area: " + getResearchArea() + "\n"
        + Staff::print();
    }
    else {
        return
        "ERROR -> DEFAULTS IN EITHER BOTH OR NO FIELDS \n\n";
    }
}

