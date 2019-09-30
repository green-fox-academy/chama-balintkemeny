#include <iostream>
#include "Person.h"

Person::Person() : _name("Jane Doe"), _age(30), _gender(Gender::FEMALE) {}

Person::Person(std::string name, int age, Gender gender) : _name(name), _age(age), _gender(gender) {}

void Person::introduce() {
    std::cout << "Hi, I'm " << _name << ", a " << _age << " year old " << getGender() << std::endl;
}

void Person::getGoal() {
    std::cout << "My goal is: Live for the moment!" << std::endl;
}

std::string Person::getGender() {
    switch (_gender) {
        case Gender::MALE : return "male";
        case Gender::FEMALE : return "female";
        default : return "error";
    }
}
