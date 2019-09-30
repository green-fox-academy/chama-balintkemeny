//
// Created by Kemény Bálint on 2019. 09. 30..
//

#include "Mentor.h"

Mentor::Mentor() : _level("intermediate") {}

Mentor::Mentor(std::string name, int age, std::string gender, std::string level) : _level(level) {
    _name = name;
    _age = age;
    _gender = gender;
}

void Mentor::introduce() {
    Person::introduce();
}

void Mentor::getGoal() {
    Person::getGoal();
}
