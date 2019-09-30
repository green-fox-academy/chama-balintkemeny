//
// Created by Kemény Bálint on 2019. 09. 30..
//
#include <iostream>
#include "Cohort.h"

Cohort::Cohort(std::string name) : _name(name), _students(), _mentors() {}

void Cohort::addStudent(Student* studentPtr) {
    _students.push_back(studentPtr);
}

void Cohort::addMentor(Mentor* mentorPtr) {
    _mentors.push_back(mentorPtr);
}

void Cohort::info() {
    std::cout << "The " << _name << " cohort has " << _students.size() << " student(s) and " << _mentors.size()
              << " mentor(s)." << std::endl;
}