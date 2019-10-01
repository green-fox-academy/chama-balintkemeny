//
// Created by Kemény Bálint on 2019. 10. 01..
//

#ifndef EX03_FLYABLE_ANIMAL_H
#define EX03_FLYABLE_ANIMAL_H

#include <string>

enum class Gender {
    MALE,
    FEMALE
};

class Animal {
public:
    explicit Animal(std::string name);
    std::string getName();
    virtual std::string breed()=0;
protected:
    std::string _name;
    int _age;
    Gender _gender;
    bool _isAlive;
};

#endif //EX03_FLYABLE_ANIMAL_H
