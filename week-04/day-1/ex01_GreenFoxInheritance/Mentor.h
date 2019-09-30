//
// Created by Kemény Bálint on 2019. 09. 30..
//

#ifndef EX01_GREENFOXINHERITANCE_MENTOR_H
#define EX01_GREENFOXINHERITANCE_MENTOR_H

#include "Person.h"

class Mentor : public Person {
public:
    Mentor();
    Mentor(std::string name, int age, std::string gender, std::string level);

    void introduce() override;
    void getGoal() override;
private:
    std::string _level;
};


#endif //EX01_GREENFOXINHERITANCE_MENTOR_H
