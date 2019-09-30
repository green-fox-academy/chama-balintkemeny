//
// Created by Kemény Bálint on 2019. 09. 30..
//
#include <iostream>
#include "Student.h"

Student::Student() : _previousOrganization("The School of Life"), _skippedDays(0) {}

Student::Student(std::string name, int age, Gender gender, std::string previousOrganization)
                : _previousOrganization(previousOrganization), _skippedDays(0)
{
    _name = name;
    _age = age;
    _gender = gender;
}

void Student::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGender() << " from " << _previousOrganization
              << " who skipped " << _skippedDays << " days from the course already." << std::endl;
}

void Student::getGoal() {
    std::cout << "My goal is: Be a junior software developer." << std::endl;
}

void Student::skipDays(int numberOfDays) {
    _skippedDays += numberOfDays;
}
