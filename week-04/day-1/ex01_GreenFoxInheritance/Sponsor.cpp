//
// Created by Kemény Bálint on 2019. 09. 30..
//
#include <iostream>
#include "Sponsor.h"

Sponsor::Sponsor() : _company("Google"), _hiredStudents(0) {}
Sponsor::Sponsor(std::string name, int age, Gender gender, std::string company) : _company(company),
                 _hiredStudents(0) {
    _name = name;
    _age = age;
    _gender = gender;
}

void Sponsor::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGender() << " who represents "
              << _company << " and hired " << _hiredStudents << " students so far." << std::endl;
}

void Sponsor::getGoal() {
    std::cout << "My goal is: Hire brilliant junior software developers." << std::endl;
}

void Sponsor::hire() {
    _hiredStudents++;
}
