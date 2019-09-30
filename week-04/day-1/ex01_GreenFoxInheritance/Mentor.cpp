//
// Created by Kemény Bálint on 2019. 09. 30..
//

#include <iostream>
#include "Mentor.h"

Mentor::Mentor() : _level(Level::INTERMEDIATE) {}

Mentor::Mentor(std::string name, int age, Gender gender, Level level) : _level(level) {
    _name = name;
    _age = age;
    _gender = gender;
}

void Mentor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGender() << " " << getLevel() << " mentor."
              << std::endl;
}

void Mentor::getGoal() {
    std::cout << "My goal is: Educate brilliant junior software developers." << std::endl;
}

std::string Mentor::getLevel() {
    switch (_level) {
        case Level::JUNIOR : return "junior";
        case Level::INTERMEDIATE : return "intermediate";
        case Level::SENIOR : return "senior";
        default : return "error";
    }
}
