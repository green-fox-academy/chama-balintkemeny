//
// Created by Kemény Bálint on 2019. 09. 30..
//

#ifndef EX01_GREENFOXINHERITANCE_COHORT_H
#define EX01_GREENFOXINHERITANCE_COHORT_H

#include <string>
#include <vector>
#include "Student.h"
#include "Mentor.h"

class Cohort {
public:
    explicit Cohort(std::string name);

    void addStudent(Student* studentPtr);
    void addMentor(Mentor* mentorPtr);
    void info();

private:
    std::string _name;
    std::vector<Student*> _students;
    std::vector<Mentor*> _mentors;
};


#endif //EX01_GREENFOXINHERITANCE_COHORT_H
