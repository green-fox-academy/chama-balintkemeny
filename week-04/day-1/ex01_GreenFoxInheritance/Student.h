//
// Created by Kemény Bálint on 2019. 09. 30..
//

#ifndef EX01_GREENFOXINHERITANCE_STUDENT_H
#define EX01_GREENFOXINHERITANCE_STUDENT_H

#include "Person.h"

class Student : public Person {
public:
    Student();
    Student(std::string name, int age, std::string gender, std::string previousOrganization);

    void introduce() override;
    void getGoal() override;
    void skipDays(int numberOfDays);

private:
    std::string _previousOrganization;
    int _skippedDays;
};


#endif //EX01_GREENFOXINHERITANCE_STUDENT_H
