#ifndef HW3_RESEARCH_ASSISTANT_H
#define HW3_RESEARCH_ASSISTANT_H
#include "student.h"
#include "staff.h"

class ResearchAssistant : public Student, public Staff {
public:
    ResearchAssistant(std::string, std::string, std::string, double, int, std::string);

    ResearchAssistant(std::string, std::string, double, int, int, std::string);

    std::string getResearchArea() const;

    void setResearchArea(std::string);

    std::string print() const override;

private:
    std::string researchArea;
};
#endif
