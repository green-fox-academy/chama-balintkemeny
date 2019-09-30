//
// Created by Kemény Bálint on 2019. 09. 30..
//

#ifndef EX01_GREENFOXINHERITANCE_MENTOR_H
#define EX01_GREENFOXINHERITANCE_MENTOR_H

#include "Person.h"

enum class Level {
    JUNIOR,
    INTERMEDIATE,
    SENIOR
};

class Mentor : public Person {
public:
    Mentor();
    Mentor(std::string name, int age, Gender gender, Level level);

    void introduce() override;
    void getGoal() override;
    std::string getLevel();

private:
    Level _level;
};


#endif //EX01_GREENFOXINHERITANCE_MENTOR_H
